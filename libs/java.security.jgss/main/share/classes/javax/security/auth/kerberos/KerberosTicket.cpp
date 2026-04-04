#include <javax/security/auth/kerberos/KerberosTicket.h>
#include <java/io/IOException.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/net/InetAddress.h>
#include <java/util/Arrays.h>
#include <java/util/Date.h>
#include <java/util/Objects.h>
#include <javax/crypto/SecretKey.h>
#include <javax/security/auth/DestroyFailedException.h>
#include <javax/security/auth/Destroyable.h>
#include <javax/security/auth/RefreshFailedException.h>
#include <javax/security/auth/kerberos/EncryptionKey.h>
#include <javax/security/auth/kerberos/KerberosPrincipal.h>
#include <javax/security/auth/kerberos/KeyImpl.h>
#include <sun/security/krb5/Credentials.h>
#include <sun/security/krb5/EncryptionKey.h>
#include <sun/security/krb5/KrbException.h>
#include <sun/security/krb5/PrincipalName.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef FORWARDABLE_TICKET_FLAG
#undef FORWARDED_TICKET_FLAG
#undef INITIAL_TICKET_FLAG
#undef KRB_NT_SRV_INST
#undef NUM_FLAGS
#undef POSTDATED_TICKET_FLAG
#undef PROXIABLE_TICKET_FLAG
#undef PROXY_TICKET_FLAG
#undef RENEWABLE_TICKET_FLAG

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $IOException = ::java::io::IOException;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Date = ::java::util::Date;
using $Objects = ::java::util::Objects;
using $SecretKey = ::javax::crypto::SecretKey;
using $DestroyFailedException = ::javax::security::auth::DestroyFailedException;
using $Destroyable = ::javax::security::auth::Destroyable;
using $RefreshFailedException = ::javax::security::auth::RefreshFailedException;
using $EncryptionKey = ::javax::security::auth::kerberos::EncryptionKey;
using $KerberosPrincipal = ::javax::security::auth::kerberos::KerberosPrincipal;
using $KeyImpl = ::javax::security::auth::kerberos::KeyImpl;
using $Credentials = ::sun::security::krb5::Credentials;
using $KrbException = ::sun::security::krb5::KrbException;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace javax {
	namespace security {
		namespace auth {
			namespace kerberos {

$Object* KerberosTicket::clone() {
	 return this->$Destroyable::clone();
}

void KerberosTicket::finalize() {
	this->$Destroyable::finalize();
}

void KerberosTicket::init$($bytes* asn1Encoding, $KerberosPrincipal* client, $KerberosPrincipal* server, $bytes* sessionKey, int32_t keyType, $booleans* flags, $Date* authTime, $Date* startTime, $Date* endTime, $Date* renewTill, $InetAddressArray* clientAddresses) {
	$set(this, proxy, nullptr);
	this->destroyed = false;
	$set(this, clientAlias, nullptr);
	$set(this, serverAlias, nullptr);
	init(asn1Encoding, client, server, sessionKey, keyType, flags, authTime, startTime, endTime, renewTill, clientAddresses);
}

void KerberosTicket::init($bytes* asn1Encoding, $KerberosPrincipal* client, $KerberosPrincipal* server, $bytes* sessionKey, int32_t keyType, $booleans* flags, $Date* authTime, $Date* startTime, $Date* endTime, $Date* renewTill, $InetAddressArray* clientAddresses) {
	if (sessionKey == nullptr) {
		$throwNew($IllegalArgumentException, "Session key for ticket cannot be null"_s);
	}
	init(asn1Encoding, client, server, $$new($KeyImpl, sessionKey, keyType), flags, authTime, startTime, endTime, renewTill, clientAddresses);
}

void KerberosTicket::init($bytes* asn1Encoding, $KerberosPrincipal* client, $KerberosPrincipal* server, $KeyImpl* sessionKey, $booleans* flags, $Date* authTime, $Date* startTime, $Date* endTime, $Date* renewTill, $InetAddressArray* clientAddresses) {
	if (asn1Encoding == nullptr) {
		$throwNew($IllegalArgumentException, "ASN.1 encoding of ticket cannot be null"_s);
	}
	$set(this, asn1Encoding, $cast($bytes, $nc(asn1Encoding)->clone()));
	if (client == nullptr) {
		$throwNew($IllegalArgumentException, "Client name in ticket cannot be null"_s);
	}
	$set(this, client, client);
	if (server == nullptr) {
		$throwNew($IllegalArgumentException, "Server name in ticket cannot be null"_s);
	}
	$set(this, server, server);
	$set(this, sessionKey, sessionKey);
	if (flags != nullptr) {
		if (flags->length >= KerberosTicket::NUM_FLAGS) {
			$set(this, flags, $cast($booleans, flags->clone()));
		} else {
			$set(this, flags, $new($booleans, KerberosTicket::NUM_FLAGS));
			for (int32_t i = 0; i < flags->length; ++i) {
				this->flags->set(i, flags->get(i));
			}
		}
	} else {
		$set(this, flags, $new($booleans, KerberosTicket::NUM_FLAGS));
	}
	if ($nc(this->flags)->get(KerberosTicket::RENEWABLE_TICKET_FLAG) && renewTill != nullptr) {
		$set(this, renewTill, $new($Date, renewTill->getTime()));
	}
	if (authTime != nullptr) {
		$set(this, authTime, $new($Date, authTime->getTime()));
	}
	if (startTime != nullptr) {
		$set(this, startTime, $new($Date, startTime->getTime()));
	} else {
		$set(this, startTime, this->authTime);
	}
	if (endTime == nullptr) {
		$throwNew($IllegalArgumentException, "End time for ticket validity cannot be null"_s);
	}
	$set(this, endTime, $new($Date, $nc(endTime)->getTime()));
	if (clientAddresses != nullptr) {
		$set(this, clientAddresses, $cast($InetAddressArray, clientAddresses->clone()));
	}
}

$KerberosPrincipal* KerberosTicket::getClient() {
	return this->client;
}

$KerberosPrincipal* KerberosTicket::getServer() {
	return this->server;
}

$SecretKey* KerberosTicket::getSessionKey() {
	if (this->destroyed) {
		$throwNew($IllegalStateException, "This ticket is no longer valid"_s);
	}
	$var($bytes, var$0, $nc(this->sessionKey)->getEncoded());
	return $new($EncryptionKey, var$0, this->sessionKey->getKeyType());
}

int32_t KerberosTicket::getSessionKeyType() {
	if (this->destroyed) {
		$throwNew($IllegalStateException, "This ticket is no longer valid"_s);
	}
	return $nc(this->sessionKey)->getKeyType();
}

bool KerberosTicket::isForwardable() {
	return this->flags == nullptr ? false : this->flags->get(KerberosTicket::FORWARDABLE_TICKET_FLAG);
}

bool KerberosTicket::isForwarded() {
	return this->flags == nullptr ? false : this->flags->get(KerberosTicket::FORWARDED_TICKET_FLAG);
}

bool KerberosTicket::isProxiable() {
	return this->flags == nullptr ? false : this->flags->get(KerberosTicket::PROXIABLE_TICKET_FLAG);
}

bool KerberosTicket::isProxy() {
	return this->flags == nullptr ? false : this->flags->get(KerberosTicket::PROXY_TICKET_FLAG);
}

bool KerberosTicket::isPostdated() {
	return this->flags == nullptr ? false : this->flags->get(KerberosTicket::POSTDATED_TICKET_FLAG);
}

bool KerberosTicket::isRenewable() {
	return this->flags == nullptr ? false : this->flags->get(KerberosTicket::RENEWABLE_TICKET_FLAG);
}

bool KerberosTicket::isInitial() {
	return this->flags == nullptr ? false : this->flags->get(KerberosTicket::INITIAL_TICKET_FLAG);
}

$booleans* KerberosTicket::getFlags() {
	return (this->flags == nullptr ? ($booleans*)nullptr : $cast($booleans, this->flags->clone()));
}

$Date* KerberosTicket::getAuthTime() {
	return (this->authTime == nullptr) ? ($Date*)nullptr : $cast($Date, this->authTime->clone());
}

$Date* KerberosTicket::getStartTime() {
	return (this->startTime == nullptr) ? ($Date*)nullptr : $cast($Date, this->startTime->clone());
}

$Date* KerberosTicket::getEndTime() {
	return (this->endTime == nullptr) ? ($Date*)nullptr : $cast($Date, this->endTime->clone());
}

$Date* KerberosTicket::getRenewTill() {
	return (this->renewTill == nullptr) ? ($Date*)nullptr : $cast($Date, this->renewTill->clone());
}

$InetAddressArray* KerberosTicket::getClientAddresses() {
	return (this->clientAddresses == nullptr) ? ($InetAddressArray*)nullptr : $cast($InetAddressArray, this->clientAddresses->clone());
}

$bytes* KerberosTicket::getEncoded() {
	if (this->destroyed) {
		$throwNew($IllegalStateException, "This ticket is no longer valid"_s);
	}
	return $cast($bytes, $nc(this->asn1Encoding)->clone());
}

bool KerberosTicket::isCurrent() {
	bool var$0 = false;
	if (this->endTime == nullptr) {
		var$0 = false;
	} else {
		int64_t var$1 = $System::currentTimeMillis();
		var$0 = (var$1 <= $nc(this->endTime)->getTime());
	}
	return var$0;
}

void KerberosTicket::refresh() {
	$useLocalObjectStack();
	if (this->destroyed) {
		$throwNew($RefreshFailedException, "A destroyed ticket cannot be renewd."_s);
	}
	if (!isRenewable()) {
		$throwNew($RefreshFailedException, "This ticket is not renewable"_s);
	}
	if (getRenewTill() == nullptr) {
		return;
	}
	int64_t var$0 = $System::currentTimeMillis();
	if (var$0 > $$nc(getRenewTill())->getTime()) {
		$throwNew($RefreshFailedException, "This ticket is past its last renewal time."_s);
	}
	$var($Throwable, e, nullptr);
	$var($Credentials, krb5Creds, nullptr);
	try {
		$var($bytes, var$1, this->asn1Encoding);
		$var($String, var$2, $nc(this->client)->getName());
		$var($String, var$3, this->clientAlias != nullptr ? this->clientAlias->getName() : ($String*)nullptr);
		$var($String, var$4, $nc(this->server)->getName());
		$var($String, var$5, this->serverAlias != nullptr ? this->serverAlias->getName() : ($String*)nullptr);
		$var($bytes, var$6, $nc(this->sessionKey)->getEncoded());
		$assign(krb5Creds, $new($Credentials, var$1, var$2, var$3, var$4, var$5, var$6, this->sessionKey->getKeyType(), this->flags, this->authTime, this->startTime, this->endTime, this->renewTill, this->clientAddresses));
		$assign(krb5Creds, krb5Creds->renew());
	} catch ($KrbException& krbException) {
		$assign(e, krbException);
	} catch ($IOException& ioException) {
		$assign(e, ioException);
	}
	if (e != nullptr) {
		$var($StringBuilder, var$7, $new($StringBuilder));
		var$7->append("Failed to renew Kerberos Ticket for client "_s);
		var$7->append(this->client);
		var$7->append(" and server "_s);
		var$7->append(this->server);
		var$7->append(" - "_s);
		var$7->append($(e->getMessage()));
		$var($RefreshFailedException, rfException, $new($RefreshFailedException, $$str(var$7)));
		rfException->initCause(e);
		$throw(rfException);
	}
	$synchronized(this) {
		try {
			this->destroy();
		} catch ($DestroyFailedException& dfException) {
		}
		$var($bytes, var$8, $nc(krb5Creds)->getEncoded());
		$var($KerberosPrincipal, var$9, $new($KerberosPrincipal, $($$nc(krb5Creds->getClient())->getName())));
		$var($KerberosPrincipal, var$10, $new($KerberosPrincipal, $($$nc(krb5Creds->getServer())->getName()), $KerberosPrincipal::KRB_NT_SRV_INST));
		$var($bytes, var$11, $$nc(krb5Creds->getSessionKey())->getBytes());
		int32_t var$12 = $$nc(krb5Creds->getSessionKey())->getEType();
		$var($booleans, var$13, krb5Creds->getFlags());
		$var($Date, var$14, krb5Creds->getAuthTime());
		$var($Date, var$15, krb5Creds->getStartTime());
		$var($Date, var$16, krb5Creds->getEndTime());
		$var($Date, var$17, krb5Creds->getRenewTill());
		init(var$8, var$9, var$10, var$11, var$12, var$13, var$14, var$15, var$16, var$17, $(krb5Creds->getClientAddresses()));
		this->destroyed = false;
	}
}

void KerberosTicket::destroy() {
	if (!this->destroyed) {
		$Arrays::fill(this->asn1Encoding, (int8_t)0);
		$set(this, client, nullptr);
		$set(this, server, nullptr);
		$nc(this->sessionKey)->destroy();
		$set(this, flags, nullptr);
		$set(this, authTime, nullptr);
		$set(this, startTime, nullptr);
		$set(this, endTime, nullptr);
		$set(this, renewTill, nullptr);
		$set(this, clientAddresses, nullptr);
		this->destroyed = true;
	}
}

bool KerberosTicket::isDestroyed() {
	return this->destroyed;
}

$String* KerberosTicket::toString() {
	$useLocalObjectStack();
	if (this->destroyed) {
		return "Destroyed KerberosTicket"_s;
	}
	$var($StringBuilder, caddrString, $new($StringBuilder));
	if (this->clientAddresses != nullptr) {
		for (int32_t i = 0; i < this->clientAddresses->length; ++i) {
			caddrString->append($$str({"clientAddresses["_s, $$str(i), "] = "_s, $($nc(this->clientAddresses->get(i))->toString())}));
		}
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("Ticket (hex) = \n"_s);
	var$0->append($(($$new($HexDumpEncoder))->encodeBuffer(this->asn1Encoding)));
	var$0->append("\nClient Principal = "_s);
	var$0->append($($nc(this->client)->toString()));
	var$0->append("\nServer Principal = "_s);
	var$0->append($($nc(this->server)->toString()));
	var$0->append("\nSession Key = "_s);
	var$0->append($($nc(this->sessionKey)->toString()));
	var$0->append("\nForwardable Ticket "_s);
	var$0->append($nc(this->flags)->get(KerberosTicket::FORWARDABLE_TICKET_FLAG));
	var$0->append("\nForwarded Ticket "_s);
	var$0->append(this->flags->get(KerberosTicket::FORWARDED_TICKET_FLAG));
	var$0->append("\nProxiable Ticket "_s);
	var$0->append(this->flags->get(KerberosTicket::PROXIABLE_TICKET_FLAG));
	var$0->append("\nProxy Ticket "_s);
	var$0->append(this->flags->get(KerberosTicket::PROXY_TICKET_FLAG));
	var$0->append("\nPostdated Ticket "_s);
	var$0->append(this->flags->get(KerberosTicket::POSTDATED_TICKET_FLAG));
	var$0->append("\nRenewable Ticket "_s);
	var$0->append(this->flags->get(KerberosTicket::RENEWABLE_TICKET_FLAG));
	var$0->append("\nInitial Ticket "_s);
	var$0->append(this->flags->get(KerberosTicket::INITIAL_TICKET_FLAG));
	var$0->append("\nAuth Time = "_s);
	var$0->append($($String::valueOf(this->authTime)));
	var$0->append("\nStart Time = "_s);
	var$0->append($($String::valueOf(this->startTime)));
	var$0->append("\nEnd Time = "_s);
	var$0->append($($nc(this->endTime)->toString()));
	var$0->append("\nRenew Till = "_s);
	var$0->append($($String::valueOf(this->renewTill)));
	var$0->append("\nClient Addresses "_s);
	var$0->append(this->clientAddresses == nullptr ? " Null "_s : $$str({$(caddrString->toString()), (this->proxy == nullptr ? ""_s : "\nwith a proxy ticket"_s), "\n"_s}));
	return ($str(var$0));
}

int32_t KerberosTicket::hashCode() {
	int32_t result = 17;
	if (isDestroyed()) {
		return result;
	}
	result = result * 37 + $Arrays::hashCode($(getEncoded()));
	result = result * 37 + $nc(this->endTime)->hashCode();
	result = result * 37 + $nc(this->client)->hashCode();
	result = result * 37 + $nc(this->server)->hashCode();
	result = result * 37 + $nc(this->sessionKey)->hashCode();
	if (this->authTime != nullptr) {
		result = result * 37 + this->authTime->hashCode();
	}
	if (this->startTime != nullptr) {
		result = result * 37 + this->startTime->hashCode();
	}
	if (this->renewTill != nullptr) {
		result = result * 37 + this->renewTill->hashCode();
	}
	result = result * 37 + $Arrays::hashCode(this->clientAddresses);
	if (this->proxy != nullptr) {
		result = result * 37 + this->proxy->hashCode();
	}
	return result * 37 + $Arrays::hashCode(this->flags);
}

bool KerberosTicket::equals(Object$* other) {
	$useLocalObjectStack();
	if ($equals(other, this)) {
		return true;
	}
	if (!($instanceOf(KerberosTicket, other))) {
		return false;
	}
	$var(KerberosTicket, otherTicket, $cast(KerberosTicket, other));
	bool var$0 = isDestroyed();
	if (var$0 || $nc(otherTicket)->isDestroyed()) {
		return false;
	}
	$var($bytes, var$7, getEncoded());
	bool var$6 = !$Arrays::equals(var$7, $($nc(otherTicket)->getEncoded()));
	bool var$5 = var$6 || !$nc(this->endTime)->equals($(otherTicket->getEndTime()));
	bool var$4 = var$5 || !$nc(this->server)->equals($(otherTicket->getServer()));
	bool var$3 = var$4 || !$nc(this->client)->equals($(otherTicket->getClient()));
	bool var$2 = var$3 || !$nc(this->sessionKey)->equals(otherTicket->sessionKey);
	bool var$1 = var$2 || !$Arrays::equals(this->clientAddresses, $(otherTicket->getClientAddresses()));
	if (var$1 || !$Arrays::equals(this->flags, $(otherTicket->getFlags()))) {
		return false;
	}
	if (this->authTime == nullptr) {
		if (otherTicket->getAuthTime() != nullptr) {
			return false;
		}
	} else if (!this->authTime->equals($(otherTicket->getAuthTime()))) {
		return false;
	}
	if (this->startTime == nullptr) {
		if (otherTicket->getStartTime() != nullptr) {
			return false;
		}
	} else if (!this->startTime->equals($(otherTicket->getStartTime()))) {
		return false;
	}
	if (this->renewTill == nullptr) {
		if (otherTicket->getRenewTill() != nullptr) {
			return false;
		}
	} else if (!this->renewTill->equals($(otherTicket->getRenewTill()))) {
		return false;
	}
	if (!$Objects::equals(this->proxy, otherTicket->proxy)) {
		return false;
	}
	return true;
}

void KerberosTicket::readObject($ObjectInputStream* s) {
	$useLocalObjectStack();
	$nc(s)->defaultReadObject();
	if (this->sessionKey == nullptr) {
		$throwNew($InvalidObjectException, "Session key cannot be null"_s);
	}
	try {
		init(this->asn1Encoding, this->client, this->server, this->sessionKey, this->flags, this->authTime, this->startTime, this->endTime, this->renewTill, this->clientAddresses);
	} catch ($IllegalArgumentException& iae) {
		$throw($$cast($InvalidObjectException, $$new($InvalidObjectException, $(iae->getMessage()))->initCause(iae)));
	}
}

KerberosTicket::KerberosTicket() {
}

$Class* KerberosTicket::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KerberosTicket, serialVersionUID)},
		{"FORWARDABLE_TICKET_FLAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KerberosTicket, FORWARDABLE_TICKET_FLAG)},
		{"FORWARDED_TICKET_FLAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KerberosTicket, FORWARDED_TICKET_FLAG)},
		{"PROXIABLE_TICKET_FLAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KerberosTicket, PROXIABLE_TICKET_FLAG)},
		{"PROXY_TICKET_FLAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KerberosTicket, PROXY_TICKET_FLAG)},
		{"POSTDATED_TICKET_FLAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KerberosTicket, POSTDATED_TICKET_FLAG)},
		{"RENEWABLE_TICKET_FLAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KerberosTicket, RENEWABLE_TICKET_FLAG)},
		{"INITIAL_TICKET_FLAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KerberosTicket, INITIAL_TICKET_FLAG)},
		{"NUM_FLAGS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KerberosTicket, NUM_FLAGS)},
		{"asn1Encoding", "[B", nullptr, $PRIVATE, $field(KerberosTicket, asn1Encoding)},
		{"sessionKey", "Ljavax/security/auth/kerberos/KeyImpl;", nullptr, $PRIVATE, $field(KerberosTicket, sessionKey)},
		{"flags", "[Z", nullptr, $PRIVATE, $field(KerberosTicket, flags)},
		{"authTime", "Ljava/util/Date;", nullptr, $PRIVATE, $field(KerberosTicket, authTime)},
		{"startTime", "Ljava/util/Date;", nullptr, $PRIVATE, $field(KerberosTicket, startTime)},
		{"endTime", "Ljava/util/Date;", nullptr, $PRIVATE, $field(KerberosTicket, endTime)},
		{"renewTill", "Ljava/util/Date;", nullptr, $PRIVATE, $field(KerberosTicket, renewTill)},
		{"client", "Ljavax/security/auth/kerberos/KerberosPrincipal;", nullptr, $PRIVATE, $field(KerberosTicket, client)},
		{"server", "Ljavax/security/auth/kerberos/KerberosPrincipal;", nullptr, $PRIVATE, $field(KerberosTicket, server)},
		{"clientAddresses", "[Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(KerberosTicket, clientAddresses)},
		{"proxy", "Ljavax/security/auth/kerberos/KerberosTicket;", nullptr, 0, $field(KerberosTicket, proxy)},
		{"destroyed", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(KerberosTicket, destroyed)},
		{"clientAlias", "Ljavax/security/auth/kerberos/KerberosPrincipal;", nullptr, $TRANSIENT, $field(KerberosTicket, clientAlias)},
		{"serverAlias", "Ljavax/security/auth/kerberos/KerberosPrincipal;", nullptr, $TRANSIENT, $field(KerberosTicket, serverAlias)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "([BLjavax/security/auth/kerberos/KerberosPrincipal;Ljavax/security/auth/kerberos/KerberosPrincipal;[BI[ZLjava/util/Date;Ljava/util/Date;Ljava/util/Date;Ljava/util/Date;[Ljava/net/InetAddress;)V", nullptr, $PUBLIC, $method(KerberosTicket, init$, void, $bytes*, $KerberosPrincipal*, $KerberosPrincipal*, $bytes*, int32_t, $booleans*, $Date*, $Date*, $Date*, $Date*, $InetAddressArray*)},
		{"destroy", "()V", nullptr, $PUBLIC, $virtualMethod(KerberosTicket, destroy, void), "javax.security.auth.DestroyFailedException"},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(KerberosTicket, equals, bool, Object$*)},
		{"getAuthTime", "()Ljava/util/Date;", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, getAuthTime, $Date*)},
		{"getClient", "()Ljavax/security/auth/kerberos/KerberosPrincipal;", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, getClient, $KerberosPrincipal*)},
		{"getClientAddresses", "()[Ljava/net/InetAddress;", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, getClientAddresses, $InetAddressArray*)},
		{"getEncoded", "()[B", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, getEncoded, $bytes*)},
		{"getEndTime", "()Ljava/util/Date;", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, getEndTime, $Date*)},
		{"getFlags", "()[Z", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, getFlags, $booleans*)},
		{"getRenewTill", "()Ljava/util/Date;", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, getRenewTill, $Date*)},
		{"getServer", "()Ljavax/security/auth/kerberos/KerberosPrincipal;", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, getServer, $KerberosPrincipal*)},
		{"getSessionKey", "()Ljavax/crypto/SecretKey;", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, getSessionKey, $SecretKey*)},
		{"getSessionKeyType", "()I", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, getSessionKeyType, int32_t)},
		{"getStartTime", "()Ljava/util/Date;", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, getStartTime, $Date*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(KerberosTicket, hashCode, int32_t)},
		{"init", "([BLjavax/security/auth/kerberos/KerberosPrincipal;Ljavax/security/auth/kerberos/KerberosPrincipal;[BI[ZLjava/util/Date;Ljava/util/Date;Ljava/util/Date;Ljava/util/Date;[Ljava/net/InetAddress;)V", nullptr, $PRIVATE, $method(KerberosTicket, init, void, $bytes*, $KerberosPrincipal*, $KerberosPrincipal*, $bytes*, int32_t, $booleans*, $Date*, $Date*, $Date*, $Date*, $InetAddressArray*)},
		{"init", "([BLjavax/security/auth/kerberos/KerberosPrincipal;Ljavax/security/auth/kerberos/KerberosPrincipal;Ljavax/security/auth/kerberos/KeyImpl;[ZLjava/util/Date;Ljava/util/Date;Ljava/util/Date;Ljava/util/Date;[Ljava/net/InetAddress;)V", nullptr, $PRIVATE, $method(KerberosTicket, init, void, $bytes*, $KerberosPrincipal*, $KerberosPrincipal*, $KeyImpl*, $booleans*, $Date*, $Date*, $Date*, $Date*, $InetAddressArray*)},
		{"isCurrent", "()Z", nullptr, $PUBLIC, $virtualMethod(KerberosTicket, isCurrent, bool)},
		{"isDestroyed", "()Z", nullptr, $PUBLIC, $virtualMethod(KerberosTicket, isDestroyed, bool)},
		{"isForwardable", "()Z", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, isForwardable, bool)},
		{"isForwarded", "()Z", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, isForwarded, bool)},
		{"isInitial", "()Z", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, isInitial, bool)},
		{"isPostdated", "()Z", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, isPostdated, bool)},
		{"isProxiable", "()Z", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, isProxiable, bool)},
		{"isProxy", "()Z", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, isProxy, bool)},
		{"isRenewable", "()Z", nullptr, $PUBLIC | $FINAL, $method(KerberosTicket, isRenewable, bool)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(KerberosTicket, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"refresh", "()V", nullptr, $PUBLIC, $virtualMethod(KerberosTicket, refresh, void), "javax.security.auth.RefreshFailedException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KerberosTicket, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.auth.kerberos.KerberosTicket",
		"java.lang.Object",
		"javax.security.auth.Destroyable,javax.security.auth.Refreshable,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KerberosTicket, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(KerberosTicket));
	});
	return class$;
}

$Class* KerberosTicket::class$ = nullptr;

			} // kerberos
		} // auth
	} // security
} // javax