#include <com/sun/java/swing/plaf/windows/WindowsMenuUI$WindowsMouseInputHandler.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/plaf/basic/BasicMenuUI$MouseInputHandler.h>
#include <jcpp.h>

using $WindowsMenuUI = ::com::sun::java::swing::plaf::windows::WindowsMenuUI;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JMenu = ::javax::swing::JMenu;
using $BasicMenuUI$MouseInputHandler = ::javax::swing::plaf::basic::BasicMenuUI$MouseInputHandler;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsMenuUI$WindowsMouseInputHandler::init$($WindowsMenuUI* this$0) {
	$set(this, this$0, this$0);
	$BasicMenuUI$MouseInputHandler::init$(this$0);
}

void WindowsMenuUI$WindowsMouseInputHandler::mouseEntered($MouseEvent* evt) {
	$useLocalObjectStack();
	$BasicMenuUI$MouseInputHandler::mouseEntered(evt);
	$var($JMenu, menu, $cast($JMenu, $nc(evt)->getSource()));
	bool var$0 = this->this$0->hotTrackingOn && $nc(menu)->isTopLevelMenu();
	if (var$0 && menu->isRolloverEnabled()) {
		$$nc(menu->getModel())->setRollover(true);
		$$nc($WindowsMenuUI::access$100(this->this$0))->repaint();
	}
}

void WindowsMenuUI$WindowsMouseInputHandler::mouseExited($MouseEvent* evt) {
	$useLocalObjectStack();
	$BasicMenuUI$MouseInputHandler::mouseExited(evt);
	$var($JMenu, menu, $cast($JMenu, $nc(evt)->getSource()));
	$var($ButtonModel, model, $nc(menu)->getModel());
	if (menu->isRolloverEnabled()) {
		$nc(model)->setRollover(false);
		$$nc($WindowsMenuUI::access$200(this->this$0))->repaint();
	}
}

WindowsMenuUI$WindowsMouseInputHandler::WindowsMenuUI$WindowsMouseInputHandler() {
}

$Class* WindowsMenuUI$WindowsMouseInputHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsMenuUI$WindowsMouseInputHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuUI;)V", nullptr, $PROTECTED, $method(WindowsMenuUI$WindowsMouseInputHandler, init$, void, $WindowsMenuUI*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsMenuUI$WindowsMouseInputHandler, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsMenuUI$WindowsMouseInputHandler, mouseExited, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsMenuUI$WindowsMouseInputHandler", "com.sun.java.swing.plaf.windows.WindowsMenuUI", "WindowsMouseInputHandler", $PROTECTED},
		{"javax.swing.plaf.basic.BasicMenuUI$MouseInputHandler", "javax.swing.plaf.basic.BasicMenuUI", "MouseInputHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsMenuUI$WindowsMouseInputHandler",
		"javax.swing.plaf.basic.BasicMenuUI$MouseInputHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsMenuUI"
	};
	$loadClass(WindowsMenuUI$WindowsMouseInputHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsMenuUI$WindowsMouseInputHandler));
	});
	return class$;
}

$Class* WindowsMenuUI$WindowsMouseInputHandler::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com