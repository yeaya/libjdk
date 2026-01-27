#include <javax/swing/plaf/synth/SynthColorChooserUI.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <javax/swing/colorchooser/ColorChooserComponentFactory.h>
#include <javax/swing/plaf/ColorChooserUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicColorChooserUI.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef ENABLED

using $AbstractColorChooserPanelArray = $Array<::javax::swing::colorchooser::AbstractColorChooserPanel>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $ColorChooserComponentFactory = ::javax::swing::colorchooser::ColorChooserComponentFactory;
using $ColorChooserUI = ::javax::swing::plaf::ColorChooserUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicColorChooserUI = ::javax::swing::plaf::basic::BasicColorChooserUI;
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

$FieldInfo _SynthColorChooserUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthColorChooserUI, style)},
	{}
};

$MethodInfo _SynthColorChooserUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(SynthColorChooserUI, init$, void)},
	{"createDefaultChoosers", "()[Ljavax/swing/colorchooser/AbstractColorChooserPanel;", nullptr, $PROTECTED, $virtualMethod(SynthColorChooserUI, createDefaultChoosers, $AbstractColorChooserPanelArray*)},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(SynthColorChooserUI, createUI, $ComponentUI*, $JComponent*)},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(SynthColorChooserUI, getComponentState, int32_t, $JComponent*)},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC, $virtualMethod(SynthColorChooserUI, getContext, $SynthContext*, $JComponent*)},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(SynthColorChooserUI, getContext, $SynthContext*, $JComponent*, int32_t)},
	{"installDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(SynthColorChooserUI, installDefaults, void)},
	{"installListeners", "()V", nullptr, $PROTECTED, $virtualMethod(SynthColorChooserUI, installListeners, void)},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthColorChooserUI, paint, void, $Graphics*, $JComponent*)},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(SynthColorChooserUI, paint, void, $SynthContext*, $Graphics*)},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthColorChooserUI, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthColorChooserUI, propertyChange, void, $PropertyChangeEvent*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(SynthColorChooserUI, uninstallDefaults, void)},
	{"uninstallListeners", "()V", nullptr, $PROTECTED, $virtualMethod(SynthColorChooserUI, uninstallListeners, void)},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthColorChooserUI, update, void, $Graphics*, $JComponent*)},
	{"updateStyle", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(SynthColorChooserUI, updateStyle, void, $JComponent*)},
	{}
};

$ClassInfo _SynthColorChooserUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthColorChooserUI",
	"javax.swing.plaf.basic.BasicColorChooserUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthColorChooserUI_FieldInfo_,
	_SynthColorChooserUI_MethodInfo_
};

$Object* allocate$SynthColorChooserUI($Class* clazz) {
	return $of($alloc(SynthColorChooserUI));
}

int32_t SynthColorChooserUI::hashCode() {
	 return this->$BasicColorChooserUI::hashCode();
}

bool SynthColorChooserUI::equals(Object$* arg0) {
	 return this->$BasicColorChooserUI::equals(arg0);
}

$Object* SynthColorChooserUI::clone() {
	 return this->$BasicColorChooserUI::clone();
}

$String* SynthColorChooserUI::toString() {
	 return this->$BasicColorChooserUI::toString();
}

void SynthColorChooserUI::finalize() {
	this->$BasicColorChooserUI::finalize();
}

void SynthColorChooserUI::init$() {
	$BasicColorChooserUI::init$();
}

$ComponentUI* SynthColorChooserUI::createUI($JComponent* c) {
	$init(SynthColorChooserUI);
	return $new(SynthColorChooserUI);
}

$AbstractColorChooserPanelArray* SynthColorChooserUI::createDefaultChoosers() {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(this->chooser, $SynthConstants::ENABLED));
	$var($AbstractColorChooserPanelArray, panels, $cast($AbstractColorChooserPanelArray, $nc($($nc(context)->getStyle()))->get(context, "ColorChooser.panels"_s)));
	if (panels == nullptr) {
		$assign(panels, $ColorChooserComponentFactory::getDefaultChooserPanels());
	}
	return panels;
}

void SynthColorChooserUI::installDefaults() {
	$BasicColorChooserUI::installDefaults();
	updateStyle(this->chooser);
}

void SynthColorChooserUI::updateStyle($JComponent* c) {
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
}

void SynthColorChooserUI::uninstallDefaults() {
	$var($SynthContext, context, getContext(this->chooser, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	$BasicColorChooserUI::uninstallDefaults();
}

void SynthColorChooserUI::installListeners() {
	$BasicColorChooserUI::installListeners();
	$nc(this->chooser)->addPropertyChangeListener(this);
}

void SynthColorChooserUI::uninstallListeners() {
	$nc(this->chooser)->removePropertyChangeListener(this);
	$BasicColorChooserUI::uninstallListeners();
}

$SynthContext* SynthColorChooserUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthColorChooserUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthColorChooserUI::getComponentState($JComponent* c) {
	return $SynthLookAndFeel::getComponentState(c);
}

void SynthColorChooserUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintColorChooserBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthColorChooserUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthColorChooserUI::paint($SynthContext* context, $Graphics* g) {
}

void SynthColorChooserUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintColorChooserBorder(context, g, x, y, w, h);
}

void SynthColorChooserUI::propertyChange($PropertyChangeEvent* e) {
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle($cast($JColorChooser, $($nc(e)->getSource())));
	}
}

SynthColorChooserUI::SynthColorChooserUI() {
}

$Class* SynthColorChooserUI::load$($String* name, bool initialize) {
	$loadClass(SynthColorChooserUI, name, initialize, &_SynthColorChooserUI_ClassInfo_, allocate$SynthColorChooserUI);
	return class$;
}

$Class* SynthColorChooserUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax