#include <sun/security/krb5/KdcComm$1.h>
#include <java/security/Security.h>
#include <sun/security/krb5/KdcComm.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace sun {
	namespace security {
		namespace krb5 {

void KdcComm$1::init$() {
}

$Object* KdcComm$1::run() {
	return $of($Security::getProperty("krb5.kdc.bad.policy"_s));
}

KdcComm$1::KdcComm$1() {
}

$Class* KdcComm$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(KdcComm$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KdcComm$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.krb5.KdcComm",
		"initStatic",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.KdcComm$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.krb5.KdcComm$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.krb5.KdcComm"
	};
	$loadClass(KdcComm$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KdcComm$1);
	});
	return class$;
}

$Class* KdcComm$1::class$ = nullptr;

		} // krb5
	} // security
} // sun