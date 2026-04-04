#include <java/awt/EventQueue$FwSecondaryLoopWrapper.h>
#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventFilter.h>
#include <java/awt/EventQueue.h>
#include <java/awt/SecondaryLoop.h>
#include <jcpp.h>

using $EventFilter = ::java::awt::EventFilter;
using $EventQueue = ::java::awt::EventQueue;
using $SecondaryLoop = ::java::awt::SecondaryLoop;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void EventQueue$FwSecondaryLoopWrapper::init$($EventQueue* this$0, $SecondaryLoop* loop, $EventFilter* filter) {
	$set(this, this$0, this$0);
	$set(this, loop, loop);
	$set(this, filter, filter);
}

bool EventQueue$FwSecondaryLoopWrapper::enter() {
	if (this->filter != nullptr) {
		$nc(this->this$0->dispatchThread)->addEventFilter(this->filter);
	}
	return $nc(this->loop)->enter();
}

bool EventQueue$FwSecondaryLoopWrapper::exit() {
	if (this->filter != nullptr) {
		$nc(this->this$0->dispatchThread)->removeEventFilter(this->filter);
	}
	return $nc(this->loop)->exit();
}

EventQueue$FwSecondaryLoopWrapper::EventQueue$FwSecondaryLoopWrapper() {
}

$Class* EventQueue$FwSecondaryLoopWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/EventQueue;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$FwSecondaryLoopWrapper, this$0)},
		{"loop", "Ljava/awt/SecondaryLoop;", nullptr, $PRIVATE | $FINAL, $field(EventQueue$FwSecondaryLoopWrapper, loop)},
		{"filter", "Ljava/awt/EventFilter;", nullptr, $PRIVATE | $FINAL, $field(EventQueue$FwSecondaryLoopWrapper, filter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/EventQueue;Ljava/awt/SecondaryLoop;Ljava/awt/EventFilter;)V", nullptr, $PUBLIC, $method(EventQueue$FwSecondaryLoopWrapper, init$, void, $EventQueue*, $SecondaryLoop*, $EventFilter*)},
		{"enter", "()Z", nullptr, $PUBLIC, $virtualMethod(EventQueue$FwSecondaryLoopWrapper, enter, bool)},
		{"exit", "()Z", nullptr, $PUBLIC, $virtualMethod(EventQueue$FwSecondaryLoopWrapper, exit, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.EventQueue$FwSecondaryLoopWrapper", "java.awt.EventQueue", "FwSecondaryLoopWrapper", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.EventQueue$FwSecondaryLoopWrapper",
		"java.lang.Object",
		"java.awt.SecondaryLoop",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.EventQueue"
	};
	$loadClass(EventQueue$FwSecondaryLoopWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventQueue$FwSecondaryLoopWrapper);
	});
	return class$;
}

$Class* EventQueue$FwSecondaryLoopWrapper::class$ = nullptr;

	} // awt
} // java