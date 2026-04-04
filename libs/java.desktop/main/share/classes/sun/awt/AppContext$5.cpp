#include <sun/awt/AppContext$5.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace sun {
	namespace awt {

void AppContext$5::init$($AppContext* this$0, Object$* val$notificationLock) {
	$set(this, this$0, this$0);
	$set(this, val$notificationLock, val$notificationLock);
}

void AppContext$5::run() {
	$synchronized(this->val$notificationLock) {
		this->val$notificationLock->notifyAll();
	}
}

AppContext$5::AppContext$5() {
}

$Class* AppContext$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/AppContext;", nullptr, $FINAL | $SYNTHETIC, $field(AppContext$5, this$0)},
		{"val$notificationLock", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(AppContext$5, val$notificationLock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/AppContext;Ljava/lang/Object;)V", "()V", 0, $method(AppContext$5, init$, void, $AppContext*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AppContext$5, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.AppContext",
		"dispose",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AppContext$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.AppContext$5",
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
	$loadClass(AppContext$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppContext$5);
	});
	return class$;
}

$Class* AppContext$5::class$ = nullptr;

	} // awt
} // sun