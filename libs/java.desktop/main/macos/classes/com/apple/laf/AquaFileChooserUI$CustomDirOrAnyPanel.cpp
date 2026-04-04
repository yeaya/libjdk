#include <com/apple/laf/AquaFileChooserUI$CustomDirOrAnyPanel.h>
#include <com/apple/laf/AquaFileChooserUI$DirOrAnyPanel.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/io/File.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$DirOrAnyPanel = ::com::apple::laf::AquaFileChooserUI$DirOrAnyPanel;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$CustomDirOrAnyPanel::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AquaFileChooserUI$DirOrAnyPanel::init$(this$0);
}

void AquaFileChooserUI$CustomDirOrAnyPanel::installPanel($JFileChooser* fc, bool controlButtonsAreShown) {
	$AquaFileChooserUI$DirOrAnyPanel::installPanel(fc, controlButtonsAreShown);
	$nc(this->this$0->fTextfieldPanel)->setVisible(true);
	$nc(this->this$0->fNewFolderButton)->setVisible(true);
}

void AquaFileChooserUI$CustomDirOrAnyPanel::approveSelection($JFileChooser* fc) {
	$useLocalObjectStack();
	$var($File, f, this->this$0->makeFile(fc, $(this->this$0->getFileName())));
	if (f != nullptr) {
		this->this$0->selectionInProgress = true;
		$$nc(this->this$0->getFileChooser())->setSelectedFile(f);
		this->this$0->selectionInProgress = false;
	}
	$$nc(this->this$0->getFileChooser())->approveSelection();
}

void AquaFileChooserUI$CustomDirOrAnyPanel::updateButtonState($JFileChooser* fc, $File* f) {
	$$nc(this->this$0->getApproveButton(fc))->setEnabled(f != nullptr || this->this$0->textfieldIsValid());
	$AquaFileChooserUI$DirOrAnyPanel::updateButtonState(fc, f);
}

AquaFileChooserUI$CustomDirOrAnyPanel::AquaFileChooserUI$CustomDirOrAnyPanel() {
}

$Class* AquaFileChooserUI$CustomDirOrAnyPanel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$CustomDirOrAnyPanel, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, 0, $method(AquaFileChooserUI$CustomDirOrAnyPanel, init$, void, $AquaFileChooserUI*)},
		{"approveSelection", "(Ljavax/swing/JFileChooser;)V", nullptr, 0, $virtualMethod(AquaFileChooserUI$CustomDirOrAnyPanel, approveSelection, void, $JFileChooser*)},
		{"installPanel", "(Ljavax/swing/JFileChooser;Z)V", nullptr, 0, $virtualMethod(AquaFileChooserUI$CustomDirOrAnyPanel, installPanel, void, $JFileChooser*, bool)},
		{"updateButtonState", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, 0, $virtualMethod(AquaFileChooserUI$CustomDirOrAnyPanel, updateButtonState, void, $JFileChooser*, $File*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$CustomDirOrAnyPanel", "com.apple.laf.AquaFileChooserUI", "CustomDirOrAnyPanel", 0},
		{"com.apple.laf.AquaFileChooserUI$DirOrAnyPanel", "com.apple.laf.AquaFileChooserUI", "DirOrAnyPanel", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$CustomDirOrAnyPanel",
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
	$loadClass(AquaFileChooserUI$CustomDirOrAnyPanel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileChooserUI$CustomDirOrAnyPanel);
	});
	return class$;
}

$Class* AquaFileChooserUI$CustomDirOrAnyPanel::class$ = nullptr;

		} // laf
	} // apple
} // com