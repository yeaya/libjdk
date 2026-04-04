#include <java/sql/ShardingKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace sql {

$Class* ShardingKey::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.sql.ShardingKey"
	};
	$loadClass(ShardingKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShardingKey);
	});
	return class$;
}

$Class* ShardingKey::class$ = nullptr;

	} // sql
} // java