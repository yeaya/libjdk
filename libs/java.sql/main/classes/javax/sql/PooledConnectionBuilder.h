#ifndef _javax_sql_PooledConnectionBuilder_h_
#define _javax_sql_PooledConnectionBuilder_h_
//$ interface javax.sql.PooledConnectionBuilder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace sql {
		class ShardingKey;
	}
}
namespace javax {
	namespace sql {
		class PooledConnection;
	}
}

namespace javax {
	namespace sql {

class $export PooledConnectionBuilder : public ::java::lang::Object {
	$interface(PooledConnectionBuilder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::sql::PooledConnection* build() {return nullptr;}
	virtual ::javax::sql::PooledConnectionBuilder* password($String* password) {return nullptr;}
	virtual ::javax::sql::PooledConnectionBuilder* shardingKey(::java::sql::ShardingKey* shardingKey) {return nullptr;}
	virtual ::javax::sql::PooledConnectionBuilder* superShardingKey(::java::sql::ShardingKey* superShardingKey) {return nullptr;}
	virtual ::javax::sql::PooledConnectionBuilder* user($String* username) {return nullptr;}
};

	} // sql
} // javax

#endif // _javax_sql_PooledConnectionBuilder_h_