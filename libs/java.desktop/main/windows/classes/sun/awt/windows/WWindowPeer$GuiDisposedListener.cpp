#include <sun/awt/windows/WWindowPeer$GuiDisposedListener.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/StringBuffer.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACTIVE_WINDOWS_KEY
#undef FINE
#undef GUI_DISPOSED

using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace windows {

void WWindowPeer$GuiDisposedListener::init$() {
}

void WWindowPeer$GuiDisposedListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	bool isDisposed = $$sure($Boolean, $nc(e)->getNewValue())->booleanValue();
	if (isDisposed != true) {
		$init($WWindowPeer);
		$init($PlatformLogger$Level);
		if ($nc($WWindowPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$WWindowPeer::log->fine(" Assertion (newValue != true) failed for AppContext.GUI_DISPOSED "_s);
		}
	}
	$var($AppContext, appContext, $AppContext::getAppContext());
	$synchronized(appContext) {
		$init($WWindowPeer);
		appContext->remove($WWindowPeer::ACTIVE_WINDOWS_KEY);
		appContext->removePropertyChangeListener($AppContext::GUI_DISPOSED, this);
		$var($KeyboardFocusManager, kfm, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
		$nc(kfm)->removePropertyChangeListener("activeWindow"_s, $WWindowPeer::activeWindowListener);
	}
}

WWindowPeer$GuiDisposedListener::WWindowPeer$GuiDisposedListener() {
}

$Class* WWindowPeer$GuiDisposedListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WWindowPeer$GuiDisposedListener, init$, void)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer$GuiDisposedListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WWindowPeer$GuiDisposedListener", "sun.awt.windows.WWindowPeer", "GuiDisposedListener", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WWindowPeer$GuiDisposedListener",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.windows.WWindowPeer"
	};
	$loadClass(WWindowPeer$GuiDisposedListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WWindowPeer$GuiDisposedListener);
	});
	return class$;
}

$Class* WWindowPeer$GuiDisposedListener::class$ = nullptr;

		} // windows
	} // awt
} // sun