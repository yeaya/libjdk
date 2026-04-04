#include <java/rmi/server/Unreferenced.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace rmi {
		namespace server {

$Class* Unreferenced::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"unreferenced", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Unreferenced, unreferenced, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.rmi.server.Unreferenced",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Unreferenced, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Unreferenced);
	});
	return class$;
}

$Class* Unreferenced::class$ = nullptr;

		} // server
	} // rmi
} // java