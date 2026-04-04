#include <java/awt/EventQueue$5.h>
#include <java/awt/EventQueue.h>
#include <java/security/AccessControlContext.h>
#include <java/security/PrivilegedAction.h>
#include <jdk/internal/access/JavaSecurityAccess.h>
#include <jcpp.h>

using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace awt {

void EventQueue$5::init$($EventQueue* this$0, $PrivilegedAction* val$action, $AccessControlContext* val$eventAcc) {
	$set(this, this$0, this$0);
	$set(this, val$action, val$action);
	$set(this, val$eventAcc, val$eventAcc);
}

$Object* EventQueue$5::run() {
	$init($EventQueue);
	$nc($EventQueue::javaSecurityAccess)->doIntersectionPrivilege(this->val$action, this->val$eventAcc);
	return nullptr;
}

EventQueue$5::EventQueue$5() {
}

$Class* EventQueue$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/EventQueue;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$5, this$0)},
		{"val$eventAcc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$5, val$eventAcc)},
		{"val$action", "Ljava/security/PrivilegedAction;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$5, val$action)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/EventQueue;Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)V", "()V", 0, $method(EventQueue$5, init$, void, $EventQueue*, $PrivilegedAction*, $AccessControlContext*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(EventQueue$5, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.EventQueue",
		"dispatchEvent",
		"(Ljava/awt/AWTEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.EventQueue$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.EventQueue$5",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.EventQueue"
	};
	$loadClass(EventQueue$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventQueue$5);
	});
	return class$;
}

$Class* EventQueue$5::class$ = nullptr;

	} // awt
} // java