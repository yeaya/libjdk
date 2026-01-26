#include <sun/security/krb5/internal/crypto/HmacMd5ArcFourCksumType.h>

#include <java/security/GeneralSecurityException.h>
#include <sun/security/krb5/Checksum.h>
#include <sun/security/krb5/KrbCryptoException.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/crypto/ArcFourHmac.h>
#include <sun/security/krb5/internal/crypto/CksumType.h>
#include <jcpp.h>

#undef CKSUMTYPE_HMAC_MD5_ARCFOUR
#undef KEYTYPE_ARCFOUR_HMAC

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Checksum = ::sun::security::krb5::Checksum;
using $KrbCryptoException = ::sun::security::krb5::KrbCryptoException;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $ArcFourHmac = ::sun::security::krb5::internal::crypto::ArcFourHmac;
using $CksumType = ::sun::security::krb5::internal::crypto::CksumType;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace crypto {

$MethodInfo _HmacMd5ArcFourCksumType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HmacMd5ArcFourCksumType, init$, void)},
	{"calculateChecksum", "([BI[BI)[B", nullptr, $PUBLIC, $virtualMethod(HmacMd5ArcFourCksumType, calculateChecksum, $bytes*, $bytes*, int32_t, $bytes*, int32_t), "sun.security.krb5.KrbCryptoException"},
	{"cksumSize", "()I", nullptr, $PUBLIC, $virtualMethod(HmacMd5ArcFourCksumType, cksumSize, int32_t)},
	{"cksumType", "()I", nullptr, $PUBLIC, $virtualMethod(HmacMd5ArcFourCksumType, cksumType, int32_t)},
	{"confounderSize", "()I", nullptr, $PUBLIC, $virtualMethod(HmacMd5ArcFourCksumType, confounderSize, int32_t)},
	{"isKeyed", "()Z", nullptr, $PUBLIC, $virtualMethod(HmacMd5ArcFourCksumType, isKeyed, bool)},
	{"keySize", "()I", nullptr, $PUBLIC, $virtualMethod(HmacMd5ArcFourCksumType, keySize, int32_t)},
	{"keyType", "()I", nullptr, $PUBLIC, $virtualMethod(HmacMd5ArcFourCksumType, keyType, int32_t)},
	{"verifyChecksum", "([BI[B[BI)Z", nullptr, $PUBLIC, $virtualMethod(HmacMd5ArcFourCksumType, verifyChecksum, bool, $bytes*, int32_t, $bytes*, $bytes*, int32_t), "sun.security.krb5.KrbCryptoException"},
	{}
};

$ClassInfo _HmacMd5ArcFourCksumType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.krb5.internal.crypto.HmacMd5ArcFourCksumType",
	"sun.security.krb5.internal.crypto.CksumType",
	nullptr,
	nullptr,
	_HmacMd5ArcFourCksumType_MethodInfo_
};

$Object* allocate$HmacMd5ArcFourCksumType($Class* clazz) {
	return $of($alloc(HmacMd5ArcFourCksumType));
}

void HmacMd5ArcFourCksumType::init$() {
	$CksumType::init$();
}

int32_t HmacMd5ArcFourCksumType::confounderSize() {
	return 8;
}

int32_t HmacMd5ArcFourCksumType::cksumType() {
	return $Checksum::CKSUMTYPE_HMAC_MD5_ARCFOUR;
}

bool HmacMd5ArcFourCksumType::isKeyed() {
	return true;
}

int32_t HmacMd5ArcFourCksumType::cksumSize() {
	return 16;
}

int32_t HmacMd5ArcFourCksumType::keyType() {
	return $Krb5::KEYTYPE_ARCFOUR_HMAC;
}

int32_t HmacMd5ArcFourCksumType::keySize() {
	return 16;
}

$bytes* HmacMd5ArcFourCksumType::calculateChecksum($bytes* data, int32_t size, $bytes* key, int32_t usage) {
	$useLocalCurrentObjectStackCache();
	try {
		return $ArcFourHmac::calculateChecksum(key, usage, data, 0, size);
	} catch ($GeneralSecurityException& e) {
		$var($KrbCryptoException, ke, $new($KrbCryptoException, $(e->getMessage())));
		ke->initCause(e);
		$throw(ke);
	}
	$shouldNotReachHere();
}

bool HmacMd5ArcFourCksumType::verifyChecksum($bytes* data, int32_t size, $bytes* key, $bytes* checksum, int32_t usage) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, newCksum, $ArcFourHmac::calculateChecksum(key, usage, data, 0, size));
		return isChecksumEqual(checksum, newCksum);
	} catch ($GeneralSecurityException& e) {
		$var($KrbCryptoException, ke, $new($KrbCryptoException, $(e->getMessage())));
		ke->initCause(e);
		$throw(ke);
	}
	$shouldNotReachHere();
}

HmacMd5ArcFourCksumType::HmacMd5ArcFourCksumType() {
}

$Class* HmacMd5ArcFourCksumType::load$($String* name, bool initialize) {
	$loadClass(HmacMd5ArcFourCksumType, name, initialize, &_HmacMd5ArcFourCksumType_ClassInfo_, allocate$HmacMd5ArcFourCksumType);
	return class$;
}

$Class* HmacMd5ArcFourCksumType::class$ = nullptr;

				} // crypto
			} // internal
		} // krb5
	} // security
} // sun