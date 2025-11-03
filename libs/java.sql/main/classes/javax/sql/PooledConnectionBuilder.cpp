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

$MethodInfo _PooledConnectionBuilder_MethodInfo_[] = {
	{"build", "()Ljavax/sql/PooledConnection;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"password", "(Ljava/lang/String;)Ljavax/sql/PooledConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT},
	{"shardingKey", "(Ljava/sql/ShardingKey;)Ljavax/sql/PooledConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT},
	{"superShardingKey", "(Ljava/sql/ShardingKey;)Ljavax/sql/PooledConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT},
	{"user", "(Ljava/lang/String;)Ljavax/sql/PooledConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PooledConnectionBuilder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.PooledConnectionBuilder",
	nullptr,
	nullptr,
	nullptr,
	_PooledConnectionBuilder_MethodInfo_
};

$Object* allocate$PooledConnectionBuilder($Class* clazz) {
	return $of($alloc(PooledConnectionBuilder));
}

$Class* PooledConnectionBuilder::load$($String* name, bool initialize) {
	$loadClass(PooledConnectionBuilder, name, initialize, &_PooledConnectionBuilder_ClassInfo_, allocate$PooledConnectionBuilder);
	return class$;
}

$Class* PooledConnectionBuilder::class$ = nullptr;

	} // sql
} // javax