#include <com/sun/java/swing/plaf/motif/MotifMenuMouseListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
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

void MotifMenuMouseListener::init$() {
	$MouseAdapter::init$();
}

void MotifMenuMouseListener::mousePressed($MouseEvent* e) {
	$$nc($MenuSelectionManager::defaultManager())->processMouseEvent(e);
}

void MotifMenuMouseListener::mouseReleased($MouseEvent* e) {
	$$nc($MenuSelectionManager::defaultManager())->processMouseEvent(e);
}

void MotifMenuMouseListener::mouseEntered($MouseEvent* e) {
	$$nc($MenuSelectionManager::defaultManager())->processMouseEvent(e);
}

void MotifMenuMouseListener::mouseExited($MouseEvent* e) {
	$$nc($MenuSelectionManager::defaultManager())->processMouseEvent(e);
}

MotifMenuMouseListener::MotifMenuMouseListener() {
}

$Class* MotifMenuMouseListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MotifMenuMouseListener, init$, void)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifMenuMouseListener, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifMenuMouseListener, mouseExited, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifMenuMouseListener, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifMenuMouseListener, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifMenuMouseListener",
		"java.awt.event.MouseAdapter",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MotifMenuMouseListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifMenuMouseListener));
	});
	return class$;
}

$Class* MotifMenuMouseListener::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com