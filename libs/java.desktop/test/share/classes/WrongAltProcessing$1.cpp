#include <WrongAltProcessing$1.h>
#include <WrongAltProcessing.h>
#include <jcpp.h>

using $WrongAltProcessing = ::WrongAltProcessing;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void WrongAltProcessing$1::init$() {
}

void WrongAltProcessing$1::run() {
	$WrongAltProcessing::createWindows();
}

WrongAltProcessing$1::WrongAltProcessing$1() {
}

$Class* WrongAltProcessing$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WrongAltProcessing$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WrongAltProcessing$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"WrongAltProcessing",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WrongAltProcessing$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"WrongAltProcessing$1",
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
		"WrongAltProcessing"
	};
	$loadClass(WrongAltProcessing$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WrongAltProcessing$1);
	});
	return class$;
}

$Class* WrongAltProcessing$1::class$ = nullptr;