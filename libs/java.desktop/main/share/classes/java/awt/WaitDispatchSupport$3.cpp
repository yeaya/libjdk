#include <java/awt/WaitDispatchSupport$3.h>
#include <java/awt/WaitDispatchSupport.h>
#include <java/util/TimerTask.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jcpp.h>

using $WaitDispatchSupport = ::java::awt::WaitDispatchSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimerTask = ::java::util::TimerTask;

namespace java {
	namespace awt {

void WaitDispatchSupport$3::init$($WaitDispatchSupport* this$0) {
	$set(this, this$0, this$0);
	$TimerTask::init$();
}

void WaitDispatchSupport$3::run() {
	if ($nc(this->this$0->keepBlockingEDT)->compareAndSet(true, false)) {
		this->this$0->wakeupEDT();
	}
}

WaitDispatchSupport$3::WaitDispatchSupport$3() {
}

$Class* WaitDispatchSupport$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/WaitDispatchSupport;", nullptr, $FINAL | $SYNTHETIC, $field(WaitDispatchSupport$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/WaitDispatchSupport;)V", nullptr, 0, $method(WaitDispatchSupport$3, init$, void, $WaitDispatchSupport*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WaitDispatchSupport$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.WaitDispatchSupport",
		"enter",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.WaitDispatchSupport$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.WaitDispatchSupport$3",
		"java.util.TimerTask",
		nullptr,
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
	$loadClass(WaitDispatchSupport$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WaitDispatchSupport$3);
	});
	return class$;
}

$Class* WaitDispatchSupport$3::class$ = nullptr;

	} // awt
} // java