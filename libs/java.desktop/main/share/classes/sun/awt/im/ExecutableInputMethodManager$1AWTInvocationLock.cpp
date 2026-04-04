#include <sun/awt/im/ExecutableInputMethodManager$1AWTInvocationLock.h>
#include <sun/awt/im/ExecutableInputMethodManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExecutableInputMethodManager = ::sun::awt::im::ExecutableInputMethodManager;

namespace sun {
	namespace awt {
		namespace im {

void ExecutableInputMethodManager$1AWTInvocationLock::init$($ExecutableInputMethodManager* this$0) {
	$set(this, this$0, this$0);
}

ExecutableInputMethodManager$1AWTInvocationLock::ExecutableInputMethodManager$1AWTInvocationLock() {
}

$Class* ExecutableInputMethodManager$1AWTInvocationLock::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/im/ExecutableInputMethodManager;", nullptr, $FINAL | $SYNTHETIC, $field(ExecutableInputMethodManager$1AWTInvocationLock, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/im/ExecutableInputMethodManager;)V", nullptr, 0, $method(ExecutableInputMethodManager$1AWTInvocationLock, init$, void, $ExecutableInputMethodManager*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.im.ExecutableInputMethodManager",
		"showInputMethodMenuOnRequesterEDT",
		"(Ljava/awt/Component;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.im.ExecutableInputMethodManager$1AWTInvocationLock", nullptr, "AWTInvocationLock", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.im.ExecutableInputMethodManager$1AWTInvocationLock",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.im.ExecutableInputMethodManager"
	};
	$loadClass(ExecutableInputMethodManager$1AWTInvocationLock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExecutableInputMethodManager$1AWTInvocationLock);
	});
	return class$;
}

$Class* ExecutableInputMethodManager$1AWTInvocationLock::class$ = nullptr;

		} // im
	} // awt
} // sun