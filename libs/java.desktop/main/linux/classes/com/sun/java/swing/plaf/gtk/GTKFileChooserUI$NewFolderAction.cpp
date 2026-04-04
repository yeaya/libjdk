#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$NewFolderAction.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <java/text/MessageFormat.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef ACTION_NEW_FOLDER
#undef ERROR_MESSAGE
#undef PLAIN_MESSAGE

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageFormat = ::java::text::MessageFormat;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JOptionPane = ::javax::swing::JOptionPane;
using $FilePane = ::sun::swing::FilePane;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

void GTKFileChooserUI$NewFolderAction::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$init($FilePane);
	$AbstractAction::init$($FilePane::ACTION_NEW_FOLDER);
}

void GTKFileChooserUI$NewFolderAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	if (this->this$0->readOnly) {
		return;
	}
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	$var($File, currentDirectory, $nc(fc)->getCurrentDirectory());
	$var($String, dirName, $JOptionPane::showInputDialog(fc, this->this$0->newFolderDialogText, this->this$0->newFolderButtonText, $JOptionPane::PLAIN_MESSAGE));
	if (dirName != nullptr) {
		if (!$nc(currentDirectory)->exists()) {
			$JOptionPane::showMessageDialog(fc, $($MessageFormat::format(this->this$0->newFolderNoDirectoryErrorText, $$new($ObjectArray, {dirName}))), this->this$0->newFolderNoDirectoryErrorTitleText, $JOptionPane::ERROR_MESSAGE);
			return;
		}
		$var($File, newDir, $$nc(fc->getFileSystemView())->createFileObject(currentDirectory, dirName));
		if (newDir == nullptr || !newDir->mkdir()) {
			$JOptionPane::showMessageDialog(fc, $$str({this->this$0->newFolderErrorText, this->this$0->newFolderErrorSeparator, " \""_s, dirName, "\""_s}), this->this$0->newFolderErrorText, $JOptionPane::ERROR_MESSAGE);
		}
		fc->rescanCurrentDirectory();
	}
}

GTKFileChooserUI$NewFolderAction::GTKFileChooserUI$NewFolderAction() {
}

$Class* GTKFileChooserUI$NewFolderAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$NewFolderAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PROTECTED, $method(GTKFileChooserUI$NewFolderAction, init$, void, $GTKFileChooserUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(GTKFileChooserUI$NewFolderAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$NewFolderAction", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "NewFolderAction", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$NewFolderAction",
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
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
	};
	$loadClass(GTKFileChooserUI$NewFolderAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GTKFileChooserUI$NewFolderAction));
	});
	return class$;
}

$Class* GTKFileChooserUI$NewFolderAction::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com