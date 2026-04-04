#include <sun/management/ManagementFactoryHelper$2.h>
#include <javax/management/InstanceAlreadyExistsException.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InstanceAlreadyExistsException = ::javax::management::InstanceAlreadyExistsException;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;

namespace sun {
	namespace management {

void ManagementFactoryHelper$2::init$($MBeanServer* val$mbs0, Object$* val$mbean0, $ObjectName* val$objName) {
	$set(this, val$mbs0, val$mbs0);
	$set(this, val$mbean0, val$mbean0);
	$set(this, val$objName, val$objName);
}

$Object* ManagementFactoryHelper$2::run() {
	try {
		$nc(this->val$mbs0)->registerMBean(this->val$mbean0, this->val$objName);
		return nullptr;
	} catch ($InstanceAlreadyExistsException& e) {
	}
	return nullptr;
}

ManagementFactoryHelper$2::ManagementFactoryHelper$2() {
}

$Class* ManagementFactoryHelper$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$objName", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(ManagementFactoryHelper$2, val$objName)},
		{"val$mbean0", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(ManagementFactoryHelper$2, val$mbean0)},
		{"val$mbs0", "Ljavax/management/MBeanServer;", nullptr, $FINAL | $SYNTHETIC, $field(ManagementFactoryHelper$2, val$mbs0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/MBeanServer;Ljava/lang/Object;Ljavax/management/ObjectName;)V", "()V", 0, $method(ManagementFactoryHelper$2, init$, void, $MBeanServer*, Object$*, $ObjectName*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ManagementFactoryHelper$2, run, $Object*), "javax.management.MBeanRegistrationException,javax.management.NotCompliantMBeanException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.management.ManagementFactoryHelper",
		"addMBean",
		"(Ljavax/management/MBeanServer;Ljava/lang/Object;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.ManagementFactoryHelper$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.ManagementFactoryHelper$2",
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
	$loadClass(ManagementFactoryHelper$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactoryHelper$2);
	});
	return class$;
}

$Class* ManagementFactoryHelper$2::class$ = nullptr;

	} // management
} // sun