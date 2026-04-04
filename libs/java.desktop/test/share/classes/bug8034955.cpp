#include <bug8034955.h>
#include <bug8034955$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug8034955$1 = ::bug8034955$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug8034955::init$() {
}

void bug8034955::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug8034955$1));
}

bug8034955::bug8034955() {
}

$Class* bug8034955::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8034955, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8034955, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8034955$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8034955",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8034955$1"
	};
	$loadClass(bug8034955, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8034955);
	});
	return class$;
}

$Class* bug8034955::class$ = nullptr;