#include <sun/lwawt/PlatformDropTarget.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {

$Class* PlatformDropTarget::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformDropTarget, dispose, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.lwawt.PlatformDropTarget",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PlatformDropTarget, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformDropTarget);
	});
	return class$;
}

$Class* PlatformDropTarget::class$ = nullptr;

	} // lwawt
} // sun