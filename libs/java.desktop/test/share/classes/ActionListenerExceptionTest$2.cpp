#include <ActionListenerExceptionTest$2.h>
#include <ActionListenerExceptionTest.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $ActionListenerExceptionTest = ::ActionListenerExceptionTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ActionListenerExceptionTest$2::init$($ActionListenerExceptionTest* this$0) {
	$set(this, this$0, this$0);
}

void ActionListenerExceptionTest$2::run() {
	$nc(this->this$0->frame)->dispose();
}

ActionListenerExceptionTest$2::ActionListenerExceptionTest$2() {
}

$Class* ActionListenerExceptionTest$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LActionListenerExceptionTest;", nullptr, $FINAL | $SYNTHETIC, $field(ActionListenerExceptionTest$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LActionListenerExceptionTest;)V", nullptr, 0, $method(ActionListenerExceptionTest$2, init$, void, $ActionListenerExceptionTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ActionListenerExceptionTest$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ActionListenerExceptionTest",
		"disposeGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ActionListenerExceptionTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ActionListenerExceptionTest$2",
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
		"ActionListenerExceptionTest"
	};
	$loadClass(ActionListenerExceptionTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ActionListenerExceptionTest$2);
	});
	return class$;
}

$Class* ActionListenerExceptionTest$2::class$ = nullptr;