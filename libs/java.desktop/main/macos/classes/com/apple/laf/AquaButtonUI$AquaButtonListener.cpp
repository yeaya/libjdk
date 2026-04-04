#include <com/apple/laf/AquaButtonUI$AquaButtonListener.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <com/apple/laf/AquaButtonUI.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaRootPaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/AncestorEvent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/RootPaneUI.h>
#include <javax/swing/plaf/basic/BasicButtonListener.h>
#include <jcpp.h>

#undef FRAME_ACTIVE_PROPERTY

using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaButtonExtendedTypes = ::com::apple::laf::AquaButtonExtendedTypes;
using $AquaButtonUI = ::com::apple::laf::AquaButtonUI;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaRootPaneUI = ::com::apple::laf::AquaRootPaneUI;
using $Component = ::java::awt::Component;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JRootPane = ::javax::swing::JRootPane;
using $Border = ::javax::swing::border::Border;
using $AncestorEvent = ::javax::swing::event::AncestorEvent;
using $RootPaneUI = ::javax::swing::plaf::RootPaneUI;
using $BasicButtonListener = ::javax::swing::plaf::basic::BasicButtonListener;

namespace com {
	namespace apple {
		namespace laf {

int32_t AquaButtonUI$AquaButtonListener::hashCode() {
	 return this->$BasicButtonListener::hashCode();
}

bool AquaButtonUI$AquaButtonListener::equals(Object$* arg0) {
	 return this->$BasicButtonListener::equals(arg0);
}

$Object* AquaButtonUI$AquaButtonListener::clone() {
	 return this->$BasicButtonListener::clone();
}

$String* AquaButtonUI$AquaButtonListener::toString() {
	 return this->$BasicButtonListener::toString();
}

void AquaButtonUI$AquaButtonListener::finalize() {
	this->$BasicButtonListener::finalize();
}

void AquaButtonUI$AquaButtonListener::init$($AquaButtonUI* this$0, $AbstractButton* b) {
	$set(this, this$0, this$0);
	$BasicButtonListener::init$(b);
	$set(this, b, b);
}

void AquaButtonUI$AquaButtonListener::focusGained($FocusEvent* e) {
	$$sure($Component, $nc(e)->getSource())->repaint();
}

void AquaButtonUI$AquaButtonListener::focusLost($FocusEvent* e) {
	$useLocalObjectStack();
	$$nc($nc(this->b)->getModel())->setPressed(false);
	$$sure($Component, $nc(e)->getSource())->repaint();
}

void AquaButtonUI$AquaButtonListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$BasicButtonListener::propertyChange(e);
	$var($String, propertyName, $nc(e)->getPropertyName());
	$init($AquaFocusHandler);
	if ($nc($AquaFocusHandler::FRAME_ACTIVE_PROPERTY)->equals(propertyName)) {
		$nc(this->b)->repaint();
		return;
	}
	bool var$0 = "icon"_s->equals(propertyName);
	if (var$0 || "text"_s->equals(propertyName)) {
		this->this$0->setThemeBorder(this->b);
		return;
	}
	if ("JButton.buttonType"_s->equals(propertyName)) {
		$var($String, value, $cast($String, e->getNewValue()));
		$var($Border, border, $AquaButtonExtendedTypes::getBorderForPosition(this->b, value, $($nc(this->b)->getClientProperty("JButton.segmentPosition"_s))));
		if (border != nullptr) {
			this->b->setBorder(border);
		}
		return;
	}
	if ("JButton.segmentPosition"_s->equals(propertyName)) {
		$var($Border, border, $nc(this->b)->getBorder());
		if (!($instanceOf($AquaBorder, border))) {
			return;
		}
		$var($AbstractButton, var$1, this->b);
		$var($Object, var$2, this->b->getClientProperty("JButton.buttonType"_s));
		this->b->setBorder($($AquaButtonExtendedTypes::getBorderForPosition(var$1, var$2, $(e->getNewValue()))));
	}
	if ("componentOrientation"_s->equals(propertyName)) {
		$var($Border, border, $nc(this->b)->getBorder());
		if (!($instanceOf($AquaBorder, border))) {
			return;
		}
		$var($Object, buttonType, this->b->getClientProperty("JButton.buttonType"_s));
		$var($Object, buttonPosition, this->b->getClientProperty("JButton.segmentPosition"_s));
		if (buttonType != nullptr && buttonPosition != nullptr) {
			this->b->setBorder($($AquaButtonExtendedTypes::getBorderForPosition(this->b, buttonType, buttonPosition)));
		}
	}
}

void AquaButtonUI$AquaButtonListener::ancestorMoved($AncestorEvent* e) {
}

void AquaButtonUI$AquaButtonListener::ancestorAdded($AncestorEvent* e) {
	updateDefaultButton();
}

void AquaButtonUI$AquaButtonListener::ancestorRemoved($AncestorEvent* e) {
	updateDefaultButton();
}

void AquaButtonUI$AquaButtonListener::updateDefaultButton() {
	$useLocalObjectStack();
	if (!($instanceOf($JButton, this->b))) {
		return;
	}
	if (!$nc($cast($JButton, this->b))->isDefaultButton()) {
		return;
	}
	$var($JRootPane, rootPane, this->b->getRootPane());
	if (rootPane == nullptr) {
		return;
	}
	$var($RootPaneUI, ui, $cast($RootPaneUI, $nc(rootPane)->getUI()));
	if (!($instanceOf($AquaRootPaneUI, ui))) {
		return;
	}
	$nc($cast($AquaRootPaneUI, ui))->updateDefaultButton(rootPane);
}

AquaButtonUI$AquaButtonListener::AquaButtonUI$AquaButtonListener() {
}

$Class* AquaButtonUI$AquaButtonListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaButtonUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaButtonUI$AquaButtonListener, this$0)},
		{"b", "Ljavax/swing/AbstractButton;", nullptr, $PROTECTED | $FINAL, $field(AquaButtonUI$AquaButtonListener, b)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/apple/laf/AquaButtonUI;Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC, $method(AquaButtonUI$AquaButtonListener, init$, void, $AquaButtonUI*, $AbstractButton*)},
		{"ancestorAdded", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaButtonUI$AquaButtonListener, ancestorAdded, void, $AncestorEvent*)},
		{"ancestorMoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaButtonUI$AquaButtonListener, ancestorMoved, void, $AncestorEvent*)},
		{"ancestorRemoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaButtonUI$AquaButtonListener, ancestorRemoved, void, $AncestorEvent*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaButtonUI$AquaButtonListener, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaButtonUI$AquaButtonListener, focusLost, void, $FocusEvent*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaButtonUI$AquaButtonListener, propertyChange, void, $PropertyChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateDefaultButton", "()V", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI$AquaButtonListener, updateDefaultButton, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonUI$AquaButtonListener", "com.apple.laf.AquaButtonUI", "AquaButtonListener", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaButtonUI$AquaButtonListener",
		"javax.swing.plaf.basic.BasicButtonListener",
		"javax.swing.event.AncestorListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaButtonUI"
	};
	$loadClass(AquaButtonUI$AquaButtonListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaButtonUI$AquaButtonListener));
	});
	return class$;
}

$Class* AquaButtonUI$AquaButtonListener::class$ = nullptr;

		} // laf
	} // apple
} // com