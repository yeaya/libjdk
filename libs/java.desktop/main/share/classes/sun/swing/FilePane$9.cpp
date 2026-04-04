#include <sun/swing/FilePane$9.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JFileChooser.h>
#include <sun/swing/FilePane$FileChooserUIAccessor.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef ACTION_COMMAND_KEY
#undef ACTION_NEW_FOLDER

using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $JFileChooser = ::javax::swing::JFileChooser;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

void FilePane$9::init$($FilePane* this$0, $String* name) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$AbstractAction::init$(name);
	{
		$init($Action);
		$init($FilePane);
		putValue($Action::ACTION_COMMAND_KEY, $FilePane::ACTION_NEW_FOLDER);
		$var($File, currentDirectory, $$nc(this->this$0->getFileChooser())->getCurrentDirectory());
		if (currentDirectory != nullptr) {
			setEnabled(this->this$0->canWrite(currentDirectory));
		}
	}
}

void FilePane$9::actionPerformed($ActionEvent* ev) {
	$useLocalObjectStack();
	if (this->basicNewFolderAction == nullptr) {
		$set(this, basicNewFolderAction, $nc(this->this$0->fileChooserUIAccessor)->getNewFolderAction());
	}
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	$var($File, oldFile, $nc(fc)->getSelectedFile());
	$nc(this->basicNewFolderAction)->actionPerformed(ev);
	$var($File, newFile, fc->getSelectedFile());
	bool var$0 = newFile != nullptr && !newFile->equals(oldFile);
	if (var$0 && newFile->isDirectory()) {
		$set(this->this$0, newFolderFile, newFile);
	}
}

FilePane$9::FilePane$9() {
}

$Class* FilePane$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$9, this$0)},
		{"basicNewFolderAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(FilePane$9, basicNewFolderAction)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/FilePane;Ljava/lang/String;)V", nullptr, 0, $method(FilePane$9, init$, void, $FilePane*, $String*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(FilePane$9, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.FilePane",
		"getNewFolderAction",
		"()Ljavax/swing/Action;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.FilePane$9", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.FilePane$9",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.FilePane"
	};
	$loadClass(FilePane$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FilePane$9));
	});
	return class$;
}

$Class* FilePane$9::class$ = nullptr;

	} // swing
} // sun