#include <sun/rmi/registry/RegistryImpl$4.h>
#include <java/net/InetAddress.h>
#include <java/net/ServerSocket.h>
#include <java/util/Hashtable.h>
#include <sun/rmi/registry/RegistryImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $RegistryImpl = ::sun::rmi::registry::RegistryImpl;

namespace sun {
	namespace rmi {
		namespace registry {

void RegistryImpl$4::init$($InetAddress* val$finalClientHost) {
	$set(this, val$finalClientHost, val$finalClientHost);
}

$Object* RegistryImpl$4::run() {
	($$new($ServerSocket, 0, 10, this->val$finalClientHost))->close();
	$init($RegistryImpl);
	$nc($RegistryImpl::allowedAccessCache)->put(this->val$finalClientHost, this->val$finalClientHost);
	return nullptr;
}

RegistryImpl$4::RegistryImpl$4() {
}

$Class* RegistryImpl$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$finalClientHost", "Ljava/net/InetAddress;", nullptr, $FINAL | $SYNTHETIC, $field(RegistryImpl$4, val$finalClientHost)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/InetAddress;)V", "()V", 0, $method(RegistryImpl$4, init$, void, $InetAddress*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(RegistryImpl$4, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.registry.RegistryImpl",
		"checkAccess",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.registry.RegistryImpl$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.registry.RegistryImpl$4",
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
		"sun.rmi.registry.RegistryImpl"
	};
	$loadClass(RegistryImpl$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RegistryImpl$4);
	});
	return class$;
}

$Class* RegistryImpl$4::class$ = nullptr;

		} // registry
	} // rmi
} // sun