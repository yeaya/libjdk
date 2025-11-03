#ifndef _java_sql_SQLInvalidAuthorizationSpecException_h_
#define _java_sql_SQLInvalidAuthorizationSpecException_h_
//$ class java.sql.SQLInvalidAuthorizationSpecException
//$ extends java.sql.SQLNonTransientException

#include <java/sql/SQLNonTransientException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace sql {

class $import SQLInvalidAuthorizationSpecException : public ::java::sql::SQLNonTransientException {
	$class(SQLInvalidAuthorizationSpecException, $NO_CLASS_INIT, ::java::sql::SQLNonTransientException)
public:
	SQLInvalidAuthorizationSpecException();
	void init$();
	void init$($String* reason);
	void init$($String* reason, $String* SQLState);
	void init$($String* reason, $String* SQLState, int32_t vendorCode);
	void init$($Throwable* cause);
	void init$($String* reason, $Throwable* cause);
	void init$($String* reason, $String* SQLState, $Throwable* cause);
	void init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xFF1C409D46A31D16;
	SQLInvalidAuthorizationSpecException(const SQLInvalidAuthorizationSpecException& e);
	virtual void throw$() override;
	inline SQLInvalidAuthorizationSpecException* operator ->() {
		return (SQLInvalidAuthorizationSpecException*)throwing$;
	}
};

	} // sql
} // java

#endif // _java_sql_SQLInvalidAuthorizationSpecException_h_