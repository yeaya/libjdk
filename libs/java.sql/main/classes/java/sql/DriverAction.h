#ifndef _java_sql_DriverAction_h_
#define _java_sql_DriverAction_h_
//$ interface java.sql.DriverAction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace sql {

class $export DriverAction : public ::java::lang::Object {
	$interface(DriverAction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void deregister() {}
};

	} // sql
} // java

#endif // _java_sql_DriverAction_h_