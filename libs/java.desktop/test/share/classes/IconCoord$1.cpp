#include <IconCoord$1.h>
#include <IconCoord.h>
#include <jcpp.h>

using $IconCoord = ::IconCoord;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void IconCoord$1::init$() {
}

void IconCoord$1::run() {
	$$new($IconCoord)->createAndShowGUI();
}

IconCoord$1::IconCoord$1() {
}

$Class* IconCoord$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IconCoord$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(IconCoord$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"IconCoord",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IconCoord$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"IconCoord$1",
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
		"IconCoord"
	};
	$loadClass(IconCoord$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IconCoord$1);
	});
	return class$;
}

$Class* IconCoord$1::class$ = nullptr;