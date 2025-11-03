# libjdk - Java SE Library

![License](https://img.shields.io/badge/license-GPL%20v2%20with%20Classpath%20Exception-green.svg)
![Platforms](https://img.shields.io/badge/platforms-Windows%20|%20Linux%20|%20macOS-lightgrey.svg)

[**libjdk**](https://github.com/libjdk/libjdk) is a comprehensive C++ implementation of the Java Development Kit (JDK), providing native C++ libraries that mirror the functionality of Java's core libraries and modules. While it provides Java-like APIs, it runs as native C++ code without requiring a Java Virtual Machine.

## Overview

This project provides a comprehensive C++ implementation of the Java SE platform, including:

- **Core Java Functionality**: Language features, collections, I/O, concurrency
- **Desktop Integration**: AWT, Swing, accessibility
- **Networking**: HTTP, sockets, RMI
- **Security**: Cryptography, authentication, access control
- **Database Access**: JDBC, SQL
- **XML Processing**: Parsing, transformation, validation
- **Management**: JMX, monitoring, instrumentation

## Features

- ✅ **Cross-platform Support**: Windows, Linux, and macOS
- ✅ **CMake Build System**: Modern, portable build configuration
- ✅ **Shared/Static Libraries**: Flexible linking options
- ✅ **Comprehensive Testing**: Extensive test suite included
- ✅ **OpenJDK Compatible**: Based on OpenJDK 17.35
- ✅ **GPL Licensed**: Free software with Classpath exception

## Dependencies

This module aggregates the following required modules:

- **java.base**: Core Java functionality
- **java.compiler**: Compiler API support
- **java.datatransfer**: Data transfer services
- **java.desktop**: Desktop integration
- **java.instrument**: Instrumentation services
- **java.logging**: Logging framework
- **java.management**: JMX management
- **java.management.rmi**: Remote JMX management
- **java.naming**: JNDI naming services
- **java.net.http**: HTTP client
- **java.prefs**: Preferences API
- **java.rmi**: Remote Method Invocation
- **java.scripting**: Scripting languages support
- **java.security.jgss**: GSS-API security
- **java.security.sasl**: SASL authentication
- **java.sql**: Database connectivity
- **java.sql.rowset**: JDBC RowSet
- **java.transaction.xa**: Distributed transactions
- **java.xml**: XML processing
- **java.xml.crypto**: XML cryptography

## Project Structure

```
java.se/
├── main/                   # Main source code
│   ├── classes/            # Java class implementations
│   └── dependencies.txt    # Module dependencies
├── test/                   # Test suite
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