#include <sun/rmi/registry/RegistryImpl$3.h>
#include <java/net/InetAddress.h>
#include <sun/rmi/registry/RegistryImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;

namespace sun {
	namespace rmi {
		namespace registry {

void RegistryImpl$3::init$($String* val$clientHostName) {
	$set(this, val$clientHostName, val$clientHostName);
}

$Object* RegistryImpl$3::run() {
	return $InetAddress::getByName(this->val$clientHostName);
}

RegistryImpl$3::RegistryImpl$3() {
}

$Class* RegistryImpl$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$clientHostName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(RegistryImpl$3, val$clientHostName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(RegistryImpl$3, init$, void, $String*)},
		{"run", "()Ljava/net/InetAddress;", nullptr, $PUBLIC, $virtualMethod(RegistryImpl$3, run, $Object*), "java.net.UnknownHostException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.registry.RegistryImpl",
		"checkAccess",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.registry.RegistryImpl$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.registry.RegistryImpl$3",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/net/InetAddress;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.registry.RegistryImpl"
	};
	$loadClass(RegistryImpl$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RegistryImpl$3);
	});
	return class$;
}

$Class* RegistryImpl$3::class$ = nullptr;

		} // registry
	} // rmi
} // sun