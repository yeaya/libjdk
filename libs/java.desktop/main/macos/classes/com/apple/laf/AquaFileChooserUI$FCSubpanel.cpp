#include <com/apple/laf/AquaFileChooserUI$FCSubpanel.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/io/File.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

#undef DIRECTORIES_ONLY

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$FCSubpanel::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

bool AquaFileChooserUI$FCSubpanel::isSelectableInList($JFileChooser* fc, $File* f) {
	if (f == nullptr) {
		return false;
	}
	if ($nc(fc)->getFileSelectionMode() == $JFileChooser::DIRECTORIES_ONLY) {
		return fc->isTraversable(f);
	}
	return fc->accept(f);
}

void AquaFileChooserUI$FCSubpanel::approveSelection($JFileChooser* fc) {
	$nc(fc)->approveSelection();
}

$JButton* AquaFileChooserUI$FCSubpanel::getDefaultButton($JFileChooser* fc) {
	return this->this$0->fApproveButton;
}

$JComponent* AquaFileChooserUI$FCSubpanel::getFocusComponent($JFileChooser* fc) {
	return this->this$0->filenameTextField;
}

$String* AquaFileChooserUI$FCSubpanel::getApproveButtonText($JFileChooser* fc) {
	return this->getApproveButtonText(fc, this->this$0->chooseButtonText);
}

$String* AquaFileChooserUI$FCSubpanel::getApproveButtonText($JFileChooser* fc, $String* fallbackText) {
	$var($String, buttonText, $nc(fc)->getApproveButtonText());
	return buttonText != nullptr ? buttonText : fallbackText;
}

int32_t AquaFileChooserUI$FCSubpanel::getApproveButtonMnemonic($JFileChooser* fc) {
	return $nc(fc)->getApproveButtonMnemonic();
}

$String* AquaFileChooserUI$FCSubpanel::getApproveButtonToolTipText($JFileChooser* fc) {
	return getApproveButtonToolTipText(fc, nullptr);
}

$String* AquaFileChooserUI$FCSubpanel::getApproveButtonToolTipText($JFileChooser* fc, $String* fallbackText) {
	$var($String, tooltipText, $nc(fc)->getApproveButtonToolTipText());
	return tooltipText != nullptr ? tooltipText : fallbackText;
}

$String* AquaFileChooserUI$FCSubpanel::getCancelButtonToolTipText($JFileChooser* fc) {
	return this->this$0->cancelChooseButtonToolTipText;
}

AquaFileChooserUI$FCSubpanel::AquaFileChooserUI$FCSubpanel() {
}

$Class* AquaFileChooserUI$FCSubpanel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$FCSubpanel, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, 0, $method(AquaFileChooserUI$FCSubpanel, init$, void, $AquaFileChooserUI*)},
		{"approveSelection", "(Ljavax/swing/JFileChooser;)V", nullptr, 0, $virtualMethod(AquaFileChooserUI$FCSubpanel, approveSelection, void, $JFileChooser*)},
		{"getApproveButtonMnemonic", "(Ljavax/swing/JFileChooser;)I", nullptr, 0, $virtualMethod(AquaFileChooserUI$FCSubpanel, getApproveButtonMnemonic, int32_t, $JFileChooser*)},
		{"getApproveButtonText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, 0, $virtualMethod(AquaFileChooserUI$FCSubpanel, getApproveButtonText, $String*, $JFileChooser*)},
		{"getApproveButtonText", "(Ljavax/swing/JFileChooser;Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $virtualMethod(AquaFileChooserUI$FCSubpanel, getApproveButtonText, $String*, $JFileChooser*, $String*)},
		{"getApproveButtonToolTipText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, 0, $virtualMethod(AquaFileChooserUI$FCSubpanel, getApproveButtonToolTipText, $String*, $JFileChooser*)},
		{"getApproveButtonToolTipText", "(Ljavax/swing/JFileChooser;Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $virtualMethod(AquaFileChooserUI$FCSubpanel, getApproveButtonToolTipText, $String*, $JFileChooser*, $String*)},
		{"getCancelButtonToolTipText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, 0, $virtualMethod(AquaFileChooserUI$FCSubpanel, getCancelButtonToolTipText, $String*, $JFileChooser*)},
		{"getDefaultButton", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JButton;", nullptr, 0, $virtualMethod(AquaFileChooserUI$FCSubpanel, getDefaultButton, $JButton*, $JFileChooser*)},
		{"getFocusComponent", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JComponent;", nullptr, 0, $virtualMethod(AquaFileChooserUI$FCSubpanel, getFocusComponent, $JComponent*, $JFileChooser*)},
		{"installPanel", "(Ljavax/swing/JFileChooser;Z)V", nullptr, $ABSTRACT, $virtualMethod(AquaFileChooserUI$FCSubpanel, installPanel, void, $JFileChooser*, bool)},
		{"isSelectableInList", "(Ljavax/swing/JFileChooser;Ljava/io/File;)Z", nullptr, 0, $virtualMethod(AquaFileChooserUI$FCSubpanel, isSelectableInList, bool, $JFileChooser*, $File*)},
		{"updateButtonState", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, $ABSTRACT, $virtualMethod(AquaFileChooserUI$FCSubpanel, updateButtonState, void, $JFileChooser*, $File*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$FCSubpanel", "com.apple.laf.AquaFileChooserUI", "FCSubpanel", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.apple.laf.AquaFileChooserUI$FCSubpanel",
		"java.lang.Object",
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
	$loadClass(AquaFileChooserUI$FCSubpanel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileChooserUI$FCSubpanel);
	});
	return class$;
}

$Class* AquaFileChooserUI$FCSubpanel::class$ = nullptr;

		} // laf
	} // apple
} // com