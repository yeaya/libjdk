#include <javax/management/remote/rmi/RMIConnectionImpl$6.h>
#include <java/lang/ClassLoader.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <javax/management/remote/rmi/RMIConnectionImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;
using $RMIConnectionImpl = ::javax::management::remote::rmi::RMIConnectionImpl;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

void RMIConnectionImpl$6::init$($RMIConnectionImpl* this$0, $ObjectName* val$name) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
}

$Object* RMIConnectionImpl$6::run() {
	return $nc(this->this$0->mbeanServer)->getClassLoaderFor(this->val$name);
}

RMIConnectionImpl$6::RMIConnectionImpl$6() {
}

$Class* RMIConnectionImpl$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/management/remote/rmi/RMIConnectionImpl;", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnectionImpl$6, this$0)},
		{"val$name", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnectionImpl$6, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/remote/rmi/RMIConnectionImpl;Ljavax/management/ObjectName;)V", "()V", 0, $method(RMIConnectionImpl$6, init$, void, $RMIConnectionImpl*, $ObjectName*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RMIConnectionImpl$6, run, $Object*), "javax.management.InstanceNotFoundException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.remote.rmi.RMIConnectionImpl",
		"getClassLoaderFor",
		"(Ljavax/management/ObjectName;)Ljava/lang/ClassLoader;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.rmi.RMIConnectionImpl$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.remote.rmi.RMIConnectionImpl$6",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.remote.rmi.RMIConnectionImpl"
	};
	$loadClass(RMIConnectionImpl$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIConnectionImpl$6);
	});
	return class$;
}

$Class* RMIConnectionImpl$6::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax