#include <sun/awt/X11/XRootWindow$LazyHolder.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XRootWindow.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XRootWindow = ::sun::awt::X11::XRootWindow;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$XRootWindow* XRootWindow$LazyHolder::xawtRootWindow = nullptr;

void XRootWindow$LazyHolder::init$() {
}

void XRootWindow$LazyHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$XToolkit::awtLock();
		$var($Throwable, var$0, nullptr);
		try {
			$assignStatic(XRootWindow$LazyHolder::xawtRootWindow, $new($XRootWindow));
			XRootWindow$LazyHolder::xawtRootWindow->init($($$nc(XRootWindow$LazyHolder::xawtRootWindow->getDelayedParams())->delete$("delayed"_s)));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

XRootWindow$LazyHolder::XRootWindow$LazyHolder() {
}

$Class* XRootWindow$LazyHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"xawtRootWindow", "Lsun/awt/X11/XRootWindow;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XRootWindow$LazyHolder, xawtRootWindow)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(XRootWindow$LazyHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XRootWindow$LazyHolder", "sun.awt.X11.XRootWindow", "LazyHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XRootWindow$LazyHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XRootWindow"
	};
	$loadClass(XRootWindow$LazyHolder, name, initialize, &classInfo$$, XRootWindow$LazyHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XRootWindow$LazyHolder);
	});
	return class$;
}

$Class* XRootWindow$LazyHolder::class$ = nullptr;

		} // X11
	} // awt
} // sun