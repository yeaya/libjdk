#ifndef _java_sql_Savepoint_h_
#define _java_sql_Savepoint_h_
//$ interface java.sql.Savepoint
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace sql {

class $export Savepoint : public ::java::lang::Object {
	$interface(Savepoint, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getSavepointId() {return 0;}
	virtual $String* getSavepointName() {return nullptr;}
};

	} // sql
} // java

#endif // _java_sql_Savepoint_h_