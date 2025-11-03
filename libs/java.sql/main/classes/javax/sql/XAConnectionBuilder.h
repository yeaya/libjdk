#ifndef _javax_sql_XAConnectionBuilder_h_
#define _javax_sql_XAConnectionBuilder_h_
//$ interface javax.sql.XAConnectionBuilder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace sql {
		class ShardingKey;
	}
}
namespace javax {
	namespace sql {
		class XAConnection;
	}
}

namespace javax {
	namespace sql {

class $export XAConnectionBuilder : public ::java::lang::Object {
	$interface(XAConnectionBuilder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::sql::XAConnection* build() {return nullptr;}
	virtual ::javax::sql::XAConnectionBuilder* password($String* password) {return nullptr;}
	virtual ::javax::sql::XAConnectionBuilder* shardingKey(::java::sql::ShardingKey* shardingKey) {return nullptr;}
	virtual ::javax::sql::XAConnectionBuilder* superShardingKey(::java::sql::ShardingKey* superShardingKey) {return nullptr;}
	virtual ::javax::sql::XAConnectionBuilder* user($String* username) {return nullptr;}
};

	} // sql
} // javax

#endif // _javax_sql_XAConnectionBuilder_h_