#include <javax/swing/plaf/basic/BasicMenuBarUI$Actions.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/plaf/basic/BasicMenuBarUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef TAKE_FOCUS

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$String* BasicMenuBarUI$Actions::TAKE_FOCUS = nullptr;

void BasicMenuBarUI$Actions::init$($String* key) {
	$UIAction::init$(key);
}

void BasicMenuBarUI$Actions::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JMenuBar, menuBar, $cast($JMenuBar, $nc(e)->getSource()));
	$var($MenuSelectionManager, defaultManager, $MenuSelectionManager::defaultManager());
	$var($MenuElementArray, me, nullptr);
	$var($MenuElementArray, subElements, nullptr);
	$var($JMenu, menu, $nc(menuBar)->getMenu(0));
	if (menu != nullptr) {
		$assign(me, $new($MenuElementArray, 3));
		me->set(0, $cast($MenuElement, menuBar));
		me->set(1, $cast($MenuElement, menu));
		me->set(2, $$cast($MenuElement, menu->getPopupMenu()));
		$nc(defaultManager)->setSelectedPath(me);
	}
}

BasicMenuBarUI$Actions::BasicMenuBarUI$Actions() {
}

void BasicMenuBarUI$Actions::clinit$($Class* clazz) {
	$assignStatic(BasicMenuBarUI$Actions::TAKE_FOCUS, "takeFocus"_s);
}

$Class* BasicMenuBarUI$Actions::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TAKE_FOCUS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicMenuBarUI$Actions, TAKE_FOCUS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(BasicMenuBarUI$Actions, init$, void, $String*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicMenuBarUI$Actions, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicMenuBarUI$Actions", "javax.swing.plaf.basic.BasicMenuBarUI", "Actions", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicMenuBarUI$Actions",
		"sun.swing.UIAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicMenuBarUI"
	};
	$loadClass(BasicMenuBarUI$Actions, name, initialize, &classInfo$$, BasicMenuBarUI$Actions::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BasicMenuBarUI$Actions);
	});
	return class$;
}

$Class* BasicMenuBarUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax