#include <Test6657026MetalBorders$3.h>
#include <Test6657026MetalBorders.h>
#include <java/awt/Insets.h>
#include <javax/swing/plaf/metal/MetalBorders$MenuItemBorder.h>
#include <jcpp.h>

#undef NEGATIVE

using $Test6657026MetalBorders = ::Test6657026MetalBorders;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalBorders$MenuItemBorder = ::javax::swing::plaf::metal::MetalBorders$MenuItemBorder;

void Test6657026MetalBorders$3::init$() {
	$MetalBorders$MenuItemBorder::init$();
	{
		$init($MetalBorders$MenuItemBorder);
		$init($Test6657026MetalBorders);
		$assignStatic($MetalBorders$MenuItemBorder::borderInsets, $Test6657026MetalBorders::NEGATIVE);
	}
}

Test6657026MetalBorders$3::Test6657026MetalBorders$3() {
}

$Class* Test6657026MetalBorders$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test6657026MetalBorders$3, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6657026MetalBorders",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6657026MetalBorders$3", nullptr, nullptr, 0},
		{"javax.swing.plaf.metal.MetalBorders$MenuItemBorder", "javax.swing.plaf.metal.MetalBorders", "MenuItemBorder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6657026MetalBorders$3",
		"javax.swing.plaf.metal.MetalBorders$MenuItemBorder",
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
	$loadClass(Test6657026MetalBorders$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test6657026MetalBorders$3));
	});
	return class$;
}

$Class* Test6657026MetalBorders$3::class$ = nullptr;