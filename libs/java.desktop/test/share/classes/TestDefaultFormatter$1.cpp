#include <TestDefaultFormatter$1.h>
#include <TestDefaultFormatter.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;

void TestDefaultFormatter$1::init$() {
	$DefaultFormatter::init$();
}

TestDefaultFormatter$1::TestDefaultFormatter$1() {
}

$Class* TestDefaultFormatter$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestDefaultFormatter$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestDefaultFormatter",
		"testDefaultFormatter",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestDefaultFormatter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestDefaultFormatter$1",
		"javax.swing.text.DefaultFormatter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestDefaultFormatter"
	};
	$loadClass(TestDefaultFormatter$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestDefaultFormatter$1));
	});
	return class$;
}

$Class* TestDefaultFormatter$1::class$ = nullptr;