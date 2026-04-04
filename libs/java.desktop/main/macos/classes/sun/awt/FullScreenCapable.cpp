#include <sun/awt/FullScreenCapable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* FullScreenCapable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"enterFullScreenMode", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FullScreenCapable, enterFullScreenMode, void)},
		{"exitFullScreenMode", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FullScreenCapable, exitFullScreenMode, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.FullScreenCapable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FullScreenCapable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FullScreenCapable);
	});
	return class$;
}

$Class* FullScreenCapable::class$ = nullptr;

	} // awt
} // sun