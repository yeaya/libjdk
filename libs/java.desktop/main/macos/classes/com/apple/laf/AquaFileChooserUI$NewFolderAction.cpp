#include <com/apple/laf/AquaFileChooserUI$NewFolderAction.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

#undef CLOSED_OPTION
#undef ERROR_MESSAGE
#undef OK_CANCEL_OPTION
#undef PLAIN_MESSAGE

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Icon = ::javax::swing::Icon;
using $JDialog = ::javax::swing::JDialog;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JOptionPane = ::javax::swing::JOptionPane;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$NewFolderAction::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$init($AquaFileChooserUI);
	$AbstractAction::init$($AquaFileChooserUI::newFolderAccessibleName);
}

$Object* AquaFileChooserUI$NewFolderAction::showNewFolderDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType, $Icon* icon, $ObjectArray* options, Object$* initialSelectionValue) {
	$useLocalObjectStack();
	$var($JOptionPane, pane, $new($JOptionPane, message, messageType, $JOptionPane::OK_CANCEL_OPTION, icon, options, nullptr));
	pane->setWantsInput(true);
	pane->setInitialSelectionValue(initialSelectionValue);
	$var($JDialog, dialog, pane->createDialog(parentComponent, title));
	pane->selectInitialValue();
	$nc(dialog)->setVisible(true);
	dialog->dispose();
	$var($Object, value, pane->getValue());
	bool var$0 = value == nullptr || value->equals(this->this$0->cancelButtonText);
	if (var$0 || value->equals($($Integer::valueOf($JOptionPane::CLOSED_OPTION)))) {
		return nullptr;
	}
	return pane->getInputValue();
}

void AquaFileChooserUI$NewFolderAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	$var($File, currentDirectory, $nc(fc)->getCurrentDirectory());
	$var($File, newFolder, nullptr);
	$var($StringArray, options, $new($StringArray, {
		this->this$0->createButtonText,
		this->this$0->cancelButtonText
	}));
	$var($String, filename, $cast($String, showNewFolderDialog(fc, this->this$0->newFolderDialogPrompt, this->this$0->newFolderTitleText, $JOptionPane::PLAIN_MESSAGE, nullptr, options, this->this$0->newFolderDefaultName)));
	if (filename != nullptr) {
		try {
			$assign(newFolder, $$nc(fc->getFileSystemView())->createFileObject(currentDirectory, filename));
			if ($nc(newFolder)->exists()) {
				$JOptionPane::showMessageDialog(fc, this->this$0->newFolderExistsErrorText, ""_s, $JOptionPane::ERROR_MESSAGE);
				return;
			}
			newFolder->mkdirs();
		} catch ($Exception& exc) {
			$JOptionPane::showMessageDialog(fc, this->this$0->newFolderErrorText, ""_s, $JOptionPane::ERROR_MESSAGE);
			return;
		}
		this->this$0->openDirectory(newFolder);
	}
}

AquaFileChooserUI$NewFolderAction::AquaFileChooserUI$NewFolderAction() {
}

$Class* AquaFileChooserUI$NewFolderAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$NewFolderAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(AquaFileChooserUI$NewFolderAction, init$, void, $AquaFileChooserUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$NewFolderAction, actionPerformed, void, $ActionEvent*)},
		{"showNewFolderDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;ILjavax/swing/Icon;[Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(AquaFileChooserUI$NewFolderAction, showNewFolderDialog, $Object*, $Component*, Object$*, $String*, int32_t, $Icon*, $ObjectArray*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$NewFolderAction", "com.apple.laf.AquaFileChooserUI", "NewFolderAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$NewFolderAction",
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
	$loadClass(AquaFileChooserUI$NewFolderAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaFileChooserUI$NewFolderAction));
	});
	return class$;
}

$Class* AquaFileChooserUI$NewFolderAction::class$ = nullptr;

		} // laf
	} // apple
} // com