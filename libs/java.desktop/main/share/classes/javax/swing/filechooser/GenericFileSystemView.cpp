#include <javax/swing/filechooser/GenericFileSystemView.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

namespace javax {
	namespace swing {
		namespace filechooser {

$String* GenericFileSystemView::newFolderString = nullptr;

void GenericFileSystemView::init$() {
	$FileSystemView::init$();
}

$File* GenericFileSystemView::createNewFolder($File* containingDir) {
	$useLocalObjectStack();
	if (containingDir == nullptr) {
		$throwNew($IOException, "Containing directory is null:"_s);
	}
	$var($File, newFolder, createFileObject(containingDir, GenericFileSystemView::newFolderString));
	if ($nc(newFolder)->exists()) {
		$throwNew($IOException, $$str({"Directory already exists:"_s, $(newFolder->getAbsolutePath())}));
	} else if (!newFolder->mkdirs()) {
		$throwNew($IOException, $(newFolder->getAbsolutePath()));
	}
	return newFolder;
}

void GenericFileSystemView::clinit$($Class* clazz) {
	$assignStatic(GenericFileSystemView::newFolderString, $UIManager::getString("FileChooser.other.newFolder"_s));
}

GenericFileSystemView::GenericFileSystemView() {
}

$Class* GenericFileSystemView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"newFolderString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GenericFileSystemView, newFolderString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GenericFileSystemView, init$, void)},
		{"createNewFolder", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(GenericFileSystemView, createNewFolder, $File*, $File*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.filechooser.GenericFileSystemView",
		"javax.swing.filechooser.FileSystemView",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GenericFileSystemView, name, initialize, &classInfo$$, GenericFileSystemView::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GenericFileSystemView);
	});
	return class$;
}

$Class* GenericFileSystemView::class$ = nullptr;

		} // filechooser
	} // swing
} // javax