#include <bug6771184.h>
#include <bug6771184$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6771184$1 = ::bug6771184$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6771184::init$() {
}

void bug6771184::main($StringArray* args) {
	$SwingUtilities::invokeLater($$new($bug6771184$1));
}

bug6771184::bug6771184() {
}

$Class* bug6771184::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6771184, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6771184, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6771184$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6771184",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6771184$1,bug6771184$1$1"
	};
	$loadClass(bug6771184, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6771184);
	});
	return class$;
}

$Class* bug6771184::class$ = nullptr;