#include <java/awt/FileDialog$1.h>
#include <java/awt/Component.h>
#include <java/awt/FileDialog.h>
#include <java/io/File.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $FileDialog = ::java::awt::FileDialog;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void FileDialog$1::init$() {
}

void FileDialog$1::setFiles($FileDialog* fileDialog, $FileArray* files) {
	$nc(fileDialog)->setFiles(files);
}

void FileDialog$1::setFile($FileDialog* fileDialog, $String* file) {
	$set($nc(fileDialog), file, (""_s->equals(file)) ? ($String*)nullptr : file);
}

void FileDialog$1::setDirectory($FileDialog* fileDialog, $String* directory) {
	$set($nc(fileDialog), dir, (""_s->equals(directory)) ? ($String*)nullptr : directory);
}

bool FileDialog$1::isMultipleMode($FileDialog* fileDialog) {
	$synchronized($nc(fileDialog)->getObjectLock()) {
		return fileDialog->multipleMode;
	}
}

FileDialog$1::FileDialog$1() {
}

$Class* FileDialog$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FileDialog$1, init$, void)},
		{"isMultipleMode", "(Ljava/awt/FileDialog;)Z", nullptr, $PUBLIC, $virtualMethod(FileDialog$1, isMultipleMode, bool, $FileDialog*)},
		{"setDirectory", "(Ljava/awt/FileDialog;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(FileDialog$1, setDirectory, void, $FileDialog*, $String*)},
		{"setFile", "(Ljava/awt/FileDialog;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(FileDialog$1, setFile, void, $FileDialog*, $String*)},
		{"setFiles", "(Ljava/awt/FileDialog;[Ljava/io/File;)V", nullptr, $PUBLIC, $virtualMethod(FileDialog$1, setFiles, void, $FileDialog*, $FileArray*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.FileDialog",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.FileDialog$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$FileDialogAccessor", "sun.awt.AWTAccessor", "FileDialogAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.FileDialog$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$FileDialogAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.FileDialog"
	};
	$loadClass(FileDialog$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileDialog$1);
	});
	return class$;
}

$Class* FileDialog$1::class$ = nullptr;

	} // awt
} // java