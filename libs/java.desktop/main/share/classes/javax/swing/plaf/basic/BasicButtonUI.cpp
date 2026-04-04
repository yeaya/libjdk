#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicButtonListener.h>
#include <javax/swing/plaf/basic/BasicButtonUI$ButtonGroupInfo.h>
#include <javax/swing/plaf/basic/BasicButtonUI$KeyHandler.h>
#include <javax/swing/plaf/basic/BasicButtonUI$SelectNextBtn.h>
#include <javax/swing/plaf/basic/BasicButtonUI$SelectPreviousBtn.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/View.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BASIC_BUTTON_UI_KEY
#undef BOTTOM
#undef CENTER
#undef CENTER_OFFSET
#undef CONSTANT_ASCENT
#undef CONSTANT_DESCENT
#undef FALSE
#undef OTHER
#undef TOP
#undef TRUE
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#undef X_AXIS

using $MouseMotionListenerArray = $Array<::java::awt::event::MouseMotionListener>;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Dimension = ::java::awt::Dimension;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $KeyListener = ::java::awt::event::KeyListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JToggleButton = ::javax::swing::JToggleButton;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicButtonListener = ::javax::swing::plaf::basic::BasicButtonListener;
using $BasicButtonUI$ButtonGroupInfo = ::javax::swing::plaf::basic::BasicButtonUI$ButtonGroupInfo;
using $BasicButtonUI$KeyHandler = ::javax::swing::plaf::basic::BasicButtonUI$KeyHandler;
using $BasicButtonUI$SelectNextBtn = ::javax::swing::plaf::basic::BasicButtonUI$SelectNextBtn;
using $BasicButtonUI$SelectPreviousBtn = ::javax::swing::plaf::basic::BasicButtonUI$SelectPreviousBtn;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $View = ::javax::swing::text::View;
using $AppContext = ::sun::awt::AppContext;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$String* BasicButtonUI::propertyPrefix = nullptr;
$Object* BasicButtonUI::BASIC_BUTTON_UI_KEY = nullptr;
$Rectangle* BasicButtonUI::viewRect = nullptr;
$Rectangle* BasicButtonUI::textRect = nullptr;
$Rectangle* BasicButtonUI::iconRect = nullptr;

void BasicButtonUI::init$() {
	$ButtonUI::init$();
	this->shiftOffset = 0;
	$set(this, keyListener, nullptr);
}

$ComponentUI* BasicButtonUI::createUI($JComponent* c) {
	$init(BasicButtonUI);
	$useLocalObjectStack();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(BasicButtonUI, buttonUI, $cast(BasicButtonUI, $nc(appContext)->get(BasicButtonUI::BASIC_BUTTON_UI_KEY)));
	if (buttonUI == nullptr) {
		$assign(buttonUI, $new(BasicButtonUI));
		appContext->put(BasicButtonUI::BASIC_BUTTON_UI_KEY, buttonUI);
	}
	return buttonUI;
}

$String* BasicButtonUI::getPropertyPrefix() {
	return BasicButtonUI::propertyPrefix;
}

void BasicButtonUI::installUI($JComponent* c) {
	installDefaults($cast($AbstractButton, c));
	installListeners($cast($AbstractButton, c));
	installKeyboardActions($cast($AbstractButton, c));
	$BasicHTML::updateRenderer(c, $($nc($cast($AbstractButton, c))->getText()));
}

void BasicButtonUI::installDefaults($AbstractButton* b) {
	$useLocalObjectStack();
	$var($String, pp, getPropertyPrefix());
	this->defaultTextShiftOffset = $UIManager::getInt($$str({pp, "textShiftOffset"_s}));
	if ($nc(b)->isContentAreaFilled()) {
		$LookAndFeel::installProperty(b, "opaque"_s, $Boolean::TRUE);
	} else {
		$LookAndFeel::installProperty(b, "opaque"_s, $Boolean::FALSE);
	}
	bool var$0 = b->getMargin() == nullptr;
	if (var$0 || ($instanceOf($UIResource, $(b->getMargin())))) {
		b->setMargin($($UIManager::getInsets($$str({pp, "margin"_s}))));
	}
	$LookAndFeel::installColorsAndFont(b, $$str({pp, "background"_s}), $$str({pp, "foreground"_s}), $$str({pp, "font"_s}));
	$LookAndFeel::installBorder(b, $$str({pp, "border"_s}));
	$var($Object, rollover, $UIManager::get($$str({pp, "rollover"_s})));
	if (rollover != nullptr) {
		$LookAndFeel::installProperty(b, "rolloverEnabled"_s, rollover);
	}
	$LookAndFeel::installProperty(b, "iconTextGap"_s, $($Integer::valueOf(4)));
}

void BasicButtonUI::installListeners($AbstractButton* b) {
	$useLocalObjectStack();
	$var($BasicButtonListener, listener, createButtonListener(b));
	if (listener != nullptr) {
		$nc(b)->addMouseListener(listener);
		b->addMouseMotionListener(listener);
		b->addFocusListener(listener);
		b->addPropertyChangeListener(listener);
		b->addChangeListener(listener);
	}
	if ($instanceOf($JToggleButton, b)) {
		$set(this, keyListener, createKeyListener());
		b->addKeyListener(this->keyListener);
		b->setFocusTraversalKeysEnabled(false);
		$$nc(b->getActionMap())->put("Previous"_s, $$new($BasicButtonUI$SelectPreviousBtn, this));
		$$nc(b->getActionMap())->put("Next"_s, $$new($BasicButtonUI$SelectNextBtn, this));
		$$nc(b->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT))->put($($KeyStroke::getKeyStroke("UP"_s)), "Previous"_s);
		$$nc(b->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT))->put($($KeyStroke::getKeyStroke("DOWN"_s)), "Next"_s);
		$$nc(b->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT))->put($($KeyStroke::getKeyStroke("LEFT"_s)), "Previous"_s);
		$$nc(b->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT))->put($($KeyStroke::getKeyStroke("RIGHT"_s)), "Next"_s);
	}
}

void BasicButtonUI::installKeyboardActions($AbstractButton* b) {
	$var($BasicButtonListener, listener, getButtonListener(b));
	if (listener != nullptr) {
		listener->installKeyboardActions(b);
	}
}

void BasicButtonUI::uninstallUI($JComponent* c) {
	uninstallKeyboardActions($cast($AbstractButton, c));
	uninstallListeners($cast($AbstractButton, c));
	uninstallDefaults($cast($AbstractButton, c));
	$BasicHTML::updateRenderer(c, ""_s);
}

void BasicButtonUI::uninstallKeyboardActions($AbstractButton* b) {
	$var($BasicButtonListener, listener, getButtonListener(b));
	if (listener != nullptr) {
		listener->uninstallKeyboardActions(b);
	}
}

void BasicButtonUI::uninstallListeners($AbstractButton* b) {
	$useLocalObjectStack();
	$var($BasicButtonListener, listener, getButtonListener(b));
	if (listener != nullptr) {
		$nc(b)->removeMouseListener(listener);
		b->removeMouseMotionListener(listener);
		b->removeFocusListener(listener);
		b->removeChangeListener(listener);
		b->removePropertyChangeListener(listener);
	}
	if ($instanceOf($JToggleButton, b)) {
		$$nc(b->getActionMap())->remove("Previous"_s);
		$$nc(b->getActionMap())->remove("Next"_s);
		$$nc(b->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT))->remove($($KeyStroke::getKeyStroke("UP"_s)));
		$$nc(b->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT))->remove($($KeyStroke::getKeyStroke("DOWN"_s)));
		$$nc(b->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT))->remove($($KeyStroke::getKeyStroke("LEFT"_s)));
		$$nc(b->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT))->remove($($KeyStroke::getKeyStroke("RIGHT"_s)));
		if (this->keyListener != nullptr) {
			b->removeKeyListener(this->keyListener);
			$set(this, keyListener, nullptr);
		}
	}
}

void BasicButtonUI::uninstallDefaults($AbstractButton* b) {
	$LookAndFeel::uninstallBorder(b);
}

$BasicButtonListener* BasicButtonUI::createButtonListener($AbstractButton* b) {
	return $new($BasicButtonListener, b);
}

int32_t BasicButtonUI::getDefaultTextIconGap($AbstractButton* b) {
	return this->defaultTextIconGap;
}

void BasicButtonUI::paint($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($FontMetrics, var$0, $SwingUtilities2::getFontMetrics(b, g));
	int32_t var$1 = b->getWidth();
	$var($String, text, layout(b, var$0, var$1, b->getHeight()));
	clearTextShiftOffset();
	bool var$2 = $nc(model)->isArmed();
	if (var$2 && model->isPressed()) {
		paintButtonPressed(g, b);
	}
	if (b->getIcon() != nullptr) {
		paintIcon(g, c, BasicButtonUI::iconRect);
	}
	if (text != nullptr && !text->isEmpty()) {
		$init($BasicHTML);
		$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
		if (v != nullptr) {
			v->paint(g, BasicButtonUI::textRect);
		} else {
			paintText(g, b, BasicButtonUI::textRect, text);
		}
	}
	bool var$3 = b->isFocusPainted();
	if (var$3 && b->hasFocus()) {
		paintFocus(g, b, BasicButtonUI::viewRect, BasicButtonUI::textRect, BasicButtonUI::iconRect);
	}
}

void BasicButtonUI::paintIcon($Graphics* g, $JComponent* c, $Rectangle* iconRect) {
	$useLocalObjectStack();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($Icon, icon, b->getIcon());
	$var($Icon, tmpIcon, nullptr);
	if (icon == nullptr) {
		return;
	}
	$var($Icon, selectedIcon, nullptr);
	if ($nc(model)->isSelected()) {
		$assign(selectedIcon, b->getSelectedIcon());
		if (selectedIcon != nullptr) {
			$assign(icon, selectedIcon);
		}
	}
	if (!model->isEnabled()) {
		if (model->isSelected()) {
			$assign(tmpIcon, b->getDisabledSelectedIcon());
			if (tmpIcon == nullptr) {
				$assign(tmpIcon, selectedIcon);
			}
		}
		if (tmpIcon == nullptr) {
			$assign(tmpIcon, b->getDisabledIcon());
		}
	} else {
		bool var$0 = model->isPressed();
		if (var$0 && model->isArmed()) {
			$assign(tmpIcon, b->getPressedIcon());
			if (tmpIcon != nullptr) {
				clearTextShiftOffset();
			}
		} else {
			bool var$1 = b->isRolloverEnabled();
			if (var$1 && model->isRollover()) {
				if (model->isSelected()) {
					$assign(tmpIcon, b->getRolloverSelectedIcon());
					if (tmpIcon == nullptr) {
						$assign(tmpIcon, selectedIcon);
					}
				}
				if (tmpIcon == nullptr) {
					$assign(tmpIcon, b->getRolloverIcon());
				}
			}
		}
	}
	if (tmpIcon != nullptr) {
		$assign(icon, tmpIcon);
	}
	bool var$2 = model->isPressed();
	if (var$2 && model->isArmed()) {
		int32_t var$3 = $nc(iconRect)->x + getTextShiftOffset();
		$nc(icon)->paintIcon(c, g, var$3, iconRect->y + getTextShiftOffset());
	} else {
		$nc(icon)->paintIcon(c, g, $nc(iconRect)->x, $nc(iconRect)->y);
	}
}

void BasicButtonUI::paintText($Graphics* g, $JComponent* c, $Rectangle* textRect, $String* text) {
	$useLocalObjectStack();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(c, g));
	int32_t mnemonicIndex = b->getDisplayedMnemonicIndex();
	if ($nc(model)->isEnabled()) {
		$nc(g)->setColor($(b->getForeground()));
		int32_t var$0 = $nc(textRect)->x + getTextShiftOffset();
		int32_t var$1 = textRect->y + $nc(fm)->getAscent();
		$SwingUtilities2::drawStringUnderlineCharAt(c, g, text, mnemonicIndex, var$0, var$1 + getTextShiftOffset());
	} else {
		$nc(g)->setColor($($$nc(b->getBackground())->brighter()));
		$SwingUtilities2::drawStringUnderlineCharAt(c, g, text, mnemonicIndex, $nc(textRect)->x, $nc(textRect)->y + $nc(fm)->getAscent());
		g->setColor($($$nc(b->getBackground())->darker()));
		$SwingUtilities2::drawStringUnderlineCharAt(c, g, text, mnemonicIndex, textRect->x - 1, textRect->y + fm->getAscent() - 1);
	}
}

void BasicButtonUI::paintText($Graphics* g, $AbstractButton* b, $Rectangle* textRect, $String* text) {
	paintText(g, $cast($JComponent, b), textRect, text);
}

void BasicButtonUI::paintFocus($Graphics* g, $AbstractButton* b, $Rectangle* viewRect, $Rectangle* textRect, $Rectangle* iconRect) {
}

void BasicButtonUI::paintButtonPressed($Graphics* g, $AbstractButton* b) {
}

void BasicButtonUI::clearTextShiftOffset() {
	this->shiftOffset = 0;
}

void BasicButtonUI::setTextShiftOffset() {
	this->shiftOffset = this->defaultTextShiftOffset;
}

int32_t BasicButtonUI::getTextShiftOffset() {
	return this->shiftOffset;
}

$Dimension* BasicButtonUI::getMinimumSize($JComponent* c) {
	$useLocalObjectStack();
	$var($Dimension, d, getPreferredSize(c));
	$init($BasicHTML);
	$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		float var$0 = v->getPreferredSpan($View::X_AXIS);
		$nc(d)->width -= var$0 - v->getMinimumSpan($View::X_AXIS);
	}
	return d;
}

$Dimension* BasicButtonUI::getPreferredSize($JComponent* c) {
	$var($AbstractButton, b, $cast($AbstractButton, c));
	return $BasicGraphicsUtils::getPreferredButtonSize(b, $nc(b)->getIconTextGap());
}

$Dimension* BasicButtonUI::getMaximumSize($JComponent* c) {
	$useLocalObjectStack();
	$var($Dimension, d, getPreferredSize(c));
	$init($BasicHTML);
	$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		float var$0 = v->getMaximumSpan($View::X_AXIS);
		$nc(d)->width += var$0 - v->getPreferredSpan($View::X_AXIS);
	}
	return d;
}

int32_t BasicButtonUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalObjectStack();
	$ButtonUI::getBaseline(c, width, height);
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($String, text, $nc(b)->getText());
	if (text == nullptr || text->isEmpty()) {
		return -1;
	}
	$var($FontMetrics, fm, b->getFontMetrics($(b->getFont())));
	layout(b, fm, width, height);
	return $BasicHTML::getBaseline(b, $nc(BasicButtonUI::textRect)->y, $nc(fm)->getAscent(), $nc(BasicButtonUI::textRect)->width, $nc(BasicButtonUI::textRect)->height);
}

$Component$BaselineResizeBehavior* BasicButtonUI::getBaselineResizeBehavior($JComponent* c) {
	$ButtonUI::getBaselineResizeBehavior(c);
	$init($BasicHTML);
	if ($nc(c)->getClientProperty($BasicHTML::propertyKey) != nullptr) {
		$init($Component$BaselineResizeBehavior);
		return $Component$BaselineResizeBehavior::OTHER;
	}
	switch ($cast($AbstractButton, c)->getVerticalAlignment()) {
	case $AbstractButton::TOP:
		$init($Component$BaselineResizeBehavior);
		return $Component$BaselineResizeBehavior::CONSTANT_ASCENT;
	case $AbstractButton::BOTTOM:
		$init($Component$BaselineResizeBehavior);
		return $Component$BaselineResizeBehavior::CONSTANT_DESCENT;
	case $AbstractButton::CENTER:
		$init($Component$BaselineResizeBehavior);
		return $Component$BaselineResizeBehavior::CENTER_OFFSET;
	}
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::OTHER;
}

$String* BasicButtonUI::layout($AbstractButton* b, $FontMetrics* fm, int32_t width, int32_t height) {
	$useLocalObjectStack();
	$var($Insets, i, $nc(b)->getInsets());
	$nc(BasicButtonUI::viewRect)->x = $nc(i)->left;
	BasicButtonUI::viewRect->y = i->top;
	BasicButtonUI::viewRect->width = width - (i->right + BasicButtonUI::viewRect->x);
	BasicButtonUI::viewRect->height = height - (i->bottom + BasicButtonUI::viewRect->y);
	$nc(BasicButtonUI::textRect)->x = ($nc(BasicButtonUI::textRect)->y = ($nc(BasicButtonUI::textRect)->width = ($nc(BasicButtonUI::textRect)->height = 0)));
	$nc(BasicButtonUI::iconRect)->x = ($nc(BasicButtonUI::iconRect)->y = ($nc(BasicButtonUI::iconRect)->width = ($nc(BasicButtonUI::iconRect)->height = 0)));
	$var($String, var$0, b->getText());
	$var($Icon, var$1, b->getIcon());
	int32_t var$2 = b->getVerticalAlignment();
	int32_t var$3 = b->getHorizontalAlignment();
	int32_t var$4 = b->getVerticalTextPosition();
	int32_t var$5 = b->getHorizontalTextPosition();
	$var($Rectangle, var$6, BasicButtonUI::viewRect);
	$var($Rectangle, var$7, BasicButtonUI::iconRect);
	$var($Rectangle, var$8, BasicButtonUI::textRect);
	return $SwingUtilities::layoutCompoundLabel(b, fm, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, b->getText() == nullptr ? 0 : b->getIconTextGap());
}

$BasicButtonListener* BasicButtonUI::getButtonListener($AbstractButton* b) {
	$useLocalObjectStack();
	$var($MouseMotionListenerArray, listeners, $nc(b)->getMouseMotionListeners());
	if (listeners != nullptr) {
		$var($MouseMotionListenerArray, arr$, listeners);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($MouseMotionListener, listener, arr$->get(i$));
			if ($instanceOf($BasicButtonListener, listener)) {
				return $cast($BasicButtonListener, listener);
			}
		}
	}
	return nullptr;
}

$KeyListener* BasicButtonUI::createKeyListener() {
	if (this->keyListener == nullptr) {
		$set(this, keyListener, $new($BasicButtonUI$KeyHandler, this));
	}
	return this->keyListener;
}

bool BasicButtonUI::isValidToggleButtonObj(Object$* obj) {
	bool var$0 = ($instanceOf($JToggleButton, obj)) && $cast($JToggleButton, obj)->isVisible();
	return (var$0 && $cast($JToggleButton, obj)->isEnabled());
}

void BasicButtonUI::selectToggleButton($ActionEvent* event, bool next) {
	$useLocalObjectStack();
	$var($Object, eventSrc, $nc(event)->getSource());
	if (!isValidToggleButtonObj(eventSrc)) {
		return;
	}
	$var($BasicButtonUI$ButtonGroupInfo, btnGroupInfo, $new($BasicButtonUI$ButtonGroupInfo, this, $cast($JToggleButton, eventSrc)));
	btnGroupInfo->selectNewButton(next);
}

void BasicButtonUI::clinit$($Class* clazz) {
	$assignStatic(BasicButtonUI::propertyPrefix, "Button."_s);
	$assignStatic(BasicButtonUI::BASIC_BUTTON_UI_KEY, $new($Object));
	$assignStatic(BasicButtonUI::viewRect, $new($Rectangle));
	$assignStatic(BasicButtonUI::textRect, $new($Rectangle));
	$assignStatic(BasicButtonUI::iconRect, $new($Rectangle));
}

BasicButtonUI::BasicButtonUI() {
}

$Class* BasicButtonUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultTextIconGap", "I", nullptr, $PROTECTED, $field(BasicButtonUI, defaultTextIconGap)},
		{"shiftOffset", "I", nullptr, $PRIVATE, $field(BasicButtonUI, shiftOffset)},
		{"defaultTextShiftOffset", "I", nullptr, $PROTECTED, $field(BasicButtonUI, defaultTextShiftOffset)},
		{"propertyPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicButtonUI, propertyPrefix)},
		{"BASIC_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicButtonUI, BASIC_BUTTON_UI_KEY)},
		{"keyListener", "Ljava/awt/event/KeyListener;", nullptr, $PRIVATE, $field(BasicButtonUI, keyListener)},
		{"viewRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(BasicButtonUI, viewRect)},
		{"textRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(BasicButtonUI, textRect)},
		{"iconRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(BasicButtonUI, iconRect)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicButtonUI, init$, void)},
		{"clearTextShiftOffset", "()V", nullptr, $PROTECTED, $virtualMethod(BasicButtonUI, clearTextShiftOffset, void)},
		{"createButtonListener", "(Ljavax/swing/AbstractButton;)Ljavax/swing/plaf/basic/BasicButtonListener;", nullptr, $PROTECTED, $virtualMethod(BasicButtonUI, createButtonListener, $BasicButtonListener*, $AbstractButton*)},
		{"createKeyListener", "()Ljava/awt/event/KeyListener;", nullptr, $PRIVATE, $method(BasicButtonUI, createKeyListener, $KeyListener*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicButtonUI, createUI, $ComponentUI*, $JComponent*)},
		{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC, $virtualMethod(BasicButtonUI, getBaseline, int32_t, $JComponent*, int32_t, int32_t)},
		{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC, $virtualMethod(BasicButtonUI, getBaselineResizeBehavior, $Component$BaselineResizeBehavior*, $JComponent*)},
		{"getButtonListener", "(Ljavax/swing/AbstractButton;)Ljavax/swing/plaf/basic/BasicButtonListener;", nullptr, $PRIVATE, $method(BasicButtonUI, getButtonListener, $BasicButtonListener*, $AbstractButton*)},
		{"getDefaultTextIconGap", "(Ljavax/swing/AbstractButton;)I", nullptr, $PUBLIC, $virtualMethod(BasicButtonUI, getDefaultTextIconGap, int32_t, $AbstractButton*)},
		{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicButtonUI, getMaximumSize, $Dimension*, $JComponent*)},
		{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicButtonUI, getMinimumSize, $Dimension*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicButtonUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(BasicButtonUI, getPropertyPrefix, $String*)},
		{"getTextShiftOffset", "()I", nullptr, $PROTECTED, $virtualMethod(BasicButtonUI, getTextShiftOffset, int32_t)},
		{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(BasicButtonUI, installDefaults, void, $AbstractButton*)},
		{"installKeyboardActions", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(BasicButtonUI, installKeyboardActions, void, $AbstractButton*)},
		{"installListeners", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(BasicButtonUI, installListeners, void, $AbstractButton*)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(BasicButtonUI, installUI, void, $JComponent*)},
		{"isValidToggleButtonObj", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(BasicButtonUI, isValidToggleButtonObj, bool, Object$*)},
		{"layout", "(Ljavax/swing/AbstractButton;Ljava/awt/FontMetrics;II)Ljava/lang/String;", nullptr, $PRIVATE, $method(BasicButtonUI, layout, $String*, $AbstractButton*, $FontMetrics*, int32_t, int32_t)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(BasicButtonUI, paint, void, $Graphics*, $JComponent*)},
		{"paintButtonPressed", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(BasicButtonUI, paintButtonPressed, void, $Graphics*, $AbstractButton*)},
		{"paintFocus", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED, $virtualMethod(BasicButtonUI, paintFocus, void, $Graphics*, $AbstractButton*, $Rectangle*, $Rectangle*, $Rectangle*)},
		{"paintIcon", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED, $virtualMethod(BasicButtonUI, paintIcon, void, $Graphics*, $JComponent*, $Rectangle*)},
		{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(BasicButtonUI, paintText, void, $Graphics*, $JComponent*, $Rectangle*, $String*)},
		{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(BasicButtonUI, paintText, void, $Graphics*, $AbstractButton*, $Rectangle*, $String*)},
		{"selectToggleButton", "(Ljava/awt/event/ActionEvent;Z)V", nullptr, $PRIVATE, $method(BasicButtonUI, selectToggleButton, void, $ActionEvent*, bool)},
		{"setTextShiftOffset", "()V", nullptr, $PROTECTED, $virtualMethod(BasicButtonUI, setTextShiftOffset, void)},
		{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(BasicButtonUI, uninstallDefaults, void, $AbstractButton*)},
		{"uninstallKeyboardActions", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(BasicButtonUI, uninstallKeyboardActions, void, $AbstractButton*)},
		{"uninstallListeners", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(BasicButtonUI, uninstallListeners, void, $AbstractButton*)},
		{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(BasicButtonUI, uninstallUI, void, $JComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicButtonUI$KeyHandler", "javax.swing.plaf.basic.BasicButtonUI", "KeyHandler", $PRIVATE},
		{"javax.swing.plaf.basic.BasicButtonUI$ButtonGroupInfo", "javax.swing.plaf.basic.BasicButtonUI", "ButtonGroupInfo", $PRIVATE},
		{"javax.swing.plaf.basic.BasicButtonUI$SelectNextBtn", "javax.swing.plaf.basic.BasicButtonUI", "SelectNextBtn", $PRIVATE},
		{"javax.swing.plaf.basic.BasicButtonUI$SelectPreviousBtn", "javax.swing.plaf.basic.BasicButtonUI", "SelectPreviousBtn", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicButtonUI",
		"javax.swing.plaf.ButtonUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicButtonUI$KeyHandler,javax.swing.plaf.basic.BasicButtonUI$ButtonGroupInfo,javax.swing.plaf.basic.BasicButtonUI$SelectNextBtn,javax.swing.plaf.basic.BasicButtonUI$SelectPreviousBtn"
	};
	$loadClass(BasicButtonUI, name, initialize, &classInfo$$, BasicButtonUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BasicButtonUI);
	});
	return class$;
}

$Class* BasicButtonUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax