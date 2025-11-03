#ifndef _java_sql_SQLTransactionRollbackException_h_
#define _java_sql_SQLTransactionRollbackException_h_
//$ class java.sql.SQLTransactionRollbackException
//$ extends java.sql.SQLTransientException

#include <java/sql/SQLTransientException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace sql {

class $export SQLTransactionRollbackException : public ::java::sql::SQLTransientException {
	$class(SQLTransactionRollbackException, $NO_CLASS_INIT, ::java::sql::SQLTransientException)
public:
	SQLTransactionRollbackException();
	void init$();
	void init$($String* reason);
	void init$($String* reason, $String* SQLState);
	void init$($String* reason, $String* SQLState, int32_t vendorCode);
	void init$($Throwable* cause);
	void init$($String* reason, $Throwable* cause);
	void init$($String* reason, $String* SQLState, $Throwable* cause);
	void init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x48CFF46D4BD5DEED;
	SQLTransactionRollbackException(const SQLTransactionRollbackException& e);
	virtual void throw$() override;
	inline SQLTransactionRollbackException* operator ->() {
		return (SQLTransactionRollbackException*)throwing$;
	}
};

	} // sql
} // java

#endif // _java_sql_SQLTransactionRollbackException_h_