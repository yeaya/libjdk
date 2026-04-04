#include <com/apple/laf/AquaComboBoxUI$2.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$FocusHandler.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef FOCUSED

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $BasicComboBoxUI$FocusHandler = ::javax::swing::plaf::basic::BasicComboBoxUI$FocusHandler;

namespace com {
	namespace apple {
		namespace laf {

void AquaComboBoxUI$2::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$BasicComboBoxUI$FocusHandler::init$(this$0);
}

void AquaComboBoxUI$2::focusGained($FocusEvent* e) {
	$BasicComboBoxUI$FocusHandler::focusGained(e);
	if ($AquaComboBoxUI::access$1100(this->this$0) != nullptr) {
		$$nc($AquaComboBoxUI::access$1200(this->this$0))->repaint();
	}
}

void AquaComboBoxUI$2::focusLost($FocusEvent* e) {
	$useLocalObjectStack();
	$AquaComboBoxUI::access$1302(this->this$0, false);
	if (!$nc(e)->isTemporary()) {
		this->this$0->setPopupVisible($($AquaComboBoxUI::access$1400(this->this$0)), false);
	}
	$$nc($AquaComboBoxUI::access$1500(this->this$0))->repaint();
	$var($AccessibleContext, ac, $$sure($Accessible, $AquaComboBoxUI::access$1600(this->this$0))->getAccessibleContext());
	if (ac != nullptr) {
		$init($AccessibleContext);
		$init($AccessibleState);
		ac->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::FOCUSED, nullptr);
	}
	if ($AquaComboBoxUI::access$1700(this->this$0) != nullptr) {
		$$nc($AquaComboBoxUI::access$1800(this->this$0))->repaint();
	}
}

AquaComboBoxUI$2::AquaComboBoxUI$2() {
}

$Class* AquaComboBoxUI$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $method(AquaComboBoxUI$2, init$, void, $AquaComboBoxUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaComboBoxUI$2, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaComboBoxUI$2, focusLost, void, $FocusEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaComboBoxUI",
		"createFocusListener",
		"()Ljava/awt/event/FocusListener;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaComboBoxUI$2", nullptr, nullptr, 0},
		{"javax.swing.plaf.basic.BasicComboBoxUI$FocusHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "FocusHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaComboBoxUI$2",
		"javax.swing.plaf.basic.BasicComboBoxUI$FocusHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaComboBoxUI"
	};
	$loadClass(AquaComboBoxUI$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaComboBoxUI$2);
	});
	return class$;
}

$Class* AquaComboBoxUI$2::class$ = nullptr;

		} // laf
	} // apple
} // com