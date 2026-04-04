#include <com/sun/jndi/ldap/ReferralEnumeration.h>
#include <com/sun/jndi/ldap/LdapReferralException.h>
#include <jcpp.h>

using $LdapReferralException = ::com::sun::jndi::ldap::LdapReferralException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$Class* ReferralEnumeration::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"appendUnprocessedReferrals", "(Lcom/sun/jndi/ldap/LdapReferralException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReferralEnumeration, appendUnprocessedReferrals, void, $LdapReferralException*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.jndi.ldap.ReferralEnumeration",
		nullptr,
		"javax.naming.NamingEnumeration",
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/naming/NamingEnumeration<TT;>;"
	};
	$loadClass(ReferralEnumeration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferralEnumeration);
	});
	return class$;
}

$Class* ReferralEnumeration::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com