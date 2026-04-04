#include <com/sun/java/swing/plaf/windows/WindowsMenuUI$1.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuUI.h>
#include <java/awt/Container.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/MenuElement.h>
#include <jcpp.h>

#undef DISABLED
#undef DISABLEDHOT
#undef DISABLEDPUSHED
#undef HOT
#undef MP_BARITEM
#undef MP_POPUPITEM
#undef NORMAL
#undef PUSHED

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsMenuBarUI = ::com::sun::java::swing::plaf::windows::WindowsMenuBarUI;
using $WindowsMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI;
using $WindowsMenuUI = ::com::sun::java::swing::plaf::windows::WindowsMenuUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $MenuElement = ::javax::swing::MenuElement;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsMenuUI$1::init$($WindowsMenuUI* this$0) {
	$set(this, this$0, this$0);
}

$JMenuItem* WindowsMenuUI$1::getMenuItem() {
	return $WindowsMenuUI::access$000(this->this$0);
}

$TMSchema$State* WindowsMenuUI$1::getState($JMenuItem* menu) {
	$useLocalObjectStack();
	$init($TMSchema$State);
	$TMSchema$State* state = $nc(menu)->isEnabled() ? $TMSchema$State::NORMAL : $TMSchema$State::DISABLED;
	$var($ButtonModel, model, menu->getModel());
	bool var$0 = $nc(model)->isArmed();
	if (var$0 || model->isSelected()) {
		state = (menu->isEnabled()) ? $TMSchema$State::PUSHED : $TMSchema$State::DISABLEDPUSHED;
	} else {
		bool var$1 = model->isRollover();
		if (var$1 && $cast($JMenu, menu)->isTopLevelMenu()) {
			$TMSchema$State* stateTmp = state;
			state = (menu->isEnabled()) ? $TMSchema$State::HOT : $TMSchema$State::DISABLEDHOT;
			{
				$var($MenuElementArray, arr$, $$sure($JMenuBar, menu->getParent())->getSubElements());
				for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
					$var($MenuElement, menuElement, arr$->get(i$));
					if ($nc($cast($JMenuItem, menuElement))->isSelected()) {
						state = stateTmp;
						break;
					}
				}
			}
		}
	}
	if (!$cast($JMenu, menu)->isTopLevelMenu()) {
		if (state == $TMSchema$State::PUSHED) {
			state = $TMSchema$State::HOT;
		} else if (state == $TMSchema$State::DISABLEDPUSHED) {
			state = $TMSchema$State::DISABLEDHOT;
		}
	}
	bool var$2 = $cast($JMenu, menu)->isTopLevelMenu();
	if (var$2 && $WindowsMenuItemUI::isVistaPainting()) {
		if (!$WindowsMenuBarUI::isActive(menu)) {
			state = $TMSchema$State::DISABLED;
		}
	}
	return state;
}

$TMSchema$Part* WindowsMenuUI$1::getPart($JMenuItem* menuItem) {
	$init($TMSchema$Part);
	return $nc($cast($JMenu, menuItem))->isTopLevelMenu() ? $TMSchema$Part::MP_BARITEM : $TMSchema$Part::MP_POPUPITEM;
}

WindowsMenuUI$1::WindowsMenuUI$1() {
}

$Class* WindowsMenuUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsMenuUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuUI;)V", nullptr, 0, $method(WindowsMenuUI$1, init$, void, $WindowsMenuUI*)},
		{"getMenuItem", "()Ljavax/swing/JMenuItem;", nullptr, $PUBLIC, $virtualMethod(WindowsMenuUI$1, getMenuItem, $JMenuItem*)},
		{"getPart", "(Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC, $virtualMethod(WindowsMenuUI$1, getPart, $TMSchema$Part*, $JMenuItem*)},
		{"getState", "(Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC, $virtualMethod(WindowsMenuUI$1, getState, $TMSchema$State*, $JMenuItem*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsMenuUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsMenuUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsMenuUI$1",
		"java.lang.Object",
		"com.sun.java.swing.plaf.windows.WindowsMenuItemUIAccessor",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsMenuUI"
	};
	$loadClass(WindowsMenuUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsMenuUI$1);
	});
	return class$;
}

$Class* WindowsMenuUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com