#ifndef _java_sql_SQLTimeoutException_h_
#define _java_sql_SQLTimeoutException_h_
//$ class java.sql.SQLTimeoutException
//$ extends java.sql.SQLTransientException

#include <java/sql/SQLTransientException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace sql {

class $export SQLTimeoutException : public ::java::sql::SQLTransientException {
	$class(SQLTimeoutException, $NO_CLASS_INIT, ::java::sql::SQLTransientException)
public:
	SQLTimeoutException();
	void init$();
	void init$($String* reason);
	void init$($String* reason, $String* SQLState);
	void init$($String* reason, $String* SQLState, int32_t vendorCode);
	void init$($Throwable* cause);
	void init$($String* reason, $Throwable* cause);
	void init$($String* reason, $String* SQLState, $Throwable* cause);
	void init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xC1BA5D7E8FBC7F3A;
	SQLTimeoutException(const SQLTimeoutException& e);
	virtual void throw$() override;
	inline SQLTimeoutException* operator ->() {
		return (SQLTimeoutException*)throwing$;
	}
};

	} // sql
} // java

#endif // _java_sql_SQLTimeoutException_h_