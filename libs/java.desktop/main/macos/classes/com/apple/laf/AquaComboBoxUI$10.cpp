#include <com/apple/laf/AquaComboBoxUI$10.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <jcpp.h>

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JComboBox = ::javax::swing::JComboBox;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;

namespace com {
	namespace apple {
		namespace laf {

void AquaComboBoxUI$10::init$() {
	$AbstractAction::init$();
}

void AquaComboBoxUI$10::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JComboBox, comboBox, $cast($JComboBox, $nc(e)->getSource()));
	if (!$nc(comboBox)->isEnabled()) {
		return;
	}
	if (comboBox->isEditable()) {
		return;
	}
	$var($AquaComboBoxUI, aquaUi, $cast($AquaComboBoxUI, $cast($ComboBoxUI, comboBox->getUI())));
	if (comboBox->isPopupVisible()) {
		comboBox->setSelectedIndex($$nc($$nc($nc(aquaUi)->getPopup())->getList())->getSelectedIndex());
		comboBox->setPopupVisible(false);
		return;
	}
	comboBox->setPopupVisible(true);
}

AquaComboBoxUI$10::AquaComboBoxUI$10() {
}

$Class* AquaComboBoxUI$10::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaComboBoxUI$10, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaComboBoxUI$10, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaComboBoxUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaComboBoxUI$10", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaComboBoxUI$10",
		"javax.swing.AbstractAction",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaComboBoxUI"
	};
	$loadClass(AquaComboBoxUI$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaComboBoxUI$10));
	});
	return class$;
}

$Class* AquaComboBoxUI$10::class$ = nullptr;

		} // laf
	} // apple
} // com