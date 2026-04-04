#include <javax/management/remote/rmi/RMIConnector$3.h>
#include <java/lang/ClassLoader.h>
#include <javax/management/remote/rmi/RMIConnector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RMIConnector = ::javax::management::remote::rmi::RMIConnector;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

void RMIConnector$3::init$($RMIConnector* this$0, $ClassLoader* val$old) {
	$set(this, this$0, this$0);
	$set(this, val$old, val$old);
}

$Object* RMIConnector$3::run() {
	$($Thread::currentThread())->setContextClassLoader(this->val$old);
	return nullptr;
}

RMIConnector$3::RMIConnector$3() {
}

$Class* RMIConnector$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/management/remote/rmi/RMIConnector;", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnector$3, this$0)},
		{"val$old", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnector$3, val$old)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/remote/rmi/RMIConnector;Ljava/lang/ClassLoader;)V", "()V", 0, $method(RMIConnector$3, init$, void, $RMIConnector*, $ClassLoader*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(RMIConnector$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.remote.rmi.RMIConnector",
		"popDefaultClassLoader",
		"(Ljava/lang/ClassLoader;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.rmi.RMIConnector$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.remote.rmi.RMIConnector$3",
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
	$loadClass(RMIConnector$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIConnector$3);
	});
	return class$;
}

$Class* RMIConnector$3::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax