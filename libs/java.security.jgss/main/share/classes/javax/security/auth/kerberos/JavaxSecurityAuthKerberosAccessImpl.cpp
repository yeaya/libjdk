#include <javax/security/auth/kerberos/JavaxSecurityAuthKerberosAccessImpl.h>

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

namespace javax {
	namespace security {
		namespace auth {
			namespace kerberos {

$MethodInfo _JavaxSecurityAuthKerberosAccessImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(JavaxSecurityAuthKerberosAccessImpl, init$, void)},
	{"kerberosTicketGetClientAlias", "(Ljavax/security/auth/kerberos/KerberosTicket;)Ljavax/security/auth/kerberos/KerberosPrincipal;", nullptr, $PUBLIC, $virtualMethod(JavaxSecurityAuthKerberosAccessImpl, kerberosTicketGetClientAlias, $KerberosPrincipal*, $KerberosTicket*)},
	{"kerberosTicketGetProxy", "(Ljavax/security/auth/kerberos/KerberosTicket;)Ljavax/security/auth/kerberos/KerberosTicket;", nullptr, $PUBLIC, $virtualMethod(JavaxSecurityAuthKerberosAccessImpl, kerberosTicketGetProxy, $KerberosTicket*, $KerberosTicket*)},
	{"kerberosTicketGetServerAlias", "(Ljavax/security/auth/kerberos/KerberosTicket;)Ljavax/security/auth/kerberos/KerberosPrincipal;", nullptr, $PUBLIC, $virtualMethod(JavaxSecurityAuthKerberosAccessImpl, kerberosTicketGetServerAlias, $KerberosPrincipal*, $KerberosTicket*)},
	{"kerberosTicketSetClientAlias", "(Ljavax/security/auth/kerberos/KerberosTicket;Ljavax/security/auth/kerberos/KerberosPrincipal;)V", nullptr, $PUBLIC, $virtualMethod(JavaxSecurityAuthKerberosAccessImpl, kerberosTicketSetClientAlias, void, $KerberosTicket*, $KerberosPrincipal*)},
	{"kerberosTicketSetProxy", "(Ljavax/security/auth/kerberos/KerberosTicket;Ljavax/security/auth/kerberos/KerberosTicket;)V", nullptr, $PUBLIC, $virtualMethod(JavaxSecurityAuthKerberosAccessImpl, kerberosTicketSetProxy, void, $KerberosTicket*, $KerberosTicket*)},
	{"kerberosTicketSetServerAlias", "(Ljavax/security/auth/kerberos/KerberosTicket;Ljavax/security/auth/kerberos/KerberosPrincipal;)V", nullptr, $PUBLIC, $virtualMethod(JavaxSecurityAuthKerberosAccessImpl, kerberosTicketSetServerAlias, void, $KerberosTicket*, $KerberosPrincipal*)},
	{"keyTabTakeSnapshot", "(Ljavax/security/auth/kerberos/KeyTab;)Lsun/security/krb5/internal/ktab/KeyTab;", nullptr, $PUBLIC, $virtualMethod(JavaxSecurityAuthKerberosAccessImpl, keyTabTakeSnapshot, $KeyTab*, $1KeyTab*)},
	{}
};

$ClassInfo _JavaxSecurityAuthKerberosAccessImpl_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.kerberos.JavaxSecurityAuthKerberosAccessImpl",
	"java.lang.Object",
	"sun.security.krb5.JavaxSecurityAuthKerberosAccess",
	nullptr,
	_JavaxSecurityAuthKerberosAccessImpl_MethodInfo_
};

$Object* allocate$JavaxSecurityAuthKerberosAccessImpl($Class* clazz) {
	return $of($alloc(JavaxSecurityAuthKerberosAccessImpl));
}

void JavaxSecurityAuthKerberosAccessImpl::init$() {
}

$KeyTab* JavaxSecurityAuthKerberosAccessImpl::keyTabTakeSnapshot($1KeyTab* ktab) {
	return $nc(ktab)->takeSnapshot();
}

$KerberosPrincipal* JavaxSecurityAuthKerberosAccessImpl::kerberosTicketGetClientAlias($KerberosTicket* t) {
	return $nc(t)->clientAlias;
}

void JavaxSecurityAuthKerberosAccessImpl::kerberosTicketSetClientAlias($KerberosTicket* t, $KerberosPrincipal* a) {
	$set($nc(t), clientAlias, a);
}

$KerberosPrincipal* JavaxSecurityAuthKerberosAccessImpl::kerberosTicketGetServerAlias($KerberosTicket* t) {
	return $nc(t)->serverAlias;
}

void JavaxSecurityAuthKerberosAccessImpl::kerberosTicketSetServerAlias($KerberosTicket* t, $KerberosPrincipal* a) {
	$set($nc(t), serverAlias, a);
}

$KerberosTicket* JavaxSecurityAuthKerberosAccessImpl::kerberosTicketGetProxy($KerberosTicket* t) {
	return $nc(t)->proxy;
}

void JavaxSecurityAuthKerberosAccessImpl::kerberosTicketSetProxy($KerberosTicket* t, $KerberosTicket* p) {
	$set($nc(t), proxy, p);
}

JavaxSecurityAuthKerberosAccessImpl::JavaxSecurityAuthKerberosAccessImpl() {
}

$Class* JavaxSecurityAuthKerberosAccessImpl::load$($String* name, bool initialize) {
	$loadClass(JavaxSecurityAuthKerberosAccessImpl, name, initialize, &_JavaxSecurityAuthKerberosAccessImpl_ClassInfo_, allocate$JavaxSecurityAuthKerberosAccessImpl);
	return class$;
}

$Class* JavaxSecurityAuthKerberosAccessImpl::class$ = nullptr;

			} // kerberos
		} // auth
	} // security
} // javax