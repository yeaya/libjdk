#include <ActionListenerExceptionTest$1$1.h>
#include <ActionListenerExceptionTest$1.h>
#include <ActionListenerExceptionTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $ActionListenerExceptionTest$1 = ::ActionListenerExceptionTest$1;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void ActionListenerExceptionTest$1$1::init$($ActionListenerExceptionTest$1* this$1) {
	$set(this, this$1, this$1);
}

void ActionListenerExceptionTest$1$1::actionPerformed($ActionEvent* e) {
	++$nc(this->this$1->this$0)->count;
	$throwNew($RuntimeException);
}

ActionListenerExceptionTest$1$1::ActionListenerExceptionTest$1$1() {
}

$Class* ActionListenerExceptionTest$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LActionListenerExceptionTest$1;", nullptr, $FINAL | $SYNTHETIC, $field(ActionListenerExceptionTest$1$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LActionListenerExceptionTest$1;)V", nullptr, 0, $method(ActionListenerExceptionTest$1$1, init$, void, $ActionListenerExceptionTest$1*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(ActionListenerExceptionTest$1$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ActionListenerExceptionTest$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ActionListenerExceptionTest$1", nullptr, nullptr, 0},
		{"ActionListenerExceptionTest$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ActionListenerExceptionTest$1$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
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
	$loadClass(ActionListenerExceptionTest$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ActionListenerExceptionTest$1$1);
	});
	return class$;
}

$Class* ActionListenerExceptionTest$1$1::class$ = nullptr;