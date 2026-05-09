#include <javax/swing/JMenuItem.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JMenuItem$AccessibleJMenuItem.h>
#include <javax/swing/JMenuItem$MenuItemFocusListener.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/MenuDragMouseEvent.h>
#include <javax/swing/event/MenuDragMouseListener.h>
#include <javax/swing/event/MenuKeyEvent.h>
#include <javax/swing/event/MenuKeyListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <jcpp.h>

#undef ACCELERATOR_KEY
#undef DEBUG
#undef FALSE
#undef KEY_PRESSED
#undef KEY_RELEASED
#undef KEY_TYPED
#undef LEADING
#undef MOUSE_DRAGGED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_RELEASED
#undef SMALL_ICON
#undef TRACE
#undef TRAILING
#undef VERBOSE

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $MenuDragMouseListenerArray = $Array<::javax::swing::event::MenuDragMouseListener>;
using $MenuKeyListenerArray = $Array<::javax::swing::event::MenuKeyListener>;
using $Component = ::java::awt::Component;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ButtonModel = ::javax::swing::ButtonModel;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JMenuItem$AccessibleJMenuItem = ::javax::swing::JMenuItem$AccessibleJMenuItem;
using $JMenuItem$MenuItemFocusListener = ::javax::swing::JMenuItem$MenuItemFocusListener;
using $KeyStroke = ::javax::swing::KeyStroke;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $MenuDragMouseEvent = ::javax::swing::event::MenuDragMouseEvent;
using $MenuDragMouseListener = ::javax::swing::event::MenuDragMouseListener;
using $MenuKeyEvent = ::javax::swing::event::MenuKeyEvent;
using $MenuKeyListener = ::javax::swing::event::MenuKeyListener;
using $MenuItemUI = ::javax::swing::plaf::MenuItemUI;

namespace javax {
	namespace swing {

$String* JMenuItem::toString() {
	return this->$AbstractButton::toString();
}

int32_t JMenuItem::hashCode() {
	return this->$AbstractButton::hashCode();
}

bool JMenuItem::equals(Object$* arg0) {
	return this->$AbstractButton::equals(arg0);
}

$Object* JMenuItem::clone() {
	return this->$AbstractButton::clone();
}

void JMenuItem::finalize() {
	this->$AbstractButton::finalize();
}

$String* JMenuItem::uiClassID = nullptr;

void JMenuItem::init$() {
	JMenuItem::init$(nullptr, ($Icon*)nullptr);
}

void JMenuItem::init$($Icon* icon) {
	JMenuItem::init$(nullptr, icon);
}

void JMenuItem::init$($String* text) {
	JMenuItem::init$(text, ($Icon*)nullptr);
}

void JMenuItem::init$($Action* a) {
	JMenuItem::init$();
	setAction(a);
}

void JMenuItem::init$($String* text, $Icon* icon) {
	$AbstractButton::init$();
	this->isMouseDragged = false;
	setModel($$new($DefaultButtonModel));
	init(text, icon);
	initFocusability();
}

void JMenuItem::init$($String* text, int32_t mnemonic) {
	$AbstractButton::init$();
	this->isMouseDragged = false;
	setModel($$new($DefaultButtonModel));
	init(text, nullptr);
	setMnemonic(mnemonic);
	initFocusability();
}

void JMenuItem::setModel($ButtonModel* newModel) {
	$AbstractButton::setModel(newModel);
	if ($instanceOf($DefaultButtonModel, newModel)) {
		$cast($DefaultButtonModel, newModel)->setMenuItem(true);
	}
}

void JMenuItem::initFocusability() {
	setFocusable(false);
}

void JMenuItem::init($String* text, $Icon* icon) {
	if (text != nullptr) {
		setText(text);
	}
	if (icon != nullptr) {
		setIcon(icon);
	}
	addFocusListener($$new($JMenuItem$MenuItemFocusListener));
	setUIProperty("borderPainted"_s, $Boolean::FALSE);
	setFocusPainted(false);
	setHorizontalTextPosition($JButton::TRAILING);
	setHorizontalAlignment($JButton::LEADING);
	updateUI();
}

void JMenuItem::setUI($MenuItemUI* ui) {
	$AbstractButton::setUI(ui);
}

void JMenuItem::updateUI() {
	setUI($$cast($MenuItemUI, $UIManager::getUI(this)));
}

$String* JMenuItem::getUIClassID() {
	return JMenuItem::uiClassID;
}

void JMenuItem::setArmed(bool b) {
	$var($ButtonModel, model, getModel());
	bool oldValue = $nc(model)->isArmed();
	if (model->isArmed() != b) {
		model->setArmed(b);
	}
}

bool JMenuItem::isArmed() {
	$var($ButtonModel, model, getModel());
	return $nc(model)->isArmed();
}

void JMenuItem::setEnabled(bool b) {
	if (!b && !$UIManager::getBoolean("MenuItem.disabledAreNavigable"_s)) {
		setArmed(false);
	}
	$AbstractButton::setEnabled(b);
}

bool JMenuItem::alwaysOnTop() {
	$load($JInternalFrame);
	if ($SwingUtilities::getAncestorOfClass($JInternalFrame::class$, this) != nullptr) {
		return false;
	}
	return true;
}

void JMenuItem::setAccelerator($KeyStroke* keyStroke) {
	$var($KeyStroke, oldAccelerator, this->accelerator);
	$set(this, accelerator, keyStroke);
	repaint();
	revalidate();
	firePropertyChange("accelerator"_s, oldAccelerator, this->accelerator);
}

$KeyStroke* JMenuItem::getAccelerator() {
	return this->accelerator;
}

void JMenuItem::configurePropertiesFromAction($Action* a) {
	$AbstractButton::configurePropertiesFromAction(a);
	configureAcceleratorFromAction(a);
}

void JMenuItem::setIconFromAction($Action* a) {
	$var($Icon, icon, nullptr);
	if (a != nullptr) {
		$init($Action);
		$assign(icon, $cast($Icon, a->getValue($Action::SMALL_ICON)));
	}
	setIcon(icon);
}

void JMenuItem::largeIconChanged($Action* a) {
}

void JMenuItem::smallIconChanged($Action* a) {
	setIconFromAction(a);
}

void JMenuItem::configureAcceleratorFromAction($Action* a) {
	$init($Action);
	$var($KeyStroke, ks, (a == nullptr) ? ($KeyStroke*)nullptr : $cast($KeyStroke, a->getValue($Action::ACCELERATOR_KEY)));
	setAccelerator(ks);
}

void JMenuItem::actionPropertyChanged($Action* action, $String* propertyName) {
	$init($Action);
	if (propertyName == $Action::ACCELERATOR_KEY) {
		configureAcceleratorFromAction(action);
	} else {
		$AbstractButton::actionPropertyChanged(action, propertyName);
	}
}

void JMenuItem::processMouseEvent($MouseEvent* e, $MenuElementArray* path, $MenuSelectionManager* manager) {
	$useLocalObjectStack();
	$var($Component, var$0, $nc(e)->getComponent());
	int32_t var$1 = e->getID();
	int64_t var$2 = e->getWhen();
	int32_t var$3 = e->getModifiers();
	int32_t var$4 = e->getX();
	int32_t var$5 = e->getY();
	int32_t var$6 = e->getXOnScreen();
	int32_t var$7 = e->getYOnScreen();
	int32_t var$8 = e->getClickCount();
	processMenuDragMouseEvent($$new($MenuDragMouseEvent, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, e->isPopupTrigger(), path, manager));
}

void JMenuItem::processKeyEvent($KeyEvent* e, $MenuElementArray* path, $MenuSelectionManager* manager) {
	$useLocalObjectStack();
	;
	$var($Component, var$0, $nc(e)->getComponent());
	int32_t var$1 = e->getID();
	int64_t var$2 = e->getWhen();
	int32_t var$3 = e->getModifiers();
	int32_t var$4 = e->getKeyCode();
	$var($MenuKeyEvent, mke, $new($MenuKeyEvent, var$0, var$1, var$2, var$3, var$4, e->getKeyChar(), path, manager));
	processMenuKeyEvent(mke);
	if (mke->isConsumed()) {
		e->consume();
	}
}

void JMenuItem::processMenuDragMouseEvent($MenuDragMouseEvent* e) {
	switch ($nc(e)->getID()) {
	case $MouseEvent::MOUSE_ENTERED:
		this->isMouseDragged = false;
		fireMenuDragMouseEntered(e);
		break;
	case $MouseEvent::MOUSE_EXITED:
		this->isMouseDragged = false;
		fireMenuDragMouseExited(e);
		break;
	case $MouseEvent::MOUSE_DRAGGED:
		this->isMouseDragged = true;
		fireMenuDragMouseDragged(e);
		break;
	case $MouseEvent::MOUSE_RELEASED:
		if (this->isMouseDragged) {
			fireMenuDragMouseReleased(e);
		}
		break;
	default:
		break;
	}
}

void JMenuItem::processMenuKeyEvent($MenuKeyEvent* e) {
	;
	switch ($nc(e)->getID()) {
	case $KeyEvent::KEY_PRESSED:
		fireMenuKeyPressed(e);
		break;
	case $KeyEvent::KEY_RELEASED:
		fireMenuKeyReleased(e);
		break;
	case $KeyEvent::KEY_TYPED:
		fireMenuKeyTyped(e);
		break;
	default:
		break;
	}
}

void JMenuItem::fireMenuDragMouseEntered($MenuDragMouseEvent* event) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuDragMouseListener);
		if ($equals(listeners->get(i), $MenuDragMouseListener::class$)) {
			$nc($cast($MenuDragMouseListener, listeners->get(i + 1)))->menuDragMouseEntered(event);
		}
	}
}

void JMenuItem::fireMenuDragMouseExited($MenuDragMouseEvent* event) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuDragMouseListener);
		if ($equals(listeners->get(i), $MenuDragMouseListener::class$)) {
			$nc($cast($MenuDragMouseListener, listeners->get(i + 1)))->menuDragMouseExited(event);
		}
	}
}

void JMenuItem::fireMenuDragMouseDragged($MenuDragMouseEvent* event) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuDragMouseListener);
		if ($equals(listeners->get(i), $MenuDragMouseListener::class$)) {
			$nc($cast($MenuDragMouseListener, listeners->get(i + 1)))->menuDragMouseDragged(event);
		}
	}
}

void JMenuItem::fireMenuDragMouseReleased($MenuDragMouseEvent* event) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuDragMouseListener);
		if ($equals(listeners->get(i), $MenuDragMouseListener::class$)) {
			$nc($cast($MenuDragMouseListener, listeners->get(i + 1)))->menuDragMouseReleased(event);
		}
	}
}

void JMenuItem::fireMenuKeyPressed($MenuKeyEvent* event) {
	;
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuKeyListener);
		if ($equals(listeners->get(i), $MenuKeyListener::class$)) {
			$nc($cast($MenuKeyListener, listeners->get(i + 1)))->menuKeyPressed(event);
		}
	}
}

void JMenuItem::fireMenuKeyReleased($MenuKeyEvent* event) {
	;
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuKeyListener);
		if ($equals(listeners->get(i), $MenuKeyListener::class$)) {
			$nc($cast($MenuKeyListener, listeners->get(i + 1)))->menuKeyReleased(event);
		}
	}
}

void JMenuItem::fireMenuKeyTyped($MenuKeyEvent* event) {
	;
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuKeyListener);
		if ($equals(listeners->get(i), $MenuKeyListener::class$)) {
			$nc($cast($MenuKeyListener, listeners->get(i + 1)))->menuKeyTyped(event);
		}
	}
}

void JMenuItem::menuSelectionChanged(bool isIncluded) {
	setArmed(isIncluded);
}

$MenuElementArray* JMenuItem::getSubElements() {
	return $new($MenuElementArray, 0);
}

$Component* JMenuItem::getComponent() {
	return this;
}

void JMenuItem::addMenuDragMouseListener($MenuDragMouseListener* l) {
	$load($MenuDragMouseListener);
	$nc(this->listenerList)->add($MenuDragMouseListener::class$, l);
}

void JMenuItem::removeMenuDragMouseListener($MenuDragMouseListener* l) {
	$load($MenuDragMouseListener);
	$nc(this->listenerList)->remove($MenuDragMouseListener::class$, l);
}

$MenuDragMouseListenerArray* JMenuItem::getMenuDragMouseListeners() {
	$load($MenuDragMouseListener);
	return $cast($MenuDragMouseListenerArray, $nc(this->listenerList)->getListeners($MenuDragMouseListener::class$));
}

void JMenuItem::addMenuKeyListener($MenuKeyListener* l) {
	$load($MenuKeyListener);
	$nc(this->listenerList)->add($MenuKeyListener::class$, l);
}

void JMenuItem::removeMenuKeyListener($MenuKeyListener* l) {
	$load($MenuKeyListener);
	$nc(this->listenerList)->remove($MenuKeyListener::class$, l);
}

$MenuKeyListenerArray* JMenuItem::getMenuKeyListeners() {
	$load($MenuKeyListener);
	return $cast($MenuKeyListenerArray, $nc(this->listenerList)->getListeners($MenuKeyListener::class$));
}

void JMenuItem::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if ($$nc(getUIClassID())->equals(JMenuItem::uiClassID)) {
		updateUI();
	}
}

void JMenuItem::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JMenuItem::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JMenuItem::paramString() {
	return $AbstractButton::paramString();
}

$AccessibleContext* JMenuItem::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JMenuItem$AccessibleJMenuItem, this));
	}
	return this->accessibleContext;
}

JMenuItem::JMenuItem() {
}

void JMenuItem::clinit$($Class* clazz) {
	$assignStatic(JMenuItem::uiClassID, "MenuItemUI"_s);
}

$Class* JMenuItem::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMenuItem, uiClassID)},
		{"TRACE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMenuItem, TRACE)},
		{"VERBOSE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMenuItem, VERBOSE)},
		{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMenuItem, DEBUG)},
		{"isMouseDragged", "Z", nullptr, $PRIVATE, $field(JMenuItem, isMouseDragged)},
		{"accelerator", "Ljavax/swing/KeyStroke;", nullptr, $PRIVATE, $field(JMenuItem, accelerator)},
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
	$NamedAttribute getMenuDragMouseListenersmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getMenuDragMouseListenersmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getMenuDragMouseListenersmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getMenuKeyListenersmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getMenuKeyListenersmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getMenuKeyListenersmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getSubElementsmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getSubElementsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getSubElementsmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setAcceleratormethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The keystroke combination which will invoke the JMenuItem\'s actionlisteners without navigating the menu hierarchy"},
		{}
	};
	$CompoundAttribute setAcceleratormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setAcceleratormethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setArmedmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"hidden", 'Z', "true"},
		{"description", 's', "Mouse release will fire an action event"},
		{}
	};
	$CompoundAttribute setArmedmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setArmedmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setEnabledmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The enabled state of the component."},
		{}
	};
	$CompoundAttribute setEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setUImethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The UI object that implements the LookAndFeel."},
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
		{"<init>", "()V", nullptr, $PUBLIC, $method(JMenuItem, init$, void)},
		{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(JMenuItem, init$, void, $Icon*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JMenuItem, init$, void, $String*)},
		{"<init>", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $method(JMenuItem, init$, void, $Action*)},
		{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(JMenuItem, init$, void, $String*, $Icon*)},
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(JMenuItem, init$, void, $String*, int32_t)},
		{"actionPropertyChanged", "(Ljavax/swing/Action;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(JMenuItem, actionPropertyChanged, void, $Action*, $String*)},
		{"addMenuDragMouseListener", "(Ljavax/swing/event/MenuDragMouseListener;)V", nullptr, $PUBLIC, $virtualMethod(JMenuItem, addMenuDragMouseListener, void, $MenuDragMouseListener*)},
		{"addMenuKeyListener", "(Ljavax/swing/event/MenuKeyListener;)V", nullptr, $PUBLIC, $virtualMethod(JMenuItem, addMenuKeyListener, void, $MenuKeyListener*)},
		{"alwaysOnTop", "()Z", nullptr, 0, $virtualMethod(JMenuItem, alwaysOnTop, bool)},
		{"configureAcceleratorFromAction", "(Ljavax/swing/Action;)V", nullptr, 0, $virtualMethod(JMenuItem, configureAcceleratorFromAction, void, $Action*)},
		{"configurePropertiesFromAction", "(Ljavax/swing/Action;)V", nullptr, $PROTECTED, $virtualMethod(JMenuItem, configurePropertiesFromAction, void, $Action*)},
		{"fireMenuDragMouseDragged", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PROTECTED, $virtualMethod(JMenuItem, fireMenuDragMouseDragged, void, $MenuDragMouseEvent*)},
		{"fireMenuDragMouseEntered", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PROTECTED, $virtualMethod(JMenuItem, fireMenuDragMouseEntered, void, $MenuDragMouseEvent*)},
		{"fireMenuDragMouseExited", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PROTECTED, $virtualMethod(JMenuItem, fireMenuDragMouseExited, void, $MenuDragMouseEvent*)},
		{"fireMenuDragMouseReleased", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PROTECTED, $virtualMethod(JMenuItem, fireMenuDragMouseReleased, void, $MenuDragMouseEvent*)},
		{"fireMenuKeyPressed", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PROTECTED, $virtualMethod(JMenuItem, fireMenuKeyPressed, void, $MenuKeyEvent*)},
		{"fireMenuKeyReleased", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PROTECTED, $virtualMethod(JMenuItem, fireMenuKeyReleased, void, $MenuKeyEvent*)},
		{"fireMenuKeyTyped", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PROTECTED, $virtualMethod(JMenuItem, fireMenuKeyTyped, void, $MenuKeyEvent*)},
		{"getAccelerator", "()Ljavax/swing/KeyStroke;", nullptr, $PUBLIC, $virtualMethod(JMenuItem, getAccelerator, $KeyStroke*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JMenuItem, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JMenuItem, getComponent, $Component*)},
		{"getMenuDragMouseListeners", "()[Ljavax/swing/event/MenuDragMouseListener;", nullptr, $PUBLIC, $virtualMethod(JMenuItem, getMenuDragMouseListeners, $MenuDragMouseListenerArray*), nullptr, nullptr, getMenuDragMouseListenersmethodAnnotations$$},
		{"getMenuKeyListeners", "()[Ljavax/swing/event/MenuKeyListener;", nullptr, $PUBLIC, $virtualMethod(JMenuItem, getMenuKeyListeners, $MenuKeyListenerArray*), nullptr, nullptr, getMenuKeyListenersmethodAnnotations$$},
		{"getSubElements", "()[Ljavax/swing/MenuElement;", nullptr, $PUBLIC, $virtualMethod(JMenuItem, getSubElements, $MenuElementArray*), nullptr, nullptr, getSubElementsmethodAnnotations$$},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JMenuItem, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"init", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PROTECTED, $virtualMethod(JMenuItem, init, void, $String*, $Icon*)},
		{"initFocusability", "()V", nullptr, 0, $virtualMethod(JMenuItem, initFocusability, void)},
		{"isArmed", "()Z", nullptr, $PUBLIC, $virtualMethod(JMenuItem, isArmed, bool)},
		{"largeIconChanged", "(Ljavax/swing/Action;)V", nullptr, 0, $virtualMethod(JMenuItem, largeIconChanged, void, $Action*)},
		{"menuSelectionChanged", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JMenuItem, menuSelectionChanged, void, bool)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JMenuItem, paramString, $String*)},
		{"processKeyEvent", "(Ljava/awt/event/KeyEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC, $virtualMethod(JMenuItem, processKeyEvent, void, $KeyEvent*, $MenuElementArray*, $MenuSelectionManager*)},
		{"processMenuDragMouseEvent", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(JMenuItem, processMenuDragMouseEvent, void, $MenuDragMouseEvent*)},
		{"processMenuKeyEvent", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(JMenuItem, processMenuKeyEvent, void, $MenuKeyEvent*)},
		{"processMouseEvent", "(Ljava/awt/event/MouseEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC, $virtualMethod(JMenuItem, processMouseEvent, void, $MouseEvent*, $MenuElementArray*, $MenuSelectionManager*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(JMenuItem, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"removeMenuDragMouseListener", "(Ljavax/swing/event/MenuDragMouseListener;)V", nullptr, $PUBLIC, $virtualMethod(JMenuItem, removeMenuDragMouseListener, void, $MenuDragMouseListener*)},
		{"removeMenuKeyListener", "(Ljavax/swing/event/MenuKeyListener;)V", nullptr, $PUBLIC, $virtualMethod(JMenuItem, removeMenuKeyListener, void, $MenuKeyListener*)},
		{"setAccelerator", "(Ljavax/swing/KeyStroke;)V", nullptr, $PUBLIC, $virtualMethod(JMenuItem, setAccelerator, void, $KeyStroke*), nullptr, nullptr, setAcceleratormethodAnnotations$$},
		{"setArmed", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JMenuItem, setArmed, void, bool), nullptr, nullptr, setArmedmethodAnnotations$$},
		{"setEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JMenuItem, setEnabled, void, bool), nullptr, nullptr, setEnabledmethodAnnotations$$},
		{"setIconFromAction", "(Ljavax/swing/Action;)V", nullptr, 0, $virtualMethod(JMenuItem, setIconFromAction, void, $Action*)},
		{"setModel", "(Ljavax/swing/ButtonModel;)V", nullptr, $PUBLIC, $virtualMethod(JMenuItem, setModel, void, $ButtonModel*)},
		{"setUI", "(Ljavax/swing/plaf/MenuItemUI;)V", nullptr, $PUBLIC, $virtualMethod(JMenuItem, setUI, void, $MenuItemUI*), nullptr, nullptr, setUImethodAnnotations$$},
		{"smallIconChanged", "(Ljavax/swing/Action;)V", nullptr, 0, $virtualMethod(JMenuItem, smallIconChanged, void, $Action*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JMenuItem, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JMenuItem, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JMenuItem$AccessibleJMenuItem", "javax.swing.JMenuItem", "AccessibleJMenuItem", $PROTECTED},
		{"javax.swing.JMenuItem$MenuItemFocusListener", "javax.swing.JMenuItem", "MenuItemFocusListener", $PRIVATE | $STATIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UIClassID"},
		{"description", 's', "An item which can be selected in a menu."},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{"Ljavax/swing/SwingContainer;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JMenuItem",
		"javax.swing.AbstractButton",
		"javax.accessibility.Accessible,javax.swing.MenuElement",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JMenuItem$AccessibleJMenuItem,javax.swing.JMenuItem$MenuItemFocusListener"
	};
	$loadClass(JMenuItem, name, initialize, &classInfo$$, JMenuItem::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JMenuItem));
	});
	return class$;
}

$Class* JMenuItem::class$ = nullptr;

	} // swing
} // javax