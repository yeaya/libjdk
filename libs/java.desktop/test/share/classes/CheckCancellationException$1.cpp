#include <CheckCancellationException$1.h>
#include <CheckCancellationException.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

using $CheckCancellationException = ::CheckCancellationException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingWorker = ::javax::swing::SwingWorker;

void CheckCancellationException$1::init$() {
	$SwingWorker::init$();
}

$Object* CheckCancellationException$1::doInBackground() {
	$init($CheckCancellationException);
	$nc($CheckCancellationException::go)->countDown();
	while (!$Thread::interrupted()) {
		;
	}
	return nullptr;
}

CheckCancellationException$1::CheckCancellationException$1() {
}

$Class* CheckCancellationException$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CheckCancellationException$1, init$, void)},
		{"doInBackground", "()Ljava/lang/Void;", nullptr, $PROTECTED, $virtualMethod(CheckCancellationException$1, doInBackground, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"CheckCancellationException",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CheckCancellationException$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CheckCancellationException$1",
		"javax.swing.SwingWorker",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"CheckCancellationException"
	};
	$loadClass(CheckCancellationException$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CheckCancellationException$1));
	});
	return class$;
}

$Class* CheckCancellationException$1::class$ = nullptr;