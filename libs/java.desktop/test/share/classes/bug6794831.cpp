#include <bug6794831.h>
#include <bug6794831$1.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef MILLISECONDS

using $bug6794831$1 = ::bug6794831$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6794831::init$() {
	$set(this, countDownLatch, $new($CountDownLatch, 1));
}

void bug6794831::main($StringArray* args) {
	$$new(bug6794831)->run();
}

void bug6794831::run() {
	$SwingUtilities::invokeAndWait($$new($bug6794831$1, this));
	$init($TimeUnit);
	if (this->countDownLatch->await(3000, $TimeUnit::MILLISECONDS)) {
		$nc($System::out)->println("bug6794831 passed"_s);
	} else {
		fail("bug6794831 failed"_s);
	}
}

void bug6794831::fail($String* msg) {
	$throwNew($RuntimeException, msg);
}

bug6794831::bug6794831() {
}

$Class* bug6794831::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(bug6794831, countDownLatch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6794831, init$, void)},
		{"fail", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6794831, fail, void, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6794831, main, void, $StringArray*), "java.lang.InterruptedException,java.lang.reflect.InvocationTargetException"},
		{"run", "()V", nullptr, $PRIVATE, $method(bug6794831, run, void), "java.lang.InterruptedException,java.lang.reflect.InvocationTargetException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6794831$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6794831",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6794831$1"
	};
	$loadClass(bug6794831, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6794831);
	});
	return class$;
}

$Class* bug6794831::class$ = nullptr;