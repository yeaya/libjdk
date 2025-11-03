#ifndef _java_sql_Struct_h_
#define _java_sql_Struct_h_
//$ interface java.sql.Struct
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace sql {

class $export Struct : public ::java::lang::Object {
	$interface(Struct, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $ObjectArray* getAttributes() {return nullptr;}
	virtual $ObjectArray* getAttributes(::java::util::Map* map) {return nullptr;}
	virtual $String* getSQLTypeName() {return nullptr;}
};

	} // sql
} // java

#endif // _java_sql_Struct_h_