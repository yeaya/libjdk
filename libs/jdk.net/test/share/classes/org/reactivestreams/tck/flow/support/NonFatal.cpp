#include <org/reactivestreams/tck/flow/support/NonFatal.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/LinkageError.h>
#include <java/lang/StackOverflowError.h>
#include <java/lang/ThreadDeath.h>
#include <java/lang/VirtualMachineError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackOverflowError = ::java::lang::StackOverflowError;
using $ThreadDeath = ::java::lang::ThreadDeath;
using $VirtualMachineError = ::java::lang::VirtualMachineError;

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

void NonFatal::init$() {
}

bool NonFatal::isNonFatal($Throwable* t) {
	if ($instanceOf($StackOverflowError, t)) {
		return true;
	} else if ($instanceOf($VirtualMachineError, t) || $instanceOf($ThreadDeath, t) || $instanceOf($InterruptedException, t) || $instanceOf($LinkageError, t)) {
		return false;
	} else {
		return true;
	}
}

NonFatal::NonFatal() {
}

$Class* NonFatal::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NonFatal, init$, void)},
		{"isNonFatal", "(Ljava/lang/Throwable;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(NonFatal, isNonFatal, bool, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"org.reactivestreams.tck.flow.support.NonFatal",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NonFatal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonFatal);
	});
	return class$;
}

$Class* NonFatal::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org