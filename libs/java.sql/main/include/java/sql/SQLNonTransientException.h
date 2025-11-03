#ifndef _java_sql_SQLNonTransientException_h_
#define _java_sql_SQLNonTransientException_h_
//$ class java.sql.SQLNonTransientException
//$ extends java.sql.SQLException

#include <java/sql/SQLException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace sql {

class $import SQLNonTransientException : public ::java::sql::SQLException {
	$class(SQLNonTransientException, $NO_CLASS_INIT, ::java::sql::SQLException)
public:
	SQLNonTransientException();
	void init$();
	void init$($String* reason);
	void init$($String* reason, $String* SQLState);
	void init$($String* reason, $String* SQLState, int32_t vendorCode);
	void init$($Throwable* cause);
	void init$($String* reason, $Throwable* cause);
	void init$($String* reason, $String* SQLState, $Throwable* cause);
	void init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x81A6BC0A77F3D17D;
	SQLNonTransientException(const SQLNonTransientException& e);
	virtual void throw$() override;
	inline SQLNonTransientException* operator ->() {
		return (SQLNonTransientException*)throwing$;
	}
};

	} // sql
} // java

#endif // _java_sql_SQLNonTransientException_h_