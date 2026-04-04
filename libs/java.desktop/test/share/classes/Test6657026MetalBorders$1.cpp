#include <Test6657026MetalBorders$1.h>
#include <Test6657026MetalBorders.h>
#include <java/awt/Insets.h>
#include <javax/swing/plaf/metal/MetalBorders$ButtonBorder.h>
#include <jcpp.h>

#undef NEGATIVE

using $Test6657026MetalBorders = ::Test6657026MetalBorders;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalBorders$ButtonBorder = ::javax::swing::plaf::metal::MetalBorders$ButtonBorder;

void Test6657026MetalBorders$1::init$() {
	$MetalBorders$ButtonBorder::init$();
	{
		$init($MetalBorders$ButtonBorder);
		$init($Test6657026MetalBorders);
		$assignStatic($MetalBorders$ButtonBorder::borderInsets, $Test6657026MetalBorders::NEGATIVE);
	}
}

Test6657026MetalBorders$1::Test6657026MetalBorders$1() {
}

$Class* Test6657026MetalBorders$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test6657026MetalBorders$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6657026MetalBorders",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6657026MetalBorders$1", nullptr, nullptr, 0},
		{"javax.swing.plaf.metal.MetalBorders$ButtonBorder", "javax.swing.plaf.metal.MetalBorders", "ButtonBorder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6657026MetalBorders$1",
		"javax.swing.plaf.metal.MetalBorders$ButtonBorder",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test6657026MetalBorders"
	};
	$loadClass(Test6657026MetalBorders$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test6657026MetalBorders$1));
	});
	return class$;
}

$Class* Test6657026MetalBorders$1::class$ = nullptr;