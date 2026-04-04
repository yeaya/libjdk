#include <javax/swing/plaf/basic/BasicMenuItemUI$Actions.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef CLICK

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuItem = ::javax::swing::JMenuItem;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$String* BasicMenuItemUI$Actions::CLICK = nullptr;

void BasicMenuItemUI$Actions::init$($String* key) {
	$UIAction::init$(key);
}

void BasicMenuItemUI$Actions::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JMenuItem, mi, $cast($JMenuItem, $nc(e)->getSource()));
	$$nc($MenuSelectionManager::defaultManager())->clearSelectedPath();
	$nc(mi)->doClick();
}

BasicMenuItemUI$Actions::BasicMenuItemUI$Actions() {
}

void BasicMenuItemUI$Actions::clinit$($Class* clazz) {
	$assignStatic(BasicMenuItemUI$Actions::CLICK, "doClick"_s);
}

$Class* BasicMenuItemUI$Actions::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CLICK", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicMenuItemUI$Actions, CLICK)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(BasicMenuItemUI$Actions, init$, void, $String*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicMenuItemUI$Actions, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicMenuItemUI$Actions", "javax.swing.plaf.basic.BasicMenuItemUI", "Actions", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicMenuItemUI$Actions",
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
		"javax.swing.plaf.basic.BasicMenuItemUI"
	};
	$loadClass(BasicMenuItemUI$Actions, name, initialize, &classInfo$$, BasicMenuItemUI$Actions::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BasicMenuItemUI$Actions);
	});
	return class$;
}

$Class* BasicMenuItemUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax