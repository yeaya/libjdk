#include <javax/sql/PooledConnectionBuilder.h>
#include <java/sql/ShardingKey.h>
#include <javax/sql/PooledConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ShardingKey = ::java::sql::ShardingKey;
using $PooledConnection = ::javax::sql::PooledConnection;

namespace javax {
	namespace sql {

$Class* PooledConnectionBuilder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"build", "()Ljavax/sql/PooledConnection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PooledConnectionBuilder, build, $PooledConnection*), "java.sql.SQLException"},
		{"password", "(Ljava/lang/String;)Ljavax/sql/PooledConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PooledConnectionBuilder, password, PooledConnectionBuilder*, $String*)},
		{"shardingKey", "(Ljava/sql/ShardingKey;)Ljavax/sql/PooledConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PooledConnectionBuilder, shardingKey, PooledConnectionBuilder*, $ShardingKey*)},
		{"superShardingKey", "(Ljava/sql/ShardingKey;)Ljavax/sql/PooledConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PooledConnectionBuilder, superShardingKey, PooledConnectionBuilder*, $ShardingKey*)},
		{"user", "(Ljava/lang/String;)Ljavax/sql/PooledConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PooledConnectionBuilder, user, PooledConnectionBuilder*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.PooledConnectionBuilder",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PooledConnectionBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PooledConnectionBuilder);
	});
	return class$;
}

$Class* PooledConnectionBuilder::class$ = nullptr;

	} // sql
} // javax