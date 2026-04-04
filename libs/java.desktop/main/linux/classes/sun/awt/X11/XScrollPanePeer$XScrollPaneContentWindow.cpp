#include <sun/awt/X11/XScrollPanePeer$XScrollPaneContentWindow.h>
#include <java/awt/Component.h>
#include <java/awt/ScrollPane.h>
#include <sun/awt/X11/XScrollPanePeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $ScrollPane = ::java::awt::ScrollPane;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XWindow = ::sun::awt::X11::XWindow;

namespace sun {
	namespace awt {
		namespace X11 {

void XScrollPanePeer$XScrollPaneContentWindow::init$($ScrollPane* target, int64_t parentWindow) {
	$XWindow::init$(target, parentWindow);
}

$String* XScrollPanePeer$XScrollPaneContentWindow::getWMName() {
	return "ScrollPane content"_s;
}

XScrollPanePeer$XScrollPaneContentWindow::XScrollPanePeer$XScrollPaneContentWindow() {
}

$Class* XScrollPanePeer$XScrollPaneContentWindow::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/ScrollPane;J)V", nullptr, 0, $method(XScrollPanePeer$XScrollPaneContentWindow, init$, void, $ScrollPane*, int64_t)},
		{"getWMName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XScrollPanePeer$XScrollPaneContentWindow, getWMName, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XScrollPanePeer$XScrollPaneContentWindow", "sun.awt.X11.XScrollPanePeer", "XScrollPaneContentWindow", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XScrollPanePeer$XScrollPaneContentWindow",
		"sun.awt.X11.XWindow",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XScrollPanePeer"
	};
	$loadClass(XScrollPanePeer$XScrollPaneContentWindow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XScrollPanePeer$XScrollPaneContentWindow));
	});
	return class$;
}

$Class* XScrollPanePeer$XScrollPaneContentWindow::class$ = nullptr;

		} // X11
	} // awt
} // sun