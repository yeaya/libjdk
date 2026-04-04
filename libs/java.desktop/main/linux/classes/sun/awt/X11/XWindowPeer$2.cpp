#include <sun/awt/X11/XWindowPeer$2.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XWindowPeer$2::init$($XWindowPeer* this$0) {
	$set(this, this$0, this$0);
}

$Object* XWindowPeer$2::run() {
	return $of($XToolkit::getEnv("DESKTOP_STARTUP_ID"_s));
}

XWindowPeer$2::XWindowPeer$2() {
}

$Class* XWindowPeer$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XWindowPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XWindowPeer$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XWindowPeer;)V", nullptr, 0, $method(XWindowPeer$2, init$, void, $XWindowPeer*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XWindowPeer$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XWindowPeer",
		"removeStartupNotification",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XWindowPeer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XWindowPeer$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XWindowPeer"
	};
	$loadClass(XWindowPeer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XWindowPeer$2);
	});
	return class$;
}

$Class* XWindowPeer$2::class$ = nullptr;

		} // X11
	} // awt
} // sun