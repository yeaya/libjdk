#ifndef _java_sql_ConnectionBuilder_h_
#define _java_sql_ConnectionBuilder_h_
//$ interface java.sql.ConnectionBuilder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace sql {
		class Connection;
		class ShardingKey;
	}
}

namespace java {
	namespace sql {

class $import ConnectionBuilder : public ::java::lang::Object {
	$interface(ConnectionBuilder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::sql::Connection* build() {return nullptr;}
	virtual ::java::sql::ConnectionBuilder* password($String* password) {return nullptr;}
	virtual ::java::sql::ConnectionBuilder* shardingKey(::java::sql::ShardingKey* shardingKey) {return nullptr;}
	virtual ::java::sql::ConnectionBuilder* superShardingKey(::java::sql::ShardingKey* superShardingKey) {return nullptr;}
	virtual ::java::sql::ConnectionBuilder* user($String* username) {return nullptr;}
};

	} // sql
} // java

#endif // _java_sql_ConnectionBuilder_h_