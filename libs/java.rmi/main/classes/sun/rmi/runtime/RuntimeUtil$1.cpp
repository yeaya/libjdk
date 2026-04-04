#include <sun/rmi/runtime/RuntimeUtil$1.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessController.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <java/util/logging/Level.h>
#include <sun/rmi/runtime/Log.h>
#include <sun/rmi/runtime/NewThreadAction.h>
#include <sun/rmi/runtime/RuntimeUtil.h>
#include <jcpp.h>

#undef WARNING

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessController = ::java::security::AccessController;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $Level = ::java::util::logging::Level;
using $NewThreadAction = ::sun::rmi::runtime::NewThreadAction;
using $RuntimeUtil = ::sun::rmi::runtime::RuntimeUtil;

namespace sun {
	namespace rmi {
		namespace runtime {

void RuntimeUtil$1::init$($RuntimeUtil* this$0) {
	$set(this, this$0, this$0);
	$set(this, count, $new($AtomicInteger));
}

$Thread* RuntimeUtil$1::newThread($Runnable* runnable) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		return $cast($Thread, $AccessController::doPrivileged($$new($NewThreadAction, runnable, $$str({"Scheduler("_s, $$str(this->count->getAndIncrement()), ")"_s}), true)));
	} catch ($Throwable& t) {
		$init($RuntimeUtil);
		$init($Level);
		$nc($RuntimeUtil::runtimeLog)->log($Level::WARNING, "scheduler thread factory throws"_s, t);
		return nullptr;
	}
	$shouldNotReachHere();
}

RuntimeUtil$1::RuntimeUtil$1() {
}

$Class* RuntimeUtil$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/rmi/runtime/RuntimeUtil;", nullptr, $FINAL | $SYNTHETIC, $field(RuntimeUtil$1, this$0)},
		{"count", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $FINAL, $field(RuntimeUtil$1, count)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/rmi/runtime/RuntimeUtil;)V", nullptr, 0, $method(RuntimeUtil$1, init$, void, $RuntimeUtil*)},
		{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(RuntimeUtil$1, newThread, $Thread*, $Runnable*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.runtime.RuntimeUtil",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.runtime.RuntimeUtil$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.runtime.RuntimeUtil$1",
		"java.lang.Object",
		"java.util.concurrent.ThreadFactory",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.runtime.RuntimeUtil"
	};
	$loadClass(RuntimeUtil$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RuntimeUtil$1);
	});
	return class$;
}

$Class* RuntimeUtil$1::class$ = nullptr;

		} // runtime
	} // rmi
} // sun