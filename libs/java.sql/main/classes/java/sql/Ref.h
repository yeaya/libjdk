#ifndef _java_sql_Ref_h_
#define _java_sql_Ref_h_
//$ interface java.sql.Ref
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace sql {

class $export Ref : public ::java::lang::Object {
	$interface(Ref, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getBaseTypeName() {return nullptr;}
	virtual $Object* getObject(::java::util::Map* map) {return nullptr;}
	virtual $Object* getObject() {return nullptr;}
	virtual void setObject(Object$* value) {}
};

	} // sql
} // java

#endif // _java_sql_Ref_h_