#include <sun/awt/AppContext$4.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeSupport.h>
#include <java/security/AccessController.h>
#include <sun/awt/AppContext$4$1.h>
#include <sun/awt/AppContext.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $WindowArray = $Array<::java::awt::Window>;
using $Window = ::java::awt::Window;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $AppContext = ::sun::awt::AppContext;
using $AppContext$4$1 = ::sun::awt::AppContext$4$1;

namespace sun {
	namespace awt {

void AppContext$4::init$($AppContext* this$0, $PropertyChangeSupport* val$changeSupport, Object$* val$notificationLock) {
	$set(this, this$0, this$0);
	$set(this, val$changeSupport, val$changeSupport);
	$set(this, val$notificationLock, val$notificationLock);
}

void AppContext$4::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($WindowArray, windowsToDispose, $Window::getOwnerlessWindows());
	{
		$var($WindowArray, arr$, windowsToDispose);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Window, w, arr$->get(i$));
			try {
				$nc(w)->dispose();
			} catch ($Throwable& t) {
				$init($AppContext);
				$nc($AppContext::log)->finer("exception occurred while disposing app context"_s, t);
			}
		}
	}
	$AccessController::doPrivileged($$new($AppContext$4$1, this));
	if (this->val$changeSupport != nullptr) {
		this->val$changeSupport->firePropertyChange("guidisposed"_s, false, true);
	}
	$synchronized(this->val$notificationLock) {
		this->val$notificationLock->notifyAll();
	}
}

AppContext$4::AppContext$4() {
}

$Class* AppContext$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/AppContext;", nullptr, $FINAL | $SYNTHETIC, $field(AppContext$4, this$0)},
		{"val$notificationLock", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(AppContext$4, val$notificationLock)},
		{"val$changeSupport", "Ljava/beans/PropertyChangeSupport;", nullptr, $FINAL | $SYNTHETIC, $field(AppContext$4, val$changeSupport)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/AppContext;Ljava/beans/PropertyChangeSupport;Ljava/lang/Object;)V", "()V", 0, $method(AppContext$4, init$, void, $AppContext*, $PropertyChangeSupport*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AppContext$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.AppContext",
		"dispose",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AppContext$4", nullptr, nullptr, 0},
		{"sun.awt.AppContext$4$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.AppContext$4",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.AppContext"
	};
	$loadClass(AppContext$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppContext$4);
	});
	return class$;
}

$Class* AppContext$4::class$ = nullptr;

	} // awt
} // sun