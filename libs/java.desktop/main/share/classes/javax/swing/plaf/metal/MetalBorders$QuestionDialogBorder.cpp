#include <javax/swing/plaf/metal/MetalBorders$QuestionDialogBorder.h>
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

void MetalBorders$QuestionDialogBorder::init$() {
	$MetalBorders$DialogBorder::init$();
}

$Color* MetalBorders$QuestionDialogBorder::getActiveBackground() {
	return $UIManager::getColor("OptionPane.questionDialog.border.background"_s);
}

MetalBorders$QuestionDialogBorder::MetalBorders$QuestionDialogBorder() {
}

$Class* MetalBorders$QuestionDialogBorder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetalBorders$QuestionDialogBorder, init$, void)},
		{"getActiveBackground", "()Ljava/awt/Color;", nullptr, $PROTECTED, $virtualMethod(MetalBorders$QuestionDialogBorder, getActiveBackground, $Color*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalBorders$QuestionDialogBorder", "javax.swing.plaf.metal.MetalBorders", "QuestionDialogBorder", $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$DialogBorder", "javax.swing.plaf.metal.MetalBorders", "DialogBorder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalBorders$QuestionDialogBorder",
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
	$loadClass(MetalBorders$QuestionDialogBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalBorders$QuestionDialogBorder));
	});
	return class$;
}

$Class* MetalBorders$QuestionDialogBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax