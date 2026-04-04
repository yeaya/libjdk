#include <Test6657026MetalBorders$2.h>
#include <Test6657026MetalBorders.h>
#include <java/awt/Insets.h>
#include <javax/swing/plaf/metal/MetalBorders$MenuBarBorder.h>
#include <jcpp.h>

#undef NEGATIVE

using $Test6657026MetalBorders = ::Test6657026MetalBorders;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalBorders$MenuBarBorder = ::javax::swing::plaf::metal::MetalBorders$MenuBarBorder;

void Test6657026MetalBorders$2::init$() {
	$MetalBorders$MenuBarBorder::init$();
	{
		$init($MetalBorders$MenuBarBorder);
		$init($Test6657026MetalBorders);
		$assignStatic($MetalBorders$MenuBarBorder::borderInsets, $Test6657026MetalBorders::NEGATIVE);
	}
}

Test6657026MetalBorders$2::Test6657026MetalBorders$2() {
}

$Class* Test6657026MetalBorders$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test6657026MetalBorders$2, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6657026MetalBorders",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6657026MetalBorders$2", nullptr, nullptr, 0},
		{"javax.swing.plaf.metal.MetalBorders$MenuBarBorder", "javax.swing.plaf.metal.MetalBorders", "MenuBarBorder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6657026MetalBorders$2",
		"javax.swing.plaf.metal.MetalBorders$MenuBarBorder",
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
	$loadClass(Test6657026MetalBorders$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test6657026MetalBorders$2));
	});
	return class$;
}

$Class* Test6657026MetalBorders$2::class$ = nullptr;