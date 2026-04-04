#include <javax/management/remote/rmi/RMIConnectionImpl$3.h>
#include <java/lang/ClassLoader.h>
#include <javax/management/remote/rmi/RMIConnectionImpl$CombinedClassLoader.h>
#include <javax/management/remote/rmi/RMIConnectionImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RMIConnectionImpl = ::javax::management::remote::rmi::RMIConnectionImpl;
using $RMIConnectionImpl$CombinedClassLoader = ::javax::management::remote::rmi::RMIConnectionImpl$CombinedClassLoader;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

void RMIConnectionImpl$3::init$($RMIConnectionImpl* this$0, $ClassLoader* val$dcl) {
	$set(this, this$0, this$0);
	$set(this, val$dcl, val$dcl);
}

$Object* RMIConnectionImpl$3::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	return $new($RMIConnectionImpl$CombinedClassLoader, $($($Thread::currentThread())->getContextClassLoader()), this->val$dcl);
}

RMIConnectionImpl$3::RMIConnectionImpl$3() {
}

$Class* RMIConnectionImpl$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/management/remote/rmi/RMIConnectionImpl;", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnectionImpl$3, this$0)},
		{"val$dcl", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnectionImpl$3, val$dcl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/remote/rmi/RMIConnectionImpl;Ljava/lang/ClassLoader;)V", "()V", 0, $method(RMIConnectionImpl$3, init$, void, $RMIConnectionImpl*, $ClassLoader*)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(RMIConnectionImpl$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.remote.rmi.RMIConnectionImpl",
		"<init>",
		"(Ljavax/management/remote/rmi/RMIServerImpl;Ljava/lang/String;Ljava/lang/ClassLoader;Ljavax/security/auth/Subject;Ljava/util/Map;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.rmi.RMIConnectionImpl$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.remote.rmi.RMIConnectionImpl$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.remote.rmi.RMIConnectionImpl"
	};
	$loadClass(RMIConnectionImpl$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIConnectionImpl$3);
	});
	return class$;
}

$Class* RMIConnectionImpl$3::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax