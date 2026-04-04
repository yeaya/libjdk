#include <bug6608456$TestFuture.h>
#include <bug6608456$TestFuture$1.h>
#include <bug6608456.h>
#include <java/util/concurrent/FutureTask.h>
#include <jcpp.h>

#undef TRUE

using $bug6608456$TestFuture$1 = ::bug6608456$TestFuture$1;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FutureTask = ::java::util::concurrent::FutureTask;

void bug6608456$TestFuture::init$() {
	$FutureTask::init$($$new($bug6608456$TestFuture$1));
	this->defaultCalled$ = false;
	this->delegateCalled$ = false;
}

void bug6608456$TestFuture::defaultCalled() {
	this->defaultCalled$ = true;
	updateState();
}

void bug6608456$TestFuture::delegateCalled() {
	this->delegateCalled$ = true;
	updateState();
}

void bug6608456$TestFuture::updateState() {
	if (this->defaultCalled$ && this->delegateCalled$) {
		set($Boolean::TRUE);
	}
}

bug6608456$TestFuture::bug6608456$TestFuture() {
}

$Class* bug6608456$TestFuture::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultCalled", "Z", nullptr, $PRIVATE | $VOLATILE, $field(bug6608456$TestFuture, defaultCalled$)},
		{"delegateCalled", "Z", nullptr, $PRIVATE | $VOLATILE, $field(bug6608456$TestFuture, delegateCalled$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6608456$TestFuture, init$, void)},
		{"defaultCalled", "()V", nullptr, $PUBLIC, $virtualMethod(bug6608456$TestFuture, defaultCalled, void)},
		{"delegateCalled", "()V", nullptr, $PUBLIC, $virtualMethod(bug6608456$TestFuture, delegateCalled, void)},
		{"updateState", "()V", nullptr, $PRIVATE, $method(bug6608456$TestFuture, updateState, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6608456$TestFuture", "bug6608456", "TestFuture", $STATIC},
		{"bug6608456$TestFuture$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6608456$TestFuture",
		"java.util.concurrent.FutureTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/concurrent/FutureTask<Ljava/lang/Boolean;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6608456"
	};
	$loadClass(bug6608456$TestFuture, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6608456$TestFuture));
	});
	return class$;
}

$Class* bug6608456$TestFuture::class$ = nullptr;