#include <sun/lwawt/macosx/CFileDialog$Task.h>
#include <java/awt/FileDialog.h>
#include <java/awt/Window.h>
#include <java/io/File.h>
#include <java/io/FilenameFilter.h>
#include <java/security/AccessController.h>
#include <sun/awt/AWTAccessor$FileDialogAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/macosx/CFileDialog.h>
#include <sun/security/action/GetBooleanAction.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$FileDialogAccessor = ::sun::awt::AWTAccessor$FileDialogAccessor;
using $CFileDialog = ::sun::lwawt::macosx::CFileDialog;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CFileDialog$Task::init$($CFileDialog* this$0) {
	$set(this, this$0, this$0);
}

void CFileDialog$Task::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Throwable, var$0, nullptr);
	try {
		bool navigateApps = !$$sure($Boolean, $AccessController::doPrivileged($$new($GetBooleanAction, "apple.awt.use-file-dialog-packages"_s)))->booleanValue();
		bool chooseDirectories = $$sure($Boolean, $AccessController::doPrivileged($$new($GetBooleanAction, "apple.awt.fileDialogForDirectories"_s)))->booleanValue();
		int32_t dialogMode = $nc(this->this$0->target)->getMode();
		$var($String, title, this->this$0->target->getTitle());
		if (title == nullptr) {
			$assign(title, " "_s);
		}
		bool var$1 = this->this$0->target->isMultipleMode();
		bool var$2 = this->this$0->target->getFilenameFilter() != nullptr;
		$var($String, var$3, this->this$0->target->getDirectory());
		$var($StringArray, userFileNames, this->this$0->nativeRunFileDialog(title, dialogMode, var$1, navigateApps, chooseDirectories, var$2, var$3, $(this->this$0->target->getFile())));
		$var($String, directory, nullptr);
		$var($String, file, nullptr);
		$var($FileArray, files, nullptr);
		if (userFileNames != nullptr) {
			int32_t filesNumber = userFileNames->length;
			$assign(files, $new($FileArray, filesNumber));
			for (int32_t i = 0; i < filesNumber; ++i) {
				files->set(i, $$new($File, userFileNames->get(i)));
			}
			$assign(directory, $nc(files->get(0))->getParent());
			if (!$nc(directory)->endsWith($File::separator)) {
				$assign(directory, $str({directory, $File::separator}));
			}
			$assign(file, $nc(files->get(0))->getName());
		}
		$var($AWTAccessor$FileDialogAccessor, accessor, $AWTAccessor::getFileDialogAccessor());
		$nc(accessor)->setDirectory(this->this$0->target, directory);
		accessor->setFile(this->this$0->target, file);
		accessor->setFiles(this->this$0->target, files);
	} catch ($Throwable& var$4) {
		$assign(var$0, var$4);
	} /*finally*/ {
		$nc(this->this$0->target)->dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

CFileDialog$Task::CFileDialog$Task() {
}

$Class* CFileDialog$Task::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CFileDialog;", nullptr, $FINAL | $SYNTHETIC, $field(CFileDialog$Task, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CFileDialog;)V", nullptr, $PRIVATE, $method(CFileDialog$Task, init$, void, $CFileDialog*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CFileDialog$Task, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CFileDialog$Task", "sun.lwawt.macosx.CFileDialog", "Task", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CFileDialog$Task",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CFileDialog"
	};
	$loadClass(CFileDialog$Task, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CFileDialog$Task);
	});
	return class$;
}

$Class* CFileDialog$Task::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun