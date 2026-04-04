#include <java/awt/EventQueue$6.h>
#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventQueue.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ThreadGroup.h>
#include <sun/awt/AWTAutoShutdown.h>
#include <jcpp.h>

#undef NORM_PRIORITY

using $EventDispatchThread = ::java::awt::EventDispatchThread;
using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAutoShutdown = ::sun::awt::AWTAutoShutdown;

namespace java {
	namespace awt {

void EventQueue$6::init$($EventQueue* this$0) {
	$set(this, this$0, this$0);
}

$Object* EventQueue$6::run() {
	$useLocalObjectStack();
	$var($EventDispatchThread, t, $new($EventDispatchThread, this->this$0->threadGroup, this->this$0->name, this->this$0));
	t->setContextClassLoader(this->this$0->classLoader);
	t->setPriority($Thread::NORM_PRIORITY + 1);
	t->setDaemon(false);
	$$nc($AWTAutoShutdown::getInstance())->notifyThreadBusy(t);
	return t;
}

EventQueue$6::EventQueue$6() {
}

$Class* EventQueue$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/EventQueue;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$6, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/EventQueue;)V", nullptr, 0, $method(EventQueue$6, init$, void, $EventQueue*)},
		{"run", "()Ljava/awt/EventDispatchThread;", nullptr, $PUBLIC, $virtualMethod(EventQueue$6, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.EventQueue",
		"initDispatchThread",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.EventQueue$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.EventQueue$6",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/EventDispatchThread;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.EventQueue"
	};
	$loadClass(EventQueue$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventQueue$6);
	});
	return class$;
}

$Class* EventQueue$6::class$ = nullptr;

	} // awt
} // java