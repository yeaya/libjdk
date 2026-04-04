#include <javax/management/remote/rmi/RMIConnectionImpl$4.h>
#include <com/sun/jmx/remote/internal/ServerNotifForwarder.h>
#include <javax/management/remote/NotificationResult.h>
#include <javax/management/remote/rmi/RMIConnectionImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RMIConnectionImpl = ::javax::management::remote::rmi::RMIConnectionImpl;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

void RMIConnectionImpl$4::init$($RMIConnectionImpl* this$0, int64_t val$csn, int64_t val$t, int32_t val$mn) {
	$set(this, this$0, this$0);
	this->val$csn = val$csn;
	this->val$t = val$t;
	this->val$mn = val$mn;
}

$Object* RMIConnectionImpl$4::run() {
	return $$nc(this->this$0->getServerNotifFwd())->fetchNotifs(this->val$csn, this->val$t, this->val$mn);
}

RMIConnectionImpl$4::RMIConnectionImpl$4() {
}

$Class* RMIConnectionImpl$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/management/remote/rmi/RMIConnectionImpl;", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnectionImpl$4, this$0)},
		{"val$mn", "I", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnectionImpl$4, val$mn)},
		{"val$t", "J", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnectionImpl$4, val$t)},
		{"val$csn", "J", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnectionImpl$4, val$csn)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/remote/rmi/RMIConnectionImpl;JJI)V", "()V", 0, $method(RMIConnectionImpl$4, init$, void, $RMIConnectionImpl*, int64_t, int64_t, int32_t)},
		{"run", "()Ljavax/management/remote/NotificationResult;", nullptr, $PUBLIC, $virtualMethod(RMIConnectionImpl$4, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.remote.rmi.RMIConnectionImpl",
		"fetchNotifications",
		"(JIJ)Ljavax/management/remote/NotificationResult;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.rmi.RMIConnectionImpl$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.remote.rmi.RMIConnectionImpl$4",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/management/remote/NotificationResult;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.remote.rmi.RMIConnectionImpl"
	};
	$loadClass(RMIConnectionImpl$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIConnectionImpl$4);
	});
	return class$;
}

$Class* RMIConnectionImpl$4::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax