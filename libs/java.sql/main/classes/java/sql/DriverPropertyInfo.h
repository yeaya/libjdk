#ifndef _java_sql_DriverPropertyInfo_h_
#define _java_sql_DriverPropertyInfo_h_
//$ class java.sql.DriverPropertyInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace sql {

class $export DriverPropertyInfo : public ::java::lang::Object {
	$class(DriverPropertyInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DriverPropertyInfo();
	void init$($String* name, $String* value);
	$String* name = nullptr;
	$String* description = nullptr;
	bool required = false;
	$String* value = nullptr;
	$StringArray* choices = nullptr;
};

	} // sql
} // java

#endif // _java_sql_DriverPropertyInfo_h_