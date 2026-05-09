#include <javax/swing/plaf/synth/SynthLabelUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicLabelUI.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef ENABLED
#undef TEXT_FOREGROUND

using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicLabelUI = ::javax::swing::plaf::basic::BasicLabelUI;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

int32_t SynthLabelUI::hashCode() {
	return this->$BasicLabelUI::hashCode();
}

bool SynthLabelUI::equals(Object$* arg0) {
	return this->$BasicLabelUI::equals(arg0);
}

$Object* SynthLabelUI::clone() {
	return this->$BasicLabelUI::clone();
}

$String* SynthLabelUI::toString() {
	return this->$BasicLabelUI::toString();
}

void SynthLabelUI::finalize() {
	this->$BasicLabelUI::finalize();
}

void SynthLabelUI::init$() {
	$BasicLabelUI::init$();
}

$ComponentUI* SynthLabelUI::createUI($JComponent* c) {
	$init(SynthLabelUI);
	return $new(SynthLabelUI);
}

void SynthLabelUI::installDefaults($JLabel* c) {
	updateStyle(c);
}

void SynthLabelUI::updateStyle($JLabel* c) {
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
}

void SynthLabelUI::uninstallDefaults($JLabel* c) {
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

$SynthContext* SynthLabelUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthLabelUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthLabelUI::getComponentState($JComponent* c) {
	int32_t state = $SynthLookAndFeel::getComponentState(c);
	if ($equals($SynthLookAndFeel::getSelectedUI(), this) && state == $SynthConstants::ENABLED) {
		state = $SynthLookAndFeel::getSelectedUIState() | $SynthConstants::ENABLED;
	}
	return state;
}

int32_t SynthLabelUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalObjectStack();
	if (c == nullptr) {
		$throwNew($NullPointerException, "Component must be non-null"_s);
	}
	if (width < 0 || height < 0) {
		$throwNew($IllegalArgumentException, "Width and height must be >= 0"_s);
	}
	$var($JLabel, label, $cast($JLabel, c));
	$var($String, text, $nc(label)->getText());
	if (text == nullptr || text->isEmpty()) {
		return -1;
	}
	$var($Insets, i, label->getInsets());
	$var($Rectangle, viewRect, $new($Rectangle));
	$var($Rectangle, textRect, $new($Rectangle));
	$var($Rectangle, iconRect, $new($Rectangle));
	viewRect->x = $nc(i)->left;
	viewRect->y = i->top;
	viewRect->width = width - (i->right + viewRect->x);
	viewRect->height = height - (i->bottom + viewRect->y);
	$var($SynthContext, context, getContext(label));
	$var($FontMetrics, fm, $$nc($nc(context)->getComponent())->getFontMetrics($($$nc($nc(context)->getStyle())->getFont(context))));
	$var($String, var$0, label->getText());
	$var($Icon, var$1, label->getIcon());
	int32_t var$2 = label->getHorizontalAlignment();
	int32_t var$3 = label->getVerticalAlignment();
	int32_t var$4 = label->getHorizontalTextPosition();
	int32_t var$5 = label->getVerticalTextPosition();
	$$nc($$nc(context->getStyle())->getGraphicsUtils(context))->layoutText(context, fm, var$0, var$1, var$2, var$3, var$4, var$5, viewRect, iconRect, textRect, label->getIconTextGap());
	$init($BasicHTML);
	$var($View, view, $cast($View, label->getClientProperty($BasicHTML::propertyKey)));
	int32_t baseline = 0;
	if (view != nullptr) {
		baseline = $BasicHTML::getHTMLBaseline(view, textRect->width, textRect->height);
		if (baseline >= 0) {
			baseline += textRect->y;
		}
	} else {
		baseline = textRect->y + $nc(fm)->getAscent();
	}
	return baseline;
}

void SynthLabelUI::update($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	int32_t var$0 = $nc(c)->getWidth();
	$$nc($nc(context)->getPainter())->paintLabelBackground(context, g, 0, 0, var$0, c->getHeight());
	paint(context, g);
}

void SynthLabelUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthLabelUI::paint($SynthContext* context, $Graphics* g) {
	$useLocalObjectStack();
	$var($JLabel, label, $cast($JLabel, $nc(context)->getComponent()));
	$var($Icon, icon, ($nc(label)->isEnabled()) ? label->getIcon() : label->getDisabledIcon());
	$init($ColorType);
	$nc(g)->setColor($($$nc(context->getStyle())->getColor(context, $ColorType::TEXT_FOREGROUND)));
	g->setFont($($nc(this->style)->getFont(context)));
	$var($String, var$0, label->getText());
	int32_t var$1 = label->getHorizontalAlignment();
	int32_t var$2 = label->getVerticalAlignment();
	int32_t var$3 = label->getHorizontalTextPosition();
	int32_t var$4 = label->getVerticalTextPosition();
	int32_t var$5 = label->getIconTextGap();
	$$nc($$nc(context->getStyle())->getGraphicsUtils(context))->paintText(context, g, var$0, icon, var$1, var$2, var$3, var$4, var$5, label->getDisplayedMnemonicIndex(), 0);
}

void SynthLabelUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$$nc($nc(context)->getPainter())->paintLabelBorder(context, g, x, y, w, h);
}

$Dimension* SynthLabelUI::getPreferredSize($JComponent* c) {
	$useLocalObjectStack();
	$var($JLabel, label, $cast($JLabel, c));
	$var($Icon, icon, ($nc(label)->isEnabled()) ? label->getIcon() : label->getDisabledIcon());
	$var($SynthContext, context, getContext(c));
	$var($Font, var$0, $$nc($nc(context)->getStyle())->getFont(context));
	$var($String, var$1, label->getText());
	int32_t var$2 = label->getHorizontalAlignment();
	int32_t var$3 = label->getVerticalAlignment();
	int32_t var$4 = label->getHorizontalTextPosition();
	int32_t var$5 = label->getVerticalTextPosition();
	int32_t var$6 = label->getIconTextGap();
	$var($Dimension, size, $$nc($$nc($nc(context)->getStyle())->getGraphicsUtils(context))->getPreferredSize(context, var$0, var$1, icon, var$2, var$3, var$4, var$5, var$6, label->getDisplayedMnemonicIndex()));
	return size;
}

$Dimension* SynthLabelUI::getMinimumSize($JComponent* c) {
	$useLocalObjectStack();
	$var($JLabel, label, $cast($JLabel, c));
	$var($Icon, icon, ($nc(label)->isEnabled()) ? label->getIcon() : label->getDisabledIcon());
	$var($SynthContext, context, getContext(c));
	$var($Font, var$0, $$nc($nc(context)->getStyle())->getFont(context));
	$var($String, var$1, label->getText());
	int32_t var$2 = label->getHorizontalAlignment();
	int32_t var$3 = label->getVerticalAlignment();
	int32_t var$4 = label->getHorizontalTextPosition();
	int32_t var$5 = label->getVerticalTextPosition();
	int32_t var$6 = label->getIconTextGap();
	$var($Dimension, size, $$nc($$nc($nc(context)->getStyle())->getGraphicsUtils(context))->getMinimumSize(context, var$0, var$1, icon, var$2, var$3, var$4, var$5, var$6, label->getDisplayedMnemonicIndex()));
	return size;
}

$Dimension* SynthLabelUI::getMaximumSize($JComponent* c) {
	$useLocalObjectStack();
	$var($JLabel, label, $cast($JLabel, c));
	$var($Icon, icon, ($nc(label)->isEnabled()) ? label->getIcon() : label->getDisabledIcon());
	$var($SynthContext, context, getContext(c));
	$var($Font, var$0, $$nc($nc(context)->getStyle())->getFont(context));
	$var($String, var$1, label->getText());
	int32_t var$2 = label->getHorizontalAlignment();
	int32_t var$3 = label->getVerticalAlignment();
	int32_t var$4 = label->getHorizontalTextPosition();
	int32_t var$5 = label->getVerticalTextPosition();
	int32_t var$6 = label->getIconTextGap();
	$var($Dimension, size, $$nc($$nc($nc(context)->getStyle())->getGraphicsUtils(context))->getMaximumSize(context, var$0, var$1, icon, var$2, var$3, var$4, var$5, var$6, label->getDisplayedMnemonicIndex()));
	return size;
}

void SynthLabelUI::propertyChange($PropertyChangeEvent* e) {
	$BasicLabelUI::propertyChange(e);
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle($$cast($JLabel, $nc(e)->getSource()));
	}
}

SynthLabelUI::SynthLabelUI() {
}

$Class* SynthLabelUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthLabelUI, style)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynthLabelUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(SynthLabelUI, createUI, $ComponentUI*, $JComponent*)},
		{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC, $virtualMethod(SynthLabelUI, getBaseline, int32_t, $JComponent*, int32_t, int32_t)},
		{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(SynthLabelUI, getComponentState, int32_t, $JComponent*)},
		{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC, $virtualMethod(SynthLabelUI, getContext, $SynthContext*, $JComponent*)},
		{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(SynthLabelUI, getContext, $SynthContext*, $JComponent*, int32_t)},
		{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SynthLabelUI, getMaximumSize, $Dimension*, $JComponent*)},
		{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SynthLabelUI, getMinimumSize, $Dimension*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SynthLabelUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"installDefaults", "(Ljavax/swing/JLabel;)V", nullptr, $PROTECTED, $virtualMethod(SynthLabelUI, installDefaults, void, $JLabel*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthLabelUI, paint, void, $Graphics*, $JComponent*)},
		{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(SynthLabelUI, paint, void, $SynthContext*, $Graphics*)},
		{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthLabelUI, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthLabelUI, propertyChange, void, $PropertyChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"uninstallDefaults", "(Ljavax/swing/JLabel;)V", nullptr, $PROTECTED, $virtualMethod(SynthLabelUI, uninstallDefaults, void, $JLabel*)},
		{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthLabelUI, update, void, $Graphics*, $JComponent*)},
		{"updateStyle", "(Ljavax/swing/JLabel;)V", nullptr, 0, $virtualMethod(SynthLabelUI, updateStyle, void, $JLabel*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.synth.SynthLabelUI",
		"javax.swing.plaf.basic.BasicLabelUI",
		"javax.swing.plaf.synth.SynthUI",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SynthLabelUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthLabelUI));
	});
	return class$;
}

$Class* SynthLabelUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax