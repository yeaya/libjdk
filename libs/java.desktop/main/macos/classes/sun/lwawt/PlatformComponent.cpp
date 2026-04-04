#include <sun/lwawt/PlatformComponent.h>
#include <sun/lwawt/PlatformWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformWindow = ::sun::lwawt::PlatformWindow;

namespace sun {
	namespace lwawt {

$Class* PlatformComponent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformComponent, dispose, void)},
		{"initialize", "(Lsun/lwawt/PlatformWindow;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformComponent, initialize, void, $PlatformWindow*)},
		{"setBounds", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformComponent, setBounds, void, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.lwawt.PlatformComponent",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PlatformComponent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformComponent);
	});
	return class$;
}

$Class* PlatformComponent::class$ = nullptr;

	} // lwawt
} // sun