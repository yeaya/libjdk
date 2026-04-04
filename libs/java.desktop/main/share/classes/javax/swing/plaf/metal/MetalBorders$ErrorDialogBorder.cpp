#include <javax/swing/plaf/metal/MetalBorders$ErrorDialogBorder.h>
#include <java/awt/Color.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalBorders$DialogBorder.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $MetalBorders$DialogBorder = ::javax::swing::plaf::metal::MetalBorders$DialogBorder;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalBorders$ErrorDialogBorder::init$() {
	$MetalBorders$DialogBorder::init$();
}

$Color* MetalBorders$ErrorDialogBorder::getActiveBackground() {
	return $UIManager::getColor("OptionPane.errorDialog.border.background"_s);
}

MetalBorders$ErrorDialogBorder::MetalBorders$ErrorDialogBorder() {
}

$Class* MetalBorders$ErrorDialogBorder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetalBorders$ErrorDialogBorder, init$, void)},
		{"getActiveBackground", "()Ljava/awt/Color;", nullptr, $PROTECTED, $virtualMethod(MetalBorders$ErrorDialogBorder, getActiveBackground, $Color*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalBorders$ErrorDialogBorder", "javax.swing.plaf.metal.MetalBorders", "ErrorDialogBorder", $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$DialogBorder", "javax.swing.plaf.metal.MetalBorders", "DialogBorder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalBorders$ErrorDialogBorder",
		"javax.swing.plaf.metal.MetalBorders$DialogBorder",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalBorders"
	};
	$loadClass(MetalBorders$ErrorDialogBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalBorders$ErrorDialogBorder));
	});
	return class$;
}

$Class* MetalBorders$ErrorDialogBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax