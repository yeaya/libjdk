#include <sun/awt/WindowIDProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* WindowIDProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getWindow", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowIDProvider, getWindow, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.WindowIDProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowIDProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowIDProvider);
	});
	return class$;
}

$Class* WindowIDProvider::class$ = nullptr;

	} // awt
} // sun