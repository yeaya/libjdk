#include <com/sun/jndi/ldap/ReferralEnumeration.h>

#include <com/sun/jndi/ldap/LdapReferralException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$MethodInfo _ReferralEnumeration_MethodInfo_[] = {
	{"appendUnprocessedReferrals", "(Lcom/sun/jndi/ldap/LdapReferralException;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ReferralEnumeration_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.jndi.ldap.ReferralEnumeration",
	nullptr,
	"javax.naming.NamingEnumeration",
	nullptr,
	_ReferralEnumeration_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/naming/NamingEnumeration<TT;>;"
};

$Object* allocate$ReferralEnumeration($Class* clazz) {
	return $of($alloc(ReferralEnumeration));
}

$Class* ReferralEnumeration::load$($String* name, bool initialize) {
	$loadClass(ReferralEnumeration, name, initialize, &_ReferralEnumeration_ClassInfo_, allocate$ReferralEnumeration);
	return class$;
}

$Class* ReferralEnumeration::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com