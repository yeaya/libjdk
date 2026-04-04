#include <javax/swing/plaf/PopupMenuUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void PopupMenuUI::init$() {
	$ComponentUI::init$();
}

bool PopupMenuUI::isPopupTrigger($MouseEvent* e) {
	return $nc(e)->isPopupTrigger();
}

$Popup* PopupMenuUI::getPopup($JPopupMenu* popup, int32_t x, int32_t y) {
	$useLocalObjectStack();
	$var($PopupFactory, popupFactory, $PopupFactory::getSharedInstance());
	return $nc(popupFactory)->getPopup($($nc(popup)->getInvoker()), popup, x, y);
}

PopupMenuUI::PopupMenuUI() {
}

$Class* PopupMenuUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(PopupMenuUI, init$, void)},
		{"getPopup", "(Ljavax/swing/JPopupMenu;II)Ljavax/swing/Popup;", nullptr, $PUBLIC, $virtualMethod(PopupMenuUI, getPopup, $Popup*, $JPopupMenu*, int32_t, int32_t)},
		{"isPopupTrigger", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC, $virtualMethod(PopupMenuUI, isPopupTrigger, bool, $MouseEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.PopupMenuUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PopupMenuUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PopupMenuUI);
	});
	return class$;
}

$Class* PopupMenuUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax