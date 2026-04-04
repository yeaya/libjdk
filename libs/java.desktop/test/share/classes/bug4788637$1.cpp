#include <bug4788637$1.h>
#include <bug4788637.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $bug4788637 = ::bug4788637;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

void bug4788637$1::init$($bug4788637* this$0) {
	$set(this, this$0, this$0);
}

void bug4788637$1::stateChanged($ChangeEvent* e) {
	$synchronized(this->this$0) {
		$nc(this->this$0->spinnerValueChanged)->set(this->this$0->step, true);
		this->this$0->notifyAll();
	}
}

bug4788637$1::bug4788637$1() {
}

$Class* bug4788637$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4788637;", nullptr, $FINAL | $SYNTHETIC, $field(bug4788637$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4788637;)V", nullptr, 0, $method(bug4788637$1, init$, void, $bug4788637*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4788637$1, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4788637",
		"createAndShowGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4788637$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4788637$1",
		"java.lang.Object",
		"javax.swing.event.ChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4788637"
	};
	$loadClass(bug4788637$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4788637$1);
	});
	return class$;
}

$Class* bug4788637$1::class$ = nullptr;