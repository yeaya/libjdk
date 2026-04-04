#include <javax/swing/plaf/multi/MultiPopupMenuUI.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/Vector.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/Popup.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/PopupMenuUI.h>
#include <javax/swing/plaf/multi/MultiLookAndFeel.h>
#include <jcpp.h>

using $ComponentUIArray = $Array<::javax::swing::plaf::ComponentUI>;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $Popup = ::javax::swing::Popup;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $PopupMenuUI = ::javax::swing::plaf::PopupMenuUI;
using $MultiLookAndFeel = ::javax::swing::plaf::multi::MultiLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

void MultiPopupMenuUI::init$() {
	$PopupMenuUI::init$();
	$set(this, uis, $new($Vector));
}

$ComponentUIArray* MultiPopupMenuUI::getUIs() {
	return $MultiLookAndFeel::uisToArray(this->uis);
}

bool MultiPopupMenuUI::isPopupTrigger($MouseEvent* a) {
	$useLocalObjectStack();
	bool returnValue = $$cast($PopupMenuUI, $nc(this->uis)->elementAt(0))->isPopupTrigger(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$cast($PopupMenuUI, this->uis->elementAt(i))->isPopupTrigger(a);
	}
	return returnValue;
}

$Popup* MultiPopupMenuUI::getPopup($JPopupMenu* a, int32_t b, int32_t c) {
	$useLocalObjectStack();
	$var($Popup, returnValue, $$cast($PopupMenuUI, $nc(this->uis)->elementAt(0))->getPopup(a, b, c));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$cast($PopupMenuUI, this->uis->elementAt(i))->getPopup(a, b, c);
	}
	return returnValue;
}

bool MultiPopupMenuUI::contains($JComponent* a, int32_t b, int32_t c) {
	$useLocalObjectStack();
	bool returnValue = $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->contains(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->contains(a, b, c);
	}
	return returnValue;
}

void MultiPopupMenuUI::update($Graphics* a, $JComponent* b) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->update(a, b);
	}
}

$ComponentUI* MultiPopupMenuUI::createUI($JComponent* a) {
	$init(MultiPopupMenuUI);
	$var(MultiPopupMenuUI, mui, $new(MultiPopupMenuUI));
	return $MultiLookAndFeel::createUIs(mui, mui->uis, a);
}

void MultiPopupMenuUI::installUI($JComponent* a) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->installUI(a);
	}
}

void MultiPopupMenuUI::uninstallUI($JComponent* a) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->uninstallUI(a);
	}
}

void MultiPopupMenuUI::paint($Graphics* a, $JComponent* b) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->paint(a, b);
	}
}

$Dimension* MultiPopupMenuUI::getPreferredSize($JComponent* a) {
	$useLocalObjectStack();
	$var($Dimension, returnValue, $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getPreferredSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getPreferredSize(a);
	}
	return returnValue;
}

$Dimension* MultiPopupMenuUI::getMinimumSize($JComponent* a) {
	$useLocalObjectStack();
	$var($Dimension, returnValue, $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getMinimumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getMinimumSize(a);
	}
	return returnValue;
}

$Dimension* MultiPopupMenuUI::getMaximumSize($JComponent* a) {
	$useLocalObjectStack();
	$var($Dimension, returnValue, $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getMaximumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getMaximumSize(a);
	}
	return returnValue;
}

int32_t MultiPopupMenuUI::getAccessibleChildrenCount($JComponent* a) {
	$useLocalObjectStack();
	int32_t returnValue = $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getAccessibleChildrenCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getAccessibleChildrenCount(a);
	}
	return returnValue;
}

$Accessible* MultiPopupMenuUI::getAccessibleChild($JComponent* a, int32_t b) {
	$useLocalObjectStack();
	$var($Accessible, returnValue, $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getAccessibleChild(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getAccessibleChild(a, b);
	}
	return returnValue;
}

MultiPopupMenuUI::MultiPopupMenuUI() {
}

$Class* MultiPopupMenuUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uis", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;", $PROTECTED, $field(MultiPopupMenuUI, uis)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MultiPopupMenuUI, init$, void)},
		{"contains", "(Ljavax/swing/JComponent;II)Z", nullptr, $PUBLIC, $virtualMethod(MultiPopupMenuUI, contains, bool, $JComponent*, int32_t, int32_t)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MultiPopupMenuUI, createUI, $ComponentUI*, $JComponent*)},
		{"getAccessibleChild", "(Ljavax/swing/JComponent;I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(MultiPopupMenuUI, getAccessibleChild, $Accessible*, $JComponent*, int32_t)},
		{"getAccessibleChildrenCount", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC, $virtualMethod(MultiPopupMenuUI, getAccessibleChildrenCount, int32_t, $JComponent*)},
		{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MultiPopupMenuUI, getMaximumSize, $Dimension*, $JComponent*)},
		{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MultiPopupMenuUI, getMinimumSize, $Dimension*, $JComponent*)},
		{"getPopup", "(Ljavax/swing/JPopupMenu;II)Ljavax/swing/Popup;", nullptr, $PUBLIC, $virtualMethod(MultiPopupMenuUI, getPopup, $Popup*, $JPopupMenu*, int32_t, int32_t)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MultiPopupMenuUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"getUIs", "()[Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC, $virtualMethod(MultiPopupMenuUI, getUIs, $ComponentUIArray*)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MultiPopupMenuUI, installUI, void, $JComponent*)},
		{"isPopupTrigger", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC, $virtualMethod(MultiPopupMenuUI, isPopupTrigger, bool, $MouseEvent*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MultiPopupMenuUI, paint, void, $Graphics*, $JComponent*)},
		{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MultiPopupMenuUI, uninstallUI, void, $JComponent*)},
		{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MultiPopupMenuUI, update, void, $Graphics*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.multi.MultiPopupMenuUI",
		"javax.swing.plaf.PopupMenuUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MultiPopupMenuUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiPopupMenuUI);
	});
	return class$;
}

$Class* MultiPopupMenuUI::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax