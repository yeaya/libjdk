#ifndef _java_sql_SQLFeatureNotSupportedException_h_
#define _java_sql_SQLFeatureNotSupportedException_h_
//$ class java.sql.SQLFeatureNotSupportedException
//$ extends java.sql.SQLNonTransientException

#include <java/sql/SQLNonTransientException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace sql {

class $import SQLFeatureNotSupportedException : public ::java::sql::SQLNonTransientException {
	$class(SQLFeatureNotSupportedException, $NO_CLASS_INIT, ::java::sql::SQLNonTransientException)
public:
	SQLFeatureNotSupportedException();
	void init$();
	void init$($String* reason);
	void init$($String* reason, $String* SQLState);
	void init$($String* reason, $String* SQLState, int32_t vendorCode);
	void init$($Throwable* cause);
	void init$($String* reason, $Throwable* cause);
	void init$($String* reason, $String* SQLState, $Throwable* cause);
	void init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xF1C119CD5ABED6ED;
	SQLFeatureNotSupportedException(const SQLFeatureNotSupportedException& e);
	virtual void throw$() override;
	inline SQLFeatureNotSupportedException* operator ->() {
		return (SQLFeatureNotSupportedException*)throwing$;
	}
};

	} // sql
} // java

#endif // _java_sql_SQLFeatureNotSupportedException_h_