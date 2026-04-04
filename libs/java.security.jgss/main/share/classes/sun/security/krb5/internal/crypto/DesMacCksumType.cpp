#include <sun/security/krb5/internal/crypto/DesMacCksumType.h>
#include <java/security/InvalidKeyException.h>
#include <javax/crypto/spec/DESKeySpec.h>
#include <sun/security/krb5/Checksum.h>
#include <sun/security/krb5/Confounder.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/crypto/CksumType.h>
#include <sun/security/krb5/internal/crypto/Des.h>
#include <jcpp.h>

#undef CKSUMTYPE_DES_MAC
#undef KEYTYPE_DES

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $DESKeySpec = ::javax::crypto::spec::DESKeySpec;
using $Checksum = ::sun::security::krb5::Checksum;
using $Confounder = ::sun::security::krb5::Confounder;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $CksumType = ::sun::security::krb5::internal::crypto::CksumType;
using $Des = ::sun::security::krb5::internal::crypto::Des;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace crypto {

void DesMacCksumType::init$() {
	$CksumType::init$();
}

int32_t DesMacCksumType::confounderSize() {
	return 8;
}

int32_t DesMacCksumType::cksumType() {
	return $Checksum::CKSUMTYPE_DES_MAC;
}

bool DesMacCksumType::isKeyed() {
	return true;
}

int32_t DesMacCksumType::cksumSize() {
	return 16;
}

int32_t DesMacCksumType::keyType() {
	return $Krb5::KEYTYPE_DES;
}

int32_t DesMacCksumType::keySize() {
	return 8;
}

$bytes* DesMacCksumType::calculateChecksum($bytes* data, int32_t size, $bytes* key, int32_t usage) {
	$useLocalObjectStack();
	$var($bytes, new_data, $new($bytes, size + confounderSize()));
	$var($bytes, conf, $Confounder::bytes(confounderSize()));
	$System::arraycopy(conf, 0, new_data, 0, confounderSize());
	$System::arraycopy(data, 0, new_data, confounderSize(), size);
	try {
		if ($DESKeySpec::isWeak(key, 0)) {
			$nc(key)->set(7, (int8_t)($nc(key)->get(7) ^ 0xf0));
		}
	} catch ($InvalidKeyException& ex) {
	}
	$var($bytes, residue_ivec, $new($bytes, $nc(key)->length));
	$var($bytes, residue, $Des::des_cksum(residue_ivec, new_data, key));
	$var($bytes, cksum, $new($bytes, cksumSize()));
	$System::arraycopy(conf, 0, cksum, 0, confounderSize());
	int32_t var$0 = confounderSize();
	int32_t var$1 = cksumSize();
	$System::arraycopy(residue, 0, cksum, var$0, var$1 - confounderSize());
	$var($bytes, new_key, $new($bytes, keySize()));
	$System::arraycopy(key, 0, new_key, 0, key->length);
	for (int32_t i = 0; i < new_key->length; ++i) {
		new_key->set(i, (int8_t)(new_key->get(i) ^ 0xf0));
	}
	try {
		if ($DESKeySpec::isWeak(new_key, 0)) {
			new_key->set(7, (int8_t)(new_key->get(7) ^ 0xf0));
		}
	} catch ($InvalidKeyException& ex) {
	}
	$var($bytes, ivec, $new($bytes, new_key->length));
	$var($bytes, enc_cksum, $new($bytes, cksum->length));
	$Des::cbc_encrypt(cksum, enc_cksum, new_key, ivec, true);
	return enc_cksum;
}

bool DesMacCksumType::verifyChecksum($bytes* data, int32_t size, $bytes* key, $bytes* checksum, int32_t usage) {
	$useLocalObjectStack();
	$var($bytes, cksum, decryptKeyedChecksum(checksum, key));
	$var($bytes, new_data, $new($bytes, size + confounderSize()));
	$System::arraycopy(cksum, 0, new_data, 0, confounderSize());
	$System::arraycopy(data, 0, new_data, confounderSize(), size);
	try {
		if ($DESKeySpec::isWeak(key, 0)) {
			$nc(key)->set(7, (int8_t)($nc(key)->get(7) ^ 0xf0));
		}
	} catch ($InvalidKeyException& ex) {
	}
	$var($bytes, ivec, $new($bytes, $nc(key)->length));
	$var($bytes, new_cksum, $Des::des_cksum(ivec, new_data, key));
	int32_t var$0 = cksumSize();
	$var($bytes, orig_cksum, $new($bytes, var$0 - confounderSize()));
	int32_t var$1 = confounderSize();
	int32_t var$2 = cksumSize();
	$System::arraycopy(cksum, var$1, orig_cksum, 0, var$2 - confounderSize());
	return isChecksumEqual(orig_cksum, new_cksum);
}

$bytes* DesMacCksumType::decryptKeyedChecksum($bytes* enc_cksum, $bytes* key) {
	$useLocalObjectStack();
	$var($bytes, new_key, $new($bytes, keySize()));
	$System::arraycopy(key, 0, new_key, 0, $nc(key)->length);
	for (int32_t i = 0; i < new_key->length; ++i) {
		new_key->set(i, (int8_t)(new_key->get(i) ^ 0xf0));
	}
	try {
		if ($DESKeySpec::isWeak(new_key, 0)) {
			new_key->set(7, (int8_t)(new_key->get(7) ^ 0xf0));
		}
	} catch ($InvalidKeyException& ex) {
	}
	$var($bytes, ivec, $new($bytes, new_key->length));
	$var($bytes, cksum, $new($bytes, $nc(enc_cksum)->length));
	$Des::cbc_encrypt(enc_cksum, cksum, new_key, ivec, false);
	return cksum;
}

DesMacCksumType::DesMacCksumType() {
}

$Class* DesMacCksumType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DesMacCksumType, init$, void)},
		{"calculateChecksum", "([BI[BI)[B", nullptr, $PUBLIC, $virtualMethod(DesMacCksumType, calculateChecksum, $bytes*, $bytes*, int32_t, $bytes*, int32_t), "sun.security.krb5.KrbCryptoException"},
		{"cksumSize", "()I", nullptr, $PUBLIC, $virtualMethod(DesMacCksumType, cksumSize, int32_t)},
		{"cksumType", "()I", nullptr, $PUBLIC, $virtualMethod(DesMacCksumType, cksumType, int32_t)},
		{"confounderSize", "()I", nullptr, $PUBLIC, $virtualMethod(DesMacCksumType, confounderSize, int32_t)},
		{"decryptKeyedChecksum", "([B[B)[B", nullptr, $PRIVATE, $method(DesMacCksumType, decryptKeyedChecksum, $bytes*, $bytes*, $bytes*), "sun.security.krb5.KrbCryptoException"},
		{"isKeyed", "()Z", nullptr, $PUBLIC, $virtualMethod(DesMacCksumType, isKeyed, bool)},
		{"keySize", "()I", nullptr, $PUBLIC, $virtualMethod(DesMacCksumType, keySize, int32_t)},
		{"keyType", "()I", nullptr, $PUBLIC, $virtualMethod(DesMacCksumType, keyType, int32_t)},
		{"verifyChecksum", "([BI[B[BI)Z", nullptr, $PUBLIC, $virtualMethod(DesMacCksumType, verifyChecksum, bool, $bytes*, int32_t, $bytes*, $bytes*, int32_t), "sun.security.krb5.KrbCryptoException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.crypto.DesMacCksumType",
		"sun.security.krb5.internal.crypto.CksumType",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DesMacCksumType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DesMacCksumType);
	});
	return class$;
}

$Class* DesMacCksumType::class$ = nullptr;

				} // crypto
			} // internal
		} // krb5
	} // security
} // sun