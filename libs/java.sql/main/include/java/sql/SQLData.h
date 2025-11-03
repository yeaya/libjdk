#ifndef _java_sql_SQLData_h_
#define _java_sql_SQLData_h_
//$ interface java.sql.SQLData
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace sql {
		class SQLInput;
		class SQLOutput;
	}
}

namespace java {
	namespace sql {

class $import SQLData : public ::java::lang::Object {
	$interface(SQLData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getSQLTypeName() {return nullptr;}
	virtual void readSQL(::java::sql::SQLInput* stream, $String* typeName) {}
	virtual void writeSQL(::java::sql::SQLOutput* stream) {}
};

	} // sql
} // java

#endif // _java_sql_SQLData_h_