#include <sun/awt/windows/WEmbeddedFrame$1.h>
#include <sun/awt/windows/WEmbeddedFrame.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace windows {

void WEmbeddedFrame$1::init$() {
}

$Object* WEmbeddedFrame$1::run() {
	return $of($System::getenv("JAVA2D_PLUGIN_PRINT_SCALE"_s));
}

WEmbeddedFrame$1::WEmbeddedFrame$1() {
}

$Class* WEmbeddedFrame$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WEmbeddedFrame$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WEmbeddedFrame$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WEmbeddedFrame",
		"getPrintScaleFactor",
		"()I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WEmbeddedFrame$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WEmbeddedFrame$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.windows.WEmbeddedFrame"
	};
	$loadClass(WEmbeddedFrame$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WEmbeddedFrame$1);
	});
	return class$;
}

$Class* WEmbeddedFrame$1::class$ = nullptr;

		} // windows
	} // awt
} // sun