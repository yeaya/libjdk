#include <javax/swing/JInternalFrame.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Graphics.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyVetoException.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/SecurityException.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/Icon.h>
#include <javax/swing/InternalFrameFocusTraversalPolicy.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame$AccessibleJInternalFrame.h>
#include <javax/swing/JInternalFrame$FocusPropertyChangeListener.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/InternalFrameEvent.h>
#include <javax/swing/event/InternalFrameListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InternalFrameUI.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/UngrabEvent.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef CENTER
#undef CONTENT_PANE_PROPERTY
#undef DISPOSE_ON_CLOSE
#undef DO_NOTHING_ON_CLOSE
#undef E_RESIZE_CURSOR
#undef FALSE
#undef FRAME_ICON_PROPERTY
#undef GLASS_PANE_PROPERTY
#undef HIDE_ON_CLOSE
#undef INTERNAL_FRAME_ACTIVATED
#undef INTERNAL_FRAME_CLOSED
#undef INTERNAL_FRAME_CLOSING
#undef INTERNAL_FRAME_DEACTIVATED
#undef INTERNAL_FRAME_DEICONIFIED
#undef INTERNAL_FRAME_ICONIFIED
#undef INTERNAL_FRAME_OPENED
#undef IS_CLOSED_PROPERTY
#undef IS_ICON_PROPERTY
#undef IS_MAXIMUM_PROPERTY
#undef IS_SELECTED_PROPERTY
#undef LAYERED_PANE_PROPERTY
#undef MENU_BAR_PROPERTY
#undef NE_RESIZE_CURSOR
#undef NW_RESIZE_CURSOR
#undef N_RESIZE_CURSOR
#undef PROPERTY_CHANGE_LISTENER_KEY
#undef ROOT_PANE_PROPERTY
#undef SE_RESIZE_CURSOR
#undef SW_RESIZE_CURSOR
#undef S_RESIZE_CURSOR
#undef TITLE_PROPERTY
#undef TRUE
#undef W_RESIZE_CURSOR

using $ComponentArray = $Array<::java::awt::Component>;
using $InternalFrameListenerArray = $Array<::javax::swing::event::InternalFrameListener>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Graphics = ::java::awt::Graphics;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SecurityException = ::java::lang::SecurityException;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Icon = ::javax::swing::Icon;
using $InternalFrameFocusTraversalPolicy = ::javax::swing::InternalFrameFocusTraversalPolicy;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame$AccessibleJInternalFrame = ::javax::swing::JInternalFrame$AccessibleJInternalFrame;
using $JInternalFrame$FocusPropertyChangeListener = ::javax::swing::JInternalFrame$FocusPropertyChangeListener;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $WindowConstants = ::javax::swing::WindowConstants;
using $InternalFrameEvent = ::javax::swing::event::InternalFrameEvent;
using $InternalFrameListener = ::javax::swing::event::InternalFrameListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $InternalFrameUI = ::javax::swing::plaf::InternalFrameUI;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $UngrabEvent = ::sun::awt::UngrabEvent;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

$String* JInternalFrame::toString() {
	return this->$JComponent::toString();
}

int32_t JInternalFrame::hashCode() {
	return this->$JComponent::hashCode();
}

bool JInternalFrame::equals(Object$* arg0) {
	return this->$JComponent::equals(arg0);
}

$Object* JInternalFrame::clone() {
	return this->$JComponent::clone();
}

void JInternalFrame::finalize() {
	this->$JComponent::finalize();
}

$String* JInternalFrame::uiClassID = nullptr;
$String* JInternalFrame::CONTENT_PANE_PROPERTY = nullptr;
$String* JInternalFrame::MENU_BAR_PROPERTY = nullptr;
$String* JInternalFrame::TITLE_PROPERTY = nullptr;
$String* JInternalFrame::LAYERED_PANE_PROPERTY = nullptr;
$String* JInternalFrame::ROOT_PANE_PROPERTY = nullptr;
$String* JInternalFrame::GLASS_PANE_PROPERTY = nullptr;
$String* JInternalFrame::FRAME_ICON_PROPERTY = nullptr;
$String* JInternalFrame::IS_SELECTED_PROPERTY = nullptr;
$String* JInternalFrame::IS_CLOSED_PROPERTY = nullptr;
$String* JInternalFrame::IS_MAXIMUM_PROPERTY = nullptr;
$String* JInternalFrame::IS_ICON_PROPERTY = nullptr;
$Object* JInternalFrame::PROPERTY_CHANGE_LISTENER_KEY = nullptr;

void JInternalFrame::addPropertyChangeListenerIfNecessary() {
	$init(JInternalFrame);
	$useLocalObjectStack();
	if ($$nc($AppContext::getAppContext())->get(JInternalFrame::PROPERTY_CHANGE_LISTENER_KEY) == nullptr) {
		$var($PropertyChangeListener, focusListener, $new($JInternalFrame$FocusPropertyChangeListener));
		$$nc($AppContext::getAppContext())->put(JInternalFrame::PROPERTY_CHANGE_LISTENER_KEY, focusListener);
		$$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->addPropertyChangeListener(focusListener);
	}
}

void JInternalFrame::updateLastFocusOwner($Component* component) {
	$init(JInternalFrame);
	if (component != nullptr) {
		$var($Component, parent, component);
		while (parent != nullptr && !($instanceOf($Window, parent))) {
			if ($instanceOf(JInternalFrame, parent)) {
				$cast(JInternalFrame, parent)->setLastFocusOwner(component);
			}
			$assign(parent, parent->getParent());
		}
	}
}

void JInternalFrame::init$() {
	JInternalFrame::init$(""_s, false, false, false, false);
}

void JInternalFrame::init$($String* title) {
	JInternalFrame::init$(title, false, false, false, false);
}

void JInternalFrame::init$($String* title, bool resizable) {
	JInternalFrame::init$(title, resizable, false, false, false);
}

void JInternalFrame::init$($String* title, bool resizable, bool closable) {
	JInternalFrame::init$(title, resizable, closable, false, false);
}

void JInternalFrame::init$($String* title, bool resizable, bool closable, bool maximizable) {
	JInternalFrame::init$(title, resizable, closable, maximizable, false);
}

void JInternalFrame::init$($String* title, bool resizable, bool closable, bool maximizable, bool iconifiable) {
	$useLocalObjectStack();
	$JComponent::init$();
	this->rootPaneCheckingEnabled = false;
	$set(this, normalBounds, nullptr);
	this->defaultCloseOperation = $WindowConstants::DISPOSE_ON_CLOSE;
	this->isDragging = false;
	this->danger = false;
	setRootPane($(createRootPane()));
	setLayout($$new($BorderLayout));
	$set(this, title, title);
	this->resizable = resizable;
	this->closable = closable;
	this->maximizable = maximizable;
	this->isMaximum$ = false;
	this->iconable = iconifiable;
	this->isIcon$ = false;
	setVisible(false);
	setRootPaneCheckingEnabled(true);
	$set(this, desktopIcon, $new($JInternalFrame$JDesktopIcon, this));
	updateUI();
	$SunToolkit::checkAndSetPolicy(this);
	addPropertyChangeListenerIfNecessary();
}

$JRootPane* JInternalFrame::createRootPane() {
	return $new($JRootPane);
}

$ComponentUI* JInternalFrame::getUI() {
	return $cast($InternalFrameUI, this->ui);
}

void JInternalFrame::setUI($InternalFrameUI* ui) {
	bool checkingEnabled = isRootPaneCheckingEnabled();
	$var($Throwable, var$0, nullptr);
	try {
		setRootPaneCheckingEnabled(false);
		$JComponent::setUI(ui);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		setRootPaneCheckingEnabled(checkingEnabled);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void JInternalFrame::updateUI() {
	setUI($$cast($InternalFrameUI, $UIManager::getUI(this)));
	invalidate();
	if (this->desktopIcon != nullptr) {
		this->desktopIcon->updateUIWhenHidden();
	}
}

void JInternalFrame::updateUIWhenHidden() {
	$useLocalObjectStack();
	setUI($$cast($InternalFrameUI, $UIManager::getUI(this)));
	invalidate();
	$var($ComponentArray, children, getComponents());
	if (children != nullptr) {
		$var($ComponentArray, arr$, children);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Component, child, arr$->get(i$));
			{
				$SwingUtilities::updateComponentTreeUI(child);
			}
		}
	}
}

$String* JInternalFrame::getUIClassID() {
	return JInternalFrame::uiClassID;
}

bool JInternalFrame::isRootPaneCheckingEnabled() {
	return this->rootPaneCheckingEnabled;
}

void JInternalFrame::setRootPaneCheckingEnabled(bool enabled) {
	this->rootPaneCheckingEnabled = enabled;
}

void JInternalFrame::addImpl($Component* comp, Object$* constraints, int32_t index) {
	if (isRootPaneCheckingEnabled()) {
		$$nc(getContentPane())->add(comp, constraints, index);
	} else {
		$JComponent::addImpl(comp, constraints, index);
	}
}

void JInternalFrame::remove($Component* comp) {
	int32_t oldCount = getComponentCount();
	$JComponent::remove(comp);
	if (oldCount == getComponentCount()) {
		$$nc(getContentPane())->remove(comp);
	}
}

void JInternalFrame::setLayout($LayoutManager* manager) {
	if (isRootPaneCheckingEnabled()) {
		$$nc(getContentPane())->setLayout(manager);
	} else {
		$JComponent::setLayout(manager);
	}
}

$JMenuBar* JInternalFrame::getMenuBar() {
	return $$nc(getRootPane())->getMenuBar();
}

$JMenuBar* JInternalFrame::getJMenuBar() {
	return $$nc(getRootPane())->getJMenuBar();
}

void JInternalFrame::setMenuBar($JMenuBar* m) {
	$useLocalObjectStack();
	$var($JMenuBar, oldValue, getMenuBar());
	$$nc(getRootPane())->setJMenuBar(m);
	firePropertyChange(JInternalFrame::MENU_BAR_PROPERTY, oldValue, m);
}

void JInternalFrame::setJMenuBar($JMenuBar* m) {
	$useLocalObjectStack();
	$var($JMenuBar, oldValue, getMenuBar());
	$$nc(getRootPane())->setJMenuBar(m);
	firePropertyChange(JInternalFrame::MENU_BAR_PROPERTY, oldValue, m);
}

$Container* JInternalFrame::getContentPane() {
	return $$nc(getRootPane())->getContentPane();
}

void JInternalFrame::setContentPane($Container* c) {
	$useLocalObjectStack();
	$var($Container, oldValue, getContentPane());
	$$nc(getRootPane())->setContentPane(c);
	firePropertyChange(JInternalFrame::CONTENT_PANE_PROPERTY, oldValue, c);
}

$JLayeredPane* JInternalFrame::getLayeredPane() {
	return $$nc(getRootPane())->getLayeredPane();
}

void JInternalFrame::setLayeredPane($JLayeredPane* layered) {
	$useLocalObjectStack();
	$var($JLayeredPane, oldValue, getLayeredPane());
	$$nc(getRootPane())->setLayeredPane(layered);
	firePropertyChange(JInternalFrame::LAYERED_PANE_PROPERTY, oldValue, layered);
}

$Component* JInternalFrame::getGlassPane() {
	return $$nc(getRootPane())->getGlassPane();
}

void JInternalFrame::setGlassPane($Component* glass) {
	$useLocalObjectStack();
	$var($Component, oldValue, getGlassPane());
	$$nc(getRootPane())->setGlassPane(glass);
	firePropertyChange(JInternalFrame::GLASS_PANE_PROPERTY, oldValue, glass);
}

$JRootPane* JInternalFrame::getRootPane() {
	return this->rootPane;
}

void JInternalFrame::setRootPane($JRootPane* root) {
	$useLocalObjectStack();
	if (this->rootPane != nullptr) {
		remove(this->rootPane);
	}
	$var($JRootPane, oldValue, getRootPane());
	$set(this, rootPane, root);
	if (this->rootPane != nullptr) {
		bool checkingEnabled = isRootPaneCheckingEnabled();
		$var($Throwable, var$0, nullptr);
		try {
			setRootPaneCheckingEnabled(false);
			$init($BorderLayout);
			add(this->rootPane, $BorderLayout::CENTER);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			setRootPaneCheckingEnabled(checkingEnabled);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	firePropertyChange(JInternalFrame::ROOT_PANE_PROPERTY, oldValue, root);
}

void JInternalFrame::setClosable(bool b) {
	$useLocalObjectStack();
	$var($Boolean, oldValue, this->closable ? $Boolean::TRUE : $Boolean::FALSE);
	$var($Boolean, newValue, b ? $Boolean::TRUE : $Boolean::FALSE);
	this->closable = b;
	firePropertyChange("closable"_s, oldValue, newValue);
}

bool JInternalFrame::isClosable() {
	return this->closable;
}

bool JInternalFrame::isClosed() {
	return this->isClosed$;
}

void JInternalFrame::setClosed(bool b) {
	$useLocalObjectStack();
	if (this->isClosed$ == b) {
		return;
	}
	$var($Boolean, oldValue, this->isClosed$ ? $Boolean::TRUE : $Boolean::FALSE);
	$var($Boolean, newValue, b ? $Boolean::TRUE : $Boolean::FALSE);
	if (b) {
		fireInternalFrameEvent($InternalFrameEvent::INTERNAL_FRAME_CLOSING);
	}
	fireVetoableChange(JInternalFrame::IS_CLOSED_PROPERTY, oldValue, newValue);
	this->isClosed$ = b;
	if (this->isClosed$) {
		setVisible(false);
	}
	firePropertyChange(JInternalFrame::IS_CLOSED_PROPERTY, oldValue, newValue);
	if (this->isClosed$) {
		dispose();
	} else if (!this->opened) {
	}
}

void JInternalFrame::setResizable(bool b) {
	$useLocalObjectStack();
	$var($Boolean, oldValue, this->resizable ? $Boolean::TRUE : $Boolean::FALSE);
	$var($Boolean, newValue, b ? $Boolean::TRUE : $Boolean::FALSE);
	this->resizable = b;
	firePropertyChange("resizable"_s, oldValue, newValue);
}

bool JInternalFrame::isResizable() {
	return this->isMaximum$ ? false : this->resizable;
}

void JInternalFrame::setIconifiable(bool b) {
	$useLocalObjectStack();
	$var($Boolean, oldValue, this->iconable ? $Boolean::TRUE : $Boolean::FALSE);
	$var($Boolean, newValue, b ? $Boolean::TRUE : $Boolean::FALSE);
	this->iconable = b;
	firePropertyChange("iconable"_s, oldValue, newValue);
}

bool JInternalFrame::isIconifiable() {
	return this->iconable;
}

bool JInternalFrame::isIcon() {
	return this->isIcon$;
}

void JInternalFrame::setIcon(bool b) {
	$useLocalObjectStack();
	if (this->isIcon$ == b) {
		return;
	}
	firePropertyChange("ancestor"_s, nullptr, $(getParent()));
	$var($Boolean, oldValue, this->isIcon$ ? $Boolean::TRUE : $Boolean::FALSE);
	$var($Boolean, newValue, b ? $Boolean::TRUE : $Boolean::FALSE);
	fireVetoableChange(JInternalFrame::IS_ICON_PROPERTY, oldValue, newValue);
	this->isIcon$ = b;
	firePropertyChange(JInternalFrame::IS_ICON_PROPERTY, oldValue, newValue);
	if (b) {
		fireInternalFrameEvent($InternalFrameEvent::INTERNAL_FRAME_ICONIFIED);
	} else {
		fireInternalFrameEvent($InternalFrameEvent::INTERNAL_FRAME_DEICONIFIED);
	}
}

void JInternalFrame::setMaximizable(bool b) {
	$useLocalObjectStack();
	$var($Boolean, oldValue, this->maximizable ? $Boolean::TRUE : $Boolean::FALSE);
	$var($Boolean, newValue, b ? $Boolean::TRUE : $Boolean::FALSE);
	this->maximizable = b;
	firePropertyChange("maximizable"_s, oldValue, newValue);
}

bool JInternalFrame::isMaximizable() {
	return this->maximizable;
}

bool JInternalFrame::isMaximum() {
	return this->isMaximum$;
}

void JInternalFrame::setMaximum(bool b) {
	$useLocalObjectStack();
	if (this->isMaximum$ == b) {
		return;
	}
	$var($Boolean, oldValue, this->isMaximum$ ? $Boolean::TRUE : $Boolean::FALSE);
	$var($Boolean, newValue, b ? $Boolean::TRUE : $Boolean::FALSE);
	fireVetoableChange(JInternalFrame::IS_MAXIMUM_PROPERTY, oldValue, newValue);
	this->isMaximum$ = b;
	firePropertyChange(JInternalFrame::IS_MAXIMUM_PROPERTY, oldValue, newValue);
}

$String* JInternalFrame::getTitle() {
	return this->title;
}

void JInternalFrame::setTitle($String* title) {
	$var($String, oldValue, this->title);
	$set(this, title, title);
	firePropertyChange(JInternalFrame::TITLE_PROPERTY, oldValue, title);
}

void JInternalFrame::setSelected(bool selected) {
	$useLocalObjectStack();
	if (selected && this->isSelected$) {
		restoreSubcomponentFocus();
		return;
	}
	if ((this->isSelected$ == selected) || (selected && (this->isIcon$ ? !$nc(this->desktopIcon)->isShowing() : !isShowing()))) {
		return;
	}
	$var($Boolean, oldValue, this->isSelected$ ? $Boolean::TRUE : $Boolean::FALSE);
	$var($Boolean, newValue, selected ? $Boolean::TRUE : $Boolean::FALSE);
	fireVetoableChange(JInternalFrame::IS_SELECTED_PROPERTY, oldValue, newValue);
	if (selected) {
		restoreSubcomponentFocus();
	}
	this->isSelected$ = selected;
	firePropertyChange(JInternalFrame::IS_SELECTED_PROPERTY, oldValue, newValue);
	if (this->isSelected$) {
		fireInternalFrameEvent($InternalFrameEvent::INTERNAL_FRAME_ACTIVATED);
	} else {
		fireInternalFrameEvent($InternalFrameEvent::INTERNAL_FRAME_DEACTIVATED);
		try {
			$$nc($$nc($Toolkit::getDefaultToolkit())->getSystemEventQueue())->postEvent($$new($UngrabEvent, this));
		} catch ($SecurityException& e) {
			this->dispatchEvent($$new($UngrabEvent, this));
		}
	}
	repaint();
}

bool JInternalFrame::isSelected() {
	return this->isSelected$;
}

void JInternalFrame::setFrameIcon($Icon* icon) {
	$var($Icon, oldIcon, this->frameIcon);
	$set(this, frameIcon, icon);
	firePropertyChange(JInternalFrame::FRAME_ICON_PROPERTY, oldIcon, icon);
}

$Icon* JInternalFrame::getFrameIcon() {
	return this->frameIcon;
}

void JInternalFrame::moveToFront() {
	$useLocalObjectStack();
	if (isIcon()) {
		if ($instanceOf($JLayeredPane, $($$nc(getDesktopIcon())->getParent()))) {
			$$sure($JLayeredPane, $$nc(getDesktopIcon())->getParent())->moveToFront($(getDesktopIcon()));
		}
	} else if ($instanceOf($JLayeredPane, $(getParent()))) {
		$$sure($JLayeredPane, getParent())->moveToFront(this);
	}
}

void JInternalFrame::moveToBack() {
	$useLocalObjectStack();
	if (isIcon()) {
		if ($instanceOf($JLayeredPane, $($$nc(getDesktopIcon())->getParent()))) {
			$$sure($JLayeredPane, $$nc(getDesktopIcon())->getParent())->moveToBack($(getDesktopIcon()));
		}
	} else if ($instanceOf($JLayeredPane, $(getParent()))) {
		$$sure($JLayeredPane, getParent())->moveToBack(this);
	}
}

$Cursor* JInternalFrame::getLastCursor() {
	return this->lastCursor;
}

void JInternalFrame::setCursor($Cursor* cursor) {
	if (cursor == nullptr) {
		$set(this, lastCursor, nullptr);
		$JComponent::setCursor(cursor);
		return;
	}
	int32_t type = $nc(cursor)->getType();
	if (!(type == $Cursor::SW_RESIZE_CURSOR || type == $Cursor::SE_RESIZE_CURSOR || type == $Cursor::NW_RESIZE_CURSOR || type == $Cursor::NE_RESIZE_CURSOR || type == $Cursor::N_RESIZE_CURSOR || type == $Cursor::S_RESIZE_CURSOR || type == $Cursor::W_RESIZE_CURSOR || type == $Cursor::E_RESIZE_CURSOR)) {
		$set(this, lastCursor, cursor);
	}
	$JComponent::setCursor(cursor);
}

void JInternalFrame::setLayer($Integer* layer) {
	$useLocalObjectStack();
	bool var$0 = getParent() != nullptr;
	if (var$0 && $instanceOf($JLayeredPane, $(getParent()))) {
		$var($JLayeredPane, p, $cast($JLayeredPane, getParent()));
		int32_t var$1 = $nc(layer)->intValue();
		$nc(p)->setLayer(this, var$1, $nc(p)->getPosition(this));
	} else {
		$JLayeredPane::putLayer(this, $nc(layer)->intValue());
		if (getParent() != nullptr) {
			int32_t var$2 = getX();
			int32_t var$3 = getY();
			int32_t var$4 = getWidth();
			$$nc(getParent())->repaint(var$2, var$3, var$4, getHeight());
		}
	}
}

void JInternalFrame::setLayer(int32_t layer) {
	this->setLayer($($Integer::valueOf(layer)));
}

int32_t JInternalFrame::getLayer() {
	return $JLayeredPane::getLayer(this);
}

$JDesktopPane* JInternalFrame::getDesktopPane() {
	$useLocalObjectStack();
	$var($Container, p, nullptr);
	$assign(p, getParent());
	while (p != nullptr && !($instanceOf($JDesktopPane, p))) {
		$assign(p, p->getParent());
	}
	if (p == nullptr) {
		$assign(p, $$nc(getDesktopIcon())->getParent());
		while (p != nullptr && !($instanceOf($JDesktopPane, p))) {
			$assign(p, p->getParent());
		}
	}
	return $cast($JDesktopPane, p);
}

void JInternalFrame::setDesktopIcon($JInternalFrame$JDesktopIcon* d) {
	$var($JInternalFrame$JDesktopIcon, oldValue, getDesktopIcon());
	$set(this, desktopIcon, d);
	firePropertyChange("desktopIcon"_s, oldValue, d);
}

$JInternalFrame$JDesktopIcon* JInternalFrame::getDesktopIcon() {
	return this->desktopIcon;
}

$Rectangle* JInternalFrame::getNormalBounds() {
	if (this->normalBounds != nullptr) {
		return this->normalBounds;
	} else {
		return getBounds();
	}
}

void JInternalFrame::setNormalBounds($Rectangle* r) {
	$set(this, normalBounds, r);
}

$Component* JInternalFrame::getFocusOwner() {
	if (isSelected()) {
		return this->lastFocusOwner;
	}
	return nullptr;
}

$Component* JInternalFrame::getMostRecentFocusOwner() {
	$useLocalObjectStack();
	if (isSelected()) {
		return getFocusOwner();
	}
	if (this->lastFocusOwner != nullptr) {
		return this->lastFocusOwner;
	}
	$var($FocusTraversalPolicy, policy, getFocusTraversalPolicy());
	if ($instanceOf($InternalFrameFocusTraversalPolicy, policy)) {
		return $cast($InternalFrameFocusTraversalPolicy, policy)->getInitialComponent(this);
	}
	$var($Component, toFocus, $nc(policy)->getDefaultComponent(this));
	if (toFocus != nullptr) {
		return toFocus;
	}
	return getContentPane();
}

void JInternalFrame::restoreSubcomponentFocus() {
	$useLocalObjectStack();
	if (isIcon()) {
		$SwingUtilities2::compositeRequestFocus($(getDesktopIcon()));
	} else {
		$var($Component, component, $$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->getPermanentFocusOwner());
		if ((component == nullptr) || !$SwingUtilities::isDescendingFrom(component, this)) {
			setLastFocusOwner($(getMostRecentFocusOwner()));
			if (this->lastFocusOwner == nullptr) {
				setLastFocusOwner($(getContentPane()));
			}
			$nc(this->lastFocusOwner)->requestFocus();
		}
	}
}

void JInternalFrame::setLastFocusOwner($Component* component) {
	$set(this, lastFocusOwner, component);
}

void JInternalFrame::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	$JComponent::reshape(x, y, width, height);
	validate();
	repaint();
}

void JInternalFrame::addInternalFrameListener($InternalFrameListener* l) {
	$load($InternalFrameListener);
	$nc(this->listenerList)->add($InternalFrameListener::class$, l);
	enableEvents(0);
}

void JInternalFrame::removeInternalFrameListener($InternalFrameListener* l) {
	$load($InternalFrameListener);
	$nc(this->listenerList)->remove($InternalFrameListener::class$, l);
}

$InternalFrameListenerArray* JInternalFrame::getInternalFrameListeners() {
	$load($InternalFrameListener);
	return $cast($InternalFrameListenerArray, $nc(this->listenerList)->getListeners($InternalFrameListener::class$));
}

void JInternalFrame::fireInternalFrameEvent(int32_t id) {
	$useLocalObjectStack();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($InternalFrameEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($InternalFrameListener);
		if ($equals(listeners->get(i), $InternalFrameListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($InternalFrameEvent, this, id));
			}
			switch ($nc(e)->getID()) {
			case $InternalFrameEvent::INTERNAL_FRAME_OPENED:
				$nc($cast($InternalFrameListener, listeners->get(i + 1)))->internalFrameOpened(e);
				break;
			case $InternalFrameEvent::INTERNAL_FRAME_CLOSING:
				$nc($cast($InternalFrameListener, listeners->get(i + 1)))->internalFrameClosing(e);
				break;
			case $InternalFrameEvent::INTERNAL_FRAME_CLOSED:
				$nc($cast($InternalFrameListener, listeners->get(i + 1)))->internalFrameClosed(e);
				break;
			case $InternalFrameEvent::INTERNAL_FRAME_ICONIFIED:
				$nc($cast($InternalFrameListener, listeners->get(i + 1)))->internalFrameIconified(e);
				break;
			case $InternalFrameEvent::INTERNAL_FRAME_DEICONIFIED:
				$nc($cast($InternalFrameListener, listeners->get(i + 1)))->internalFrameDeiconified(e);
				break;
			case $InternalFrameEvent::INTERNAL_FRAME_ACTIVATED:
				$nc($cast($InternalFrameListener, listeners->get(i + 1)))->internalFrameActivated(e);
				break;
			case $InternalFrameEvent::INTERNAL_FRAME_DEACTIVATED:
				$nc($cast($InternalFrameListener, listeners->get(i + 1)))->internalFrameDeactivated(e);
				break;
			default:
				break;
			}
		}
	}
}

void JInternalFrame::doDefaultCloseAction() {
	fireInternalFrameEvent($InternalFrameEvent::INTERNAL_FRAME_CLOSING);
	switch (this->defaultCloseOperation) {
	case $WindowConstants::DO_NOTHING_ON_CLOSE:
		break;
	case $WindowConstants::HIDE_ON_CLOSE:
		setVisible(false);
		if (isSelected()) {
			try {
				setSelected(false);
			} catch ($PropertyVetoException& pve) {
			}
		}
		break;
	case $WindowConstants::DISPOSE_ON_CLOSE:
		try {
			fireVetoableChange(JInternalFrame::IS_CLOSED_PROPERTY, $Boolean::FALSE, $Boolean::TRUE);
			this->isClosed$ = true;
			setVisible(false);
			firePropertyChange(JInternalFrame::IS_CLOSED_PROPERTY, $Boolean::FALSE, $Boolean::TRUE);
			dispose();
		} catch ($PropertyVetoException& pve) {
		}
		break;
	default:
		break;
	}
}

void JInternalFrame::setDefaultCloseOperation(int32_t operation) {
	this->defaultCloseOperation = operation;
}

int32_t JInternalFrame::getDefaultCloseOperation() {
	return this->defaultCloseOperation;
}

void JInternalFrame::pack() {
	try {
		if (isIcon()) {
			setIcon(false);
		} else if (isMaximum()) {
			setMaximum(false);
		}
	} catch ($PropertyVetoException& e) {
		return;
	}
	setSize($(getPreferredSize()));
	validate();
}

void JInternalFrame::show() {
	if (isVisible()) {
		return;
	}
	if (!this->opened) {
		fireInternalFrameEvent($InternalFrameEvent::INTERNAL_FRAME_OPENED);
		this->opened = true;
	}
	$$nc(getDesktopIcon())->setVisible(true);
	toFront();
	$JComponent::show();
	if (this->isIcon$) {
		return;
	}
	if (!isSelected()) {
		try {
			setSelected(true);
		} catch ($PropertyVetoException& pve) {
		}
	}
}

void JInternalFrame::hide() {
	if (isIcon()) {
		$$nc(getDesktopIcon())->setVisible(false);
	}
	$JComponent::hide();
}

void JInternalFrame::dispose() {
	$useLocalObjectStack();
	if (isVisible()) {
		setVisible(false);
	}
	if (!this->isClosed$) {
		firePropertyChange(JInternalFrame::IS_CLOSED_PROPERTY, $Boolean::FALSE, $Boolean::TRUE);
		this->isClosed$ = true;
	}
	fireInternalFrameEvent($InternalFrameEvent::INTERNAL_FRAME_CLOSED);
	try {
		$$nc($$nc($Toolkit::getDefaultToolkit())->getSystemEventQueue())->postEvent($$new($UngrabEvent, this));
	} catch ($SecurityException& e) {
		this->dispatchEvent($$new($UngrabEvent, this));
	}
}

void JInternalFrame::toFront() {
	moveToFront();
}

void JInternalFrame::toBack() {
	moveToBack();
}

void JInternalFrame::setFocusCycleRoot(bool focusCycleRoot) {
}

bool JInternalFrame::isFocusCycleRoot() {
	return true;
}

$Container* JInternalFrame::getFocusCycleRootAncestor() {
	return nullptr;
}

$String* JInternalFrame::getWarningString() {
	return nullptr;
}

void JInternalFrame::writeObject($ObjectOutputStream* s) {
	$useLocalObjectStack();
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JInternalFrame::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			bool old = isRootPaneCheckingEnabled();
			$var($Throwable, var$0, nullptr);
			try {
				setRootPaneCheckingEnabled(false);
				$nc(this->ui)->installUI(this);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				setRootPaneCheckingEnabled(old);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void JInternalFrame::compWriteObjectNotify() {
	bool old = isRootPaneCheckingEnabled();
	$var($Throwable, var$0, nullptr);
	try {
		setRootPaneCheckingEnabled(false);
		$JComponent::compWriteObjectNotify();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		setRootPaneCheckingEnabled(old);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$String* JInternalFrame::paramString() {
	$useLocalObjectStack();
	$var($String, rootPaneString, this->rootPane != nullptr ? this->rootPane->toString() : ""_s);
	$var($String, rootPaneCheckingEnabledString, this->rootPaneCheckingEnabled ? "true"_s : "false"_s);
	$var($String, closableString, this->closable ? "true"_s : "false"_s);
	$var($String, isClosedString, this->isClosed$ ? "true"_s : "false"_s);
	$var($String, maximizableString, this->maximizable ? "true"_s : "false"_s);
	$var($String, isMaximumString, this->isMaximum$ ? "true"_s : "false"_s);
	$var($String, iconableString, this->iconable ? "true"_s : "false"_s);
	$var($String, isIconString, this->isIcon$ ? "true"_s : "false"_s);
	$var($String, resizableString, this->resizable ? "true"_s : "false"_s);
	$var($String, isSelectedString, this->isSelected$ ? "true"_s : "false"_s);
	$var($String, frameIconString, this->frameIcon != nullptr ? this->frameIcon->toString() : ""_s);
	$var($String, titleString, this->title != nullptr ? this->title : ""_s);
	$var($String, desktopIconString, this->desktopIcon != nullptr ? this->desktopIcon->toString() : ""_s);
	$var($String, openedString, this->opened ? "true"_s : "false"_s);
	$var($String, defaultCloseOperationString, nullptr);
	if (this->defaultCloseOperation == $WindowConstants::HIDE_ON_CLOSE) {
		$assign(defaultCloseOperationString, "HIDE_ON_CLOSE"_s);
	} else if (this->defaultCloseOperation == $WindowConstants::DISPOSE_ON_CLOSE) {
		$assign(defaultCloseOperationString, "DISPOSE_ON_CLOSE"_s);
	} else if (this->defaultCloseOperation == $WindowConstants::DO_NOTHING_ON_CLOSE) {
		$assign(defaultCloseOperationString, "DO_NOTHING_ON_CLOSE"_s);
	} else {
		$assign(defaultCloseOperationString, ""_s);
	}
	return $str({$($JComponent::paramString()), ",closable="_s, closableString, ",defaultCloseOperation="_s, defaultCloseOperationString, ",desktopIcon="_s, desktopIconString, ",frameIcon="_s, frameIconString, ",iconable="_s, iconableString, ",isClosed="_s, isClosedString, ",isIcon="_s, isIconString, ",isMaximum="_s, 
	isMaximumString, ",isSelected="_s, isSelectedString, ",maximizable="_s, maximizableString, ",opened="_s, openedString, ",resizable="_s, resizableString, ",rootPane="_s, rootPaneString, ",rootPaneCheckingEnabled="_s, rootPaneCheckingEnabledString, ",title="_s, titleString});
}

void JInternalFrame::paintComponent($Graphics* g) {
	if (this->isDragging) {
		this->danger = true;
	}
	$JComponent::paintComponent(g);
}

$AccessibleContext* JInternalFrame::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JInternalFrame$AccessibleJInternalFrame, this));
	}
	return this->accessibleContext;
}

void JInternalFrame::clinit$($Class* clazz) {
	$assignStatic(JInternalFrame::uiClassID, "InternalFrameUI"_s);
	$assignStatic(JInternalFrame::CONTENT_PANE_PROPERTY, "contentPane"_s);
	$assignStatic(JInternalFrame::MENU_BAR_PROPERTY, "JMenuBar"_s);
	$assignStatic(JInternalFrame::TITLE_PROPERTY, "title"_s);
	$assignStatic(JInternalFrame::LAYERED_PANE_PROPERTY, "layeredPane"_s);
	$assignStatic(JInternalFrame::ROOT_PANE_PROPERTY, "rootPane"_s);
	$assignStatic(JInternalFrame::GLASS_PANE_PROPERTY, "glassPane"_s);
	$assignStatic(JInternalFrame::FRAME_ICON_PROPERTY, "frameIcon"_s);
	$assignStatic(JInternalFrame::IS_SELECTED_PROPERTY, "selected"_s);
	$assignStatic(JInternalFrame::IS_CLOSED_PROPERTY, "closed"_s);
	$assignStatic(JInternalFrame::IS_MAXIMUM_PROPERTY, "maximum"_s);
	$assignStatic(JInternalFrame::IS_ICON_PROPERTY, "icon"_s);
	$assignStatic(JInternalFrame::PROPERTY_CHANGE_LISTENER_KEY, $new($StringBuilder, "InternalFramePropertyChangeListener"_s));
}

JInternalFrame::JInternalFrame() {
}

$Class* JInternalFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JInternalFrame, uiClassID)},
		{"rootPane", "Ljavax/swing/JRootPane;", nullptr, $PROTECTED, $field(JInternalFrame, rootPane)},
		{"rootPaneCheckingEnabled", "Z", nullptr, $PROTECTED, $field(JInternalFrame, rootPaneCheckingEnabled)},
		{"closable", "Z", nullptr, $PROTECTED, $field(JInternalFrame, closable)},
		{"isClosed", "Z", nullptr, $PROTECTED, $field(JInternalFrame, isClosed$)},
		{"maximizable", "Z", nullptr, $PROTECTED, $field(JInternalFrame, maximizable)},
		{"isMaximum", "Z", nullptr, $PROTECTED, $field(JInternalFrame, isMaximum$)},
		{"iconable", "Z", nullptr, $PROTECTED, $field(JInternalFrame, iconable)},
		{"isIcon", "Z", nullptr, $PROTECTED, $field(JInternalFrame, isIcon$)},
		{"resizable", "Z", nullptr, $PROTECTED, $field(JInternalFrame, resizable)},
		{"isSelected", "Z", nullptr, $PROTECTED, $field(JInternalFrame, isSelected$)},
		{"frameIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(JInternalFrame, frameIcon)},
		{"title", "Ljava/lang/String;", nullptr, $PROTECTED, $field(JInternalFrame, title)},
		{"desktopIcon", "Ljavax/swing/JInternalFrame$JDesktopIcon;", nullptr, $PROTECTED, $field(JInternalFrame, desktopIcon)},
		{"lastCursor", "Ljava/awt/Cursor;", nullptr, $PRIVATE, $field(JInternalFrame, lastCursor)},
		{"opened", "Z", nullptr, $PRIVATE, $field(JInternalFrame, opened)},
		{"normalBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(JInternalFrame, normalBounds)},
		{"defaultCloseOperation", "I", nullptr, $PRIVATE, $field(JInternalFrame, defaultCloseOperation)},
		{"lastFocusOwner", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(JInternalFrame, lastFocusOwner)},
		{"CONTENT_PANE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, CONTENT_PANE_PROPERTY)},
		{"MENU_BAR_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, MENU_BAR_PROPERTY)},
		{"TITLE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, TITLE_PROPERTY)},
		{"LAYERED_PANE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, LAYERED_PANE_PROPERTY)},
		{"ROOT_PANE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, ROOT_PANE_PROPERTY)},
		{"GLASS_PANE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, GLASS_PANE_PROPERTY)},
		{"FRAME_ICON_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, FRAME_ICON_PROPERTY)},
		{"IS_SELECTED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, IS_SELECTED_PROPERTY)},
		{"IS_CLOSED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, IS_CLOSED_PROPERTY)},
		{"IS_MAXIMUM_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, IS_MAXIMUM_PROPERTY)},
		{"IS_ICON_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, IS_ICON_PROPERTY)},
		{"PROPERTY_CHANGE_LISTENER_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JInternalFrame, PROPERTY_CHANGE_LISTENER_KEY)},
		{"isDragging", "Z", nullptr, 0, $field(JInternalFrame, isDragging)},
		{"danger", "Z", nullptr, 0, $field(JInternalFrame, danger)},
		{}
	};
	$NamedAttribute getAccessibleContextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getAccessibleContextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAccessibleContextmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getDesktopPanemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getDesktopPanemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getDesktopPanemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getFocusCycleRootAncestormethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getFocusCycleRootAncestormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getFocusCycleRootAncestormethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getInternalFrameListenersmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getInternalFrameListenersmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getInternalFrameListenersmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getLastCursormethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getLastCursormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getLastCursormethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute getMenuBarmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$NamedAttribute getMostRecentFocusOwnermethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getMostRecentFocusOwnermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getMostRecentFocusOwnermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getRootPanemethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"description", 's', "The root pane used by this internal frame."},
		{}
	};
	$CompoundAttribute getRootPanemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getRootPanemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "UIClassID"},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getWarningStringmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getWarningStringmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getWarningStringmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setClosablemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "Indicates whether this internal frame can be closed."},
		{}
	};
	$CompoundAttribute setClosablemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setClosablemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setClosedmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Indicates whether this internal frame has been closed."},
		{}
	};
	$CompoundAttribute setClosedmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setClosedmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setContentPanemethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"description", 's', "The client area of the internal frame where child components are normally inserted."},
		{}
	};
	$CompoundAttribute setContentPanemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setContentPanemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setDesktopIconmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The icon shown when this internal frame is minimized."},
		{}
	};
	$CompoundAttribute setDesktopIconmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDesktopIconmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setFrameIconmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The icon shown in the top-left corner of this internal frame."},
		{}
	};
	$CompoundAttribute setFrameIconmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setFrameIconmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setGlassPanemethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"description", 's', "A transparent pane used for menu rendering."},
		{}
	};
	$CompoundAttribute setGlassPanemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setGlassPanemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setIconmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The image displayed when this internal frame is minimized."},
		{}
	};
	$CompoundAttribute setIconmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setIconmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setIconifiablemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "Determines whether this internal frame can be iconified."},
		{}
	};
	$CompoundAttribute setIconifiablemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setIconifiablemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setJMenuBarmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The menu bar for accessing pulldown menus from this internal frame."},
		{}
	};
	$CompoundAttribute setJMenuBarmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setJMenuBarmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setLayermethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "Specifies what desktop layer is used."},
		{}
	};
	$CompoundAttribute setLayermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setLayermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setLayermethodAnnotations$$$1$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "Specifies what desktop layer is used."},
		{}
	};
	$CompoundAttribute setLayermethodAnnotations$$$1[] = {
		{"Ljava/beans/BeanProperty;", setLayermethodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute setLayeredPanemethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"description", 's', "The pane which holds the various desktop layers."},
		{}
	};
	$CompoundAttribute setLayeredPanemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setLayeredPanemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMaximizablemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "Determines whether this internal frame can be maximized."},
		{}
	};
	$CompoundAttribute setMaximizablemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMaximizablemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMaximummethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Indicates whether this internal frame is maximized."},
		{}
	};
	$CompoundAttribute setMaximummethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMaximummethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute setMenuBarmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$NamedAttribute setResizablemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "Determines whether this internal frame can be resized by the user."},
		{}
	};
	$CompoundAttribute setResizablemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setResizablemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setRootPaneCheckingEnabledmethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"description", 's', "Whether the add and setLayout methods are forwarded"},
		{}
	};
	$CompoundAttribute setRootPaneCheckingEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setRootPaneCheckingEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSelectedmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Indicates whether this internal frame is currently the active frame."},
		{}
	};
	$CompoundAttribute setSelectedmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSelectedmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setTitlemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The text displayed in the title bar."},
		{}
	};
	$CompoundAttribute setTitlemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setTitlemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setUImethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
		{}
	};
	$CompoundAttribute setUImethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setUImethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JInternalFrame, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JInternalFrame, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(JInternalFrame, init$, void, $String*, bool)},
		{"<init>", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, $method(JInternalFrame, init$, void, $String*, bool, bool)},
		{"<init>", "(Ljava/lang/String;ZZZ)V", nullptr, $PUBLIC, $method(JInternalFrame, init$, void, $String*, bool, bool, bool)},
		{"<init>", "(Ljava/lang/String;ZZZZ)V", nullptr, $PUBLIC, $method(JInternalFrame, init$, void, $String*, bool, bool, bool, bool)},
		{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED, $virtualMethod(JInternalFrame, addImpl, void, $Component*, Object$*, int32_t)},
		{"addInternalFrameListener", "(Ljavax/swing/event/InternalFrameListener;)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, addInternalFrameListener, void, $InternalFrameListener*)},
		{"addPropertyChangeListenerIfNecessary", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(JInternalFrame, addPropertyChangeListenerIfNecessary, void)},
		{"compWriteObjectNotify", "()V", nullptr, 0, $virtualMethod(JInternalFrame, compWriteObjectNotify, void)},
		{"createRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PROTECTED, $virtualMethod(JInternalFrame, createRootPane, $JRootPane*)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, dispose, void)},
		{"doDefaultCloseAction", "()V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, doDefaultCloseAction, void)},
		{"fireInternalFrameEvent", "(I)V", nullptr, $PROTECTED, $virtualMethod(JInternalFrame, fireInternalFrameEvent, void, int32_t)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getContentPane", "()Ljava/awt/Container;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getContentPane, $Container*)},
		{"getDefaultCloseOperation", "()I", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getDefaultCloseOperation, int32_t)},
		{"getDesktopIcon", "()Ljavax/swing/JInternalFrame$JDesktopIcon;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getDesktopIcon, $JInternalFrame$JDesktopIcon*)},
		{"getDesktopPane", "()Ljavax/swing/JDesktopPane;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getDesktopPane, $JDesktopPane*), nullptr, nullptr, getDesktopPanemethodAnnotations$$},
		{"getFocusCycleRootAncestor", "()Ljava/awt/Container;", nullptr, $PUBLIC | $FINAL, $virtualMethod(JInternalFrame, getFocusCycleRootAncestor, $Container*), nullptr, nullptr, getFocusCycleRootAncestormethodAnnotations$$},
		{"getFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getFocusOwner, $Component*)},
		{"getFrameIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getFrameIcon, $Icon*)},
		{"getGlassPane", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getGlassPane, $Component*)},
		{"getInternalFrameListeners", "()[Ljavax/swing/event/InternalFrameListener;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getInternalFrameListeners, $InternalFrameListenerArray*), nullptr, nullptr, getInternalFrameListenersmethodAnnotations$$},
		{"getJMenuBar", "()Ljavax/swing/JMenuBar;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getJMenuBar, $JMenuBar*)},
		{"getLastCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getLastCursor, $Cursor*), nullptr, nullptr, getLastCursormethodAnnotations$$},
		{"getLayer", "()I", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getLayer, int32_t)},
		{"getLayeredPane", "()Ljavax/swing/JLayeredPane;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getLayeredPane, $JLayeredPane*)},
		{"getMenuBar", "()Ljavax/swing/JMenuBar;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(JInternalFrame, getMenuBar, $JMenuBar*), nullptr, nullptr, getMenuBarmethodAnnotations$$},
		{"getMostRecentFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getMostRecentFocusOwner, $Component*), nullptr, nullptr, getMostRecentFocusOwnermethodAnnotations$$},
		{"getNormalBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getNormalBounds, $Rectangle*)},
		{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getRootPane, $JRootPane*), nullptr, nullptr, getRootPanemethodAnnotations$$},
		{"getTitle", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getTitle, $String*)},
		{"getUI", "()Ljavax/swing/plaf/InternalFrameUI;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getUI, $ComponentUI*)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"getWarningString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(JInternalFrame, getWarningString, $String*), nullptr, nullptr, getWarningStringmethodAnnotations$$},
		{"hide", "()V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, hide, void)},
		{"isClosable", "()Z", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, isClosable, bool)},
		{"isClosed", "()Z", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, isClosed, bool)},
		{"isFocusCycleRoot", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(JInternalFrame, isFocusCycleRoot, bool)},
		{"isIcon", "()Z", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, isIcon, bool)},
		{"isIconifiable", "()Z", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, isIconifiable, bool)},
		{"isMaximizable", "()Z", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, isMaximizable, bool)},
		{"isMaximum", "()Z", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, isMaximum, bool)},
		{"isResizable", "()Z", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, isResizable, bool)},
		{"isRootPaneCheckingEnabled", "()Z", nullptr, $PROTECTED, $virtualMethod(JInternalFrame, isRootPaneCheckingEnabled, bool)},
		{"isSelected", "()Z", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, isSelected, bool)},
		{"moveToBack", "()V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, moveToBack, void)},
		{"moveToFront", "()V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, moveToFront, void)},
		{"pack", "()V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, pack, void)},
		{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(JInternalFrame, paintComponent, void, $Graphics*)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JInternalFrame, paramString, $String*)},
		{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, remove, void, $Component*)},
		{"removeInternalFrameListener", "(Ljavax/swing/event/InternalFrameListener;)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, removeInternalFrameListener, void, $InternalFrameListener*)},
		{"reshape", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, reshape, void, int32_t, int32_t, int32_t, int32_t)},
		{"restoreSubcomponentFocus", "()V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, restoreSubcomponentFocus, void)},
		{"setClosable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setClosable, void, bool), nullptr, nullptr, setClosablemethodAnnotations$$},
		{"setClosed", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setClosed, void, bool), "java.beans.PropertyVetoException", nullptr, setClosedmethodAnnotations$$},
		{"setContentPane", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setContentPane, void, $Container*), nullptr, nullptr, setContentPanemethodAnnotations$$},
		{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setCursor, void, $Cursor*)},
		{"setDefaultCloseOperation", "(I)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setDefaultCloseOperation, void, int32_t)},
		{"setDesktopIcon", "(Ljavax/swing/JInternalFrame$JDesktopIcon;)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setDesktopIcon, void, $JInternalFrame$JDesktopIcon*), nullptr, nullptr, setDesktopIconmethodAnnotations$$},
		{"setFocusCycleRoot", "(Z)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(JInternalFrame, setFocusCycleRoot, void, bool)},
		{"setFrameIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setFrameIcon, void, $Icon*), nullptr, nullptr, setFrameIconmethodAnnotations$$},
		{"setGlassPane", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setGlassPane, void, $Component*), nullptr, nullptr, setGlassPanemethodAnnotations$$},
		{"setIcon", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setIcon, void, bool), "java.beans.PropertyVetoException", nullptr, setIconmethodAnnotations$$},
		{"setIconifiable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setIconifiable, void, bool), nullptr, nullptr, setIconifiablemethodAnnotations$$},
		{"setJMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setJMenuBar, void, $JMenuBar*), nullptr, nullptr, setJMenuBarmethodAnnotations$$},
		{"setLastFocusOwner", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(JInternalFrame, setLastFocusOwner, void, $Component*)},
		{"setLayer", "(Ljava/lang/Integer;)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setLayer, void, $Integer*), nullptr, nullptr, setLayermethodAnnotations$$},
		{"setLayer", "(I)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setLayer, void, int32_t), nullptr, nullptr, setLayermethodAnnotations$$$1},
		{"setLayeredPane", "(Ljavax/swing/JLayeredPane;)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setLayeredPane, void, $JLayeredPane*), nullptr, nullptr, setLayeredPanemethodAnnotations$$},
		{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setLayout, void, $LayoutManager*)},
		{"setMaximizable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setMaximizable, void, bool), nullptr, nullptr, setMaximizablemethodAnnotations$$},
		{"setMaximum", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setMaximum, void, bool), "java.beans.PropertyVetoException", nullptr, setMaximummethodAnnotations$$},
		{"setMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(JInternalFrame, setMenuBar, void, $JMenuBar*), nullptr, nullptr, setMenuBarmethodAnnotations$$},
		{"setNormalBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setNormalBounds, void, $Rectangle*)},
		{"setResizable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setResizable, void, bool), nullptr, nullptr, setResizablemethodAnnotations$$},
		{"setRootPane", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED, $virtualMethod(JInternalFrame, setRootPane, void, $JRootPane*)},
		{"setRootPaneCheckingEnabled", "(Z)V", nullptr, $PROTECTED, $virtualMethod(JInternalFrame, setRootPaneCheckingEnabled, void, bool), nullptr, nullptr, setRootPaneCheckingEnabledmethodAnnotations$$},
		{"setSelected", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setSelected, void, bool), "java.beans.PropertyVetoException", nullptr, setSelectedmethodAnnotations$$},
		{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setTitle, void, $String*), nullptr, nullptr, setTitlemethodAnnotations$$},
		{"setUI", "(Ljavax/swing/plaf/InternalFrameUI;)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, setUI, void, $InternalFrameUI*), nullptr, nullptr, setUImethodAnnotations$$},
		{"show", "()V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, show, void)},
		{"toBack", "()V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, toBack, void)},
		{"toFront", "()V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, toFront, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateLastFocusOwner", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JInternalFrame, updateLastFocusOwner, void, $Component*)},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JInternalFrame, updateUI, void)},
		{"updateUIWhenHidden", "()V", nullptr, 0, $virtualMethod(JInternalFrame, updateUIWhenHidden, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JInternalFrame, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JInternalFrame$JDesktopIcon", "javax.swing.JInternalFrame", "JDesktopIcon", $PUBLIC | $STATIC},
		{"javax.swing.JInternalFrame$AccessibleJInternalFrame", "javax.swing.JInternalFrame", "AccessibleJInternalFrame", $PROTECTED},
		{"javax.swing.JInternalFrame$FocusPropertyChangeListener", "javax.swing.JInternalFrame", "FocusPropertyChangeListener", $PRIVATE | $STATIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "JMenuBar"},
		{"description", 's', "A frame container which is contained within another window."},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"delegate", 's', "getContentPane"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{"Ljavax/swing/SwingContainer;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JInternalFrame",
		"javax.swing.JComponent",
		"javax.accessibility.Accessible,javax.swing.WindowConstants,javax.swing.RootPaneContainer",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JInternalFrame$JDesktopIcon,javax.swing.JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon,javax.swing.JInternalFrame$AccessibleJInternalFrame,javax.swing.JInternalFrame$FocusPropertyChangeListener"
	};
	$loadClass(JInternalFrame, name, initialize, &classInfo$$, JInternalFrame::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JInternalFrame));
	});
	return class$;
}

$Class* JInternalFrame::class$ = nullptr;

	} // swing
} // javax