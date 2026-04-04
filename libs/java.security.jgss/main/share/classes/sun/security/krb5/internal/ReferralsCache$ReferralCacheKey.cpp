#include <sun/security/krb5/internal/ReferralsCache$ReferralCacheKey.h>
#include <sun/security/krb5/PrincipalName.h>
#include <sun/security/krb5/internal/ReferralsCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrincipalName = ::sun::security::krb5::PrincipalName;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

void ReferralsCache$ReferralCacheKey::init$($PrincipalName* cname, $PrincipalName* sname) {
	$set(this, cname, cname);
	$set(this, sname, sname);
}

bool ReferralsCache$ReferralCacheKey::equals(Object$* other) {
	if (!($instanceOf(ReferralsCache$ReferralCacheKey, other))) {
		return false;
	}
	$var(ReferralsCache$ReferralCacheKey, that, $cast(ReferralsCache$ReferralCacheKey, other));
	bool var$0 = $nc(this->cname)->equals($nc(that)->cname);
	return var$0 && $nc(this->sname)->equals(that->sname);
}

int32_t ReferralsCache$ReferralCacheKey::hashCode() {
	int32_t var$0 = $nc(this->cname)->hashCode();
	return var$0 + $nc(this->sname)->hashCode();
}

ReferralsCache$ReferralCacheKey::ReferralsCache$ReferralCacheKey() {
}

$Class* ReferralsCache$ReferralCacheKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cname", "Lsun/security/krb5/PrincipalName;", nullptr, $PRIVATE, $field(ReferralsCache$ReferralCacheKey, cname)},
		{"sname", "Lsun/security/krb5/PrincipalName;", nullptr, $PRIVATE, $field(ReferralsCache$ReferralCacheKey, sname)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/krb5/PrincipalName;Lsun/security/krb5/PrincipalName;)V", nullptr, 0, $method(ReferralsCache$ReferralCacheKey, init$, void, $PrincipalName*, $PrincipalName*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ReferralsCache$ReferralCacheKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ReferralsCache$ReferralCacheKey, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.internal.ReferralsCache$ReferralCacheKey", "sun.security.krb5.internal.ReferralsCache", "ReferralCacheKey", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.krb5.internal.ReferralsCache$ReferralCacheKey",
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
	$loadClass(ReferralsCache$ReferralCacheKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferralsCache$ReferralCacheKey);
	});
	return class$;
}

$Class* ReferralsCache$ReferralCacheKey::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun