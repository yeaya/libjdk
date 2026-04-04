#include <javax/swing/plaf/multi/MultiScrollBarUI.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/util/Vector.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollBarUI.h>
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
using $ScrollBarUI = ::javax::swing::plaf::ScrollBarUI;
using $MultiLookAndFeel = ::javax::swing::plaf::multi::MultiLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

void MultiScrollBarUI::init$() {
	$ScrollBarUI::init$();
	$set(this, uis, $new($Vector));
}

$ComponentUIArray* MultiScrollBarUI::getUIs() {
	return $MultiLookAndFeel::uisToArray(this->uis);
}

bool MultiScrollBarUI::contains($JComponent* a, int32_t b, int32_t c) {
	$useLocalObjectStack();
	bool returnValue = $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->contains(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->contains(a, b, c);
	}
	return returnValue;
}

void MultiScrollBarUI::update($Graphics* a, $JComponent* b) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->update(a, b);
	}
}

$ComponentUI* MultiScrollBarUI::createUI($JComponent* a) {
	$init(MultiScrollBarUI);
	$var(MultiScrollBarUI, mui, $new(MultiScrollBarUI));
	return $MultiLookAndFeel::createUIs(mui, mui->uis, a);
}

void MultiScrollBarUI::installUI($JComponent* a) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->installUI(a);
	}
}

void MultiScrollBarUI::uninstallUI($JComponent* a) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->uninstallUI(a);
	}
}

void MultiScrollBarUI::paint($Graphics* a, $JComponent* b) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->paint(a, b);
	}
}

$Dimension* MultiScrollBarUI::getPreferredSize($JComponent* a) {
	$useLocalObjectStack();
	$var($Dimension, returnValue, $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getPreferredSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getPreferredSize(a);
	}
	return returnValue;
}

$Dimension* MultiScrollBarUI::getMinimumSize($JComponent* a) {
	$useLocalObjectStack();
	$var($Dimension, returnValue, $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getMinimumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getMinimumSize(a);
	}
	return returnValue;
}

$Dimension* MultiScrollBarUI::getMaximumSize($JComponent* a) {
	$useLocalObjectStack();
	$var($Dimension, returnValue, $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getMaximumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getMaximumSize(a);
	}
	return returnValue;
}

int32_t MultiScrollBarUI::getAccessibleChildrenCount($JComponent* a) {
	$useLocalObjectStack();
	int32_t returnValue = $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getAccessibleChildrenCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getAccessibleChildrenCount(a);
	}
	return returnValue;
}

$Accessible* MultiScrollBarUI::getAccessibleChild($JComponent* a, int32_t b) {
	$useLocalObjectStack();
	$var($Accessible, returnValue, $$sure($ComponentUI, $nc(this->uis)->elementAt(0))->getAccessibleChild(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$$sure($ComponentUI, this->uis->elementAt(i))->getAccessibleChild(a, b);
	}
	return returnValue;
}

MultiScrollBarUI::MultiScrollBarUI() {
}

$Class* MultiScrollBarUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uis", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;", $PROTECTED, $field(MultiScrollBarUI, uis)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MultiScrollBarUI, init$, void)},
		{"contains", "(Ljavax/swing/JComponent;II)Z", nullptr, $PUBLIC, $virtualMethod(MultiScrollBarUI, contains, bool, $JComponent*, int32_t, int32_t)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MultiScrollBarUI, createUI, $ComponentUI*, $JComponent*)},
		{"getAccessibleChild", "(Ljavax/swing/JComponent;I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(MultiScrollBarUI, getAccessibleChild, $Accessible*, $JComponent*, int32_t)},
		{"getAccessibleChildrenCount", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC, $virtualMethod(MultiScrollBarUI, getAccessibleChildrenCount, int32_t, $JComponent*)},
		{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MultiScrollBarUI, getMaximumSize, $Dimension*, $JComponent*)},
		{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MultiScrollBarUI, getMinimumSize, $Dimension*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MultiScrollBarUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"getUIs", "()[Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC, $virtualMethod(MultiScrollBarUI, getUIs, $ComponentUIArray*)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MultiScrollBarUI, installUI, void, $JComponent*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MultiScrollBarUI, paint, void, $Graphics*, $JComponent*)},
		{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MultiScrollBarUI, uninstallUI, void, $JComponent*)},
		{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MultiScrollBarUI, update, void, $Graphics*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.multi.MultiScrollBarUI",
		"javax.swing.plaf.ScrollBarUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MultiScrollBarUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiScrollBarUI);
	});
	return class$;
}

$Class* MultiScrollBarUI::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax