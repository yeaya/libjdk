#include <sun/security/krb5/internal/crypto/RsaMd5CksumType.h>

#include <java/security/MessageDigest.h>
#include <sun/security/krb5/Checksum.h>
#include <sun/security/krb5/KrbCryptoException.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/crypto/CksumType.h>
#include <jcpp.h>

#undef CKSUMTYPE_RSA_MD5
#undef KEYTYPE_NULL

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;
using $Checksum = ::sun::security::krb5::Checksum;
using $KrbCryptoException = ::sun::security::krb5::KrbCryptoException;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $CksumType = ::sun::security::krb5::internal::crypto::CksumType;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace crypto {

$MethodInfo _RsaMd5CksumType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RsaMd5CksumType, init$, void)},
	{"calculateChecksum", "([BI[BI)[B", nullptr, $PUBLIC, $virtualMethod(RsaMd5CksumType, calculateChecksum, $bytes*, $bytes*, int32_t, $bytes*, int32_t), "sun.security.krb5.KrbCryptoException"},
	{"cksumSize", "()I", nullptr, $PUBLIC, $virtualMethod(RsaMd5CksumType, cksumSize, int32_t)},
	{"cksumType", "()I", nullptr, $PUBLIC, $virtualMethod(RsaMd5CksumType, cksumType, int32_t)},
	{"confounderSize", "()I", nullptr, $PUBLIC, $virtualMethod(RsaMd5CksumType, confounderSize, int32_t)},
	{"isKeyed", "()Z", nullptr, $PUBLIC, $virtualMethod(RsaMd5CksumType, isKeyed, bool)},
	{"keySize", "()I", nullptr, $PUBLIC, $virtualMethod(RsaMd5CksumType, keySize, int32_t)},
	{"keyType", "()I", nullptr, $PUBLIC, $virtualMethod(RsaMd5CksumType, keyType, int32_t)},
	{"verifyChecksum", "([BI[B[BI)Z", nullptr, $PUBLIC, $virtualMethod(RsaMd5CksumType, verifyChecksum, bool, $bytes*, int32_t, $bytes*, $bytes*, int32_t), "sun.security.krb5.KrbCryptoException"},
	{}
};

$ClassInfo _RsaMd5CksumType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.krb5.internal.crypto.RsaMd5CksumType",
	"sun.security.krb5.internal.crypto.CksumType",
	nullptr,
	nullptr,
	_RsaMd5CksumType_MethodInfo_
};

$Object* allocate$RsaMd5CksumType($Class* clazz) {
	return $of($alloc(RsaMd5CksumType));
}

void RsaMd5CksumType::init$() {
	$CksumType::init$();
}

int32_t RsaMd5CksumType::confounderSize() {
	return 0;
}

int32_t RsaMd5CksumType::cksumType() {
	return $Checksum::CKSUMTYPE_RSA_MD5;
}

bool RsaMd5CksumType::isKeyed() {
	return false;
}

int32_t RsaMd5CksumType::cksumSize() {
	return 16;
}

int32_t RsaMd5CksumType::keyType() {
	return $Krb5::KEYTYPE_NULL;
}

int32_t RsaMd5CksumType::keySize() {
	return 0;
}

$bytes* RsaMd5CksumType::calculateChecksum($bytes* data, int32_t size, $bytes* key, int32_t usage) {
	$useLocalCurrentObjectStackCache();
	$var($MessageDigest, md5, nullptr);
	$var($bytes, result, nullptr);
	try {
		$assign(md5, $MessageDigest::getInstance("MD5"_s));
	} catch ($Exception& e) {
		$throwNew($KrbCryptoException, $$str({"JCE provider may not be installed. "_s, $(e->getMessage())}));
	}
	try {
		$nc(md5)->update(data);
		$assign(result, md5->digest());
	} catch ($Exception& e) {
		$throwNew($KrbCryptoException, $(e->getMessage()));
	}
	return result;
}

bool RsaMd5CksumType::verifyChecksum($bytes* data, int32_t size, $bytes* key, $bytes* checksum, int32_t usage) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, calculated, $nc($($MessageDigest::getInstance("MD5"_s)))->digest(data));
		return $CksumType::isChecksumEqual(calculated, checksum);
	} catch ($Exception& e) {
		return false;
	}
	$shouldNotReachHere();
}

RsaMd5CksumType::RsaMd5CksumType() {
}

$Class* RsaMd5CksumType::load$($String* name, bool initialize) {
	$loadClass(RsaMd5CksumType, name, initialize, &_RsaMd5CksumType_ClassInfo_, allocate$RsaMd5CksumType);
	return class$;
}

$Class* RsaMd5CksumType::class$ = nullptr;

				} // crypto
			} // internal
		} // krb5
	} // security
} // sun