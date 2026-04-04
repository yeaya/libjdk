#include <javax/swing/filechooser/WindowsFileSystemView.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/security/AccessController.h>
#include <java/text/MessageFormat.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/filechooser/WindowsFileSystemView$1.h>
#include <javax/swing/filechooser/WindowsFileSystemView$2.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $MessageFormat = ::java::text::MessageFormat;
using $UIManager = ::javax::swing::UIManager;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $WindowsFileSystemView$1 = ::javax::swing::filechooser::WindowsFileSystemView$1;
using $WindowsFileSystemView$2 = ::javax::swing::filechooser::WindowsFileSystemView$2;

namespace javax {
	namespace swing {
		namespace filechooser {

$String* WindowsFileSystemView::newFolderString = nullptr;
$String* WindowsFileSystemView::newFolderNextString = nullptr;

void WindowsFileSystemView::init$() {
	$FileSystemView::init$();
}

$Boolean* WindowsFileSystemView::isTraversable($File* f) {
	bool var$1 = isFileSystemRoot(f);
	bool var$0 = var$1 || isComputerNode(f);
	return $Boolean::valueOf(var$0 || $nc(f)->isDirectory());
}

$File* WindowsFileSystemView::getChild($File* parent, $String* fileName) {
	$useLocalObjectStack();
	bool var$1 = $nc(fileName)->startsWith("\\"_s);
	bool var$0 = var$1 && !fileName->startsWith("\\\\"_s);
	if (var$0 && isFileSystem(parent)) {
		$var($String, path, $nc(parent)->getAbsolutePath());
		bool var$3 = $nc(path)->length() >= 2;
		bool var$2 = var$3 && path->charAt(1) == u':';
		if (var$2 && $Character::isLetter(path->charAt(0))) {
			return createFileObject($$str({$(path->substring(0, 2)), fileName}));
		}
	}
	return $FileSystemView::getChild(parent, fileName);
}

$String* WindowsFileSystemView::getSystemTypeDescription($File* f) {
	if (f == nullptr) {
		return nullptr;
	}
	try {
		return $$nc(getShellFolder(f))->getFolderType();
	} catch ($FileNotFoundException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$File* WindowsFileSystemView::getHomeDirectory() {
	$var($FileArray, roots, getRoots());
	return ($nc(roots)->length == 0) ? ($File*)nullptr : roots->get(0);
}

$File* WindowsFileSystemView::createNewFolder($File* containingDir) {
	$useLocalObjectStack();
	if (containingDir == nullptr) {
		$throwNew($IOException, "Containing directory is null:"_s);
	}
	$var($File, newFolder, createFileObject(containingDir, WindowsFileSystemView::newFolderString));
	int32_t i = 2;
	while ($nc(newFolder)->exists() && i < 100) {
		$assign(newFolder, createFileObject(containingDir, $($MessageFormat::format(WindowsFileSystemView::newFolderNextString, $$new($ObjectArray, {$($Integer::valueOf(i))})))));
		++i;
	}
	if ($nc(newFolder)->exists()) {
		$throwNew($IOException, $$str({"Directory already exists:"_s, $(newFolder->getAbsolutePath())}));
	} else if (!newFolder->mkdirs()) {
		$throwNew($IOException, $(newFolder->getAbsolutePath()));
	}
	return newFolder;
}

bool WindowsFileSystemView::isDrive($File* dir) {
	return isFileSystemRoot(dir);
}

bool WindowsFileSystemView::isFloppyDrive($File* dir) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, path, $cast($String, $AccessController::doPrivileged($$new($WindowsFileSystemView$1, this, dir))));
	bool var$0 = path != nullptr;
	if (var$0) {
		bool var$1 = path->equals("A:\\"_s);
		var$0 = var$1 || path->equals("B:\\"_s);
	}
	return var$0;
}

$File* WindowsFileSystemView::createFileObject($String* path$renamed) {
	$useLocalObjectStack();
	$var($String, path, path$renamed);
	bool var$1 = $nc(path)->length() >= 2;
	bool var$0 = var$1 && path->charAt(1) == u':';
	if (var$0 && $Character::isLetter(path->charAt(0))) {
		if (path->length() == 2) {
			$plusAssign(path, "\\"_s);
		} else if (path->charAt(2) != u'\\') {
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append($(path->substring(0, 2)));
			var$2->append("\\"_s);
			var$2->append($(path->substring(2)));
			$assign(path, $str(var$2));
		}
	}
	return $FileSystemView::createFileObject(path);
}

$File* WindowsFileSystemView::createFileSystemRoot($File* f) {
	return $new($WindowsFileSystemView$2, this, f);
}

void WindowsFileSystemView::clinit$($Class* clazz) {
	$assignStatic(WindowsFileSystemView::newFolderString, $UIManager::getString("FileChooser.win32.newFolder"_s));
	$assignStatic(WindowsFileSystemView::newFolderNextString, $UIManager::getString("FileChooser.win32.newFolder.subsequent"_s));
}

WindowsFileSystemView::WindowsFileSystemView() {
}

$Class* WindowsFileSystemView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"newFolderString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsFileSystemView, newFolderString)},
		{"newFolderNextString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsFileSystemView, newFolderNextString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WindowsFileSystemView, init$, void)},
		{"createFileObject", "(Ljava/lang/String;)Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(WindowsFileSystemView, createFileObject, $File*, $String*)},
		{"createFileSystemRoot", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PROTECTED, $virtualMethod(WindowsFileSystemView, createFileSystemRoot, $File*, $File*)},
		{"createNewFolder", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(WindowsFileSystemView, createNewFolder, $File*, $File*), "java.io.IOException"},
		{"getChild", "(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(WindowsFileSystemView, getChild, $File*, $File*, $String*)},
		{"getHomeDirectory", "()Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(WindowsFileSystemView, getHomeDirectory, $File*)},
		{"getSystemTypeDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WindowsFileSystemView, getSystemTypeDescription, $String*, $File*)},
		{"isDrive", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(WindowsFileSystemView, isDrive, bool, $File*)},
		{"isFloppyDrive", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(WindowsFileSystemView, isFloppyDrive, bool, $File*)},
		{"isTraversable", "(Ljava/io/File;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(WindowsFileSystemView, isTraversable, $Boolean*, $File*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.filechooser.WindowsFileSystemView$2", nullptr, nullptr, 0},
		{"javax.swing.filechooser.WindowsFileSystemView$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.filechooser.WindowsFileSystemView",
		"javax.swing.filechooser.FileSystemView",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.filechooser.WindowsFileSystemView$2,javax.swing.filechooser.WindowsFileSystemView$1"
	};
	$loadClass(WindowsFileSystemView, name, initialize, &classInfo$$, WindowsFileSystemView::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsFileSystemView);
	});
	return class$;
}

$Class* WindowsFileSystemView::class$ = nullptr;

		} // filechooser
	} // swing
} // javax