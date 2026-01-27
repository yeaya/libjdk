#include <sun/awt/shell/DefaultShellFolder.h>

#include <java/io/File.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ShellFolder = ::sun::awt::shell::ShellFolder;

namespace sun {
	namespace awt {
		namespace shell {

$MethodInfo _DefaultShellFolder_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/ShellFolder;Ljava/io/File;)V", nullptr, 0, $method(DefaultShellFolder, init$, void, $ShellFolder*, $File*)},
	{"getDisplayName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultShellFolder, getDisplayName, $String*)},
	{"getExecutableType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultShellFolder, getExecutableType, $String*)},
	{"getFolderType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultShellFolder, getFolderType, $String*)},
	{"getLinkLocation", "()Lsun/awt/shell/ShellFolder;", nullptr, $PUBLIC, $virtualMethod(DefaultShellFolder, getLinkLocation, $ShellFolder*)},
	{"isHidden", "()Z", nullptr, $PUBLIC, $virtualMethod(DefaultShellFolder, isHidden, bool)},
	{"isLink", "()Z", nullptr, $PUBLIC, $virtualMethod(DefaultShellFolder, isLink, bool)},
	{"listFiles", "()[Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(DefaultShellFolder, listFiles, $FileArray*)},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(DefaultShellFolder, writeReplace, $Object*), "java.io.ObjectStreamException"},
	{}
};

$ClassInfo _DefaultShellFolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.DefaultShellFolder",
	"sun.awt.shell.ShellFolder",
	nullptr,
	nullptr,
	_DefaultShellFolder_MethodInfo_
};

$Object* allocate$DefaultShellFolder($Class* clazz) {
	return $of($alloc(DefaultShellFolder));
}

void DefaultShellFolder::init$($ShellFolder* parent, $File* f) {
	$ShellFolder::init$(parent, $($nc(f)->getAbsolutePath()));
}

$Object* DefaultShellFolder::writeReplace() {
	return $of($new($File, $(getPath())));
}

$FileArray* DefaultShellFolder::listFiles() {
	$useLocalCurrentObjectStackCache();
	$var($FileArray, files, $ShellFolder::listFiles());
	if (files != nullptr) {
		for (int32_t i = 0; i < files->length; ++i) {
			files->set(i, $$new(DefaultShellFolder, this, files->get(i)));
		}
	}
	return files;
}

bool DefaultShellFolder::isLink() {
	return false;
}

bool DefaultShellFolder::isHidden() {
	$var($String, fileName, getName());
	if ($nc(fileName)->length() > 0) {
		return (fileName->charAt(0) == u'.');
	}
	return false;
}

$ShellFolder* DefaultShellFolder::getLinkLocation() {
	return nullptr;
}

$String* DefaultShellFolder::getDisplayName() {
	return getName();
}

$String* DefaultShellFolder::getFolderType() {
	if (isDirectory()) {
		return "File Folder"_s;
	} else {
		return "File"_s;
	}
}

$String* DefaultShellFolder::getExecutableType() {
	return nullptr;
}

DefaultShellFolder::DefaultShellFolder() {
}

$Class* DefaultShellFolder::load$($String* name, bool initialize) {
	$loadClass(DefaultShellFolder, name, initialize, &_DefaultShellFolder_ClassInfo_, allocate$DefaultShellFolder);
	return class$;
}

$Class* DefaultShellFolder::class$ = nullptr;

		} // shell
	} // awt
} // sun