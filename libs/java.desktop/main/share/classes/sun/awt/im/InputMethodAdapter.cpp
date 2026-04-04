#include <sun/awt/im/InputMethodAdapter.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace sun {
	namespace awt {
		namespace im {

void InputMethodAdapter::init$() {
}

void InputMethodAdapter::setClientComponent($Component* client) {
	$set(this, clientComponent, client);
}

$Component* InputMethodAdapter::getClientComponent() {
	return this->clientComponent;
}

bool InputMethodAdapter::haveActiveClient() {
	return this->clientComponent != nullptr && this->clientComponent->getInputMethodRequests() != nullptr;
}

void InputMethodAdapter::setAWTFocussedComponent($Component* component) {
}

bool InputMethodAdapter::supportsBelowTheSpot() {
	return false;
}

void InputMethodAdapter::stopListening() {
}

void InputMethodAdapter::notifyClientWindowChange($Rectangle* location) {
}

void InputMethodAdapter::reconvert() {
	$throwNew($UnsupportedOperationException);
}

InputMethodAdapter::InputMethodAdapter() {
}

$Class* InputMethodAdapter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"clientComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(InputMethodAdapter, clientComponent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InputMethodAdapter, init$, void)},
		{"disableInputMethod", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodAdapter, disableInputMethod, void)},
		{"getClientComponent", "()Ljava/awt/Component;", nullptr, $PROTECTED, $virtualMethod(InputMethodAdapter, getClientComponent, $Component*)},
		{"getNativeInputMethodInfo", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodAdapter, getNativeInputMethodInfo, $String*)},
		{"haveActiveClient", "()Z", nullptr, $PROTECTED, $virtualMethod(InputMethodAdapter, haveActiveClient, bool)},
		{"notifyClientWindowChange", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $virtualMethod(InputMethodAdapter, notifyClientWindowChange, void, $Rectangle*)},
		{"reconvert", "()V", nullptr, $PUBLIC, $virtualMethod(InputMethodAdapter, reconvert, void)},
		{"setAWTFocussedComponent", "(Ljava/awt/Component;)V", nullptr, $PROTECTED, $virtualMethod(InputMethodAdapter, setAWTFocussedComponent, void, $Component*)},
		{"setClientComponent", "(Ljava/awt/Component;)V", nullptr, 0, $virtualMethod(InputMethodAdapter, setClientComponent, void, $Component*)},
		{"stopListening", "()V", nullptr, $PROTECTED, $virtualMethod(InputMethodAdapter, stopListening, void)},
		{"supportsBelowTheSpot", "()Z", nullptr, $PROTECTED, $virtualMethod(InputMethodAdapter, supportsBelowTheSpot, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.awt.im.InputMethodAdapter",
		"java.lang.Object",
		"java.awt.im.spi.InputMethod",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InputMethodAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InputMethodAdapter);
	});
	return class$;
}

$Class* InputMethodAdapter::class$ = nullptr;

		} // im
	} // awt
} // sun