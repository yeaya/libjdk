#include <sun/security/jgss/krb5/Krb5InitCredential.h>
#include <java/io/IOException.h>
#include <java/net/InetAddress.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/Provider.h>
#include <java/util/Date.h>
#include <javax/crypto/SecretKey.h>
#include <javax/security/auth/DestroyFailedException.h>
#include <javax/security/auth/kerberos/KerberosPrincipal.h>
#include <javax/security/auth/kerberos/KerberosTicket.h>
#include <org/ietf/jgss/GSSException.h>
#include <org/ietf/jgss/Oid.h>
#include <sun/security/jgss/GSSCaller.h>
#include <sun/security/jgss/krb5/Krb5InitCredential$1.h>
#include <sun/security/jgss/krb5/Krb5MechFactory.h>
#include <sun/security/jgss/krb5/Krb5NameElement.h>
#include <sun/security/jgss/krb5/Krb5ProxyCredential.h>
#include <sun/security/jgss/spi/GSSCredentialSpi.h>
#include <sun/security/jgss/spi/GSSNameSpi.h>
#include <sun/security/krb5/Credentials.h>
#include <sun/security/krb5/EncryptionKey.h>
#include <sun/security/krb5/JavaxSecurityAuthKerberosAccess.h>
#include <sun/security/krb5/KerberosSecrets.h>
#include <sun/security/krb5/KrbException.h>
#include <sun/security/krb5/PrincipalName.h>
#include <sun/security/krb5/internal/Ticket.h>
#include <jcpp.h>

#undef CALLER_INITIATE
#undef CALLER_UNKNOWN
#undef FAILURE
#undef GSS_KRB5_MECH_OID
#undef KRB_NT_SRV_INST
#undef NO_CRED
#undef NT_GSS_KRB5_PRINCIPAL
#undef PROVIDER

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $Provider = ::java::security::Provider;
using $Date = ::java::util::Date;
using $DestroyFailedException = ::javax::security::auth::DestroyFailedException;
using $KerberosPrincipal = ::javax::security::auth::kerberos::KerberosPrincipal;
using $KerberosTicket = ::javax::security::auth::kerberos::KerberosTicket;
using $GSSException = ::org::ietf::jgss::GSSException;
using $Oid = ::org::ietf::jgss::Oid;
using $GSSCaller = ::sun::security::jgss::GSSCaller;
using $Krb5InitCredential$1 = ::sun::security::jgss::krb5::Krb5InitCredential$1;
using $Krb5MechFactory = ::sun::security::jgss::krb5::Krb5MechFactory;
using $Krb5NameElement = ::sun::security::jgss::krb5::Krb5NameElement;
using $Krb5ProxyCredential = ::sun::security::jgss::krb5::Krb5ProxyCredential;
using $GSSCredentialSpi = ::sun::security::jgss::spi::GSSCredentialSpi;
using $GSSNameSpi = ::sun::security::jgss::spi::GSSNameSpi;
using $Credentials = ::sun::security::krb5::Credentials;
using $EncryptionKey = ::sun::security::krb5::EncryptionKey;
using $KerberosSecrets = ::sun::security::krb5::KerberosSecrets;
using $KrbException = ::sun::security::krb5::KrbException;
using $PrincipalName = ::sun::security::krb5::PrincipalName;

namespace sun {
	namespace security {
		namespace jgss {
			namespace krb5 {

$String* Krb5InitCredential::toString() {
	return this->$KerberosTicket::toString();
}

int32_t Krb5InitCredential::hashCode() {
	return this->$KerberosTicket::hashCode();
}

bool Krb5InitCredential::equals(Object$* other) {
	return this->$KerberosTicket::equals(other);
}

$Object* Krb5InitCredential::clone() {
	return this->$KerberosTicket::clone();
}

void Krb5InitCredential::finalize() {
	this->$KerberosTicket::finalize();
}

void Krb5InitCredential::init$($Krb5NameElement* name, $bytes* asn1Encoding, $KerberosPrincipal* client, $KerberosPrincipal* clientAlias, $KerberosPrincipal* server, $KerberosPrincipal* serverAlias, $bytes* sessionKey, int32_t keyType, $booleans* flags, $Date* authTime, $Date* startTime, $Date* endTime, $Date* renewTill, $InetAddressArray* clientAddresses) {
	$useLocalObjectStack();
	$KerberosTicket::init$(asn1Encoding, client, server, sessionKey, keyType, flags, authTime, startTime, endTime, renewTill, clientAddresses);
	$$nc($KerberosSecrets::getJavaxSecurityAuthKerberosAccess())->kerberosTicketSetClientAlias(this, clientAlias);
	$$nc($KerberosSecrets::getJavaxSecurityAuthKerberosAccess())->kerberosTicketSetServerAlias(this, serverAlias);
	$set(this, name, name);
	try {
		$var($String, var$0, $nc(client)->getName());
		$var($String, var$1, clientAlias != nullptr ? clientAlias->getName() : ($String*)nullptr);
		$var($String, var$2, $nc(server)->getName());
		$set(this, krb5Credentials, $new($Credentials, asn1Encoding, var$0, var$1, var$2, (serverAlias != nullptr ? $(serverAlias->getName()) : ($String*)nullptr), sessionKey, keyType, flags, authTime, startTime, endTime, renewTill, clientAddresses));
	} catch ($KrbException& e) {
		$throwNew($GSSException, $GSSException::NO_CRED, -1, $(e->getMessage()));
	} catch ($IOException& e) {
		$throwNew($GSSException, $GSSException::NO_CRED, -1, $(e->getMessage()));
	}
}

void Krb5InitCredential::init$($Krb5NameElement* name, $Credentials* delegatedCred, $bytes* asn1Encoding, $KerberosPrincipal* client, $KerberosPrincipal* clientAlias, $KerberosPrincipal* server, $KerberosPrincipal* serverAlias, $bytes* sessionKey, int32_t keyType, $booleans* flags, $Date* authTime, $Date* startTime, $Date* endTime, $Date* renewTill, $InetAddressArray* clientAddresses) {
	$useLocalObjectStack();
	$KerberosTicket::init$(asn1Encoding, client, server, sessionKey, keyType, flags, authTime, startTime, endTime, renewTill, clientAddresses);
	$$nc($KerberosSecrets::getJavaxSecurityAuthKerberosAccess())->kerberosTicketSetClientAlias(this, clientAlias);
	$$nc($KerberosSecrets::getJavaxSecurityAuthKerberosAccess())->kerberosTicketSetServerAlias(this, serverAlias);
	$set(this, name, name);
	$set(this, krb5Credentials, delegatedCred);
}

Krb5InitCredential* Krb5InitCredential::getInstance($GSSCaller* caller, $Krb5NameElement* name$renamed, int32_t initLifetime) {
	$init(Krb5InitCredential);
	$useLocalObjectStack();
	$var($Krb5NameElement, name, name$renamed);
	$var($KerberosTicket, tgt, getTgt(caller, name, initLifetime));
	if (tgt == nullptr) {
		$throwNew($GSSException, $GSSException::NO_CRED, -1, "Failed to find any Kerberos tgt"_s);
	}
	if (name == nullptr) {
		$var($String, fullName, $$nc($nc(tgt)->getClient())->getName());
		$init($Krb5MechFactory);
		$assign(name, $Krb5NameElement::getInstance(fullName, $Krb5MechFactory::NT_GSS_KRB5_PRINCIPAL));
	}
	$var($KerberosPrincipal, clientAlias, $$nc($KerberosSecrets::getJavaxSecurityAuthKerberosAccess())->kerberosTicketGetClientAlias(tgt));
	$var($KerberosPrincipal, serverAlias, $$nc($KerberosSecrets::getJavaxSecurityAuthKerberosAccess())->kerberosTicketGetServerAlias(tgt));
	$var($bytes, var$0, $nc(tgt)->getEncoded());
	$var($KerberosPrincipal, var$1, tgt->getClient());
	$var($KerberosPrincipal, var$2, tgt->getServer());
	$var($bytes, var$3, $$nc(tgt->getSessionKey())->getEncoded());
	int32_t var$4 = tgt->getSessionKeyType();
	$var($booleans, var$5, tgt->getFlags());
	$var($Date, var$6, tgt->getAuthTime());
	$var($Date, var$7, tgt->getStartTime());
	$var($Date, var$8, tgt->getEndTime());
	$var($Date, var$9, tgt->getRenewTill());
	$var(Krb5InitCredential, result, $new(Krb5InitCredential, name, var$0, var$1, clientAlias, var$2, serverAlias, var$3, var$4, var$5, var$6, var$7, var$8, var$9, $(tgt->getClientAddresses())));
	$set(result, proxyTicket, $$nc($KerberosSecrets::getJavaxSecurityAuthKerberosAccess())->kerberosTicketGetProxy(tgt));
	return result;
}

Krb5InitCredential* Krb5InitCredential::getInstance($Krb5NameElement* name, $Credentials* delegatedCred) {
	$init(Krb5InitCredential);
	$useLocalObjectStack();
	$var($EncryptionKey, sessionKey, $nc(delegatedCred)->getSessionKey());
	$var($PrincipalName, cPrinc, delegatedCred->getClient());
	$var($PrincipalName, cAPrinc, delegatedCred->getClientAlias());
	$var($PrincipalName, sPrinc, delegatedCred->getServer());
	$var($PrincipalName, sAPrinc, delegatedCred->getServerAlias());
	$var($KerberosPrincipal, client, nullptr);
	$var($KerberosPrincipal, clientAlias, nullptr);
	$var($KerberosPrincipal, server, nullptr);
	$var($KerberosPrincipal, serverAlias, nullptr);
	$var($Krb5NameElement, credName, nullptr);
	if (cPrinc != nullptr) {
		$var($String, fullName, cPrinc->getName());
		$init($Krb5MechFactory);
		$assign(credName, $Krb5NameElement::getInstance(fullName, $Krb5MechFactory::NT_GSS_KRB5_PRINCIPAL));
		$assign(client, $new($KerberosPrincipal, fullName));
	}
	if (cAPrinc != nullptr) {
		$assign(clientAlias, $new($KerberosPrincipal, $(cAPrinc->getName())));
	}
	if (sPrinc != nullptr) {
		$assign(server, $new($KerberosPrincipal, $(sPrinc->getName()), $KerberosPrincipal::KRB_NT_SRV_INST));
	}
	if (sAPrinc != nullptr) {
		$assign(serverAlias, $new($KerberosPrincipal, $(sAPrinc->getName())));
	}
	$var($bytes, var$0, delegatedCred->getEncoded());
	$var($bytes, var$1, $nc(sessionKey)->getBytes());
	int32_t var$2 = sessionKey->getEType();
	$var($booleans, var$3, delegatedCred->getFlags());
	$var($Date, var$4, delegatedCred->getAuthTime());
	$var($Date, var$5, delegatedCred->getStartTime());
	$var($Date, var$6, delegatedCred->getEndTime());
	$var($Date, var$7, delegatedCred->getRenewTill());
	return $new(Krb5InitCredential, credName, delegatedCred, var$0, client, clientAlias, server, serverAlias, var$1, var$2, var$3, var$4, var$5, var$6, var$7, $(delegatedCred->getClientAddresses()));
}

$GSSNameSpi* Krb5InitCredential::getName() {
	return this->name;
}

int32_t Krb5InitCredential::getInitLifetime() {
	$var($Date, d, getEndTime());
	if (d == nullptr) {
		return 0;
	}
	int64_t var$0 = $nc(d)->getTime();
	int64_t retVal = var$0 - $System::currentTimeMillis();
	return (int32_t)(retVal / 1000);
}

int32_t Krb5InitCredential::getAcceptLifetime() {
	return 0;
}

bool Krb5InitCredential::isInitiatorCredential() {
	return true;
}

bool Krb5InitCredential::isAcceptorCredential() {
	return false;
}

$Oid* Krb5InitCredential::getMechanism() {
	$init($Krb5MechFactory);
	return $Krb5MechFactory::GSS_KRB5_MECH_OID;
}

$Provider* Krb5InitCredential::getProvider() {
	$init($Krb5MechFactory);
	return $Krb5MechFactory::PROVIDER;
}

$Credentials* Krb5InitCredential::getKrb5Credentials() {
	return this->krb5Credentials;
}

void Krb5InitCredential::dispose() {
	$useLocalObjectStack();
	try {
		destroy();
	} catch ($DestroyFailedException& e) {
		$var($GSSException, gssException, $new($GSSException, $GSSException::FAILURE, -1, $$str({"Could not destroy credentials - "_s, $(e->getMessage())})));
		gssException->initCause(e);
	}
}

$KerberosTicket* Krb5InitCredential::getTgt($GSSCaller* caller, $Krb5NameElement* name, int32_t initLifetime) {
	$init(Krb5InitCredential);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, clientPrincipal, nullptr);
	if (name != nullptr) {
		$assign(clientPrincipal, ($$nc(name->getKrb5PrincipalName()))->getName());
	} else {
		$assign(clientPrincipal, nullptr);
	}
	$var($AccessControlContext, acc, $AccessController::getContext());
	try {
		$init($GSSCaller);
		$var($GSSCaller, realCaller, (caller == $GSSCaller::CALLER_UNKNOWN) ? $GSSCaller::CALLER_INITIATE : caller);
		return $cast($KerberosTicket, $AccessController::doPrivileged($$new($Krb5InitCredential$1, realCaller, clientPrincipal, acc)));
	} catch ($PrivilegedActionException& e) {
		$var($GSSException, ge, $new($GSSException, $GSSException::NO_CRED, -1, $$str({"Attempt to obtain new INITIATE credentials failed! ("_s, $(e->getMessage()), ")"_s})));
		ge->initCause($(e->getException()));
		$throw(ge);
	}
	$shouldNotReachHere();
}

$GSSCredentialSpi* Krb5InitCredential::impersonate($GSSNameSpi* name) {
	$useLocalObjectStack();
	try {
		$var($Krb5NameElement, kname, $cast($Krb5NameElement, name));
		$var($Credentials, newCred, $Credentials::acquireS4U2selfCreds($($nc(kname)->getKrb5PrincipalName()), this->krb5Credentials));
		return $new($Krb5ProxyCredential, this, kname, $($nc(newCred)->getTicket()));
	} catch ($IOException& ke) {
		$var($GSSException, ge, $new($GSSException, $GSSException::FAILURE, -1, "Attempt to obtain S4U2self credentials failed!"_s));
		ge->initCause(ke);
		$throw(ge);
	} catch ($KrbException& ke) {
		$var($GSSException, ge, $new($GSSException, $GSSException::FAILURE, -1, "Attempt to obtain S4U2self credentials failed!"_s));
		ge->initCause(ke);
		$throw(ge);
	}
	$shouldNotReachHere();
}

Krb5InitCredential::Krb5InitCredential() {
}

$Class* Krb5InitCredential::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Krb5InitCredential, serialVersionUID)},
		{"name", "Lsun/security/jgss/krb5/Krb5NameElement;", nullptr, $PRIVATE, $field(Krb5InitCredential, name)},
		{"krb5Credentials", "Lsun/security/krb5/Credentials;", nullptr, $PRIVATE, $field(Krb5InitCredential, krb5Credentials)},
		{"proxyTicket", "Ljavax/security/auth/kerberos/KerberosTicket;", nullptr, $PUBLIC, $field(Krb5InitCredential, proxyTicket)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Lsun/security/jgss/krb5/Krb5NameElement;[BLjavax/security/auth/kerberos/KerberosPrincipal;Ljavax/security/auth/kerberos/KerberosPrincipal;Ljavax/security/auth/kerberos/KerberosPrincipal;Ljavax/security/auth/kerberos/KerberosPrincipal;[BI[ZLjava/util/Date;Ljava/util/Date;Ljava/util/Date;Ljava/util/Date;[Ljava/net/InetAddress;)V", nullptr, $PRIVATE, $method(Krb5InitCredential, init$, void, $Krb5NameElement*, $bytes*, $KerberosPrincipal*, $KerberosPrincipal*, $KerberosPrincipal*, $KerberosPrincipal*, $bytes*, int32_t, $booleans*, $Date*, $Date*, $Date*, $Date*, $InetAddressArray*), "org.ietf.jgss.GSSException"},
		{"<init>", "(Lsun/security/jgss/krb5/Krb5NameElement;Lsun/security/krb5/Credentials;[BLjavax/security/auth/kerberos/KerberosPrincipal;Ljavax/security/auth/kerberos/KerberosPrincipal;Ljavax/security/auth/kerberos/KerberosPrincipal;Ljavax/security/auth/kerberos/KerberosPrincipal;[BI[ZLjava/util/Date;Ljava/util/Date;Ljava/util/Date;Ljava/util/Date;[Ljava/net/InetAddress;)V", nullptr, $PRIVATE, $method(Krb5InitCredential, init$, void, $Krb5NameElement*, $Credentials*, $bytes*, $KerberosPrincipal*, $KerberosPrincipal*, $KerberosPrincipal*, $KerberosPrincipal*, $bytes*, int32_t, $booleans*, $Date*, $Date*, $Date*, $Date*, $InetAddressArray*), "org.ietf.jgss.GSSException"},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(Krb5InitCredential, dispose, void), "org.ietf.jgss.GSSException"},
		{"getAcceptLifetime", "()I", nullptr, $PUBLIC, $virtualMethod(Krb5InitCredential, getAcceptLifetime, int32_t), "org.ietf.jgss.GSSException"},
		{"getInitLifetime", "()I", nullptr, $PUBLIC, $virtualMethod(Krb5InitCredential, getInitLifetime, int32_t), "org.ietf.jgss.GSSException"},
		{"getInstance", "(Lsun/security/jgss/GSSCaller;Lsun/security/jgss/krb5/Krb5NameElement;I)Lsun/security/jgss/krb5/Krb5InitCredential;", nullptr, $STATIC, $staticMethod(Krb5InitCredential, getInstance, Krb5InitCredential*, $GSSCaller*, $Krb5NameElement*, int32_t), "org.ietf.jgss.GSSException"},
		{"getInstance", "(Lsun/security/jgss/krb5/Krb5NameElement;Lsun/security/krb5/Credentials;)Lsun/security/jgss/krb5/Krb5InitCredential;", nullptr, $STATIC, $staticMethod(Krb5InitCredential, getInstance, Krb5InitCredential*, $Krb5NameElement*, $Credentials*), "org.ietf.jgss.GSSException"},
		{"getKrb5Credentials", "()Lsun/security/krb5/Credentials;", nullptr, 0, $virtualMethod(Krb5InitCredential, getKrb5Credentials, $Credentials*)},
		{"getMechanism", "()Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5InitCredential, getMechanism, $Oid*)},
		{"getName", "()Lsun/security/jgss/spi/GSSNameSpi;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5InitCredential, getName, $GSSNameSpi*), "org.ietf.jgss.GSSException"},
		{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5InitCredential, getProvider, $Provider*)},
		{"getTgt", "(Lsun/security/jgss/GSSCaller;Lsun/security/jgss/krb5/Krb5NameElement;I)Ljavax/security/auth/kerberos/KerberosTicket;", nullptr, $PRIVATE | $STATIC, $staticMethod(Krb5InitCredential, getTgt, $KerberosTicket*, $GSSCaller*, $Krb5NameElement*, int32_t), "org.ietf.jgss.GSSException"},
		{"impersonate", "(Lsun/security/jgss/spi/GSSNameSpi;)Lsun/security/jgss/spi/GSSCredentialSpi;", nullptr, $PUBLIC, $virtualMethod(Krb5InitCredential, impersonate, $GSSCredentialSpi*, $GSSNameSpi*), "org.ietf.jgss.GSSException"},
		{"isAcceptorCredential", "()Z", nullptr, $PUBLIC, $virtualMethod(Krb5InitCredential, isAcceptorCredential, bool), "org.ietf.jgss.GSSException"},
		{"isInitiatorCredential", "()Z", nullptr, $PUBLIC, $virtualMethod(Krb5InitCredential, isInitiatorCredential, bool), "org.ietf.jgss.GSSException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jgss.krb5.Krb5InitCredential$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.jgss.krb5.Krb5InitCredential",
		"javax.security.auth.kerberos.KerberosTicket",
		"sun.security.jgss.krb5.Krb5CredElement",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.jgss.krb5.Krb5InitCredential$1"
	};
	$loadClass(Krb5InitCredential, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Krb5InitCredential));
	});
	return class$;
}

$Class* Krb5InitCredential::class$ = nullptr;

			} // krb5
		} // jgss
	} // security
} // sun