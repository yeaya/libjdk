#include <TimeChangeButtonClickTest$2.h>
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

void TimeChangeButtonClickTest$2::init$($TestUI* val$test) {
	$set(this, val$test, val$test);
}

void TimeChangeButtonClickTest$2::run() {
	try {
		$nc(this->val$test)->disposeUI();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, "Exception while disposing test UI"_s);
	}
}

TimeChangeButtonClickTest$2::TimeChangeButtonClickTest$2() {
}

$Class* TimeChangeButtonClickTest$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$test", "LTestUI;", nullptr, $FINAL | $SYNTHETIC, $field(TimeChangeButtonClickTest$2, val$test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestUI;)V", "()V", 0, $method(TimeChangeButtonClickTest$2, init$, void, $TestUI*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TimeChangeButtonClickTest$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TimeChangeButtonClickTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TimeChangeButtonClickTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TimeChangeButtonClickTest$2",
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
	$loadClass(TimeChangeButtonClickTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeChangeButtonClickTest$2);
	});
	return class$;
}

$Class* TimeChangeButtonClickTest$2::class$ = nullptr;