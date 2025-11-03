#ifndef _java_sql_SQLTransientConnectionException_h_
#define _java_sql_SQLTransientConnectionException_h_
//$ class java.sql.SQLTransientConnectionException
//$ extends java.sql.SQLTransientException

#include <java/sql/SQLTransientException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace sql {

class $export SQLTransientConnectionException : public ::java::sql::SQLTransientException {
	$class(SQLTransientConnectionException, $NO_CLASS_INIT, ::java::sql::SQLTransientException)
public:
	SQLTransientConnectionException();
	void init$();
	void init$($String* reason);
	void init$($String* reason, $String* SQLState);
	void init$($String* reason, $String* SQLState, int32_t vendorCode);
	void init$($Throwable* cause);
	void init$($String* reason, $Throwable* cause);
	void init$($String* reason, $String* SQLState, $Throwable* cause);
	void init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xDD069BE05C517820;
	SQLTransientConnectionException(const SQLTransientConnectionException& e);
	virtual void throw$() override;
	inline SQLTransientConnectionException* operator ->() {
		return (SQLTransientConnectionException*)throwing$;
	}
};

	} // sql
} // java

#endif // _java_sql_SQLTransientConnectionException_h_