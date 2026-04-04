#include <sun/lwawt/SecurityWarningWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {

$Class* SecurityWarningWindow::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"reposition", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SecurityWarningWindow, reposition, void, int32_t, int32_t, int32_t, int32_t)},
		{"setVisible", "(ZZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SecurityWarningWindow, setVisible, void, bool, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.lwawt.SecurityWarningWindow",
		nullptr,
		"sun.lwawt.PlatformWindow",
		nullptr,
		methodInfos$$
	};
	$loadClass(SecurityWarningWindow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SecurityWarningWindow);
	});
	return class$;
}

$Class* SecurityWarningWindow::class$ = nullptr;

	} // lwawt
} // sun