#ifndef _java_sql_DriverManager$1_h_
#define _java_sql_DriverManager$1_h_
//$ class java.sql.DriverManager$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace sql {

class DriverManager$1 : public ::java::security::PrivilegedAction {
	$class(DriverManager$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	DriverManager$1();
	void init$();
	virtual $Object* run() override;
};

	} // sql
} // java

#endif // _java_sql_DriverManager$1_h_