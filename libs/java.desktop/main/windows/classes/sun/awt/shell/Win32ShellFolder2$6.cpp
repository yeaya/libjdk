#include <sun/awt/shell/Win32ShellFolder2$6.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolder2$6::init$($Win32ShellFolder2* this$0, int32_t val$attribute) {
	$set(this, this$0, this$0);
	this->val$attribute = val$attribute;
}

$Object* Win32ShellFolder2$6::call() {
	int64_t var$0 = this->this$0->getParentIShellFolder();
	return $of($Boolean::valueOf(($Win32ShellFolder2::getAttributes0(var$0, this->this$0->getRelativePIDL(), this->val$attribute) & this->val$attribute) != 0));
}

Win32ShellFolder2$6::Win32ShellFolder2$6() {
}

$Class* Win32ShellFolder2$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$6, this$0)},
		{"val$attribute", "I", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$6, val$attribute)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;I)V", "()V", 0, $method(Win32ShellFolder2$6, init$, void, $Win32ShellFolder2*, int32_t)},
		{"call", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$6, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolder2",
		"hasAttribute",
		"(I)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$6",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolder2"
	};
	$loadClass(Win32ShellFolder2$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$6);
	});
	return class$;
}

$Class* Win32ShellFolder2$6::class$ = nullptr;

		} // shell
	} // awt
} // sun