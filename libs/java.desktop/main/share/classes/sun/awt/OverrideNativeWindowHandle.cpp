#include <sun/awt/OverrideNativeWindowHandle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* OverrideNativeWindowHandle::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"overrideWindowHandle", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OverrideNativeWindowHandle, overrideWindowHandle, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.OverrideNativeWindowHandle",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(OverrideNativeWindowHandle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OverrideNativeWindowHandle);
	});
	return class$;
}

$Class* OverrideNativeWindowHandle::class$ = nullptr;

	} // awt
} // sun