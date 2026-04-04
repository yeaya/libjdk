#include <SliderTickTest$1.h>
#include <SliderTickTest.h>
#include <TestUI.h>
#include <jcpp.h>

using $TestUI = ::TestUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void SliderTickTest$1::init$($TestUI* val$test) {
	$set(this, val$test, val$test);
}

void SliderTickTest$1::run() {
	try {
		$nc(this->val$test)->createUI();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, "Exception while creating UI"_s);
	}
}

SliderTickTest$1::SliderTickTest$1() {
}

$Class* SliderTickTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$test", "LTestUI;", nullptr, $FINAL | $SYNTHETIC, $field(SliderTickTest$1, val$test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestUI;)V", "()V", 0, $method(SliderTickTest$1, init$, void, $TestUI*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SliderTickTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SliderTickTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SliderTickTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SliderTickTest$1",
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
		"SliderTickTest"
	};
	$loadClass(SliderTickTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SliderTickTest$1);
	});
	return class$;
}

$Class* SliderTickTest$1::class$ = nullptr;