#include <javax/swing/plaf/multi/MultiComboBoxUI.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/util/Vector.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/multi/MultiLookAndFeel.h>
#include <jcpp.h>

using $ComponentUIArray = $Array<::javax::swing::plaf::ComponentUI>;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MultiLookAndFeel = ::javax::swing::plaf::multi::MultiLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

void MultiComboBoxUI::init$() {
	$ComboBoxUI::init$();
	$set(this, uis, $new($Vector));
}

$ComponentUIArray* MultiComboBoxUI::getUIs() {
	return $MultiLookAndFeel::uisToArray(this->uis);
}

bool MultiComboBoxUI::isFocusTraversable($JComboBox* a) {
	$useLocalObjectStack();
	bool returnValue = $$cast($ComboBoxUI, $nc(this->uis)->elementAt(0))->isFocusTraversable(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$cast($ComboBoxUI, this->uis->elementAt(i))->isFocusTraversable(a);
	}
	return returnValue;
}

void MultiComboBoxUI::setPopupVisible($JComboBox* a, bool b) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$cast($ComboBoxUI, this->uis->elementAt(i))->setPopupVisible(a, b);
	}
}

bool MultiComboBoxUI::isPopupVisible($JComboBox* a) {
	$useLocalObjectStack();
	bool returnValue = $$cast($ComboBoxUI, $nc(this->uis)->elementAt(0))->isPopupVisible(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$cast($ComboBoxUI, this->uis->elementAt(i))->isPopupVisible(a);
	}
	return returnValue;
}

bool MultiComboBoxUI::contains($JComponent* a, int32_t b, int32_t c) {
	$useLocalObjectStack();
	bool returnValue = $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->contains(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->contains(a, b, c);
	}
	return returnValue;
}

void MultiComboBoxUI::update($Graphics* a, $JComponent* b) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->update(a, b);
	}
}

$ComponentUI* MultiComboBoxUI::createUI($JComponent* a) {
	$init(MultiComboBoxUI);
	$var(MultiComboBoxUI, mui, $new(MultiComboBoxUI));
	return $MultiLookAndFeel::createUIs(mui, mui->uis, a);
}

void MultiComboBoxUI::installUI($JComponent* a) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->installUI(a);
	}
}

void MultiComboBoxUI::uninstallUI($JComponent* a) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->uninstallUI(a);
	}
}

void MultiComboBoxUI::paint($Graphics* a, $JComponent* b) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->paint(a, b);
	}
}

$Dimension* MultiComboBoxUI::getPreferredSize($JComponent* a) {
	$useLocalObjectStack();
	$var($Dimension, returnValue, $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getPreferredSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getPreferredSize(a);
	}
	return returnValue;
}

$Dimension* MultiComboBoxUI::getMinimumSize($JComponent* a) {
	$useLocalObjectStack();
	$var($Dimension, returnValue, $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getMinimumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getMinimumSize(a);
	}
	return returnValue;
}

$Dimension* MultiComboBoxUI::getMaximumSize($JComponent* a) {
	$useLocalObjectStack();
	$var($Dimension, returnValue, $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getMaximumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getMaximumSize(a);
	}
	return returnValue;
}

int32_t MultiComboBoxUI::getAccessibleChildrenCount($JComponent* a) {
	$useLocalObjectStack();
	int32_t returnValue = $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getAccessibleChildrenCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getAccessibleChildrenCount(a);
	}
	return returnValue;
}

$Accessible* MultiComboBoxUI::getAccessibleChild($JComponent* a, int32_t b) {
	$useLocalObjectStack();
	$var($Accessible, returnValue, $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getAccessibleChild(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getAccessibleChild(a, b);
	}
	return returnValue;
}

MultiComboBoxUI::MultiComboBoxUI() {
}

$Class* MultiComboBoxUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uis", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;", $PROTECTED, $field(MultiComboBoxUI, uis)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MultiComboBoxUI, init$, void)},
		{"contains", "(Ljavax/swing/JComponent;II)Z", nullptr, $PUBLIC, $virtualMethod(MultiComboBoxUI, contains, bool, $JComponent*, int32_t, int32_t)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MultiComboBoxUI, createUI, $ComponentUI*, $JComponent*)},
		{"getAccessibleChild", "(Ljavax/swing/JComponent;I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(MultiComboBoxUI, getAccessibleChild, $Accessible*, $JComponent*, int32_t)},
		{"getAccessibleChildrenCount", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC, $virtualMethod(MultiComboBoxUI, getAccessibleChildrenCount, int32_t, $JComponent*)},
		{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MultiComboBoxUI, getMaximumSize, $Dimension*, $JComponent*)},
		{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MultiComboBoxUI, getMinimumSize, $Dimension*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MultiComboBoxUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"getUIs", "()[Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC, $virtualMethod(MultiComboBoxUI, getUIs, $ComponentUIArray*)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MultiComboBoxUI, installUI, void, $JComponent*)},
		{"isFocusTraversable", "(Ljavax/swing/JComboBox;)Z", "(Ljavax/swing/JComboBox<*>;)Z", $PUBLIC, $virtualMethod(MultiComboBoxUI, isFocusTraversable, bool, $JComboBox*)},
		{"isPopupVisible", "(Ljavax/swing/JComboBox;)Z", "(Ljavax/swing/JComboBox<*>;)Z", $PUBLIC, $virtualMethod(MultiComboBoxUI, isPopupVisible, bool, $JComboBox*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MultiComboBoxUI, paint, void, $Graphics*, $JComponent*)},
		{"setPopupVisible", "(Ljavax/swing/JComboBox;Z)V", "(Ljavax/swing/JComboBox<*>;Z)V", $PUBLIC, $virtualMethod(MultiComboBoxUI, setPopupVisible, void, $JComboBox*, bool)},
		{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MultiComboBoxUI, uninstallUI, void, $JComponent*)},
		{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MultiComboBoxUI, update, void, $Graphics*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.multi.MultiComboBoxUI",
		"javax.swing.plaf.ComboBoxUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MultiComboBoxUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiComboBoxUI);
	});
	return class$;
}

$Class* MultiComboBoxUI::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax