#include <javax/swing/DelegatingDefaultFocusManager.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/KeyEventDispatcher.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/VetoableChangeListener.h>
#include <java/util/Set.h>
#include <javax/swing/DefaultFocusManager.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $KeyEventDispatcher = ::java::awt::KeyEventDispatcher;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $VetoableChangeListener = ::java::beans::VetoableChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;
using $DefaultFocusManager = ::javax::swing::DefaultFocusManager;

namespace javax {
	namespace swing {

$FieldInfo _DelegatingDefaultFocusManager_FieldInfo_[] = {
	{"delegate", "Ljava/awt/KeyboardFocusManager;", nullptr, $PRIVATE | $FINAL, $field(DelegatingDefaultFocusManager, delegate)},
	{}
};

$MethodInfo _DelegatingDefaultFocusManager_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/KeyboardFocusManager;)V", nullptr, 0, $method(DelegatingDefaultFocusManager, init$, void, $KeyboardFocusManager*)},
	{"addKeyEventDispatcher", "(Ljava/awt/KeyEventDispatcher;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, addKeyEventDispatcher, void, $KeyEventDispatcher*)},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, addPropertyChangeListener, void, $PropertyChangeListener*)},
	{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, addPropertyChangeListener, void, $String*, $PropertyChangeListener*)},
	{"addVetoableChangeListener", "(Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, addVetoableChangeListener, void, $VetoableChangeListener*)},
	{"addVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, addVetoableChangeListener, void, $String*, $VetoableChangeListener*)},
	{"clearGlobalFocusOwner", "()V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, clearGlobalFocusOwner, void)},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)Z", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, dispatchEvent, bool, $AWTEvent*)},
	{"dispatchKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, dispatchKeyEvent, bool, $KeyEvent*)},
	{"downFocusCycle", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, downFocusCycle, void, $Container*)},
	{"focusNextComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, focusNextComponent, void, $Component*)},
	{"focusPreviousComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, focusPreviousComponent, void, $Component*)},
	{"getActiveWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, getActiveWindow, $Window*)},
	{"getCurrentFocusCycleRoot", "()Ljava/awt/Container;", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, getCurrentFocusCycleRoot, $Container*)},
	{"getDefaultFocusTraversalKeys", "(I)Ljava/util/Set;", "(I)Ljava/util/Set<Ljava/awt/AWTKeyStroke;>;", $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, getDefaultFocusTraversalKeys, $Set*, int32_t)},
	{"getDefaultFocusTraversalPolicy", "()Ljava/awt/FocusTraversalPolicy;", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, getDefaultFocusTraversalPolicy, $FocusTraversalPolicy*)},
	{"getDelegate", "()Ljava/awt/KeyboardFocusManager;", nullptr, 0, $method(DelegatingDefaultFocusManager, getDelegate, $KeyboardFocusManager*)},
	{"getFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, getFocusOwner, $Component*)},
	{"getFocusedWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, getFocusedWindow, $Window*)},
	{"getPermanentFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, getPermanentFocusOwner, $Component*)},
	{"processKeyEvent", "(Ljava/awt/Component;Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, processKeyEvent, void, $Component*, $KeyEvent*)},
	{"removeKeyEventDispatcher", "(Ljava/awt/KeyEventDispatcher;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, removeKeyEventDispatcher, void, $KeyEventDispatcher*)},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, removePropertyChangeListener, void, $PropertyChangeListener*)},
	{"removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, removePropertyChangeListener, void, $String*, $PropertyChangeListener*)},
	{"removeVetoableChangeListener", "(Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, removeVetoableChangeListener, void, $VetoableChangeListener*)},
	{"removeVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, removeVetoableChangeListener, void, $String*, $VetoableChangeListener*)},
	{"setDefaultFocusTraversalKeys", "(ILjava/util/Set;)V", "(ILjava/util/Set<+Ljava/awt/AWTKeyStroke;>;)V", $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, setDefaultFocusTraversalKeys, void, int32_t, $Set*)},
	{"setDefaultFocusTraversalPolicy", "(Ljava/awt/FocusTraversalPolicy;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, setDefaultFocusTraversalPolicy, void, $FocusTraversalPolicy*)},
	{"setGlobalCurrentFocusCycleRoot", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, setGlobalCurrentFocusCycleRoot, void, $Container*)},
	{"upFocusCycle", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingDefaultFocusManager, upFocusCycle, void, $Component*)},
	{}
};

$ClassInfo _DelegatingDefaultFocusManager_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.DelegatingDefaultFocusManager",
	"javax.swing.DefaultFocusManager",
	nullptr,
	_DelegatingDefaultFocusManager_FieldInfo_,
	_DelegatingDefaultFocusManager_MethodInfo_
};

$Object* allocate$DelegatingDefaultFocusManager($Class* clazz) {
	return $of($alloc(DelegatingDefaultFocusManager));
}

void DelegatingDefaultFocusManager::init$($KeyboardFocusManager* delegate) {
	$DefaultFocusManager::init$();
	$set(this, delegate, delegate);
	setDefaultFocusTraversalPolicy(this->gluePolicy);
}

$KeyboardFocusManager* DelegatingDefaultFocusManager::getDelegate() {
	return this->delegate;
}

void DelegatingDefaultFocusManager::processKeyEvent($Component* focusedComponent, $KeyEvent* e) {
	$nc(this->delegate)->processKeyEvent(focusedComponent, e);
}

void DelegatingDefaultFocusManager::focusNextComponent($Component* aComponent) {
	$nc(this->delegate)->focusNextComponent(aComponent);
}

void DelegatingDefaultFocusManager::focusPreviousComponent($Component* aComponent) {
	$nc(this->delegate)->focusPreviousComponent(aComponent);
}

$Component* DelegatingDefaultFocusManager::getFocusOwner() {
	return $nc(this->delegate)->getFocusOwner();
}

void DelegatingDefaultFocusManager::clearGlobalFocusOwner() {
	$nc(this->delegate)->clearGlobalFocusOwner();
}

$Component* DelegatingDefaultFocusManager::getPermanentFocusOwner() {
	return $nc(this->delegate)->getPermanentFocusOwner();
}

$Window* DelegatingDefaultFocusManager::getFocusedWindow() {
	return $nc(this->delegate)->getFocusedWindow();
}

$Window* DelegatingDefaultFocusManager::getActiveWindow() {
	return $nc(this->delegate)->getActiveWindow();
}

$FocusTraversalPolicy* DelegatingDefaultFocusManager::getDefaultFocusTraversalPolicy() {
	return $nc(this->delegate)->getDefaultFocusTraversalPolicy();
}

void DelegatingDefaultFocusManager::setDefaultFocusTraversalPolicy($FocusTraversalPolicy* defaultPolicy) {
	if (this->delegate != nullptr) {
		$nc(this->delegate)->setDefaultFocusTraversalPolicy(defaultPolicy);
	}
}

void DelegatingDefaultFocusManager::setDefaultFocusTraversalKeys(int32_t id, $Set* keystrokes) {
	$nc(this->delegate)->setDefaultFocusTraversalKeys(id, keystrokes);
}

$Set* DelegatingDefaultFocusManager::getDefaultFocusTraversalKeys(int32_t id) {
	return $nc(this->delegate)->getDefaultFocusTraversalKeys(id);
}

$Container* DelegatingDefaultFocusManager::getCurrentFocusCycleRoot() {
	return $nc(this->delegate)->getCurrentFocusCycleRoot();
}

void DelegatingDefaultFocusManager::setGlobalCurrentFocusCycleRoot($Container* newFocusCycleRoot) {
	$nc(this->delegate)->setGlobalCurrentFocusCycleRoot(newFocusCycleRoot);
}

void DelegatingDefaultFocusManager::addPropertyChangeListener($PropertyChangeListener* listener) {
	$nc(this->delegate)->addPropertyChangeListener(listener);
}

void DelegatingDefaultFocusManager::removePropertyChangeListener($PropertyChangeListener* listener) {
	$nc(this->delegate)->removePropertyChangeListener(listener);
}

void DelegatingDefaultFocusManager::addPropertyChangeListener($String* propertyName, $PropertyChangeListener* listener) {
	$nc(this->delegate)->addPropertyChangeListener(propertyName, listener);
}

void DelegatingDefaultFocusManager::removePropertyChangeListener($String* propertyName, $PropertyChangeListener* listener) {
	$nc(this->delegate)->removePropertyChangeListener(propertyName, listener);
}

void DelegatingDefaultFocusManager::addVetoableChangeListener($VetoableChangeListener* listener) {
	$nc(this->delegate)->addVetoableChangeListener(listener);
}

void DelegatingDefaultFocusManager::removeVetoableChangeListener($VetoableChangeListener* listener) {
	$nc(this->delegate)->removeVetoableChangeListener(listener);
}

void DelegatingDefaultFocusManager::addVetoableChangeListener($String* propertyName, $VetoableChangeListener* listener) {
	$nc(this->delegate)->addVetoableChangeListener(propertyName, listener);
}

void DelegatingDefaultFocusManager::removeVetoableChangeListener($String* propertyName, $VetoableChangeListener* listener) {
	$nc(this->delegate)->removeVetoableChangeListener(propertyName, listener);
}

void DelegatingDefaultFocusManager::addKeyEventDispatcher($KeyEventDispatcher* dispatcher) {
	$nc(this->delegate)->addKeyEventDispatcher(dispatcher);
}

void DelegatingDefaultFocusManager::removeKeyEventDispatcher($KeyEventDispatcher* dispatcher) {
	$nc(this->delegate)->removeKeyEventDispatcher(dispatcher);
}

bool DelegatingDefaultFocusManager::dispatchEvent($AWTEvent* e) {
	return $nc(this->delegate)->dispatchEvent(e);
}

bool DelegatingDefaultFocusManager::dispatchKeyEvent($KeyEvent* e) {
	return $nc(this->delegate)->dispatchKeyEvent(e);
}

void DelegatingDefaultFocusManager::upFocusCycle($Component* aComponent) {
	$nc(this->delegate)->upFocusCycle(aComponent);
}

void DelegatingDefaultFocusManager::downFocusCycle($Container* aContainer) {
	$nc(this->delegate)->downFocusCycle(aContainer);
}

DelegatingDefaultFocusManager::DelegatingDefaultFocusManager() {
}

$Class* DelegatingDefaultFocusManager::load$($String* name, bool initialize) {
	$loadClass(DelegatingDefaultFocusManager, name, initialize, &_DelegatingDefaultFocusManager_ClassInfo_, allocate$DelegatingDefaultFocusManager);
	return class$;
}

$Class* DelegatingDefaultFocusManager::class$ = nullptr;

	} // swing
} // javax