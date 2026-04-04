#include <javax/swing/plaf/synth/SynthRadioButtonUI.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/synth/SynthButtonUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthToggleButtonUI.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthToggleButtonUI = ::javax::swing::plaf::synth::SynthToggleButtonUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthRadioButtonUI::init$() {
	$SynthToggleButtonUI::init$();
}

$ComponentUI* SynthRadioButtonUI::createUI($JComponent* b) {
	$init(SynthRadioButtonUI);
	return $new(SynthRadioButtonUI);
}

$String* SynthRadioButtonUI::getPropertyPrefix() {
	return "RadioButton."_s;
}

$Icon* SynthRadioButtonUI::getSizingIcon($AbstractButton* b) {
	return getIcon(b);
}

void SynthRadioButtonUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	int32_t var$0 = $nc(c)->getWidth();
	$$nc($nc(context)->getPainter())->paintRadioButtonBackground(context, g, 0, 0, var$0, c->getHeight());
}

void SynthRadioButtonUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$$nc($nc(context)->getPainter())->paintRadioButtonBorder(context, g, x, y, w, h);
}

SynthRadioButtonUI::SynthRadioButtonUI() {
}

$Class* SynthRadioButtonUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynthRadioButtonUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(SynthRadioButtonUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(SynthRadioButtonUI, getPropertyPrefix, $String*)},
		{"getSizingIcon", "(Ljavax/swing/AbstractButton;)Ljavax/swing/Icon;", nullptr, $PROTECTED, $virtualMethod(SynthRadioButtonUI, getSizingIcon, $Icon*, $AbstractButton*)},
		{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0, $virtualMethod(SynthRadioButtonUI, paintBackground, void, $SynthContext*, $Graphics*, $JComponent*)},
		{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthRadioButtonUI, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.synth.SynthRadioButtonUI",
		"javax.swing.plaf.synth.SynthToggleButtonUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SynthRadioButtonUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthRadioButtonUI));
	});
	return class$;
}

$Class* SynthRadioButtonUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax