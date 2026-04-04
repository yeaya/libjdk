#include <bug6994419.h>
#include <bug6994419$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6994419$1 = ::bug6994419$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6994419::init$() {
}

void bug6994419::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6994419$1));
}

bug6994419::bug6994419() {
}

$Class* bug6994419::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6994419, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(bug6994419, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6994419$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6994419",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6994419$1,bug6994419$1$1"
	};
	$loadClass(bug6994419, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6994419);
	});
	return class$;
}

$Class* bug6994419::class$ = nullptr;