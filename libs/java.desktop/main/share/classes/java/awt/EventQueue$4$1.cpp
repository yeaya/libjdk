#include <java/awt/EventQueue$4$1.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventQueue$4.h>
#include <java/awt/EventQueue.h>
#include <jcpp.h>

using $EventQueue$4 = ::java::awt::EventQueue$4;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void EventQueue$4$1::init$($EventQueue$4* this$1) {
	$set(this, this$1, this$1);
}

void EventQueue$4$1::run() {
	if ($nc($nc(this->this$1->this$0)->dispatchThread)->filterAndCheckEvent(this->this$1->val$event)) {
		this->this$1->this$0->dispatchEventImpl(this->this$1->val$event, this->this$1->val$src);
	}
}

EventQueue$4$1::EventQueue$4$1() {
}

$Class* EventQueue$4$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/awt/EventQueue$4;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$4$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/EventQueue$4;)V", nullptr, 0, $method(EventQueue$4$1, init$, void, $EventQueue$4*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(EventQueue$4$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.EventQueue$4",
		"run",
		"()Ljava/lang/Void;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.EventQueue$4", nullptr, nullptr, 0},
		{"java.awt.EventQueue$4$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.EventQueue$4$1",
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
		"java.awt.EventQueue"
	};
	$loadClass(EventQueue$4$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventQueue$4$1);
	});
	return class$;
}

$Class* EventQueue$4$1::class$ = nullptr;

	} // awt
} // java