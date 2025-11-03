#ifndef _java_sql_DriverManager$2_h_
#define _java_sql_DriverManager$2_h_
//$ class java.sql.DriverManager$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace sql {

class DriverManager$2 : public ::java::security::PrivilegedAction {
	$class(DriverManager$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	DriverManager$2();
	void init$();
	virtual $Object* run() override;
};

	} // sql
} // java

#endif // _java_sql_DriverManager$2_h_