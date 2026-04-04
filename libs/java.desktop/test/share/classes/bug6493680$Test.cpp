#include <bug6493680$Test.h>
#include <bug6493680$Test$1.h>
#include <bug6493680$Test$TestSwingWorker.h>
#include <bug6493680.h>
#include <java/util/concurrent/Exchanger.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $bug6493680$Test$1 = ::bug6493680$Test$1;
using $bug6493680$Test$TestSwingWorker = ::bug6493680$Test$TestSwingWorker;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Exchanger = ::java::util::concurrent::Exchanger;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

void bug6493680$Test::init$() {
	$set(this, lastProgressValue, $new($AtomicInteger, -1));
	$set(this, exchanger, $new($Exchanger));
}

bool bug6493680$Test::test() {
	$useLocalObjectStack();
	$var($bug6493680$Test$TestSwingWorker, swingWorker, $new($bug6493680$Test$TestSwingWorker, this));
	swingWorker->addPropertyChangeListener($$new($bug6493680$Test$1, this));
	swingWorker->execute();
	return $$sure($Boolean, this->exchanger->exchange($($Boolean::valueOf(true))))->booleanValue();
}

bug6493680$Test::bug6493680$Test() {
}

$Class* bug6493680$Test::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lastProgressValue", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $FINAL, $field(bug6493680$Test, lastProgressValue)},
		{"exchanger", "Ljava/util/concurrent/Exchanger;", "Ljava/util/concurrent/Exchanger<Ljava/lang/Boolean;>;", $PRIVATE | $FINAL, $field(bug6493680$Test, exchanger)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(bug6493680$Test, init$, void)},
		{"test", "()Z", nullptr, 0, $virtualMethod(bug6493680$Test, test, bool), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6493680$Test", "bug6493680", "Test", $PRIVATE | $STATIC},
		{"bug6493680$Test$TestSwingWorker", "bug6493680$Test", "TestSwingWorker", $PRIVATE},
		{"bug6493680$Test$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6493680$Test",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6493680"
	};
	$loadClass(bug6493680$Test, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6493680$Test);
	});
	return class$;
}

$Class* bug6493680$Test::class$ = nullptr;