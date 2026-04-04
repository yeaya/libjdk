#include <sun/security/krb5/internal/ReferralsCache$ReferralCacheEntry.h>
#include <sun/security/krb5/Credentials.h>
#include <sun/security/krb5/internal/ReferralsCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Credentials = ::sun::security::krb5::Credentials;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

void ReferralsCache$ReferralCacheEntry::init$($Credentials* creds, $String* toRealm) {
	$set(this, creds, creds);
	$set(this, toRealm, toRealm);
}

$Credentials* ReferralsCache$ReferralCacheEntry::getCreds() {
	return this->creds;
}

$String* ReferralsCache$ReferralCacheEntry::getToRealm() {
	return this->toRealm;
}

ReferralsCache$ReferralCacheEntry::ReferralsCache$ReferralCacheEntry() {
}

$Class* ReferralsCache$ReferralCacheEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"creds", "Lsun/security/krb5/Credentials;", nullptr, $PRIVATE | $FINAL, $field(ReferralsCache$ReferralCacheEntry, creds)},
		{"toRealm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ReferralsCache$ReferralCacheEntry, toRealm)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/krb5/Credentials;Ljava/lang/String;)V", nullptr, 0, $method(ReferralsCache$ReferralCacheEntry, init$, void, $Credentials*, $String*)},
		{"getCreds", "()Lsun/security/krb5/Credentials;", nullptr, 0, $method(ReferralsCache$ReferralCacheEntry, getCreds, $Credentials*)},
		{"getToRealm", "()Ljava/lang/String;", nullptr, 0, $method(ReferralsCache$ReferralCacheEntry, getToRealm, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.internal.ReferralsCache$ReferralCacheEntry", "sun.security.krb5.internal.ReferralsCache", "ReferralCacheEntry", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.krb5.internal.ReferralsCache$ReferralCacheEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.krb5.internal.ReferralsCache"
	};
	$loadClass(ReferralsCache$ReferralCacheEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferralsCache$ReferralCacheEntry);
	});
	return class$;
}

$Class* ReferralsCache$ReferralCacheEntry::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun