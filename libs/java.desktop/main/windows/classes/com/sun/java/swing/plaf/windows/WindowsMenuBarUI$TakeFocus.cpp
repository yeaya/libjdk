#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI$TakeFocus.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsMenuBarUI$TakeFocus::init$() {
	$AbstractAction::init$();
}

void WindowsMenuBarUI$TakeFocus::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JMenuBar, menuBar, $cast($JMenuBar, $nc(e)->getSource()));
	$var($JMenu, menu, $nc(menuBar)->getMenu(0));
	if (menu != nullptr) {
		$var($MenuSelectionManager, msm, $MenuSelectionManager::defaultManager());
		$var($MenuElementArray, path, $new($MenuElementArray, 2));
		path->set(0, $cast($MenuElement, menuBar));
		path->set(1, $cast($MenuElement, menu));
		$nc(msm)->setSelectedPath(path);
		$WindowsLookAndFeel::setMnemonicHidden(false);
		$WindowsLookAndFeel::repaintRootPane(menuBar);
	}
}

WindowsMenuBarUI$TakeFocus::WindowsMenuBarUI$TakeFocus() {
}

$Class* WindowsMenuBarUI$TakeFocus::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WindowsMenuBarUI$TakeFocus, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsMenuBarUI$TakeFocus, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsMenuBarUI$TakeFocus", "com.sun.java.swing.plaf.windows.WindowsMenuBarUI", "TakeFocus", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsMenuBarUI$TakeFocus",
		"javax.swing.AbstractAction",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsMenuBarUI"
	};
	$loadClass(WindowsMenuBarUI$TakeFocus, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsMenuBarUI$TakeFocus));
	});
	return class$;
}

$Class* WindowsMenuBarUI$TakeFocus::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com