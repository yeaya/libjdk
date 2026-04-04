#include <java/sql/ConnectionBuilder.h>
#include <java/sql/Connection.h>
#include <java/sql/ShardingKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Connection = ::java::sql::Connection;
using $ShardingKey = ::java::sql::ShardingKey;

namespace java {
	namespace sql {

$Class* ConnectionBuilder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"build", "()Ljava/sql/Connection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConnectionBuilder, build, $Connection*), "java.sql.SQLException"},
		{"password", "(Ljava/lang/String;)Ljava/sql/ConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConnectionBuilder, password, ConnectionBuilder*, $String*)},
		{"shardingKey", "(Ljava/sql/ShardingKey;)Ljava/sql/ConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConnectionBuilder, shardingKey, ConnectionBuilder*, $ShardingKey*)},
		{"superShardingKey", "(Ljava/sql/ShardingKey;)Ljava/sql/ConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConnectionBuilder, superShardingKey, ConnectionBuilder*, $ShardingKey*)},
		{"user", "(Ljava/lang/String;)Ljava/sql/ConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConnectionBuilder, user, ConnectionBuilder*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.sql.ConnectionBuilder",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ConnectionBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConnectionBuilder);
	});
	return class$;
}

$Class* ConnectionBuilder::class$ = nullptr;

	} // sql
} // java