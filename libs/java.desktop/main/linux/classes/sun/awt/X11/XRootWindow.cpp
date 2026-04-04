#include <sun/awt/X11/XRootWindow.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XRootWindow$LazyHolder.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

#undef DELAYED
#undef EVENT_MASK
#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XConstants = ::sun::awt::X11::XConstants;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XRootWindow$LazyHolder = ::sun::awt::X11::XRootWindow$LazyHolder;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

XRootWindow* XRootWindow::getInstance() {
	$init(XRootWindow);
	$init($XRootWindow$LazyHolder);
	return $XRootWindow$LazyHolder::xawtRootWindow;
}

void XRootWindow::init$() {
	$useLocalObjectStack();
	$init($XBaseWindow);
	$XBaseWindow::init$($$new($XCreateWindowParams, $$new($ObjectArray, {
		$XBaseWindow::DELAYED,
		$Boolean::TRUE,
		$XBaseWindow::EVENT_MASK,
		$($Long::valueOf($XConstants::StructureNotifyMask))
	})));
}

void XRootWindow::postInit($XCreateWindowParams* params) {
	$XBaseWindow::postInit(params);
	setWMClass($(getWMClass()));
}

$String* XRootWindow::getWMName() {
	return $XToolkit::getAWTAppClassName();
}

$StringArray* XRootWindow::getWMClass() {
	$useLocalObjectStack();
	return $new($StringArray, {
		$($XToolkit::getAWTAppClassName()),
		$($XToolkit::getAWTAppClassName())
	});
}

int64_t XRootWindow::getXRootWindow() {
	$init(XRootWindow);
	return $$nc(getXAWTRootWindow())->getWindow();
}

XRootWindow::XRootWindow() {
}

$Class* XRootWindow::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(XRootWindow, init$, void)},
		{"getInstance", "()Lsun/awt/X11/XRootWindow;", nullptr, $STATIC, $staticMethod(XRootWindow, getInstance, XRootWindow*)},
		{"getWMClass", "()[Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XRootWindow, getWMClass, $StringArray*)},
		{"getWMName", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XRootWindow, getWMName, $String*)},
		{"getXRootWindow", "()J", nullptr, $PRIVATE | $STATIC, $staticMethod(XRootWindow, getXRootWindow, int64_t)},
		{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, $PUBLIC, $virtualMethod(XRootWindow, postInit, void, $XCreateWindowParams*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XRootWindow$LazyHolder", "sun.awt.X11.XRootWindow", "LazyHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XRootWindow",
		"sun.awt.X11.XBaseWindow",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.X11.XRootWindow$LazyHolder"
	};
	$loadClass(XRootWindow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XRootWindow);
	});
	return class$;
}

$Class* XRootWindow::class$ = nullptr;

		} // X11
	} // awt
} // sun