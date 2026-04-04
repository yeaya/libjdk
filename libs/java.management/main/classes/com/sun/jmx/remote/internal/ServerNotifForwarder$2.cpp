#include <com/sun/jmx/remote/internal/ServerNotifForwarder$2.h>
#include <com/sun/jmx/remote/internal/ServerNotifForwarder.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

void ServerNotifForwarder$2::init$($MBeanServer* val$mbs, $ObjectName* val$name) {
	$set(this, val$mbs, val$mbs);
	$set(this, val$name, val$name);
}

$Object* ServerNotifForwarder$2::run() {
	return $nc(this->val$mbs)->getObjectInstance(this->val$name);
}

ServerNotifForwarder$2::ServerNotifForwarder$2() {
}

$Class* ServerNotifForwarder$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$name", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(ServerNotifForwarder$2, val$name)},
		{"val$mbs", "Ljavax/management/MBeanServer;", nullptr, $FINAL | $SYNTHETIC, $field(ServerNotifForwarder$2, val$mbs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)V", "()V", 0, $method(ServerNotifForwarder$2, init$, void, $MBeanServer*, $ObjectName*)},
		{"run", "()Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, $virtualMethod(ServerNotifForwarder$2, run, $Object*), "javax.management.InstanceNotFoundException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.remote.internal.ServerNotifForwarder",
		"checkMBeanPermission",
		"(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.internal.ServerNotifForwarder$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.internal.ServerNotifForwarder$2",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljavax/management/ObjectInstance;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.internal.ServerNotifForwarder"
	};
	$loadClass(ServerNotifForwarder$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerNotifForwarder$2);
	});
	return class$;
}

$Class* ServerNotifForwarder$2::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com