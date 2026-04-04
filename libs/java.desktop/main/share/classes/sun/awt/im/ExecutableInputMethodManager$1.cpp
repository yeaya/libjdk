#include <sun/awt/im/ExecutableInputMethodManager$1.h>
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

void ExecutableInputMethodManager$1::init$($ExecutableInputMethodManager* this$0) {
	$set(this, this$0, this$0);
}

void ExecutableInputMethodManager$1::run() {
	this->this$0->showInputMethodMenu();
}

ExecutableInputMethodManager$1::ExecutableInputMethodManager$1() {
}

$Class* ExecutableInputMethodManager$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/im/ExecutableInputMethodManager;", nullptr, $FINAL | $SYNTHETIC, $field(ExecutableInputMethodManager$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/im/ExecutableInputMethodManager;)V", nullptr, 0, $method(ExecutableInputMethodManager$1, init$, void, $ExecutableInputMethodManager*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ExecutableInputMethodManager$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.im.ExecutableInputMethodManager",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.im.ExecutableInputMethodManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.im.ExecutableInputMethodManager$1",
		"java.lang.Object",
		"java.lang.Runnable",
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
	$loadClass(ExecutableInputMethodManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExecutableInputMethodManager$1);
	});
	return class$;
}

$Class* ExecutableInputMethodManager$1::class$ = nullptr;

		} // im
	} // awt
} // sun