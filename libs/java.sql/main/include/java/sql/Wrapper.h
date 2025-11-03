#ifndef _java_sql_Wrapper_h_
#define _java_sql_Wrapper_h_
//$ interface java.sql.Wrapper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace sql {

class $import Wrapper : public ::java::lang::Object {
	$interface(Wrapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool isWrapperFor($Class* iface) {return false;}
	virtual $Object* unwrap($Class* iface) {return nullptr;}
};

	} // sql
} // java

#endif // _java_sql_Wrapper_h_