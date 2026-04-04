#include <javax/management/remote/rmi/RMIConnector$2.h>
#include <java/lang/ClassLoader.h>
#include <javax/management/remote/rmi/RMIConnector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RMIConnector = ::javax::management::remote::rmi::RMIConnector;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

void RMIConnector$2::init$($RMIConnector* this$0, $Thread* val$t) {
	$set(this, this$0, this$0);
	$set(this, val$t, val$t);
}

$Object* RMIConnector$2::run() {
	$nc(this->val$t)->setContextClassLoader(this->this$0->defaultClassLoader);
	return nullptr;
}

RMIConnector$2::RMIConnector$2() {
}

$Class* RMIConnector$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/management/remote/rmi/RMIConnector;", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnector$2, this$0)},
		{"val$t", "Ljava/lang/Thread;", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnector$2, val$t)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/remote/rmi/RMIConnector;Ljava/lang/Thread;)V", "()V", 0, $method(RMIConnector$2, init$, void, $RMIConnector*, $Thread*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(RMIConnector$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.remote.rmi.RMIConnector",
		"pushDefaultClassLoader",
		"()Ljava/lang/ClassLoader;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.rmi.RMIConnector$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.remote.rmi.RMIConnector$2",
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
		"javax.management.remote.rmi.RMIConnector"
	};
	$loadClass(RMIConnector$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIConnector$2);
	});
	return class$;
}

$Class* RMIConnector$2::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax