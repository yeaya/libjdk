#include <javax/sql/XAConnectionBuilder.h>
#include <java/sql/ShardingKey.h>
#include <javax/sql/XAConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ShardingKey = ::java::sql::ShardingKey;
using $XAConnection = ::javax::sql::XAConnection;

namespace javax {
	namespace sql {

$Class* XAConnectionBuilder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"build", "()Ljavax/sql/XAConnection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XAConnectionBuilder, build, $XAConnection*), "java.sql.SQLException"},
		{"password", "(Ljava/lang/String;)Ljavax/sql/XAConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XAConnectionBuilder, password, XAConnectionBuilder*, $String*)},
		{"shardingKey", "(Ljava/sql/ShardingKey;)Ljavax/sql/XAConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XAConnectionBuilder, shardingKey, XAConnectionBuilder*, $ShardingKey*)},
		{"superShardingKey", "(Ljava/sql/ShardingKey;)Ljavax/sql/XAConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XAConnectionBuilder, superShardingKey, XAConnectionBuilder*, $ShardingKey*)},
		{"user", "(Ljava/lang/String;)Ljavax/sql/XAConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XAConnectionBuilder, user, XAConnectionBuilder*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.XAConnectionBuilder",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XAConnectionBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XAConnectionBuilder);
	});
	return class$;
}

$Class* XAConnectionBuilder::class$ = nullptr;

	} // sql
} // javax