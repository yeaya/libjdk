#include <sun/security/krb5/internal/crypto/crc32.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/security/DigestException.h>
#include <java/security/MessageDigestSpi.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <jcpp.h>

#undef CRC32_LENGTH
#undef DEBUG

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DigestException = ::java::security::DigestException;
using $MessageDigestSpi = ::java::security::MessageDigestSpi;
using $Krb5 = ::sun::security::krb5::internal::Krb5;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace crypto {

int32_t crc32::hashCode() {
	return this->$MessageDigestSpi::hashCode();
}

bool crc32::equals(Object$* arg0) {
	return this->$MessageDigestSpi::equals(arg0);
}

$String* crc32::toString() {
	return this->$MessageDigestSpi::toString();
}

void crc32::finalize() {
	this->$MessageDigestSpi::finalize();
}

bool crc32::DEBUG = false;
$ints* crc32::crc32Table = nullptr;

void crc32::init$() {
	$MessageDigestSpi::init$();
	init();
}

$Object* crc32::clone() {
	try {
		$var(crc32, crc, $cast(crc32, $MessageDigestSpi::clone()));
		$nc(crc)->init();
		return $of(crc);
	} catch ($CloneNotSupportedException& e) {
	}
	return nullptr;
}

int32_t crc32::engineGetDigestLength() {
	return (crc32::CRC32_LENGTH);
}

$bytes* crc32::engineDigest() {
	$var($bytes, result, $new($bytes, crc32::CRC32_LENGTH));
	$assign(result, int2quad(this->seed));
	init();
	return result;
}

int32_t crc32::engineDigest($bytes* buf, int32_t offset, int32_t len) {
	$var($bytes, result, $new($bytes, crc32::CRC32_LENGTH));
	$assign(result, int2quad(this->seed));
	if (len < crc32::CRC32_LENGTH) {
		$throwNew($DigestException, "partial digests not returned"_s);
	}
	if ($nc(buf)->length - offset < crc32::CRC32_LENGTH) {
		$throwNew($DigestException, "insufficient space in the output buffer to store the digest"_s);
	}
	$System::arraycopy(result, 0, buf, offset, crc32::CRC32_LENGTH);
	init();
	return crc32::CRC32_LENGTH;
}

void crc32::engineUpdate(int8_t b) {
	$synchronized(this) {
		$var($bytes, input, $new($bytes, 1));
		input->set(0, b);
		engineUpdate(input, this->seed, 1);
	}
}

void crc32::engineUpdate($bytes* input, int32_t offset, int32_t len) {
	$synchronized(this) {
		processData(input, offset, len);
	}
}

void crc32::engineReset() {
	init();
}

void crc32::init() {
	this->seed = 0;
}

void crc32::processData($bytes* data, int32_t off, int32_t len) {
	int32_t result = this->seed;
	for (int32_t i = 0; i < len; ++i) {
		result = ((int32_t)((uint32_t)result >> 8)) ^ $nc(crc32::crc32Table)->get((result ^ $nc(data)->get(i)) & 0xff);
	}
	this->seed = result;
}

int32_t crc32::int2crc32(int32_t b) {
	$init(crc32);
	int32_t crc = b;
	for (int32_t i = 8; i > 0; --i) {
		if ((crc & 1) != 0) {
			crc = ((int32_t)((uint32_t)crc >> 1)) ^ (int32_t)0xedb88320;
		} else {
			crc = (int32_t)((uint32_t)crc >> 1);
		}
	}
	return crc;
}

void crc32::printcrc32Table() {
	$init(crc32);
	$useLocalObjectStack();
	$var($String, temp, nullptr);
	$var($String, zerofill, "00000000"_s);
	$nc($System::out)->print("\tpublic static int[] crc32Table = {"_s);
	for (int32_t i = 0; i < 256; ++i) {
		if ((i % 4) == 0) {
			$System::out->print("\n\t\t"_s);
		}
		$assign(temp, $Integer::toHexString(int2crc32(i)));
		$System::out->print($$str({"0x"_s, $(zerofill->substring($nc(temp)->length())), temp}));
		if (i != 255) {
			$System::out->print(", "_s);
		}
	}
	$System::out->println("\n\t};"_s);
}

int32_t crc32::byte2crc32sum(int32_t seed, $bytes* data, int32_t size) {
	$init(crc32);
	int32_t crc = seed;
	for (int32_t i = 0; i < size; ++i) {
		crc = ((int32_t)((uint32_t)crc >> 8)) ^ $nc(crc32::crc32Table)->get((crc ^ $nc(data)->get(i)) & 0xff);
	}
	return crc;
}

int32_t crc32::byte2crc32sum(int32_t seed, $bytes* data) {
	$init(crc32);
	return byte2crc32sum(seed, data, $nc(data)->length);
}

int32_t crc32::byte2crc32sum($bytes* data) {
	$init(crc32);
	return byte2crc32sum(0, data);
}

int32_t crc32::byte2crc32($bytes* data) {
	$init(crc32);
	return ~byte2crc32sum(-1, data);
}

$bytes* crc32::byte2crc32sum_bytes($bytes* data) {
	$init(crc32);
	int32_t temp = byte2crc32sum(data);
	return int2quad(temp);
}

$bytes* crc32::byte2crc32sum_bytes($bytes* data, int32_t size) {
	$init(crc32);
	$useLocalObjectStack();
	int32_t temp = byte2crc32sum(0, data, size);
	if (crc32::DEBUG) {
		$nc($System::out)->println($$str({">>>crc32: "_s, $($Integer::toHexString(temp))}));
		$System::out->println($$str({">>>crc32: "_s, $($Integer::toBinaryString(temp))}));
	}
	return int2quad(temp);
}

$bytes* crc32::int2quad(int64_t input) {
	$init(crc32);
	$var($bytes, output, $new($bytes, 4));
	for (int32_t i = 0; i < 4; ++i) {
		output->set(i, (int8_t)(($usr(input, i * 8)) & 0xff));
	}
	return output;
}

void crc32::clinit$($Class* clazz) {
	$init($Krb5);
	crc32::DEBUG = $Krb5::DEBUG;
	$assignStatic(crc32::crc32Table, $new($ints, {
		0x00000000,
		0x77073096,
		(int32_t)0xee0e612c,
		(int32_t)0x990951ba,
		0x076dc419,
		0x706af48f,
		(int32_t)0xe963a535,
		(int32_t)0x9e6495a3,
		0x0edb8832,
		0x79dcb8a4,
		(int32_t)0xe0d5e91e,
		(int32_t)0x97d2d988,
		0x09b64c2b,
		0x7eb17cbd,
		(int32_t)0xe7b82d07,
		(int32_t)0x90bf1d91,
		0x1db71064,
		0x6ab020f2,
		(int32_t)0xf3b97148,
		(int32_t)0x84be41de,
		0x1adad47d,
		0x6ddde4eb,
		(int32_t)0xf4d4b551,
		(int32_t)0x83d385c7,
		0x136c9856,
		0x646ba8c0,
		(int32_t)0xfd62f97a,
		(int32_t)0x8a65c9ec,
		0x14015c4f,
		0x63066cd9,
		(int32_t)0xfa0f3d63,
		(int32_t)0x8d080df5,
		0x3b6e20c8,
		0x4c69105e,
		(int32_t)0xd56041e4,
		(int32_t)0xa2677172,
		0x3c03e4d1,
		0x4b04d447,
		(int32_t)0xd20d85fd,
		(int32_t)0xa50ab56b,
		0x35b5a8fa,
		0x42b2986c,
		(int32_t)0xdbbbc9d6,
		(int32_t)0xacbcf940,
		0x32d86ce3,
		0x45df5c75,
		(int32_t)0xdcd60dcf,
		(int32_t)0xabd13d59,
		0x26d930ac,
		0x51de003a,
		(int32_t)0xc8d75180,
		(int32_t)0xbfd06116,
		0x21b4f4b5,
		0x56b3c423,
		(int32_t)0xcfba9599,
		(int32_t)0xb8bda50f,
		0x2802b89e,
		0x5f058808,
		(int32_t)0xc60cd9b2,
		(int32_t)0xb10be924,
		0x2f6f7c87,
		0x58684c11,
		(int32_t)0xc1611dab,
		(int32_t)0xb6662d3d,
		0x76dc4190,
		0x01db7106,
		(int32_t)0x98d220bc,
		(int32_t)0xefd5102a,
		0x71b18589,
		0x06b6b51f,
		(int32_t)0x9fbfe4a5,
		(int32_t)0xe8b8d433,
		0x7807c9a2,
		0x0f00f934,
		(int32_t)0x9609a88e,
		(int32_t)0xe10e9818,
		0x7f6a0dbb,
		0x086d3d2d,
		(int32_t)0x91646c97,
		(int32_t)0xe6635c01,
		0x6b6b51f4,
		0x1c6c6162,
		(int32_t)0x856530d8,
		(int32_t)0xf262004e,
		0x6c0695ed,
		0x1b01a57b,
		(int32_t)0x8208f4c1,
		(int32_t)0xf50fc457,
		0x65b0d9c6,
		0x12b7e950,
		(int32_t)0x8bbeb8ea,
		(int32_t)0xfcb9887c,
		0x62dd1ddf,
		0x15da2d49,
		(int32_t)0x8cd37cf3,
		(int32_t)0xfbd44c65,
		0x4db26158,
		0x3ab551ce,
		(int32_t)0xa3bc0074,
		(int32_t)0xd4bb30e2,
		0x4adfa541,
		0x3dd895d7,
		(int32_t)0xa4d1c46d,
		(int32_t)0xd3d6f4fb,
		0x4369e96a,
		0x346ed9fc,
		(int32_t)0xad678846,
		(int32_t)0xda60b8d0,
		0x44042d73,
		0x33031de5,
		(int32_t)0xaa0a4c5f,
		(int32_t)0xdd0d7cc9,
		0x5005713c,
		0x270241aa,
		(int32_t)0xbe0b1010,
		(int32_t)0xc90c2086,
		0x5768b525,
		0x206f85b3,
		(int32_t)0xb966d409,
		(int32_t)0xce61e49f,
		0x5edef90e,
		0x29d9c998,
		(int32_t)0xb0d09822,
		(int32_t)0xc7d7a8b4,
		0x59b33d17,
		0x2eb40d81,
		(int32_t)0xb7bd5c3b,
		(int32_t)0xc0ba6cad,
		(int32_t)0xedb88320,
		(int32_t)0x9abfb3b6,
		0x03b6e20c,
		0x74b1d29a,
		(int32_t)0xead54739,
		(int32_t)0x9dd277af,
		0x04db2615,
		0x73dc1683,
		(int32_t)0xe3630b12,
		(int32_t)0x94643b84,
		0x0d6d6a3e,
		0x7a6a5aa8,
		(int32_t)0xe40ecf0b,
		(int32_t)0x9309ff9d,
		0x0a00ae27,
		0x7d079eb1,
		(int32_t)0xf00f9344,
		(int32_t)0x8708a3d2,
		0x1e01f268,
		0x6906c2fe,
		(int32_t)0xf762575d,
		(int32_t)0x806567cb,
		0x196c3671,
		0x6e6b06e7,
		(int32_t)0xfed41b76,
		(int32_t)0x89d32be0,
		0x10da7a5a,
		0x67dd4acc,
		(int32_t)0xf9b9df6f,
		(int32_t)0x8ebeeff9,
		0x17b7be43,
		0x60b08ed5,
		(int32_t)0xd6d6a3e8,
		(int32_t)0xa1d1937e,
		0x38d8c2c4,
		0x4fdff252,
		(int32_t)0xd1bb67f1,
		(int32_t)0xa6bc5767,
		0x3fb506dd,
		0x48b2364b,
		(int32_t)0xd80d2bda,
		(int32_t)0xaf0a1b4c,
		0x36034af6,
		0x41047a60,
		(int32_t)0xdf60efc3,
		(int32_t)0xa867df55,
		0x316e8eef,
		0x4669be79,
		(int32_t)0xcb61b38c,
		(int32_t)0xbc66831a,
		0x256fd2a0,
		0x5268e236,
		(int32_t)0xcc0c7795,
		(int32_t)0xbb0b4703,
		0x220216b9,
		0x5505262f,
		(int32_t)0xc5ba3bbe,
		(int32_t)0xb2bd0b28,
		0x2bb45a92,
		0x5cb36a04,
		(int32_t)0xc2d7ffa7,
		(int32_t)0xb5d0cf31,
		0x2cd99e8b,
		0x5bdeae1d,
		(int32_t)0x9b64c2b0,
		(int32_t)0xec63f226,
		0x756aa39c,
		0x026d930a,
		(int32_t)0x9c0906a9,
		(int32_t)0xeb0e363f,
		0x72076785,
		0x05005713,
		(int32_t)0x95bf4a82,
		(int32_t)0xe2b87a14,
		0x7bb12bae,
		0x0cb61b38,
		(int32_t)0x92d28e9b,
		(int32_t)0xe5d5be0d,
		0x7cdcefb7,
		0x0bdbdf21,
		(int32_t)0x86d3d2d4,
		(int32_t)0xf1d4e242,
		0x68ddb3f8,
		0x1fda836e,
		(int32_t)0x81be16cd,
		(int32_t)0xf6b9265b,
		0x6fb077e1,
		0x18b74777,
		(int32_t)0x88085ae6,
		(int32_t)0xff0f6a70,
		0x66063bca,
		0x11010b5c,
		(int32_t)0x8f659eff,
		(int32_t)0xf862ae69,
		0x616bffd3,
		0x166ccf45,
		(int32_t)0xa00ae278,
		(int32_t)0xd70dd2ee,
		0x4e048354,
		0x3903b3c2,
		(int32_t)0xa7672661,
		(int32_t)0xd06016f7,
		0x4969474d,
		0x3e6e77db,
		(int32_t)0xaed16a4a,
		(int32_t)0xd9d65adc,
		0x40df0b66,
		0x37d83bf0,
		(int32_t)0xa9bcae53,
		(int32_t)0xdebb9ec5,
		0x47b2cf7f,
		0x30b5ffe9,
		(int32_t)0xbdbdf21c,
		(int32_t)0xcabac28a,
		0x53b39330,
		0x24b4a3a6,
		(int32_t)0xbad03605,
		(int32_t)0xcdd70693,
		0x54de5729,
		0x23d967bf,
		(int32_t)0xb3667a2e,
		(int32_t)0xc4614ab8,
		0x5d681b02,
		0x2a6f2b94,
		(int32_t)0xb40bbe37,
		(int32_t)0xc30c8ea1,
		0x5a05df1b,
		0x2d02ef8d
	}));
}

crc32::crc32() {
}

$Class* crc32::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CRC32_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(crc32, CRC32_LENGTH)},
		{"seed", "I", nullptr, $PRIVATE, $field(crc32, seed)},
		{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC, $staticField(crc32, DEBUG)},
		{"crc32Table", "[I", nullptr, $PRIVATE | $STATIC, $staticField(crc32, crc32Table)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(crc32, init$, void)},
		{"byte2crc32", "([B)I", nullptr, $PUBLIC | $STATIC, $staticMethod(crc32, byte2crc32, int32_t, $bytes*)},
		{"byte2crc32sum", "(I[BI)I", nullptr, $PUBLIC | $STATIC, $staticMethod(crc32, byte2crc32sum, int32_t, int32_t, $bytes*, int32_t)},
		{"byte2crc32sum", "(I[B)I", nullptr, $PUBLIC | $STATIC, $staticMethod(crc32, byte2crc32sum, int32_t, int32_t, $bytes*)},
		{"byte2crc32sum", "([B)I", nullptr, $PUBLIC | $STATIC, $staticMethod(crc32, byte2crc32sum, int32_t, $bytes*)},
		{"byte2crc32sum_bytes", "([B)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(crc32, byte2crc32sum_bytes, $bytes*, $bytes*)},
		{"byte2crc32sum_bytes", "([BI)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(crc32, byte2crc32sum_bytes, $bytes*, $bytes*, int32_t)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(crc32, clone, $Object*)},
		{"engineDigest", "()[B", nullptr, $PROTECTED, $virtualMethod(crc32, engineDigest, $bytes*)},
		{"engineDigest", "([BII)I", nullptr, $PROTECTED, $virtualMethod(crc32, engineDigest, int32_t, $bytes*, int32_t, int32_t), "java.security.DigestException"},
		{"engineGetDigestLength", "()I", nullptr, $PROTECTED, $virtualMethod(crc32, engineGetDigestLength, int32_t)},
		{"engineReset", "()V", nullptr, $PROTECTED, $virtualMethod(crc32, engineReset, void)},
		{"engineUpdate", "(B)V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(crc32, engineUpdate, void, int8_t)},
		{"engineUpdate", "([BII)V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(crc32, engineUpdate, void, $bytes*, int32_t, int32_t)},
		{"init", "()V", nullptr, $PUBLIC, $method(crc32, init, void)},
		{"int2crc32", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(crc32, int2crc32, int32_t, int32_t)},
		{"int2quad", "(J)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(crc32, int2quad, $bytes*, int64_t)},
		{"printcrc32Table", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(crc32, printcrc32Table, void)},
		{"processData", "([BII)V", nullptr, $PRIVATE, $method(crc32, processData, void, $bytes*, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.krb5.internal.crypto.crc32",
		"java.security.MessageDigestSpi",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(crc32, name, initialize, &classInfo$$, crc32::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(crc32));
	});
	return class$;
}

$Class* crc32::class$ = nullptr;

				} // crypto
			} // internal
		} // krb5
	} // security
} // sun