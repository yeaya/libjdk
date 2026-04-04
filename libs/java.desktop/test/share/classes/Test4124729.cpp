#include <Test4124729.h>
#include <java/awt/Color.h>
#include <javax/swing/border/LineBorder.h>
#include <jcpp.h>

#undef BLUE

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LineBorder = ::javax::swing::border::LineBorder;

void Test4124729::init$() {
}

void Test4124729::main($StringArray* args) {
	$init($Color);
	$new($LineBorder, $Color::BLUE, 3, true);
}

Test4124729::Test4124729() {
}

$Class* Test4124729::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test4124729, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test4124729, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test4124729",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test4124729, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test4124729);
	});
	return class$;
}

$Class* Test4124729::class$ = nullptr;