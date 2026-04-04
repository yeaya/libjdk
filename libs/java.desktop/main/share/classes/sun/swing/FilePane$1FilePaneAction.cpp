#include <sun/swing/FilePane$1FilePaneAction.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/ListSelectionModel.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef ACTION_COMMAND_KEY

using $ActionEvent = ::java::awt::event::ActionEvent;
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

void FilePane$1FilePaneAction::init$($FilePane* this$0, $String* name) {
	FilePane$1FilePaneAction::init$(this$0, name, name);
}

void FilePane$1FilePaneAction::init$($FilePane* this$0, $String* name, $String* cmd) {
	$set(this, this$0, this$0);
	$AbstractAction::init$(name);
	$init($Action);
	putValue($Action::ACTION_COMMAND_KEY, cmd);
}

void FilePane$1FilePaneAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$init($Action);
	$var($String, cmd, $cast($String, getValue($Action::ACTION_COMMAND_KEY)));
	if (cmd == "cancelSelection"_s) {
		if (this->this$0->editFile != nullptr) {
			this->this$0->cancelEdit();
		} else {
			$$nc(this->this$0->getFileChooser())->cancelSelection();
		}
	} else if (cmd == "editFileName"_s) {
		$var($JFileChooser, fc, this->this$0->getFileChooser());
		int32_t index = $nc(this->this$0->listSelectionModel)->getMinSelectionIndex();
		bool var$0 = index >= 0 && this->this$0->editFile == nullptr;
		if (var$0) {
			bool var$1 = !$nc(fc)->isMultiSelectionEnabled();
			var$0 = var$1 || $nc($(fc->getSelectedFiles()))->length <= 1;
		}
		if (var$0) {
			this->this$0->editFileName(index);
		}
	} else if (cmd == "refresh"_s) {
		$$nc(this->this$0->getFileChooser())->rescanCurrentDirectory();
	}
}

bool FilePane$1FilePaneAction::isEnabled() {
	$useLocalObjectStack();
	$init($Action);
	$var($String, cmd, $cast($String, getValue($Action::ACTION_COMMAND_KEY)));
	if (cmd == "cancelSelection"_s) {
		return $$nc(this->this$0->getFileChooser())->isEnabled();
	} else if (cmd == "editFileName"_s) {
		return !this->this$0->readOnly && $$nc(this->this$0->getFileChooser())->isEnabled();
	} else {
		return true;
	}
}

FilePane$1FilePaneAction::FilePane$1FilePaneAction() {
}

$Class* FilePane$1FilePaneAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$1FilePaneAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/FilePane;Ljava/lang/String;)V", nullptr, 0, $method(FilePane$1FilePaneAction, init$, void, $FilePane*, $String*)},
		{"<init>", "(Lsun/swing/FilePane;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(FilePane$1FilePaneAction, init$, void, $FilePane*, $String*, $String*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(FilePane$1FilePaneAction, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(FilePane$1FilePaneAction, isEnabled, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.FilePane",
		"getActions",
		"()[Ljavax/swing/Action;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.FilePane$1FilePaneAction", nullptr, "FilePaneAction", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.FilePane$1FilePaneAction",
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
	$loadClass(FilePane$1FilePaneAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FilePane$1FilePaneAction));
	});
	return class$;
}

$Class* FilePane$1FilePaneAction::class$ = nullptr;

	} // swing
} // sun