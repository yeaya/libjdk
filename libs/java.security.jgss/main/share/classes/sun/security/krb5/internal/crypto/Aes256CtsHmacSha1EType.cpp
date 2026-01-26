#include <sun/security/krb5/internal/crypto/Aes256CtsHmacSha1EType.h>

#include <java/security/GeneralSecurityException.h>
#include <sun/security/krb5/Checksum.h>
#include <sun/security/krb5/EncryptedData.h>
#include <sun/security/krb5/KrbCryptoException.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/crypto/Aes256.h>
#include <sun/security/krb5/internal/crypto/EType.h>
#include <jcpp.h>

#undef KEYTYPE_AES

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Checksum = ::sun::security::krb5::Checksum;
using $EncryptedData = ::sun::security::krb5::EncryptedData;
using $KrbCryptoException = ::sun::security::krb5::KrbCryptoException;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $Aes256 = ::sun::security::krb5::internal::crypto::Aes256;
using $EType = ::sun::security::krb5::internal::crypto::EType;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace crypto {

$MethodInfo _Aes256CtsHmacSha1EType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Aes256CtsHmacSha1EType, init$, void)},
	{"blockSize", "()I", nullptr, $PUBLIC, $virtualMethod(Aes256CtsHmacSha1EType, blockSize, int32_t)},
	{"checksumSize", "()I", nullptr, $PUBLIC, $virtualMethod(Aes256CtsHmacSha1EType, checksumSize, int32_t)},
	{"checksumType", "()I", nullptr, $PUBLIC, $virtualMethod(Aes256CtsHmacSha1EType, checksumType, int32_t)},
	{"confounderSize", "()I", nullptr, $PUBLIC, $virtualMethod(Aes256CtsHmacSha1EType, confounderSize, int32_t)},
	{"decrypt", "([B[BI)[B", nullptr, $PUBLIC, $virtualMethod(Aes256CtsHmacSha1EType, decrypt, $bytes*, $bytes*, $bytes*, int32_t), "sun.security.krb5.internal.KrbApErrException,sun.security.krb5.KrbCryptoException"},
	{"decrypt", "([B[B[BI)[B", nullptr, $PUBLIC, $virtualMethod(Aes256CtsHmacSha1EType, decrypt, $bytes*, $bytes*, $bytes*, $bytes*, int32_t), "sun.security.krb5.internal.KrbApErrException,sun.security.krb5.KrbCryptoException"},
	{"decryptedData", "([B)[B", nullptr, $PUBLIC, $virtualMethod(Aes256CtsHmacSha1EType, decryptedData, $bytes*, $bytes*)},
	{"eType", "()I", nullptr, $PUBLIC, $virtualMethod(Aes256CtsHmacSha1EType, eType, int32_t)},
	{"encrypt", "([B[BI)[B", nullptr, $PUBLIC, $virtualMethod(Aes256CtsHmacSha1EType, encrypt, $bytes*, $bytes*, $bytes*, int32_t), "sun.security.krb5.KrbCryptoException"},
	{"encrypt", "([B[B[BI)[B", nullptr, $PUBLIC, $virtualMethod(Aes256CtsHmacSha1EType, encrypt, $bytes*, $bytes*, $bytes*, $bytes*, int32_t), "sun.security.krb5.KrbCryptoException"},
	{"keySize", "()I", nullptr, $PUBLIC, $virtualMethod(Aes256CtsHmacSha1EType, keySize, int32_t)},
	{"keyType", "()I", nullptr, $PUBLIC, $virtualMethod(Aes256CtsHmacSha1EType, keyType, int32_t)},
	{"minimumPadSize", "()I", nullptr, $PUBLIC, $virtualMethod(Aes256CtsHmacSha1EType, minimumPadSize, int32_t)},
	{}
};

$ClassInfo _Aes256CtsHmacSha1EType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.krb5.internal.crypto.Aes256CtsHmacSha1EType",
	"sun.security.krb5.internal.crypto.EType",
	nullptr,
	nullptr,
	_Aes256CtsHmacSha1EType_MethodInfo_
};

$Object* allocate$Aes256CtsHmacSha1EType($Class* clazz) {
	return $of($alloc(Aes256CtsHmacSha1EType));
}

void Aes256CtsHmacSha1EType::init$() {
	$EType::init$();
}

int32_t Aes256CtsHmacSha1EType::eType() {
	return $EncryptedData::ETYPE_AES256_CTS_HMAC_SHA1_96;
}

int32_t Aes256CtsHmacSha1EType::minimumPadSize() {
	return 0;
}

int32_t Aes256CtsHmacSha1EType::confounderSize() {
	return blockSize();
}

int32_t Aes256CtsHmacSha1EType::checksumType() {
	return $Checksum::CKSUMTYPE_HMAC_SHA1_96_AES256;
}

int32_t Aes256CtsHmacSha1EType::checksumSize() {
	return $Aes256::getChecksumLength();
}

int32_t Aes256CtsHmacSha1EType::blockSize() {
	return 16;
}

int32_t Aes256CtsHmacSha1EType::keyType() {
	return $Krb5::KEYTYPE_AES;
}

int32_t Aes256CtsHmacSha1EType::keySize() {
	return 32;
}

$bytes* Aes256CtsHmacSha1EType::encrypt($bytes* data, $bytes* key, int32_t usage) {
	$var($bytes, ivec, $new($bytes, blockSize()));
	return encrypt(data, key, ivec, usage);
}

$bytes* Aes256CtsHmacSha1EType::encrypt($bytes* data, $bytes* key, $bytes* ivec, int32_t usage) {
	$useLocalCurrentObjectStackCache();
	try {
		return $Aes256::encrypt(key, usage, ivec, data, 0, $nc(data)->length);
	} catch ($GeneralSecurityException& e) {
		$var($KrbCryptoException, ke, $new($KrbCryptoException, $(e->getMessage())));
		ke->initCause(e);
		$throw(ke);
	}
	$shouldNotReachHere();
}

$bytes* Aes256CtsHmacSha1EType::decrypt($bytes* cipher, $bytes* key, int32_t usage) {
	$var($bytes, ivec, $new($bytes, blockSize()));
	return decrypt(cipher, key, ivec, usage);
}

$bytes* Aes256CtsHmacSha1EType::decrypt($bytes* cipher, $bytes* key, $bytes* ivec, int32_t usage) {
	$useLocalCurrentObjectStackCache();
	try {
		return $Aes256::decrypt(key, usage, ivec, cipher, 0, $nc(cipher)->length);
	} catch ($GeneralSecurityException& e) {
		$var($KrbCryptoException, ke, $new($KrbCryptoException, $(e->getMessage())));
		ke->initCause(e);
		$throw(ke);
	}
	$shouldNotReachHere();
}

$bytes* Aes256CtsHmacSha1EType::decryptedData($bytes* data) {
	return data;
}

Aes256CtsHmacSha1EType::Aes256CtsHmacSha1EType() {
}

$Class* Aes256CtsHmacSha1EType::load$($String* name, bool initialize) {
	$loadClass(Aes256CtsHmacSha1EType, name, initialize, &_Aes256CtsHmacSha1EType_ClassInfo_, allocate$Aes256CtsHmacSha1EType);
	return class$;
}

$Class* Aes256CtsHmacSha1EType::class$ = nullptr;

				} // crypto
			} // internal
		} // krb5
	} // security
} // sun