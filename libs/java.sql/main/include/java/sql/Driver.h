#ifndef _java_sql_Driver_h_
#define _java_sql_Driver_h_
//$ interface java.sql.Driver
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace sql {
		class Connection;
		class DriverPropertyInfo;
	}
}
namespace java {
	namespace util {
		class Properties;
	}
}
namespace java {
	namespace util {
		namespace logging {
			class Logger;
		}
	}
}

namespace java {
	namespace sql {

class $import Driver : public ::java::lang::Object {
	$interface(Driver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool acceptsURL($String* url) {return false;}
	virtual ::java::sql::Connection* connect($String* url, ::java::util::Properties* info) {return nullptr;}
	virtual int32_t getMajorVersion() {return 0;}
	virtual int32_t getMinorVersion() {return 0;}
	virtual ::java::util::logging::Logger* getParentLogger() {return nullptr;}
	virtual $Array<::java::sql::DriverPropertyInfo>* getPropertyInfo($String* url, ::java::util::Properties* info) {return nullptr;}
	virtual bool jdbcCompliant() {return false;}
};

	} // sql
} // java

#endif // _java_sql_Driver_h_