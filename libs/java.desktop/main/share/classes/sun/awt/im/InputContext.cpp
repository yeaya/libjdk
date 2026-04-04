#include <sun/awt/im/InputContext.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/AWTKeyStroke.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Frame.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/im/InputContext.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/im/spi/InputMethod.h>
#include <java/awt/im/spi/InputMethodDescriptor.h>
#include <java/lang/Character$Subset.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/LinkageError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/AccessController.h>
#include <java/text/MessageFormat.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/prefs/BackingStoreException.h>
#include <java/util/prefs/Preferences.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/im/InputContext$1.h>
#include <sun/awt/im/InputContext$2.h>
#include <sun/awt/im/InputMethodAdapter.h>
#include <sun/awt/im/InputMethodContext.h>
#include <sun/awt/im/InputMethodLocator.h>
#include <sun/awt/im/InputMethodManager.h>
#include <sun/awt/im/InputMethodWindow.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef CONFIG
#undef FINE
#undef FOCUS_GAINED
#undef FOCUS_LOST
#undef ICONIFIED
#undef KEY_PRESSED
#undef VK_UNDEFINED

using $Character$SubsetArray = $Array<::java::lang::Character$Subset>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Component = ::java::awt::Component;
using $EventQueue = ::java::awt::EventQueue;
using $Frame = ::java::awt::Frame;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $InputContext = ::java::awt::im::InputContext;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $InputMethod = ::java::awt::im::spi::InputMethod;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AccessController = ::java::security::AccessController;
using $MessageFormat = ::java::text::MessageFormat;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $BackingStoreException = ::java::util::prefs::BackingStoreException;
using $Preferences = ::java::util::prefs::Preferences;
using $SunToolkit = ::sun::awt::SunToolkit;
using $InputContext$1 = ::sun::awt::im::InputContext$1;
using $InputContext$2 = ::sun::awt::im::InputContext$2;
using $InputMethodAdapter = ::sun::awt::im::InputMethodAdapter;
using $InputMethodContext = ::sun::awt::im::InputMethodContext;
using $InputMethodLocator = ::sun::awt::im::InputMethodLocator;
using $InputMethodManager = ::sun::awt::im::InputMethodManager;
using $InputMethodWindow = ::sun::awt::im::InputMethodWindow;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace im {

int32_t InputContext::hashCode() {
	 return this->$InputContext::hashCode();
}

bool InputContext::equals(Object$* arg0) {
	 return this->$InputContext::equals(arg0);
}

$Object* InputContext::clone() {
	 return this->$InputContext::clone();
}

$String* InputContext::toString() {
	 return this->$InputContext::toString();
}

void InputContext::finalize() {
	this->$InputContext::finalize();
}

$PlatformLogger* InputContext::log = nullptr;
InputContext* InputContext::inputMethodWindowContext = nullptr;
$InputMethod* InputContext::previousInputMethod = nullptr;
$AWTKeyStroke* InputContext::inputMethodSelectionKey = nullptr;
bool InputContext::inputMethodSelectionKeyInitialized = false;
$String* InputContext::inputMethodSelectionKeyPath = nullptr;
$String* InputContext::inputMethodSelectionKeyCodeName = nullptr;
$String* InputContext::inputMethodSelectionKeyModifiersName = nullptr;

void InputContext::init$() {
	$useLocalObjectStack();
	$InputContext::init$();
	$set(this, characterSubsets, nullptr);
	this->compositionAreaHidden = false;
	this->clientWindowNotificationEnabled = false;
	$set(this, clientWindowLocation, nullptr);
	$var($InputMethodManager, imm, $InputMethodManager::getInstance());
	$synchronized(InputContext::class$) {
		if (!InputContext::inputMethodSelectionKeyInitialized) {
			InputContext::inputMethodSelectionKeyInitialized = true;
			if ($nc(imm)->hasMultipleInputMethods()) {
				initializeInputMethodSelectionKey();
			}
		}
	}
	selectInputMethod($($nc(imm)->getDefaultKeyboardLocale()));
}

bool InputContext::selectInputMethod($Locale* locale) {
	$synchronized(this) {
		$useLocalObjectStack();
		if (locale == nullptr) {
			$throwNew($NullPointerException);
		}
		if (this->inputMethod != nullptr) {
			if (this->inputMethod->setLocale(locale)) {
				return true;
			}
		} else if (this->inputMethodLocator != nullptr) {
			if (this->inputMethodLocator->isLocaleAvailable(locale)) {
				$set(this, inputMethodLocator, $nc(this->inputMethodLocator)->deriveLocator(locale));
				return true;
			}
		}
		$var($InputMethodLocator, newLocator, $$nc($InputMethodManager::getInstance())->findInputMethod(locale));
		if (newLocator != nullptr) {
			changeInputMethod(newLocator);
			return true;
		}
		if (this->inputMethod == nullptr && this->inputMethodLocator != nullptr) {
			$set(this, inputMethod, getInputMethod());
			if (this->inputMethod != nullptr) {
				return this->inputMethod->setLocale(locale);
			}
		}
		return false;
	}
}

$Locale* InputContext::getLocale() {
	if (this->inputMethod != nullptr) {
		return this->inputMethod->getLocale();
	} else if (this->inputMethodLocator != nullptr) {
		return this->inputMethodLocator->getLocale();
	} else {
		return nullptr;
	}
}

void InputContext::setCharacterSubsets($Character$SubsetArray* subsets) {
	if (subsets == nullptr) {
		$set(this, characterSubsets, nullptr);
	} else {
		$set(this, characterSubsets, $new($Character$SubsetArray, subsets->length));
		$System::arraycopy(subsets, 0, this->characterSubsets, 0, this->characterSubsets->length);
	}
	if (this->inputMethod != nullptr) {
		this->inputMethod->setCharacterSubsets(subsets);
	}
}

void InputContext::reconvert() {
	$synchronized(this) {
		$var($InputMethod, inputMethod, getInputMethod());
		if (inputMethod == nullptr) {
			$throwNew($UnsupportedOperationException);
		}
		$nc(inputMethod)->reconvert();
	}
}

void InputContext::dispatchEvent($AWTEvent* event) {
	$useLocalObjectStack();
	if ($instanceOf($InputMethodEvent, event)) {
		return;
	}
	if ($instanceOf($FocusEvent, event)) {
		$var($Component, opposite, $cast($FocusEvent, event)->getOppositeComponent());
		bool var$0 = (opposite != nullptr) && ($instanceOf($InputMethodWindow, $(getComponentWindow(opposite))));
		if (var$0 && ($equals(opposite->getInputContext(), this))) {
			return;
		}
	}
	$var($InputMethod, inputMethod, getInputMethod());
	int32_t id = $nc(event)->getID();
	switch (id) {
	case $FocusEvent::FOCUS_GAINED:
		focusGained($$cast($Component, event->getSource()));
		break;
	case $FocusEvent::FOCUS_LOST:
		{
			$var($Component, var$1, $cast($Component, event->getSource()));
			focusLost(var$1, $cast($FocusEvent, event)->isTemporary());
			break;
		}
	case $KeyEvent::KEY_PRESSED:
		if (checkInputMethodSelectionKey($cast($KeyEvent, event))) {
			$$nc($InputMethodManager::getInstance())->notifyChangeRequestByHotKey($$cast($Component, event->getSource()));
			break;
		}
	default:
		if ((inputMethod != nullptr) && ($instanceOf($InputEvent, event))) {
			inputMethod->dispatchEvent(event);
		}
	}
}

void InputContext::focusGained($Component* source) {
	$useLocalObjectStack();
	$synchronized($nc(source)->getTreeLock()) {
		$synchronized(this) {
			if ("sun.awt.im.CompositionArea"_s->equals($($of(source)->getClass()->getName()))) {
			} else if ($instanceOf($InputMethodWindow, $(getComponentWindow(source)))) {
			} else {
				if (!source->isDisplayable()) {
					return;
				}
				if (this->inputMethod != nullptr) {
					if (this->currentClientComponent != nullptr && this->currentClientComponent != source) {
						if (!this->isInputMethodActive) {
							activateInputMethod(false);
						}
						endComposition();
						deactivateInputMethod(false);
					}
				}
				$set(this, currentClientComponent, source);
			}
			$set(this, awtFocussedComponent, source);
			if ($instanceOf($InputMethodAdapter, this->inputMethod)) {
				$cast($InputMethodAdapter, this->inputMethod)->setAWTFocussedComponent(source);
			}
			if (!this->isInputMethodActive) {
				activateInputMethod(true);
			}
			$var($InputMethodContext, inputContext, $cast($InputMethodContext, this));
			if (!inputContext->isCompositionAreaVisible()) {
				$var($InputMethodRequests, req, source->getInputMethodRequests());
				if (req != nullptr && inputContext->useBelowTheSpotInput()) {
					inputContext->setCompositionAreaUndecorated(true);
				} else {
					inputContext->setCompositionAreaUndecorated(false);
				}
			}
			if (this->compositionAreaHidden == true) {
				$cast($InputMethodContext, this)->setCompositionAreaVisible(true);
				this->compositionAreaHidden = false;
			}
		}
	}
}

void InputContext::activateInputMethod(bool updateCompositionArea) {
	$useLocalObjectStack();
	if (InputContext::inputMethodWindowContext != nullptr && InputContext::inputMethodWindowContext != this && InputContext::inputMethodWindowContext->inputMethodLocator != nullptr && !InputContext::inputMethodWindowContext->inputMethodLocator->sameInputMethod(this->inputMethodLocator) && InputContext::inputMethodWindowContext->inputMethod != nullptr) {
		InputContext::inputMethodWindowContext->inputMethod->hideWindows();
	}
	$assignStatic(InputContext::inputMethodWindowContext, this);
	if (this->inputMethod != nullptr) {
		if (InputContext::previousInputMethod != this->inputMethod && $instanceOf($InputMethodAdapter, InputContext::previousInputMethod)) {
			$cast($InputMethodAdapter, InputContext::previousInputMethod)->stopListening();
		}
		$assignStatic(InputContext::previousInputMethod, nullptr);
		$init($PlatformLogger$Level);
		if ($nc(InputContext::log)->isLoggable($PlatformLogger$Level::FINE)) {
			InputContext::log->fine($$str({"Current client component "_s, this->currentClientComponent}));
		}
		if ($instanceOf($InputMethodAdapter, this->inputMethod)) {
			$cast($InputMethodAdapter, this->inputMethod)->setClientComponent(this->currentClientComponent);
		}
		$nc(this->inputMethod)->activate();
		this->isInputMethodActive = true;
		if (this->perInputMethodState != nullptr) {
			$var($Boolean, state, $cast($Boolean, this->perInputMethodState->remove(this->inputMethod)));
			if (state != nullptr) {
				this->clientWindowNotificationEnabled = state->booleanValue();
			}
		}
		if (this->clientWindowNotificationEnabled) {
			if (!addedClientWindowListeners()) {
				addClientWindowListeners();
			}
			$synchronized(this) {
				if (this->clientWindowListened != nullptr) {
					notifyClientWindowChange(this->clientWindowListened);
				}
			}
		} else if (addedClientWindowListeners()) {
			removeClientWindowListeners();
		}
	}
	$$nc($InputMethodManager::getInstance())->setInputContext(this);
	$cast($InputMethodContext, this)->grabCompositionArea(updateCompositionArea);
}

$Window* InputContext::getComponentWindow($Component* component$renamed) {
	$init(InputContext);
	$var($Component, component, component$renamed);
	while (true) {
		if (component == nullptr) {
			return nullptr;
		} else if ($instanceOf($Window, component)) {
			return $cast($Window, component);
		} else {
			$assign(component, component->getParent());
		}
	}
}

void InputContext::focusLost($Component* source, bool isTemporary) {
	$synchronized($nc(source)->getTreeLock()) {
		$synchronized(this) {
			if (this->isInputMethodActive) {
				deactivateInputMethod(isTemporary);
			}
			$set(this, awtFocussedComponent, nullptr);
			if ($instanceOf($InputMethodAdapter, this->inputMethod)) {
				$cast($InputMethodAdapter, this->inputMethod)->setAWTFocussedComponent(nullptr);
			}
			$var($InputMethodContext, inputContext, $cast($InputMethodContext, this));
			if (inputContext->isCompositionAreaVisible()) {
				inputContext->setCompositionAreaVisible(false);
				this->compositionAreaHidden = true;
			}
		}
	}
}

bool InputContext::checkInputMethodSelectionKey($KeyEvent* event) {
	if (InputContext::inputMethodSelectionKey != nullptr) {
		$var($AWTKeyStroke, aKeyStroke, $AWTKeyStroke::getAWTKeyStrokeForEvent(event));
		return $nc(InputContext::inputMethodSelectionKey)->equals(aKeyStroke);
	} else {
		return false;
	}
}

void InputContext::deactivateInputMethod(bool isTemporary) {
	$$nc($InputMethodManager::getInstance())->setInputContext(nullptr);
	if (this->inputMethod != nullptr) {
		this->isInputMethodActive = false;
		this->inputMethod->deactivate(isTemporary);
		$assignStatic(InputContext::previousInputMethod, this->inputMethod);
	}
}

void InputContext::changeInputMethod($InputMethodLocator* newLocator$renamed) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($InputMethodLocator, newLocator, newLocator$renamed);
		if (this->inputMethodLocator == nullptr) {
			$set(this, inputMethodLocator, newLocator);
			this->inputMethodCreationFailed = false;
			return;
		}
		if ($nc(this->inputMethodLocator)->sameInputMethod(newLocator)) {
			$var($Locale, newLocale, $nc(newLocator)->getLocale());
			if (newLocale != nullptr && $nc(this->inputMethodLocator)->getLocale() != newLocale) {
				if (this->inputMethod != nullptr) {
					this->inputMethod->setLocale(newLocale);
				}
				$set(this, inputMethodLocator, newLocator);
			}
			return;
		}
		$var($Locale, savedLocale, $nc(this->inputMethodLocator)->getLocale());
		bool wasInputMethodActive = this->isInputMethodActive;
		bool wasCompositionEnabledSupported = false;
		bool wasCompositionEnabled = false;
		if (this->inputMethod != nullptr) {
			try {
				wasCompositionEnabled = this->inputMethod->isCompositionEnabled();
				wasCompositionEnabledSupported = true;
			} catch ($UnsupportedOperationException& e) {
			}
			if (this->currentClientComponent != nullptr) {
				if (!this->isInputMethodActive) {
					activateInputMethod(false);
				}
				endComposition();
				deactivateInputMethod(false);
				if ($instanceOf($InputMethodAdapter, this->inputMethod)) {
					$cast($InputMethodAdapter, this->inputMethod)->setClientComponent(nullptr);
				}
				if (nullptr == $nc(this->currentClientComponent)->getInputMethodRequests()) {
					wasCompositionEnabledSupported = false;
				}
			}
			$assign(savedLocale, $nc(this->inputMethod)->getLocale());
			if (this->usedInputMethods == nullptr) {
				$set(this, usedInputMethods, $new($HashMap, 5));
			}
			if (this->perInputMethodState == nullptr) {
				$set(this, perInputMethodState, $new($HashMap, 5));
			}
			$nc(this->usedInputMethods)->put($($nc(this->inputMethodLocator)->deriveLocator(nullptr)), this->inputMethod);
			$nc(this->perInputMethodState)->put(this->inputMethod, $($Boolean::valueOf(this->clientWindowNotificationEnabled)));
			enableClientWindowNotification(this->inputMethod, false);
			if (this == InputContext::inputMethodWindowContext) {
				$nc(this->inputMethod)->hideWindows();
				$nc(this->inputMethod)->removeNotify();
				$assignStatic(InputContext::inputMethodWindowContext, nullptr);
			}
			$set(this, inputMethodLocator, nullptr);
			$set(this, inputMethod, nullptr);
			this->inputMethodCreationFailed = false;
		}
		bool var$0 = $nc(newLocator)->getLocale() == nullptr && savedLocale != nullptr;
		if (var$0 && newLocator->isLocaleAvailable(savedLocale)) {
			$assign(newLocator, newLocator->deriveLocator(savedLocale));
		}
		$set(this, inputMethodLocator, newLocator);
		this->inputMethodCreationFailed = false;
		if (wasInputMethodActive) {
			$set(this, inputMethod, getInputMethodInstance());
			if ($instanceOf($InputMethodAdapter, this->inputMethod)) {
				$cast($InputMethodAdapter, this->inputMethod)->setAWTFocussedComponent(this->awtFocussedComponent);
			}
			activateInputMethod(true);
		}
		if (wasCompositionEnabledSupported) {
			$set(this, inputMethod, getInputMethod());
			if (this->inputMethod != nullptr) {
				try {
					this->inputMethod->setCompositionEnabled(wasCompositionEnabled);
				} catch ($UnsupportedOperationException& e) {
				}
			}
		}
	}
}

$Component* InputContext::getClientComponent() {
	return this->currentClientComponent;
}

void InputContext::removeNotify($Component* component) {
	$synchronized(this) {
		if (component == nullptr) {
			$throwNew($NullPointerException);
		}
		if (this->inputMethod == nullptr) {
			if (component == this->currentClientComponent) {
				$set(this, currentClientComponent, nullptr);
			}
			return;
		}
		if (component == this->awtFocussedComponent) {
			focusLost(component, false);
		}
		if (component == this->currentClientComponent) {
			if (this->isInputMethodActive) {
				deactivateInputMethod(false);
			}
			$nc(this->inputMethod)->removeNotify();
			if (this->clientWindowNotificationEnabled && addedClientWindowListeners()) {
				removeClientWindowListeners();
			}
			$set(this, currentClientComponent, nullptr);
			if ($instanceOf($InputMethodAdapter, this->inputMethod)) {
				$cast($InputMethodAdapter, this->inputMethod)->setClientComponent(nullptr);
			}
			if ($EventQueue::isDispatchThread()) {
				$cast($InputMethodContext, this)->releaseCompositionArea();
			} else {
				$EventQueue::invokeLater($$new($InputContext$1, this));
			}
		}
	}
}

void InputContext::dispose() {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->currentClientComponent != nullptr) {
			$throwNew($IllegalStateException, "Can\'t dispose InputContext while it\'s active"_s);
		}
		if (this->inputMethod != nullptr) {
			if (this == InputContext::inputMethodWindowContext) {
				this->inputMethod->hideWindows();
				$assignStatic(InputContext::inputMethodWindowContext, nullptr);
			}
			if (this->inputMethod == InputContext::previousInputMethod) {
				$assignStatic(InputContext::previousInputMethod, nullptr);
			}
			if (this->clientWindowNotificationEnabled) {
				if (addedClientWindowListeners()) {
					removeClientWindowListeners();
				}
				this->clientWindowNotificationEnabled = false;
			}
			$nc(this->inputMethod)->dispose();
			if (this->clientWindowNotificationEnabled) {
				enableClientWindowNotification(this->inputMethod, false);
			}
			$set(this, inputMethod, nullptr);
		}
		$set(this, inputMethodLocator, nullptr);
		if (this->usedInputMethods != nullptr && !this->usedInputMethods->isEmpty()) {
			$var($Iterator, iterator, $$nc(this->usedInputMethods->values())->iterator());
			$set(this, usedInputMethods, nullptr);
			while ($nc(iterator)->hasNext()) {
				$$sure($InputMethod, iterator->next())->dispose();
			}
		}
		this->clientWindowNotificationEnabled = false;
		$set(this, clientWindowListened, nullptr);
		$set(this, perInputMethodState, nullptr);
	}
}

$Object* InputContext::getInputMethodControlObject() {
	$synchronized(this) {
		$var($InputMethod, inputMethod, getInputMethod());
		if (inputMethod != nullptr) {
			return inputMethod->getControlObject();
		} else {
			return nullptr;
		}
	}
}

void InputContext::setCompositionEnabled(bool enable) {
	$var($InputMethod, inputMethod, getInputMethod());
	if (inputMethod == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	$nc(inputMethod)->setCompositionEnabled(enable);
}

bool InputContext::isCompositionEnabled() {
	$var($InputMethod, inputMethod, getInputMethod());
	if (inputMethod == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	return $nc(inputMethod)->isCompositionEnabled();
}

$String* InputContext::getInputMethodInfo() {
	$useLocalObjectStack();
	$var($InputMethod, inputMethod, getInputMethod());
	if (inputMethod == nullptr) {
		$throwNew($UnsupportedOperationException, "Null input method"_s);
	}
	$var($String, inputMethodInfo, nullptr);
	if ($instanceOf($InputMethodAdapter, inputMethod)) {
		$assign(inputMethodInfo, $cast($InputMethodAdapter, inputMethod)->getNativeInputMethodInfo());
	}
	if (inputMethodInfo == nullptr && this->inputMethodLocator != nullptr) {
		$var($Locale, var$0, getLocale());
		$assign(inputMethodInfo, $$nc(this->inputMethodLocator->getDescriptor())->getInputMethodDisplayName(var$0, $($SunToolkit::getStartupLocale())));
	}
	if (inputMethodInfo != nullptr && !inputMethodInfo->isEmpty()) {
		return inputMethodInfo;
	}
	$var($StringBuilder, var$1, $new($StringBuilder));
	var$1->append($($nc(inputMethod)->toString()));
	var$1->append("-"_s);
	var$1->append($($$nc(inputMethod->getLocale())->toString()));
	return $str(var$1);
}

void InputContext::disableNativeIM() {
	$var($InputMethod, inputMethod, getInputMethod());
	if (inputMethod != nullptr && $instanceOf($InputMethodAdapter, inputMethod)) {
		$cast($InputMethodAdapter, inputMethod)->stopListening();
	}
}

$InputMethod* InputContext::getInputMethod() {
	$synchronized(this) {
		if (this->inputMethod != nullptr) {
			return this->inputMethod;
		}
		if (this->inputMethodCreationFailed) {
			return nullptr;
		}
		$set(this, inputMethod, getInputMethodInstance());
		return this->inputMethod;
	}
}

$InputMethod* InputContext::getInputMethodInstance() {
	$useLocalObjectStack();
	$var($InputMethodLocator, locator, this->inputMethodLocator);
	if (locator == nullptr) {
		this->inputMethodCreationFailed = true;
		return nullptr;
	}
	$var($Locale, locale, $nc(locator)->getLocale());
	$var($InputMethod, inputMethodInstance, nullptr);
	if (this->usedInputMethods != nullptr) {
		$assign(inputMethodInstance, $cast($InputMethod, this->usedInputMethods->remove($(locator->deriveLocator(nullptr)))));
		if (inputMethodInstance != nullptr) {
			if (locale != nullptr) {
				inputMethodInstance->setLocale(locale);
			}
			inputMethodInstance->setCharacterSubsets(this->characterSubsets);
			$var($Boolean, state, $cast($Boolean, $nc(this->perInputMethodState)->remove(inputMethodInstance)));
			if (state != nullptr) {
				enableClientWindowNotification(inputMethodInstance, state->booleanValue());
			}
			$cast($InputMethodContext, this)->setInputMethodSupportsBelowTheSpot((!($instanceOf($InputMethodAdapter, inputMethodInstance))) || $cast($InputMethodAdapter, inputMethodInstance)->supportsBelowTheSpot());
			return inputMethodInstance;
		}
	}
	try {
		$assign(inputMethodInstance, $$nc(locator->getDescriptor())->createInputMethod());
		if (locale != nullptr) {
			$nc(inputMethodInstance)->setLocale(locale);
		}
		$nc(inputMethodInstance)->setInputMethodContext($cast($InputMethodContext, this));
		inputMethodInstance->setCharacterSubsets(this->characterSubsets);
	} catch ($Exception& e) {
		logCreationFailed(e);
		this->inputMethodCreationFailed = true;
		if (inputMethodInstance != nullptr) {
			$assign(inputMethodInstance, nullptr);
		}
	} catch ($LinkageError& e) {
		logCreationFailed(e);
		this->inputMethodCreationFailed = true;
	}
	$cast($InputMethodContext, this)->setInputMethodSupportsBelowTheSpot((!($instanceOf($InputMethodAdapter, inputMethodInstance))) || $cast($InputMethodAdapter, inputMethodInstance)->supportsBelowTheSpot());
	return inputMethodInstance;
}

void InputContext::logCreationFailed($Throwable* throwable) {
	$useLocalObjectStack();
	$var($PlatformLogger, logger, $PlatformLogger::getLogger("sun.awt.im"_s));
	$init($PlatformLogger$Level);
	if ($nc(logger)->isLoggable($PlatformLogger$Level::CONFIG)) {
		$var($String, errorTextFormat, $Toolkit::getProperty("AWT.InputMethodCreationFailed"_s, "Could not create {0}. Reason: {1}"_s));
		$var($ObjectArray, args, $new($ObjectArray, {
			$($$nc($nc(this->inputMethodLocator)->getDescriptor())->getInputMethodDisplayName(nullptr, $($Locale::getDefault()))),
			$($nc(throwable)->getLocalizedMessage())
		}));
		$var($MessageFormat, mf, $new($MessageFormat, errorTextFormat));
		logger->config($(mf->format(args)));
	}
}

$InputMethodLocator* InputContext::getInputMethodLocator() {
	if (this->inputMethod != nullptr) {
		return $nc(this->inputMethodLocator)->deriveLocator($(this->inputMethod->getLocale()));
	}
	return this->inputMethodLocator;
}

void InputContext::endComposition() {
	$synchronized(this) {
		if (this->inputMethod != nullptr) {
			this->inputMethod->endComposition();
		}
	}
}

void InputContext::enableClientWindowNotification($InputMethod* requester, bool enable) {
	$synchronized(this) {
		if (requester != this->inputMethod) {
			if (this->perInputMethodState == nullptr) {
				$set(this, perInputMethodState, $new($HashMap, 5));
			}
			$nc(this->perInputMethodState)->put(requester, $($Boolean::valueOf(enable)));
			return;
		}
		if (this->clientWindowNotificationEnabled != enable) {
			$set(this, clientWindowLocation, nullptr);
			this->clientWindowNotificationEnabled = enable;
		}
		if (this->clientWindowNotificationEnabled) {
			if (!addedClientWindowListeners()) {
				addClientWindowListeners();
			}
			if (this->clientWindowListened != nullptr) {
				$set(this, clientWindowLocation, nullptr);
				notifyClientWindowChange(this->clientWindowListened);
			}
		} else if (addedClientWindowListeners()) {
			removeClientWindowListeners();
		}
	}
}

void InputContext::notifyClientWindowChange($Window* window) {
	$synchronized(this) {
		if (this->inputMethod == nullptr) {
			return;
		}
		bool var$0 = !$nc(window)->isVisible();
		if (var$0 || (($instanceOf($Frame, window)) && $cast($Frame, window)->getState() == $Frame::ICONIFIED)) {
			$set(this, clientWindowLocation, nullptr);
			$nc(this->inputMethod)->notifyClientWindowChange(nullptr);
			return;
		}
		$var($Rectangle, location, window->getBounds());
		if (this->clientWindowLocation == nullptr || !this->clientWindowLocation->equals(location)) {
			$set(this, clientWindowLocation, location);
			$nc(this->inputMethod)->notifyClientWindowChange(this->clientWindowLocation);
		}
	}
}

void InputContext::addClientWindowListeners() {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($Component, client, getClientComponent());
		if (client == nullptr) {
			return;
		}
		$var($Window, window, getComponentWindow(client));
		if (window == nullptr) {
			return;
		}
		$nc(window)->addComponentListener(this);
		window->addWindowListener(this);
		$set(this, clientWindowListened, window);
	}
}

void InputContext::removeClientWindowListeners() {
	$synchronized(this) {
		$nc(this->clientWindowListened)->removeComponentListener(this);
		$nc(this->clientWindowListened)->removeWindowListener(this);
		$set(this, clientWindowListened, nullptr);
	}
}

bool InputContext::addedClientWindowListeners() {
	return this->clientWindowListened != nullptr;
}

void InputContext::componentResized($ComponentEvent* e) {
	notifyClientWindowChange($$cast($Window, $nc(e)->getComponent()));
}

void InputContext::componentMoved($ComponentEvent* e) {
	notifyClientWindowChange($$cast($Window, $nc(e)->getComponent()));
}

void InputContext::componentShown($ComponentEvent* e) {
	notifyClientWindowChange($$cast($Window, $nc(e)->getComponent()));
}

void InputContext::componentHidden($ComponentEvent* e) {
	notifyClientWindowChange($$cast($Window, $nc(e)->getComponent()));
}

void InputContext::windowOpened($WindowEvent* e) {
}

void InputContext::windowClosing($WindowEvent* e) {
}

void InputContext::windowClosed($WindowEvent* e) {
}

void InputContext::windowIconified($WindowEvent* e) {
	notifyClientWindowChange($($nc(e)->getWindow()));
}

void InputContext::windowDeiconified($WindowEvent* e) {
	notifyClientWindowChange($($nc(e)->getWindow()));
}

void InputContext::windowActivated($WindowEvent* e) {
}

void InputContext::windowDeactivated($WindowEvent* e) {
}

void InputContext::initializeInputMethodSelectionKey() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged($$new($InputContext$2, this));
}

$AWTKeyStroke* InputContext::getInputMethodSelectionKeyStroke($Preferences* root) {
	try {
		if ($nc(root)->nodeExists(InputContext::inputMethodSelectionKeyPath)) {
			$var($Preferences, node, root->node(InputContext::inputMethodSelectionKeyPath));
			int32_t keyCode = $nc(node)->getInt(InputContext::inputMethodSelectionKeyCodeName, $KeyEvent::VK_UNDEFINED);
			if (keyCode != $KeyEvent::VK_UNDEFINED) {
				int32_t modifiers = node->getInt(InputContext::inputMethodSelectionKeyModifiersName, 0);
				return $AWTKeyStroke::getAWTKeyStroke(keyCode, modifiers);
			}
		}
	} catch ($BackingStoreException& bse) {
	}
	return nullptr;
}

void InputContext::clinit$($Class* clazz) {
	$assignStatic(InputContext::inputMethodSelectionKeyPath, "/java/awt/im/selectionKey"_s);
	$assignStatic(InputContext::inputMethodSelectionKeyCodeName, "keyCode"_s);
	$assignStatic(InputContext::inputMethodSelectionKeyModifiersName, "modifiers"_s);
	$assignStatic(InputContext::log, $PlatformLogger::getLogger("sun.awt.im.InputContext"_s));
	$assignStatic(InputContext::previousInputMethod, nullptr);
	InputContext::inputMethodSelectionKeyInitialized = false;
}

InputContext::InputContext() {
}

$Class* InputContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputContext, log)},
		{"inputMethodLocator", "Lsun/awt/im/InputMethodLocator;", nullptr, $PRIVATE, $field(InputContext, inputMethodLocator)},
		{"inputMethod", "Ljava/awt/im/spi/InputMethod;", nullptr, $PRIVATE, $field(InputContext, inputMethod)},
		{"inputMethodCreationFailed", "Z", nullptr, $PRIVATE, $field(InputContext, inputMethodCreationFailed)},
		{"usedInputMethods", "Ljava/util/HashMap;", "Ljava/util/HashMap<Lsun/awt/im/InputMethodLocator;Ljava/awt/im/spi/InputMethod;>;", $PRIVATE, $field(InputContext, usedInputMethods)},
		{"currentClientComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(InputContext, currentClientComponent)},
		{"awtFocussedComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(InputContext, awtFocussedComponent)},
		{"isInputMethodActive", "Z", nullptr, $PRIVATE, $field(InputContext, isInputMethodActive)},
		{"characterSubsets", "[Ljava/lang/Character$Subset;", nullptr, $PRIVATE, $field(InputContext, characterSubsets)},
		{"compositionAreaHidden", "Z", nullptr, $PRIVATE, $field(InputContext, compositionAreaHidden)},
		{"inputMethodWindowContext", "Lsun/awt/im/InputContext;", nullptr, $PRIVATE | $STATIC, $staticField(InputContext, inputMethodWindowContext)},
		{"previousInputMethod", "Ljava/awt/im/spi/InputMethod;", nullptr, $PRIVATE | $STATIC, $staticField(InputContext, previousInputMethod)},
		{"clientWindowNotificationEnabled", "Z", nullptr, $PRIVATE, $field(InputContext, clientWindowNotificationEnabled)},
		{"clientWindowListened", "Ljava/awt/Window;", nullptr, $PRIVATE, $field(InputContext, clientWindowListened)},
		{"clientWindowLocation", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(InputContext, clientWindowLocation)},
		{"perInputMethodState", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/awt/im/spi/InputMethod;Ljava/lang/Boolean;>;", $PRIVATE, $field(InputContext, perInputMethodState)},
		{"inputMethodSelectionKey", "Ljava/awt/AWTKeyStroke;", nullptr, $PRIVATE | $STATIC, $staticField(InputContext, inputMethodSelectionKey)},
		{"inputMethodSelectionKeyInitialized", "Z", nullptr, $PRIVATE | $STATIC, $staticField(InputContext, inputMethodSelectionKeyInitialized)},
		{"inputMethodSelectionKeyPath", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputContext, inputMethodSelectionKeyPath)},
		{"inputMethodSelectionKeyCodeName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputContext, inputMethodSelectionKeyCodeName)},
		{"inputMethodSelectionKeyModifiersName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputContext, inputMethodSelectionKeyModifiersName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PROTECTED, $method(InputContext, init$, void)},
		{"activateInputMethod", "(Z)V", nullptr, $PRIVATE, $method(InputContext, activateInputMethod, void, bool)},
		{"addClientWindowListeners", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(InputContext, addClientWindowListeners, void)},
		{"addedClientWindowListeners", "()Z", nullptr, $PRIVATE, $method(InputContext, addedClientWindowListeners, bool)},
		{"changeInputMethod", "(Lsun/awt/im/InputMethodLocator;)V", nullptr, $SYNCHRONIZED, $virtualMethod(InputContext, changeInputMethod, void, $InputMethodLocator*)},
		{"checkInputMethodSelectionKey", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PRIVATE, $method(InputContext, checkInputMethodSelectionKey, bool, $KeyEvent*)},
		{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(InputContext, componentHidden, void, $ComponentEvent*)},
		{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(InputContext, componentMoved, void, $ComponentEvent*)},
		{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(InputContext, componentResized, void, $ComponentEvent*)},
		{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(InputContext, componentShown, void, $ComponentEvent*)},
		{"deactivateInputMethod", "(Z)V", nullptr, $PRIVATE, $method(InputContext, deactivateInputMethod, void, bool)},
		{"disableNativeIM", "()V", nullptr, $PUBLIC, $virtualMethod(InputContext, disableNativeIM, void)},
		{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC, $virtualMethod(InputContext, dispatchEvent, void, $AWTEvent*)},
		{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(InputContext, dispose, void)},
		{"enableClientWindowNotification", "(Ljava/awt/im/spi/InputMethod;Z)V", nullptr, $SYNCHRONIZED, $virtualMethod(InputContext, enableClientWindowNotification, void, $InputMethod*, bool)},
		{"endComposition", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(InputContext, endComposition, void)},
		{"focusGained", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(InputContext, focusGained, void, $Component*)},
		{"focusLost", "(Ljava/awt/Component;Z)V", nullptr, $PRIVATE, $method(InputContext, focusLost, void, $Component*, bool)},
		{"getClientComponent", "()Ljava/awt/Component;", nullptr, 0, $virtualMethod(InputContext, getClientComponent, $Component*)},
		{"getComponentWindow", "(Ljava/awt/Component;)Ljava/awt/Window;", nullptr, $STATIC, $staticMethod(InputContext, getComponentWindow, $Window*, $Component*)},
		{"getInputMethod", "()Ljava/awt/im/spi/InputMethod;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(InputContext, getInputMethod, $InputMethod*)},
		{"getInputMethodControlObject", "()Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(InputContext, getInputMethodControlObject, $Object*)},
		{"getInputMethodInfo", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InputContext, getInputMethodInfo, $String*)},
		{"getInputMethodInstance", "()Ljava/awt/im/spi/InputMethod;", nullptr, $PRIVATE, $method(InputContext, getInputMethodInstance, $InputMethod*)},
		{"getInputMethodLocator", "()Lsun/awt/im/InputMethodLocator;", nullptr, 0, $virtualMethod(InputContext, getInputMethodLocator, $InputMethodLocator*)},
		{"getInputMethodSelectionKeyStroke", "(Ljava/util/prefs/Preferences;)Ljava/awt/AWTKeyStroke;", nullptr, $PRIVATE, $method(InputContext, getInputMethodSelectionKeyStroke, $AWTKeyStroke*, $Preferences*)},
		{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(InputContext, getLocale, $Locale*)},
		{"initializeInputMethodSelectionKey", "()V", nullptr, $PRIVATE, $method(InputContext, initializeInputMethodSelectionKey, void)},
		{"isCompositionEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(InputContext, isCompositionEnabled, bool)},
		{"logCreationFailed", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE, $method(InputContext, logCreationFailed, void, $Throwable*)},
		{"notifyClientWindowChange", "(Ljava/awt/Window;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(InputContext, notifyClientWindowChange, void, $Window*)},
		{"reconvert", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(InputContext, reconvert, void)},
		{"removeClientWindowListeners", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(InputContext, removeClientWindowListeners, void)},
		{"removeNotify", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(InputContext, removeNotify, void, $Component*)},
		{"selectInputMethod", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(InputContext, selectInputMethod, bool, $Locale*)},
		{"setCharacterSubsets", "([Ljava/lang/Character$Subset;)V", nullptr, $PUBLIC, $virtualMethod(InputContext, setCharacterSubsets, void, $Character$SubsetArray*)},
		{"setCompositionEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(InputContext, setCompositionEnabled, void, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(InputContext, windowActivated, void, $WindowEvent*)},
		{"windowClosed", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(InputContext, windowClosed, void, $WindowEvent*)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(InputContext, windowClosing, void, $WindowEvent*)},
		{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(InputContext, windowDeactivated, void, $WindowEvent*)},
		{"windowDeiconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(InputContext, windowDeiconified, void, $WindowEvent*)},
		{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(InputContext, windowIconified, void, $WindowEvent*)},
		{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(InputContext, windowOpened, void, $WindowEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.im.InputContext$2", nullptr, nullptr, 0},
		{"sun.awt.im.InputContext$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.im.InputContext",
		"java.awt.im.InputContext",
		"java.awt.event.ComponentListener,java.awt.event.WindowListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.im.InputContext$2,sun.awt.im.InputContext$1"
	};
	$loadClass(InputContext, name, initialize, &classInfo$$, InputContext::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(InputContext));
	});
	return class$;
}

$Class* InputContext::class$ = nullptr;

		} // im
	} // awt
} // sun