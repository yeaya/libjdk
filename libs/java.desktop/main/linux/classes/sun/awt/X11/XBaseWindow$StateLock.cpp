#include <sun/awt/X11/XBaseWindow$StateLock.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

void XBaseWindow$StateLock::init$() {
}

XBaseWindow$StateLock::XBaseWindow$StateLock() {
}

$Class* XBaseWindow$StateLock::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XBaseWindow$StateLock, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XBaseWindow$StateLock", "sun.awt.X11.XBaseWindow", "StateLock", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XBaseWindow$StateLock",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XBaseWindow"
	};
	$loadClass(XBaseWindow$StateLock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XBaseWindow$StateLock);
	});
	return class$;
}

$Class* XBaseWindow$StateLock::class$ = nullptr;

		} // X11
	} // awt
} // sun