#include <bug7013453.h>
#include <bug7013453$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug7013453$1 = ::bug7013453$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug7013453::init$() {
}

void bug7013453::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug7013453$1));
}

bug7013453::bug7013453() {
}

$Class* bug7013453::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7013453, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7013453, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7013453$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7013453",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7013453$1,bug7013453$1$1"
	};
	$loadClass(bug7013453, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7013453);
	});
	return class$;
}

$Class* bug7013453::class$ = nullptr;