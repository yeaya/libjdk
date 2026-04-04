#include <bug8010718.h>
#include <bug8010718$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug8010718$1 = ::bug8010718$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug8010718::init$() {
}

void bug8010718::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug8010718$1));
}

bug8010718::bug8010718() {
}

$Class* bug8010718::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8010718, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8010718, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8010718$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8010718",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8010718$1,bug8010718$1$2,bug8010718$1$1"
	};
	$loadClass(bug8010718, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8010718);
	});
	return class$;
}

$Class* bug8010718::class$ = nullptr;