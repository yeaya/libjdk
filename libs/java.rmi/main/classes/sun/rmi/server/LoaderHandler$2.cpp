#include <sun/rmi/server/LoaderHandler$2.h>
#include <java/net/URL.h>
#include <java/security/CodeSource.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Permissions.h>
#include <java/security/Policy.h>
#include <java/security/cert/Certificate.h>
#include <sun/rmi/server/LoaderHandler.h>
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
		namespace server {

void LoaderHandler$2::init$() {
}

$Object* LoaderHandler$2::run() {
	$useLocalObjectStack();
	$var($CodeSource, codesource, $new($CodeSource, nullptr, ($CertificateArray*)nullptr));
	$var($Policy, p, $Policy::getPolicy());
	if (p != nullptr) {
		return p->getPermissions(codesource);
	} else {
		return $new($Permissions);
	}
}

LoaderHandler$2::LoaderHandler$2() {
}

$Class* LoaderHandler$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LoaderHandler$2, init$, void)},
		{"run", "()Ljava/security/PermissionCollection;", nullptr, $PUBLIC, $virtualMethod(LoaderHandler$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.server.LoaderHandler",
		"getLoaderAccessControlContext",
		"([Ljava/net/URL;)Ljava/security/AccessControlContext;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.server.LoaderHandler$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.server.LoaderHandler$2",
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
		"sun.rmi.server.LoaderHandler"
	};
	$loadClass(LoaderHandler$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LoaderHandler$2);
	});
	return class$;
}

$Class* LoaderHandler$2::class$ = nullptr;

		} // server
	} // rmi
} // sun