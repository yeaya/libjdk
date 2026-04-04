#include <javax/swing/filechooser/FileSystemView$FileSystemRoot.h>
#include <java/io/File.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace filechooser {

void FileSystemView$FileSystemRoot::init$($File* f) {
	$File::init$(f, ""_s);
}

void FileSystemView$FileSystemRoot::init$($String* s) {
	$File::init$(s);
}

bool FileSystemView$FileSystemRoot::isDirectory() {
	return true;
}

$String* FileSystemView$FileSystemRoot::getName() {
	return getPath();
}

FileSystemView$FileSystemRoot::FileSystemView$FileSystemRoot() {
}

$Class* FileSystemView$FileSystemRoot::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(FileSystemView$FileSystemRoot, init$, void, $File*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileSystemView$FileSystemRoot, init$, void, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileSystemView$FileSystemRoot, getName, $String*)},
		{"isDirectory", "()Z", nullptr, $PUBLIC, $virtualMethod(FileSystemView$FileSystemRoot, isDirectory, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.filechooser.FileSystemView$FileSystemRoot", "javax.swing.filechooser.FileSystemView", "FileSystemRoot", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.filechooser.FileSystemView$FileSystemRoot",
		"java.io.File",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.filechooser.FileSystemView"
	};
	$loadClass(FileSystemView$FileSystemRoot, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FileSystemView$FileSystemRoot));
	});
	return class$;
}

$Class* FileSystemView$FileSystemRoot::class$ = nullptr;

		} // filechooser
	} // swing
} // javax