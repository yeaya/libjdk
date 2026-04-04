#include <sun/awt/im/InputMethodManager.h>
#include <java/awt/Component.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/Locale.h>
#include <sun/awt/im/ExecutableInputMethodManager.h>
#include <sun/awt/im/InputContext.h>
#include <sun/awt/im/InputMethodLocator.h>
#include <jcpp.h>

#undef LOCK
#undef NORM_PRIORITY

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Locale = ::java::util::Locale;
using $ExecutableInputMethodManager = ::sun::awt::im::ExecutableInputMethodManager;
using $InputContext = ::sun::awt::im::InputContext;
using $InputMethodLocator = ::sun::awt::im::InputMethodLocator;

namespace sun {
	namespace awt {
		namespace im {

$String* InputMethodManager::threadName = nullptr;
$Object* InputMethodManager::LOCK = nullptr;
InputMethodManager* InputMethodManager::inputMethodManager = nullptr;

void InputMethodManager::init$() {
}

InputMethodManager* InputMethodManager::getInstance() {
	$init(InputMethodManager);
	$useLocalObjectStack();
	if (InputMethodManager::inputMethodManager != nullptr) {
		return InputMethodManager::inputMethodManager;
	}
	$synchronized(InputMethodManager::LOCK) {
		if (InputMethodManager::inputMethodManager == nullptr) {
			$var($ExecutableInputMethodManager, imm, $new($ExecutableInputMethodManager));
			if (imm->hasMultipleInputMethods()) {
				imm->initialize();
				$var($Thread, immThread, $new($Thread, nullptr, imm, InputMethodManager::threadName, 0, false));
				immThread->setDaemon(true);
				immThread->setPriority($Thread::NORM_PRIORITY + 1);
				immThread->start();
			}
			$assignStatic(InputMethodManager::inputMethodManager, imm);
		}
	}
	return InputMethodManager::inputMethodManager;
}

void InputMethodManager::clinit$($Class* clazz) {
	$assignStatic(InputMethodManager::threadName, "AWT-InputMethodManager"_s);
	$assignStatic(InputMethodManager::LOCK, $new($Object));
}

InputMethodManager::InputMethodManager() {
}

$Class* InputMethodManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"threadName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputMethodManager, threadName)},
		{"LOCK", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputMethodManager, LOCK)},
		{"inputMethodManager", "Lsun/awt/im/InputMethodManager;", nullptr, $PRIVATE | $STATIC, $staticField(InputMethodManager, inputMethodManager)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InputMethodManager, init$, void)},
		{"findInputMethod", "(Ljava/util/Locale;)Lsun/awt/im/InputMethodLocator;", nullptr, $ABSTRACT, $virtualMethod(InputMethodManager, findInputMethod, $InputMethodLocator*, $Locale*)},
		{"getDefaultKeyboardLocale", "()Ljava/util/Locale;", nullptr, $ABSTRACT, $virtualMethod(InputMethodManager, getDefaultKeyboardLocale, $Locale*)},
		{"getInstance", "()Lsun/awt/im/InputMethodManager;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(InputMethodManager, getInstance, InputMethodManager*)},
		{"getTriggerMenuString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodManager, getTriggerMenuString, $String*)},
		{"hasMultipleInputMethods", "()Z", nullptr, $ABSTRACT, $virtualMethod(InputMethodManager, hasMultipleInputMethods, bool)},
		{"notifyChangeRequest", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodManager, notifyChangeRequest, void, $Component*)},
		{"notifyChangeRequestByHotKey", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodManager, notifyChangeRequestByHotKey, void, $Component*)},
		{"setInputContext", "(Lsun/awt/im/InputContext;)V", nullptr, $ABSTRACT, $virtualMethod(InputMethodManager, setInputContext, void, $InputContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.awt.im.InputMethodManager",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InputMethodManager, name, initialize, &classInfo$$, InputMethodManager::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(InputMethodManager);
	});
	return class$;
}

$Class* InputMethodManager::class$ = nullptr;

		} // im
	} // awt
} // sun