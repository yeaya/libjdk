#ifndef _java_sql_ShardingKeyBuilder_h_
#define _java_sql_ShardingKeyBuilder_h_
//$ interface java.sql.ShardingKeyBuilder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace sql {
		class SQLType;
		class ShardingKey;
	}
}

namespace java {
	namespace sql {

class $export ShardingKeyBuilder : public ::java::lang::Object {
	$interface(ShardingKeyBuilder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::sql::ShardingKey* build() {return nullptr;}
	virtual ::java::sql::ShardingKeyBuilder* subkey(Object$* subkey, ::java::sql::SQLType* subkeyType) {return nullptr;}
};

	} // sql
} // java

#endif // _java_sql_ShardingKeyBuilder_h_