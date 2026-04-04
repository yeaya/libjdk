#include <java/awt/DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/SentEvent.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $DefaultKeyboardFocusManager = ::java::awt::DefaultKeyboardFocusManager;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $SentEvent = ::java::awt::SentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace java {
	namespace awt {

void DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent::init$($AWTEvent* nested, $AppContext* toNotify) {
	$SentEvent::init$(nested, toNotify);
}

void DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent::dispatch() {
	$useLocalObjectStack();
	$var($KeyboardFocusManager, manager, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
	$var($DefaultKeyboardFocusManager, defaultManager, ($instanceOf($DefaultKeyboardFocusManager, manager)) ? $cast($DefaultKeyboardFocusManager, manager) : ($DefaultKeyboardFocusManager*)nullptr);
	if (defaultManager != nullptr) {
		$synchronized(defaultManager) {
			++defaultManager->inSendMessage;
		}
	}
	$SentEvent::dispatch();
	if (defaultManager != nullptr) {
		$synchronized(defaultManager) {
			--defaultManager->inSendMessage;
		}
	}
}

DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent::DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent() {
}

$Class* DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/AWTEvent;Lsun/awt/AppContext;)V", nullptr, $PUBLIC, $method(DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent, init$, void, $AWTEvent*, $AppContext*)},
		{"dispatch", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent, dispatch, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent", "java.awt.DefaultKeyboardFocusManager", "DefaultKeyboardFocusManagerSentEvent", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent",
		"java.awt.SentEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.DefaultKeyboardFocusManager"
	};
	$loadClass(DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent));
	});
	return class$;
}

$Class* DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent::class$ = nullptr;

	} // awt
} // java