#include <sun/management/ManagementFactoryHelper$3.h>
#include <javax/management/InstanceNotFoundException.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InstanceNotFoundException = ::javax::management::InstanceNotFoundException;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;

namespace sun {
	namespace management {

void ManagementFactoryHelper$3::init$($MBeanServer* val$mbs0, $ObjectName* val$objName) {
	$set(this, val$mbs0, val$mbs0);
	$set(this, val$objName, val$objName);
}

$Object* ManagementFactoryHelper$3::run() {
	try {
		$nc(this->val$mbs0)->unregisterMBean(this->val$objName);
	} catch ($InstanceNotFoundException& e) {
	}
	return nullptr;
}

ManagementFactoryHelper$3::ManagementFactoryHelper$3() {
}

$Class* ManagementFactoryHelper$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$objName", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(ManagementFactoryHelper$3, val$objName)},
		{"val$mbs0", "Ljavax/management/MBeanServer;", nullptr, $FINAL | $SYNTHETIC, $field(ManagementFactoryHelper$3, val$mbs0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)V", "()V", 0, $method(ManagementFactoryHelper$3, init$, void, $MBeanServer*, $ObjectName*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ManagementFactoryHelper$3, run, $Object*), "javax.management.MBeanRegistrationException,javax.management.RuntimeOperationsException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.management.ManagementFactoryHelper",
		"unregisterMBean",
		"(Ljavax/management/MBeanServer;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.ManagementFactoryHelper$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.ManagementFactoryHelper$3",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.management.ManagementFactoryHelper"
	};
	$loadClass(ManagementFactoryHelper$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactoryHelper$3);
	});
	return class$;
}

$Class* ManagementFactoryHelper$3::class$ = nullptr;

	} // management
} // sun