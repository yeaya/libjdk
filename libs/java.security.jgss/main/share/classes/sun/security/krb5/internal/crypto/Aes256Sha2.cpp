#include <sun/security/krb5/internal/crypto/Aes256Sha2.h>
#include <sun/security/krb5/internal/crypto/dk/AesSha2DkCrypto.h>
#include <jcpp.h>

#undef CRYPTO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AesSha2DkCrypto = ::sun::security::krb5::internal::crypto::dk::AesSha2DkCrypto;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace crypto {

$AesSha2DkCrypto* Aes256Sha2::CRYPTO = nullptr;

void Aes256Sha2::init$() {
}

$bytes* Aes256Sha2::stringToKey($chars* password, $String* salt, $bytes* params) {
	$init(Aes256Sha2);
	return Aes256Sha2::CRYPTO->stringToKey(password, salt, params);
}

int32_t Aes256Sha2::getChecksumLength() {
	$init(Aes256Sha2);
	return Aes256Sha2::CRYPTO->getChecksumLength();
}

$bytes* Aes256Sha2::calculateChecksum($bytes* baseKey, int32_t usage, $bytes* input, int32_t start, int32_t len) {
	$init(Aes256Sha2);
	return Aes256Sha2::CRYPTO->calculateChecksum(baseKey, usage, input, start, len);
}

$bytes* Aes256Sha2::encrypt($bytes* baseKey, int32_t usage, $bytes* ivec, $bytes* plaintext, int32_t start, int32_t len) {
	$init(Aes256Sha2);
	return Aes256Sha2::CRYPTO->encrypt(baseKey, usage, ivec, nullptr, plaintext, start, len);
}

$bytes* Aes256Sha2::encryptRaw($bytes* baseKey, int32_t usage, $bytes* ivec, $bytes* plaintext, int32_t start, int32_t len) {
	$init(Aes256Sha2);
	return Aes256Sha2::CRYPTO->encryptRaw(baseKey, usage, ivec, plaintext, start, len);
}

$bytes* Aes256Sha2::decrypt($bytes* baseKey, int32_t usage, $bytes* ivec, $bytes* ciphertext, int32_t start, int32_t len) {
	$init(Aes256Sha2);
	return Aes256Sha2::CRYPTO->decrypt(baseKey, usage, ivec, ciphertext, start, len);
}

$bytes* Aes256Sha2::decryptRaw($bytes* baseKey, int32_t usage, $bytes* ivec, $bytes* ciphertext, int32_t start, int32_t len) {
	$init(Aes256Sha2);
	return Aes256Sha2::CRYPTO->decryptRaw(baseKey, usage, ivec, ciphertext, start, len);
}

void Aes256Sha2::clinit$($Class* clazz) {
	$assignStatic(Aes256Sha2::CRYPTO, $new($AesSha2DkCrypto, 256));
}

Aes256Sha2::Aes256Sha2() {
}

$Class* Aes256Sha2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CRYPTO", "Lsun/security/krb5/internal/crypto/dk/AesSha2DkCrypto;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Aes256Sha2, CRYPTO)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Aes256Sha2, init$, void)},
		{"calculateChecksum", "([BI[BII)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(Aes256Sha2, calculateChecksum, $bytes*, $bytes*, int32_t, $bytes*, int32_t, int32_t), "java.security.GeneralSecurityException"},
		{"decrypt", "([BI[B[BII)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(Aes256Sha2, decrypt, $bytes*, $bytes*, int32_t, $bytes*, $bytes*, int32_t, int32_t), "java.security.GeneralSecurityException"},
		{"decryptRaw", "([BI[B[BII)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(Aes256Sha2, decryptRaw, $bytes*, $bytes*, int32_t, $bytes*, $bytes*, int32_t, int32_t), "java.security.GeneralSecurityException"},
		{"encrypt", "([BI[B[BII)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(Aes256Sha2, encrypt, $bytes*, $bytes*, int32_t, $bytes*, $bytes*, int32_t, int32_t), "java.security.GeneralSecurityException,sun.security.krb5.KrbCryptoException"},
		{"encryptRaw", "([BI[B[BII)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(Aes256Sha2, encryptRaw, $bytes*, $bytes*, int32_t, $bytes*, $bytes*, int32_t, int32_t), "java.security.GeneralSecurityException,sun.security.krb5.KrbCryptoException"},
		{"getChecksumLength", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(Aes256Sha2, getChecksumLength, int32_t)},
		{"stringToKey", "([CLjava/lang/String;[B)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(Aes256Sha2, stringToKey, $bytes*, $chars*, $String*, $bytes*), "java.security.GeneralSecurityException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.crypto.Aes256Sha2",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Aes256Sha2, name, initialize, &classInfo$$, Aes256Sha2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Aes256Sha2);
	});
	return class$;
}

$Class* Aes256Sha2::class$ = nullptr;

				} // crypto
			} // internal
		} // krb5
	} // security
} // sun