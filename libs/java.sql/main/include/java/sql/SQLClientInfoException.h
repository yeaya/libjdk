#ifndef _java_sql_SQLClientInfoException_h_
#define _java_sql_SQLClientInfoException_h_
//$ class java.sql.SQLClientInfoException
//$ extends java.sql.SQLException

#include <java/sql/SQLException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace sql {

class $import SQLClientInfoException : public ::java::sql::SQLException {
	$class(SQLClientInfoException, $NO_CLASS_INIT, ::java::sql::SQLException)
public:
	SQLClientInfoException();
	void init$();
	void init$(::java::util::Map* failedProperties);
	void init$(::java::util::Map* failedProperties, $Throwable* cause);
	void init$($String* reason, ::java::util::Map* failedProperties);
	void init$($String* reason, ::java::util::Map* failedProperties, $Throwable* cause);
	void init$($String* reason, $String* SQLState, ::java::util::Map* failedProperties);
	void init$($String* reason, $String* SQLState, ::java::util::Map* failedProperties, $Throwable* cause);
	void init$($String* reason, $String* SQLState, int32_t vendorCode, ::java::util::Map* failedProperties);
	void init$($String* reason, $String* SQLState, int32_t vendorCode, ::java::util::Map* failedProperties, $Throwable* cause);
	virtual ::java::util::Map* getFailedProperties();
	::java::util::Map* failedProperties = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xC40DAED08DB37FF8;
	SQLClientInfoException(const SQLClientInfoException& e);
	virtual void throw$() override;
	inline SQLClientInfoException* operator ->() {
		return (SQLClientInfoException*)throwing$;
	}
};

	} // sql
} // java

#endif // _java_sql_SQLClientInfoException_h_