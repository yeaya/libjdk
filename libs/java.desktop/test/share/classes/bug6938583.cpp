#include <bug6938583.h>
#include <bug6938583$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6938583$1 = ::bug6938583$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6938583::init$() {
}

void bug6938583::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6938583$1));
}

bug6938583::bug6938583() {
}

$Class* bug6938583::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6938583, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6938583, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6938583$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6938583",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6938583$1"
	};
	$loadClass(bug6938583, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6938583);
	});
	return class$;
}

$Class* bug6938583::class$ = nullptr;