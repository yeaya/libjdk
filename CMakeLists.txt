cmake_minimum_required(VERSION 3.23)

set(JCPP_PROJECT_NAME "libjdk")
set(JCPP_PROJECT_VERSION "17.35")
set(JCPP_PROJECT_FULL_NAME ${JCPP_PROJECT_NAME})

project(${JCPP_PROJECT_NAME} C CXX)

if(CMAKE_SYSTEM_NAME MATCHES "Linux")
	set(JCPP_OS "linux")
elseif(CMAKE_SYSTEM_NAME MATCHES "Darwin")
	set(JCPP_OS "macos")
elseif(CMAKE_SYSTEM_NAME MATCHES "Windows")
	set(JCPP_OS "windows")
else()
	message(WARNING "Unknown system name:${CMAKE_SYSTEM_NAME}")
endif()
message(STATUS "CMAKE_SYSTEM_NAME:${CMAKE_SYSTEM_NAME}")
message(STATUS "JCPP_OS:${JCPP_OS}")

if(CMAKE_SYSTEM_PROCESSOR MATCHES "^(aarch64|arm64|ARM64)")
	set(JCPP_ARCH "aarch64")
elseif(CMAKE_SYSTEM_PROCESSOR MATCHES "^(x86_64|AMD64)")
	set(JCPP_ARCH "x86_64")
else()
	message(WARNING "Unknown processor:${CMAKE_SYSTEM_PROCESSOR}")
endif()
message(STATUS "CMAKE_SYSTEM_PROCESSOR:${CMAKE_SYSTEM_PROCESSOR}")
message(STATUS "JCPP_ARCH:${JCPP_ARCH}")

option(BUILD_SHARED_LIB "Build shared lib" ON)
option(BUILD_TEST "Build test" ON)
option(INSTALL_TO_REPO "Install to jcpp repository, {JCPP_REPOSITORY_ROOT} or {JCPP_HOME}/repository" OFF)
option(ENABLE_NC "Enable NC(nullcheck)" OFF)

if(BUILD_SHARED_LIB)
	message(STATUS "build shared lib")
else()
	message(STATUS "build static lib")
endif()

if(BUILD_TEST)
	message(STATUS "build test")
endif()

if(INSTALL_TO_REPO)
	message(STATUS "Install to jcpp repository, {JCPP_REPOSITORY_ROOT} or {JCPP_HOME}/repository")
endif()

if(ENABLE_NC)
	message(STATUS "enable NC(nullcheck)")
endif()

if(NOT JCPP_REPOSITORY_ROOT)
	if(NOT JCPP_HOME)
		set(JCPP_HOME "$ENV{JCPP_HOME}")
		if(NOT JCPP_HOME)
			if(WIN32)
				set(JCPP_HOME "$ENV{HOMEDRIVE}$ENV{HOMEPATH}/jcpp")
			else()
				set(JCPP_HOME "$ENV{HOME}/jcpp")
			endif()
		endif()
	endif()
	get_filename_component(JCPP_HOME "${JCPP_HOME}" ABSOLUTE)
	cmake_path(SET JCPP_HOME "${JCPP_HOME}")
	set(JCPP_REPOSITORY_ROOT "${JCPP_HOME}/repository")
else()
	get_filename_component(JCPP_REPOSITORY_ROOT "${JCPP_REPOSITORY_ROOT}" ABSOLUTE)
	cmake_path(SET JCPP_REPOSITORY_ROOT "${JCPP_REPOSITORY_ROOT}")
endif()
message(STATUS "JCPP_REPOSITORY_ROOT:" ${JCPP_REPOSITORY_ROOT})

if(INSTALL_TO_REPO)
	set(CMAKE_INSTALL_PREFIX ${JCPP_REPOSITORY_ROOT})
endif()
message(STATUS "CMAKE_INSTALL_PREFIX:" ${CMAKE_INSTALL_PREFIX} " INSTALL_TO_REPO:" ${INSTALL_TO_REPO})

if(NOT CMAKE_BUILD_TYPE MATCHES "Debug")
	set(CMAKE_BUILD_TYPE "Release")
endif()

if(NOT J)
#	set(J 1)
endif()
message(STATUS "J:" ${J})
message(STATUS "CMAKE_GENERATOR:" ${CMAKE_GENERATOR})

set(tmpJcppHome ${CMAKE_BINARY_DIR}/tmpJcppHome)
set(tmpInstall ${CMAKE_BINARY_DIR}/tmpInstall)

macro(addLib libName)
	set(depends ${ARGN})
	set(libSrc ${CMAKE_CURRENT_SOURCE_DIR}/libs/${libName})
	set(libBin ${CMAKE_BINARY_DIR}/${libName})
#	message(STATUS ${libName} " src:" ${libSrc} " bin:" ${libBin})

	set(libConfigure ${CMAKE_COMMAND} -S ${libSrc} -B ${libBin})
	set(libInstall ${CMAKE_COMMAND} --build ${libBin})
	set(libConfigure ${libConfigure} -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE})
	set(libInstall ${libInstall} --config ${CMAKE_BUILD_TYPE})
	if(CMAKE_GENERATOR)
		set(libConfigure ${libConfigure} -G "${CMAKE_GENERATOR}")
	endif()
	if(J)
		set(libInstall ${libInstall} -j ${J})
	endif()
	set(libInstall ${libInstall} --target install)
	if(BUILD_SHARED_LIB)
		set(libConfigure ${libConfigure} -DBUILD_SHARED_LIB=ON)
	else()
		set(libConfigure ${libConfigure} -DBUILD_SHARED_LIB=OFF)
	endif()
	if(ENABLE_NC)
		set(libConfigure ${libConfigure} -DENABLE_NC=ON)
	else()
		set(libConfigure ${libConfigure} -DENABLE_NC=OFF)
	endif()
	if(BUILD_TEST)
		set(libConfigure ${libConfigure} -DBUILD_TEST=ON)
	else()
		set(libConfigure ${libConfigure} -DBUILD_TEST=OFF)
	endif()
	set(libConfigure ${libConfigure} -DJCPP_HOME=${tmpJcppHome} -DCMAKE_INSTALL_PREFIX=${tmpInstall})

	if(INSTALL_TO_REPO)
		add_custom_target(${libName} ALL
			COMMAND ${libConfigure} -DINSTALL_TO_REPO=ON
			COMMAND ${libInstall}
		)
	else()
		add_custom_target(${libName} ALL
			COMMAND ${libConfigure} -DINSTALL_TO_REPO=ON
			COMMAND ${libInstall}
			COMMAND ${libConfigure} -DINSTALL_TO_REPO=OFF
			COMMAND ${libInstall}
		)
	endif()

	if(depends)
		add_dependencies(${libName} ${depends})
	endif()
endmacro()

addLib(java.base)

addLib(java.logging java.base)

addLib(java.xml java.base)

addLib(java.xml.crypto java.logging java.xml)

addLib(java.compiler java.base)

addLib(jdk.jartool java.base)

addLib(jdk.zipfs java.base)

addLib(jdk.compiler java.compiler jdk.zipfs)

addLib(java.instrument java.base)

addLib(java.rmi java.logging)

addLib(java.security.sasl java.logging)

addLib(java.naming java.security.sasl java.logging)

addLib(java.security.jgss java.naming java.security.sasl java.logging)
	
addLib(java.prefs java.xml)

addLib(jdk.unsupported java.base)

addLib(java.management java.base)

addLib(java.management.rmi java.naming java.management java.rmi java.security.sasl java.logging)

addLib(java.transaction.xa java.base)

addLib(java.sql java.logging java.transaction.xa java.xml)

addLib(java.sql.rowset java.sql java.logging java.naming java.security.sasl java.transaction.xa java.xml)

addLib(java.datatransfer java.base)

addLib(jdk.httpserver java.base)

if(JCPP_OS MATCHES "windows")
	# java.logging jdk.httpserver for test
	addLib(java.desktop java.prefs java.datatransfer java.xml java.logging jdk.httpserver)
endif()

addLib(jdk.charsets java.base)

addLib(java.net.http java.base)

addLib(java.scripting java.base)

if(JCPP_OS MATCHES "windows")
	addLib(java.se
		java.compiler
		java.datatransfer
		java.desktop
		java.instrument
		java.logging
		java.management
		java.management.rmi
		java.naming
		java.net.http
		java.prefs
		java.rmi
		java.scripting
		java.security.jgss
		java.security.sasl
		java.sql
		java.sql.rowset
		java.transaction.xa
		java.xml
		java.xml.crypto
	)
endif()

# java.net.http jdk.httpserver for test
addLib(jdk.net java.base java.net.http jdk.httpserver)

addLib(jdk.localedata java.base)

if(INSTALL_TO_REPO)
	install(
		DIRECTORY "${tmpJcppHome}/repository/"
		DESTINATION "."
	)
else()
	install(
		DIRECTORY "${tmpInstall}/"
		DESTINATION "."
	)
	if(CMAKE_BUILD_TYPE MATCHES "Debug")
		set(CMAKE_INSTALL_DEBUG_LIBRARIES_ONLY "ON")
	endif()
	include(InstallRequiredSystemLibraries)
endif()

if(NOT PACKAGE_NAME)
	set(PACKAGE_NAME "${JCPP_PROJECT_FULL_NAME}")
endif()
set(CPACK_PACKAGE_NAME "${PACKAGE_NAME}")
if(NOT PACKAGE_VERSION)
	set(PACKAGE_VERSION "${JCPP_PROJECT_VERSION}")
endif()
set(CPACK_PACKAGE_VERSION "${PACKAGE_VERSION}")
set(CPACK_PACKAGE_FILE_NAME ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}-${JCPP_OS}-${JCPP_ARCH})
if(INSTALL_TO_REPO)
	set(CPACK_PACKAGE_FILE_NAME "${CPACK_PACKAGE_FILE_NAME}.repo")
endif()
set(CPACK_SOURCE_PACKAGE_FILE_NAME "${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}")
if(JCPP_OS MATCHES "windows")
	set(CPACK_GENERATOR "ZIP")
	set(CPACK_SOURCE_GENERATOR "ZIP")
else()
	set(CPACK_GENERATOR "TGZ")
	set(CPACK_SOURCE_GENERATOR "TGZ")
endif()
include(CPack)