#include <javax/swing/FocusManager.h>
#include <java/awt/DefaultFocusTraversalPolicy.h>
#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/KeyboardFocusManager.h>
#include <javax/swing/DelegatingDefaultFocusManager.h>
#include <jcpp.h>

#undef FOCUS_MANAGER_CLASS_PROPERTY

using $DefaultFocusTraversalPolicy = ::java::awt::DefaultFocusTraversalPolicy;
using $DefaultKeyboardFocusManager = ::java::awt::DefaultKeyboardFocusManager;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DelegatingDefaultFocusManager = ::javax::swing::DelegatingDefaultFocusManager;

namespace javax {
	namespace swing {

$String* FocusManager::FOCUS_MANAGER_CLASS_PROPERTY = nullptr;
bool FocusManager::enabled = false;

void FocusManager::init$() {
	$DefaultKeyboardFocusManager::init$();
}

FocusManager* FocusManager::getCurrentManager() {
	$init(FocusManager);
	$var($KeyboardFocusManager, manager, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
	if ($instanceOf(FocusManager, manager)) {
		return $cast(FocusManager, manager);
	} else {
		return $new($DelegatingDefaultFocusManager, manager);
	}
}

void FocusManager::setCurrentManager(FocusManager* aFocusManager) {
	$init(FocusManager);
	$var($KeyboardFocusManager, toSet, ($instanceOf($DelegatingDefaultFocusManager, aFocusManager)) ? $cast($DelegatingDefaultFocusManager, aFocusManager)->getDelegate() : $cast($KeyboardFocusManager, aFocusManager));
	$KeyboardFocusManager::setCurrentKeyboardFocusManager(toSet);
}

void FocusManager::disableSwingFocusManager() {
	$init(FocusManager);
	$useLocalObjectStack();
	if (FocusManager::enabled) {
		FocusManager::enabled = false;
		$$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->setDefaultFocusTraversalPolicy($$new($DefaultFocusTraversalPolicy));
	}
}

bool FocusManager::isFocusManagerEnabled() {
	$init(FocusManager);
	return FocusManager::enabled;
}

void FocusManager::clinit$($Class* clazz) {
	$assignStatic(FocusManager::FOCUS_MANAGER_CLASS_PROPERTY, "FocusManagerClassName"_s);
	FocusManager::enabled = true;
}

FocusManager::FocusManager() {
}

$Class* FocusManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FOCUS_MANAGER_CLASS_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FocusManager, FOCUS_MANAGER_CLASS_PROPERTY)},
		{"enabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FocusManager, enabled)},
		{}
	};
	$CompoundAttribute disableSwingFocusManagermethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute isFocusManagerEnabledmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(FocusManager, init$, void)},
		{"disableSwingFocusManager", "()V", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(FocusManager, disableSwingFocusManager, void), nullptr, nullptr, disableSwingFocusManagermethodAnnotations$$},
		{"getCurrentManager", "()Ljavax/swing/FocusManager;", nullptr, $PUBLIC | $STATIC, $staticMethod(FocusManager, getCurrentManager, FocusManager*)},
		{"isFocusManagerEnabled", "()Z", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(FocusManager, isFocusManagerEnabled, bool), nullptr, nullptr, isFocusManagerEnabledmethodAnnotations$$},
		{"setCurrentManager", "(Ljavax/swing/FocusManager;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FocusManager, setCurrentManager, void, FocusManager*), "java.lang.SecurityException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.FocusManager",
		"java.awt.DefaultKeyboardFocusManager",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FocusManager, name, initialize, &classInfo$$, FocusManager::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(FocusManager));
	});
	return class$;
}

$Class* FocusManager::class$ = nullptr;

	} // swing
} // javax