#include <sun/lwawt/macosx/CSystemTray.h>
#include <java/awt/Dimension.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CSystemTray::init$() {
}

$Dimension* CSystemTray::getTrayIconSize() {
	return $new($Dimension, 20, 20);
}

CSystemTray::CSystemTray() {
}

$Class* CSystemTray::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CSystemTray, init$, void)},
		{"getTrayIconSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(CSystemTray, getTrayIconSize, $Dimension*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.lwawt.macosx.CSystemTray",
		"java.lang.Object",
		"java.awt.peer.SystemTrayPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(CSystemTray, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSystemTray);
	});
	return class$;
}

$Class* CSystemTray::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun