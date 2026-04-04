#include <bug6406264$2.h>
#include <bug6406264.h>
#include <jcpp.h>

using $bug6406264 = ::bug6406264;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6406264$2::init$() {
}

void bug6406264$2::run() {
	$init($bug6406264);
	$nc($bug6406264::comboBox)->showPopup();
}

bug6406264$2::bug6406264$2() {
}

$Class* bug6406264$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6406264$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6406264$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6406264",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6406264$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6406264$2",
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
		"bug6406264"
	};
	$loadClass(bug6406264$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6406264$2);
	});
	return class$;
}

$Class* bug6406264$2::class$ = nullptr;