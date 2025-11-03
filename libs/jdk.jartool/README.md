# libjdk - JDK JAR Tool Library

![License](https://img.shields.io/badge/license-GPL%20v2%20with%20Classpath%20Exception-green.svg)
![Platforms](https://img.shields.io/badge/platforms-Windows%20|%20Linux%20|%20macOS-lightgrey.svg)

[**libjdk**](https://github.com/libjdk/libjdk) is a comprehensive C++ implementation of the Java Development Kit (JDK), providing native C++ libraries that mirror the functionality of Java's core libraries and modules. While it provides Java-like APIs, it runs as native C++ code without requiring a Java Virtual Machine.

## Overview

This project provides a complete C++ implementation of Java's JAR tool functionality, including:

- **JAR Creation**: Create JAR archives from files and directories
- **JAR Extraction**: Extract contents from JAR archives
- **JAR Updating**: Add or update files in existing JAR archives
- **JAR Indexing**: Create index information for JAR archives
- **Manifest Handling**: Create and modify JAR manifest files

## Features

- ✅ **Cross-platform Support**: Windows, Linux, and macOS
- ✅ **CMake Build System**: Modern, portable build configuration
- ✅ **Comprehensive Testing**: Extensive test suite included
- ✅ **OpenJDK Compatible**: Based on OpenJDK implementation
- ✅ **GPL Licensed**: Free software with Classpath exception

## Dependencies

- **java.base**: Core Java functionality

## Project Structure

```
jdk.jartool/
├── main/                   # Main source code
│   ├── classes/            # Implementation classes
│   │   ├── jdk.jartool.cpp # Core implementation
│   │   ├── jdk.jartool.h   # Header file
│   │   └── module-info     # Module information
│   ├── include/            # Public header files
│   └── dependencies.txt    # Module dependencies
├── test/                   # Test suite
│   ├── classes/            # Test classes
│   └── __test__.cpp        # Test runner
├── legal/                  # Legal notices and licenses
└── CMakeLists.txt          # Build configuration
```

## Contributing

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Add tests for new functionality
5. Ensure all tests pass
6. Submit a pull request

## License

This project is licensed under the GNU General Public License v2 with the Classpath exception, allowing linking with proprietary software. See the [LICENSE](LICENSE) file for details.

## Legal Notices

This project includes code from various open source projects. See the [legal/](legal/) directory for detailed licensing information for each component.