#include <UIClientPropertyKeyTest$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void UIClientPropertyKeyTest$1::init$() {
}

UIClientPropertyKeyTest$1::UIClientPropertyKeyTest$1() {
}

$Class* UIClientPropertyKeyTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(UIClientPropertyKeyTest$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"UIClientPropertyKeyTest",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"UIClientPropertyKeyTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UIClientPropertyKeyTest$1",
		"java.lang.Object",
		"javax.swing.UIClientPropertyKey",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"UIClientPropertyKeyTest"
	};
	$loadClass(UIClientPropertyKeyTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIClientPropertyKeyTest$1);
	});
	return class$;
}

$Class* UIClientPropertyKeyTest$1::class$ = nullptr;