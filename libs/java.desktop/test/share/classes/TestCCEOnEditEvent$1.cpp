#include <TestCCEOnEditEvent$1.h>
#include <TestCCEOnEditEvent.h>
#include <jcpp.h>

using $TestCCEOnEditEvent = ::TestCCEOnEditEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestCCEOnEditEvent$1::init$($TestCCEOnEditEvent* val$test) {
	$set(this, val$test, val$test);
}

void TestCCEOnEditEvent$1::run() {
	$nc(this->val$test)->createAndShowGUI();
}

TestCCEOnEditEvent$1::TestCCEOnEditEvent$1() {
}

$Class* TestCCEOnEditEvent$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$test", "LTestCCEOnEditEvent;", nullptr, $FINAL | $SYNTHETIC, $field(TestCCEOnEditEvent$1, val$test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestCCEOnEditEvent;)V", "()V", 0, $method(TestCCEOnEditEvent$1, init$, void, $TestCCEOnEditEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestCCEOnEditEvent$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestCCEOnEditEvent",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestCCEOnEditEvent$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestCCEOnEditEvent$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestCCEOnEditEvent"
	};
	$loadClass(TestCCEOnEditEvent$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestCCEOnEditEvent$1);
	});
	return class$;
}

$Class* TestCCEOnEditEvent$1::class$ = nullptr;