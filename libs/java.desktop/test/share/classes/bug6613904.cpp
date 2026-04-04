#include <bug6613904.h>
#include <bug6613904$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6613904$1 = ::bug6613904$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6613904::init$() {
}

void bug6613904::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6613904$1));
}

bug6613904::bug6613904() {
}

$Class* bug6613904::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6613904, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6613904, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6613904$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6613904",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6613904$1"
	};
	$loadClass(bug6613904, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6613904);
	});
	return class$;
}

$Class* bug6613904::class$ = nullptr;