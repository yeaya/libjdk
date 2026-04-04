#include <javax/swing/plaf/synth/SynthCheckBoxMenuItemUI.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthMenuItemUI.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthMenuItemUI = ::javax::swing::plaf::synth::SynthMenuItemUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthCheckBoxMenuItemUI::init$() {
	$SynthMenuItemUI::init$();
}

$ComponentUI* SynthCheckBoxMenuItemUI::createUI($JComponent* c) {
	$init(SynthCheckBoxMenuItemUI);
	return $new(SynthCheckBoxMenuItemUI);
}

$String* SynthCheckBoxMenuItemUI::getPropertyPrefix() {
	return "CheckBoxMenuItem"_s;
}

void SynthCheckBoxMenuItemUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	int32_t var$0 = $nc(c)->getWidth();
	$$nc($nc(context)->getPainter())->paintCheckBoxMenuItemBackground(context, g, 0, 0, var$0, c->getHeight());
}

void SynthCheckBoxMenuItemUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$$nc($nc(context)->getPainter())->paintCheckBoxMenuItemBorder(context, g, x, y, w, h);
}

SynthCheckBoxMenuItemUI::SynthCheckBoxMenuItemUI() {
}

$Class* SynthCheckBoxMenuItemUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynthCheckBoxMenuItemUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(SynthCheckBoxMenuItemUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(SynthCheckBoxMenuItemUI, getPropertyPrefix, $String*)},
		{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0, $virtualMethod(SynthCheckBoxMenuItemUI, paintBackground, void, $SynthContext*, $Graphics*, $JComponent*)},
		{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthCheckBoxMenuItemUI, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.synth.SynthCheckBoxMenuItemUI",
		"javax.swing.plaf.synth.SynthMenuItemUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SynthCheckBoxMenuItemUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthCheckBoxMenuItemUI));
	});
	return class$;
}

$Class* SynthCheckBoxMenuItemUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax