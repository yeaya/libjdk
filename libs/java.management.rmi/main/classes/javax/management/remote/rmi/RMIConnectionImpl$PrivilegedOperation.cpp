#include <javax/management/remote/rmi/RMIConnectionImpl$PrivilegedOperation.h>
#include <javax/management/remote/rmi/RMIConnectionImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RMIConnectionImpl = ::javax::management::remote::rmi::RMIConnectionImpl;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

void RMIConnectionImpl$PrivilegedOperation::init$($RMIConnectionImpl* this$0, int32_t operation, $ObjectArray* params) {
	$set(this, this$0, this$0);
	this->operation = operation;
	$set(this, params, params);
}

$Object* RMIConnectionImpl$PrivilegedOperation::run() {
	return this->this$0->doOperation(this->operation, this->params);
}

RMIConnectionImpl$PrivilegedOperation::RMIConnectionImpl$PrivilegedOperation() {
}

$Class* RMIConnectionImpl$PrivilegedOperation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/management/remote/rmi/RMIConnectionImpl;", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnectionImpl$PrivilegedOperation, this$0)},
		{"operation", "I", nullptr, $PRIVATE, $field(RMIConnectionImpl$PrivilegedOperation, operation)},
		{"params", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(RMIConnectionImpl$PrivilegedOperation, params)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/remote/rmi/RMIConnectionImpl;I[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(RMIConnectionImpl$PrivilegedOperation, init$, void, $RMIConnectionImpl*, int32_t, $ObjectArray*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RMIConnectionImpl$PrivilegedOperation, run, $Object*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.rmi.RMIConnectionImpl$PrivilegedOperation", "javax.management.remote.rmi.RMIConnectionImpl", "PrivilegedOperation", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.remote.rmi.RMIConnectionImpl$PrivilegedOperation",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.remote.rmi.RMIConnectionImpl"
	};
	$loadClass(RMIConnectionImpl$PrivilegedOperation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIConnectionImpl$PrivilegedOperation);
	});
	return class$;
}

$Class* RMIConnectionImpl$PrivilegedOperation::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax