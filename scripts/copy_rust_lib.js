const fs = require('fs');
const path = require('path');
const { execSync } = require('child_process');
const os = require('os');

function copyRustLibrary() {
  console.log('=== Copying Rust library for Node.js binding ===');
  
  // Determine platform-specific library extension
  let libExt;
  let libPrefix;
  let libName;
  switch (process.platform) {
    case 'darwin':
      libExt = '.dylib';
      libPrefix = 'lib';
      libName = 'libtree_sitter_asciimath.dylib';
      break;
    case 'linux':
      libExt = '.so';
      libPrefix = 'lib';
      libName = 'libtree_sitter_asciimath.so';
      break;
    case 'win32':
      libExt = '.dll';
      libPrefix = '';
      libName = 'tree_sitter_asciimath.dll';
      break;
    default:
      throw new Error(`Unsupported platform: ${process.platform}`);
  }
  
  // Paths
  const rustLibDir = path.join(__dirname, '..', 'target/release');
  const rustLibPath = path.join(rustLibDir, libName);
  
  // Check if Rust library exists
  if (!fs.existsSync(rustLibPath)) {
    console.log(`Rust library not found at: ${rustLibPath}`);
    console.log('Building Rust library...');
    
    try {
      execSync('cd ../bindings/rust && cargo build --release', {
        cwd: path.join(__dirname, '..'),
        stdio: 'inherit'
      });
    } catch (error) {
      console.error('Failed to build Rust library:', error.message);
      process.exit(1);
    }
    
    // Check again after building
    if (!fs.existsSync(rustLibPath)) {
      console.error(`Rust library still not found at: ${rustLibPath}`);
      console.error('Please check the build output');
      process.exit(1);
    }
  }
  
  // Create build directory if it doesn't exist
  const buildDir = path.join(__dirname, '..', 'build');
  if (!fs.existsSync(buildDir)) {
    fs.mkdirSync(buildDir, { recursive: true });
  }
  
  // Create Release directory (where node-gyp puts the binding)
  const releaseDir = path.join(buildDir, 'Release');
  if (!fs.existsSync(releaseDir)) {
    fs.mkdirSync(releaseDir, { recursive: true });
  }
  
  // Copy Rust library to build directory
  const destLibPath = path.join(releaseDir, libName);
  console.log(`Copying ${rustLibPath} to ${destLibPath}`);
  
  try {
    fs.copyFileSync(rustLibPath, destLibPath);
    console.log('Successfully copied Rust library');
    
    // On macOS, we need to fix the install name
    if (process.platform === 'darwin') {
      console.log('Fixing install name on macOS...');
      const installName = `@loader_path/${libName}`;
      try {
        execSync(`install_name_tool -id "${installName}" "${destLibPath}"`, {
          cwd: path.join(__dirname, '.'),
          stdio: 'inherit'
        });
        console.log('Install name fixed');
      } catch (error) {
        console.warn('Warning: Could not fix install name:', error.message);
        console.warn('You may need to set DYLD_LIBRARY_PATH at runtime');
      }
    }
    
    // Also copy to the root of the build directory for easier access
    const rootDestPath = path.join(buildDir, libName);
    fs.copyFileSync(rustLibPath, rootDestPath);
    console.log(`Also copied to: ${rootDestPath}`);
    
    // Copy to bindings/node directory for easier testing
    const nodeBindingDir = path.join(__dirname, '..', 'bindings/node');
    const nodeDestPath = path.join(nodeBindingDir, libName);
    fs.copyFileSync(rustLibPath, nodeDestPath);
    console.log(`Also copied to: ${nodeDestPath}`);
    
  } catch (error) {
    console.error('Failed to copy Rust library:', error.message);
    process.exit(1);
  }
  
  console.log('=== Rust library copy completed ===');
}

// Run if this script is executed directly
if (require.main === module) {
  copyRustLibrary();
}

module.exports = { copyRustLibrary };
