#include <sun/awt/shell/Win32ShellFolder2$11.h>
#include <java/lang/InternalError.h>
#include <java/lang/InterruptedException.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <sun/awt/shell/Win32ShellFolderManager2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolderManager2 = ::sun::awt::shell::Win32ShellFolderManager2;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolder2$11::init$($Win32ShellFolder2* this$0, bool val$resolve) {
	$set(this, this$0, this$0);
	this->val$resolve = val$resolve;
}

$Object* Win32ShellFolder2$11::call() {
	$useLocalObjectStack();
	if (!this->this$0->isLink()) {
		return nullptr;
	}
	$var($Win32ShellFolder2, location, nullptr);
	int64_t var$0 = this->this$0->getParentIShellFolder();
	int64_t linkLocationPIDL = $Win32ShellFolder2::getLinkLocation(var$0, this->this$0->getRelativePIDL(), this->val$resolve);
	if (linkLocationPIDL != 0) {
		try {
			$assign(location, $Win32ShellFolderManager2::createShellFolderFromRelativePIDL($(this->this$0->getDesktop()), linkLocationPIDL));
		} catch ($InterruptedException& e) {
		} catch ($InternalError& e) {
		}
	}
	return $of(location);
}

Win32ShellFolder2$11::Win32ShellFolder2$11() {
}

$Class* Win32ShellFolder2$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$11, this$0)},
		{"val$resolve", "Z", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$11, val$resolve)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;Z)V", "()V", 0, $method(Win32ShellFolder2$11, init$, void, $Win32ShellFolder2*, bool)},
		{"call", "()Lsun/awt/shell/Win32ShellFolder2;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$11, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolder2",
		"getLinkLocation",
		"(Z)Lsun/awt/shell/Win32ShellFolder2;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$11", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$11",
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
	$loadClass(Win32ShellFolder2$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$11);
	});
	return class$;
}

$Class* Win32ShellFolder2$11::class$ = nullptr;

		} // shell
	} // awt
} // sun