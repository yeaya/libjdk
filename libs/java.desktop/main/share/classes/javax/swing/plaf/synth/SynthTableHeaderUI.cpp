#include <javax/swing/plaf/synth/SynthTableHeaderUI.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthTableHeaderUI$HeaderRenderer.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
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
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTableHeaderUI = ::javax::swing::plaf::basic::BasicTableHeaderUI;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthTableHeaderUI$HeaderRenderer = ::javax::swing::plaf::synth::SynthTableHeaderUI$HeaderRenderer;
using $JTableHeader = ::javax::swing::table::JTableHeader;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

int32_t SynthTableHeaderUI::hashCode() {
	return this->$BasicTableHeaderUI::hashCode();
}

bool SynthTableHeaderUI::equals(Object$* arg0) {
	return this->$BasicTableHeaderUI::equals(arg0);
}

$Object* SynthTableHeaderUI::clone() {
	return this->$BasicTableHeaderUI::clone();
}

$String* SynthTableHeaderUI::toString() {
	return this->$BasicTableHeaderUI::toString();
}

void SynthTableHeaderUI::finalize() {
	this->$BasicTableHeaderUI::finalize();
}

int32_t SynthTableHeaderUI::access$000(SynthTableHeaderUI* x0) {
	$init(SynthTableHeaderUI);
	return $nc(x0)->getRolloverColumn();
}

void SynthTableHeaderUI::init$() {
	$BasicTableHeaderUI::init$();
	$set(this, prevRenderer, nullptr);
}

$ComponentUI* SynthTableHeaderUI::createUI($JComponent* h) {
	$init(SynthTableHeaderUI);
	return $new(SynthTableHeaderUI);
}

void SynthTableHeaderUI::installDefaults() {
	$set(this, prevRenderer, $nc(this->header)->getDefaultRenderer());
	if ($instanceOf($UIResource, this->prevRenderer)) {
		$nc(this->header)->setDefaultRenderer($$new($SynthTableHeaderUI$HeaderRenderer, this));
	}
	updateStyle(this->header);
}

void SynthTableHeaderUI::updateStyle($JTableHeader* c) {
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

void SynthTableHeaderUI::installListeners() {
	$BasicTableHeaderUI::installListeners();
	$nc(this->header)->addPropertyChangeListener(this);
}

void SynthTableHeaderUI::uninstallDefaults() {
	$useLocalObjectStack();
	if ($instanceOf($SynthTableHeaderUI$HeaderRenderer, $($nc(this->header)->getDefaultRenderer()))) {
		$nc(this->header)->setDefaultRenderer(this->prevRenderer);
	}
	$var($SynthContext, context, getContext(this->header, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

void SynthTableHeaderUI::uninstallListeners() {
	$nc(this->header)->removePropertyChangeListener(this);
	$BasicTableHeaderUI::uninstallListeners();
}

void SynthTableHeaderUI::update($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	int32_t var$0 = $nc(c)->getWidth();
	$$nc($nc(context)->getPainter())->paintTableHeaderBackground(context, g, 0, 0, var$0, c->getHeight());
	paint(context, g);
}

void SynthTableHeaderUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthTableHeaderUI::paint($SynthContext* context, $Graphics* g) {
	$BasicTableHeaderUI::paint(g, $($nc(context)->getComponent()));
}

void SynthTableHeaderUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$$nc($nc(context)->getPainter())->paintTableHeaderBorder(context, g, x, y, w, h);
}

$SynthContext* SynthTableHeaderUI::getContext($JComponent* c) {
	return getContext(c, $SynthLookAndFeel::getComponentState(c));
}

$SynthContext* SynthTableHeaderUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

void SynthTableHeaderUI::rolloverColumnUpdated(int32_t oldColumn, int32_t newColumn) {
	$useLocalObjectStack();
	$nc(this->header)->repaint($($nc(this->header)->getHeaderRect(oldColumn)));
	$nc(this->header)->repaint($($nc(this->header)->getHeaderRect(newColumn)));
}

void SynthTableHeaderUI::propertyChange($PropertyChangeEvent* evt) {
	if ($SynthLookAndFeel::shouldUpdateStyle(evt)) {
		updateStyle($$cast($JTableHeader, $nc(evt)->getSource()));
	}
}

SynthTableHeaderUI::SynthTableHeaderUI() {
}

$Class* SynthTableHeaderUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"prevRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PRIVATE, $field(SynthTableHeaderUI, prevRenderer)},
		{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthTableHeaderUI, style)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynthTableHeaderUI, init$, void)},
		{"access$000", "(Ljavax/swing/plaf/synth/SynthTableHeaderUI;)I", nullptr, $STATIC | $SYNTHETIC, $staticMethod(SynthTableHeaderUI, access$000, int32_t, SynthTableHeaderUI*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(SynthTableHeaderUI, createUI, $ComponentUI*, $JComponent*)},
		{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC, $virtualMethod(SynthTableHeaderUI, getContext, $SynthContext*, $JComponent*)},
		{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(SynthTableHeaderUI, getContext, $SynthContext*, $JComponent*, int32_t)},
		{"installDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(SynthTableHeaderUI, installDefaults, void)},
		{"installListeners", "()V", nullptr, $PROTECTED, $virtualMethod(SynthTableHeaderUI, installListeners, void)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthTableHeaderUI, paint, void, $Graphics*, $JComponent*)},
		{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(SynthTableHeaderUI, paint, void, $SynthContext*, $Graphics*)},
		{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthTableHeaderUI, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthTableHeaderUI, propertyChange, void, $PropertyChangeEvent*)},
		{"rolloverColumnUpdated", "(II)V", nullptr, $PROTECTED, $virtualMethod(SynthTableHeaderUI, rolloverColumnUpdated, void, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"uninstallDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(SynthTableHeaderUI, uninstallDefaults, void)},
		{"uninstallListeners", "()V", nullptr, $PROTECTED, $virtualMethod(SynthTableHeaderUI, uninstallListeners, void)},
		{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthTableHeaderUI, update, void, $Graphics*, $JComponent*)},
		{"updateStyle", "(Ljavax/swing/table/JTableHeader;)V", nullptr, $PRIVATE, $method(SynthTableHeaderUI, updateStyle, void, $JTableHeader*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthTableHeaderUI$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"javax.swing.plaf.synth.SynthTableHeaderUI$HeaderRenderer", "javax.swing.plaf.synth.SynthTableHeaderUI", "HeaderRenderer", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.synth.SynthTableHeaderUI",
		"javax.swing.plaf.basic.BasicTableHeaderUI",
		"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthTableHeaderUI$1,javax.swing.plaf.synth.SynthTableHeaderUI$HeaderRenderer"
	};
	$loadClass(SynthTableHeaderUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthTableHeaderUI));
	});
	return class$;
}

$Class* SynthTableHeaderUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax