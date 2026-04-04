#include <sun/security/krb5/internal/crypto/Crc32CksumType.h>
#include <sun/security/krb5/Checksum.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/crypto/CksumType.h>
#include <sun/security/krb5/internal/crypto/crc32.h>
#include <jcpp.h>

#undef CKSUMTYPE_CRC32
#undef KEYTYPE_NULL

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Checksum = ::sun::security::krb5::Checksum;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $CksumType = ::sun::security::krb5::internal::crypto::CksumType;
using $crc32 = ::sun::security::krb5::internal::crypto::crc32;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace crypto {

void Crc32CksumType::init$() {
	$CksumType::init$();
}

int32_t Crc32CksumType::confounderSize() {
	return 0;
}

int32_t Crc32CksumType::cksumType() {
	return $Checksum::CKSUMTYPE_CRC32;
}

bool Crc32CksumType::isKeyed() {
	return false;
}

int32_t Crc32CksumType::cksumSize() {
	return 4;
}

int32_t Crc32CksumType::keyType() {
	return $Krb5::KEYTYPE_NULL;
}

int32_t Crc32CksumType::keySize() {
	return 0;
}

$bytes* Crc32CksumType::calculateChecksum($bytes* data, int32_t size, $bytes* key, int32_t usage) {
	return $crc32::byte2crc32sum_bytes(data, size);
}

bool Crc32CksumType::verifyChecksum($bytes* data, int32_t size, $bytes* key, $bytes* checksum, int32_t usage) {
	return $CksumType::isChecksumEqual(checksum, $($crc32::byte2crc32sum_bytes(data)));
}

$bytes* Crc32CksumType::int2quad(int64_t input) {
	$init(Crc32CksumType);
	$var($bytes, output, $new($bytes, 4));
	for (int32_t i = 0; i < 4; ++i) {
		output->set(i, (int8_t)(($usr(input, i * 8)) & 0xff));
	}
	return output;
}

int64_t Crc32CksumType::bytes2long($bytes* input) {
	$init(Crc32CksumType);
	int64_t result = 0;
	result |= (((int64_t)$nc(input)->get(0)) & (int64_t)0xff) << 24;
	result |= (((int64_t)input->get(1)) & (int64_t)0xff) << 16;
	result |= (((int64_t)input->get(2)) & (int64_t)0xff) << 8;
	result |= (((int64_t)input->get(3)) & (int64_t)0xff);
	return result;
}

Crc32CksumType::Crc32CksumType() {
}

$Class* Crc32CksumType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Crc32CksumType, init$, void)},
		{"bytes2long", "([B)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Crc32CksumType, bytes2long, int64_t, $bytes*)},
		{"calculateChecksum", "([BI[BI)[B", nullptr, $PUBLIC, $virtualMethod(Crc32CksumType, calculateChecksum, $bytes*, $bytes*, int32_t, $bytes*, int32_t)},
		{"cksumSize", "()I", nullptr, $PUBLIC, $virtualMethod(Crc32CksumType, cksumSize, int32_t)},
		{"cksumType", "()I", nullptr, $PUBLIC, $virtualMethod(Crc32CksumType, cksumType, int32_t)},
		{"confounderSize", "()I", nullptr, $PUBLIC, $virtualMethod(Crc32CksumType, confounderSize, int32_t)},
		{"int2quad", "(J)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(Crc32CksumType, int2quad, $bytes*, int64_t)},
		{"isKeyed", "()Z", nullptr, $PUBLIC, $virtualMethod(Crc32CksumType, isKeyed, bool)},
		{"keySize", "()I", nullptr, $PUBLIC, $virtualMethod(Crc32CksumType, keySize, int32_t)},
		{"keyType", "()I", nullptr, $PUBLIC, $virtualMethod(Crc32CksumType, keyType, int32_t)},
		{"verifyChecksum", "([BI[B[BI)Z", nullptr, $PUBLIC, $virtualMethod(Crc32CksumType, verifyChecksum, bool, $bytes*, int32_t, $bytes*, $bytes*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.crypto.Crc32CksumType",
		"sun.security.krb5.internal.crypto.CksumType",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Crc32CksumType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Crc32CksumType);
	});
	return class$;
}

$Class* Crc32CksumType::class$ = nullptr;

				} // crypto
			} // internal
		} // krb5
	} // security
} // sun