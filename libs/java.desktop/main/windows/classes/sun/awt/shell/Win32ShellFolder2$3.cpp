#include <sun/awt/shell/Win32ShellFolder2$3.h>
#include <java/io/File.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <sun/awt/shell/Win32ShellFolderManager2.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolderManager2 = ::sun::awt::shell::Win32ShellFolderManager2;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolder2$3::init$($Win32ShellFolder2* this$0) {
	$set(this, this$0, this$0);
}

$Object* Win32ShellFolder2$3::call() {
	$useLocalObjectStack();
	if (this->this$0->isFileSystem()) {
		return $of($new($File, $(this->this$0->getPath())));
	} else {
		$var($Win32ShellFolder2, drives, $Win32ShellFolderManager2::getDrives());
		if (drives != nullptr) {
			$var($FileArray, driveRoots, drives->listFiles());
			if (driveRoots != nullptr) {
				for (int32_t i = 0; i < driveRoots->length; ++i) {
					if ($instanceOf($Win32ShellFolder2, driveRoots->get(i))) {
						$var($Win32ShellFolder2, sf, $cast($Win32ShellFolder2, driveRoots->get(i)));
						bool var$0 = $nc(sf)->isFileSystem();
						if (var$0 && !sf->hasAttribute(0x02000000)) {
							return $of($new($File, $(sf->getPath())));
						}
					}
				}
			}
		}
		return $of($new($File, "C:\\"_s));
	}
}

Win32ShellFolder2$3::Win32ShellFolder2$3() {
}

$Class* Win32ShellFolder2$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;)V", nullptr, 0, $method(Win32ShellFolder2$3, init$, void, $Win32ShellFolder2*)},
		{"call", "()Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$3, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolder2",
		"writeReplace",
		"()Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$3",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/io/File;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolder2"
	};
	$loadClass(Win32ShellFolder2$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$3);
	});
	return class$;
}

$Class* Win32ShellFolder2$3::class$ = nullptr;

		} // shell
	} // awt
} // sun