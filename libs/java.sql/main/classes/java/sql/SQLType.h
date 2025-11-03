#ifndef _java_sql_SQLType_h_
#define _java_sql_SQLType_h_
//$ interface java.sql.SQLType
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Integer;
	}
}

namespace java {
	namespace sql {

class $export SQLType : public ::java::lang::Object {
	$interface(SQLType, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getName() {return nullptr;}
	virtual $String* getVendor() {return nullptr;}
	virtual ::java::lang::Integer* getVendorTypeNumber() {return nullptr;}
};

	} // sql
} // java

#endif // _java_sql_SQLType_h_