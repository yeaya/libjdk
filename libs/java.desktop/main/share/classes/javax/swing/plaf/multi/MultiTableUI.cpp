#include <javax/swing/plaf/multi/MultiTableUI.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/util/Vector.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TableUI.h>
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
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TableUI = ::javax::swing::plaf::TableUI;
using $MultiLookAndFeel = ::javax::swing::plaf::multi::MultiLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

void MultiTableUI::init$() {
	$TableUI::init$();
	$set(this, uis, $new($Vector));
}

$ComponentUIArray* MultiTableUI::getUIs() {
	return $MultiLookAndFeel::uisToArray(this->uis);
}

bool MultiTableUI::contains($JComponent* a, int32_t b, int32_t c) {
	$useLocalObjectStack();
	bool returnValue = $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->contains(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->contains(a, b, c);
	}
	return returnValue;
}

void MultiTableUI::update($Graphics* a, $JComponent* b) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->update(a, b);
	}
}

$ComponentUI* MultiTableUI::createUI($JComponent* a) {
	$init(MultiTableUI);
	$var(MultiTableUI, mui, $new(MultiTableUI));
	return $MultiLookAndFeel::createUIs(mui, mui->uis, a);
}

void MultiTableUI::installUI($JComponent* a) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->installUI(a);
	}
}

void MultiTableUI::uninstallUI($JComponent* a) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->uninstallUI(a);
	}
}

void MultiTableUI::paint($Graphics* a, $JComponent* b) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->paint(a, b);
	}
}

$Dimension* MultiTableUI::getPreferredSize($JComponent* a) {
	$useLocalObjectStack();
	$var($Dimension, returnValue, $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getPreferredSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getPreferredSize(a);
	}
	return returnValue;
}

$Dimension* MultiTableUI::getMinimumSize($JComponent* a) {
	$useLocalObjectStack();
	$var($Dimension, returnValue, $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getMinimumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getMinimumSize(a);
	}
	return returnValue;
}

$Dimension* MultiTableUI::getMaximumSize($JComponent* a) {
	$useLocalObjectStack();
	$var($Dimension, returnValue, $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getMaximumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getMaximumSize(a);
	}
	return returnValue;
}

int32_t MultiTableUI::getAccessibleChildrenCount($JComponent* a) {
	$useLocalObjectStack();
	int32_t returnValue = $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getAccessibleChildrenCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getAccessibleChildrenCount(a);
	}
	return returnValue;
}

$Accessible* MultiTableUI::getAccessibleChild($JComponent* a, int32_t b) {
	$useLocalObjectStack();
	$var($Accessible, returnValue, $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getAccessibleChild(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getAccessibleChild(a, b);
	}
	return returnValue;
}

MultiTableUI::MultiTableUI() {
}

$Class* MultiTableUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uis", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;", $PROTECTED, $field(MultiTableUI, uis)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MultiTableUI, init$, void)},
		{"contains", "(Ljavax/swing/JComponent;II)Z", nullptr, $PUBLIC, $virtualMethod(MultiTableUI, contains, bool, $JComponent*, int32_t, int32_t)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MultiTableUI, createUI, $ComponentUI*, $JComponent*)},
		{"getAccessibleChild", "(Ljavax/swing/JComponent;I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(MultiTableUI, getAccessibleChild, $Accessible*, $JComponent*, int32_t)},
		{"getAccessibleChildrenCount", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC, $virtualMethod(MultiTableUI, getAccessibleChildrenCount, int32_t, $JComponent*)},
		{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MultiTableUI, getMaximumSize, $Dimension*, $JComponent*)},
		{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MultiTableUI, getMinimumSize, $Dimension*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MultiTableUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"getUIs", "()[Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC, $virtualMethod(MultiTableUI, getUIs, $ComponentUIArray*)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MultiTableUI, installUI, void, $JComponent*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MultiTableUI, paint, void, $Graphics*, $JComponent*)},
		{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MultiTableUI, uninstallUI, void, $JComponent*)},
		{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MultiTableUI, update, void, $Graphics*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.multi.MultiTableUI",
		"javax.swing.plaf.TableUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MultiTableUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiTableUI);
	});
	return class$;
}

$Class* MultiTableUI::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax