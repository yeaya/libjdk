#include <javax/swing/filechooser/WindowsFileSystemView$1.h>
#include <java/io/File.h>
#include <javax/swing/filechooser/WindowsFileSystemView.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WindowsFileSystemView = ::javax::swing::filechooser::WindowsFileSystemView;

namespace javax {
	namespace swing {
		namespace filechooser {

void WindowsFileSystemView$1::init$($WindowsFileSystemView* this$0, $File* val$dir) {
	$set(this, this$0, this$0);
	$set(this, val$dir, val$dir);
}

$Object* WindowsFileSystemView$1::run() {
	return $of($nc(this->val$dir)->getAbsolutePath());
}

WindowsFileSystemView$1::WindowsFileSystemView$1() {
}

$Class* WindowsFileSystemView$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/filechooser/WindowsFileSystemView;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileSystemView$1, this$0)},
		{"val$dir", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileSystemView$1, val$dir)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/filechooser/WindowsFileSystemView;Ljava/io/File;)V", "()V", 0, $method(WindowsFileSystemView$1, init$, void, $WindowsFileSystemView*, $File*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WindowsFileSystemView$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.filechooser.WindowsFileSystemView",
		"isFloppyDrive",
		"(Ljava/io/File;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.filechooser.WindowsFileSystemView$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.filechooser.WindowsFileSystemView$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.filechooser.WindowsFileSystemView"
	};
	$loadClass(WindowsFileSystemView$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsFileSystemView$1);
	});
	return class$;
}

$Class* WindowsFileSystemView$1::class$ = nullptr;

		} // filechooser
	} // swing
} // javax