#include <Test6632810.h>
#include <Test6632810$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Test6632810$1 = ::Test6632810$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void Test6632810::init$() {
}

void Test6632810::main($StringArray* args) {
	$SwingUtilities::invokeLater($$new($Test6632810$1));
}

Test6632810::Test6632810() {
}

$Class* Test6632810::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6632810, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6632810, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6632810$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6632810",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Test6632810$1"
	};
	$loadClass(Test6632810, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6632810);
	});
	return class$;
}

$Class* Test6632810::class$ = nullptr;