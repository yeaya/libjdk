#include <com/apple/laf/AquaComboBoxUI$11.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JComboBox = ::javax::swing::JComboBox;

namespace com {
	namespace apple {
		namespace laf {

void AquaComboBoxUI$11::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void AquaComboBoxUI$11::actionPerformed($ActionEvent* e) {
	$var($JComboBox, comboBox, $cast($JComboBox, $nc(e)->getSource()));
	$nc(comboBox)->firePopupMenuCanceled();
	comboBox->setPopupVisible(false);
}

bool AquaComboBoxUI$11::isEnabled() {
	bool var$0 = $$nc($AquaComboBoxUI::access$6600(this->this$0))->isPopupVisible();
	return var$0 && $AbstractAction::isEnabled();
}

AquaComboBoxUI$11::AquaComboBoxUI$11() {
}

$Class* AquaComboBoxUI$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$11, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $method(AquaComboBoxUI$11, init$, void, $AquaComboBoxUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaComboBoxUI$11, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(AquaComboBoxUI$11, isEnabled, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaComboBoxUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaComboBoxUI$11", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaComboBoxUI$11",
		"javax.swing.AbstractAction",
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
	$loadClass(AquaComboBoxUI$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaComboBoxUI$11));
	});
	return class$;
}

$Class* AquaComboBoxUI$11::class$ = nullptr;

		} // laf
	} // apple
} // com