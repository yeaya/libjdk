#ifndef _java_sql_SQLIntegrityConstraintViolationException_h_
#define _java_sql_SQLIntegrityConstraintViolationException_h_
//$ class java.sql.SQLIntegrityConstraintViolationException
//$ extends java.sql.SQLNonTransientException

#include <java/sql/SQLNonTransientException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace sql {

class $export SQLIntegrityConstraintViolationException : public ::java::sql::SQLNonTransientException {
	$class(SQLIntegrityConstraintViolationException, $NO_CLASS_INIT, ::java::sql::SQLNonTransientException)
public:
	SQLIntegrityConstraintViolationException();
	void init$();
	void init$($String* reason);
	void init$($String* reason, $String* SQLState);
	void init$($String* reason, $String* SQLState, int32_t vendorCode);
	void init$($Throwable* cause);
	void init$($String* reason, $Throwable* cause);
	void init$($String* reason, $String* SQLState, $Throwable* cause);
	void init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x6F7C638E72373691;
	SQLIntegrityConstraintViolationException(const SQLIntegrityConstraintViolationException& e);
	virtual void throw$() override;
	inline SQLIntegrityConstraintViolationException* operator ->() {
		return (SQLIntegrityConstraintViolationException*)throwing$;
	}
};

	} // sql
} // java

#endif // _java_sql_SQLIntegrityConstraintViolationException_h_