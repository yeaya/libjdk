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

$MethodInfo _ConnectionBuilder_MethodInfo_[] = {
	{"build", "()Ljava/sql/Connection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConnectionBuilder, build, $Connection*), "java.sql.SQLException"},
	{"password", "(Ljava/lang/String;)Ljava/sql/ConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConnectionBuilder, password, ConnectionBuilder*, $String*)},
	{"shardingKey", "(Ljava/sql/ShardingKey;)Ljava/sql/ConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConnectionBuilder, shardingKey, ConnectionBuilder*, $ShardingKey*)},
	{"superShardingKey", "(Ljava/sql/ShardingKey;)Ljava/sql/ConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConnectionBuilder, superShardingKey, ConnectionBuilder*, $ShardingKey*)},
	{"user", "(Ljava/lang/String;)Ljava/sql/ConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConnectionBuilder, user, ConnectionBuilder*, $String*)},
	{}
};

$ClassInfo _ConnectionBuilder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.ConnectionBuilder",
	nullptr,
	nullptr,
	nullptr,
	_ConnectionBuilder_MethodInfo_
};

$Object* allocate$ConnectionBuilder($Class* clazz) {
	return $of($alloc(ConnectionBuilder));
}

$Class* ConnectionBuilder::load$($String* name, bool initialize) {
	$loadClass(ConnectionBuilder, name, initialize, &_ConnectionBuilder_ClassInfo_, allocate$ConnectionBuilder);
	return class$;
}

$Class* ConnectionBuilder::class$ = nullptr;

	} // sql
} // java