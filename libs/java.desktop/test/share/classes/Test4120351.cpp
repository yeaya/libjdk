#include <Test4120351.h>
#include <java/awt/Color.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EtchedBorder.h>
#include <jcpp.h>

#undef BLACK
#undef LOWERED
#undef RAISED
#undef WHITE

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BorderFactory = ::javax::swing::BorderFactory;
using $EtchedBorder = ::javax::swing::border::EtchedBorder;

void Test4120351::init$() {
}

void Test4120351::main($StringArray* args) {
	$BorderFactory::createEtchedBorder($EtchedBorder::RAISED);
	$BorderFactory::createEtchedBorder($EtchedBorder::LOWERED);
	$init($Color);
	$BorderFactory::createEtchedBorder($EtchedBorder::RAISED, $Color::BLACK, $Color::WHITE);
	$BorderFactory::createEtchedBorder($EtchedBorder::LOWERED, $Color::WHITE, $Color::BLACK);
}

Test4120351::Test4120351() {
}

$Class* Test4120351::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test4120351, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test4120351, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test4120351",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test4120351, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test4120351);
	});
	return class$;
}

$Class* Test4120351::class$ = nullptr;