#include <com/apple/laf/AquaButtonUI.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonBorder$Toolbar.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaButtonExtendedTypes$TypeSpecifier.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <com/apple/laf/AquaButtonUI$AquaButtonListener.h>
#include <com/apple/laf/AquaButtonUI$AquaHierarchyButtonListener.h>
#include <com/apple/laf/AquaComboBoxButton.h>
#include <com/apple/laf/AquaFocus.h>
#include <com/apple/laf/AquaMnemonicHandler.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/MouseMotionListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicButtonListener.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/View.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BUTTON_TYPE
#undef SEGMENTED_BUTTON_POSITION
#undef X_AXIS

using $MouseMotionListenerArray = $Array<::java::awt::event::MouseMotionListener>;
using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaButtonBorder$Toolbar = ::com::apple::laf::AquaButtonBorder$Toolbar;
using $AquaButtonExtendedTypes = ::com::apple::laf::AquaButtonExtendedTypes;
using $AquaButtonExtendedTypes$TypeSpecifier = ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier;
using $AquaButtonUI$AquaButtonListener = ::com::apple::laf::AquaButtonUI$AquaButtonListener;
using $AquaButtonUI$AquaHierarchyButtonListener = ::com::apple::laf::AquaButtonUI$AquaHierarchyButtonListener;
using $AquaComboBoxButton = ::com::apple::laf::AquaComboBoxButton;
using $AquaFocus = ::com::apple::laf::AquaFocus;
using $AquaMnemonicHandler = ::com::apple::laf::AquaMnemonicHandler;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JButton = ::javax::swing::JButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JToolBar = ::javax::swing::JToolBar;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicButtonListener = ::javax::swing::plaf::basic::BasicButtonListener;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $View = ::javax::swing::text::View;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

int32_t AquaButtonUI::hashCode() {
	 return this->$BasicButtonUI::hashCode();
}

bool AquaButtonUI::equals(Object$* arg0) {
	 return this->$BasicButtonUI::equals(arg0);
}

$Object* AquaButtonUI::clone() {
	 return this->$BasicButtonUI::clone();
}

$String* AquaButtonUI::toString() {
	 return this->$BasicButtonUI::toString();
}

void AquaButtonUI::finalize() {
	this->$BasicButtonUI::finalize();
}

$String* AquaButtonUI::BUTTON_TYPE = nullptr;
$String* AquaButtonUI::SEGMENTED_BUTTON_POSITION = nullptr;
$AquaUtils$RecyclableSingleton* AquaButtonUI::buttonUI = nullptr;
$AquaUtils$RecyclableSingleton* AquaButtonUI::fHierListener = nullptr;

void AquaButtonUI::init$() {
	$BasicButtonUI::init$();
	this->defaults_initialized = false;
	$set(this, defaultDisabledTextColor, nullptr);
}

$ComponentUI* AquaButtonUI::createUI($JComponent* c) {
	$init(AquaButtonUI);
	return $cast($ComponentUI, AquaButtonUI::buttonUI->get());
}

void AquaButtonUI::installDefaults($AbstractButton* b) {
	$useLocalObjectStack();
	$var($String, pp, getPropertyPrefix());
	if (!this->defaults_initialized) {
		$set(this, defaultDisabledTextColor, $UIManager::getColor($$str({pp, "disabledText"_s})));
		this->defaults_initialized = true;
	}
	setButtonMarginIfNeeded(b, $($UIManager::getInsets($$str({pp, "margin"_s}))));
	$LookAndFeel::installColorsAndFont(b, $$str({pp, "background"_s}), $$str({pp, "foreground"_s}), $$str({pp, "font"_s}));
	$LookAndFeel::installProperty(b, "opaque"_s, $($Boolean::valueOf($UIManager::getBoolean($$str({pp, "opaque"_s})))));
	$var($Object, borderProp, $nc(b)->getClientProperty(AquaButtonUI::BUTTON_TYPE));
	bool hasBorder = false;
	if (borderProp != nullptr) {
		hasBorder = setButtonType(b, borderProp);
	}
	if (!hasBorder) {
		setThemeBorder(b);
	}
	$var($Object, segmentProp, b->getClientProperty(AquaButtonUI::SEGMENTED_BUTTON_POSITION));
	if (segmentProp != nullptr) {
		$var($Border, border, b->getBorder());
		if (!($instanceOf($AquaBorder, border))) {
			return;
		}
		b->setBorder($($AquaButtonExtendedTypes::getBorderForPosition(b, $(b->getClientProperty(AquaButtonUI::BUTTON_TYPE)), segmentProp)));
	}
}

void AquaButtonUI::applySizeFor($JComponent* c, $JRSUIConstants$Size* size) {
}

void AquaButtonUI::setThemeBorder($AbstractButton* b) {
	$useLocalObjectStack();
	$var($ButtonUI, genericUI, $cast($ButtonUI, $nc(b)->getUI()));
	if (!($instanceOf(AquaButtonUI, genericUI))) {
		return;
	}
	$var(AquaButtonUI, ui, $cast(AquaButtonUI, genericUI));
	$var($Border, border, b->getBorder());
	if (!$nc(ui)->isBorderFromProperty(b) && (border == nullptr || $instanceOf($UIResource, border) || $instanceOf($AquaButtonBorder, border))) {
		bool iconFont = true;
		if (isOnToolbar(b)) {
			if ($instanceOf($JToggleButton, b)) {
				$assign(border, $AquaButtonBorder::getToolBarButtonBorder());
			} else {
				$assign(border, $AquaButtonBorder::getBevelButtonBorder());
			}
		} else {
			bool var$0 = b->getIcon() != nullptr;
			if (var$0 || b->getComponentCount() > 0) {
				$assign(border, $AquaButtonBorder::getToggleButtonBorder());
			} else {
				$assign(border, $UIManager::getBorder($$str({$(getPropertyPrefix()), "border"_s})));
				iconFont = false;
			}
		}
		b->setBorder(border);
		$var($Font, currentFont, b->getFont());
		if (iconFont && (currentFont == nullptr || $instanceOf($UIResource, currentFont))) {
			b->setFont($($UIManager::getFont("IconButton.font"_s)));
		}
	}
}

bool AquaButtonUI::isOnToolbar($AbstractButton* b) {
	$init(AquaButtonUI);
	$var($Component, parent, $nc(b)->getParent());
	while (parent != nullptr) {
		if ($instanceOf($JToolBar, parent)) {
			return true;
		}
		$assign(parent, parent->getParent());
	}
	return false;
}

void AquaButtonUI::updateBorder($AbstractButton* b) {
	$init(AquaButtonUI);
	$useLocalObjectStack();
	$var($Object, prop, $nc(b)->getClientProperty(AquaButtonUI::BUTTON_TYPE));
	if (prop != nullptr) {
		return;
	}
	$var($ButtonUI, ui, $cast($ButtonUI, b->getUI()));
	if (!($instanceOf(AquaButtonUI, ui))) {
		return;
	}
	if (b->getBorder() != nullptr) {
		$nc($cast(AquaButtonUI, ui))->setThemeBorder(b);
	}
}

void AquaButtonUI::setButtonMarginIfNeeded($AbstractButton* b, $Insets* insets) {
	$var($Insets, margin, $nc(b)->getMargin());
	if (margin == nullptr || ($instanceOf($UIResource, margin))) {
		b->setMargin(insets);
	}
}

bool AquaButtonUI::isBorderFromProperty($AbstractButton* button) {
	return $nc(button)->getClientProperty(AquaButtonUI::BUTTON_TYPE) != nullptr;
}

bool AquaButtonUI::setButtonType($AbstractButton* b, Object$* prop) {
	$useLocalObjectStack();
	if (!($instanceOf($String, prop))) {
		$nc(b)->putClientProperty(AquaButtonUI::BUTTON_TYPE, nullptr);
		return false;
	}
	$var($String, buttonType, $cast($String, prop));
	bool iconFont = true;
	$var($AquaButtonExtendedTypes$TypeSpecifier, specifier, $AquaButtonExtendedTypes::getSpecifierByName(buttonType));
	if (specifier != nullptr) {
		$nc(b)->setBorder($(specifier->getBorder()));
		iconFont = specifier->setIconFont;
	}
	$var($Font, currentFont, $nc(b)->getFont());
	if (currentFont == nullptr || $instanceOf($UIResource, currentFont)) {
		b->setFont($($UIManager::getFont(iconFont ? "IconButton.font"_s : "Button.font"_s)));
	}
	return true;
}

void AquaButtonUI::installListeners($AbstractButton* b) {
	$BasicButtonUI::installListeners(b);
	$var($AquaButtonUI$AquaButtonListener, listener, getAquaButtonListener(b));
	if (listener != nullptr) {
		$nc(b)->putClientProperty(this, listener);
		b->addAncestorListener(listener);
	}
	installHierListener(b);
	$AquaUtilControlSize::addSizePropertyListener(b);
}

void AquaButtonUI::installKeyboardActions($AbstractButton* b) {
	$var($BasicButtonListener, listener, $cast($BasicButtonListener, $nc(b)->getClientProperty(this)));
	if (listener != nullptr) {
		listener->installKeyboardActions(b);
	}
}

void AquaButtonUI::uninstallUI($JComponent* c) {
	uninstallKeyboardActions($cast($AbstractButton, c));
	uninstallListeners($cast($AbstractButton, c));
	uninstallDefaults($cast($AbstractButton, c));
}

void AquaButtonUI::uninstallKeyboardActions($AbstractButton* b) {
	$var($BasicButtonListener, listener, $cast($BasicButtonListener, $nc(b)->getClientProperty(this)));
	if (listener != nullptr) {
		listener->uninstallKeyboardActions(b);
	}
}

void AquaButtonUI::uninstallListeners($AbstractButton* b) {
	$BasicButtonUI::uninstallListeners(b);
	$var($AquaButtonUI$AquaButtonListener, listener, $cast($AquaButtonUI$AquaButtonListener, $nc(b)->getClientProperty(this)));
	b->putClientProperty(this, nullptr);
	if (listener != nullptr) {
		b->removeAncestorListener(listener);
	}
	uninstallHierListener(b);
	$AquaUtilControlSize::removeSizePropertyListener(b);
}

void AquaButtonUI::uninstallDefaults($AbstractButton* b) {
	$LookAndFeel::uninstallBorder(b);
	this->defaults_initialized = false;
}

$BasicButtonListener* AquaButtonUI::createButtonListener($AbstractButton* b) {
	return $new($AquaButtonUI$AquaButtonListener, this, b);
}

$AquaButtonUI$AquaButtonListener* AquaButtonUI::getAquaButtonListener($AbstractButton* b) {
	$useLocalObjectStack();
	$var($MouseMotionListenerArray, listeners, $nc(b)->getMouseMotionListeners());
	if (listeners != nullptr) {
		$var($MouseMotionListenerArray, arr$, listeners);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($MouseMotionListener, listener, arr$->get(i$));
			if ($instanceOf($AquaButtonUI$AquaButtonListener, listener)) {
				return $cast($AquaButtonUI$AquaButtonListener, listener);
			}
		}
	}
	return nullptr;
}

void AquaButtonUI::paint($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($Insets, i, $nc(c)->getInsets());
	int32_t var$0 = b->getWidth();
	$var($Rectangle, viewRect, $new($Rectangle, var$0, b->getHeight()));
	$var($Rectangle, iconRect, $new($Rectangle));
	$var($Rectangle, textRect, $new($Rectangle));
	if (b->isOpaque()) {
		$nc(g)->setColor($(c->getBackground()));
		g->fillRect(viewRect->x, viewRect->y, viewRect->width, viewRect->height);
	}
	$var($AquaButtonBorder, aquaBorder, nullptr);
	if ($cast($AbstractButton, c)->isBorderPainted()) {
		$var($Border, border, c->getBorder());
		if ($instanceOf($AquaButtonBorder, border)) {
			$assign(aquaBorder, $cast($AquaButtonBorder, border));
			aquaBorder->paintButton(c, g, viewRect->x, viewRect->y, viewRect->width, viewRect->height);
		}
	} else {
		if (b->isOpaque()) {
			viewRect->x = $nc(i)->left - 2;
			viewRect->y = i->top - 2;
			viewRect->width = b->getWidth() - (i->right + viewRect->x) + 4;
			viewRect->height = b->getHeight() - (i->bottom + viewRect->y) + 4;
			bool var$1 = b->isContentAreaFilled();
			if (var$1 || $nc(model)->isSelected()) {
				if ($nc(model)->isSelected()) {
					$nc(g)->setColor($($$nc(c->getBackground())->darker()));
				} else {
					$nc(g)->setColor($(c->getBackground()));
				}
				$nc(g)->fillRect(viewRect->x, viewRect->y, viewRect->width, viewRect->height);
			}
		}
		bool var$2 = b->isFocusPainted();
		if (var$2 && b->hasFocus()) {
			paintFocus(g, b, viewRect, textRect, iconRect);
		}
	}
	$var($String, text, layoutAndGetText(g, b, aquaBorder, i, viewRect, iconRect, textRect));
	if (b->getIcon() != nullptr) {
		paintIcon(g, b, iconRect);
	}
	if (textRect->width == 0) {
		textRect->width = 50;
	}
	if (text != nullptr && !text->isEmpty()) {
		$init($BasicHTML);
		$var($View, v, $cast($View, c->getClientProperty($BasicHTML::propertyKey)));
		if (v != nullptr) {
			v->paint(g, textRect);
		} else {
			paintText(g, b, textRect, text);
		}
	}
}

$String* AquaButtonUI::layoutAndGetText($Graphics* g, $AbstractButton* b, $AquaButtonBorder* aquaBorder, $Insets* i, $Rectangle* viewRect, $Rectangle* iconRect, $Rectangle* textRect) {
	$useLocalObjectStack();
	$nc(viewRect)->x = $nc(i)->left;
	viewRect->y = i->top;
	viewRect->width = $nc(b)->getWidth() - (i->right + viewRect->x);
	viewRect->height = b->getHeight() - (i->bottom + viewRect->y);
	$nc(textRect)->x = ($nc(textRect)->y = ($nc(textRect)->width = ($nc(textRect)->height = 0)));
	$nc(iconRect)->x = ($nc(iconRect)->y = ($nc(iconRect)->width = ($nc(iconRect)->height = 0)));
	$nc(g)->setFont($(b->getFont()));
	$var($FontMetrics, fm, g->getFontMetrics());
	$var($String, originalText, b->getText());
	$var($Icon, var$0, b->getIcon());
	int32_t var$1 = b->getVerticalAlignment();
	int32_t var$2 = b->getHorizontalAlignment();
	int32_t var$3 = b->getVerticalTextPosition();
	int32_t var$4 = b->getHorizontalTextPosition();
	$var($String, text, $SwingUtilities::layoutCompoundLabel(b, fm, originalText, var$0, var$1, var$2, var$3, var$4, viewRect, iconRect, textRect, originalText == nullptr ? 0 : b->getIconTextGap()));
	if (text == originalText || aquaBorder == nullptr) {
		return text;
	}
	int32_t var$5 = b->getWidth();
	$var($Insets, alternateContentInsets, $nc(aquaBorder)->getContentInsets(b, var$5, b->getHeight()));
	if (alternateContentInsets != nullptr) {
		return layoutAndGetText(g, b, nullptr, alternateContentInsets, viewRect, iconRect, textRect);
	}
	return text;
}

void AquaButtonUI::paintIcon($Graphics* g, $AbstractButton* b, $Rectangle* localIconRect) {
	$useLocalObjectStack();
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($Icon, icon, b->getIcon());
	$var($Icon, tmpIcon, nullptr);
	if (icon == nullptr) {
		return;
	}
	if (!$nc(model)->isEnabled()) {
		if (model->isSelected()) {
			$assign(tmpIcon, b->getDisabledSelectedIcon());
		} else {
			$assign(tmpIcon, b->getDisabledIcon());
		}
	} else {
		bool var$0 = model->isPressed();
		if (var$0 && model->isArmed()) {
			$assign(tmpIcon, b->getPressedIcon());
			if (tmpIcon == nullptr) {
				if ($instanceOf($ImageIcon, icon)) {
					$assign(tmpIcon, $new($ImageIcon, $($AquaUtils::generateSelectedDarkImage($($cast($ImageIcon, icon)->getImage())))));
				}
			}
		} else {
			bool var$1 = b->isRolloverEnabled();
			if (var$1 && model->isRollover()) {
				if (model->isSelected()) {
					$assign(tmpIcon, b->getRolloverSelectedIcon());
				} else {
					$assign(tmpIcon, b->getRolloverIcon());
				}
			} else if (model->isSelected()) {
				$assign(tmpIcon, b->getSelectedIcon());
			}
		}
	}
	bool var$3 = model->isEnabled();
	bool var$2 = var$3 && b->isFocusOwner();
	if (var$2 && $instanceOf($AquaButtonBorder$Toolbar, $(b->getBorder()))) {
		if (tmpIcon == nullptr) {
			$assign(tmpIcon, icon);
		}
		if ($instanceOf($ImageIcon, tmpIcon)) {
			$assign(tmpIcon, $AquaFocus::createFocusedIcon(tmpIcon, b, 3));
			$nc(tmpIcon)->paintIcon(b, g, $nc(localIconRect)->x - 3, $nc(localIconRect)->y - 3);
			return;
		}
	}
	if (tmpIcon != nullptr) {
		$assign(icon, tmpIcon);
	}
	$nc(icon)->paintIcon(b, g, $nc(localIconRect)->x, $nc(localIconRect)->y);
}

void AquaButtonUI::paintText($Graphics* g, $JComponent* c, $Rectangle* localTextRect, $String* text) {
	$useLocalObjectStack();
	$var($Graphics2D, g2d, $instanceOf($Graphics2D, g) ? $cast($Graphics2D, g) : ($Graphics2D*)nullptr);
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($FontMetrics, fm, $nc(g)->getFontMetrics());
	int32_t mnemonicIndex = $AquaMnemonicHandler::isMnemonicHidden() ? -1 : b->getDisplayedMnemonicIndex();
	if ($nc(model)->isEnabled()) {
		g->setColor($(b->getForeground()));
	} else {
		g->setColor(this->defaultDisabledTextColor);
	}
	$SwingUtilities2::drawStringUnderlineCharAt(c, g, text, mnemonicIndex, $nc(localTextRect)->x, $nc(localTextRect)->y + $nc(fm)->getAscent());
}

void AquaButtonUI::paintText($Graphics* g, $AbstractButton* b, $Rectangle* localTextRect, $String* text) {
	paintText(g, $cast($JComponent, b), localTextRect, text);
}

void AquaButtonUI::paintButtonPressed($Graphics* g, $AbstractButton* b) {
	paint(g, b);
}

$Dimension* AquaButtonUI::getMinimumSize($JComponent* c) {
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

$Dimension* AquaButtonUI::getPreferredSize($JComponent* c) {
	$useLocalObjectStack();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($Dimension, d, $BasicGraphicsUtils::getPreferredButtonSize(b, $nc(b)->getIconTextGap()));
	if (d == nullptr) {
		return nullptr;
	}
	$var($Border, border, b->getBorder());
	if ($instanceOf($AquaButtonBorder, border)) {
		$cast($AquaButtonBorder, border)->alterPreferredSize(d);
	}
	return d;
}

$Dimension* AquaButtonUI::getMaximumSize($JComponent* c) {
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

$AquaButtonUI$AquaHierarchyButtonListener* AquaButtonUI::getAquaHierarchyButtonListener() {
	$init(AquaButtonUI);
	return $cast($AquaButtonUI$AquaHierarchyButtonListener, AquaButtonUI::fHierListener->get());
}

bool AquaButtonUI::shouldInstallHierListener($AbstractButton* b) {
	return ($instanceOf($JButton, b) || $instanceOf($JToggleButton, b) && !($instanceOf($AquaComboBoxButton, b)) && !($instanceOf($JCheckBox, b)) && !($instanceOf($JRadioButton, b)));
}

void AquaButtonUI::installHierListener($AbstractButton* b) {
	if (shouldInstallHierListener(b)) {
		$nc(b)->addHierarchyListener($(getAquaHierarchyButtonListener()));
	}
}

void AquaButtonUI::uninstallHierListener($AbstractButton* b) {
	if (shouldInstallHierListener(b)) {
		$nc(b)->removeHierarchyListener($(getAquaHierarchyButtonListener()));
	}
}

void AquaButtonUI::clinit$($Class* clazz) {
	$assignStatic(AquaButtonUI::BUTTON_TYPE, "JButton.buttonType"_s);
	$assignStatic(AquaButtonUI::SEGMENTED_BUTTON_POSITION, "JButton.segmentPosition"_s);
	$assignStatic(AquaButtonUI::buttonUI, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaButtonUI::class$));
	$load($AquaButtonUI$AquaHierarchyButtonListener);
	$assignStatic(AquaButtonUI::fHierListener, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaButtonUI$AquaHierarchyButtonListener::class$));
}

AquaButtonUI::AquaButtonUI() {
}

$Class* AquaButtonUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BUTTON_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonUI, BUTTON_TYPE)},
		{"SEGMENTED_BUTTON_POSITION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonUI, SEGMENTED_BUTTON_POSITION)},
		{"buttonUI", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaButtonUI;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonUI, buttonUI)},
		{"defaults_initialized", "Z", nullptr, $PRIVATE, $field(AquaButtonUI, defaults_initialized)},
		{"defaultDisabledTextColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(AquaButtonUI, defaultDisabledTextColor)},
		{"fHierListener", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaButtonUI$AquaHierarchyButtonListener;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonUI, fHierListener)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaButtonUI, init$, void)},
		{"applySizeFor", "(Ljavax/swing/JComponent;Lapple/laf/JRSUIConstants$Size;)V", nullptr, $PUBLIC, $virtualMethod(AquaButtonUI, applySizeFor, void, $JComponent*, $JRSUIConstants$Size*)},
		{"createButtonListener", "(Ljavax/swing/AbstractButton;)Lcom/apple/laf/AquaButtonUI$AquaButtonListener;", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, createButtonListener, $BasicButtonListener*, $AbstractButton*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaButtonUI, createUI, $ComponentUI*, $JComponent*)},
		{"getAquaButtonListener", "(Ljavax/swing/AbstractButton;)Lcom/apple/laf/AquaButtonUI$AquaButtonListener;", nullptr, $PRIVATE, $method(AquaButtonUI, getAquaButtonListener, $AquaButtonUI$AquaButtonListener*, $AbstractButton*)},
		{"getAquaHierarchyButtonListener", "()Lcom/apple/laf/AquaButtonUI$AquaHierarchyButtonListener;", nullptr, $STATIC, $staticMethod(AquaButtonUI, getAquaHierarchyButtonListener, $AquaButtonUI$AquaHierarchyButtonListener*)},
		{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(AquaButtonUI, getMaximumSize, $Dimension*, $JComponent*)},
		{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(AquaButtonUI, getMinimumSize, $Dimension*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(AquaButtonUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, installDefaults, void, $AbstractButton*)},
		{"installHierListener", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, installHierListener, void, $AbstractButton*)},
		{"installKeyboardActions", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, installKeyboardActions, void, $AbstractButton*)},
		{"installListeners", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, installListeners, void, $AbstractButton*)},
		{"isBorderFromProperty", "(Ljavax/swing/AbstractButton;)Z", nullptr, $PUBLIC, $virtualMethod(AquaButtonUI, isBorderFromProperty, bool, $AbstractButton*)},
		{"isOnToolbar", "(Ljavax/swing/AbstractButton;)Z", nullptr, $PROTECTED | $STATIC, $staticMethod(AquaButtonUI, isOnToolbar, bool, $AbstractButton*)},
		{"layoutAndGetText", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Lcom/apple/laf/AquaButtonBorder;Ljava/awt/Insets;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, layoutAndGetText, $String*, $Graphics*, $AbstractButton*, $AquaButtonBorder*, $Insets*, $Rectangle*, $Rectangle*, $Rectangle*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(AquaButtonUI, paint, void, $Graphics*, $JComponent*)},
		{"paintButtonPressed", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, paintButtonPressed, void, $Graphics*, $AbstractButton*)},
		{"paintIcon", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, paintIcon, void, $Graphics*, $AbstractButton*, $Rectangle*)},
		{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, paintText, void, $Graphics*, $JComponent*, $Rectangle*, $String*)},
		{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, paintText, void, $Graphics*, $AbstractButton*, $Rectangle*, $String*)},
		{"setButtonMarginIfNeeded", "(Ljavax/swing/AbstractButton;Ljava/awt/Insets;)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, setButtonMarginIfNeeded, void, $AbstractButton*, $Insets*)},
		{"setButtonType", "(Ljavax/swing/AbstractButton;Ljava/lang/Object;)Z", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, setButtonType, bool, $AbstractButton*, Object$*)},
		{"setThemeBorder", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, setThemeBorder, void, $AbstractButton*)},
		{"shouldInstallHierListener", "(Ljavax/swing/AbstractButton;)Z", nullptr, $PRIVATE, $method(AquaButtonUI, shouldInstallHierListener, bool, $AbstractButton*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, uninstallDefaults, void, $AbstractButton*)},
		{"uninstallHierListener", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, uninstallHierListener, void, $AbstractButton*)},
		{"uninstallKeyboardActions", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, uninstallKeyboardActions, void, $AbstractButton*)},
		{"uninstallListeners", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonUI, uninstallListeners, void, $AbstractButton*)},
		{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(AquaButtonUI, uninstallUI, void, $JComponent*)},
		{"updateBorder", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(AquaButtonUI, updateBorder, void, $AbstractButton*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtilControlSize$Sizeable", "com.apple.laf.AquaUtilControlSize", "Sizeable", $STATIC | $INTERFACE | $ABSTRACT},
		{"com.apple.laf.AquaButtonUI$AquaButtonListener", "com.apple.laf.AquaButtonUI", "AquaButtonListener", 0},
		{"com.apple.laf.AquaButtonUI$AquaHierarchyButtonListener", "com.apple.laf.AquaButtonUI", "AquaHierarchyButtonListener", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaButtonUI",
		"javax.swing.plaf.basic.BasicButtonUI",
		"com.apple.laf.AquaUtilControlSize$Sizeable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaButtonUI$AquaButtonListener,com.apple.laf.AquaButtonUI$AquaHierarchyButtonListener"
	};
	$loadClass(AquaButtonUI, name, initialize, &classInfo$$, AquaButtonUI::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaButtonUI));
	});
	return class$;
}

$Class* AquaButtonUI::class$ = nullptr;

		} // laf
	} // apple
} // com