#ifndef _java_sql_SQLNonTransientConnectionException_h_
#define _java_sql_SQLNonTransientConnectionException_h_
//$ class java.sql.SQLNonTransientConnectionException
//$ extends java.sql.SQLNonTransientException

#include <java/sql/SQLNonTransientException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace sql {

class $export SQLNonTransientConnectionException : public ::java::sql::SQLNonTransientException {
	$class(SQLNonTransientConnectionException, $NO_CLASS_INIT, ::java::sql::SQLNonTransientException)
public:
	SQLNonTransientConnectionException();
	void init$();
	void init$($String* reason);
	void init$($String* reason, $String* SQLState);
	void init$($String* reason, $String* SQLState, int32_t vendorCode);
	void init$($Throwable* cause);
	void init$($String* reason, $Throwable* cause);
	void init$($String* reason, $String* SQLState, $Throwable* cause);
	void init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xAEC863018BE54954;
	SQLNonTransientConnectionException(const SQLNonTransientConnectionException& e);
	virtual void throw$() override;
	inline SQLNonTransientConnectionException* operator ->() {
		return (SQLNonTransientConnectionException*)throwing$;
	}
};

	} // sql
} // java

#endif // _java_sql_SQLNonTransientConnectionException_h_