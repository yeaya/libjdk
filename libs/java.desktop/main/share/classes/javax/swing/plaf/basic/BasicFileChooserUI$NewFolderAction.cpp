#include <javax/swing/plaf/basic/BasicFileChooserUI$NewFolderAction.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef ACTION_NEW_FOLDER
#undef ERROR_MESSAGE
#undef WARNING_MESSAGE

using $FileArray = $Array<::java::io::File>;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JOptionPane = ::javax::swing::JOptionPane;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $FilePane = ::sun::swing::FilePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicFileChooserUI$NewFolderAction::init$($BasicFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$init($FilePane);
	$AbstractAction::init$($FilePane::ACTION_NEW_FOLDER);
}

void BasicFileChooserUI$NewFolderAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	if (this->this$0->readOnly) {
		return;
	}
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	$var($File, currentDirectory, $nc(fc)->getCurrentDirectory());
	if (!$nc(currentDirectory)->exists()) {
		$JOptionPane::showMessageDialog(fc, this->this$0->newFolderParentDoesntExistText, this->this$0->newFolderParentDoesntExistTitleText, $JOptionPane::WARNING_MESSAGE);
		return;
	}
	$var($File, newFolder, nullptr);
	try {
		$assign(newFolder, $$nc(fc->getFileSystemView())->createNewFolder(currentDirectory));
		if (fc->isMultiSelectionEnabled()) {
			fc->setSelectedFiles($$new($FileArray, {newFolder}));
		} else {
			fc->setSelectedFile(newFolder);
		}
	} catch ($IOException& exc) {
		$JOptionPane::showMessageDialog(fc, $$str({this->this$0->newFolderErrorText, this->this$0->newFolderErrorSeparator, exc}), this->this$0->newFolderErrorText, $JOptionPane::ERROR_MESSAGE);
		return;
	}
	fc->rescanCurrentDirectory();
}

BasicFileChooserUI$NewFolderAction::BasicFileChooserUI$NewFolderAction() {
}

$Class* BasicFileChooserUI$NewFolderAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$NewFolderAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;)V", nullptr, $PROTECTED, $method(BasicFileChooserUI$NewFolderAction, init$, void, $BasicFileChooserUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$NewFolderAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicFileChooserUI$NewFolderAction", "javax.swing.plaf.basic.BasicFileChooserUI", "NewFolderAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicFileChooserUI$NewFolderAction",
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
		"javax.swing.plaf.basic.BasicFileChooserUI"
	};
	$loadClass(BasicFileChooserUI$NewFolderAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicFileChooserUI$NewFolderAction));
	});
	return class$;
}

$Class* BasicFileChooserUI$NewFolderAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax