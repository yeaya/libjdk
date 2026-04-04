#include <sun/awt/windows/WDesktopPeer.h>
#include <java/awt/Desktop$Action.h>
#include <java/awt/EventQueue.h>
#include <java/awt/desktop/SystemEventListener.h>
#include <java/awt/desktop/SystemSleepEvent.h>
#include <java/awt/desktop/SystemSleepListener.h>
#include <java/awt/desktop/UserSessionEvent$Reason.h>
#include <java/awt/desktop/UserSessionEvent.h>
#include <java/awt/desktop/UserSessionListener.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/util/EventListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <sun/awt/windows/WDesktopPeer$1.h>
#include <jcpp.h>

#undef ACTION_EDIT_VERB
#undef ACTION_OPEN_VERB
#undef ACTION_PRINT_VERB

using $SystemSleepListenerArray = $Array<::java::awt::desktop::SystemSleepListener>;
using $UserSessionListenerArray = $Array<::java::awt::desktop::UserSessionListener>;
using $Desktop$Action = ::java::awt::Desktop$Action;
using $EventQueue = ::java::awt::EventQueue;
using $SystemEventListener = ::java::awt::desktop::SystemEventListener;
using $SystemSleepEvent = ::java::awt::desktop::SystemSleepEvent;
using $SystemSleepListener = ::java::awt::desktop::SystemSleepListener;
using $UserSessionEvent = ::java::awt::desktop::UserSessionEvent;
using $UserSessionEvent$Reason = ::java::awt::desktop::UserSessionEvent$Reason;
using $UserSessionListener = ::java::awt::desktop::UserSessionListener;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URI = ::java::net::URI;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $WDesktopPeer$1 = ::sun::awt::windows::WDesktopPeer$1;

namespace sun {
	namespace awt {
		namespace windows {

class WDesktopPeer$$Lambda$lambda$userSessionCallback$0 : public $Runnable {
	$class(WDesktopPeer$$Lambda$lambda$userSessionCallback$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bool activated, $UserSessionListener* use, $UserSessionEvent$Reason* reason) {
		this->activated = activated;
		$set(this, use, use);
		$set(this, reason, reason);
	}
	virtual void run() override {
		WDesktopPeer::lambda$userSessionCallback$0(activated, use, reason);
	}
	bool activated = false;
	$UserSessionListener* use = nullptr;
	$UserSessionEvent$Reason* reason = nullptr;
};
$Class* WDesktopPeer$$Lambda$lambda$userSessionCallback$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"activated", "Z", nullptr, $PUBLIC, $field(WDesktopPeer$$Lambda$lambda$userSessionCallback$0, activated)},
		{"use", "Ljava/awt/desktop/UserSessionListener;", nullptr, $PUBLIC, $field(WDesktopPeer$$Lambda$lambda$userSessionCallback$0, use)},
		{"reason", "Ljava/awt/desktop/UserSessionEvent$Reason;", nullptr, $PUBLIC, $field(WDesktopPeer$$Lambda$lambda$userSessionCallback$0, reason)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZLjava/awt/desktop/UserSessionListener;Ljava/awt/desktop/UserSessionEvent$Reason;)V", nullptr, $PUBLIC, $method(WDesktopPeer$$Lambda$lambda$userSessionCallback$0, init$, void, bool, $UserSessionListener*, $UserSessionEvent$Reason*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WDesktopPeer$$Lambda$lambda$userSessionCallback$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WDesktopPeer$$Lambda$lambda$userSessionCallback$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WDesktopPeer$$Lambda$lambda$userSessionCallback$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WDesktopPeer$$Lambda$lambda$userSessionCallback$0);
	});
	return class$;
}
$Class* WDesktopPeer$$Lambda$lambda$userSessionCallback$0::class$ = nullptr;

class WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1 : public $Runnable {
	$class(WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bool resumed, $SystemSleepListener* ssl) {
		this->resumed = resumed;
		$set(this, ssl, ssl);
	}
	virtual void run() override {
		WDesktopPeer::lambda$systemSleepCallback$1(resumed, ssl);
	}
	bool resumed = false;
	$SystemSleepListener* ssl = nullptr;
};
$Class* WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"resumed", "Z", nullptr, $PUBLIC, $field(WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1, resumed)},
		{"ssl", "Ljava/awt/desktop/SystemSleepListener;", nullptr, $PUBLIC, $field(WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1, ssl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZLjava/awt/desktop/SystemSleepListener;)V", nullptr, $PUBLIC, $method(WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1, init$, void, bool, $SystemSleepListener*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.windows.WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1);
	});
	return class$;
}
$Class* WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1::class$ = nullptr;

$String* WDesktopPeer::ACTION_OPEN_VERB = nullptr;
$String* WDesktopPeer::ACTION_EDIT_VERB = nullptr;
$String* WDesktopPeer::ACTION_PRINT_VERB = nullptr;
$EventListenerList* WDesktopPeer::listenerList = nullptr;

void WDesktopPeer::init() {
	$init(WDesktopPeer);
	$prepareNativeStatic(init, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void WDesktopPeer::init$() {
	init();
}

bool WDesktopPeer::isSupported($Desktop$Action* action) {
	$init($WDesktopPeer$1);
	switch ($nc($WDesktopPeer$1::$SwitchMap$java$awt$Desktop$Action)->get($nc((action))->ordinal())) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		return true;
	default:
		return false;
	}
}

void WDesktopPeer::open($File* file) {
	this->ShellExecute(file, WDesktopPeer::ACTION_OPEN_VERB);
}

void WDesktopPeer::edit($File* file) {
	this->ShellExecute(file, WDesktopPeer::ACTION_EDIT_VERB);
}

void WDesktopPeer::print($File* file) {
	this->ShellExecute(file, WDesktopPeer::ACTION_PRINT_VERB);
}

void WDesktopPeer::mail($URI* uri) {
	this->ShellExecute(uri, WDesktopPeer::ACTION_OPEN_VERB);
}

void WDesktopPeer::browse($URI* uri) {
	this->ShellExecute(uri, WDesktopPeer::ACTION_OPEN_VERB);
}

void WDesktopPeer::ShellExecute($File* file, $String* verb) {
	$useLocalObjectStack();
	$var($String, errMsg, ShellExecute($($nc(file)->getAbsolutePath()), verb));
	if (errMsg != nullptr) {
		$throwNew($IOException, $$str({"Failed to "_s, verb, " "_s, file, ". Error message: "_s, errMsg}));
	}
}

void WDesktopPeer::ShellExecute($URI* uri, $String* verb) {
	$useLocalObjectStack();
	$var($String, errmsg, ShellExecute($($nc(uri)->toString()), verb));
	if (errmsg != nullptr) {
		$throwNew($IOException, $$str({"Failed to "_s, verb, " "_s, uri, ". Error message: "_s, errmsg}));
	}
}

$String* WDesktopPeer::ShellExecute($String* fileOrUri, $String* verb) {
	$init(WDesktopPeer);
	$prepareNativeStatic(ShellExecute, $String*, $String* fileOrUri, $String* verb);
	$var($String, $ret, $invokeNativeStaticObject(fileOrUri, verb));
	$finishNativeStatic();
	return $ret;
}

void WDesktopPeer::disableSuddenTermination() {
	setSuddenTerminationEnabled(false);
}

void WDesktopPeer::enableSuddenTermination() {
	setSuddenTerminationEnabled(true);
}

void WDesktopPeer::setSuddenTerminationEnabled(bool enable) {
	$init(WDesktopPeer);
	$prepareNativeStatic(setSuddenTerminationEnabled, void, bool enable);
	$invokeNativeStatic(enable);
	$finishNativeStatic();
}

void WDesktopPeer::addAppEventListener($SystemEventListener* listener) {
	if ($instanceOf($UserSessionListener, listener)) {
		$load($UserSessionListener);
		WDesktopPeer::listenerList->add($UserSessionListener::class$, $cast($UserSessionListener, listener));
	}
	if ($instanceOf($SystemSleepListener, listener)) {
		$load($SystemSleepListener);
		WDesktopPeer::listenerList->add($SystemSleepListener::class$, $cast($SystemSleepListener, listener));
	}
}

void WDesktopPeer::removeAppEventListener($SystemEventListener* listener) {
	if ($instanceOf($UserSessionListener, listener)) {
		$load($UserSessionListener);
		WDesktopPeer::listenerList->remove($UserSessionListener::class$, $cast($UserSessionListener, listener));
	}
	if ($instanceOf($SystemSleepListener, listener)) {
		$load($SystemSleepListener);
		WDesktopPeer::listenerList->remove($SystemSleepListener::class$, $cast($SystemSleepListener, listener));
	}
}

void WDesktopPeer::userSessionCallback(bool activated, $UserSessionEvent$Reason* reason) {
	$init(WDesktopPeer);
	$useLocalObjectStack();
	$load($UserSessionListener);
	$var($UserSessionListenerArray, listeners, $cast($UserSessionListenerArray, WDesktopPeer::listenerList->getListeners($UserSessionListener::class$)));
	{
		$var($UserSessionListenerArray, arr$, listeners);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UserSessionListener, use, arr$->get(i$));
			{
				$EventQueue::invokeLater($$new(WDesktopPeer$$Lambda$lambda$userSessionCallback$0, activated, use, reason));
			}
		}
	}
}

void WDesktopPeer::systemSleepCallback(bool resumed) {
	$init(WDesktopPeer);
	$useLocalObjectStack();
	$load($SystemSleepListener);
	$var($SystemSleepListenerArray, listeners, $cast($SystemSleepListenerArray, WDesktopPeer::listenerList->getListeners($SystemSleepListener::class$)));
	{
		$var($SystemSleepListenerArray, arr$, listeners);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($SystemSleepListener, ssl, arr$->get(i$));
			{
				$EventQueue::invokeLater($$new(WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1, resumed, ssl));
			}
		}
	}
}

bool WDesktopPeer::moveToTrash($File* file) {
	return moveToTrash($($nc(file)->getAbsolutePath()));
}

bool WDesktopPeer::moveToTrash($String* file) {
	$init(WDesktopPeer);
	$prepareNativeStatic(moveToTrash, bool, $String* file);
	bool $ret = $invokeNativeStatic(file);
	$finishNativeStatic();
	return $ret;
}

void WDesktopPeer::lambda$systemSleepCallback$1(bool resumed, $SystemSleepListener* ssl) {
	$init(WDesktopPeer);
	$useLocalObjectStack();
	if (resumed) {
		$nc(ssl)->systemAwoke($$new($SystemSleepEvent));
	} else {
		$nc(ssl)->systemAboutToSleep($$new($SystemSleepEvent));
	}
}

void WDesktopPeer::lambda$userSessionCallback$0(bool activated, $UserSessionListener* use, $UserSessionEvent$Reason* reason) {
	$init(WDesktopPeer);
	$useLocalObjectStack();
	if (activated) {
		$nc(use)->userSessionActivated($$new($UserSessionEvent, reason));
	} else {
		$nc(use)->userSessionDeactivated($$new($UserSessionEvent, reason));
	}
}

void WDesktopPeer::clinit$($Class* clazz) {
	$assignStatic(WDesktopPeer::ACTION_OPEN_VERB, "open"_s);
	$assignStatic(WDesktopPeer::ACTION_EDIT_VERB, "edit"_s);
	$assignStatic(WDesktopPeer::ACTION_PRINT_VERB, "print"_s);
	$assignStatic(WDesktopPeer::listenerList, $new($EventListenerList));
}

WDesktopPeer::WDesktopPeer() {
}

$Class* WDesktopPeer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.awt.windows.WDesktopPeer$$Lambda$lambda$userSessionCallback$0")) {
			return WDesktopPeer$$Lambda$lambda$userSessionCallback$0::load$(name, initialize);
		}
		if (name->equals("sun.awt.windows.WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1")) {
			return WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"ACTION_OPEN_VERB", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WDesktopPeer, ACTION_OPEN_VERB)},
		{"ACTION_EDIT_VERB", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WDesktopPeer, ACTION_EDIT_VERB)},
		{"ACTION_PRINT_VERB", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WDesktopPeer, ACTION_PRINT_VERB)},
		{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WDesktopPeer, listenerList)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WDesktopPeer, init$, void)},
		{"ShellExecute", "(Ljava/io/File;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(WDesktopPeer, ShellExecute, void, $File*, $String*), "java.io.IOException"},
		{"ShellExecute", "(Ljava/net/URI;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(WDesktopPeer, ShellExecute, void, $URI*, $String*), "java.io.IOException"},
		{"ShellExecute", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WDesktopPeer, ShellExecute, $String*, $String*, $String*)},
		{"addAppEventListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, $PUBLIC, $virtualMethod(WDesktopPeer, addAppEventListener, void, $SystemEventListener*)},
		{"browse", "(Ljava/net/URI;)V", nullptr, $PUBLIC, $virtualMethod(WDesktopPeer, browse, void, $URI*), "java.io.IOException"},
		{"disableSuddenTermination", "()V", nullptr, $PUBLIC, $virtualMethod(WDesktopPeer, disableSuddenTermination, void)},
		{"edit", "(Ljava/io/File;)V", nullptr, $PUBLIC, $virtualMethod(WDesktopPeer, edit, void, $File*), "java.io.IOException"},
		{"enableSuddenTermination", "()V", nullptr, $PUBLIC, $virtualMethod(WDesktopPeer, enableSuddenTermination, void)},
		{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WDesktopPeer, init, void)},
		{"isSupported", "(Ljava/awt/Desktop$Action;)Z", nullptr, $PUBLIC, $virtualMethod(WDesktopPeer, isSupported, bool, $Desktop$Action*)},
		{"lambda$systemSleepCallback$1", "(ZLjava/awt/desktop/SystemSleepListener;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WDesktopPeer, lambda$systemSleepCallback$1, void, bool, $SystemSleepListener*)},
		{"lambda$userSessionCallback$0", "(ZLjava/awt/desktop/UserSessionListener;Ljava/awt/desktop/UserSessionEvent$Reason;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WDesktopPeer, lambda$userSessionCallback$0, void, bool, $UserSessionListener*, $UserSessionEvent$Reason*)},
		{"mail", "(Ljava/net/URI;)V", nullptr, $PUBLIC, $virtualMethod(WDesktopPeer, mail, void, $URI*), "java.io.IOException"},
		{"moveToTrash", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(WDesktopPeer, moveToTrash, bool, $File*)},
		{"moveToTrash", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WDesktopPeer, moveToTrash, bool, $String*)},
		{"open", "(Ljava/io/File;)V", nullptr, $PUBLIC, $virtualMethod(WDesktopPeer, open, void, $File*), "java.io.IOException"},
		{"print", "(Ljava/io/File;)V", nullptr, $PUBLIC, $virtualMethod(WDesktopPeer, print, void, $File*), "java.io.IOException"},
		{"removeAppEventListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, $PUBLIC, $virtualMethod(WDesktopPeer, removeAppEventListener, void, $SystemEventListener*)},
		{"setSuddenTerminationEnabled", "(Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WDesktopPeer, setSuddenTerminationEnabled, void, bool)},
		{"systemSleepCallback", "(Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(WDesktopPeer, systemSleepCallback, void, bool)},
		{"userSessionCallback", "(ZLjava/awt/desktop/UserSessionEvent$Reason;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(WDesktopPeer, userSessionCallback, void, bool, $UserSessionEvent$Reason*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WDesktopPeer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.windows.WDesktopPeer",
		"java.lang.Object",
		"java.awt.peer.DesktopPeer",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.windows.WDesktopPeer$1"
	};
	$loadClass(WDesktopPeer, name, initialize, &classInfo$$, WDesktopPeer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WDesktopPeer);
	});
	return class$;
}

$Class* WDesktopPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun