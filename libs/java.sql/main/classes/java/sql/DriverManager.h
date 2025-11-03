#ifndef _java_sql_DriverManager_h_
#define _java_sql_DriverManager_h_
//$ class java.sql.DriverManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEREGISTER_DRIVER_PERMISSION")
#undef DEREGISTER_DRIVER_PERMISSION
#pragma push_macro("JDBC_DRIVERS_PROPERTY")
#undef JDBC_DRIVERS_PROPERTY
#pragma push_macro("SET_LOG_PERMISSION")
#undef SET_LOG_PERMISSION

namespace java {
	namespace io {
		class PrintStream;
		class PrintWriter;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace sql {
		class Connection;
		class Driver;
		class DriverAction;
		class SQLPermission;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class List;
		class Properties;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CopyOnWriteArrayList;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace sql {

class $export DriverManager : public ::java::lang::Object {
	$class(DriverManager, 0, ::java::lang::Object)
public:
	DriverManager();
	void init$();
	static void deregisterDriver(::java::sql::Driver* driver);
	static ::java::util::stream::Stream* drivers();
	static void ensureDriversInitialized();
	static ::java::sql::Connection* getConnection($String* url, ::java::util::Properties* info);
	static ::java::sql::Connection* getConnection($String* url, $String* user, $String* password);
	static ::java::sql::Connection* getConnection($String* url);
	static ::java::sql::Connection* getConnection($String* url, ::java::util::Properties* info, $Class* caller);
	static ::java::sql::Driver* getDriver($String* url);
	static ::java::util::Enumeration* getDrivers();
	static ::java::util::List* getDrivers($Class* callerClass);
	static ::java::io::PrintStream* getLogStream();
	static ::java::io::PrintWriter* getLogWriter();
	static int32_t getLoginTimeout();
	static bool isDriverAllowed(::java::sql::Driver* driver, $Class* caller);
	static bool isDriverAllowed(::java::sql::Driver* driver, ::java::lang::ClassLoader* classLoader);
	static void println($String* message);
	static void registerDriver(::java::sql::Driver* driver);
	static void registerDriver(::java::sql::Driver* driver, ::java::sql::DriverAction* da);
	static void setLogStream(::java::io::PrintStream* out);
	static void setLogWriter(::java::io::PrintWriter* out);
	static void setLoginTimeout(int32_t seconds);
	static ::java::util::concurrent::CopyOnWriteArrayList* registeredDrivers;
	static $volatile(int32_t) loginTimeout;
	static $volatile(::java::io::PrintWriter*) logWriter;
	static $volatile(::java::io::PrintStream*) logStream;
	static $Object* logSync;
	static $Object* lockForInitDrivers;
	static $volatile(bool) driversInitialized;
	static $String* JDBC_DRIVERS_PROPERTY;
	static ::java::sql::SQLPermission* SET_LOG_PERMISSION;
	static ::java::sql::SQLPermission* DEREGISTER_DRIVER_PERMISSION;
};

	} // sql
} // java

#pragma pop_macro("DEREGISTER_DRIVER_PERMISSION")
#pragma pop_macro("JDBC_DRIVERS_PROPERTY")
#pragma pop_macro("SET_LOG_PERMISSION")

#endif // _java_sql_DriverManager_h_