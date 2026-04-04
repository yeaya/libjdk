#include <WrongAltProcessing$2.h>
#include <WrongAltProcessing.h>
#include <jcpp.h>

using $WrongAltProcessing = ::WrongAltProcessing;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void WrongAltProcessing$2::init$() {
}

void WrongAltProcessing$2::run() {
	$WrongAltProcessing::verify();
}

WrongAltProcessing$2::WrongAltProcessing$2() {
}

$Class* WrongAltProcessing$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WrongAltProcessing$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WrongAltProcessing$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"WrongAltProcessing",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WrongAltProcessing$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"WrongAltProcessing$2",
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
	$loadClass(WrongAltProcessing$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WrongAltProcessing$2);
	});
	return class$;
}

$Class* WrongAltProcessing$2::class$ = nullptr;