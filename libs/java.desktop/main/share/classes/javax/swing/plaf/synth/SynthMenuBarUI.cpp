#include <javax/swing/plaf/synth/SynthMenuBarUI.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicMenuBarUI.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthMenuLayout.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

#undef ENABLED
#undef LINE_AXIS

using $Graphics = ::java::awt::Graphics;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JComponent = ::javax::swing::JComponent;
using $JMenuBar = ::javax::swing::JMenuBar;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicMenuBarUI = ::javax::swing::plaf::basic::BasicMenuBarUI;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthMenuLayout = ::javax::swing::plaf::synth::SynthMenuLayout;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

int32_t SynthMenuBarUI::hashCode() {
	return this->$BasicMenuBarUI::hashCode();
}

bool SynthMenuBarUI::equals(Object$* arg0) {
	return this->$BasicMenuBarUI::equals(arg0);
}

$Object* SynthMenuBarUI::clone() {
	return this->$BasicMenuBarUI::clone();
}

$String* SynthMenuBarUI::toString() {
	return this->$BasicMenuBarUI::toString();
}

void SynthMenuBarUI::finalize() {
	this->$BasicMenuBarUI::finalize();
}

void SynthMenuBarUI::init$() {
	$BasicMenuBarUI::init$();
}

$ComponentUI* SynthMenuBarUI::createUI($JComponent* x) {
	$init(SynthMenuBarUI);
	return $new(SynthMenuBarUI);
}

void SynthMenuBarUI::installDefaults() {
	$useLocalObjectStack();
	bool var$0 = $nc(this->menuBar)->getLayout() == nullptr;
	if (var$0 || $instanceOf($UIResource, $(this->menuBar->getLayout()))) {
		$nc(this->menuBar)->setLayout($$new($SynthMenuLayout, this->menuBar, $BoxLayout::LINE_AXIS));
	}
	updateStyle(this->menuBar);
}

void SynthMenuBarUI::installListeners() {
	$BasicMenuBarUI::installListeners();
	$nc(this->menuBar)->addPropertyChangeListener(this);
}

void SynthMenuBarUI::updateStyle($JMenuBar* c) {
	$useLocalObjectStack();
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		if (oldStyle != nullptr) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
}

void SynthMenuBarUI::uninstallDefaults() {
	$var($SynthContext, context, getContext(this->menuBar, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

void SynthMenuBarUI::uninstallListeners() {
	$BasicMenuBarUI::uninstallListeners();
	$nc(this->menuBar)->removePropertyChangeListener(this);
}

$SynthContext* SynthMenuBarUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthMenuBarUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthMenuBarUI::getComponentState($JComponent* c) {
	return $SynthLookAndFeel::getComponentState(c);
}

void SynthMenuBarUI::update($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	int32_t var$0 = $nc(c)->getWidth();
	$$nc($nc(context)->getPainter())->paintMenuBarBackground(context, g, 0, 0, var$0, c->getHeight());
	paint(context, g);
}

void SynthMenuBarUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthMenuBarUI::paint($SynthContext* context, $Graphics* g) {
}

void SynthMenuBarUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$$nc($nc(context)->getPainter())->paintMenuBarBorder(context, g, x, y, w, h);
}

void SynthMenuBarUI::propertyChange($PropertyChangeEvent* e) {
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle($$cast($JMenuBar, $nc(e)->getSource()));
	}
}

SynthMenuBarUI::SynthMenuBarUI() {
}

$Class* SynthMenuBarUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthMenuBarUI, style)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynthMenuBarUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(SynthMenuBarUI, createUI, $ComponentUI*, $JComponent*)},
		{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(SynthMenuBarUI, getComponentState, int32_t, $JComponent*)},
		{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC, $virtualMethod(SynthMenuBarUI, getContext, $SynthContext*, $JComponent*)},
		{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(SynthMenuBarUI, getContext, $SynthContext*, $JComponent*, int32_t)},
		{"installDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(SynthMenuBarUI, installDefaults, void)},
		{"installListeners", "()V", nullptr, $PROTECTED, $virtualMethod(SynthMenuBarUI, installListeners, void)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthMenuBarUI, paint, void, $Graphics*, $JComponent*)},
		{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(SynthMenuBarUI, paint, void, $SynthContext*, $Graphics*)},
		{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthMenuBarUI, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthMenuBarUI, propertyChange, void, $PropertyChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"uninstallDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(SynthMenuBarUI, uninstallDefaults, void)},
		{"uninstallListeners", "()V", nullptr, $PROTECTED, $virtualMethod(SynthMenuBarUI, uninstallListeners, void)},
		{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthMenuBarUI, update, void, $Graphics*, $JComponent*)},
		{"updateStyle", "(Ljavax/swing/JMenuBar;)V", nullptr, $PRIVATE, $method(SynthMenuBarUI, updateStyle, void, $JMenuBar*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.synth.SynthMenuBarUI",
		"javax.swing.plaf.basic.BasicMenuBarUI",
		"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SynthMenuBarUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthMenuBarUI));
	});
	return class$;
}

$Class* SynthMenuBarUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax