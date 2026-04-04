#include <sun/awt/X11/XSystemTrayPeer$2.h>
#include <java/awt/AWTException.h>
#include <java/awt/SystemTray.h>
#include <java/awt/TrayIcon.h>
#include <sun/awt/AWTAccessor$TrayIconAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XSystemTrayPeer.h>
#include <jcpp.h>

using $TrayIconArray = $Array<::java::awt::TrayIcon>;
using $AWTException = ::java::awt::AWTException;
using $TrayIcon = ::java::awt::TrayIcon;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $XSystemTrayPeer = ::sun::awt::X11::XSystemTrayPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XSystemTrayPeer$2::init$($XSystemTrayPeer* this$0) {
	$set(this, this$0, this$0);
}

void XSystemTrayPeer$2::run() {
	$useLocalObjectStack();
	$var($TrayIconArray, icons, $nc(this->this$0->target)->getTrayIcons());
	try {
		$var($TrayIconArray, arr$, icons);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($TrayIcon, ti, arr$->get(i$));
			{
				$$nc($AWTAccessor::getTrayIconAccessor())->addNotify(ti);
			}
		}
	} catch ($AWTException& e) {
	}
}

XSystemTrayPeer$2::XSystemTrayPeer$2() {
}

$Class* XSystemTrayPeer$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XSystemTrayPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XSystemTrayPeer$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XSystemTrayPeer;)V", nullptr, 0, $method(XSystemTrayPeer$2, init$, void, $XSystemTrayPeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XSystemTrayPeer$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XSystemTrayPeer",
		"createTrayPeers",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XSystemTrayPeer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XSystemTrayPeer$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XSystemTrayPeer"
	};
	$loadClass(XSystemTrayPeer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSystemTrayPeer$2);
	});
	return class$;
}

$Class* XSystemTrayPeer$2::class$ = nullptr;

		} // X11
	} // awt
} // sun