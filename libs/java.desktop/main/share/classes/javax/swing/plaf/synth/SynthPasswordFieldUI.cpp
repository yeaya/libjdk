#include <javax/swing/plaf/synth/SynthPasswordFieldUI.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthTextFieldUI.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PasswordView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthTextFieldUI = ::javax::swing::plaf::synth::SynthTextFieldUI;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Element = ::javax::swing::text::Element;
using $PasswordView = ::javax::swing::text::PasswordView;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthPasswordFieldUI::init$() {
	$SynthTextFieldUI::init$();
}

$ComponentUI* SynthPasswordFieldUI::createUI($JComponent* c) {
	$init(SynthPasswordFieldUI);
	return $new(SynthPasswordFieldUI);
}

$String* SynthPasswordFieldUI::getPropertyPrefix() {
	return "PasswordField"_s;
}

$View* SynthPasswordFieldUI::create($Element* elem) {
	return $new($PasswordView, elem);
}

void SynthPasswordFieldUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	int32_t var$0 = $nc(c)->getWidth();
	$$nc($nc(context)->getPainter())->paintPasswordFieldBackground(context, g, 0, 0, var$0, c->getHeight());
}

void SynthPasswordFieldUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$$nc($nc(context)->getPainter())->paintPasswordFieldBorder(context, g, x, y, w, h);
}

void SynthPasswordFieldUI::installKeyboardActions() {
	$useLocalObjectStack();
	$SynthTextFieldUI::installKeyboardActions();
	$var($ActionMap, map, $SwingUtilities::getUIActionMap($(getComponent())));
	$init($DefaultEditorKit);
	if (map != nullptr && map->get($DefaultEditorKit::selectWordAction) != nullptr) {
		$var($Action, a, map->get($DefaultEditorKit::selectLineAction));
		if (a != nullptr) {
			map->put($DefaultEditorKit::selectWordAction, a);
		}
	}
}

SynthPasswordFieldUI::SynthPasswordFieldUI() {
}

$Class* SynthPasswordFieldUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynthPasswordFieldUI, init$, void)},
		{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC, $virtualMethod(SynthPasswordFieldUI, create, $View*, $Element*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(SynthPasswordFieldUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(SynthPasswordFieldUI, getPropertyPrefix, $String*)},
		{"installKeyboardActions", "()V", nullptr, $PROTECTED, $virtualMethod(SynthPasswordFieldUI, installKeyboardActions, void)},
		{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0, $virtualMethod(SynthPasswordFieldUI, paintBackground, void, $SynthContext*, $Graphics*, $JComponent*)},
		{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPasswordFieldUI, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.synth.SynthPasswordFieldUI",
		"javax.swing.plaf.synth.SynthTextFieldUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SynthPasswordFieldUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthPasswordFieldUI));
	});
	return class$;
}

$Class* SynthPasswordFieldUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax