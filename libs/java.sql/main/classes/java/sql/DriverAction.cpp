#include <java/sql/DriverAction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$Class* DriverAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"deregister", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DriverAction, deregister, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.sql.DriverAction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DriverAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DriverAction);
	});
	return class$;
}

$Class* DriverAction::class$ = nullptr;

	} // sql
} // java