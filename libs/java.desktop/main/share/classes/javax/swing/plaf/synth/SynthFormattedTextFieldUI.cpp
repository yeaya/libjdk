#include <javax/swing/plaf/synth/SynthFormattedTextFieldUI.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthTextFieldUI.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthTextFieldUI = ::javax::swing::plaf::synth::SynthTextFieldUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthFormattedTextFieldUI::init$() {
	$SynthTextFieldUI::init$();
}

$ComponentUI* SynthFormattedTextFieldUI::createUI($JComponent* c) {
	$init(SynthFormattedTextFieldUI);
	return $new(SynthFormattedTextFieldUI);
}

$String* SynthFormattedTextFieldUI::getPropertyPrefix() {
	return "FormattedTextField"_s;
}

void SynthFormattedTextFieldUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	int32_t var$0 = $nc(c)->getWidth();
	$$nc($nc(context)->getPainter())->paintFormattedTextFieldBackground(context, g, 0, 0, var$0, c->getHeight());
}

void SynthFormattedTextFieldUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$$nc($nc(context)->getPainter())->paintFormattedTextFieldBorder(context, g, x, y, w, h);
}

SynthFormattedTextFieldUI::SynthFormattedTextFieldUI() {
}

$Class* SynthFormattedTextFieldUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynthFormattedTextFieldUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(SynthFormattedTextFieldUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(SynthFormattedTextFieldUI, getPropertyPrefix, $String*)},
		{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0, $virtualMethod(SynthFormattedTextFieldUI, paintBackground, void, $SynthContext*, $Graphics*, $JComponent*)},
		{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthFormattedTextFieldUI, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.synth.SynthFormattedTextFieldUI",
		"javax.swing.plaf.synth.SynthTextFieldUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SynthFormattedTextFieldUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthFormattedTextFieldUI));
	});
	return class$;
}

$Class* SynthFormattedTextFieldUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax