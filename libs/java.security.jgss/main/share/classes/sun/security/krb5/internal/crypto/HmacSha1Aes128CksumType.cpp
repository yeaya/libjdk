#include <sun/security/krb5/internal/crypto/HmacSha1Aes128CksumType.h>

#include <java/security/GeneralSecurityException.h>
#include <sun/security/krb5/Checksum.h>
#include <sun/security/krb5/KrbCryptoException.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/crypto/Aes128.h>
#include <sun/security/krb5/internal/crypto/CksumType.h>
#include <jcpp.h>

#undef KEYTYPE_AES

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Checksum = ::sun::security::krb5::Checksum;
using $KrbCryptoException = ::sun::security::krb5::KrbCryptoException;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $Aes128 = ::sun::security::krb5::internal::crypto::Aes128;
using $CksumType = ::sun::security::krb5::internal::crypto::CksumType;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace crypto {

$MethodInfo _HmacSha1Aes128CksumType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HmacSha1Aes128CksumType, init$, void)},
	{"calculateChecksum", "([BI[BI)[B", nullptr, $PUBLIC, $virtualMethod(HmacSha1Aes128CksumType, calculateChecksum, $bytes*, $bytes*, int32_t, $bytes*, int32_t), "sun.security.krb5.KrbCryptoException"},
	{"cksumSize", "()I", nullptr, $PUBLIC, $virtualMethod(HmacSha1Aes128CksumType, cksumSize, int32_t)},
	{"cksumType", "()I", nullptr, $PUBLIC, $virtualMethod(HmacSha1Aes128CksumType, cksumType, int32_t)},
	{"confounderSize", "()I", nullptr, $PUBLIC, $virtualMethod(HmacSha1Aes128CksumType, confounderSize, int32_t)},
	{"isKeyed", "()Z", nullptr, $PUBLIC, $virtualMethod(HmacSha1Aes128CksumType, isKeyed, bool)},
	{"keySize", "()I", nullptr, $PUBLIC, $virtualMethod(HmacSha1Aes128CksumType, keySize, int32_t)},
	{"keyType", "()I", nullptr, $PUBLIC, $virtualMethod(HmacSha1Aes128CksumType, keyType, int32_t)},
	{"verifyChecksum", "([BI[B[BI)Z", nullptr, $PUBLIC, $virtualMethod(HmacSha1Aes128CksumType, verifyChecksum, bool, $bytes*, int32_t, $bytes*, $bytes*, int32_t), "sun.security.krb5.KrbCryptoException"},
	{}
};

$ClassInfo _HmacSha1Aes128CksumType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.krb5.internal.crypto.HmacSha1Aes128CksumType",
	"sun.security.krb5.internal.crypto.CksumType",
	nullptr,
	nullptr,
	_HmacSha1Aes128CksumType_MethodInfo_
};

$Object* allocate$HmacSha1Aes128CksumType($Class* clazz) {
	return $of($alloc(HmacSha1Aes128CksumType));
}

void HmacSha1Aes128CksumType::init$() {
	$CksumType::init$();
}

int32_t HmacSha1Aes128CksumType::confounderSize() {
	return 16;
}

int32_t HmacSha1Aes128CksumType::cksumType() {
	return $Checksum::CKSUMTYPE_HMAC_SHA1_96_AES128;
}

bool HmacSha1Aes128CksumType::isKeyed() {
	return true;
}

int32_t HmacSha1Aes128CksumType::cksumSize() {
	return 12;
}

int32_t HmacSha1Aes128CksumType::keyType() {
	return $Krb5::KEYTYPE_AES;
}

int32_t HmacSha1Aes128CksumType::keySize() {
	return 16;
}

$bytes* HmacSha1Aes128CksumType::calculateChecksum($bytes* data, int32_t size, $bytes* key, int32_t usage) {
	$useLocalCurrentObjectStackCache();
	try {
		return $Aes128::calculateChecksum(key, usage, data, 0, size);
	} catch ($GeneralSecurityException& e) {
		$var($KrbCryptoException, ke, $new($KrbCryptoException, $(e->getMessage())));
		ke->initCause(e);
		$throw(ke);
	}
	$shouldNotReachHere();
}

bool HmacSha1Aes128CksumType::verifyChecksum($bytes* data, int32_t size, $bytes* key, $bytes* checksum, int32_t usage) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, newCksum, $Aes128::calculateChecksum(key, usage, data, 0, size));
		return isChecksumEqual(checksum, newCksum);
	} catch ($GeneralSecurityException& e) {
		$var($KrbCryptoException, ke, $new($KrbCryptoException, $(e->getMessage())));
		ke->initCause(e);
		$throw(ke);
	}
	$shouldNotReachHere();
}

HmacSha1Aes128CksumType::HmacSha1Aes128CksumType() {
}

$Class* HmacSha1Aes128CksumType::load$($String* name, bool initialize) {
	$loadClass(HmacSha1Aes128CksumType, name, initialize, &_HmacSha1Aes128CksumType_ClassInfo_, allocate$HmacSha1Aes128CksumType);
	return class$;
}

$Class* HmacSha1Aes128CksumType::class$ = nullptr;

				} // crypto
			} // internal
		} // krb5
	} // security
} // sun