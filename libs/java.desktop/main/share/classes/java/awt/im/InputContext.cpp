#include <java/awt/im/InputContext.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/lang/Character$Subset.h>
#include <java/util/Locale.h>
#include <sun/awt/im/InputContext.h>
#include <sun/awt/im/InputMethodContext.h>
#include <jcpp.h>

using $Character$SubsetArray = $Array<::java::lang::Character$Subset>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $InputContext = ::sun::awt::im::InputContext;
using $InputMethodContext = ::sun::awt::im::InputMethodContext;

namespace java {
	namespace awt {
		namespace im {

$CompoundAttribute _InputContext_MethodAnnotations_isCompositionEnabled7[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$MethodInfo _InputContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(InputContext, init$, void)},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC, $virtualMethod(InputContext, dispatchEvent, void, $AWTEvent*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(InputContext, dispose, void)},
	{"endComposition", "()V", nullptr, $PUBLIC, $virtualMethod(InputContext, endComposition, void)},
	{"getInputMethodControlObject", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(InputContext, getInputMethodControlObject, $Object*)},
	{"getInstance", "()Ljava/awt/im/InputContext;", nullptr, $PUBLIC | $STATIC, $staticMethod(InputContext, getInstance, InputContext*)},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(InputContext, getLocale, $Locale*)},
	{"isCompositionEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(InputContext, isCompositionEnabled, bool), nullptr, nullptr, _InputContext_MethodAnnotations_isCompositionEnabled7},
	{"reconvert", "()V", nullptr, $PUBLIC, $virtualMethod(InputContext, reconvert, void)},
	{"removeNotify", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(InputContext, removeNotify, void, $Component*)},
	{"selectInputMethod", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(InputContext, selectInputMethod, bool, $Locale*)},
	{"setCharacterSubsets", "([Ljava/lang/Character$Subset;)V", nullptr, $PUBLIC, $virtualMethod(InputContext, setCharacterSubsets, void, $Character$SubsetArray*)},
	{"setCompositionEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(InputContext, setCompositionEnabled, void, bool)},
	{}
};

$ClassInfo _InputContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.im.InputContext",
	"java.lang.Object",
	nullptr,
	nullptr,
	_InputContext_MethodInfo_
};

$Object* allocate$InputContext($Class* clazz) {
	return $of($alloc(InputContext));
}

void InputContext::init$() {
}

InputContext* InputContext::getInstance() {
	return $new($InputMethodContext);
}

bool InputContext::selectInputMethod($Locale* locale) {
	return false;
}

$Locale* InputContext::getLocale() {
	return nullptr;
}

void InputContext::setCharacterSubsets($Character$SubsetArray* subsets) {
}

void InputContext::setCompositionEnabled(bool enable) {
}

bool InputContext::isCompositionEnabled() {
	return false;
}

void InputContext::reconvert() {
}

void InputContext::dispatchEvent($AWTEvent* event) {
}

void InputContext::removeNotify($Component* client) {
}

void InputContext::endComposition() {
}

void InputContext::dispose() {
}

$Object* InputContext::getInputMethodControlObject() {
	return $of(nullptr);
}

InputContext::InputContext() {
}

$Class* InputContext::load$($String* name, bool initialize) {
	$loadClass(InputContext, name, initialize, &_InputContext_ClassInfo_, allocate$InputContext);
	return class$;
}

$Class* InputContext::class$ = nullptr;

		} // im
	} // awt
} // java