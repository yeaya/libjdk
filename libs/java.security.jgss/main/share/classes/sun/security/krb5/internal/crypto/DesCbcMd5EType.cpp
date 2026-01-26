#include <sun/security/krb5/internal/crypto/DesCbcMd5EType.h>

#include <java/security/MessageDigest.h>
#include <sun/security/krb5/Checksum.h>
#include <sun/security/krb5/EncryptedData.h>
#include <sun/security/krb5/KrbCryptoException.h>
#include <sun/security/krb5/internal/crypto/DesCbcEType.h>
#include <jcpp.h>

#undef CKSUMTYPE_RSA_MD5
#undef ETYPE_DES_CBC_MD5

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;
using $Checksum = ::sun::security::krb5::Checksum;
using $EncryptedData = ::sun::security::krb5::EncryptedData;
using $KrbCryptoException = ::sun::security::krb5::KrbCryptoException;
using $DesCbcEType = ::sun::security::krb5::internal::crypto::DesCbcEType;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace crypto {

$MethodInfo _DesCbcMd5EType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DesCbcMd5EType, init$, void)},
	{"blockSize", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DesCbcMd5EType, blockSize, int32_t)},
	{"calculateChecksum", "([BI)[B", nullptr, $PROTECTED, $virtualMethod(DesCbcMd5EType, calculateChecksum, $bytes*, $bytes*, int32_t), "sun.security.krb5.KrbCryptoException"},
	{"checksumSize", "()I", nullptr, $PUBLIC, $virtualMethod(DesCbcMd5EType, checksumSize, int32_t)},
	{"checksumType", "()I", nullptr, $PUBLIC, $virtualMethod(DesCbcMd5EType, checksumType, int32_t)},
	{"confounderSize", "()I", nullptr, $PUBLIC, $virtualMethod(DesCbcMd5EType, confounderSize, int32_t)},
	{"decrypt", "([B[B[BI)[B", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DesCbcMd5EType, decrypt, $bytes*, $bytes*, $bytes*, $bytes*, int32_t), "sun.security.krb5.internal.KrbApErrException,sun.security.krb5.KrbCryptoException"},
	{"decrypt", "([B[BI)[B", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DesCbcMd5EType, decrypt, $bytes*, $bytes*, $bytes*, int32_t), "sun.security.krb5.internal.KrbApErrException,sun.security.krb5.KrbCryptoException"},
	{"eType", "()I", nullptr, $PUBLIC, $virtualMethod(DesCbcMd5EType, eType, int32_t)},
	{"encrypt", "([B[B[BI)[B", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DesCbcMd5EType, encrypt, $bytes*, $bytes*, $bytes*, $bytes*, int32_t), "sun.security.krb5.KrbCryptoException"},
	{"encrypt", "([B[BI)[B", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DesCbcMd5EType, encrypt, $bytes*, $bytes*, $bytes*, int32_t), "sun.security.krb5.KrbCryptoException"},
	{"keySize", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DesCbcMd5EType, keySize, int32_t)},
	{"keyType", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DesCbcMd5EType, keyType, int32_t)},
	{"minimumPadSize", "()I", nullptr, $PUBLIC, $virtualMethod(DesCbcMd5EType, minimumPadSize, int32_t)},
	{}
};

$ClassInfo _DesCbcMd5EType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.krb5.internal.crypto.DesCbcMd5EType",
	"sun.security.krb5.internal.crypto.DesCbcEType",
	nullptr,
	nullptr,
	_DesCbcMd5EType_MethodInfo_
};

$Object* allocate$DesCbcMd5EType($Class* clazz) {
	return $of($alloc(DesCbcMd5EType));
}

void DesCbcMd5EType::init$() {
	$DesCbcEType::init$();
}

int32_t DesCbcMd5EType::eType() {
	return $EncryptedData::ETYPE_DES_CBC_MD5;
}

int32_t DesCbcMd5EType::minimumPadSize() {
	return 0;
}

int32_t DesCbcMd5EType::confounderSize() {
	return 8;
}

int32_t DesCbcMd5EType::checksumType() {
	return $Checksum::CKSUMTYPE_RSA_MD5;
}

int32_t DesCbcMd5EType::checksumSize() {
	return 16;
}

$bytes* DesCbcMd5EType::calculateChecksum($bytes* data, int32_t size) {
	$useLocalCurrentObjectStackCache();
	$var($MessageDigest, md5, nullptr);
	try {
		$assign(md5, $MessageDigest::getInstance("MD5"_s));
	} catch ($Exception& e) {
		$throwNew($KrbCryptoException, $$str({"JCE provider may not be installed. "_s, $(e->getMessage())}));
	}
	try {
		$nc(md5)->update(data);
		return (md5->digest());
	} catch ($Exception& e) {
		$throwNew($KrbCryptoException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

$bytes* DesCbcMd5EType::decrypt($bytes* cipher, $bytes* key, $bytes* ivec, int32_t usage) {
	return $DesCbcEType::decrypt(cipher, key, ivec, usage);
}

$bytes* DesCbcMd5EType::decrypt($bytes* cipher, $bytes* key, int32_t usage) {
	return $DesCbcEType::decrypt(cipher, key, usage);
}

$bytes* DesCbcMd5EType::encrypt($bytes* data, $bytes* key, $bytes* ivec, int32_t usage) {
	return $DesCbcEType::encrypt(data, key, ivec, usage);
}

$bytes* DesCbcMd5EType::encrypt($bytes* data, $bytes* key, int32_t usage) {
	return $DesCbcEType::encrypt(data, key, usage);
}

int32_t DesCbcMd5EType::keySize() {
	return $DesCbcEType::keySize();
}

int32_t DesCbcMd5EType::keyType() {
	return $DesCbcEType::keyType();
}

int32_t DesCbcMd5EType::blockSize() {
	return $DesCbcEType::blockSize();
}

DesCbcMd5EType::DesCbcMd5EType() {
}

$Class* DesCbcMd5EType::load$($String* name, bool initialize) {
	$loadClass(DesCbcMd5EType, name, initialize, &_DesCbcMd5EType_ClassInfo_, allocate$DesCbcMd5EType);
	return class$;
}

$Class* DesCbcMd5EType::class$ = nullptr;

				} // crypto
			} // internal
		} // krb5
	} // security
} // sun