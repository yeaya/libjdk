#include <java/sql/ShardingKey.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace sql {

$ClassInfo _ShardingKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.ShardingKey"
};

$Object* allocate$ShardingKey($Class* clazz) {
	return $of($alloc(ShardingKey));
}

$Class* ShardingKey::load$($String* name, bool initialize) {
	$loadClass(ShardingKey, name, initialize, &_ShardingKey_ClassInfo_, allocate$ShardingKey);
	return class$;
}

$Class* ShardingKey::class$ = nullptr;

	} // sql
} // java