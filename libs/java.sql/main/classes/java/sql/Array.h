#ifndef _java_sql_Array_h_
#define _java_sql_Array_h_
//$ interface java.sql.Array
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace sql {
		class ResultSet;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace sql {

class $export Array : public ::java::lang::Object {
	$interface(Array, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void free() {}
	virtual $Object* getArray() {return nullptr;}
	virtual $Object* getArray(::java::util::Map* map) {return nullptr;}
	virtual $Object* getArray(int64_t index, int32_t count) {return nullptr;}
	virtual $Object* getArray(int64_t index, int32_t count, ::java::util::Map* map) {return nullptr;}
	virtual int32_t getBaseType() {return 0;}
	virtual $String* getBaseTypeName() {return nullptr;}
	virtual ::java::sql::ResultSet* getResultSet() {return nullptr;}
	virtual ::java::sql::ResultSet* getResultSet(::java::util::Map* map) {return nullptr;}
	virtual ::java::sql::ResultSet* getResultSet(int64_t index, int32_t count) {return nullptr;}
	virtual ::java::sql::ResultSet* getResultSet(int64_t index, int32_t count, ::java::util::Map* map) {return nullptr;}
};

	} // sql
} // java

#endif // _java_sql_Array_h_