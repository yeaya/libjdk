#ifndef _java_sql_SQLWarning_h_
#define _java_sql_SQLWarning_h_
//$ class java.sql.SQLWarning
//$ extends java.sql.SQLException

#include <java/sql/SQLException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace sql {

class $import SQLWarning : public ::java::sql::SQLException {
	$class(SQLWarning, $NO_CLASS_INIT, ::java::sql::SQLException)
public:
	SQLWarning();
	void init$($String* reason, $String* SQLState, int32_t vendorCode);
	void init$($String* reason, $String* SQLState);
	void init$($String* reason);
	void init$();
	void init$($Throwable* cause);
	void init$($String* reason, $Throwable* cause);
	void init$($String* reason, $String* SQLState, $Throwable* cause);
	void init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause);
	virtual ::java::sql::SQLWarning* getNextWarning();
	virtual void setNextWarning(::java::sql::SQLWarning* w);
	static const int64_t serialVersionUID = (int64_t)0x365D2D0AA3E484D8;
	SQLWarning(const SQLWarning& e);
	virtual void throw$() override;
	inline SQLWarning* operator ->() {
		return (SQLWarning*)throwing$;
	}
};

	} // sql
} // java

#endif // _java_sql_SQLWarning_h_