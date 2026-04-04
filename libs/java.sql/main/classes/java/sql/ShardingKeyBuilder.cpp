#include <java/sql/ShardingKeyBuilder.h>
#include <java/sql/SQLType.h>
#include <java/sql/ShardingKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLType = ::java::sql::SQLType;
using $ShardingKey = ::java::sql::ShardingKey;

namespace java {
	namespace sql {

$Class* ShardingKeyBuilder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"build", "()Ljava/sql/ShardingKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ShardingKeyBuilder, build, $ShardingKey*), "java.sql.SQLException"},
		{"subkey", "(Ljava/lang/Object;Ljava/sql/SQLType;)Ljava/sql/ShardingKeyBuilder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ShardingKeyBuilder, subkey, ShardingKeyBuilder*, Object$*, $SQLType*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.sql.ShardingKeyBuilder",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ShardingKeyBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShardingKeyBuilder);
	});
	return class$;
}

$Class* ShardingKeyBuilder::class$ = nullptr;

	} // sql
} // java