#include <com/apple/laf/AquaFileChooserUI$DirectoryComboBoxAction.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$DirectoryComboBoxAction::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$("DirectoryComboBoxAction"_s);
}

void AquaFileChooserUI$DirectoryComboBoxAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$$nc(this->this$0->getFileChooser())->setCurrentDirectory($$cast($File, $nc(this->this$0->directoryComboBox)->getSelectedItem()));
}

AquaFileChooserUI$DirectoryComboBoxAction::AquaFileChooserUI$DirectoryComboBoxAction() {
}

$Class* AquaFileChooserUI$DirectoryComboBoxAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$DirectoryComboBoxAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(AquaFileChooserUI$DirectoryComboBoxAction, init$, void, $AquaFileChooserUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$DirectoryComboBoxAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$DirectoryComboBoxAction", "com.apple.laf.AquaFileChooserUI", "DirectoryComboBoxAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$DirectoryComboBoxAction",
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
	$loadClass(AquaFileChooserUI$DirectoryComboBoxAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaFileChooserUI$DirectoryComboBoxAction));
	});
	return class$;
}

$Class* AquaFileChooserUI$DirectoryComboBoxAction::class$ = nullptr;

		} // laf
	} // apple
} // com