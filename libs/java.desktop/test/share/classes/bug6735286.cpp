#include <bug6735286.h>
#include <bug6735286$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6735286$1 = ::bug6735286$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6735286::init$() {
}

void bug6735286::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6735286$1));
}

bug6735286::bug6735286() {
}

$Class* bug6735286::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6735286, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6735286, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6735286$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6735286",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6735286$1"
	};
	$loadClass(bug6735286, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6735286);
	});
	return class$;
}

$Class* bug6735286::class$ = nullptr;