#include <java/awt/EventDispatchThread$1.h>
#include <java/awt/EventDispatchThread.h>
#include <jcpp.h>

using $EventDispatchThread = ::java::awt::EventDispatchThread;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void EventDispatchThread$1::init$($EventDispatchThread* this$0) {
	$set(this, this$0, this$0);
}

bool EventDispatchThread$1::evaluate() {
	return true;
}

EventDispatchThread$1::EventDispatchThread$1() {
}

$Class* EventDispatchThread$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/EventDispatchThread;", nullptr, $FINAL | $SYNTHETIC, $field(EventDispatchThread$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/EventDispatchThread;)V", nullptr, 0, $method(EventDispatchThread$1, init$, void, $EventDispatchThread*)},
		{"evaluate", "()Z", nullptr, $PUBLIC, $virtualMethod(EventDispatchThread$1, evaluate, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.EventDispatchThread",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.EventDispatchThread$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.EventDispatchThread$1",
		"java.lang.Object",
		"java.awt.Conditional",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.EventDispatchThread"
	};
	$loadClass(EventDispatchThread$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventDispatchThread$1);
	});
	return class$;
}

$Class* EventDispatchThread$1::class$ = nullptr;

	} // awt
} // java