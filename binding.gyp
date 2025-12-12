{
  "targets": [
    {
      "target_name": "tree_sitter_asciimath_binding",
      "dependencies": [
        "<!(node -p \"require('node-addon-api').targets\"):node_addon_api_except",
      ],
      "include_dirs": [
        "src",
      ],
      "sources": [
        "bindings/node/binding.cc",
        "src/parser.c",
      ],
      "variables": {
        "has_scanner": "<!(node -p \"fs.existsSync('src/scanner.c')\")",
        "rust_lib_dir": "bindings/rust/target/release",
        "rust_lib_name": "tree_sitter_asciimath"
      },
      "conditions": [
        ["has_scanner=='true'", {
          "sources+": ["src/scanner.c"],
        }],
        ["OS!='win'", {
          "cflags_c": [
            "-std=c11",
          ],
          "link_settings": {
            "libraries": [
              "-ldl"
            ]
          }
        }, { # OS == "win"
          "cflags_c": [
            "/std:c11",
            "/utf-8",
          ],
          "link_settings": {
            "libraries": []
          }
        }],
      ],
    }
  ]
}
