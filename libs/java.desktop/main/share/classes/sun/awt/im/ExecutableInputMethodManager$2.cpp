#include <sun/awt/im/ExecutableInputMethodManager$2.h>
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

void ExecutableInputMethodManager$2::init$($ExecutableInputMethodManager* this$0) {
	$set(this, this$0, this$0);
}

void ExecutableInputMethodManager$2::run() {
	this->this$0->showInputMethodMenu();
}

ExecutableInputMethodManager$2::ExecutableInputMethodManager$2() {
}

$Class* ExecutableInputMethodManager$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/im/ExecutableInputMethodManager;", nullptr, $FINAL | $SYNTHETIC, $field(ExecutableInputMethodManager$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/im/ExecutableInputMethodManager;)V", nullptr, 0, $method(ExecutableInputMethodManager$2, init$, void, $ExecutableInputMethodManager*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ExecutableInputMethodManager$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.im.ExecutableInputMethodManager",
		"showInputMethodMenuOnRequesterEDT",
		"(Ljava/awt/Component;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.im.ExecutableInputMethodManager$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.im.ExecutableInputMethodManager$2",
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
	$loadClass(ExecutableInputMethodManager$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExecutableInputMethodManager$2);
	});
	return class$;
}

$Class* ExecutableInputMethodManager$2::class$ = nullptr;

		} // im
	} // awt
} // sun