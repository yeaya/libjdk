#include <java/awt/WaitDispatchSupport$2.h>
#include <java/awt/Conditional.h>
#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventFilter.h>
#include <java/awt/WaitDispatchSupport.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $WaitDispatchSupport = ::java::awt::WaitDispatchSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void WaitDispatchSupport$2::init$($WaitDispatchSupport* this$0) {
	$set(this, this$0, this$0);
}

void WaitDispatchSupport$2::run() {
	$init($WaitDispatchSupport);
	$nc($WaitDispatchSupport::log)->fine("Starting a new event pump"_s);
	if (this->this$0->filter == nullptr) {
		$nc(this->this$0->dispatchThread)->pumpEvents(this->this$0->condition);
	} else {
		$nc(this->this$0->dispatchThread)->pumpEventsForFilter(this->this$0->condition, this->this$0->filter);
	}
}

WaitDispatchSupport$2::WaitDispatchSupport$2() {
}

$Class* WaitDispatchSupport$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/WaitDispatchSupport;", nullptr, $FINAL | $SYNTHETIC, $field(WaitDispatchSupport$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/WaitDispatchSupport;)V", nullptr, 0, $method(WaitDispatchSupport$2, init$, void, $WaitDispatchSupport*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WaitDispatchSupport$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.WaitDispatchSupport",
		"enter",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.WaitDispatchSupport$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.WaitDispatchSupport$2",
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
		"java.awt.WaitDispatchSupport"
	};
	$loadClass(WaitDispatchSupport$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WaitDispatchSupport$2);
	});
	return class$;
}

$Class* WaitDispatchSupport$2::class$ = nullptr;

	} // awt
} // java