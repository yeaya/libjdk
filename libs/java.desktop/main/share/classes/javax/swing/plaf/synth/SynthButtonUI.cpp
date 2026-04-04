#include <javax/swing/plaf/synth/SynthButtonUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef DEFAULT
#undef DISABLED
#undef EMPTY_UIRESOURCE_INSETS
#undef ENABLED
#undef FOCUSED
#undef MOUSE_OVER
#undef PRESSED
#undef SELECTED
#undef SYNTH_BUTTON_UI_KEY
#undef TEXT_FOREGROUND
#undef TRUE

using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

int32_t SynthButtonUI::hashCode() {
	 return this->$BasicButtonUI::hashCode();
}

bool SynthButtonUI::equals(Object$* arg0) {
	 return this->$BasicButtonUI::equals(arg0);
}

$Object* SynthButtonUI::clone() {
	 return this->$BasicButtonUI::clone();
}

$String* SynthButtonUI::toString() {
	 return this->$BasicButtonUI::toString();
}

void SynthButtonUI::finalize() {
	this->$BasicButtonUI::finalize();
}

$Object* SynthButtonUI::SYNTH_BUTTON_UI_KEY = nullptr;

void SynthButtonUI::init$() {
	$BasicButtonUI::init$();
}

$ComponentUI* SynthButtonUI::createUI($JComponent* c) {
	$init(SynthButtonUI);
	return $new(SynthButtonUI);
}

void SynthButtonUI::installDefaults($AbstractButton* b) {
	updateStyle(b);
	$LookAndFeel::installProperty(b, "rolloverEnabled"_s, $Boolean::TRUE);
}

void SynthButtonUI::installListeners($AbstractButton* b) {
	$BasicButtonUI::installListeners(b);
	$nc(b)->addPropertyChangeListener(this);
}

void SynthButtonUI::updateStyle($AbstractButton* b) {
	$useLocalObjectStack();
	$var($SynthContext, context, getContext(b, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		bool var$0 = $nc(b)->getMargin() == nullptr;
		if (var$0 || ($instanceOf($UIResource, $(b->getMargin())))) {
			$var($Insets, margin, $cast($Insets, $nc(this->style)->get(context, $$str({$(getPropertyPrefix()), "margin"_s}))));
			if (margin == nullptr) {
				$assign(margin, $SynthLookAndFeel::EMPTY_UIRESOURCE_INSETS);
			}
			b->setMargin(margin);
		}
		$var($Object, value, $nc(this->style)->get(context, $$str({$(getPropertyPrefix()), "iconTextGap"_s})));
		if (value != nullptr) {
			$LookAndFeel::installProperty(b, "iconTextGap"_s, value);
		}
		$assign(value, $nc(this->style)->get(context, $$str({$(getPropertyPrefix()), "contentAreaFilled"_s})));
		$LookAndFeel::installProperty(b, "contentAreaFilled"_s, value != nullptr ? value : $of($Boolean::TRUE));
		if (oldStyle != nullptr) {
			uninstallKeyboardActions(b);
			installKeyboardActions(b);
		}
	}
}

void SynthButtonUI::uninstallListeners($AbstractButton* b) {
	$BasicButtonUI::uninstallListeners(b);
	$nc(b)->removePropertyChangeListener(this);
}

void SynthButtonUI::uninstallDefaults($AbstractButton* b) {
	$var($SynthContext, context, getContext(b, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

$SynthContext* SynthButtonUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthButtonUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthButtonUI::getComponentState($JComponent* c) {
	$useLocalObjectStack();
	int32_t state = $SynthConstants::ENABLED;
	if (!$nc(c)->isEnabled()) {
		state = $SynthConstants::DISABLED;
	}
	if ($equals($SynthLookAndFeel::getSelectedUI(), this)) {
		return $SynthLookAndFeel::getSelectedUIState() | $SynthConstants::ENABLED;
	}
	$var($AbstractButton, button, $cast($AbstractButton, c));
	$var($ButtonModel, model, button->getModel());
	if ($nc(model)->isPressed()) {
		if (model->isArmed()) {
			state = $SynthConstants::PRESSED;
		} else {
			state = $SynthConstants::MOUSE_OVER;
		}
	}
	if (model->isRollover()) {
		state |= $SynthConstants::MOUSE_OVER;
	}
	if (model->isSelected()) {
		state |= $SynthConstants::SELECTED;
	}
	bool var$0 = c->isFocusOwner();
	if (var$0 && button->isFocusPainted()) {
		state |= $SynthConstants::FOCUSED;
	}
	if (($instanceOf($JButton, c)) && $cast($JButton, c)->isDefaultButton()) {
		state |= $SynthConstants::DEFAULT;
	}
	return state;
}

int32_t SynthButtonUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalObjectStack();
	if (c == nullptr) {
		$throwNew($NullPointerException, "Component must be non-null"_s);
	}
	if (width < 0 || height < 0) {
		$throwNew($IllegalArgumentException, "Width and height must be >= 0"_s);
	}
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($String, text, $nc(b)->getText());
	if (text == nullptr || text->isEmpty()) {
		return -1;
	}
	$var($Insets, i, b->getInsets());
	$var($Rectangle, viewRect, $new($Rectangle));
	$var($Rectangle, textRect, $new($Rectangle));
	$var($Rectangle, iconRect, $new($Rectangle));
	viewRect->x = $nc(i)->left;
	viewRect->y = i->top;
	viewRect->width = width - (i->right + viewRect->x);
	viewRect->height = height - (i->bottom + viewRect->y);
	$var($SynthContext, context, getContext(b));
	$var($SynthStyle, style, nullptr);
	if ($nc(context)->getStyle() != nullptr) {
		$assign(style, context->getStyle());
	} else {
		$assign(style, $SynthLookAndFeel::updateStyle(context, this));
	}
	$var($FontMetrics, fm, $$nc(context->getComponent())->getFontMetrics($($nc(style)->getFont(context))));
	$var($String, var$0, b->getText());
	$var($Icon, var$1, b->getIcon());
	int32_t var$2 = b->getHorizontalAlignment();
	int32_t var$3 = b->getVerticalAlignment();
	int32_t var$4 = b->getHorizontalTextPosition();
	int32_t var$5 = b->getVerticalTextPosition();
	$$nc(style->getGraphicsUtils(context))->layoutText(context, fm, var$0, var$1, var$2, var$3, var$4, var$5, viewRect, iconRect, textRect, b->getIconTextGap());
	$init($BasicHTML);
	$var($View, view, $cast($View, b->getClientProperty($BasicHTML::propertyKey)));
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

void SynthButtonUI::update($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	paintBackground(context, g, c);
	paint(context, g);
}

void SynthButtonUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthButtonUI::paint($SynthContext* context, $Graphics* g) {
	$useLocalObjectStack();
	$var($AbstractButton, b, $cast($AbstractButton, $nc(context)->getComponent()));
	$init($ColorType);
	$nc(g)->setColor($($$nc(context->getStyle())->getColor(context, $ColorType::TEXT_FOREGROUND)));
	g->setFont($($nc(this->style)->getFont(context)));
	$var($String, var$0, $nc(b)->getText());
	$var($Icon, var$1, getIcon(b));
	int32_t var$2 = b->getHorizontalAlignment();
	int32_t var$3 = b->getVerticalAlignment();
	int32_t var$4 = b->getHorizontalTextPosition();
	int32_t var$5 = b->getVerticalTextPosition();
	int32_t var$6 = b->getIconTextGap();
	int32_t var$7 = b->getDisplayedMnemonicIndex();
	$$nc($$nc(context->getStyle())->getGraphicsUtils(context))->paintText(context, g, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, getTextShiftOffset(context));
}

void SynthButtonUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	if ($nc($cast($AbstractButton, c))->isContentAreaFilled()) {
		int32_t var$0 = c->getWidth();
		$$nc($nc(context)->getPainter())->paintButtonBackground(context, g, 0, 0, var$0, c->getHeight());
	}
}

void SynthButtonUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$$nc($nc(context)->getPainter())->paintButtonBorder(context, g, x, y, w, h);
}

$Icon* SynthButtonUI::getDefaultIcon($AbstractButton* b) {
	$useLocalObjectStack();
	$var($SynthContext, context, getContext(b));
	$var($Icon, icon, $$nc($nc(context)->getStyle())->getIcon(context, $$str({$(getPropertyPrefix()), "icon"_s})));
	return icon;
}

$Icon* SynthButtonUI::getIcon($AbstractButton* b) {
	$useLocalObjectStack();
	$var($Icon, icon, $nc(b)->getIcon());
	$var($ButtonModel, model, b->getModel());
	if (!$nc(model)->isEnabled()) {
		$assign(icon, getSynthDisabledIcon(b, icon));
	} else {
		bool var$0 = model->isPressed();
		if (var$0 && model->isArmed()) {
			$assign(icon, getPressedIcon(b, $(getSelectedIcon(b, icon))));
		} else {
			bool var$1 = b->isRolloverEnabled();
			if (var$1 && model->isRollover()) {
				$assign(icon, getRolloverIcon(b, $(getSelectedIcon(b, icon))));
			} else if (model->isSelected()) {
				$assign(icon, getSelectedIcon(b, icon));
			} else {
				$assign(icon, getEnabledIcon(b, icon));
			}
		}
	}
	if (icon == nullptr) {
		return getDefaultIcon(b);
	}
	return icon;
}

$Icon* SynthButtonUI::getIcon($AbstractButton* b, $Icon* specificIcon, $Icon* defaultIcon, int32_t state) {
	$var($Icon, icon, specificIcon);
	if (icon == nullptr) {
		if (defaultIcon == nullptr || $instanceOf($UIResource, defaultIcon)) {
			$assign(icon, getSynthIcon(b, state));
			if (icon == nullptr) {
				$assign(icon, defaultIcon);
			}
		} else {
			$assign(icon, defaultIcon);
		}
	}
	return icon;
}

$Icon* SynthButtonUI::getSynthIcon($AbstractButton* b, int32_t synthConstant) {
	$useLocalObjectStack();
	$var($SynthContext, var$0, getContext(b, synthConstant));
	return $nc(this->style)->getIcon(var$0, $$str({$(getPropertyPrefix()), "icon"_s}));
}

$Icon* SynthButtonUI::getEnabledIcon($AbstractButton* b, $Icon* defaultIcon$renamed) {
	$var($Icon, defaultIcon, defaultIcon$renamed);
	if (defaultIcon == nullptr) {
		$assign(defaultIcon, getSynthIcon(b, $SynthConstants::ENABLED));
	}
	return defaultIcon;
}

$Icon* SynthButtonUI::getSelectedIcon($AbstractButton* b, $Icon* defaultIcon) {
	return getIcon(b, $($nc(b)->getSelectedIcon()), defaultIcon, $SynthConstants::SELECTED);
}

$Icon* SynthButtonUI::getRolloverIcon($AbstractButton* b, $Icon* defaultIcon) {
	$useLocalObjectStack();
	$var($Icon, var$0, $nc(b)->getRolloverSelectedIcon());
	return getSpecificIcon(b, var$0, $(b->getRolloverIcon()), defaultIcon, $SynthConstants::MOUSE_OVER);
}

$Icon* SynthButtonUI::getPressedIcon($AbstractButton* b, $Icon* defaultIcon) {
	return getIcon(b, $($nc(b)->getPressedIcon()), defaultIcon, $SynthConstants::PRESSED);
}

$Icon* SynthButtonUI::getSynthDisabledIcon($AbstractButton* b, $Icon* defaultIcon) {
	$useLocalObjectStack();
	$var($Icon, var$0, $nc(b)->getDisabledSelectedIcon());
	return getSpecificIcon(b, var$0, $(b->getDisabledIcon()), defaultIcon, $SynthConstants::DISABLED);
}

$Icon* SynthButtonUI::getSpecificIcon($AbstractButton* b, $Icon* specificSelectedIcon, $Icon* specificIcon, $Icon* defaultIcon, int32_t state) {
	$useLocalObjectStack();
	bool selected = $$nc($nc(b)->getModel())->isSelected();
	$var($Icon, icon, nullptr);
	if (selected) {
		$assign(icon, specificSelectedIcon);
		if (icon == nullptr) {
			$assign(icon, b->getSelectedIcon());
		}
	}
	if (icon == nullptr) {
		$assign(icon, specificIcon);
	}
	if (icon != nullptr) {
		return icon;
	}
	if (defaultIcon == nullptr || $instanceOf($UIResource, defaultIcon)) {
		if (selected) {
			$assign(icon, getSynthIcon(b, state | $SynthConstants::SELECTED));
			if (icon == nullptr) {
				$assign(icon, getSynthIcon(b, $SynthConstants::SELECTED));
			}
		}
		if (icon == nullptr) {
			$assign(icon, getSynthIcon(b, state));
		}
	}
	return icon != nullptr ? icon : defaultIcon;
}

int32_t SynthButtonUI::getTextShiftOffset($SynthContext* state) {
	$useLocalObjectStack();
	$var($AbstractButton, button, $cast($AbstractButton, $nc(state)->getComponent()));
	$var($ButtonModel, model, $nc(button)->getModel());
	bool var$1 = $nc(model)->isArmed();
	bool var$0 = var$1 && model->isPressed();
	if (var$0 && button->getPressedIcon() == nullptr) {
		return $$nc(state->getStyle())->getInt(state, $$str({$(getPropertyPrefix()), "textShiftOffset"_s}), 0);
	}
	return 0;
}

$Dimension* SynthButtonUI::getMinimumSize($JComponent* c) {
	$useLocalObjectStack();
	bool var$0 = $nc(c)->getComponentCount() > 0;
	if (var$0 && c->getLayout() != nullptr) {
		return nullptr;
	}
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($SynthContext, ss, getContext(c));
	$var($Font, var$1, $$nc($nc(ss)->getStyle())->getFont(ss));
	$var($String, var$2, b->getText());
	$var($Icon, var$3, getSizingIcon(b));
	int32_t var$4 = b->getHorizontalAlignment();
	int32_t var$5 = b->getVerticalAlignment();
	int32_t var$6 = b->getHorizontalTextPosition();
	int32_t var$7 = b->getVerticalTextPosition();
	int32_t var$8 = b->getIconTextGap();
	$var($Dimension, size, $$nc($$nc($nc(ss)->getStyle())->getGraphicsUtils(ss))->getMinimumSize(ss, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, b->getDisplayedMnemonicIndex()));
	return size;
}

$Dimension* SynthButtonUI::getPreferredSize($JComponent* c) {
	$useLocalObjectStack();
	bool var$0 = $nc(c)->getComponentCount() > 0;
	if (var$0 && c->getLayout() != nullptr) {
		return nullptr;
	}
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($SynthContext, ss, getContext(c));
	$var($Font, var$1, $$nc($nc(ss)->getStyle())->getFont(ss));
	$var($String, var$2, b->getText());
	$var($Icon, var$3, getSizingIcon(b));
	int32_t var$4 = b->getHorizontalAlignment();
	int32_t var$5 = b->getVerticalAlignment();
	int32_t var$6 = b->getHorizontalTextPosition();
	int32_t var$7 = b->getVerticalTextPosition();
	int32_t var$8 = b->getIconTextGap();
	$var($Dimension, size, $$nc($$nc($nc(ss)->getStyle())->getGraphicsUtils(ss))->getPreferredSize(ss, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, b->getDisplayedMnemonicIndex()));
	return size;
}

$Dimension* SynthButtonUI::getMaximumSize($JComponent* c) {
	$useLocalObjectStack();
	bool var$0 = $nc(c)->getComponentCount() > 0;
	if (var$0 && c->getLayout() != nullptr) {
		return nullptr;
	}
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($SynthContext, ss, getContext(c));
	$var($Font, var$1, $$nc($nc(ss)->getStyle())->getFont(ss));
	$var($String, var$2, b->getText());
	$var($Icon, var$3, getSizingIcon(b));
	int32_t var$4 = b->getHorizontalAlignment();
	int32_t var$5 = b->getVerticalAlignment();
	int32_t var$6 = b->getHorizontalTextPosition();
	int32_t var$7 = b->getVerticalTextPosition();
	int32_t var$8 = b->getIconTextGap();
	$var($Dimension, size, $$nc($$nc($nc(ss)->getStyle())->getGraphicsUtils(ss))->getMaximumSize(ss, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, b->getDisplayedMnemonicIndex()));
	return size;
}

$Icon* SynthButtonUI::getSizingIcon($AbstractButton* b) {
	$useLocalObjectStack();
	$var($Icon, icon, getEnabledIcon(b, $($nc(b)->getIcon())));
	if (icon == nullptr) {
		$assign(icon, getDefaultIcon(b));
	}
	return icon;
}

void SynthButtonUI::propertyChange($PropertyChangeEvent* e) {
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle($$cast($AbstractButton, $nc(e)->getSource()));
	}
}

void SynthButtonUI::clinit$($Class* clazz) {
	$assignStatic(SynthButtonUI::SYNTH_BUTTON_UI_KEY, $new($Object));
}

SynthButtonUI::SynthButtonUI() {
}

$Class* SynthButtonUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthButtonUI, style)},
		{"SYNTH_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthButtonUI, SYNTH_BUTTON_UI_KEY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynthButtonUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(SynthButtonUI, createUI, $ComponentUI*, $JComponent*)},
		{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC, $virtualMethod(SynthButtonUI, getBaseline, int32_t, $JComponent*, int32_t, int32_t)},
		{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(SynthButtonUI, getComponentState, int32_t, $JComponent*)},
		{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC, $virtualMethod(SynthButtonUI, getContext, $SynthContext*, $JComponent*)},
		{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, 0, $virtualMethod(SynthButtonUI, getContext, $SynthContext*, $JComponent*, int32_t)},
		{"getDefaultIcon", "(Ljavax/swing/AbstractButton;)Ljavax/swing/Icon;", nullptr, $PROTECTED, $virtualMethod(SynthButtonUI, getDefaultIcon, $Icon*, $AbstractButton*)},
		{"getEnabledIcon", "(Ljavax/swing/AbstractButton;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(SynthButtonUI, getEnabledIcon, $Icon*, $AbstractButton*, $Icon*)},
		{"getIcon", "(Ljavax/swing/AbstractButton;)Ljavax/swing/Icon;", nullptr, $PROTECTED, $virtualMethod(SynthButtonUI, getIcon, $Icon*, $AbstractButton*)},
		{"getIcon", "(Ljavax/swing/AbstractButton;Ljavax/swing/Icon;Ljavax/swing/Icon;I)Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(SynthButtonUI, getIcon, $Icon*, $AbstractButton*, $Icon*, $Icon*, int32_t)},
		{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SynthButtonUI, getMaximumSize, $Dimension*, $JComponent*)},
		{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SynthButtonUI, getMinimumSize, $Dimension*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SynthButtonUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"getPressedIcon", "(Ljavax/swing/AbstractButton;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(SynthButtonUI, getPressedIcon, $Icon*, $AbstractButton*, $Icon*)},
		{"getRolloverIcon", "(Ljavax/swing/AbstractButton;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(SynthButtonUI, getRolloverIcon, $Icon*, $AbstractButton*, $Icon*)},
		{"getSelectedIcon", "(Ljavax/swing/AbstractButton;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(SynthButtonUI, getSelectedIcon, $Icon*, $AbstractButton*, $Icon*)},
		{"getSizingIcon", "(Ljavax/swing/AbstractButton;)Ljavax/swing/Icon;", nullptr, $PROTECTED, $virtualMethod(SynthButtonUI, getSizingIcon, $Icon*, $AbstractButton*)},
		{"getSpecificIcon", "(Ljavax/swing/AbstractButton;Ljavax/swing/Icon;Ljavax/swing/Icon;Ljavax/swing/Icon;I)Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(SynthButtonUI, getSpecificIcon, $Icon*, $AbstractButton*, $Icon*, $Icon*, $Icon*, int32_t)},
		{"getSynthDisabledIcon", "(Ljavax/swing/AbstractButton;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(SynthButtonUI, getSynthDisabledIcon, $Icon*, $AbstractButton*, $Icon*)},
		{"getSynthIcon", "(Ljavax/swing/AbstractButton;I)Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(SynthButtonUI, getSynthIcon, $Icon*, $AbstractButton*, int32_t)},
		{"getTextShiftOffset", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PRIVATE, $method(SynthButtonUI, getTextShiftOffset, int32_t, $SynthContext*)},
		{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(SynthButtonUI, installDefaults, void, $AbstractButton*)},
		{"installListeners", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(SynthButtonUI, installListeners, void, $AbstractButton*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthButtonUI, paint, void, $Graphics*, $JComponent*)},
		{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(SynthButtonUI, paint, void, $SynthContext*, $Graphics*)},
		{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0, $virtualMethod(SynthButtonUI, paintBackground, void, $SynthContext*, $Graphics*, $JComponent*)},
		{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthButtonUI, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthButtonUI, propertyChange, void, $PropertyChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(SynthButtonUI, uninstallDefaults, void, $AbstractButton*)},
		{"uninstallListeners", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(SynthButtonUI, uninstallListeners, void, $AbstractButton*)},
		{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthButtonUI, update, void, $Graphics*, $JComponent*)},
		{"updateStyle", "(Ljavax/swing/AbstractButton;)V", nullptr, 0, $virtualMethod(SynthButtonUI, updateStyle, void, $AbstractButton*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.synth.SynthButtonUI",
		"javax.swing.plaf.basic.BasicButtonUI",
		"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SynthButtonUI, name, initialize, &classInfo$$, SynthButtonUI::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthButtonUI));
	});
	return class$;
}

$Class* SynthButtonUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax