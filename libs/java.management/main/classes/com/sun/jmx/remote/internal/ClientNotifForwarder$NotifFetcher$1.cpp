#include <com/sun/jmx/remote/internal/ClientNotifForwarder$NotifFetcher$1.h>
#include <com/sun/jmx/remote/internal/ClientNotifForwarder$NotifFetcher.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityException.h>
#include <jcpp.h>

using $ClientNotifForwarder$NotifFetcher = ::com::sun::jmx::remote::internal::ClientNotifForwarder$NotifFetcher;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

void ClientNotifForwarder$NotifFetcher$1::init$($ClientNotifForwarder$NotifFetcher* this$1, $ClassLoader* val$loader) {
	$set(this, this$1, this$1);
	$set(this, val$loader, val$loader);
}

$Object* ClientNotifForwarder$NotifFetcher$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$var($ClassLoader, previous, $($Thread::currentThread())->getContextClassLoader());
		if (this->val$loader == previous) {
			return previous;
		}
		$($Thread::currentThread())->setContextClassLoader(this->val$loader);
		return previous;
	} catch ($SecurityException& x) {
		this->this$1->logOnce($$str({"Permission to set ContextClassLoader missing. Notifications will not be dispatched. Please check your Java policy configuration: "_s, x}), x);
		$throw(x);
	}
	$shouldNotReachHere();
}

ClientNotifForwarder$NotifFetcher$1::ClientNotifForwarder$NotifFetcher$1() {
}

$Class* ClientNotifForwarder$NotifFetcher$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/jmx/remote/internal/ClientNotifForwarder$NotifFetcher;", nullptr, $FINAL | $SYNTHETIC, $field(ClientNotifForwarder$NotifFetcher$1, this$1)},
		{"val$loader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ClientNotifForwarder$NotifFetcher$1, val$loader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/remote/internal/ClientNotifForwarder$NotifFetcher;Ljava/lang/ClassLoader;)V", "()V", 0, $method(ClientNotifForwarder$NotifFetcher$1, init$, void, $ClientNotifForwarder$NotifFetcher*, $ClassLoader*)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(ClientNotifForwarder$NotifFetcher$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.remote.internal.ClientNotifForwarder$NotifFetcher",
		"setContextClassLoader",
		"(Ljava/lang/ClassLoader;)Ljava/lang/ClassLoader;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.internal.ClientNotifForwarder$NotifFetcher", "com.sun.jmx.remote.internal.ClientNotifForwarder", "NotifFetcher", $PRIVATE},
		{"com.sun.jmx.remote.internal.ClientNotifForwarder$NotifFetcher$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.internal.ClientNotifForwarder$NotifFetcher$1",
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
		"com.sun.jmx.remote.internal.ClientNotifForwarder"
	};
	$loadClass(ClientNotifForwarder$NotifFetcher$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClientNotifForwarder$NotifFetcher$1);
	});
	return class$;
}

$Class* ClientNotifForwarder$NotifFetcher$1::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com