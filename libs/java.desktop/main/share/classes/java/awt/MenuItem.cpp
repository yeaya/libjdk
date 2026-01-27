#include <java/awt/MenuItem.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/EventQueue.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuComponent$AccessibleAWTMenuComponent.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem$1.h>
#include <java/awt/MenuItem$AccessibleAWTMenuItem.h>
#include <java/awt/MenuShortcut.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/awt/peer/MenuItemPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/AWTAccessor$MenuItemAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef ACTION_EVENT_MASK
#undef ACTION_PERFORMED
#undef KEY_PRESSED
#undef SHIFT_MASK

using $ActionListenerArray = $Array<::java::awt::event::ActionListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $EventQueue = ::java::awt::EventQueue;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Menu = ::java::awt::Menu;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuComponent$AccessibleAWTMenuComponent = ::java::awt::MenuComponent$AccessibleAWTMenuComponent;
using $MenuContainer = ::java::awt::MenuContainer;
using $MenuItem$1 = ::java::awt::MenuItem$1;
using $MenuItem$AccessibleAWTMenuItem = ::java::awt::MenuItem$AccessibleAWTMenuItem;
using $MenuShortcut = ::java::awt::MenuShortcut;
using $Toolkit = ::java::awt::Toolkit;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MenuComponentPeer = ::java::awt::peer::MenuComponentPeer;
using $MenuItemPeer = ::java::awt::peer::MenuItemPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuItemAccessor = ::sun::awt::AWTAccessor$MenuItemAccessor;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$CompoundAttribute _MenuItem_MethodAnnotations_disable8[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _MenuItem_MethodAnnotations_enable11[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _MenuItem_MethodAnnotations_enable12[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _MenuItem_FieldInfo_[] = {
	{"enabled", "Z", nullptr, $PRIVATE | $VOLATILE, $field(MenuItem, enabled)},
	{"label", "Ljava/lang/String;", nullptr, $VOLATILE, $field(MenuItem, label)},
	{"actionCommand", "Ljava/lang/String;", nullptr, $PRIVATE | $VOLATILE, $field(MenuItem, actionCommand)},
	{"eventMask", "J", nullptr, $VOLATILE, $field(MenuItem, eventMask)},
	{"actionListener", "Ljava/awt/event/ActionListener;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(MenuItem, actionListener)},
	{"shortcut", "Ljava/awt/MenuShortcut;", nullptr, $PRIVATE | $VOLATILE, $field(MenuItem, shortcut)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MenuItem, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(MenuItem, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MenuItem, serialVersionUID)},
	{"menuItemSerializedDataVersion", "I", nullptr, $PRIVATE, $field(MenuItem, menuItemSerializedDataVersion)},
	{}
};

$MethodInfo _MenuItem_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(MenuItem, init$, void), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MenuItem, init$, void, $String*), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;Ljava/awt/MenuShortcut;)V", nullptr, $PUBLIC, $method(MenuItem, init$, void, $String*, $MenuShortcut*), "java.awt.HeadlessException"},
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(MenuItem, addActionListener, void, $ActionListener*)},
	{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(MenuItem, addNotify, void)},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(MenuItem, constructComponentName, $String*)},
	{"deleteShortcut", "()V", nullptr, $PUBLIC, $virtualMethod(MenuItem, deleteShortcut, void)},
	{"deleteShortcut", "(Ljava/awt/MenuShortcut;)V", nullptr, 0, $virtualMethod(MenuItem, deleteShortcut, void, $MenuShortcut*)},
	{"disable", "()V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, $virtualMethod(MenuItem, disable, void), nullptr, nullptr, _MenuItem_MethodAnnotations_disable8},
	{"disableEvents", "(J)V", nullptr, $PROTECTED | $FINAL, $method(MenuItem, disableEvents, void, int64_t)},
	{"doMenuEvent", "(JI)V", nullptr, 0, $virtualMethod(MenuItem, doMenuEvent, void, int64_t, int32_t)},
	{"enable", "()V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, $virtualMethod(MenuItem, enable, void), nullptr, nullptr, _MenuItem_MethodAnnotations_enable11},
	{"enable", "(Z)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(MenuItem, enable, void, bool), nullptr, nullptr, _MenuItem_MethodAnnotations_enable12},
	{"enableEvents", "(J)V", nullptr, $PROTECTED | $FINAL, $method(MenuItem, enableEvents, void, int64_t)},
	{"eventEnabled", "(Ljava/awt/AWTEvent;)Z", nullptr, 0, $virtualMethod(MenuItem, eventEnabled, bool, $AWTEvent*)},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(MenuItem, getAccessibleContext, $AccessibleContext*)},
	{"getActionCommand", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MenuItem, getActionCommand, $String*)},
	{"getActionCommandImpl", "()Ljava/lang/String;", nullptr, $FINAL, $method(MenuItem, getActionCommandImpl, $String*)},
	{"getActionListeners", "()[Ljava/awt/event/ActionListener;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(MenuItem, getActionListeners, $ActionListenerArray*)},
	{"getLabel", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MenuItem, getLabel, $String*)},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC, $virtualMethod(MenuItem, getListeners, $EventListenerArray*, $Class*)},
	{"getShortcut", "()Ljava/awt/MenuShortcut;", nullptr, $PUBLIC, $virtualMethod(MenuItem, getShortcut, $MenuShortcut*)},
	{"getShortcutMenuItem", "(Ljava/awt/MenuShortcut;)Ljava/awt/MenuItem;", nullptr, 0, $virtualMethod(MenuItem, getShortcutMenuItem, MenuItem*, $MenuShortcut*)},
	{"handleShortcut", "(Ljava/awt/event/KeyEvent;)Z", nullptr, 0, $virtualMethod(MenuItem, handleShortcut, bool, $KeyEvent*)},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MenuItem, initIDs, void)},
	{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(MenuItem, isEnabled, bool)},
	{"isItemEnabled", "()Z", nullptr, $PRIVATE, $method(MenuItem, isItemEnabled, bool)},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MenuItem, paramString, $String*)},
	{"processActionEvent", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PROTECTED, $virtualMethod(MenuItem, processActionEvent, void, $ActionEvent*)},
	{"processEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED, $virtualMethod(MenuItem, processEvent, void, $AWTEvent*)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(MenuItem, readObject, void, $ObjectInputStream*), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(MenuItem, removeActionListener, void, $ActionListener*)},
	{"setActionCommand", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MenuItem, setActionCommand, void, $String*)},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(MenuItem, setEnabled, void, bool)},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(MenuItem, setLabel, void, $String*)},
	{"setShortcut", "(Ljava/awt/MenuShortcut;)V", nullptr, $PUBLIC, $virtualMethod(MenuItem, setShortcut, void, $MenuShortcut*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(MenuItem, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_initIDs 28

$InnerClassInfo _MenuItem_InnerClassesInfo_[] = {
	{"java.awt.MenuItem$AccessibleAWTMenuItem", "java.awt.MenuItem", "AccessibleAWTMenuItem", $PROTECTED},
	{"java.awt.MenuItem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MenuItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.MenuItem",
	"java.awt.MenuComponent",
	"javax.accessibility.Accessible",
	_MenuItem_FieldInfo_,
	_MenuItem_MethodInfo_,
	nullptr,
	nullptr,
	_MenuItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.MenuItem$AccessibleAWTMenuItem,java.awt.MenuItem$1"
};

$Object* allocate$MenuItem($Class* clazz) {
	return $of($alloc(MenuItem));
}

$String* MenuItem::toString() {
	 return this->$MenuComponent::toString();
}

int32_t MenuItem::hashCode() {
	 return this->$MenuComponent::hashCode();
}

bool MenuItem::equals(Object$* arg0) {
	 return this->$MenuComponent::equals(arg0);
}

$Object* MenuItem::clone() {
	 return this->$MenuComponent::clone();
}

void MenuItem::finalize() {
	this->$MenuComponent::finalize();
}

$String* MenuItem::base = nullptr;
int32_t MenuItem::nameCounter = 0;

void MenuItem::init$() {
	MenuItem::init$(""_s, nullptr);
}

void MenuItem::init$($String* label) {
	MenuItem::init$(label, nullptr);
}

void MenuItem::init$($String* label, $MenuShortcut* s) {
	$MenuComponent::init$();
	this->enabled = true;
	this->menuItemSerializedDataVersion = 1;
	$set(this, label, label);
	$set(this, shortcut, s);
}

$String* MenuItem::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(MenuItem::class$) {
		$var($String, var$0, MenuItem::base);
		return $concat(var$0, $$str(MenuItem::nameCounter++));
	}
}

void MenuItem::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createMenuItem(this));
		}
	}
}

$String* MenuItem::getLabel() {
	return this->label;
}

void MenuItem::setLabel($String* label) {
	$synchronized(this) {
		$set(this, label, label);
		$var($MenuItemPeer, peer, $cast($MenuItemPeer, this->peer));
		if (peer != nullptr) {
			peer->setLabel(label);
		}
	}
}

bool MenuItem::isEnabled() {
	return this->enabled;
}

void MenuItem::setEnabled(bool b) {
	$synchronized(this) {
		enable(b);
	}
}

void MenuItem::enable() {
	$synchronized(this) {
		this->enabled = true;
		$var($MenuItemPeer, peer, $cast($MenuItemPeer, this->peer));
		if (peer != nullptr) {
			peer->setEnabled(true);
		}
	}
}

void MenuItem::enable(bool b) {
	if (b) {
		enable();
	} else {
		disable();
	}
}

void MenuItem::disable() {
	$synchronized(this) {
		this->enabled = false;
		$var($MenuItemPeer, peer, $cast($MenuItemPeer, this->peer));
		if (peer != nullptr) {
			peer->setEnabled(false);
		}
	}
}

$MenuShortcut* MenuItem::getShortcut() {
	return this->shortcut;
}

void MenuItem::setShortcut($MenuShortcut* s) {
	$set(this, shortcut, s);
	$var($MenuItemPeer, peer, $cast($MenuItemPeer, this->peer));
	if (peer != nullptr) {
		peer->setLabel(this->label);
	}
}

void MenuItem::deleteShortcut() {
	$set(this, shortcut, nullptr);
	$var($MenuItemPeer, peer, $cast($MenuItemPeer, this->peer));
	if (peer != nullptr) {
		peer->setLabel(this->label);
	}
}

void MenuItem::deleteShortcut($MenuShortcut* s) {
	if ($nc(s)->equals(this->shortcut)) {
		$set(this, shortcut, nullptr);
		$var($MenuItemPeer, peer, $cast($MenuItemPeer, this->peer));
		if (peer != nullptr) {
			peer->setLabel(this->label);
		}
	}
}

void MenuItem::doMenuEvent(int64_t when, int32_t modifiers) {
	$useLocalCurrentObjectStackCache();
	$nc($($Toolkit::getEventQueue()))->postEvent($$new($ActionEvent, this, $ActionEvent::ACTION_PERFORMED, $(getActionCommand()), when, modifiers));
}

bool MenuItem::isItemEnabled() {
	$useLocalCurrentObjectStackCache();
	if (!isEnabled()) {
		return false;
	}
	$var($MenuContainer, container, getParent_NoClientCode());
	do {
		if (!($instanceOf($Menu, container))) {
			return true;
		}
		$var($Menu, menu, $cast($Menu, container));
		if (!$nc(menu)->isEnabled()) {
			return false;
		}
		$assign(container, $nc(menu)->getParent_NoClientCode());
	} while (container != nullptr);
	return true;
}

bool MenuItem::handleShortcut($KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(e)->getKeyCode();
	$var($MenuShortcut, s, $new($MenuShortcut, var$0, ((int32_t)(e->getModifiers() & (uint32_t)$InputEvent::SHIFT_MASK)) > 0));
	int32_t var$1 = $nc(e)->getExtendedKeyCode();
	$var($MenuShortcut, sE, $new($MenuShortcut, var$1, ((int32_t)(e->getModifiers() & (uint32_t)$InputEvent::SHIFT_MASK)) > 0));
	bool var$3 = s->equals(this->shortcut);
	bool var$2 = (var$3 || sE->equals(this->shortcut));
	if (var$2 && isItemEnabled()) {
		if ($nc(e)->getID() == $KeyEvent::KEY_PRESSED) {
			int64_t var$4 = e->getWhen();
			doMenuEvent(var$4, e->getModifiers());
		} else {
		}
		return true;
	}
	return false;
}

MenuItem* MenuItem::getShortcutMenuItem($MenuShortcut* s) {
	return ($nc(s)->equals(this->shortcut)) ? this : (MenuItem*)nullptr;
}

void MenuItem::enableEvents(int64_t eventsToEnable) {
	this->eventMask |= eventsToEnable;
	this->newEventsOnly = true;
}

void MenuItem::disableEvents(int64_t eventsToDisable) {
	this->eventMask &= (uint64_t)~eventsToDisable;
}

void MenuItem::setActionCommand($String* command) {
	$set(this, actionCommand, command);
}

$String* MenuItem::getActionCommand() {
	return getActionCommandImpl();
}

$String* MenuItem::getActionCommandImpl() {
	return (this->actionCommand == nullptr ? $cast($String, this->label) : $cast($String, this->actionCommand));
}

void MenuItem::addActionListener($ActionListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, actionListener, $AWTEventMulticaster::add(this->actionListener, l));
		this->newEventsOnly = true;
	}
}

void MenuItem::removeActionListener($ActionListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, actionListener, $AWTEventMulticaster::remove(this->actionListener, l));
	}
}

$ActionListenerArray* MenuItem::getActionListeners() {
	$synchronized(this) {
		$load($ActionListener);
		return $fcast($ActionListenerArray, getListeners($ActionListener::class$));
	}
}

$EventListenerArray* MenuItem::getListeners($Class* listenerType) {
	$var($EventListener, l, nullptr);
	$load($ActionListener);
	if (listenerType == $ActionListener::class$) {
		$assign(l, this->actionListener);
	}
	return $AWTEventMulticaster::getListeners(l, listenerType);
}

void MenuItem::processEvent($AWTEvent* e) {
	if ($instanceOf($ActionEvent, e)) {
		processActionEvent($cast($ActionEvent, e));
	}
}

bool MenuItem::eventEnabled($AWTEvent* e) {
	if ($nc(e)->id == $ActionEvent::ACTION_PERFORMED) {
		if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::ACTION_EVENT_MASK)) != 0 || this->actionListener != nullptr) {
			return true;
		}
		return false;
	}
	return $MenuComponent::eventEnabled(e);
}

void MenuItem::processActionEvent($ActionEvent* e) {
	$var($ActionListener, listener, this->actionListener);
	if (listener != nullptr) {
		listener->actionPerformed(e);
	}
}

$String* MenuItem::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, str, $str({",label="_s, this->label}));
	if (this->shortcut != nullptr) {
		$plusAssign(str, $$str({",shortcut="_s, this->shortcut}));
	}
	return $str({$($MenuComponent::paramString()), str});
}

void MenuItem::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	$init($MenuComponent);
	$AWTEventMulticaster::save(s, $MenuComponent::actionListenerK, this->actionListener);
	s->writeObject(nullptr);
}

void MenuItem::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	$var($Object, keyOrNull, nullptr);
	while (nullptr != ($assign(keyOrNull, s->readObject()))) {
		$var($String, key, $nc(($cast($String, keyOrNull)))->intern());
		$init($MenuComponent);
		if ($MenuComponent::actionListenerK == key) {
			addActionListener(($cast($ActionListener, $(s->readObject()))));
		} else {
			s->readObject();
		}
	}
}

void MenuItem::initIDs() {
	$init(MenuItem);
	$prepareNativeStatic(MenuItem, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$AccessibleContext* MenuItem::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($MenuItem$AccessibleAWTMenuItem, this));
	}
	return this->accessibleContext;
}

void clinit$MenuItem($Class* class$) {
	$assignStatic(MenuItem::base, "menuitem"_s);
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			MenuItem::initIDs();
		}
		$AWTAccessor::setMenuItemAccessor($$new($MenuItem$1));
	}
	MenuItem::nameCounter = 0;
}

MenuItem::MenuItem() {
}

$Class* MenuItem::load$($String* name, bool initialize) {
	$loadClass(MenuItem, name, initialize, &_MenuItem_ClassInfo_, clinit$MenuItem, allocate$MenuItem);
	return class$;
}

$Class* MenuItem::class$ = nullptr;

	} // awt
} // java