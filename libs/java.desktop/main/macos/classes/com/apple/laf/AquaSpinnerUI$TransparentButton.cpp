#include <com/apple/laf/AquaSpinnerUI$TransparentButton.h>
#include <com/apple/laf/AquaSpinnerUI$SpinPainter.h>
#include <com/apple/laf/AquaSpinnerUI.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

using $AquaSpinnerUI = ::com::apple::laf::AquaSpinnerUI;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;

namespace com {
	namespace apple {
		namespace laf {

void AquaSpinnerUI$TransparentButton::init$($AquaSpinnerUI* this$0) {
	$set(this, this$0, this$0);
	$JButton::init$();
	this->interceptRepaints = false;
	setFocusable(false);
	this->interceptRepaints = true;
}

void AquaSpinnerUI$TransparentButton::paint($Graphics* g) {
}

void AquaSpinnerUI$TransparentButton::repaint() {
	if (this->interceptRepaints) {
		if (this->this$0->spinPainter == nullptr) {
			return;
		}
		$nc(this->this$0->spinPainter)->repaint();
	}
	$JButton::repaint();
}

AquaSpinnerUI$TransparentButton::AquaSpinnerUI$TransparentButton() {
}

$Class* AquaSpinnerUI$TransparentButton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaSpinnerUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaSpinnerUI$TransparentButton, this$0)},
		{"interceptRepaints", "Z", nullptr, 0, $field(AquaSpinnerUI$TransparentButton, interceptRepaints)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaSpinnerUI;)V", nullptr, $PUBLIC, $method(AquaSpinnerUI$TransparentButton, init$, void, $AquaSpinnerUI*)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(AquaSpinnerUI$TransparentButton, paint, void, $Graphics*)},
		{"repaint", "()V", nullptr, $PUBLIC, $virtualMethod(AquaSpinnerUI$TransparentButton, repaint, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaSpinnerUI$TransparentButton", "com.apple.laf.AquaSpinnerUI", "TransparentButton", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaSpinnerUI$TransparentButton",
		"javax.swing.JButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaSpinnerUI"
	};
	$loadClass(AquaSpinnerUI$TransparentButton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaSpinnerUI$TransparentButton));
	});
	return class$;
}

$Class* AquaSpinnerUI$TransparentButton::class$ = nullptr;

		} // laf
	} // apple
} // com