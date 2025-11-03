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

$MethodInfo _ShardingKeyBuilder_MethodInfo_[] = {
	{"build", "()Ljava/sql/ShardingKey;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"subkey", "(Ljava/lang/Object;Ljava/sql/SQLType;)Ljava/sql/ShardingKeyBuilder;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ShardingKeyBuilder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.ShardingKeyBuilder",
	nullptr,
	nullptr,
	nullptr,
	_ShardingKeyBuilder_MethodInfo_
};

$Object* allocate$ShardingKeyBuilder($Class* clazz) {
	return $of($alloc(ShardingKeyBuilder));
}

$Class* ShardingKeyBuilder::load$($String* name, bool initialize) {
	$loadClass(ShardingKeyBuilder, name, initialize, &_ShardingKeyBuilder_ClassInfo_, allocate$ShardingKeyBuilder);
	return class$;
}

$Class* ShardingKeyBuilder::class$ = nullptr;

	} // sql
} // java