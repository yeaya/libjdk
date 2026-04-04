#include <sun/awt/shell/Win32ShellFolder2$17.h>
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

void Win32ShellFolder2$17::init$($Win32ShellFolder2* this$0, int32_t val$column) {
	$set(this, this$0, this$0);
	this->val$column = val$column;
}

$Object* Win32ShellFolder2$17::call() {
	int64_t var$0 = this->this$0->getParentIShellFolder();
	return this->this$0->doGetColumnValue(var$0, this->this$0->getRelativePIDL(), this->val$column);
}

Win32ShellFolder2$17::Win32ShellFolder2$17() {
}

$Class* Win32ShellFolder2$17::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$17, this$0)},
		{"val$column", "I", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$17, val$column)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;I)V", "()V", 0, $method(Win32ShellFolder2$17, init$, void, $Win32ShellFolder2*, int32_t)},
		{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$17, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolder2",
		"getFolderColumnValue",
		"(I)Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$17", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$17",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolder2"
	};
	$loadClass(Win32ShellFolder2$17, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$17);
	});
	return class$;
}

$Class* Win32ShellFolder2$17::class$ = nullptr;

		} // shell
	} // awt
} // sun