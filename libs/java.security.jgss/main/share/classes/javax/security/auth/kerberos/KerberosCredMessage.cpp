#include <javax/security/auth/kerberos/KerberosCredMessage.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Arrays.h>
#include <java/util/Base64$Encoder.h>
#include <java/util/Base64.h>
#include <java/util/Objects.h>
#include <javax/security/auth/kerberos/KerberosPrincipal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Base64 = ::java::util::Base64;
using $Objects = ::java::util::Objects;
using $KerberosPrincipal = ::javax::security::auth::kerberos::KerberosPrincipal;

namespace javax {
	namespace security {
		namespace auth {
			namespace kerberos {

void KerberosCredMessage::init$($KerberosPrincipal* sender, $KerberosPrincipal* recipient, $bytes* message) {
	this->destroyed = false;
	$set(this, sender, $cast($KerberosPrincipal, $Objects::requireNonNull(sender)));
	$set(this, recipient, $cast($KerberosPrincipal, $Objects::requireNonNull(recipient)));
	$set(this, message, $cast($bytes, $sure($bytes, $Objects::requireNonNull(message))->clone()));
}

$bytes* KerberosCredMessage::getEncoded() {
	if (this->destroyed) {
		$throwNew($IllegalStateException, "This object is no longer valid"_s);
	}
	return $cast($bytes, $nc(this->message)->clone());
}

$KerberosPrincipal* KerberosCredMessage::getSender() {
	if (this->destroyed) {
		$throwNew($IllegalStateException, "This object is no longer valid"_s);
	}
	return this->sender;
}

$KerberosPrincipal* KerberosCredMessage::getRecipient() {
	if (this->destroyed) {
		$throwNew($IllegalStateException, "This object is no longer valid"_s);
	}
	return this->recipient;
}

void KerberosCredMessage::destroy() {
	if (!this->destroyed) {
		$Arrays::fill(this->message, (int8_t)0);
		this->destroyed = true;
	}
}

bool KerberosCredMessage::isDestroyed() {
	return this->destroyed;
}

$String* KerberosCredMessage::toString() {
	$useLocalObjectStack();
	if (this->destroyed) {
		return "Destroyed KerberosCredMessage"_s;
	} else {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("KRB_CRED from "_s);
		var$0->append(this->sender);
		var$0->append(" to "_s);
		var$0->append(this->recipient);
		var$0->append(":\n"_s);
		var$0->append($($$nc($Base64::getUrlEncoder())->encodeToString(this->message)));
		return $str(var$0);
	}
}

int32_t KerberosCredMessage::hashCode() {
	$useLocalObjectStack();
	if (isDestroyed()) {
		return -1;
	} else {
		return $Objects::hash($$new($ObjectArray, {
			this->sender,
			this->recipient,
			$($Integer::valueOf($Arrays::hashCode(this->message)))
		}));
	}
}

bool KerberosCredMessage::equals(Object$* other) {
	if ($equals(other, this)) {
		return true;
	}
	if (!($instanceOf(KerberosCredMessage, other))) {
		return false;
	}
	$var(KerberosCredMessage, otherMessage, $cast(KerberosCredMessage, other));
	bool var$0 = isDestroyed();
	if (var$0 || $nc(otherMessage)->isDestroyed()) {
		return false;
	}
	bool var$2 = $Objects::equals(this->sender, $nc(otherMessage)->sender);
	bool var$1 = var$2 && $Objects::equals(this->recipient, otherMessage->recipient);
	return var$1 && $Arrays::equals(this->message, otherMessage->message);
}

KerberosCredMessage::KerberosCredMessage() {
}

$Class* KerberosCredMessage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sender", "Ljavax/security/auth/kerberos/KerberosPrincipal;", nullptr, $PRIVATE | $FINAL, $field(KerberosCredMessage, sender)},
		{"recipient", "Ljavax/security/auth/kerberos/KerberosPrincipal;", nullptr, $PRIVATE | $FINAL, $field(KerberosCredMessage, recipient)},
		{"message", "[B", nullptr, $PRIVATE | $FINAL, $field(KerberosCredMessage, message)},
		{"destroyed", "Z", nullptr, $PRIVATE, $field(KerberosCredMessage, destroyed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/kerberos/KerberosPrincipal;Ljavax/security/auth/kerberos/KerberosPrincipal;[B)V", nullptr, $PUBLIC, $method(KerberosCredMessage, init$, void, $KerberosPrincipal*, $KerberosPrincipal*, $bytes*)},
		{"destroy", "()V", nullptr, $PUBLIC, $virtualMethod(KerberosCredMessage, destroy, void)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(KerberosCredMessage, equals, bool, Object$*)},
		{"getEncoded", "()[B", nullptr, $PUBLIC, $method(KerberosCredMessage, getEncoded, $bytes*)},
		{"getRecipient", "()Ljavax/security/auth/kerberos/KerberosPrincipal;", nullptr, $PUBLIC, $method(KerberosCredMessage, getRecipient, $KerberosPrincipal*)},
		{"getSender", "()Ljavax/security/auth/kerberos/KerberosPrincipal;", nullptr, $PUBLIC, $method(KerberosCredMessage, getSender, $KerberosPrincipal*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(KerberosCredMessage, hashCode, int32_t)},
		{"isDestroyed", "()Z", nullptr, $PUBLIC, $virtualMethod(KerberosCredMessage, isDestroyed, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KerberosCredMessage, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.security.auth.kerberos.KerberosCredMessage",
		"java.lang.Object",
		"javax.security.auth.Destroyable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KerberosCredMessage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KerberosCredMessage);
	});
	return class$;
}

$Class* KerberosCredMessage::class$ = nullptr;

			} // kerberos
		} // auth
	} // security
} // javax