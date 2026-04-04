#include <sun/security/krb5/JavaxSecurityAuthKerberosAccess.h>
#include <javax/security/auth/kerberos/KerberosPrincipal.h>
#include <javax/security/auth/kerberos/KerberosTicket.h>
#include <javax/security/auth/kerberos/KeyTab.h>
#include <sun/security/krb5/internal/ktab/KeyTab.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KerberosPrincipal = ::javax::security::auth::kerberos::KerberosPrincipal;
using $KerberosTicket = ::javax::security::auth::kerberos::KerberosTicket;
using $1KeyTab = ::javax::security::auth::kerberos::KeyTab;
using $KeyTab = ::sun::security::krb5::internal::ktab::KeyTab;

namespace sun {
	namespace security {
		namespace krb5 {

$Class* JavaxSecurityAuthKerberosAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"kerberosTicketGetClientAlias", "(Ljavax/security/auth/kerberos/KerberosTicket;)Ljavax/security/auth/kerberos/KerberosPrincipal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaxSecurityAuthKerberosAccess, kerberosTicketGetClientAlias, $KerberosPrincipal*, $KerberosTicket*)},
		{"kerberosTicketGetProxy", "(Ljavax/security/auth/kerberos/KerberosTicket;)Ljavax/security/auth/kerberos/KerberosTicket;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaxSecurityAuthKerberosAccess, kerberosTicketGetProxy, $KerberosTicket*, $KerberosTicket*)},
		{"kerberosTicketGetServerAlias", "(Ljavax/security/auth/kerberos/KerberosTicket;)Ljavax/security/auth/kerberos/KerberosPrincipal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaxSecurityAuthKerberosAccess, kerberosTicketGetServerAlias, $KerberosPrincipal*, $KerberosTicket*)},
		{"kerberosTicketSetClientAlias", "(Ljavax/security/auth/kerberos/KerberosTicket;Ljavax/security/auth/kerberos/KerberosPrincipal;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaxSecurityAuthKerberosAccess, kerberosTicketSetClientAlias, void, $KerberosTicket*, $KerberosPrincipal*)},
		{"kerberosTicketSetProxy", "(Ljavax/security/auth/kerberos/KerberosTicket;Ljavax/security/auth/kerberos/KerberosTicket;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaxSecurityAuthKerberosAccess, kerberosTicketSetProxy, void, $KerberosTicket*, $KerberosTicket*)},
		{"kerberosTicketSetServerAlias", "(Ljavax/security/auth/kerberos/KerberosTicket;Ljavax/security/auth/kerberos/KerberosPrincipal;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaxSecurityAuthKerberosAccess, kerberosTicketSetServerAlias, void, $KerberosTicket*, $KerberosPrincipal*)},
		{"keyTabTakeSnapshot", "(Ljavax/security/auth/kerberos/KeyTab;)Lsun/security/krb5/internal/ktab/KeyTab;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaxSecurityAuthKerberosAccess, keyTabTakeSnapshot, $KeyTab*, $1KeyTab*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.krb5.JavaxSecurityAuthKerberosAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaxSecurityAuthKerberosAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaxSecurityAuthKerberosAccess);
	});
	return class$;
}

$Class* JavaxSecurityAuthKerberosAccess::class$ = nullptr;

		} // krb5
	} // security
} // sun