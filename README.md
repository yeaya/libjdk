# libjdk

A comprehensive C++ implementation of the Java Development Kit (JDK), providing native C++ libraries that mirror the functionality of Java's core libraries and modules.

## Overview

libjdk is a complete C++ reimplementation of the Java Development Kit, offering native performance while maintaining compatibility with Java's API design patterns. This project provides C++ libraries that correspond to Java's modular system, allowing developers to leverage Java's well-designed APIs in C++ applications.

## Features

- **Complete JDK Implementation**: Full implementation of Java's core libraries and modules
- **Cross-Platform Support**: Supports Windows, Linux, and macOS
- **Modular Architecture**: Follows Java's module system for clean separation of concerns
- **Native Performance**: C++ implementation provides better performance than JNI
- **Reflection Support**: Complete reflection API implementation for runtime type inspection and manipulation
- **High-Performance Garbage Collection**: Ultra-low latency automatic memory management with sub-millisecond pause times
- **CMake Build System**: Modern, cross-platform build configuration
- **Comprehensive Testing**: Extensive test suites for each module

## Supported Modules

The project includes implementations of the following Java modules:

### Core Modules
- **java.base** - Core Java classes and utilities
- **java.compiler** - Java compiler API
- **java.logging** - Logging framework
- **java.xml** - XML processing
- **java.xml.crypto** - XML cryptography

### Networking & Communication
- **java.net.http** - HTTP client
- **java.rmi** - Remote Method Invocation
- **java.naming** - Naming and directory services
- **java.security.sasl** - SASL authentication
- **java.security.jgss** - Generic Security Services

### Database & Transactions
- **java.sql** - Database connectivity
- **java.sql.rowset** - RowSet implementations
- **java.transaction.xa** - XA transaction support

### Desktop & UI
- **java.desktop** - Desktop applications (Windows only)
- **java.datatransfer** - Data transfer operations
- **java.prefs** - User preferences

### Management & Monitoring
- **java.management** - Management and monitoring
- **java.management.rmi** - RMI-based management
- **java.instrument** - Java instrumentation

### Additional Modules
- **java.scripting** - Scripting engine
- **jdk.compiler** - JDK compiler tools
- **jdk.httpserver** - HTTP server
- **jdk.charsets** - Character set support
- **jdk.localedata** - Locale data
- **jdk.net** - Network utilities
- **jdk.unsupported** - Unsupported APIs
- **jdk.zipfs** - ZIP file system
- **java.se** - Java SE platform (Windows only)

## Core Runtime Features

### Reflection Support

libjdk provides comprehensive reflection capabilities that allow runtime inspection and manipulation of classes, methods, fields, and annotations:

- **Class Introspection**: Get class information, superclasses, interfaces, and modifiers
- **Method Reflection**: Invoke methods dynamically, inspect method signatures and annotations
- **Field Access**: Read and modify field values, including private fields
- **Constructor Reflection**: Create object instances using constructor reflection
- **Annotation Processing**: Access and process runtime annotations
- **Generic Type Information**: Full support for Java generics and type parameters
- **Proxy Generation**: Dynamic proxy creation for interface implementations

### Garbage Collection

libjdk implements high-performance, low-latency automatic memory management:

- **Ultra-Low Latency**: Sub-millisecond pause times for real-time applications
- **High Throughput**: Optimized for maximum application performance
- **Predictable Pauses**: Bounded pause times for consistent application behavior
- **Memory Efficiency**: Advanced algorithms for optimal memory utilization
- **Automatic Memory Management**: No manual memory allocation/deallocation required
- **Memory Monitoring**: Built-in tools for monitoring memory usage and GC performance
- **Weak References**: Support for weak, soft, and phantom references
- **Finalization**: Automatic cleanup of resources when objects become unreachable

#### Performance Characteristics

- **Pause Time**: < 1ms for most operations
- **Throughput**: > 95% application time utilization
- **Scalability**: Efficient handling of large heaps (GB+)
- **Real-time Ready**: Suitable for latency-sensitive applications

## Requirements

- **CMake**: Version 3.30 or higher
- **C++ Compiler**: Supporting C++17 or later
- **Platform Support**:
  - Windows (x86_64)
  - Linux (x86_64)
  - macOS (x86_64, aarch64)

## Building

### Basic Build

```bash
cd ..
mkdir build
cd build
cmake ../libjdk -DCMAKE_BUILD_TYPE=Release
cmake --build .
```

### Build Options

- `BUILD_SHARED_LIB`: Build shared libraries (default: ON)
- `BUILD_TEST`: Build test suites (default: ON)
- `INSTALL_TO_REPO`: Install to jcpp repository (default: OFF)
- `ENABLE_NC`: Enable null check (default: OFF)

### Parallel Build

```bash
cd ..
mkdir build
cd build
cmake ../libjdk -DJ=8
cmake --build .
```

## Installation

### Standard Installation

```bash
cd ../build
cmake ../libjdk
cmake --build . --target install
```

### Repository Installation

```bash
cd ../build
cmake -DINSTALL_TO_REPO=ON ../libjdk
cmake --build . --config Release --target install
```

## Packaging with CPack

libjdk supports multiple packaging formats through CPack for easy distribution:

### Supported Package Formats

- **Windows**: ZIP archives
- **Linux**: TGZ (tar.gz) archives  
- **macOS**: TGZ (tar.gz) archives

### Creating Packages

```bash
# Build and create package
cd ../build
cmake --build . --target package

# Create source package
cmake --build . --target package_source

# Create specific package type
cpack -G ZIP    # Windows ZIP
cpack -G TGZ    # Linux/macOS tar.gz
```

### Package Naming Convention

Packages are automatically named using the pattern:
```
{PROJECT_NAME}-{VERSION}-{OS}-{ARCH}.{EXT}
```

Examples:
- `libjdk-17.35-windows-x86_64.zip`
- `libjdk-17.35-linux-x86_64.tgz`
- `libjdk-17.35-macos-aarch64.tgz`

### Package Contents

Each package includes:
- **Libraries**: Shared/static libraries for all modules
- **Headers**: C++ header files for API usage
- **Test Suites**: Complete test suites for validation
- **Legal Notices**: License and attribution information

### Repository Packages

For repository installation, packages are created with `.repo` extension:
```bash
cd ../build
cmake -DINSTALL_TO_REPO=ON ../libjdk
cmake --build . --target package
# Creates: libjdk-17.35-windows-x86_64.repo
```

## Project Structure

```
libjdk/
├── CMakeLists.txt          # Main build configuration
├── libs/                   # Module implementations
│   ├── java.base/         # Core Java functionality
│   ├── java.compiler/     # Compiler API
│   ├── java.logging/      # Logging framework
│   └── ...                # Other modules
├── LICENSE                 # GPL v2 license with the Classpath Exception
└── README.md              # This file
```

Each module follows a consistent structure:
- `main/` - Source code implementation
- `test/` - Test suites
- `legal/` - Legal notices and attributions
- `CMakeLists.txt` - Module build configuration
- `README.md` - Module documentation

## Usage

After building and installing, you can use the libraries in your C++ projects:

```cpp
#include <jcpp.h>

int main() {
	$System::init();
	try {
		$System::out->println("Hello, libjdk!"_s);
	} catch ($Throwable&) {
		$var($Throwable, e, $catch());
		e->printStackTrace();
        return 1;
	}
	$System::deinit();
	return 0;
}
```

## Contributing

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Add tests for new functionality
5. Ensure all tests pass
6. Submit a pull request

## License

This project is licensed under the GNU General Public License v2.0 with the Classpath Exception. See the [LICENSE](LICENSE) file for details.

## Acknowledgments

This project is based on the OpenJDK source code and follows Java's API design principles. Special thanks to the OpenJDK community for their excellent work on the Java platform.

## Version

Current version: 17.35

## Support

For questions, issues, or contributions, please refer to the project's issue tracker or contact the maintainers.