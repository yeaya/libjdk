#include <CheckCancellationException.h>
#include <CheckCancellationException$1.h>
#include <java/util/concurrent/CancellationException.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

using $CheckCancellationException$1 = ::CheckCancellationException$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CancellationException = ::java::util::concurrent::CancellationException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $SwingWorker = ::javax::swing::SwingWorker;

$CountDownLatch* CheckCancellationException::go = nullptr;

void CheckCancellationException::init$() {
}

void CheckCancellationException::main($StringArray* args) {
	$init(CheckCancellationException);
	$var($SwingWorker, worker, $new($CheckCancellationException$1));
	worker->execute();
	CheckCancellationException::go->await();
	worker->cancel(true);
	try {
		worker->get();
	} catch ($CancellationException& expected) {
		return;
	}
	$throwNew($RuntimeException, "CancellationException was not thrown"_s);
}

void CheckCancellationException::clinit$($Class* clazz) {
	$assignStatic(CheckCancellationException::go, $new($CountDownLatch, 1));
}

CheckCancellationException::CheckCancellationException() {
}

$Class* CheckCancellationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"go", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CheckCancellationException, go)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CheckCancellationException, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CheckCancellationException, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CheckCancellationException$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"CheckCancellationException",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"CheckCancellationException$1"
	};
	$loadClass(CheckCancellationException, name, initialize, &classInfo$$, CheckCancellationException::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CheckCancellationException);
	});
	return class$;
}

$Class* CheckCancellationException::class$ = nullptr;