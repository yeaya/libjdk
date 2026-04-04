#include <com/apple/laf/AquaFileChooserUI$OpenDirOrAnyPanel.h>
#include <com/apple/laf/AquaFileChooserUI$DirOrAnyPanel.h>
#include <com/apple/laf/AquaFileChooserUI$FCSubpanel.h>
#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/io/File.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

#undef DIRECTORIES_ONLY

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$DirOrAnyPanel = ::com::apple::laf::AquaFileChooserUI$DirOrAnyPanel;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$OpenDirOrAnyPanel::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AquaFileChooserUI$DirOrAnyPanel::init$(this$0);
}

void AquaFileChooserUI$OpenDirOrAnyPanel::installPanel($JFileChooser* fc, bool controlButtonsAreShown) {
	$AquaFileChooserUI$DirOrAnyPanel::installPanel(fc, controlButtonsAreShown);
	$nc(this->this$0->fTextfieldPanel)->setVisible(false);
	$nc(this->this$0->fNewFolderButton)->setVisible(false);
}

$JComponent* AquaFileChooserUI$OpenDirOrAnyPanel::getFocusComponent($JFileChooser* fc) {
	return this->this$0->fFileList;
}

int32_t AquaFileChooserUI$OpenDirOrAnyPanel::getApproveButtonMnemonic($JFileChooser* fc) {
	return this->this$0->chooseButtonMnemonic;
}

$String* AquaFileChooserUI$OpenDirOrAnyPanel::getApproveButtonToolTipText($JFileChooser* fc) {
	$var($String, fallbackText, nullptr);
	if ($nc(fc)->getFileSelectionMode() == $JFileChooser::DIRECTORIES_ONLY) {
		$assign(fallbackText, this->this$0->chooseFolderButtonToolTipText);
	} else {
		$assign(fallbackText, this->this$0->chooseItemButtonToolTipText);
	}
	return this->getApproveButtonToolTipText(fc, fallbackText);
}

void AquaFileChooserUI$OpenDirOrAnyPanel::updateButtonState($JFileChooser* fc, $File* f) {
	$$nc(this->this$0->getApproveButton(fc))->setEnabled(f != nullptr);
	$AquaFileChooserUI$DirOrAnyPanel::updateButtonState(fc, f);
}

AquaFileChooserUI$OpenDirOrAnyPanel::AquaFileChooserUI$OpenDirOrAnyPanel() {
}

$Class* AquaFileChooserUI$OpenDirOrAnyPanel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$OpenDirOrAnyPanel, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, 0, $method(AquaFileChooserUI$OpenDirOrAnyPanel, init$, void, $AquaFileChooserUI*)},
		{"getApproveButtonMnemonic", "(Ljavax/swing/JFileChooser;)I", nullptr, 0, $virtualMethod(AquaFileChooserUI$OpenDirOrAnyPanel, getApproveButtonMnemonic, int32_t, $JFileChooser*)},
		{"getApproveButtonToolTipText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, 0, $virtualMethod(AquaFileChooserUI$OpenDirOrAnyPanel, getApproveButtonToolTipText, $String*, $JFileChooser*)},
		{"getFocusComponent", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JComponent;", nullptr, 0, $virtualMethod(AquaFileChooserUI$OpenDirOrAnyPanel, getFocusComponent, $JComponent*, $JFileChooser*)},
		{"installPanel", "(Ljavax/swing/JFileChooser;Z)V", nullptr, 0, $virtualMethod(AquaFileChooserUI$OpenDirOrAnyPanel, installPanel, void, $JFileChooser*, bool)},
		{"updateButtonState", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, 0, $virtualMethod(AquaFileChooserUI$OpenDirOrAnyPanel, updateButtonState, void, $JFileChooser*, $File*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$OpenDirOrAnyPanel", "com.apple.laf.AquaFileChooserUI", "OpenDirOrAnyPanel", 0},
		{"com.apple.laf.AquaFileChooserUI$DirOrAnyPanel", "com.apple.laf.AquaFileChooserUI", "DirOrAnyPanel", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$OpenDirOrAnyPanel",
		"com.apple.laf.AquaFileChooserUI$DirOrAnyPanel",
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
	$loadClass(AquaFileChooserUI$OpenDirOrAnyPanel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileChooserUI$OpenDirOrAnyPanel);
	});
	return class$;
}

$Class* AquaFileChooserUI$OpenDirOrAnyPanel::class$ = nullptr;

		} // laf
	} // apple
} // com