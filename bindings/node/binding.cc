#include <napi.h>
#include <string>
#include <cstring>
#include <dlfcn.h>
#include <memory>

typedef struct TSLanguage TSLanguage;
typedef struct FfiString FfiString;

// Function pointers for Rust FFI functions
static FfiString* (*directly_to_latex_ptr)(const char* input) = nullptr;
static void (*free_ffi_string_ptr)(FfiString* str) = nullptr;
static const char* (*ffi_string_data_ptr)(const FfiString* ptr) = nullptr;
static unsigned int (*ffi_string_len_ptr)(const FfiString* ptr) = nullptr;
static TSLanguage* (*tree_sitter_asciimath_ptr)() = nullptr;
static void* (*reexport_tree_sitter_asciimath_ptr)() = nullptr;

// Handle to the Rust library
static void* rust_lib_handle = nullptr;

// Initialize Rust library
static bool init_rust_library() {
    if (rust_lib_handle != nullptr) {
        return true; // Already initialized
    }
    
    // Try to load the Rust library
    const char* lib_names[] = {
        "libtree_sitter_asciimath.dylib",  // macOS
        "libtree_sitter_asciimath.so",     // Linux
        "tree_sitter_asciimath.dll",       // Windows
        nullptr
    };
    
    for (int i = 0; lib_names[i] != nullptr; i++) {
        rust_lib_handle = dlopen(lib_names[i], RTLD_LAZY | RTLD_LOCAL);
        if (rust_lib_handle != nullptr) {
            break;
        }
    }
    
    if (rust_lib_handle == nullptr) {
        // Try to load from various possible locations
        const char* search_paths[] = {
            "./libtree_sitter_asciimath.dylib",
            "./build/Release/libtree_sitter_asciimath.dylib",
            "./build/libtree_sitter_asciimath.dylib",
            "./bindings/node/libtree_sitter_asciimath.dylib",
            "./bindings/rust/target/release/libtree_sitter_asciimath.dylib",
            "./target/release/libtree_sitter_asciimath.dylib",
            "../target/release/libtree_sitter_asciimath.dylib",
            nullptr
        };
        
        for (int i = 0; search_paths[i] != nullptr; i++) {
            rust_lib_handle = dlopen(search_paths[i], RTLD_LAZY | RTLD_LOCAL);
            if (rust_lib_handle != nullptr) {
                break;
            }
        }
    }
    
    if (rust_lib_handle == nullptr) {
        return false;
    }
    
    // Load function pointers
    directly_to_latex_ptr = reinterpret_cast<FfiString*(*)(const char*)>(
        dlsym(rust_lib_handle, "directly_to_latex"));
    
    free_ffi_string_ptr = reinterpret_cast<void(*)(FfiString*)>(
        dlsym(rust_lib_handle, "free_ffi_string"));
    
    ffi_string_data_ptr = reinterpret_cast<const char*(*)(const FfiString*)>(
        dlsym(rust_lib_handle, "ffi_string_data"));
    
    ffi_string_len_ptr = reinterpret_cast<unsigned int(*)(const FfiString*)>(
        dlsym(rust_lib_handle, "ffi_string_len"));
    
    tree_sitter_asciimath_ptr = reinterpret_cast<TSLanguage*(*)()>(
        dlsym(rust_lib_handle, "tree_sitter_asciimath"));
    
    reexport_tree_sitter_asciimath_ptr = reinterpret_cast<void*(*)()>(
        dlsym(rust_lib_handle, "reexport_tree_sitter_asciimath"));
    
    // Check if all required functions were loaded successfully
    // Note: tree_sitter_asciimath_ptr is optional since we have reexport_tree_sitter_asciimath_ptr
    if (!directly_to_latex_ptr || !free_ffi_string_ptr || 
        !ffi_string_data_ptr || !ffi_string_len_ptr || 
        !reexport_tree_sitter_asciimath_ptr) {
        dlclose(rust_lib_handle);
        rust_lib_handle = nullptr;
        return false;
    }
    
    return true;
}

// Cleanup Rust library
static void cleanup_rust_library() {
    if (rust_lib_handle != nullptr) {
        dlclose(rust_lib_handle);
        rust_lib_handle = nullptr;
        directly_to_latex_ptr = nullptr;
        free_ffi_string_ptr = nullptr;
        ffi_string_data_ptr = nullptr;
        ffi_string_len_ptr = nullptr;
        tree_sitter_asciimath_ptr = nullptr;
        reexport_tree_sitter_asciimath_ptr = nullptr;
    }
}

// "tree-sitter", "language" hashed with BLAKE2
const napi_type_tag LANGUAGE_TYPE_TAG = {
    0x8AF2E5212AD58ABF, 0xD5006CAD83ABBA16
};

Napi::String FfiStringToNapiString(Napi::Env env, const FfiString* ffi_str) {
    if (!ffi_str) {
        return Napi::String::New(env, "");
    }
    if (!ffi_string_data_ptr) {
        return Napi::String::New(env, "");
    }
    
    const char* data = ffi_string_data_ptr(ffi_str);
    if (!data) {
        return Napi::String::New(env, "");
    }
    
    unsigned int len = ffi_string_len_ptr ? ffi_string_len_ptr(ffi_str) : 0;
    if (len == 0) {
        return Napi::String::New(env, "");
    }
    
    return Napi::String::New(env, data, len);
}

Napi::Value ToLatex(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    
    if (info.Length() < 1) {
        Napi::TypeError::New(env, "Please provide valid asciimath").ThrowAsJavaScriptException();
        return env.Null();
    }
    
    if (!info[0].IsString()) {
        Napi::TypeError::New(env, "Argument must be string").ThrowAsJavaScriptException();
        return env.Null();
    }
    
    // Initialize Rust library if not already initialized
    if (!init_rust_library()) {
        Napi::Error::New(env, "Failed to load Rust library").ThrowAsJavaScriptException();
        return env.Null();
    }
    
    if (!directly_to_latex_ptr) {
        Napi::Error::New(env, "Rust library not properly initialized").ThrowAsJavaScriptException();
        return env.Null();
    }
    
    std::string input = info[0].As<Napi::String>();
    FfiString* result = directly_to_latex_ptr(input.c_str());
    
    if (!result) {
        return Napi::String::New(env, "");
    }
    
    Napi::String js_result = FfiStringToNapiString(env, result);
    
    if (free_ffi_string_ptr) {
        free_ffi_string_ptr(result);
    }
    
    return js_result;
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    // Initialize Rust library for language function
    if (!init_rust_library()) {
        Napi::Error::New(env, "Failed to load Rust library for tree-sitter language").ThrowAsJavaScriptException();
        return exports;
    }
    
    // Get the language pointer from reexported function
    if (!reexport_tree_sitter_asciimath_ptr) {
        Napi::Error::New(env, "reexport_tree_sitter_asciimath function not found in Rust library").ThrowAsJavaScriptException();
        return exports;
    }
    
    TSLanguage* language_ptr = reinterpret_cast<TSLanguage*>(reexport_tree_sitter_asciimath_ptr());
    
    if (!language_ptr) {
        Napi::Error::New(env, "Failed to get tree-sitter language pointer from Rust library").ThrowAsJavaScriptException();
        return exports;
    }
    
    auto language = Napi::External<TSLanguage>::New(env, language_ptr);
    language.TypeTag(&LANGUAGE_TYPE_TAG);
    exports["language"] = language;
    exports["toLatex"] = Napi::Function::New(env, ToLatex);
    
    // Register cleanup function
    static auto cleanup = []() {
        cleanup_rust_library();
    };
    
    // Note: In a real implementation, you might want to register this cleanup
    // with Node.js's atexit mechanism, but for simplicity we're just defining it
    
    return exports;
}

NODE_API_MODULE(tree_sitter_asciimath_binding, Init)
