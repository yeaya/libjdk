#include <sun/security/krb5/internal/crypto/ArcFourHmac.h>
#include <sun/security/krb5/internal/crypto/dk/ArcFourCrypto.h>
#include <jcpp.h>

#undef CRYPTO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArcFourCrypto = ::sun::security::krb5::internal::crypto::dk::ArcFourCrypto;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace crypto {

$ArcFourCrypto* ArcFourHmac::CRYPTO = nullptr;

void ArcFourHmac::init$() {
}

$bytes* ArcFourHmac::stringToKey($chars* password) {
	$init(ArcFourHmac);
	return ArcFourHmac::CRYPTO->stringToKey(password);
}

int32_t ArcFourHmac::getChecksumLength() {
	$init(ArcFourHmac);
	return ArcFourHmac::CRYPTO->getChecksumLength();
}

$bytes* ArcFourHmac::calculateChecksum($bytes* baseKey, int32_t usage, $bytes* input, int32_t start, int32_t len) {
	$init(ArcFourHmac);
	return ArcFourHmac::CRYPTO->calculateChecksum(baseKey, usage, input, start, len);
}

$bytes* ArcFourHmac::encryptSeq($bytes* baseKey, int32_t usage, $bytes* checksum, $bytes* plaintext, int32_t start, int32_t len) {
	$init(ArcFourHmac);
	return ArcFourHmac::CRYPTO->encryptSeq(baseKey, usage, checksum, plaintext, start, len);
}

$bytes* ArcFourHmac::decryptSeq($bytes* baseKey, int32_t usage, $bytes* checksum, $bytes* ciphertext, int32_t start, int32_t len) {
	$init(ArcFourHmac);
	return ArcFourHmac::CRYPTO->decryptSeq(baseKey, usage, checksum, ciphertext, start, len);
}

$bytes* ArcFourHmac::encrypt($bytes* baseKey, int32_t usage, $bytes* ivec, $bytes* plaintext, int32_t start, int32_t len) {
	$init(ArcFourHmac);
	return ArcFourHmac::CRYPTO->encrypt(baseKey, usage, ivec, nullptr, plaintext, start, len);
}

$bytes* ArcFourHmac::encryptRaw($bytes* baseKey, int32_t usage, $bytes* seqNum, $bytes* plaintext, int32_t start, int32_t len) {
	$init(ArcFourHmac);
	return ArcFourHmac::CRYPTO->encryptRaw(baseKey, usage, seqNum, plaintext, start, len);
}

$bytes* ArcFourHmac::decrypt($bytes* baseKey, int32_t usage, $bytes* ivec, $bytes* ciphertext, int32_t start, int32_t len) {
	$init(ArcFourHmac);
	return ArcFourHmac::CRYPTO->decrypt(baseKey, usage, ivec, ciphertext, start, len);
}

$bytes* ArcFourHmac::decryptRaw($bytes* baseKey, int32_t usage, $bytes* ivec, $bytes* ciphertext, int32_t start, int32_t len, $bytes* seqNum) {
	$init(ArcFourHmac);
	return ArcFourHmac::CRYPTO->decryptRaw(baseKey, usage, ivec, ciphertext, start, len, seqNum);
}

void ArcFourHmac::clinit$($Class* clazz) {
	$assignStatic(ArcFourHmac::CRYPTO, $new($ArcFourCrypto, 128));
}

ArcFourHmac::ArcFourHmac() {
}

$Class* ArcFourHmac::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CRYPTO", "Lsun/security/krb5/internal/crypto/dk/ArcFourCrypto;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ArcFourHmac, CRYPTO)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ArcFourHmac, init$, void)},
		{"calculateChecksum", "([BI[BII)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(ArcFourHmac, calculateChecksum, $bytes*, $bytes*, int32_t, $bytes*, int32_t, int32_t), "java.security.GeneralSecurityException"},
		{"decrypt", "([BI[B[BII)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(ArcFourHmac, decrypt, $bytes*, $bytes*, int32_t, $bytes*, $bytes*, int32_t, int32_t), "java.security.GeneralSecurityException"},
		{"decryptRaw", "([BI[B[BII[B)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(ArcFourHmac, decryptRaw, $bytes*, $bytes*, int32_t, $bytes*, $bytes*, int32_t, int32_t, $bytes*), "java.security.GeneralSecurityException"},
		{"decryptSeq", "([BI[B[BII)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(ArcFourHmac, decryptSeq, $bytes*, $bytes*, int32_t, $bytes*, $bytes*, int32_t, int32_t), "java.security.GeneralSecurityException,sun.security.krb5.KrbCryptoException"},
		{"encrypt", "([BI[B[BII)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(ArcFourHmac, encrypt, $bytes*, $bytes*, int32_t, $bytes*, $bytes*, int32_t, int32_t), "java.security.GeneralSecurityException,sun.security.krb5.KrbCryptoException"},
		{"encryptRaw", "([BI[B[BII)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(ArcFourHmac, encryptRaw, $bytes*, $bytes*, int32_t, $bytes*, $bytes*, int32_t, int32_t), "java.security.GeneralSecurityException,sun.security.krb5.KrbCryptoException"},
		{"encryptSeq", "([BI[B[BII)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(ArcFourHmac, encryptSeq, $bytes*, $bytes*, int32_t, $bytes*, $bytes*, int32_t, int32_t), "java.security.GeneralSecurityException,sun.security.krb5.KrbCryptoException"},
		{"getChecksumLength", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(ArcFourHmac, getChecksumLength, int32_t)},
		{"stringToKey", "([C)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(ArcFourHmac, stringToKey, $bytes*, $chars*), "java.security.GeneralSecurityException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.crypto.ArcFourHmac",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ArcFourHmac, name, initialize, &classInfo$$, ArcFourHmac::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ArcFourHmac);
	});
	return class$;
}

$Class* ArcFourHmac::class$ = nullptr;

				} // crypto
			} // internal
		} // krb5
	} // security
} // sun