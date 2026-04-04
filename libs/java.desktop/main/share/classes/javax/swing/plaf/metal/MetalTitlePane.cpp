#include <javax/swing/plaf/metal/MetalTitlePane.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/image/BufferedImage.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/AssertionError.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/Action.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/metal/MetalBumps.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalRootPaneUI.h>
#include <javax/swing/plaf/metal/MetalTitlePane$CloseAction.h>
#include <javax/swing/plaf/metal/MetalTitlePane$IconifyAction.h>
#include <javax/swing/plaf/metal/MetalTitlePane$MaximizeAction.h>
#include <javax/swing/plaf/metal/MetalTitlePane$PropertyChangeHandler.h>
#include <javax/swing/plaf/metal/MetalTitlePane$RestoreAction.h>
#include <javax/swing/plaf/metal/MetalTitlePane$SystemMenuBar.h>
#include <javax/swing/plaf/metal/MetalTitlePane$TitlePaneLayout.h>
#include <javax/swing/plaf/metal/MetalTitlePane$WindowHandler.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <sun/awt/SunToolkit.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ACCESSIBLE_NAME_PROPERTY
#undef COLOR_CHOOSER_DIALOG
#undef ERROR_DIALOG
#undef FALSE
#undef FILE_CHOOSER_DIALOG
#undef FRAME
#undef ICONIFIED
#undef IMAGE_HEIGHT
#undef IMAGE_WIDTH
#undef INFORMATION_DIALOG
#undef MAXIMIZED_BOTH
#undef PLAIN_DIALOG
#undef QUESTION_DIALOG
#undef TRUE
#undef WARNING_DIALOG
#undef WINDOW_CLOSING

using $Color = ::java::awt::Color;
using $Dialog = ::java::awt::Dialog;
using $FontMetrics = ::java::awt::FontMetrics;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $WindowListener = ::java::awt::event::WindowListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Action = ::javax::swing::Action;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JRootPane = ::javax::swing::JRootPane;
using $JSeparator = ::javax::swing::JSeparator;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalBumps = ::javax::swing::plaf::metal::MetalBumps;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalRootPaneUI = ::javax::swing::plaf::metal::MetalRootPaneUI;
using $MetalTitlePane$CloseAction = ::javax::swing::plaf::metal::MetalTitlePane$CloseAction;
using $MetalTitlePane$IconifyAction = ::javax::swing::plaf::metal::MetalTitlePane$IconifyAction;
using $MetalTitlePane$MaximizeAction = ::javax::swing::plaf::metal::MetalTitlePane$MaximizeAction;
using $MetalTitlePane$PropertyChangeHandler = ::javax::swing::plaf::metal::MetalTitlePane$PropertyChangeHandler;
using $MetalTitlePane$RestoreAction = ::javax::swing::plaf::metal::MetalTitlePane$RestoreAction;
using $MetalTitlePane$SystemMenuBar = ::javax::swing::plaf::metal::MetalTitlePane$SystemMenuBar;
using $MetalTitlePane$TitlePaneLayout = ::javax::swing::plaf::metal::MetalTitlePane$TitlePaneLayout;
using $MetalTitlePane$WindowHandler = ::javax::swing::plaf::metal::MetalTitlePane$WindowHandler;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

bool MetalTitlePane::$assertionsDisabled = false;
$Border* MetalTitlePane::handyEmptyBorder = nullptr;

void MetalTitlePane::init$($JRootPane* root, $MetalRootPaneUI* ui) {
	$useLocalObjectStack();
	$JComponent::init$();
	$set(this, inactiveBackground, $UIManager::getColor("inactiveCaption"_s));
	$set(this, inactiveForeground, $UIManager::getColor("inactiveCaptionText"_s));
	$set(this, inactiveShadow, $UIManager::getColor("inactiveCaptionBorder"_s));
	$set(this, activeBumpsHighlight, $MetalLookAndFeel::getPrimaryControlHighlight());
	$set(this, activeBumpsShadow, $MetalLookAndFeel::getPrimaryControlDarkShadow());
	$set(this, activeBackground, nullptr);
	$set(this, activeForeground, nullptr);
	$set(this, activeShadow, nullptr);
	$set(this, activeBumps, $new($MetalBumps, 0, 0, this->activeBumpsHighlight, this->activeBumpsShadow, $($MetalLookAndFeel::getPrimaryControl())));
	$var($Color, var$0, $MetalLookAndFeel::getControlHighlight());
	$var($Color, var$1, $MetalLookAndFeel::getControlDarkShadow());
	$set(this, inactiveBumps, $new($MetalBumps, 0, 0, var$0, var$1, $($MetalLookAndFeel::getControl())));
	$set(this, rootPane, root);
	$set(this, rootPaneUI, ui);
	this->state = -1;
	installSubcomponents();
	determineColors();
	installDefaults();
	setLayout($(createLayout()));
}

void MetalTitlePane::uninstall() {
	uninstallListeners();
	$set(this, window, nullptr);
	removeAll();
}

void MetalTitlePane::installListeners() {
	if (this->window != nullptr) {
		$set(this, windowListener, createWindowListener());
		$nc(this->window)->addWindowListener(this->windowListener);
		$set(this, propertyChangeListener, createWindowPropertyChangeListener());
		$nc(this->window)->addPropertyChangeListener(this->propertyChangeListener);
	}
}

void MetalTitlePane::uninstallListeners() {
	if (this->window != nullptr) {
		this->window->removeWindowListener(this->windowListener);
		$nc(this->window)->removePropertyChangeListener(this->propertyChangeListener);
	}
}

$WindowListener* MetalTitlePane::createWindowListener() {
	return $new($MetalTitlePane$WindowHandler, this);
}

$PropertyChangeListener* MetalTitlePane::createWindowPropertyChangeListener() {
	return $new($MetalTitlePane$PropertyChangeHandler, this);
}

$JRootPane* MetalTitlePane::getRootPane() {
	return this->rootPane;
}

int32_t MetalTitlePane::getWindowDecorationStyle() {
	return $$nc(getRootPane())->getWindowDecorationStyle();
}

void MetalTitlePane::addNotify() {
	$JComponent::addNotify();
	uninstallListeners();
	$set(this, window, $SwingUtilities::getWindowAncestor(this));
	if (this->window != nullptr) {
		if ($instanceOf($Frame, this->window)) {
			setState($cast($Frame, this->window)->getExtendedState());
		} else {
			setState(0);
		}
		setActive($nc(this->window)->isActive());
		installListeners();
		updateSystemIcon();
	}
}

void MetalTitlePane::removeNotify() {
	$JComponent::removeNotify();
	uninstallListeners();
	$set(this, window, nullptr);
}

void MetalTitlePane::installSubcomponents() {
	int32_t decorationStyle = getWindowDecorationStyle();
	if (decorationStyle == $JRootPane::FRAME) {
		createActions();
		$set(this, menuBar, createMenuBar());
		add(this->menuBar);
		createButtons();
		add(this->iconifyButton);
		add(this->toggleButton);
		add(this->closeButton);
	} else if (decorationStyle == $JRootPane::PLAIN_DIALOG || decorationStyle == $JRootPane::INFORMATION_DIALOG || decorationStyle == $JRootPane::ERROR_DIALOG || decorationStyle == $JRootPane::COLOR_CHOOSER_DIALOG || decorationStyle == $JRootPane::FILE_CHOOSER_DIALOG || decorationStyle == $JRootPane::QUESTION_DIALOG || decorationStyle == $JRootPane::WARNING_DIALOG) {
		createActions();
		createButtons();
		add(this->closeButton);
	}
}

void MetalTitlePane::determineColors() {
	switch (getWindowDecorationStyle()) {
	case $JRootPane::FRAME:
		$set(this, activeBackground, $UIManager::getColor("activeCaption"_s));
		$set(this, activeForeground, $UIManager::getColor("activeCaptionText"_s));
		$set(this, activeShadow, $UIManager::getColor("activeCaptionBorder"_s));
		break;
	case $JRootPane::ERROR_DIALOG:
		$set(this, activeBackground, $UIManager::getColor("OptionPane.errorDialog.titlePane.background"_s));
		$set(this, activeForeground, $UIManager::getColor("OptionPane.errorDialog.titlePane.foreground"_s));
		$set(this, activeShadow, $UIManager::getColor("OptionPane.errorDialog.titlePane.shadow"_s));
		break;
	case $JRootPane::QUESTION_DIALOG:
	case $JRootPane::COLOR_CHOOSER_DIALOG:
	case $JRootPane::FILE_CHOOSER_DIALOG:
		$set(this, activeBackground, $UIManager::getColor("OptionPane.questionDialog.titlePane.background"_s));
		$set(this, activeForeground, $UIManager::getColor("OptionPane.questionDialog.titlePane.foreground"_s));
		$set(this, activeShadow, $UIManager::getColor("OptionPane.questionDialog.titlePane.shadow"_s));
		break;
	case $JRootPane::WARNING_DIALOG:
		$set(this, activeBackground, $UIManager::getColor("OptionPane.warningDialog.titlePane.background"_s));
		$set(this, activeForeground, $UIManager::getColor("OptionPane.warningDialog.titlePane.foreground"_s));
		$set(this, activeShadow, $UIManager::getColor("OptionPane.warningDialog.titlePane.shadow"_s));
		break;
	case $JRootPane::PLAIN_DIALOG:
	case $JRootPane::INFORMATION_DIALOG:
	default:
		$set(this, activeBackground, $UIManager::getColor("activeCaption"_s));
		$set(this, activeForeground, $UIManager::getColor("activeCaptionText"_s));
		$set(this, activeShadow, $UIManager::getColor("activeCaptionBorder"_s));
		break;
	}
	$nc(this->activeBumps)->setBumpColors(this->activeBumpsHighlight, this->activeBumpsShadow, this->activeBackground);
}

void MetalTitlePane::installDefaults() {
	$useLocalObjectStack();
	setFont($($UIManager::getFont("InternalFrame.titleFont"_s, $(getLocale()))));
}

void MetalTitlePane::uninstallDefaults() {
}

$JMenuBar* MetalTitlePane::createMenuBar() {
	$set(this, menuBar, $new($MetalTitlePane$SystemMenuBar, this));
	this->menuBar->setFocusable(false);
	$nc(this->menuBar)->setBorderPainted(true);
	$nc(this->menuBar)->add($(createMenu()));
	return this->menuBar;
}

void MetalTitlePane::close() {
	$useLocalObjectStack();
	$var($Window, window, getWindow());
	if (window != nullptr) {
		window->dispatchEvent($$new($WindowEvent, window, $WindowEvent::WINDOW_CLOSING));
	}
}

void MetalTitlePane::iconify() {
	$var($Frame, frame, getFrame());
	if (frame != nullptr) {
		frame->setExtendedState(this->state | $Frame::ICONIFIED);
	}
}

void MetalTitlePane::maximize() {
	$var($Frame, frame, getFrame());
	if (frame != nullptr) {
		frame->setExtendedState(this->state | $Frame::MAXIMIZED_BOTH);
	}
}

void MetalTitlePane::restore() {
	$var($Frame, frame, getFrame());
	if (frame == nullptr) {
		return;
	}
	if ((this->state & $Frame::ICONIFIED) != 0) {
		$nc(frame)->setExtendedState(this->state & ~$Frame::ICONIFIED);
	} else {
		$nc(frame)->setExtendedState(this->state & ~$Frame::MAXIMIZED_BOTH);
	}
}

void MetalTitlePane::createActions() {
	$set(this, closeAction, $new($MetalTitlePane$CloseAction, this));
	if (getWindowDecorationStyle() == $JRootPane::FRAME) {
		$set(this, iconifyAction, $new($MetalTitlePane$IconifyAction, this));
		$set(this, restoreAction, $new($MetalTitlePane$RestoreAction, this));
		$set(this, maximizeAction, $new($MetalTitlePane$MaximizeAction, this));
	}
}

$JMenu* MetalTitlePane::createMenu() {
	$var($JMenu, menu, $new($JMenu, ""_s));
	if (getWindowDecorationStyle() == $JRootPane::FRAME) {
		addMenuItems(menu);
	}
	return menu;
}

void MetalTitlePane::addMenuItems($JMenu* menu) {
	$useLocalObjectStack();
	$var($Locale, locale, $$nc(getRootPane())->getLocale());
	$var($JMenuItem, mi, $nc(menu)->add(this->restoreAction));
	int32_t mnemonic = $MetalUtils::getInt("MetalTitlePane.restoreMnemonic"_s, -1);
	if (mnemonic != -1) {
		$nc(mi)->setMnemonic(mnemonic);
	}
	$assign(mi, menu->add(this->iconifyAction));
	mnemonic = $MetalUtils::getInt("MetalTitlePane.iconifyMnemonic"_s, -1);
	if (mnemonic != -1) {
		$nc(mi)->setMnemonic(mnemonic);
	}
	if ($$nc($Toolkit::getDefaultToolkit())->isFrameStateSupported($Frame::MAXIMIZED_BOTH)) {
		$assign(mi, menu->add(this->maximizeAction));
		mnemonic = $MetalUtils::getInt("MetalTitlePane.maximizeMnemonic"_s, -1);
		if (mnemonic != -1) {
			$nc(mi)->setMnemonic(mnemonic);
		}
	}
	menu->add($$new($JSeparator));
	$assign(mi, menu->add(this->closeAction));
	mnemonic = $MetalUtils::getInt("MetalTitlePane.closeMnemonic"_s, -1);
	if (mnemonic != -1) {
		$nc(mi)->setMnemonic(mnemonic);
	}
}

$JButton* MetalTitlePane::createTitleButton() {
	$var($JButton, button, $new($JButton));
	button->setFocusPainted(false);
	button->setFocusable(false);
	button->setOpaque(true);
	return button;
}

void MetalTitlePane::createButtons() {
	$useLocalObjectStack();
	$set(this, closeButton, createTitleButton());
	$nc(this->closeButton)->setAction(this->closeAction);
	$nc(this->closeButton)->setText(nullptr);
	$nc(this->closeButton)->putClientProperty("paintActive"_s, $Boolean::TRUE);
	$nc(this->closeButton)->setBorder(MetalTitlePane::handyEmptyBorder);
	$init($AccessibleContext);
	$nc(this->closeButton)->putClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, "Close"_s);
	$nc(this->closeButton)->setIcon($($UIManager::getIcon("InternalFrame.closeIcon"_s)));
	if (getWindowDecorationStyle() == $JRootPane::FRAME) {
		$set(this, maximizeIcon, $UIManager::getIcon("InternalFrame.maximizeIcon"_s));
		$set(this, minimizeIcon, $UIManager::getIcon("InternalFrame.minimizeIcon"_s));
		$set(this, iconifyButton, createTitleButton());
		$nc(this->iconifyButton)->setAction(this->iconifyAction);
		$nc(this->iconifyButton)->setText(nullptr);
		$nc(this->iconifyButton)->putClientProperty("paintActive"_s, $Boolean::TRUE);
		$nc(this->iconifyButton)->setBorder(MetalTitlePane::handyEmptyBorder);
		$nc(this->iconifyButton)->putClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, "Iconify"_s);
		$nc(this->iconifyButton)->setIcon($($UIManager::getIcon("InternalFrame.iconifyIcon"_s)));
		$set(this, toggleButton, createTitleButton());
		$nc(this->toggleButton)->setAction(this->restoreAction);
		$nc(this->toggleButton)->putClientProperty("paintActive"_s, $Boolean::TRUE);
		$nc(this->toggleButton)->setBorder(MetalTitlePane::handyEmptyBorder);
		$nc(this->toggleButton)->putClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, "Maximize"_s);
		$nc(this->toggleButton)->setIcon(this->maximizeIcon);
	}
}

$LayoutManager* MetalTitlePane::createLayout() {
	return $new($MetalTitlePane$TitlePaneLayout, this);
}

void MetalTitlePane::setActive(bool isActive) {
	$useLocalObjectStack();
	$var($Boolean, activeB, isActive ? $Boolean::TRUE : $Boolean::FALSE);
	$nc(this->closeButton)->putClientProperty("paintActive"_s, activeB);
	if (getWindowDecorationStyle() == $JRootPane::FRAME) {
		$nc(this->iconifyButton)->putClientProperty("paintActive"_s, activeB);
		$nc(this->toggleButton)->putClientProperty("paintActive"_s, activeB);
	}
	$$nc(getRootPane())->repaint();
}

void MetalTitlePane::setState(int32_t state) {
	setState(state, false);
}

void MetalTitlePane::setState(int32_t state, bool updateRegardless) {
	$useLocalObjectStack();
	$var($Window, w, getWindow());
	if (w != nullptr && getWindowDecorationStyle() == $JRootPane::FRAME) {
		if (this->state == state && !updateRegardless) {
			return;
		}
		$var($Frame, frame, getFrame());
		if (frame != nullptr) {
			$var($JRootPane, rootPane, getRootPane());
			bool var$1 = (state & $Frame::MAXIMIZED_BOTH) != 0;
			if (var$1) {
				bool var$2 = $nc(rootPane)->getBorder() == nullptr;
				var$1 = var$2 || ($instanceOf($UIResource, $(rootPane->getBorder())));
			}
			bool var$0 = var$1;
			if (var$0 && frame->isShowing()) {
				$nc(rootPane)->setBorder(nullptr);
			} else if ((state & $Frame::MAXIMIZED_BOTH) == 0) {
				$nc(this->rootPaneUI)->installBorder(rootPane);
			}
			if (frame->isResizable()) {
				if ((state & $Frame::MAXIMIZED_BOTH) != 0) {
					updateToggleButton(this->restoreAction, this->minimizeIcon);
					$nc(this->maximizeAction)->setEnabled(false);
					$nc(this->restoreAction)->setEnabled(true);
				} else {
					updateToggleButton(this->maximizeAction, this->maximizeIcon);
					$nc(this->maximizeAction)->setEnabled(true);
					$nc(this->restoreAction)->setEnabled(false);
				}
				bool var$3 = $nc(this->toggleButton)->getParent() == nullptr;
				if (var$3 || $nc(this->iconifyButton)->getParent() == nullptr) {
					add(this->toggleButton);
					add(this->iconifyButton);
					revalidate();
					repaint();
				}
				$nc(this->toggleButton)->setText(nullptr);
			} else {
				$nc(this->maximizeAction)->setEnabled(false);
				$nc(this->restoreAction)->setEnabled(false);
				if ($nc(this->toggleButton)->getParent() != nullptr) {
					remove(this->toggleButton);
					revalidate();
					repaint();
				}
			}
		} else {
			$nc(this->maximizeAction)->setEnabled(false);
			$nc(this->restoreAction)->setEnabled(false);
			$nc(this->iconifyAction)->setEnabled(false);
			remove(this->toggleButton);
			remove(this->iconifyButton);
			revalidate();
			repaint();
		}
		$nc(this->closeAction)->setEnabled(true);
		this->state = state;
	}
}

void MetalTitlePane::updateToggleButton($Action* action, $Icon* icon) {
	$nc(this->toggleButton)->setAction(action);
	$nc(this->toggleButton)->setIcon(icon);
	$nc(this->toggleButton)->setText(nullptr);
}

$Frame* MetalTitlePane::getFrame() {
	$var($Window, window, getWindow());
	if ($instanceOf($Frame, window)) {
		return $cast($Frame, window);
	}
	return nullptr;
}

$Window* MetalTitlePane::getWindow() {
	return this->window;
}

$String* MetalTitlePane::getTitle() {
	$var($Window, w, getWindow());
	if ($instanceOf($Frame, w)) {
		return $cast($Frame, w)->getTitle();
	} else if ($instanceOf($Dialog, w)) {
		return $cast($Dialog, w)->getTitle();
	}
	return nullptr;
}

void MetalTitlePane::paintComponent($Graphics* g) {
	$useLocalObjectStack();
	if (getFrame() != nullptr) {
		setState($$nc(getFrame())->getExtendedState());
	}
	$var($JRootPane, rootPane, getRootPane());
	$var($Window, window, getWindow());
	bool leftToRight = (window == nullptr) ? $$nc($nc(rootPane)->getComponentOrientation())->isLeftToRight() : $$nc(window->getComponentOrientation())->isLeftToRight();
	bool isSelected = (window == nullptr) ? true : window->isActive();
	int32_t width = getWidth();
	int32_t height = getHeight();
	$var($Color, background, nullptr);
	$var($Color, foreground, nullptr);
	$var($Color, darkShadow, nullptr);
	$var($MetalBumps, bumps, nullptr);
	if (isSelected) {
		$assign(background, this->activeBackground);
		$assign(foreground, this->activeForeground);
		$assign(darkShadow, this->activeShadow);
		$assign(bumps, this->activeBumps);
	} else {
		$assign(background, this->inactiveBackground);
		$assign(foreground, this->inactiveForeground);
		$assign(darkShadow, this->inactiveShadow);
		$assign(bumps, this->inactiveBumps);
	}
	$nc(g)->setColor(background);
	g->fillRect(0, 0, width, height);
	g->setColor(darkShadow);
	g->drawLine(0, height - 1, width, height - 1);
	g->drawLine(0, 0, 0, 0);
	g->drawLine(width - 1, 0, width - 1, 0);
	int32_t xOffset = leftToRight ? 5 : width - 5;
	if (getWindowDecorationStyle() == $JRootPane::FRAME) {
		xOffset += leftToRight ? MetalTitlePane::IMAGE_WIDTH + 5 : -MetalTitlePane::IMAGE_WIDTH - 5;
	}
	$var($String, theTitle, getTitle());
	if (theTitle != nullptr) {
		$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(rootPane, g));
		g->setColor(foreground);
		int32_t var$0 = (height - $nc(fm)->getHeight()) / 2;
		int32_t yOffset = var$0 + fm->getAscent();
		$var($Rectangle, rect, $new($Rectangle, 0, 0, 0, 0));
		if (this->iconifyButton != nullptr && this->iconifyButton->getParent() != nullptr) {
			$assign(rect, this->iconifyButton->getBounds());
		}
		int32_t titleW = 0;
		if (leftToRight) {
			if ($nc(rect)->x == 0) {
				int32_t var$1 = $nc(window)->getWidth();
				rect->x = var$1 - $nc($(window->getInsets()))->right - 2;
			}
			titleW = rect->x - xOffset - 4;
			$assign(theTitle, $SwingUtilities2::clipStringIfNecessary(rootPane, fm, theTitle, titleW));
		} else {
			titleW = xOffset - $nc(rect)->x - $nc(rect)->width - 4;
			$assign(theTitle, $SwingUtilities2::clipStringIfNecessary(rootPane, fm, theTitle, titleW));
			xOffset -= $SwingUtilities2::stringWidth(rootPane, fm, theTitle);
		}
		int32_t titleLength = $SwingUtilities2::stringWidth(rootPane, fm, theTitle);
		$SwingUtilities2::drawString(rootPane, g, theTitle, xOffset, yOffset);
		xOffset += leftToRight ? titleLength + 5 : -5;
	}
	int32_t bumpXOffset = 0;
	int32_t bumpLength = 0;
	if (leftToRight) {
		bumpLength = width - this->buttonsWidth - xOffset - 5;
		bumpXOffset = xOffset;
	} else {
		bumpLength = xOffset - this->buttonsWidth - 5;
		bumpXOffset = this->buttonsWidth + 5;
	}
	int32_t bumpYOffset = 3;
	int32_t bumpHeight = getHeight() - (2 * bumpYOffset);
	$nc(bumps)->setBumpArea(bumpLength, bumpHeight);
	bumps->paintIcon(this, g, bumpXOffset, bumpYOffset);
}

void MetalTitlePane::updateSystemIcon() {
	$useLocalObjectStack();
	$var($Window, window, getWindow());
	if (window == nullptr) {
		$set(this, systemIcon, nullptr);
		return;
	}
	$var($List, icons, $nc(window)->getIconImages());
	if (!MetalTitlePane::$assertionsDisabled && !(icons != nullptr)) {
		$throwNew($AssertionError);
	}
	if ($nc(icons)->size() == 0) {
		$set(this, systemIcon, nullptr);
	} else if (icons->size() == 1) {
		$set(this, systemIcon, $cast($Image, icons->get(0)));
	} else {
		$set(this, systemIcon, $SunToolkit::getScaledIconImage(icons, MetalTitlePane::IMAGE_WIDTH, MetalTitlePane::IMAGE_HEIGHT));
	}
}

void MetalTitlePane::clinit$($Class* clazz) {
	MetalTitlePane::$assertionsDisabled = !MetalTitlePane::class$->desiredAssertionStatus();
	$assignStatic(MetalTitlePane::handyEmptyBorder, $new($EmptyBorder, 0, 0, 0, 0));
}

MetalTitlePane::MetalTitlePane() {
}

$Class* MetalTitlePane::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MetalTitlePane, $assertionsDisabled)},
		{"handyEmptyBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalTitlePane, handyEmptyBorder)},
		{"IMAGE_HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MetalTitlePane, IMAGE_HEIGHT)},
		{"IMAGE_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MetalTitlePane, IMAGE_WIDTH)},
		{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(MetalTitlePane, propertyChangeListener)},
		{"menuBar", "Ljavax/swing/JMenuBar;", nullptr, $PRIVATE, $field(MetalTitlePane, menuBar)},
		{"closeAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(MetalTitlePane, closeAction)},
		{"iconifyAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(MetalTitlePane, iconifyAction)},
		{"restoreAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(MetalTitlePane, restoreAction)},
		{"maximizeAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(MetalTitlePane, maximizeAction)},
		{"toggleButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(MetalTitlePane, toggleButton)},
		{"iconifyButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(MetalTitlePane, iconifyButton)},
		{"closeButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(MetalTitlePane, closeButton)},
		{"maximizeIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(MetalTitlePane, maximizeIcon)},
		{"minimizeIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(MetalTitlePane, minimizeIcon)},
		{"systemIcon", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(MetalTitlePane, systemIcon)},
		{"windowListener", "Ljava/awt/event/WindowListener;", nullptr, $PRIVATE, $field(MetalTitlePane, windowListener)},
		{"window", "Ljava/awt/Window;", nullptr, $PRIVATE, $field(MetalTitlePane, window)},
		{"rootPane", "Ljavax/swing/JRootPane;", nullptr, $PRIVATE, $field(MetalTitlePane, rootPane)},
		{"buttonsWidth", "I", nullptr, $PRIVATE, $field(MetalTitlePane, buttonsWidth)},
		{"state", "I", nullptr, $PRIVATE, $field(MetalTitlePane, state)},
		{"rootPaneUI", "Ljavax/swing/plaf/metal/MetalRootPaneUI;", nullptr, $PRIVATE, $field(MetalTitlePane, rootPaneUI)},
		{"inactiveBackground", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MetalTitlePane, inactiveBackground)},
		{"inactiveForeground", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MetalTitlePane, inactiveForeground)},
		{"inactiveShadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MetalTitlePane, inactiveShadow)},
		{"activeBumpsHighlight", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MetalTitlePane, activeBumpsHighlight)},
		{"activeBumpsShadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MetalTitlePane, activeBumpsShadow)},
		{"activeBackground", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MetalTitlePane, activeBackground)},
		{"activeForeground", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MetalTitlePane, activeForeground)},
		{"activeShadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MetalTitlePane, activeShadow)},
		{"activeBumps", "Ljavax/swing/plaf/metal/MetalBumps;", nullptr, $PRIVATE, $field(MetalTitlePane, activeBumps)},
		{"inactiveBumps", "Ljavax/swing/plaf/metal/MetalBumps;", nullptr, $PRIVATE, $field(MetalTitlePane, inactiveBumps)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JRootPane;Ljavax/swing/plaf/metal/MetalRootPaneUI;)V", nullptr, $PUBLIC, $method(MetalTitlePane, init$, void, $JRootPane*, $MetalRootPaneUI*)},
		{"addMenuItems", "(Ljavax/swing/JMenu;)V", nullptr, $PRIVATE, $method(MetalTitlePane, addMenuItems, void, $JMenu*)},
		{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(MetalTitlePane, addNotify, void)},
		{"close", "()V", nullptr, $PRIVATE, $method(MetalTitlePane, close, void)},
		{"createActions", "()V", nullptr, $PRIVATE, $method(MetalTitlePane, createActions, void)},
		{"createButtons", "()V", nullptr, $PRIVATE, $method(MetalTitlePane, createButtons, void)},
		{"createLayout", "()Ljava/awt/LayoutManager;", nullptr, $PRIVATE, $method(MetalTitlePane, createLayout, $LayoutManager*)},
		{"createMenu", "()Ljavax/swing/JMenu;", nullptr, $PRIVATE, $method(MetalTitlePane, createMenu, $JMenu*)},
		{"createMenuBar", "()Ljavax/swing/JMenuBar;", nullptr, $PROTECTED, $virtualMethod(MetalTitlePane, createMenuBar, $JMenuBar*)},
		{"createTitleButton", "()Ljavax/swing/JButton;", nullptr, $PRIVATE, $method(MetalTitlePane, createTitleButton, $JButton*)},
		{"createWindowListener", "()Ljava/awt/event/WindowListener;", nullptr, $PRIVATE, $method(MetalTitlePane, createWindowListener, $WindowListener*)},
		{"createWindowPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $method(MetalTitlePane, createWindowPropertyChangeListener, $PropertyChangeListener*)},
		{"determineColors", "()V", nullptr, $PRIVATE, $method(MetalTitlePane, determineColors, void)},
		{"getFrame", "()Ljava/awt/Frame;", nullptr, $PRIVATE, $method(MetalTitlePane, getFrame, $Frame*)},
		{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PUBLIC, $virtualMethod(MetalTitlePane, getRootPane, $JRootPane*)},
		{"getTitle", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(MetalTitlePane, getTitle, $String*)},
		{"getWindow", "()Ljava/awt/Window;", nullptr, $PRIVATE, $method(MetalTitlePane, getWindow, $Window*)},
		{"getWindowDecorationStyle", "()I", nullptr, $PRIVATE, $method(MetalTitlePane, getWindowDecorationStyle, int32_t)},
		{"iconify", "()V", nullptr, $PRIVATE, $method(MetalTitlePane, iconify, void)},
		{"installDefaults", "()V", nullptr, $PRIVATE, $method(MetalTitlePane, installDefaults, void)},
		{"installListeners", "()V", nullptr, $PRIVATE, $method(MetalTitlePane, installListeners, void)},
		{"installSubcomponents", "()V", nullptr, $PRIVATE, $method(MetalTitlePane, installSubcomponents, void)},
		{"maximize", "()V", nullptr, $PRIVATE, $method(MetalTitlePane, maximize, void)},
		{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(MetalTitlePane, paintComponent, void, $Graphics*)},
		{"removeNotify", "()V", nullptr, $PUBLIC, $virtualMethod(MetalTitlePane, removeNotify, void)},
		{"restore", "()V", nullptr, $PRIVATE, $method(MetalTitlePane, restore, void)},
		{"setActive", "(Z)V", nullptr, $PRIVATE, $method(MetalTitlePane, setActive, void, bool)},
		{"setState", "(I)V", nullptr, $PRIVATE, $method(MetalTitlePane, setState, void, int32_t)},
		{"setState", "(IZ)V", nullptr, $PRIVATE, $method(MetalTitlePane, setState, void, int32_t, bool)},
		{"uninstall", "()V", nullptr, $PRIVATE, $method(MetalTitlePane, uninstall, void)},
		{"uninstallDefaults", "()V", nullptr, $PRIVATE, $method(MetalTitlePane, uninstallDefaults, void)},
		{"uninstallListeners", "()V", nullptr, $PRIVATE, $method(MetalTitlePane, uninstallListeners, void)},
		{"updateSystemIcon", "()V", nullptr, $PRIVATE, $method(MetalTitlePane, updateSystemIcon, void)},
		{"updateToggleButton", "(Ljavax/swing/Action;Ljavax/swing/Icon;)V", nullptr, $PRIVATE, $method(MetalTitlePane, updateToggleButton, void, $Action*, $Icon*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalTitlePane$WindowHandler", "javax.swing.plaf.metal.MetalTitlePane", "WindowHandler", $PRIVATE},
		{"javax.swing.plaf.metal.MetalTitlePane$PropertyChangeHandler", "javax.swing.plaf.metal.MetalTitlePane", "PropertyChangeHandler", $PRIVATE},
		{"javax.swing.plaf.metal.MetalTitlePane$TitlePaneLayout", "javax.swing.plaf.metal.MetalTitlePane", "TitlePaneLayout", $PRIVATE},
		{"javax.swing.plaf.metal.MetalTitlePane$SystemMenuBar", "javax.swing.plaf.metal.MetalTitlePane", "SystemMenuBar", $PRIVATE},
		{"javax.swing.plaf.metal.MetalTitlePane$MaximizeAction", "javax.swing.plaf.metal.MetalTitlePane", "MaximizeAction", $PRIVATE},
		{"javax.swing.plaf.metal.MetalTitlePane$RestoreAction", "javax.swing.plaf.metal.MetalTitlePane", "RestoreAction", $PRIVATE},
		{"javax.swing.plaf.metal.MetalTitlePane$IconifyAction", "javax.swing.plaf.metal.MetalTitlePane", "IconifyAction", $PRIVATE},
		{"javax.swing.plaf.metal.MetalTitlePane$CloseAction", "javax.swing.plaf.metal.MetalTitlePane", "CloseAction", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalTitlePane",
		"javax.swing.JComponent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalTitlePane$WindowHandler,javax.swing.plaf.metal.MetalTitlePane$PropertyChangeHandler,javax.swing.plaf.metal.MetalTitlePane$TitlePaneLayout,javax.swing.plaf.metal.MetalTitlePane$SystemMenuBar,javax.swing.plaf.metal.MetalTitlePane$MaximizeAction,javax.swing.plaf.metal.MetalTitlePane$RestoreAction,javax.swing.plaf.metal.MetalTitlePane$IconifyAction,javax.swing.plaf.metal.MetalTitlePane$CloseAction"
	};
	$loadClass(MetalTitlePane, name, initialize, &classInfo$$, MetalTitlePane::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalTitlePane));
	});
	return class$;
}

$Class* MetalTitlePane::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax