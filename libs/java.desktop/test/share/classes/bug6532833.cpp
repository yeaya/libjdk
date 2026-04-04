#include <bug6532833.h>
#include <bug6532833$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6532833$1 = ::bug6532833$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6532833::init$() {
}

void bug6532833::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6532833$1));
}

bug6532833::bug6532833() {
}

$Class* bug6532833::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6532833, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6532833, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6532833$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6532833",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6532833$1"
	};
	$loadClass(bug6532833, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6532833);
	});
	return class$;
}

$Class* bug6532833::class$ = nullptr;