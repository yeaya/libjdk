#include <javax/swing/plaf/synth/SynthPanelUI.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/PanelUI.h>
#include <javax/swing/plaf/basic/BasicPanelUI.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef ENABLED

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $PanelUI = ::javax::swing::plaf::PanelUI;
using $BasicPanelUI = ::javax::swing::plaf::basic::BasicPanelUI;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthPanelUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthPanelUI, style)},
	{}
};

$MethodInfo _SynthPanelUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(SynthPanelUI, init$, void)},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(SynthPanelUI, createUI, $ComponentUI*, $JComponent*)},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(SynthPanelUI, getComponentState, int32_t, $JComponent*)},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC, $virtualMethod(SynthPanelUI, getContext, $SynthContext*, $JComponent*)},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(SynthPanelUI, getContext, $SynthContext*, $JComponent*, int32_t)},
	{"installDefaults", "(Ljavax/swing/JPanel;)V", nullptr, $PROTECTED, $virtualMethod(SynthPanelUI, installDefaults, void, $JPanel*)},
	{"installListeners", "(Ljavax/swing/JPanel;)V", nullptr, $PROTECTED, $virtualMethod(SynthPanelUI, installListeners, void, $JPanel*)},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthPanelUI, installUI, void, $JComponent*)},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthPanelUI, paint, void, $Graphics*, $JComponent*)},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(SynthPanelUI, paint, void, $SynthContext*, $Graphics*)},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPanelUI, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthPanelUI, propertyChange, void, $PropertyChangeEvent*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/JPanel;)V", nullptr, $PROTECTED, $virtualMethod(SynthPanelUI, uninstallDefaults, void, $JPanel*)},
	{"uninstallListeners", "(Ljavax/swing/JPanel;)V", nullptr, $PROTECTED, $virtualMethod(SynthPanelUI, uninstallListeners, void, $JPanel*)},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthPanelUI, uninstallUI, void, $JComponent*)},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthPanelUI, update, void, $Graphics*, $JComponent*)},
	{"updateStyle", "(Ljavax/swing/JPanel;)V", nullptr, $PRIVATE, $method(SynthPanelUI, updateStyle, void, $JPanel*)},
	{}
};

$ClassInfo _SynthPanelUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthPanelUI",
	"javax.swing.plaf.basic.BasicPanelUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthPanelUI_FieldInfo_,
	_SynthPanelUI_MethodInfo_
};

$Object* allocate$SynthPanelUI($Class* clazz) {
	return $of($alloc(SynthPanelUI));
}

int32_t SynthPanelUI::hashCode() {
	 return this->$BasicPanelUI::hashCode();
}

bool SynthPanelUI::equals(Object$* arg0) {
	 return this->$BasicPanelUI::equals(arg0);
}

$Object* SynthPanelUI::clone() {
	 return this->$BasicPanelUI::clone();
}

$String* SynthPanelUI::toString() {
	 return this->$BasicPanelUI::toString();
}

void SynthPanelUI::finalize() {
	this->$BasicPanelUI::finalize();
}

void SynthPanelUI::init$() {
	$BasicPanelUI::init$();
}

$ComponentUI* SynthPanelUI::createUI($JComponent* c) {
	$init(SynthPanelUI);
	return $new(SynthPanelUI);
}

void SynthPanelUI::installUI($JComponent* c) {
	$var($JPanel, p, $cast($JPanel, c));
	$BasicPanelUI::installUI(c);
	installListeners(p);
}

void SynthPanelUI::uninstallUI($JComponent* c) {
	$var($JPanel, p, $cast($JPanel, c));
	uninstallListeners(p);
	$BasicPanelUI::uninstallUI(c);
}

void SynthPanelUI::installListeners($JPanel* p) {
	$nc(p)->addPropertyChangeListener(this);
}

void SynthPanelUI::uninstallListeners($JPanel* p) {
	$nc(p)->removePropertyChangeListener(this);
}

void SynthPanelUI::installDefaults($JPanel* p) {
	updateStyle(p);
}

void SynthPanelUI::uninstallDefaults($JPanel* p) {
	$var($SynthContext, context, getContext(p, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

void SynthPanelUI::updateStyle($JPanel* c) {
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
}

$SynthContext* SynthPanelUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthPanelUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthPanelUI::getComponentState($JComponent* c) {
	return $SynthLookAndFeel::getComponentState(c);
}

void SynthPanelUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintPanelBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthPanelUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthPanelUI::paint($SynthContext* context, $Graphics* g) {
}

void SynthPanelUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintPanelBorder(context, g, x, y, w, h);
}

void SynthPanelUI::propertyChange($PropertyChangeEvent* pce) {
	if ($SynthLookAndFeel::shouldUpdateStyle(pce)) {
		updateStyle($cast($JPanel, $($nc(pce)->getSource())));
	}
}

SynthPanelUI::SynthPanelUI() {
}

$Class* SynthPanelUI::load$($String* name, bool initialize) {
	$loadClass(SynthPanelUI, name, initialize, &_SynthPanelUI_ClassInfo_, allocate$SynthPanelUI);
	return class$;
}

$Class* SynthPanelUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax