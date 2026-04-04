#include <com/apple/laf/AquaFileChooserUI$DefaultButtonAction.h>
#include <com/apple/laf/AquaFileChooserUI$FCSubpanel.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $Toolkit = ::java::awt::Toolkit;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JButton = ::javax::swing::JButton;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$DefaultButtonAction::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void AquaFileChooserUI$DefaultButtonAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JRootPane, root, $$nc(this->this$0->getFileChooser())->getRootPane());
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	$var($JButton, owner, $nc(root)->getDefaultButton());
	bool var$0 = owner != nullptr && $SwingUtilities::getRootPane(owner) == root;
	if (var$0 && owner->isEnabled()) {
		owner->doClick(20);
	} else if (!$nc(fc)->getControlButtonsAreShown()) {
		$var($JButton, defaultButton, $nc(this->this$0->fSubPanel)->getDefaultButton(fc));
		if (defaultButton != nullptr) {
			defaultButton->doClick(20);
		}
	} else {
		$$nc($Toolkit::getDefaultToolkit())->beep();
	}
}

bool AquaFileChooserUI$DefaultButtonAction::isEnabled() {
	return true;
}

AquaFileChooserUI$DefaultButtonAction::AquaFileChooserUI$DefaultButtonAction() {
}

$Class* AquaFileChooserUI$DefaultButtonAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$DefaultButtonAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(AquaFileChooserUI$DefaultButtonAction, init$, void, $AquaFileChooserUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$DefaultButtonAction, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$DefaultButtonAction, isEnabled, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$DefaultButtonAction", "com.apple.laf.AquaFileChooserUI", "DefaultButtonAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$DefaultButtonAction",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileChooserUI"
	};
	$loadClass(AquaFileChooserUI$DefaultButtonAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaFileChooserUI$DefaultButtonAction));
	});
	return class$;
}

$Class* AquaFileChooserUI$DefaultButtonAction::class$ = nullptr;

		} // laf
	} // apple
} // com