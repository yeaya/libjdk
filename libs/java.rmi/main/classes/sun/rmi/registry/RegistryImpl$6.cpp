#include <sun/rmi/registry/RegistryImpl$6.h>
#include <java/net/URL.h>
#include <java/security/CodeSource.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Permissions.h>
#include <java/security/Policy.h>
#include <java/security/cert/Certificate.h>
#include <sun/rmi/registry/RegistryImpl.h>
#include <jcpp.h>

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $CodeSource = ::java::security::CodeSource;
using $Permissions = ::java::security::Permissions;
using $Policy = ::java::security::Policy;

namespace sun {
	namespace rmi {
		namespace registry {

void RegistryImpl$6::init$() {
}

$Object* RegistryImpl$6::run() {
	$useLocalObjectStack();
	$var($CodeSource, codesource, $new($CodeSource, nullptr, ($CertificateArray*)nullptr));
	$var($Policy, p, $Policy::getPolicy());
	if (p != nullptr) {
		return p->getPermissions(codesource);
	} else {
		return $new($Permissions);
	}
}

RegistryImpl$6::RegistryImpl$6() {
}

$Class* RegistryImpl$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RegistryImpl$6, init$, void)},
		{"run", "()Ljava/security/PermissionCollection;", nullptr, $PUBLIC, $virtualMethod(RegistryImpl$6, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.registry.RegistryImpl",
		"getAccessControlContext",
		"(I)Ljava/security/AccessControlContext;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.registry.RegistryImpl$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.registry.RegistryImpl$6",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/PermissionCollection;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.registry.RegistryImpl"
	};
	$loadClass(RegistryImpl$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RegistryImpl$6);
	});
	return class$;
}

$Class* RegistryImpl$6::class$ = nullptr;

		} // registry
	} // rmi
} // sun