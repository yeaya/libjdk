# libjdk - Java Security JGSS Library

![License](https://img.shields.io/badge/license-GPL%20v2%20with%20Classpath%20Exception-green.svg)
![Platforms](https://img.shields.io/badge/platforms-Windows%20|%20Linux%20|%20macOS-lightgrey.svg)

[**libjdk**](https://github.com/libjdk/libjdk) is a comprehensive C++ implementation of the Java Development Kit (JDK), providing native C++ libraries that mirror the functionality of Java's core libraries and modules. While it provides Java-like APIs, it runs as native C++ code without requiring a Java Virtual Machine.

This library specifically focuses on the Java Security JGSS (Java GSS-API) module, which implements the Generic Security Services (GSS-API) for Java. GSS-API is a standard interface for authentication and security services in distributed systems, commonly used in network protocols like Kerberos.

## Features

- **Java GSS-API Implementation**: Provides native C++ implementations of the GSS-API interfaces, allowing Java applications to use GSS-API for authentication and security services.
- **Cross-platform Support**: Works on Windows, Linux, and macOS, providing consistent behavior across different operating systems.
- **CMake Build System**: Utilizes CMake for easy configuration and building of the library, supporting both manual and automated build processes.