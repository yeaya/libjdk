#include <java/awt/Window$1.h>
#include <java/awt/Window.h>
#include <java/awt/geom/Point2D.h>
#include <jcpp.h>

using $WindowArray = $Array<::java::awt::Window>;
using $Window = ::java::awt::Window;
using $Point2D = ::java::awt::geom::Point2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void Window$1::init$() {
}

void Window$1::updateWindow($Window* window) {
	$nc(window)->updateWindow();
}

void Window$1::setSecurityWarningSize($Window* window, int32_t width, int32_t height) {
	$nc(window)->securityWarningWidth = width;
	window->securityWarningHeight = height;
}

$Point2D* Window$1::calculateSecurityWarningPosition($Window* window, double x, double y, double w, double h) {
	return $nc(window)->calculateSecurityWarningPosition(x, y, w, h);
}

void Window$1::setLWRequestStatus($Window* changed, bool status) {
	$nc(changed)->syncLWRequests = status;
}

bool Window$1::isAutoRequestFocus($Window* w) {
	return $nc(w)->autoRequestFocus;
}

bool Window$1::isTrayIconWindow($Window* w) {
	return $nc(w)->isTrayIconWindow;
}

void Window$1::setTrayIconWindow($Window* w, bool isTrayIconWindow) {
	$nc(w)->isTrayIconWindow = isTrayIconWindow;
}

$WindowArray* Window$1::getOwnedWindows($Window* w) {
	return $nc(w)->getOwnedWindows_NoClientCode();
}

Window$1::Window$1() {
}

$Class* Window$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Window$1, init$, void)},
		{"calculateSecurityWarningPosition", "(Ljava/awt/Window;DDDD)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC, $virtualMethod(Window$1, calculateSecurityWarningPosition, $Point2D*, $Window*, double, double, double, double)},
		{"getOwnedWindows", "(Ljava/awt/Window;)[Ljava/awt/Window;", nullptr, $PUBLIC, $virtualMethod(Window$1, getOwnedWindows, $WindowArray*, $Window*)},
		{"isAutoRequestFocus", "(Ljava/awt/Window;)Z", nullptr, $PUBLIC, $virtualMethod(Window$1, isAutoRequestFocus, bool, $Window*)},
		{"isTrayIconWindow", "(Ljava/awt/Window;)Z", nullptr, $PUBLIC, $virtualMethod(Window$1, isTrayIconWindow, bool, $Window*)},
		{"setLWRequestStatus", "(Ljava/awt/Window;Z)V", nullptr, $PUBLIC, $virtualMethod(Window$1, setLWRequestStatus, void, $Window*, bool)},
		{"setSecurityWarningSize", "(Ljava/awt/Window;II)V", nullptr, $PUBLIC, $virtualMethod(Window$1, setSecurityWarningSize, void, $Window*, int32_t, int32_t)},
		{"setTrayIconWindow", "(Ljava/awt/Window;Z)V", nullptr, $PUBLIC, $virtualMethod(Window$1, setTrayIconWindow, void, $Window*, bool)},
		{"updateWindow", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $virtualMethod(Window$1, updateWindow, void, $Window*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Window",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Window$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$WindowAccessor", "sun.awt.AWTAccessor", "WindowAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Window$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$WindowAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Window"
	};
	$loadClass(Window$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Window$1);
	});
	return class$;
}

$Class* Window$1::class$ = nullptr;

	} // awt
} // java