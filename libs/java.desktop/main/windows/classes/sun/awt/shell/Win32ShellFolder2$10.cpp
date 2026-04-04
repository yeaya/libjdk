#include <sun/awt/shell/Win32ShellFolder2$10.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolder2$10::init$($Win32ShellFolder2* this$0, $String* val$filePath) {
	$set(this, this$0, this$0);
	$set(this, val$filePath, val$filePath);
}

$Object* Win32ShellFolder2$10::call() {
	$useLocalObjectStack();
	int64_t pIShellFolder = this->this$0->getIShellFolder();
	int64_t pEnumObjects = this->this$0->getEnumObjects(true);
	$var($Win32ShellFolder2, child, nullptr);
	int64_t childPIDL = 0;
	while ((childPIDL = this->this$0->getNextChild(pEnumObjects)) != 0) {
		if ($Win32ShellFolder2::getAttributes0(pIShellFolder, childPIDL, 0x40000000) != 0) {
			$var($String, path, $Win32ShellFolder2::getFileSystemPath(pIShellFolder, childPIDL));
			if (this->this$0->isLib) {
				$assign(path, $Win32ShellFolder2::resolveLibrary(path));
			}
			if (path != nullptr && path->equalsIgnoreCase(this->val$filePath)) {
				int64_t childIShellFolder = $Win32ShellFolder2::bindToObject(pIShellFolder, childPIDL);
				$assign(child, $new($Win32ShellFolder2, this->this$0, childIShellFolder, childPIDL, path, this->this$0->isLib));
				break;
			}
		}
		$Win32ShellFolder2::releasePIDL(childPIDL);
	}
	this->this$0->releaseEnumObjects(pEnumObjects);
	return $of(child);
}

Win32ShellFolder2$10::Win32ShellFolder2$10() {
}

$Class* Win32ShellFolder2$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$10, this$0)},
		{"val$filePath", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$10, val$filePath)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;Ljava/lang/String;)V", "()V", 0, $method(Win32ShellFolder2$10, init$, void, $Win32ShellFolder2*, $String*)},
		{"call", "()Lsun/awt/shell/Win32ShellFolder2;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$10, call, $Object*), "java.lang.InterruptedException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolder2",
		"getChildByPath",
		"(Ljava/lang/String;)Lsun/awt/shell/Win32ShellFolder2;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$10", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$10",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Lsun/awt/shell/Win32ShellFolder2;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolder2"
	};
	$loadClass(Win32ShellFolder2$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$10);
	});
	return class$;
}

$Class* Win32ShellFolder2$10::class$ = nullptr;

		} // shell
	} // awt
} // sun