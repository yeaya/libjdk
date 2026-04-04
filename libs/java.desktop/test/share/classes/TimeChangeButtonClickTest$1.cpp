#include <TimeChangeButtonClickTest$1.h>
#include <TestUI.h>
#include <TimeChangeButtonClickTest.h>
#include <jcpp.h>

using $TestUI = ::TestUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void TimeChangeButtonClickTest$1::init$($TestUI* val$test) {
	$set(this, val$test, val$test);
}

void TimeChangeButtonClickTest$1::run() {
	try {
		$nc(this->val$test)->createUI();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, "Exception while creating test UI"_s);
	}
}

TimeChangeButtonClickTest$1::TimeChangeButtonClickTest$1() {
}

$Class* TimeChangeButtonClickTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$test", "LTestUI;", nullptr, $FINAL | $SYNTHETIC, $field(TimeChangeButtonClickTest$1, val$test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestUI;)V", "()V", 0, $method(TimeChangeButtonClickTest$1, init$, void, $TestUI*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TimeChangeButtonClickTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TimeChangeButtonClickTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TimeChangeButtonClickTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TimeChangeButtonClickTest$1",
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
		"TimeChangeButtonClickTest"
	};
	$loadClass(TimeChangeButtonClickTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeChangeButtonClickTest$1);
	});
	return class$;
}

$Class* TimeChangeButtonClickTest$1::class$ = nullptr;