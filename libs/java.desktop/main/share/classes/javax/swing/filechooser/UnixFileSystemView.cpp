#include <javax/swing/filechooser/UnixFileSystemView.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/text/MessageFormat.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageFormat = ::java::text::MessageFormat;
using $UIManager = ::javax::swing::UIManager;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

namespace javax {
	namespace swing {
		namespace filechooser {

$String* UnixFileSystemView::newFolderString = nullptr;
$String* UnixFileSystemView::newFolderNextString = nullptr;

void UnixFileSystemView::init$() {
	$FileSystemView::init$();
}

$File* UnixFileSystemView::createNewFolder($File* containingDir) {
	$useLocalObjectStack();
	if (containingDir == nullptr) {
		$throwNew($IOException, "Containing directory is null:"_s);
	}
	$var($File, newFolder, nullptr);
	$assign(newFolder, createFileObject(containingDir, UnixFileSystemView::newFolderString));
	int32_t i = 1;
	while ($nc(newFolder)->exists() && i < 100) {
		$assign(newFolder, createFileObject(containingDir, $($MessageFormat::format(UnixFileSystemView::newFolderNextString, $$new($ObjectArray, {$($Integer::valueOf(i))})))));
		++i;
	}
	if ($nc(newFolder)->exists()) {
		$throwNew($IOException, $$str({"Directory already exists:"_s, $(newFolder->getAbsolutePath())}));
	} else if (!newFolder->mkdirs()) {
		$throwNew($IOException, $(newFolder->getAbsolutePath()));
	}
	return newFolder;
}

bool UnixFileSystemView::isFileSystemRoot($File* dir) {
	return dir != nullptr && $$nc(dir->getAbsolutePath())->equals("/"_s);
}

bool UnixFileSystemView::isDrive($File* dir) {
	return isFloppyDrive(dir);
}

bool UnixFileSystemView::isFloppyDrive($File* dir) {
	return false;
}

bool UnixFileSystemView::isComputerNode($File* dir) {
	if (dir != nullptr) {
		$var($String, parent, dir->getParent());
		if (parent != nullptr && parent->equals("/net"_s)) {
			return true;
		}
	}
	return false;
}

void UnixFileSystemView::clinit$($Class* clazz) {
	$assignStatic(UnixFileSystemView::newFolderString, $UIManager::getString("FileChooser.other.newFolder"_s));
	$assignStatic(UnixFileSystemView::newFolderNextString, $UIManager::getString("FileChooser.other.newFolder.subsequent"_s));
}

UnixFileSystemView::UnixFileSystemView() {
}

$Class* UnixFileSystemView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"newFolderString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixFileSystemView, newFolderString)},
		{"newFolderNextString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixFileSystemView, newFolderNextString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(UnixFileSystemView, init$, void)},
		{"createNewFolder", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(UnixFileSystemView, createNewFolder, $File*, $File*), "java.io.IOException"},
		{"isComputerNode", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(UnixFileSystemView, isComputerNode, bool, $File*)},
		{"isDrive", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(UnixFileSystemView, isDrive, bool, $File*)},
		{"isFileSystemRoot", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(UnixFileSystemView, isFileSystemRoot, bool, $File*)},
		{"isFloppyDrive", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(UnixFileSystemView, isFloppyDrive, bool, $File*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.filechooser.UnixFileSystemView",
		"javax.swing.filechooser.FileSystemView",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnixFileSystemView, name, initialize, &classInfo$$, UnixFileSystemView::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UnixFileSystemView);
	});
	return class$;
}

$Class* UnixFileSystemView::class$ = nullptr;

		} // filechooser
	} // swing
} // javax