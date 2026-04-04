#include <com/sun/java/swing/plaf/motif/MotifMenuMouseMotionListener.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifMenuMouseMotionListener::init$() {
}

void MotifMenuMouseMotionListener::mouseDragged($MouseEvent* e) {
	$$nc($MenuSelectionManager::defaultManager())->processMouseEvent(e);
}

void MotifMenuMouseMotionListener::mouseMoved($MouseEvent* e) {
	$$nc($MenuSelectionManager::defaultManager())->processMouseEvent(e);
}

MotifMenuMouseMotionListener::MotifMenuMouseMotionListener() {
}

$Class* MotifMenuMouseMotionListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MotifMenuMouseMotionListener, init$, void)},
		{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifMenuMouseMotionListener, mouseDragged, void, $MouseEvent*)},
		{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifMenuMouseMotionListener, mouseMoved, void, $MouseEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifMenuMouseMotionListener",
		"java.lang.Object",
		"java.awt.event.MouseMotionListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(MotifMenuMouseMotionListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifMenuMouseMotionListener);
	});
	return class$;
}

$Class* MotifMenuMouseMotionListener::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com