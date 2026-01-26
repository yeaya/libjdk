#include <javax/security/auth/kerberos/EncryptionKey.h>

#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <javax/security/auth/kerberos/KeyImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $KeyImpl = ::javax::security::auth::kerberos::KeyImpl;

namespace javax {
	namespace security {
		namespace auth {
			namespace kerberos {

$FieldInfo _EncryptionKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EncryptionKey, serialVersionUID)},
	{"key", "Ljavax/security/auth/kerberos/KeyImpl;", nullptr, $PRIVATE | $FINAL, $field(EncryptionKey, key)},
	{"destroyed", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(EncryptionKey, destroyed)},
	{}
};

$MethodInfo _EncryptionKey_MethodInfo_[] = {
	{"<init>", "([BI)V", nullptr, $PUBLIC, $method(EncryptionKey, init$, void, $bytes*, int32_t)},
	{"destroy", "()V", nullptr, $PUBLIC, $virtualMethod(EncryptionKey, destroy, void), "javax.security.auth.DestroyFailedException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(EncryptionKey, equals, bool, Object$*)},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EncryptionKey, getAlgorithm, $String*)},
	{"getEncoded", "()[B", nullptr, $PUBLIC, $virtualMethod(EncryptionKey, getEncoded, $bytes*)},
	{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EncryptionKey, getFormat, $String*)},
	{"getKeyType", "()I", nullptr, $PUBLIC, $method(EncryptionKey, getKeyType, int32_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(EncryptionKey, hashCode, int32_t)},
	{"isDestroyed", "()Z", nullptr, $PUBLIC, $virtualMethod(EncryptionKey, isDestroyed, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EncryptionKey, toString, $String*)},
	{}
};

$ClassInfo _EncryptionKey_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.security.auth.kerberos.EncryptionKey",
	"java.lang.Object",
	"javax.crypto.SecretKey",
	_EncryptionKey_FieldInfo_,
	_EncryptionKey_MethodInfo_
};

$Object* allocate$EncryptionKey($Class* clazz) {
	return $of($alloc(EncryptionKey));
}

void EncryptionKey::init$($bytes* keyBytes, int32_t keyType) {
	this->destroyed = false;
	$set(this, key, $new($KeyImpl, $cast($bytes, $Objects::requireNonNull(keyBytes)), keyType));
}

int32_t EncryptionKey::getKeyType() {
	return $nc(this->key)->getKeyType();
}

$String* EncryptionKey::getAlgorithm() {
	return $nc(this->key)->getAlgorithm();
}

$String* EncryptionKey::getFormat() {
	return $nc(this->key)->getFormat();
}

$bytes* EncryptionKey::getEncoded() {
	return $nc(this->key)->getEncoded();
}

void EncryptionKey::destroy() {
	if (!this->destroyed) {
		$nc(this->key)->destroy();
		this->destroyed = true;
	}
}

bool EncryptionKey::isDestroyed() {
	return this->destroyed;
}

$String* EncryptionKey::toString() {
	if (this->destroyed) {
		return "Destroyed EncryptionKey"_s;
	}
	return $str({"key "_s, $($nc(this->key)->toString())});
}

int32_t EncryptionKey::hashCode() {
	int32_t result = 17;
	if (isDestroyed()) {
		return result;
	}
	result = 37 * result + $Arrays::hashCode($(getEncoded()));
	return 37 * result + getKeyType();
}

bool EncryptionKey::equals(Object$* other) {
	$useLocalCurrentObjectStackCache();
	if ($equals(other, this)) {
		return true;
	}
	if (!($instanceOf(EncryptionKey, other))) {
		return false;
	}
	$var(EncryptionKey, otherKey, $cast(EncryptionKey, other));
	bool var$0 = isDestroyed();
	if (var$0 || $nc(otherKey)->isDestroyed()) {
		return false;
	}
	int32_t var$2 = getKeyType();
	bool var$1 = var$2 == $nc(otherKey)->getKeyType();
	if (var$1) {
		$var($bytes, var$3, getEncoded());
		var$1 = $Arrays::equals(var$3, $(otherKey->getEncoded()));
	}
	return var$1;
}

EncryptionKey::EncryptionKey() {
}

$Class* EncryptionKey::load$($String* name, bool initialize) {
	$loadClass(EncryptionKey, name, initialize, &_EncryptionKey_ClassInfo_, allocate$EncryptionKey);
	return class$;
}

$Class* EncryptionKey::class$ = nullptr;

			} // kerberos
		} // auth
	} // security
} // javax