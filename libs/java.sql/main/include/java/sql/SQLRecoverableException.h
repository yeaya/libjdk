#ifndef _java_sql_SQLRecoverableException_h_
#define _java_sql_SQLRecoverableException_h_
//$ class java.sql.SQLRecoverableException
//$ extends java.sql.SQLException

#include <java/sql/SQLException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace sql {

class $import SQLRecoverableException : public ::java::sql::SQLException {
	$class(SQLRecoverableException, $NO_CLASS_INIT, ::java::sql::SQLException)
public:
	SQLRecoverableException();
	void init$();
	void init$($String* reason);
	void init$($String* reason, $String* SQLState);
	void init$($String* reason, $String* SQLState, int32_t vendorCode);
	void init$($Throwable* cause);
	void init$($String* reason, $Throwable* cause);
	void init$($String* reason, $String* SQLState, $Throwable* cause);
	void init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xc67c2e6ef957e545;
	SQLRecoverableException(const SQLRecoverableException& e);
	virtual void throw$() override;
	inline SQLRecoverableException* operator ->() const {
		return (SQLRecoverableException*)throwing$;
	}
	inline operator SQLRecoverableException*() const {
		return (SQLRecoverableException*)throwing$;
	}
};

	} // sql
} // java

#endif // _java_sql_SQLRecoverableException_h_