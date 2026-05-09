#include <sun/awt/X11/XTaskbarPeer.h>
#include <java/awt/MenuItem.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/Taskbar$Feature.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/UNIXToolkit$GtkVersions.h>
#include <sun/awt/UNIXToolkit.h>
#include <sun/awt/X11/XTaskbarPeer$1.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef ICON_BADGE_TEXT

using $MenuItemArray = $Array<::java::awt::MenuItem>;
using $MenuItem = ::java::awt::MenuItem;
using $PopupMenu = ::java::awt::PopupMenu;
using $Taskbar$Feature = ::java::awt::Taskbar$Feature;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $UNIXToolkit = ::sun::awt::UNIXToolkit;
using $XTaskbarPeer$1 = ::sun::awt::X11::XTaskbarPeer$1;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {
		namespace X11 {

class XTaskbarPeer$$Lambda$lambda$initWithLock$1 : public $Runnable {
	$class(XTaskbarPeer$$Lambda$lambda$initWithLock$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		XTaskbarPeer::lambda$initWithLock$1();
	}
};
$Class* XTaskbarPeer$$Lambda$lambda$initWithLock$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XTaskbarPeer$$Lambda$lambda$initWithLock$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XTaskbarPeer$$Lambda$lambda$initWithLock$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.X11.XTaskbarPeer$$Lambda$lambda$initWithLock$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(XTaskbarPeer$$Lambda$lambda$initWithLock$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XTaskbarPeer$$Lambda$lambda$initWithLock$1);
	});
	return class$;
}
$Class* XTaskbarPeer$$Lambda$lambda$initWithLock$1::class$ = nullptr;

class XTaskbarPeer$$Lambda$lambda$static$0$1 : public $PrivilegedAction {
	$class(XTaskbarPeer$$Lambda$lambda$static$0$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return $of(XTaskbarPeer::lambda$static$0());
	}
};
$Class* XTaskbarPeer$$Lambda$lambda$static$0$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XTaskbarPeer$$Lambda$lambda$static$0$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XTaskbarPeer$$Lambda$lambda$static$0$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.X11.XTaskbarPeer$$Lambda$lambda$static$0$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(XTaskbarPeer$$Lambda$lambda$static$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XTaskbarPeer$$Lambda$lambda$static$0$1);
	});
	return class$;
}
$Class* XTaskbarPeer$$Lambda$lambda$static$0$1::class$ = nullptr;

bool XTaskbarPeer::nativeLibraryLoaded = false;
bool XTaskbarPeer::initExecuted = false;
bool XTaskbarPeer::isUnity = false;

void XTaskbarPeer::initWithLock() {
	$init(XTaskbarPeer);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$XToolkit::awtLock();
	$var($Throwable, var$0, nullptr);
	try {
		if (!XTaskbarPeer::initExecuted) {
			$var($String, dname, $cast($String, $AccessController::doPrivileged($$new($GetPropertyAction, "java.desktop.appName"_s, ""_s))));
			int32_t var$1 = $$nc($UNIXToolkit::getEnabledGtkVersion())->ordinal();
			XTaskbarPeer::nativeLibraryLoaded = init(dname, var$1, $UNIXToolkit::isGtkVerbose());
			if (XTaskbarPeer::nativeLibraryLoaded) {
				$var($Thread, t, $new($Thread, nullptr, $$new(XTaskbarPeer$$Lambda$lambda$initWithLock$1), "TaskBar"_s, 0, false));
				t->setDaemon(true);
				t->start();
			}
		}
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} /*finally*/ {
		XTaskbarPeer::initExecuted = true;
		$XToolkit::awtUnlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void XTaskbarPeer::init$() {
	$set(this, menu, nullptr);
	initWithLock();
}

bool XTaskbarPeer::isTaskbarSupported() {
	$init(XTaskbarPeer);
	if (!XTaskbarPeer::isUnity) {
		return false;
	}
	initWithLock();
	return XTaskbarPeer::nativeLibraryLoaded;
}

bool XTaskbarPeer::isSupported($Taskbar$Feature* feature) {
	$init($XTaskbarPeer$1);
	switch ($nc($XTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature)->get($nc((feature))->ordinal())) {
	case 1:
	case 2:
	case 3:
	case 4:
		return true;
	default:
		return false;
	}
}

void XTaskbarPeer::setProgressValue(int32_t value) {
	bool visible = value >= 0 && value <= 100;
	double v = visible ? (double)value / 100 : 0.0;
	updateProgress(v, visible);
}

void XTaskbarPeer::setIconBadge($String* badge) {
	bool visible = false;
	int64_t val = 0;
	if (badge != nullptr) {
		try {
			val = $Long::parseLong(badge);
			visible = true;
		} catch ($NumberFormatException& e) {
			$init($Taskbar$Feature);
			$throwNew($UnsupportedOperationException, $$str({"The "_s, $Taskbar$Feature::ICON_BADGE_TEXT, " feature is not supported on the current platform!"_s}));
		}
	}
	setBadge(val, visible);
}

$PopupMenu* XTaskbarPeer::getMenu() {
	return this->menu;
}

void XTaskbarPeer::setMenu($PopupMenu* m) {
	$synchronized(this) {
		$useLocalObjectStack();
		$set(this, menu, m);
		if (this->menu != nullptr && this->menu->getItemCount() > 0) {
			int32_t msize = this->menu->getItemCount();
			$var($MenuItemArray, items, $new($MenuItemArray, msize));
			for (int32_t i = 0; i < msize; ++i) {
				items->set(i, $($nc(this->menu)->getItem(i)));
			}
			setNativeMenu(items);
		} else {
			setNativeMenu(nullptr);
		}
	}
}

void XTaskbarPeer::requestUserAttention(bool enabled, bool critical) {
	setUrgent(enabled);
}

void XTaskbarPeer::menuItemCallback($MenuItem* mi) {
	$init(XTaskbarPeer);
	$useLocalObjectStack();
	if (mi != nullptr) {
		$var($ActionEvent, ae, $new($ActionEvent, mi, $ActionEvent::ACTION_PERFORMED, $(mi->getActionCommand())));
		$var($Throwable, var$0, nullptr);
		try {
			$XToolkit::awtLock();
			$XToolkit::postEvent($($XToolkit::targetToAppContext($(ae->getSource()))), ae);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool XTaskbarPeer::init($String* name, int32_t version, bool verbose) {
	$init(XTaskbarPeer);
	$prepareNativeStatic(init, bool, $String* name, int32_t version, bool verbose);
	bool $ret = $invokeNativeStatic(name, version, verbose);
	$finishNativeStatic();
	return $ret;
}

void XTaskbarPeer::runloop() {
	$init(XTaskbarPeer);
	$prepareNativeStatic(runloop, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void XTaskbarPeer::setBadge(int64_t value, bool visible) {
	$prepareNative(setBadge, void, int64_t value, bool visible);
	$invokeNative(value, visible);
	$finishNative();
}

void XTaskbarPeer::updateProgress(double value, bool visible) {
	$prepareNative(updateProgress, void, double value, bool visible);
	$invokeNative(value, visible);
	$finishNative();
}

void XTaskbarPeer::setUrgent(bool urgent) {
	$prepareNative(setUrgent, void, bool urgent);
	$invokeNative(urgent);
	$finishNative();
}

void XTaskbarPeer::setNativeMenu($MenuItemArray* items) {
	$prepareNative(setNativeMenu, void, $MenuItemArray* items);
	$invokeNative(items);
	$finishNative();
}

void XTaskbarPeer::lambda$initWithLock$1() {
	$init(XTaskbarPeer);
	runloop();
}

$String* XTaskbarPeer::lambda$static$0() {
	$init(XTaskbarPeer);
	return $System::getenv("XDG_CURRENT_DESKTOP"_s);
}

void XTaskbarPeer::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	XTaskbarPeer::nativeLibraryLoaded = false;
	XTaskbarPeer::initExecuted = false;
	{
		$var($String, de, $cast($String, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(XTaskbarPeer$$Lambda$lambda$static$0$1)))));
		XTaskbarPeer::isUnity = de != nullptr && de->equals("Unity"_s);
	}
}

XTaskbarPeer::XTaskbarPeer() {
}

$Class* XTaskbarPeer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.awt.X11.XTaskbarPeer$$Lambda$lambda$initWithLock$1")) {
			return XTaskbarPeer$$Lambda$lambda$initWithLock$1::load$(name, initialize);
		}
		if (name->equals("sun.awt.X11.XTaskbarPeer$$Lambda$lambda$static$0$1")) {
			return XTaskbarPeer$$Lambda$lambda$static$0$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"nativeLibraryLoaded", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XTaskbarPeer, nativeLibraryLoaded)},
		{"initExecuted", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XTaskbarPeer, initExecuted)},
		{"menu", "Ljava/awt/PopupMenu;", nullptr, $PRIVATE, $field(XTaskbarPeer, menu)},
		{"isUnity", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XTaskbarPeer, isUnity)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XTaskbarPeer, init$, void)},
		{"getMenu", "()Ljava/awt/PopupMenu;", nullptr, $PUBLIC, $virtualMethod(XTaskbarPeer, getMenu, $PopupMenu*)},
		{"init", "(Ljava/lang/String;IZ)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(XTaskbarPeer, init, bool, $String*, int32_t, bool)},
		{"initWithLock", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(XTaskbarPeer, initWithLock, void)},
		{"isSupported", "(Ljava/awt/Taskbar$Feature;)Z", nullptr, $PUBLIC, $virtualMethod(XTaskbarPeer, isSupported, bool, $Taskbar$Feature*)},
		{"isTaskbarSupported", "()Z", nullptr, $STATIC, $staticMethod(XTaskbarPeer, isTaskbarSupported, bool)},
		{"lambda$initWithLock$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XTaskbarPeer, lambda$initWithLock$1, void)},
		{"lambda$static$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XTaskbarPeer, lambda$static$0, $String*)},
		{"menuItemCallback", "(Ljava/awt/MenuItem;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(XTaskbarPeer, menuItemCallback, void, $MenuItem*)},
		{"requestUserAttention", "(ZZ)V", nullptr, $PUBLIC, $virtualMethod(XTaskbarPeer, requestUserAttention, void, bool, bool)},
		{"runloop", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(XTaskbarPeer, runloop, void)},
		{"setBadge", "(JZ)V", nullptr, $PRIVATE | $NATIVE, $method(XTaskbarPeer, setBadge, void, int64_t, bool)},
		{"setIconBadge", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XTaskbarPeer, setIconBadge, void, $String*)},
		{"setMenu", "(Ljava/awt/PopupMenu;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(XTaskbarPeer, setMenu, void, $PopupMenu*)},
		{"setNativeMenu", "([Ljava/awt/MenuItem;)V", nullptr, $PRIVATE | $NATIVE, $method(XTaskbarPeer, setNativeMenu, void, $MenuItemArray*)},
		{"setProgressValue", "(I)V", nullptr, $PUBLIC, $virtualMethod(XTaskbarPeer, setProgressValue, void, int32_t)},
		{"setUrgent", "(Z)V", nullptr, $PRIVATE | $NATIVE, $method(XTaskbarPeer, setUrgent, void, bool)},
		{"updateProgress", "(DZ)V", nullptr, $PRIVATE | $NATIVE, $method(XTaskbarPeer, updateProgress, void, double, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XTaskbarPeer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.X11.XTaskbarPeer",
		"java.lang.Object",
		"java.awt.peer.TaskbarPeer",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.X11.XTaskbarPeer$1"
	};
	$loadClass(XTaskbarPeer, name, initialize, &classInfo$$, XTaskbarPeer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XTaskbarPeer);
	});
	return class$;
}

$Class* XTaskbarPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun