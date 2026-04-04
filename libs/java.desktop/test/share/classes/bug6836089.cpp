#include <bug6836089.h>
#include <bug6836089$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6836089$1 = ::bug6836089$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6836089::init$() {
}

void bug6836089::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6836089$1));
}

bug6836089::bug6836089() {
}

$Class* bug6836089::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6836089, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6836089, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6836089$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6836089",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6836089$1"
	};
	$loadClass(bug6836089, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6836089);
	});
	return class$;
}

$Class* bug6836089::class$ = nullptr;