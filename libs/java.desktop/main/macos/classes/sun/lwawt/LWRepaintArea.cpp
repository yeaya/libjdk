#include <sun/lwawt/LWRepaintArea.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/peer/ComponentPeer.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/RepaintArea.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $RepaintArea = ::sun::awt::RepaintArea;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;

namespace sun {
	namespace lwawt {

void LWRepaintArea::init$() {
	$RepaintArea::init$();
}

void LWRepaintArea::updateComponent($Component* comp, $Graphics* g) {
	if (comp != nullptr) {
		$RepaintArea::updateComponent(comp, g);
		$LWComponentPeer::flushOnscreenGraphics();
	}
}

void LWRepaintArea::paintComponent($Component* comp, $Graphics* g) {
	$useLocalObjectStack();
	if (comp != nullptr) {
		$var($Object, peer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(comp));
		if (peer != nullptr) {
			$cast($LWComponentPeer, peer)->paintPeer(g);
		}
		$RepaintArea::paintComponent(comp, g);
		$LWComponentPeer::flushOnscreenGraphics();
	}
}

LWRepaintArea::LWRepaintArea() {
}

$Class* LWRepaintArea::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LWRepaintArea, init$, void)},
		{"paintComponent", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(LWRepaintArea, paintComponent, void, $Component*, $Graphics*)},
		{"updateComponent", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(LWRepaintArea, updateComponent, void, $Component*, $Graphics*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.LWRepaintArea",
		"sun.awt.RepaintArea",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LWRepaintArea, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LWRepaintArea);
	});
	return class$;
}

$Class* LWRepaintArea::class$ = nullptr;

	} // lwawt
} // sun