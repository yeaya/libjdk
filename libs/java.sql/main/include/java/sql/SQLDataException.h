#ifndef _java_sql_SQLDataException_h_
#define _java_sql_SQLDataException_h_
//$ class java.sql.SQLDataException
//$ extends java.sql.SQLNonTransientException

#include <java/sql/SQLNonTransientException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace sql {

class $import SQLDataException : public ::java::sql::SQLNonTransientException {
	$class(SQLDataException, $NO_CLASS_INIT, ::java::sql::SQLNonTransientException)
public:
	SQLDataException();
	void init$();
	void init$($String* reason);
	void init$($String* reason, $String* SQLState);
	void init$($String* reason, $String* SQLState, int32_t vendorCode);
	void init$($Throwable* cause);
	void init$($String* reason, $Throwable* cause);
	void init$($String* reason, $String* SQLState, $Throwable* cause);
	void init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xA064EADFE28C84D8;
	SQLDataException(const SQLDataException& e);
	virtual void throw$() override;
	inline SQLDataException* operator ->() {
		return (SQLDataException*)throwing$;
	}
};

	} // sql
} // java

#endif // _java_sql_SQLDataException_h_