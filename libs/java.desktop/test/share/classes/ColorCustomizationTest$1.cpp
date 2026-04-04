#include <ColorCustomizationTest$1.h>
#include <ColorCustomizationTest.h>
#include <jcpp.h>

using $ColorCustomizationTest = ::ColorCustomizationTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ColorCustomizationTest$1::init$() {
}

void ColorCustomizationTest$1::run() {
	$$new($ColorCustomizationTest)->test();
}

ColorCustomizationTest$1::ColorCustomizationTest$1() {
}

$Class* ColorCustomizationTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ColorCustomizationTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ColorCustomizationTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ColorCustomizationTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ColorCustomizationTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ColorCustomizationTest$1",
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
		"ColorCustomizationTest"
	};
	$loadClass(ColorCustomizationTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ColorCustomizationTest$1);
	});
	return class$;
}

$Class* ColorCustomizationTest$1::class$ = nullptr;