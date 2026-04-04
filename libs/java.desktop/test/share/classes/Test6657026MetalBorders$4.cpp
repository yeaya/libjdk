#include <Test6657026MetalBorders$4.h>
#include <Test6657026MetalBorders.h>
#include <java/awt/Insets.h>
#include <javax/swing/plaf/metal/MetalBorders$PopupMenuBorder.h>
#include <jcpp.h>

#undef NEGATIVE

using $Test6657026MetalBorders = ::Test6657026MetalBorders;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalBorders$PopupMenuBorder = ::javax::swing::plaf::metal::MetalBorders$PopupMenuBorder;

void Test6657026MetalBorders$4::init$() {
	$MetalBorders$PopupMenuBorder::init$();
	{
		$init($MetalBorders$PopupMenuBorder);
		$init($Test6657026MetalBorders);
		$assignStatic($MetalBorders$PopupMenuBorder::borderInsets, $Test6657026MetalBorders::NEGATIVE);
	}
}

Test6657026MetalBorders$4::Test6657026MetalBorders$4() {
}

$Class* Test6657026MetalBorders$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test6657026MetalBorders$4, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6657026MetalBorders",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6657026MetalBorders$4", nullptr, nullptr, 0},
		{"javax.swing.plaf.metal.MetalBorders$PopupMenuBorder", "javax.swing.plaf.metal.MetalBorders", "PopupMenuBorder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6657026MetalBorders$4",
		"javax.swing.plaf.metal.MetalBorders$PopupMenuBorder",
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
	$loadClass(Test6657026MetalBorders$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test6657026MetalBorders$4));
	});
	return class$;
}

$Class* Test6657026MetalBorders$4::class$ = nullptr;