#include <sun/awt/AppContext$4$1.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/SystemTray.h>
#include <java/awt/TrayIcon.h>
#include <sun/awt/AppContext$4.h>
#include <jcpp.h>

using $TrayIconArray = $Array<::java::awt::TrayIcon>;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $SystemTray = ::java::awt::SystemTray;
using $TrayIcon = ::java::awt::TrayIcon;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext$4 = ::sun::awt::AppContext$4;

namespace sun {
	namespace awt {

void AppContext$4$1::init$($AppContext$4* this$1) {
	$set(this, this$1, this$1);
}

$Object* AppContext$4$1::run() {
	$useLocalObjectStack();
	bool var$0 = !$GraphicsEnvironment::isHeadless();
	if (var$0 && $SystemTray::isSupported()) {
		$var($SystemTray, systemTray, $SystemTray::getSystemTray());
		$var($TrayIconArray, trayIconsToDispose, $nc(systemTray)->getTrayIcons());
		{
			$var($TrayIconArray, arr$, trayIconsToDispose);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($TrayIcon, ti, arr$->get(i$));
				{
					systemTray->remove(ti);
				}
			}
		}
	}
	return nullptr;
}

AppContext$4$1::AppContext$4$1() {
}

$Class* AppContext$4$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/awt/AppContext$4;", nullptr, $FINAL | $SYNTHETIC, $field(AppContext$4$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/AppContext$4;)V", nullptr, 0, $method(AppContext$4$1, init$, void, $AppContext$4*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(AppContext$4$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.AppContext$4",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AppContext$4", nullptr, nullptr, 0},
		{"sun.awt.AppContext$4$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.AppContext$4$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.AppContext"
	};
	$loadClass(AppContext$4$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppContext$4$1);
	});
	return class$;
}

$Class* AppContext$4$1::class$ = nullptr;

	} // awt
} // sun