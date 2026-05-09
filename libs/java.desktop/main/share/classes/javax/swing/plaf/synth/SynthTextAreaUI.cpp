#include <javax/swing/plaf/synth/SynthTextAreaUI.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicTextAreaUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthTextAreaUI$Handler.h>
#include <javax/swing/plaf/synth/SynthTextFieldUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef ENABLED

using $Graphics = ::java::awt::Graphics;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicTextAreaUI = ::javax::swing::plaf::basic::BasicTextAreaUI;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthTextAreaUI$Handler = ::javax::swing::plaf::synth::SynthTextAreaUI$Handler;
using $SynthTextFieldUI = ::javax::swing::plaf::synth::SynthTextFieldUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

int32_t SynthTextAreaUI::hashCode() {
	return this->$BasicTextAreaUI::hashCode();
}

bool SynthTextAreaUI::equals(Object$* arg0) {
	return this->$BasicTextAreaUI::equals(arg0);
}

$Object* SynthTextAreaUI::clone() {
	return this->$BasicTextAreaUI::clone();
}

$String* SynthTextAreaUI::toString() {
	return this->$BasicTextAreaUI::toString();
}

void SynthTextAreaUI::finalize() {
	this->$BasicTextAreaUI::finalize();
}

$JTextComponent* SynthTextAreaUI::access$100(SynthTextAreaUI* x0) {
	$init(SynthTextAreaUI);
	return $nc(x0)->getComponent();
}

$JTextComponent* SynthTextAreaUI::access$000(SynthTextAreaUI* x0) {
	$init(SynthTextAreaUI);
	return $nc(x0)->getComponent();
}

void SynthTextAreaUI::init$() {
	$BasicTextAreaUI::init$();
	$set(this, handler, $new($SynthTextAreaUI$Handler, this));
	this->updateKBAction = true;
}

$ComponentUI* SynthTextAreaUI::createUI($JComponent* ta) {
	$init(SynthTextAreaUI);
	return $new(SynthTextAreaUI);
}

void SynthTextAreaUI::installDefaults() {
	$useLocalObjectStack();
	$BasicTextAreaUI::installDefaults();
	updateStyle($(getComponent()), true);
	$$nc(getComponent())->addFocusListener(this->handler);
}

void SynthTextAreaUI::uninstallDefaults() {
	$useLocalObjectStack();
	$var($SynthContext, context, getContext($(getComponent()), $SynthConstants::ENABLED));
	$$nc(getComponent())->putClientProperty("caretAspectRatio"_s, nullptr);
	$$nc(getComponent())->removeFocusListener(this->handler);
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	$BasicTextAreaUI::uninstallDefaults();
}

void SynthTextAreaUI::updateStyle($JTextComponent* comp, bool updateKBAction) {
	$useLocalObjectStack();
	$var($SynthContext, context, getContext(comp, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		$SynthTextFieldUI::updateStyle(comp, context, $(getPropertyPrefix()));
		if (oldStyle != nullptr && updateKBAction) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
}

$SynthContext* SynthTextAreaUI::getContext($JComponent* c) {
	return getContext(c, $SynthLookAndFeel::getComponentState(c));
}

$SynthContext* SynthTextAreaUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

void SynthTextAreaUI::update($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	int32_t var$0 = $nc(c)->getWidth();
	$$nc($nc(context)->getPainter())->paintTextAreaBackground(context, g, 0, 0, var$0, c->getHeight());
	paint(context, g);
}

void SynthTextAreaUI::paint($SynthContext* context, $Graphics* g) {
	$BasicTextAreaUI::paint(g, $(getComponent()));
}

void SynthTextAreaUI::paintBackground($Graphics* g) {
}

void SynthTextAreaUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$$nc($nc(context)->getPainter())->paintTextAreaBorder(context, g, x, y, w, h);
}

void SynthTextAreaUI::propertyChange($PropertyChangeEvent* evt) {
	$useLocalObjectStack();
	if ($$nc($nc(evt)->getPropertyName())->equals("keymap"_s)) {
		if (evt->getNewValue() != nullptr) {
			this->updateKBAction = false;
		} else {
			this->updateKBAction = true;
		}
	}
	if ($SynthLookAndFeel::shouldUpdateStyle(evt)) {
		updateStyle($$cast($JTextComponent, evt->getSource()), this->updateKBAction);
	}
	$BasicTextAreaUI::propertyChange(evt);
}

SynthTextAreaUI::SynthTextAreaUI() {
}

$Class* SynthTextAreaUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handler", "Ljavax/swing/plaf/synth/SynthTextAreaUI$Handler;", nullptr, $PRIVATE, $field(SynthTextAreaUI, handler)},
		{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthTextAreaUI, style)},
		{"updateKBAction", "Z", nullptr, $PRIVATE, $field(SynthTextAreaUI, updateKBAction)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynthTextAreaUI, init$, void)},
		{"access$000", "(Ljavax/swing/plaf/synth/SynthTextAreaUI;)Ljavax/swing/text/JTextComponent;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(SynthTextAreaUI, access$000, $JTextComponent*, SynthTextAreaUI*)},
		{"access$100", "(Ljavax/swing/plaf/synth/SynthTextAreaUI;)Ljavax/swing/text/JTextComponent;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(SynthTextAreaUI, access$100, $JTextComponent*, SynthTextAreaUI*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(SynthTextAreaUI, createUI, $ComponentUI*, $JComponent*)},
		{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC, $virtualMethod(SynthTextAreaUI, getContext, $SynthContext*, $JComponent*)},
		{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(SynthTextAreaUI, getContext, $SynthContext*, $JComponent*, int32_t)},
		{"installDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(SynthTextAreaUI, installDefaults, void)},
		{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(SynthTextAreaUI, paint, void, $SynthContext*, $Graphics*)},
		{"paintBackground", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(SynthTextAreaUI, paintBackground, void, $Graphics*)},
		{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthTextAreaUI, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED, $virtualMethod(SynthTextAreaUI, propertyChange, void, $PropertyChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"uninstallDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(SynthTextAreaUI, uninstallDefaults, void)},
		{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthTextAreaUI, update, void, $Graphics*, $JComponent*)},
		{"updateStyle", "(Ljavax/swing/text/JTextComponent;Z)V", nullptr, $PRIVATE, $method(SynthTextAreaUI, updateStyle, void, $JTextComponent*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthTextAreaUI$Handler", "javax.swing.plaf.synth.SynthTextAreaUI", "Handler", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.synth.SynthTextAreaUI",
		"javax.swing.plaf.basic.BasicTextAreaUI",
		"javax.swing.plaf.synth.SynthUI",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthTextAreaUI$Handler"
	};
	$loadClass(SynthTextAreaUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthTextAreaUI));
	});
	return class$;
}

$Class* SynthTextAreaUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax