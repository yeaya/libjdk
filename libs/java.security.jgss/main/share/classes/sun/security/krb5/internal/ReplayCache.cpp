#include <sun/security/krb5/internal/ReplayCache.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/security/krb5/internal/KerberosTime.h>
#include <sun/security/krb5/internal/ReplayCache$1.h>
#include <sun/security/krb5/internal/rcache/AuthTimeWithHash.h>
#include <sun/security/krb5/internal/rcache/DflCache.h>
#include <sun/security/krb5/internal/rcache/MemoryCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $KerberosTime = ::sun::security::krb5::internal::KerberosTime;
using $ReplayCache$1 = ::sun::security::krb5::internal::ReplayCache$1;
using $AuthTimeWithHash = ::sun::security::krb5::internal::rcache::AuthTimeWithHash;
using $DflCache = ::sun::security::krb5::internal::rcache::DflCache;
using $MemoryCache = ::sun::security::krb5::internal::rcache::MemoryCache;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

void ReplayCache::init$() {
}

ReplayCache* ReplayCache::getInstance($String* type) {
	if (type == nullptr) {
		return $new($MemoryCache);
	} else {
		bool var$0 = type->equals("dfl"_s);
		if (var$0 || type->startsWith("dfl:"_s)) {
			return $new($DflCache, type);
		} else if (type->equals("none"_s)) {
			return $new($ReplayCache$1);
		} else {
			$throwNew($IllegalArgumentException, $$str({"Unknown type: "_s, type}));
		}
	}
}

ReplayCache* ReplayCache::getInstance() {
	$var($String, type, $GetPropertyAction::privilegedGetProperty("sun.security.krb5.rcache"_s));
	return getInstance(type);
}

ReplayCache::ReplayCache() {
}

$Class* ReplayCache::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReplayCache, init$, void)},
		{"checkAndStore", "(Lsun/security/krb5/internal/KerberosTime;Lsun/security/krb5/internal/rcache/AuthTimeWithHash;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReplayCache, checkAndStore, void, $KerberosTime*, $AuthTimeWithHash*), "sun.security.krb5.internal.KrbApErrException"},
		{"getInstance", "(Ljava/lang/String;)Lsun/security/krb5/internal/ReplayCache;", nullptr, $PUBLIC | $STATIC, $staticMethod(ReplayCache, getInstance, ReplayCache*, $String*)},
		{"getInstance", "()Lsun/security/krb5/internal/ReplayCache;", nullptr, $PUBLIC | $STATIC, $staticMethod(ReplayCache, getInstance, ReplayCache*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.internal.ReplayCache$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.security.krb5.internal.ReplayCache",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.krb5.internal.ReplayCache$1"
	};
	$loadClass(ReplayCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReplayCache);
	});
	return class$;
}

$Class* ReplayCache::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun