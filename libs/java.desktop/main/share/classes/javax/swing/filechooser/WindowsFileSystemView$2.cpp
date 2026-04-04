#include <javax/swing/filechooser/WindowsFileSystemView$2.h>
#include <java/io/File.h>
#include <javax/swing/filechooser/FileSystemView$FileSystemRoot.h>
#include <javax/swing/filechooser/WindowsFileSystemView.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemView$FileSystemRoot = ::javax::swing::filechooser::FileSystemView$FileSystemRoot;
using $WindowsFileSystemView = ::javax::swing::filechooser::WindowsFileSystemView;

namespace javax {
	namespace swing {
		namespace filechooser {

void WindowsFileSystemView$2::init$($WindowsFileSystemView* this$0, $File* f) {
	$set(this, this$0, this$0);
	$FileSystemView$FileSystemRoot::init$(f);
}

bool WindowsFileSystemView$2::exists() {
	return true;
}

WindowsFileSystemView$2::WindowsFileSystemView$2() {
}

$Class* WindowsFileSystemView$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/filechooser/WindowsFileSystemView;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileSystemView$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/filechooser/WindowsFileSystemView;Ljava/io/File;)V", nullptr, 0, $method(WindowsFileSystemView$2, init$, void, $WindowsFileSystemView*, $File*)},
		{"exists", "()Z", nullptr, $PUBLIC, $virtualMethod(WindowsFileSystemView$2, exists, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.filechooser.WindowsFileSystemView",
		"createFileSystemRoot",
		"(Ljava/io/File;)Ljava/io/File;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.filechooser.WindowsFileSystemView$2", nullptr, nullptr, 0},
		{"javax.swing.filechooser.FileSystemView$FileSystemRoot", "javax.swing.filechooser.FileSystemView", "FileSystemRoot", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.filechooser.WindowsFileSystemView$2",
		"javax.swing.filechooser.FileSystemView$FileSystemRoot",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.filechooser.WindowsFileSystemView"
	};
	$loadClass(WindowsFileSystemView$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsFileSystemView$2));
	});
	return class$;
}

$Class* WindowsFileSystemView$2::class$ = nullptr;

		} // filechooser
	} // swing
} // javax