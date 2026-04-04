#include <NestedWorkers$1.h>
#include <NestedWorkers.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

using $NestedWorkers = ::NestedWorkers;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingWorker = ::javax::swing::SwingWorker;

void NestedWorkers$1::init$() {
}

void NestedWorkers$1::run() {
	$useLocalObjectStack();
	$var($SwingWorker, sw, $new($NestedWorkers, 0));
	sw->execute();
	try {
		$nc($System::err)->println($$cast($String, sw->get()));
	} catch ($Exception& z) {
		$throwNew($RuntimeException, z);
	}
}

NestedWorkers$1::NestedWorkers$1() {
}

$Class* NestedWorkers$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NestedWorkers$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NestedWorkers$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NestedWorkers",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NestedWorkers$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NestedWorkers$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"NestedWorkers"
	};
	$loadClass(NestedWorkers$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NestedWorkers$1);
	});
	return class$;
}

$Class* NestedWorkers$1::class$ = nullptr;