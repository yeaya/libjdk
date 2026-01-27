#include <com/apple/laf/AquaFileChooserUI$DirOrAnyPanel.h>

#include <com/apple/laf/AquaFileChooserUI$FCSubpanel.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/io/File.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$FCSubpanel = ::com::apple::laf::AquaFileChooserUI$FCSubpanel;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$DirOrAnyPanel_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$DirOrAnyPanel, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$DirOrAnyPanel_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, 0, $method(AquaFileChooserUI$DirOrAnyPanel, init$, void, $AquaFileChooserUI*)},
	{"getDefaultButton", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JButton;", nullptr, 0, $virtualMethod(AquaFileChooserUI$DirOrAnyPanel, getDefaultButton, $JButton*, $JFileChooser*)},
	{"installPanel", "(Ljavax/swing/JFileChooser;Z)V", nullptr, 0, $virtualMethod(AquaFileChooserUI$DirOrAnyPanel, installPanel, void, $JFileChooser*, bool)},
	{"updateButtonState", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, 0, $virtualMethod(AquaFileChooserUI$DirOrAnyPanel, updateButtonState, void, $JFileChooser*, $File*)},
	{}
};

$InnerClassInfo _AquaFileChooserUI$DirOrAnyPanel_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$DirOrAnyPanel", "com.apple.laf.AquaFileChooserUI", "DirOrAnyPanel", $ABSTRACT},
	{"com.apple.laf.AquaFileChooserUI$FCSubpanel", "com.apple.laf.AquaFileChooserUI", "FCSubpanel", $ABSTRACT},
	{}
};

$ClassInfo _AquaFileChooserUI$DirOrAnyPanel_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaFileChooserUI$DirOrAnyPanel",
	"com.apple.laf.AquaFileChooserUI$FCSubpanel",
	nullptr,
	_AquaFileChooserUI$DirOrAnyPanel_FieldInfo_,
	_AquaFileChooserUI$DirOrAnyPanel_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$DirOrAnyPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$DirOrAnyPanel($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$DirOrAnyPanel));
}

void AquaFileChooserUI$DirOrAnyPanel::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AquaFileChooserUI$FCSubpanel::init$(this$0);
}

void AquaFileChooserUI$DirOrAnyPanel::installPanel($JFileChooser* fc, bool controlButtonsAreShown) {
	$nc(this->this$0->fOpenButton)->setVisible(false);
}

$JButton* AquaFileChooserUI$DirOrAnyPanel::getDefaultButton($JFileChooser* fc) {
	return this->this$0->getApproveButton(fc);
}

void AquaFileChooserUI$DirOrAnyPanel::updateButtonState($JFileChooser* fc, $File* f) {
	$nc(this->this$0->fOpenButton)->setEnabled(false);
	this->this$0->setDefaultButtonForMode(fc);
}

AquaFileChooserUI$DirOrAnyPanel::AquaFileChooserUI$DirOrAnyPanel() {
}

$Class* AquaFileChooserUI$DirOrAnyPanel::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$DirOrAnyPanel, name, initialize, &_AquaFileChooserUI$DirOrAnyPanel_ClassInfo_, allocate$AquaFileChooserUI$DirOrAnyPanel);
	return class$;
}

$Class* AquaFileChooserUI$DirOrAnyPanel::class$ = nullptr;

		} // laf
	} // apple
} // com