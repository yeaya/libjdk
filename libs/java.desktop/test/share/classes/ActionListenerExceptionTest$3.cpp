#include <ActionListenerExceptionTest$3.h>
#include <ActionListenerExceptionTest.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $ActionListenerExceptionTest = ::ActionListenerExceptionTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ActionListenerExceptionTest$3::init$($ActionListenerExceptionTest* this$0) {
	$set(this, this$0, this$0);
}

void ActionListenerExceptionTest$3::run() {
	$set(this->this$0, cbPos, $nc(this->this$0->combo)->getLocationOnScreen());
	$set(this->this$0, cbSize, $nc(this->this$0->combo)->getSize());
}

ActionListenerExceptionTest$3::ActionListenerExceptionTest$3() {
}

$Class* ActionListenerExceptionTest$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LActionListenerExceptionTest;", nullptr, $FINAL | $SYNTHETIC, $field(ActionListenerExceptionTest$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LActionListenerExceptionTest;)V", nullptr, 0, $method(ActionListenerExceptionTest$3, init$, void, $ActionListenerExceptionTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ActionListenerExceptionTest$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ActionListenerExceptionTest",
		"test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ActionListenerExceptionTest$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ActionListenerExceptionTest$3",
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
	$loadClass(ActionListenerExceptionTest$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ActionListenerExceptionTest$3);
	});
	return class$;
}

$Class* ActionListenerExceptionTest$3::class$ = nullptr;