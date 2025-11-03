#ifndef _java_sql_SQLPermission_h_
#define _java_sql_SQLPermission_h_
//$ class java.sql.SQLPermission
//$ extends java.security.BasicPermission

#include <java/security/BasicPermission.h>

namespace java {
	namespace sql {

class $export SQLPermission : public ::java::security::BasicPermission {
	$class(SQLPermission, $NO_CLASS_INIT, ::java::security::BasicPermission)
public:
	SQLPermission();
	void init$($String* name);
	void init$($String* name, $String* actions);
	static const int64_t serialVersionUID = (int64_t)0xEC067F2FE5FCA919;
};

	} // sql
} // java

#endif // _java_sql_SQLPermission_h_