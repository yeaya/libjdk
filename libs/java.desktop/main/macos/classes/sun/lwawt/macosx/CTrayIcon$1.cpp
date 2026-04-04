#include <sun/lwawt/macosx/CTrayIcon$1.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/TrayIcon.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/lwawt/macosx/CTrayIcon.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $CTrayIcon = ::sun::lwawt::macosx::CTrayIcon;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CTrayIcon$1::init$($CTrayIcon* this$0, $AWTEvent* val$event) {
	$set(this, this$0, this$0);
	$set(this, val$event, val$event);
}

void CTrayIcon$1::run() {
	$SunToolkit::postEvent($($SunToolkit::targetToAppContext(this->this$0->target)), this->val$event);
}

CTrayIcon$1::CTrayIcon$1() {
}

$Class* CTrayIcon$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CTrayIcon;", nullptr, $FINAL | $SYNTHETIC, $field(CTrayIcon$1, this$0)},
		{"val$event", "Ljava/awt/AWTEvent;", nullptr, $FINAL | $SYNTHETIC, $field(CTrayIcon$1, val$event)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CTrayIcon;Ljava/awt/AWTEvent;)V", "()V", 0, $method(CTrayIcon$1, init$, void, $CTrayIcon*, $AWTEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CTrayIcon$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CTrayIcon",
		"postEvent",
		"(Ljava/awt/AWTEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CTrayIcon$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CTrayIcon$1",
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
		"sun.lwawt.macosx.CTrayIcon"
	};
	$loadClass(CTrayIcon$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CTrayIcon$1);
	});
	return class$;
}

$Class* CTrayIcon$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun