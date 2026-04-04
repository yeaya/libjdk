#include <java/sql/Savepoint.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$Class* Savepoint::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getSavepointId", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Savepoint, getSavepointId, int32_t), "java.sql.SQLException"},
		{"getSavepointName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Savepoint, getSavepointName, $String*), "java.sql.SQLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.sql.Savepoint",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Savepoint, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Savepoint);
	});
	return class$;
}

$Class* Savepoint::class$ = nullptr;

	} // sql
} // java