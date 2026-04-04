#include <sun/awt/GlobalCursorManager$NativeUpdater.h>
#include <java/awt/Component.h>
#include <java/awt/event/InvocationEvent.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/GlobalCursorManager.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlobalCursorManager = ::sun::awt::GlobalCursorManager;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

void GlobalCursorManager$NativeUpdater::init$($GlobalCursorManager* this$0) {
	$set(this, this$0, this$0);
	this->pending = false;
}

void GlobalCursorManager$NativeUpdater::run() {
	bool shouldUpdate = false;
	$synchronized(this) {
		if (this->pending) {
			this->pending = false;
			shouldUpdate = true;
		}
	}
	if (shouldUpdate) {
		this->this$0->_updateCursor(false);
	}
}

void GlobalCursorManager$NativeUpdater::postIfNotPending($Component* heavy, $InvocationEvent* in) {
	bool shouldPost = false;
	$synchronized(this) {
		if (!this->pending) {
			this->pending = (shouldPost = true);
		}
	}
	if (shouldPost) {
		$SunToolkit::postEvent($($SunToolkit::targetToAppContext(heavy)), in);
	}
}

GlobalCursorManager$NativeUpdater::GlobalCursorManager$NativeUpdater() {
}

$Class* GlobalCursorManager$NativeUpdater::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/GlobalCursorManager;", nullptr, $FINAL | $SYNTHETIC, $field(GlobalCursorManager$NativeUpdater, this$0)},
		{"pending", "Z", nullptr, 0, $field(GlobalCursorManager$NativeUpdater, pending)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/GlobalCursorManager;)V", nullptr, 0, $method(GlobalCursorManager$NativeUpdater, init$, void, $GlobalCursorManager*)},
		{"postIfNotPending", "(Ljava/awt/Component;Ljava/awt/event/InvocationEvent;)V", nullptr, $PUBLIC, $virtualMethod(GlobalCursorManager$NativeUpdater, postIfNotPending, void, $Component*, $InvocationEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GlobalCursorManager$NativeUpdater, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.GlobalCursorManager$NativeUpdater", "sun.awt.GlobalCursorManager", "NativeUpdater", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.GlobalCursorManager$NativeUpdater",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.GlobalCursorManager"
	};
	$loadClass(GlobalCursorManager$NativeUpdater, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GlobalCursorManager$NativeUpdater);
	});
	return class$;
}

$Class* GlobalCursorManager$NativeUpdater::class$ = nullptr;

	} // awt
} // sun