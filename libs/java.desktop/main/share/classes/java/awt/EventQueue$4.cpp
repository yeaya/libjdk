#include <java/awt/EventQueue$4.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue$4$1.h>
#include <java/awt/EventQueue.h>
#include <sun/awt/FwDispatcher.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $EventQueue = ::java::awt::EventQueue;
using $EventQueue$4$1 = ::java::awt::EventQueue$4$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void EventQueue$4::init$($EventQueue* this$0, $AWTEvent* val$event, Object$* val$src) {
	$set(this, this$0, this$0);
	$set(this, val$event, val$event);
	$set(this, val$src, val$src);
}

$Object* EventQueue$4::run() {
	if (this->this$0->fwDispatcher == nullptr || this->this$0->isDispatchThreadImpl()) {
		this->this$0->dispatchEventImpl(this->val$event, this->val$src);
	} else {
		this->this$0->fwDispatcher->scheduleDispatch($$new($EventQueue$4$1, this));
	}
	return nullptr;
}

EventQueue$4::EventQueue$4() {
}

$Class* EventQueue$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/EventQueue;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$4, this$0)},
		{"val$src", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$4, val$src)},
		{"val$event", "Ljava/awt/AWTEvent;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$4, val$event)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/EventQueue;Ljava/awt/AWTEvent;Ljava/lang/Object;)V", "()V", 0, $method(EventQueue$4, init$, void, $EventQueue*, $AWTEvent*, Object$*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(EventQueue$4, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.EventQueue",
		"dispatchEvent",
		"(Ljava/awt/AWTEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.EventQueue$4", nullptr, nullptr, 0},
		{"java.awt.EventQueue$4$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.EventQueue$4",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.EventQueue"
	};
	$loadClass(EventQueue$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventQueue$4);
	});
	return class$;
}

$Class* EventQueue$4::class$ = nullptr;

	} // awt
} // java