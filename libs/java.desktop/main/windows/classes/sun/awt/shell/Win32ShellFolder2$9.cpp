#include <sun/awt/shell/Win32ShellFolder2$9.h>
#include <java/io/File.h>
#include <java/util/ArrayList.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/Win32ShellFolder2$FolderDisposer.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <sun/awt/shell/Win32ShellFolderManager2.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $ShellFolderArray = $Array<::sun::awt::shell::ShellFolder>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolderManager2 = ::sun::awt::shell::Win32ShellFolderManager2;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolder2$9::init$($Win32ShellFolder2* this$0, bool val$includeHiddenFiles) {
	$set(this, this$0, this$0);
	this->val$includeHiddenFiles = val$includeHiddenFiles;
}

$Object* Win32ShellFolder2$9::call() {
	$useLocalObjectStack();
	if (!this->this$0->isDirectory()) {
		return nullptr;
	}
	bool var$0 = this->this$0->isLink();
	if (var$0 && !this->this$0->hasAttribute(0x20000000)) {
		return $new($FileArray, 0);
	}
	$var($Win32ShellFolder2, desktop, $Win32ShellFolderManager2::getDesktop());
	$var($Win32ShellFolder2, personal, $Win32ShellFolderManager2::getPersonal());
	int64_t pIShellFolder = this->this$0->getIShellFolder();
	$var($ArrayList, list, $new($ArrayList));
	int64_t pEnumObjects = this->this$0->getEnumObjects(this->val$includeHiddenFiles);
	if (pEnumObjects != 0) {
		$var($Throwable, var$1, nullptr);
		try {
			int64_t childPIDL = 0;
			int32_t testedAttrs = 0x40000000 | 0x10000000;
			do {
				childPIDL = this->this$0->getNextChild(pEnumObjects);
				bool releasePIDL = true;
				if (childPIDL != 0 && ($Win32ShellFolder2::getAttributes0(pIShellFolder, childPIDL, testedAttrs) & testedAttrs) != 0) {
					$var($Win32ShellFolder2, childFolder, nullptr);
					bool var$2 = this->this$0->equals(desktop) && personal != nullptr;
					if (var$2 && $Win32ShellFolder2::pidlsEqual(pIShellFolder, childPIDL, $nc(personal->disposer)->relativePIDL)) {
						$assign(childFolder, personal);
					} else {
						$assign(childFolder, $Win32ShellFolder2::createShellFolder(this->this$0, childPIDL));
						releasePIDL = false;
					}
					list->add(childFolder);
				}
				if (releasePIDL) {
					$Win32ShellFolder2::releasePIDL(childPIDL);
				}
			} while (childPIDL != 0 && !$($Thread::currentThread())->isInterrupted());
		} catch ($Throwable& var$3) {
			$assign(var$1, var$3);
		} /*finally*/ {
			this->this$0->releaseEnumObjects(pEnumObjects);
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
	return $($Thread::currentThread())->isInterrupted() ? $new($FileArray, 0) : $cast($FileArray, list->toArray($$new($ShellFolderArray, list->size())));
}

Win32ShellFolder2$9::Win32ShellFolder2$9() {
}

$Class* Win32ShellFolder2$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$9, this$0)},
		{"val$includeHiddenFiles", "Z", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$9, val$includeHiddenFiles)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;Z)V", "()V", 0, $method(Win32ShellFolder2$9, init$, void, $Win32ShellFolder2*, bool)},
		{"call", "()[Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$9, call, $Object*), "java.lang.InterruptedException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolder2",
		"listFiles",
		"(Z)[Ljava/io/File;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$9", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$9",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<[Ljava/io/File;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolder2"
	};
	$loadClass(Win32ShellFolder2$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$9);
	});
	return class$;
}

$Class* Win32ShellFolder2$9::class$ = nullptr;

		} // shell
	} // awt
} // sun