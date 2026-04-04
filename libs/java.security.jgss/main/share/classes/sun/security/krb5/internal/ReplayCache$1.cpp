#include <sun/security/krb5/internal/ReplayCache$1.h>
#include <sun/security/krb5/internal/KerberosTime.h>
#include <sun/security/krb5/internal/ReplayCache.h>
#include <sun/security/krb5/internal/rcache/AuthTimeWithHash.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KerberosTime = ::sun::security::krb5::internal::KerberosTime;
using $ReplayCache = ::sun::security::krb5::internal::ReplayCache;
using $AuthTimeWithHash = ::sun::security::krb5::internal::rcache::AuthTimeWithHash;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

void ReplayCache$1::init$() {
	$ReplayCache::init$();
}

void ReplayCache$1::checkAndStore($KerberosTime* currTime, $AuthTimeWithHash* time) {
}

ReplayCache$1::ReplayCache$1() {
}

$Class* ReplayCache$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ReplayCache$1, init$, void)},
		{"checkAndStore", "(Lsun/security/krb5/internal/KerberosTime;Lsun/security/krb5/internal/rcache/AuthTimeWithHash;)V", nullptr, $PUBLIC, $virtualMethod(ReplayCache$1, checkAndStore, void, $KerberosTime*, $AuthTimeWithHash*), "sun.security.krb5.internal.KrbApErrException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.krb5.internal.ReplayCache",
		"getInstance",
		"(Ljava/lang/String;)Lsun/security/krb5/internal/ReplayCache;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.internal.ReplayCache$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.krb5.internal.ReplayCache$1",
		"sun.security.krb5.internal.ReplayCache",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.krb5.internal.ReplayCache"
	};
	$loadClass(ReplayCache$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReplayCache$1);
	});
	return class$;
}

$Class* ReplayCache$1::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun