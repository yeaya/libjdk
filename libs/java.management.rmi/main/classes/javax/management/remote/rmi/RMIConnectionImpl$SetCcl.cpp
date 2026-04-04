#include <javax/management/remote/rmi/RMIConnectionImpl$SetCcl.h>
#include <java/lang/ClassLoader.h>
#include <javax/management/remote/rmi/RMIConnectionImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

void RMIConnectionImpl$SetCcl::init$($ClassLoader* classLoader) {
	$set(this, classLoader, classLoader);
}

$Object* RMIConnectionImpl$SetCcl::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Thread, currentThread, $Thread::currentThread());
	$var($ClassLoader, old, currentThread->getContextClassLoader());
	currentThread->setContextClassLoader(this->classLoader);
	return old;
}

RMIConnectionImpl$SetCcl::RMIConnectionImpl$SetCcl() {
}

$Class* RMIConnectionImpl$SetCcl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"classLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $field(RMIConnectionImpl$SetCcl, classLoader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, 0, $method(RMIConnectionImpl$SetCcl, init$, void, $ClassLoader*)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(RMIConnectionImpl$SetCcl, run, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.rmi.RMIConnectionImpl$SetCcl", "javax.management.remote.rmi.RMIConnectionImpl", "SetCcl", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.remote.rmi.RMIConnectionImpl$SetCcl",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/ClassLoader;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.remote.rmi.RMIConnectionImpl"
	};
	$loadClass(RMIConnectionImpl$SetCcl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIConnectionImpl$SetCcl);
	});
	return class$;
}

$Class* RMIConnectionImpl$SetCcl::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax