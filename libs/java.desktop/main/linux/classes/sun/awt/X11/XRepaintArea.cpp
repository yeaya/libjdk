#include <sun/awt/X11/XRepaintArea.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/peer/ComponentPeer.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/RepaintArea.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $RepaintArea = ::sun::awt::RepaintArea;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XRepaintArea::init$() {
	$RepaintArea::init$();
}

void XRepaintArea::updateComponent($Component* comp, $Graphics* g) {
	if (comp != nullptr) {
		$RepaintArea::updateComponent(comp, g);
	}
}

void XRepaintArea::paintComponent($Component* comp, $Graphics* g) {
	$useLocalObjectStack();
	if (comp != nullptr) {
		$var($XComponentPeer, peer, $cast($XComponentPeer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(comp)));
		if (peer != nullptr) {
			peer->paintPeer(g);
		}
		$RepaintArea::paintComponent(comp, g);
	}
}

XRepaintArea::XRepaintArea() {
}

$Class* XRepaintArea::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XRepaintArea, init$, void)},
		{"paintComponent", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(XRepaintArea, paintComponent, void, $Component*, $Graphics*)},
		{"updateComponent", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(XRepaintArea, updateComponent, void, $Component*, $Graphics*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.X11.XRepaintArea",
		"sun.awt.RepaintArea",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XRepaintArea, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XRepaintArea);
	});
	return class$;
}

$Class* XRepaintArea::class$ = nullptr;

		} // X11
	} // awt
} // sun