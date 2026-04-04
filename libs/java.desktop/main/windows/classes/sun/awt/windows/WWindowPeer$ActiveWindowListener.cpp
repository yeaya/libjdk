#include <sun/awt/windows/WWindowPeer$ActiveWindowListener.h>
#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/StringBuffer.h>
#include <java/util/List.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <jcpp.h>

#undef ACTIVE_WINDOWS_KEY

using $Window = ::java::awt::Window;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;

namespace sun {
	namespace awt {
		namespace windows {

void WWindowPeer$ActiveWindowListener::init$() {
}

void WWindowPeer$ActiveWindowListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($Window, w, $cast($Window, $nc(e)->getNewValue()));
	if (w == nullptr) {
		return;
	}
	$var($AppContext, appContext, $SunToolkit::targetToAppContext(w));
	$synchronized(appContext) {
		$var($WWindowPeer, wp, $cast($WWindowPeer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(w)));
		$init($WWindowPeer);
		$var($List, l, $cast($List, appContext->get($WWindowPeer::ACTIVE_WINDOWS_KEY)));
		if (l != nullptr) {
			l->remove(wp);
			l->add(wp);
		}
	}
}

WWindowPeer$ActiveWindowListener::WWindowPeer$ActiveWindowListener() {
}

$Class* WWindowPeer$ActiveWindowListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WWindowPeer$ActiveWindowListener, init$, void)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(WWindowPeer$ActiveWindowListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WWindowPeer$ActiveWindowListener", "sun.awt.windows.WWindowPeer", "ActiveWindowListener", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WWindowPeer$ActiveWindowListener",
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
	$loadClass(WWindowPeer$ActiveWindowListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WWindowPeer$ActiveWindowListener);
	});
	return class$;
}

$Class* WWindowPeer$ActiveWindowListener::class$ = nullptr;

		} // windows
	} // awt
} // sun