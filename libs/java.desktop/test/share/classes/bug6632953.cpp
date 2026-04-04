#include <bug6632953.h>
#include <bug6632953$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6632953$1 = ::bug6632953$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6632953::init$() {
}

void bug6632953::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6632953$1));
}

bug6632953::bug6632953() {
}

$Class* bug6632953::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6632953, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(bug6632953, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6632953$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6632953",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6632953$1"
	};
	$loadClass(bug6632953, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6632953);
	});
	return class$;
}

$Class* bug6632953::class$ = nullptr;