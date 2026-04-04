#include <javax/swing/plaf/synth/SynthCheckBoxUI.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthRadioButtonUI.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthRadioButtonUI = ::javax::swing::plaf::synth::SynthRadioButtonUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthCheckBoxUI::init$() {
	$SynthRadioButtonUI::init$();
}

$ComponentUI* SynthCheckBoxUI::createUI($JComponent* b) {
	$init(SynthCheckBoxUI);
	return $new(SynthCheckBoxUI);
}

$String* SynthCheckBoxUI::getPropertyPrefix() {
	return "CheckBox."_s;
}

void SynthCheckBoxUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	int32_t var$0 = $nc(c)->getWidth();
	$$nc($nc(context)->getPainter())->paintCheckBoxBackground(context, g, 0, 0, var$0, c->getHeight());
}

void SynthCheckBoxUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$$nc($nc(context)->getPainter())->paintCheckBoxBorder(context, g, x, y, w, h);
}

SynthCheckBoxUI::SynthCheckBoxUI() {
}

$Class* SynthCheckBoxUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynthCheckBoxUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(SynthCheckBoxUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(SynthCheckBoxUI, getPropertyPrefix, $String*)},
		{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0, $virtualMethod(SynthCheckBoxUI, paintBackground, void, $SynthContext*, $Graphics*, $JComponent*)},
		{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthCheckBoxUI, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.synth.SynthCheckBoxUI",
		"javax.swing.plaf.synth.SynthRadioButtonUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SynthCheckBoxUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthCheckBoxUI));
	});
	return class$;
}

$Class* SynthCheckBoxUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax