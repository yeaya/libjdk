#include <sun/awt/im/InputContext$1.h>
#include <sun/awt/im/InputContext.h>
#include <sun/awt/im/InputMethodContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputContext = ::sun::awt::im::InputContext;
using $InputMethodContext = ::sun::awt::im::InputMethodContext;

namespace sun {
	namespace awt {
		namespace im {

void InputContext$1::init$($InputContext* this$0) {
	$set(this, this$0, this$0);
}

void InputContext$1::run() {
	$cast($InputMethodContext, this->this$0)->releaseCompositionArea();
}

InputContext$1::InputContext$1() {
}

$Class* InputContext$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/im/InputContext;", nullptr, $FINAL | $SYNTHETIC, $field(InputContext$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/im/InputContext;)V", nullptr, 0, $method(InputContext$1, init$, void, $InputContext*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(InputContext$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.im.InputContext",
		"removeNotify",
		"(Ljava/awt/Component;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.im.InputContext$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.im.InputContext$1",
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
		"sun.awt.im.InputContext"
	};
	$loadClass(InputContext$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InputContext$1);
	});
	return class$;
}

$Class* InputContext$1::class$ = nullptr;

		} // im
	} // awt
} // sun