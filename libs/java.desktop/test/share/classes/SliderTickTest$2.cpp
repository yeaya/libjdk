#include <SliderTickTest$2.h>
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

void SliderTickTest$2::init$($TestUI* val$test) {
	$set(this, val$test, val$test);
}

void SliderTickTest$2::run() {
	try {
		$nc(this->val$test)->disposeUI();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, "Exception while disposing UI"_s);
	}
}

SliderTickTest$2::SliderTickTest$2() {
}

$Class* SliderTickTest$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$test", "LTestUI;", nullptr, $FINAL | $SYNTHETIC, $field(SliderTickTest$2, val$test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestUI;)V", "()V", 0, $method(SliderTickTest$2, init$, void, $TestUI*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SliderTickTest$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SliderTickTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SliderTickTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SliderTickTest$2",
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
	$loadClass(SliderTickTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SliderTickTest$2);
	});
	return class$;
}

$Class* SliderTickTest$2::class$ = nullptr;