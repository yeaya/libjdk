#include <com/sun/java/swing/plaf/motif/MotifMenuUI$MouseInputHandler.h>
#include <com/sun/java/swing/plaf/motif/MotifMenuUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $MotifMenuUI = ::com::sun::java::swing::plaf::motif::MotifMenuUI;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifMenuUI$MouseInputHandler::init$($MotifMenuUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifMenuUI$MouseInputHandler::mouseClicked($MouseEvent* e) {
}

void MotifMenuUI$MouseInputHandler::mousePressed($MouseEvent* e) {
	$useLocalObjectStack();
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	$var($JMenu, menu, $cast($JMenu, $nc(e)->getComponent()));
	if ($nc(menu)->isEnabled()) {
		if (menu->isTopLevelMenu()) {
			if (menu->isSelected()) {
				$nc(manager)->clearSelectedPath();
			} else {
				$var($Container, cnt, menu->getParent());
				if (cnt != nullptr && $instanceOf($JMenuBar, cnt)) {
					$var($MenuElementArray, me, $new($MenuElementArray, 2));
					me->set(0, $cast($MenuElement, cnt));
					me->set(1, menu);
					$nc(manager)->setSelectedPath(me);
				}
			}
		}
		$var($MenuElementArray, path, this->this$0->getPath());
		if ($nc(path)->length > 0) {
			$var($MenuElementArray, newPath, $new($MenuElementArray, path->length + 1));
			$System::arraycopy(path, 0, newPath, 0, path->length);
			newPath->set(path->length, $(menu->getPopupMenu()));
			$nc(manager)->setSelectedPath(newPath);
		}
	}
}

void MotifMenuUI$MouseInputHandler::mouseReleased($MouseEvent* e) {
	$useLocalObjectStack();
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	$var($JMenuItem, menuItem, $cast($JMenuItem, $nc(e)->getComponent()));
	$var($Point, p, e->getPoint());
	bool var$0 = $nc(p)->x >= 0 && p->x < $nc(menuItem)->getWidth() && p->y >= 0;
	if (!(var$0 && p->y < menuItem->getHeight())) {
		$nc(manager)->processMouseEvent(e);
	}
}

void MotifMenuUI$MouseInputHandler::mouseEntered($MouseEvent* e) {
}

void MotifMenuUI$MouseInputHandler::mouseExited($MouseEvent* e) {
}

void MotifMenuUI$MouseInputHandler::mouseDragged($MouseEvent* e) {
	$$nc($MenuSelectionManager::defaultManager())->processMouseEvent(e);
}

void MotifMenuUI$MouseInputHandler::mouseMoved($MouseEvent* e) {
}

MotifMenuUI$MouseInputHandler::MotifMenuUI$MouseInputHandler() {
}

$Class* MotifMenuUI$MouseInputHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifMenuUI$MouseInputHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifMenuUI;)V", nullptr, $PROTECTED, $method(MotifMenuUI$MouseInputHandler, init$, void, $MotifMenuUI*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifMenuUI$MouseInputHandler, mouseClicked, void, $MouseEvent*)},
		{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifMenuUI$MouseInputHandler, mouseDragged, void, $MouseEvent*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifMenuUI$MouseInputHandler, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifMenuUI$MouseInputHandler, mouseExited, void, $MouseEvent*)},
		{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifMenuUI$MouseInputHandler, mouseMoved, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifMenuUI$MouseInputHandler, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifMenuUI$MouseInputHandler, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifMenuUI$MouseInputHandler", "com.sun.java.swing.plaf.motif.MotifMenuUI", "MouseInputHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifMenuUI$MouseInputHandler",
		"java.lang.Object",
		"javax.swing.event.MouseInputListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifMenuUI"
	};
	$loadClass(MotifMenuUI$MouseInputHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifMenuUI$MouseInputHandler));
	});
	return class$;
}

$Class* MotifMenuUI$MouseInputHandler::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com