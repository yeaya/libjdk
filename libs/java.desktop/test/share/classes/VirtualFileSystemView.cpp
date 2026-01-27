#include <VirtualFileSystemView.h>

#include <VirtualFile.h>
#include <bug6698013.h>
#include <java/io/File.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $VirtualFile = ::VirtualFile;
using $FileArray = $Array<::java::io::File>;
using $bug6698013 = ::bug6698013;
using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

$MethodInfo _VirtualFileSystemView_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(VirtualFileSystemView, init$, void)},
	{"createNewFolder", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(VirtualFileSystemView, createNewFolder, $File*, $File*)},
	{"getDefaultDirectory", "()Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(VirtualFileSystemView, getDefaultDirectory, $File*)},
	{"getFiles", "(Ljava/io/File;Z)[Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(VirtualFileSystemView, getFiles, $FileArray*, $File*, bool)},
	{"getHomeDirectory", "()Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(VirtualFileSystemView, getHomeDirectory, $File*)},
	{"getParentDirectory", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(VirtualFileSystemView, getParentDirectory, $File*, $File*)},
	{"getRoots", "()[Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(VirtualFileSystemView, getRoots, $FileArray*)},
	{"getSystemDisplayName", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VirtualFileSystemView, getSystemDisplayName, $String*, $File*)},
	{"isDrive", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(VirtualFileSystemView, isDrive, bool, $File*)},
	{"isFloppyDrive", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(VirtualFileSystemView, isFloppyDrive, bool, $File*)},
	{"isRoot", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(VirtualFileSystemView, isRoot, bool, $File*)},
	{"isTraversable", "(Ljava/io/File;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(VirtualFileSystemView, isTraversable, $Boolean*, $File*)},
	{}
};

$ClassInfo _VirtualFileSystemView_ClassInfo_ = {
	$ACC_SUPER,
	"VirtualFileSystemView",
	"javax.swing.filechooser.FileSystemView",
	nullptr,
	nullptr,
	_VirtualFileSystemView_MethodInfo_
};

$Object* allocate$VirtualFileSystemView($Class* clazz) {
	return $of($alloc(VirtualFileSystemView));
}

void VirtualFileSystemView::init$() {
	$FileSystemView::init$();
}

bool VirtualFileSystemView::isRoot($File* dir) {
	$init($bug6698013);
	return $nc($bug6698013::root)->equals(dir);
}

$File* VirtualFileSystemView::createNewFolder($File* dir) {
	return nullptr;
}

$FileArray* VirtualFileSystemView::getRoots() {
	$init($bug6698013);
	return $new($FileArray, {static_cast<$File*>($bug6698013::root)});
}

bool VirtualFileSystemView::isDrive($File* dir) {
	return false;
}

bool VirtualFileSystemView::isFloppyDrive($File* dir) {
	return false;
}

$File* VirtualFileSystemView::getParentDirectory($File* dir) {
	$useLocalCurrentObjectStackCache();
	if (dir == nullptr) {
		return nullptr;
	}
	return $$new($VirtualFile, $($nc(dir)->getPath()), true)->getParentFile();
}

$FileArray* VirtualFileSystemView::getFiles($File* dir, bool hide_hidden) {
	$init($bug6698013);
	if ($nc(dir)->equals($bug6698013::root)) {
		return $new($FileArray, {
			static_cast<$File*>($bug6698013::rootFile),
			static_cast<$File*>($bug6698013::subdir)
		});
	}
	if ($nc(dir)->equals($bug6698013::subdir)) {
		return $new($FileArray, {static_cast<$File*>($bug6698013::subdirFile)});
	}
	return nullptr;
}

$File* VirtualFileSystemView::getHomeDirectory() {
	$init($bug6698013);
	return $bug6698013::root;
}

$File* VirtualFileSystemView::getDefaultDirectory() {
	return getHomeDirectory();
}

$String* VirtualFileSystemView::getSystemDisplayName($File* file) {
	return $nc(file)->getName();
}

$Boolean* VirtualFileSystemView::isTraversable($File* file) {
	return $Boolean::valueOf($nc(file)->isDirectory());
}

VirtualFileSystemView::VirtualFileSystemView() {
}

$Class* VirtualFileSystemView::load$($String* name, bool initialize) {
	$loadClass(VirtualFileSystemView, name, initialize, &_VirtualFileSystemView_ClassInfo_, allocate$VirtualFileSystemView);
	return class$;
}

$Class* VirtualFileSystemView::class$ = nullptr;