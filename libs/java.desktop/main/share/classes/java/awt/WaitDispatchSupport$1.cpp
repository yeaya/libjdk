#include <java/awt/WaitDispatchSupport$1.h>
#include <java/awt/Conditional.h>
#include <java/awt/WaitDispatchSupport.h>
#include <java/util/TimerTask.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINEST

using $WaitDispatchSupport = ::java::awt::WaitDispatchSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

void WaitDispatchSupport$1::init$($WaitDispatchSupport* this$0) {
	$set(this, this$0, this$0);
}

bool WaitDispatchSupport$1::evaluate() {
	$useLocalObjectStack();
	$init($WaitDispatchSupport);
	$init($PlatformLogger$Level);
	if ($nc($WaitDispatchSupport::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("evaluate(): blockingEDT="_s);
		var$0->append($nc(this->this$0->keepBlockingEDT)->get());
		var$0->append(", blockingCT="_s);
		var$0->append($nc(this->this$0->keepBlockingCT)->get());
		$WaitDispatchSupport::log->finest($$str(var$0));
	}
	bool extEvaluate = (this->this$0->extCondition != nullptr) ? $nc(this->this$0->extCondition)->evaluate() : true;
	bool var$1 = !$nc(this->this$0->keepBlockingEDT)->get() || !extEvaluate;
	if (var$1 || $nc(this->this$0->afterExit)->get()) {
		if (this->this$0->timerTask != nullptr) {
			this->this$0->timerTask->cancel();
			$set(this->this$0, timerTask, nullptr);
		}
		return false;
	}
	return true;
}

WaitDispatchSupport$1::WaitDispatchSupport$1() {
}

$Class* WaitDispatchSupport$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/WaitDispatchSupport;", nullptr, $FINAL | $SYNTHETIC, $field(WaitDispatchSupport$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/WaitDispatchSupport;)V", nullptr, 0, $method(WaitDispatchSupport$1, init$, void, $WaitDispatchSupport*)},
		{"evaluate", "()Z", nullptr, $PUBLIC, $virtualMethod(WaitDispatchSupport$1, evaluate, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.WaitDispatchSupport",
		"<init>",
		"(Ljava/awt/EventDispatchThread;Ljava/awt/Conditional;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.WaitDispatchSupport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.WaitDispatchSupport$1",
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
		"java.awt.WaitDispatchSupport"
	};
	$loadClass(WaitDispatchSupport$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WaitDispatchSupport$1);
	});
	return class$;
}

$Class* WaitDispatchSupport$1::class$ = nullptr;

	} // awt
} // java