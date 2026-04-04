#include <com/apple/laf/AquaMenuUI$AquaMouseInputHandler.h>
#include <com/apple/laf/AquaMenuUI.h>
#include <java/awt/Container.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/plaf/basic/BasicMenuUI$MouseInputHandler.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $AquaMenuUI = ::com::apple::laf::AquaMenuUI;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $BasicMenuUI$MouseInputHandler = ::javax::swing::plaf::basic::BasicMenuUI$MouseInputHandler;

namespace com {
	namespace apple {
		namespace laf {

void AquaMenuUI$AquaMouseInputHandler::init$($AquaMenuUI* this$0) {
	$set(this, this$0, this$0);
	$BasicMenuUI$MouseInputHandler::init$(this$0);
}

void AquaMenuUI$AquaMouseInputHandler::mouseEntered($MouseEvent* e) {
	$useLocalObjectStack();
	$var($JMenu, menu, $cast($JMenu, $AquaMenuUI::access$500(this->this$0)));
	if (!$nc(menu)->isEnabled()) {
		return;
	}
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	$var($MenuElementArray, selectedPath, $nc(manager)->getSelectedPath());
	if (!($nc(selectedPath)->length > 0 && $equals(selectedPath->get(selectedPath->length - 1), menu->getPopupMenu()))) {
		bool var$0 = !menu->isTopLevelMenu();
		if (var$0 || (selectedPath->length > 0 && $equals(selectedPath->get(0), menu->getParent()))) {
			if (menu->getDelay() == 0) {
				$var($MenuElementArray, var$1, this->this$0->getPath());
				$AquaMenuUI::appendPath(var$1, $(menu->getPopupMenu()));
			} else {
				manager->setSelectedPath($(this->this$0->getPath()));
				$AquaMenuUI::access$600(this->this$0, menu);
			}
		}
	}
}

AquaMenuUI$AquaMouseInputHandler::AquaMenuUI$AquaMouseInputHandler() {
}

$Class* AquaMenuUI$AquaMouseInputHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaMenuUI$AquaMouseInputHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaMenuUI;)V", nullptr, $PROTECTED, $method(AquaMenuUI$AquaMouseInputHandler, init$, void, $AquaMenuUI*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaMenuUI$AquaMouseInputHandler, mouseEntered, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaMenuUI$AquaMouseInputHandler", "com.apple.laf.AquaMenuUI", "AquaMouseInputHandler", $PROTECTED},
		{"javax.swing.plaf.basic.BasicMenuUI$MouseInputHandler", "javax.swing.plaf.basic.BasicMenuUI", "MouseInputHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaMenuUI$AquaMouseInputHandler",
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
		"com.apple.laf.AquaMenuUI"
	};
	$loadClass(AquaMenuUI$AquaMouseInputHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaMenuUI$AquaMouseInputHandler));
	});
	return class$;
}

$Class* AquaMenuUI$AquaMouseInputHandler::class$ = nullptr;

		} // laf
	} // apple
} // com