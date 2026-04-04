#include <sun/security/krb5/internal/crypto/Des.h>
#include <java/security/GeneralSecurityException.h>
#include <java/util/Arrays.h>
#include <javax/crypto/Cipher.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/SecretKeyFactory.h>
#include <javax/crypto/spec/IvParameterSpec.h>
#include <javax/crypto/spec/SecretKeySpec.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/security/krb5/KrbCryptoException.h>
#include <jcpp.h>

#undef CHARSET
#undef DECRYPT_MODE
#undef ENCRYPT_MODE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Arrays = ::java::util::Arrays;
using $Cipher = ::javax::crypto::Cipher;
using $SecretKey = ::javax::crypto::SecretKey;
using $SecretKeyFactory = ::javax::crypto::SecretKeyFactory;
using $IvParameterSpec = ::javax::crypto::spec::IvParameterSpec;
using $SecretKeySpec = ::javax::crypto::spec::SecretKeySpec;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $KrbCryptoException = ::sun::security::krb5::KrbCryptoException;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace crypto {

$String* Des::CHARSET = nullptr;
$longs* Des::bad_keys = nullptr;
$bytes* Des::good_parity = nullptr;

void Des::init$() {
}

$bytes* Des::set_parity($bytes* key) {
	$init(Des);
	for (int32_t i = 0; i < 8; ++i) {
		$nc(key)->set(i, Des::good_parity->get($nc(key)->get(i) & 0xff));
	}
	return key;
}

int64_t Des::set_parity(int64_t key) {
	$init(Des);
	$useLocalObjectStack();
	return octet2long($(set_parity($(long2octet(key)))));
}

bool Des::bad_key(int64_t key) {
	$init(Des);
	for (int32_t i = 0; i < Des::bad_keys->length; ++i) {
		if (Des::bad_keys->get(i) == key) {
			return true;
		}
	}
	return false;
}

bool Des::bad_key($bytes* key) {
	$init(Des);
	return bad_key(octet2long(key));
}

int64_t Des::octet2long($bytes* input) {
	$init(Des);
	return octet2long(input, 0);
}

int64_t Des::octet2long($bytes* input, int32_t offset) {
	$init(Des);
	int64_t result = 0;
	for (int32_t i = 0; i < 8; ++i) {
		if (i + offset < $nc(input)->length) {
			result |= $sl(((int64_t)input->get(i + offset)) & (int64_t)0xff, (7 - i) * 8);
		}
	}
	return result;
}

$bytes* Des::long2octet(int64_t input) {
	$init(Des);
	$var($bytes, output, $new($bytes, 8));
	for (int32_t i = 0; i < 8; ++i) {
		output->set(i, (int8_t)(($usr(input, (7 - i) * 8)) & (int64_t)0xff));
	}
	return output;
}

void Des::long2octet(int64_t input, $bytes* output) {
	$init(Des);
	long2octet(input, output, 0);
}

void Des::long2octet(int64_t input, $bytes* output, int32_t offset) {
	$init(Des);
	for (int32_t i = 0; i < 8; ++i) {
		if (i + offset < $nc(output)->length) {
			output->set(i + offset, (int8_t)(($usr(input, (7 - i) * 8)) & (int64_t)0xff));
		}
	}
}

void Des::cbc_encrypt($bytes* input, $bytes* output, $bytes* key, $bytes* ivec, bool encrypt) {
	$init(Des);
	$useLocalObjectStack();
	$var($Cipher, cipher, nullptr);
	try {
		$assign(cipher, $Cipher::getInstance("DES/CBC/NoPadding"_s));
	} catch ($GeneralSecurityException& e) {
		$var($KrbCryptoException, ke, $new($KrbCryptoException, $$str({"JCE provider may not be installed. "_s, $(e->getMessage())})));
		ke->initCause(e);
		$throw(ke);
	}
	$var($IvParameterSpec, params, $new($IvParameterSpec, ivec));
	$var($SecretKeySpec, skSpec, $new($SecretKeySpec, key, "DES"_s));
	try {
		$var($SecretKeyFactory, skf, $SecretKeyFactory::getInstance("DES"_s));
		$var($SecretKey, sk, $cast($SecretKey, skSpec));
		if (encrypt) {
			$nc(cipher)->init($Cipher::ENCRYPT_MODE, sk, params);
		} else {
			$nc(cipher)->init($Cipher::DECRYPT_MODE, sk, params);
		}
		$var($bytes, result, nullptr);
		$assign(result, $nc(cipher)->doFinal(input));
		$System::arraycopy(result, 0, output, 0, $nc(result)->length);
	} catch ($GeneralSecurityException& e) {
		$var($KrbCryptoException, ke, $new($KrbCryptoException, $(e->getMessage())));
		ke->initCause(e);
		$throw(ke);
	}
}

int64_t Des::char_to_key($chars* passwdChars) {
	$init(Des);
	$useLocalObjectStack();
	int64_t key = 0;
	int64_t octet = 0;
	int64_t octet1 = 0;
	int64_t octet2 = 0;
	$var($bytes, cbytes, nullptr);
	try {
		if (Des::CHARSET == nullptr) {
			$assign(cbytes, ($$new($String, passwdChars))->getBytes());
		} else {
			$assign(cbytes, ($$new($String, passwdChars))->getBytes(Des::CHARSET));
		}
	} catch ($Exception& e) {
		if (cbytes != nullptr) {
			$Arrays::fill(cbytes, 0, cbytes->length, (int8_t)0);
		}
		$var($KrbCryptoException, ce, $new($KrbCryptoException, $$str({"Unable to convert passwd, "_s, e})));
		ce->initCause(e);
		$throw(ce);
	}
	$var($bytes, passwdBytes, pad(cbytes));
	$var($bytes, newkey, $new($bytes, 8));
	int32_t length = ($nc(passwdBytes)->length / 8) + ($nc(passwdBytes)->length % 8 == 0 ? 0 : 1);
	for (int32_t i = 0; i < length; ++i) {
		octet = octet2long(passwdBytes, i * 8) & (int64_t)0x7f7f7f7f7f7f7f7f;
		if (i % 2 == 1) {
			octet1 = 0;
			for (int32_t j = 0; j < 64; ++j) {
				octet1 |= $sl($usr(octet & ($sl((int64_t)1, j)), j), 63 - j);
			}
			octet = (int64_t)((uint64_t)octet1 >> 1);
		}
		key ^= (octet << 1);
	}
	key = set_parity(key);
	if (bad_key(key)) {
		$var($bytes, temp, long2octet(key));
		(*$nc(temp))[7] ^= 240;
		key = octet2long(temp);
	}
	$var($bytes, var$0, long2octet(key));
	$assign(newkey, des_cksum(var$0, passwdBytes, $(long2octet(key))));
	key = octet2long($(set_parity(newkey)));
	if (bad_key(key)) {
		$var($bytes, temp, long2octet(key));
		(*$nc(temp))[7] ^= 240;
		key = octet2long(temp);
	}
	if (cbytes != nullptr) {
		$Arrays::fill(cbytes, 0, cbytes->length, (int8_t)0);
	}
	if (passwdBytes != nullptr) {
		$Arrays::fill(passwdBytes, 0, passwdBytes->length, (int8_t)0);
	}
	return key;
}

$bytes* Des::des_cksum($bytes* ivec, $bytes* msg, $bytes* key) {
	$init(Des);
	$useLocalObjectStack();
	$var($Cipher, cipher, nullptr);
	$var($bytes, result, $new($bytes, 8));
	try {
		$assign(cipher, $Cipher::getInstance("DES/CBC/NoPadding"_s));
	} catch ($Exception& e) {
		$var($KrbCryptoException, ke, $new($KrbCryptoException, $$str({"JCE provider may not be installed. "_s, $(e->getMessage())})));
		ke->initCause(e);
		$throw(ke);
	}
	$var($IvParameterSpec, params, $new($IvParameterSpec, ivec));
	$var($SecretKeySpec, skSpec, $new($SecretKeySpec, key, "DES"_s));
	try {
		$var($SecretKeyFactory, skf, $SecretKeyFactory::getInstance("DES"_s));
		$var($SecretKey, sk, $cast($SecretKey, skSpec));
		$nc(cipher)->init($Cipher::ENCRYPT_MODE, sk, params);
		for (int32_t i = 0; i < $nc(msg)->length / 8; ++i) {
			$assign(result, cipher->doFinal(msg, i * 8, 8));
			cipher->init($Cipher::ENCRYPT_MODE, sk, ($$new($IvParameterSpec, result)));
		}
	} catch ($GeneralSecurityException& e) {
		$var($KrbCryptoException, ke, $new($KrbCryptoException, $(e->getMessage())));
		ke->initCause(e);
		$throw(ke);
	}
	return result;
}

$bytes* Des::pad($bytes* data) {
	$init(Des);
	int32_t len = 0;
	if ($nc(data)->length < 8) {
		len = data->length;
	} else {
		len = data->length % 8;
	}
	if (len == 0) {
		return data;
	} else {
		$var($bytes, padding, $new($bytes, 8 - len + data->length));
		for (int32_t i = padding->length - 1; i > data->length - 1; --i) {
			padding->set(i, 0);
		}
		$System::arraycopy(data, 0, padding, 0, data->length);
		return padding;
	}
}

$bytes* Des::string_to_key_bytes($chars* passwdChars) {
	$init(Des);
	return long2octet(char_to_key(passwdChars));
}

void Des::clinit$($Class* clazz) {
	$assignStatic(Des::CHARSET, $GetPropertyAction::privilegedGetProperty("sun.security.krb5.msinterop.des.s2kcharset"_s));
	$assignStatic(Des::bad_keys, $new($longs, {
		(int64_t)0x0101010101010101,
		(int64_t)0xfefefefefefefefe,
		(int64_t)0x1f1f1f1f1f1f1f1f,
		(int64_t)0xe0e0e0e0e0e0e0e0,
		(int64_t)0x01fe01fe01fe01fe,
		(int64_t)0xfe01fe01fe01fe01,
		(int64_t)0x1fe01fe00ef10ef1,
		(int64_t)0xe01fe01ff10ef10e,
		(int64_t)0x01e001e001f101f1,
		(int64_t)0xe001e001f101f101,
		(int64_t)0x1ffe1ffe0efe0efe,
		(int64_t)0xfe1ffe1ffe0efe0e,
		(int64_t)0x011f011f010e010e,
		(int64_t)0x1f011f010e010e01,
		(int64_t)0xe0fee0fef1fef1fe,
		(int64_t)0xfee0fee0fef1fef1
	}));
	$assignStatic(Des::good_parity, $new($bytes, {
		1,
		1,
		2,
		2,
		4,
		4,
		7,
		7,
		8,
		8,
		11,
		11,
		13,
		13,
		14,
		14,
		16,
		16,
		19,
		19,
		21,
		21,
		22,
		22,
		25,
		25,
		26,
		26,
		28,
		28,
		31,
		31,
		32,
		32,
		35,
		35,
		37,
		37,
		38,
		38,
		41,
		41,
		42,
		42,
		44,
		44,
		47,
		47,
		49,
		49,
		50,
		50,
		52,
		52,
		55,
		55,
		56,
		56,
		59,
		59,
		61,
		61,
		62,
		62,
		64,
		64,
		67,
		67,
		69,
		69,
		70,
		70,
		73,
		73,
		74,
		74,
		76,
		76,
		79,
		79,
		81,
		81,
		82,
		82,
		84,
		84,
		87,
		87,
		88,
		88,
		91,
		91,
		93,
		93,
		94,
		94,
		97,
		97,
		98,
		98,
		100,
		100,
		103,
		103,
		104,
		104,
		107,
		107,
		109,
		109,
		110,
		110,
		112,
		112,
		115,
		115,
		117,
		117,
		118,
		118,
		121,
		121,
		122,
		122,
		124,
		124,
		127,
		127,
		(int8_t)128,
		(int8_t)128,
		(int8_t)131,
		(int8_t)131,
		(int8_t)133,
		(int8_t)133,
		(int8_t)134,
		(int8_t)134,
		(int8_t)137,
		(int8_t)137,
		(int8_t)138,
		(int8_t)138,
		(int8_t)140,
		(int8_t)140,
		(int8_t)143,
		(int8_t)143,
		(int8_t)145,
		(int8_t)145,
		(int8_t)146,
		(int8_t)146,
		(int8_t)148,
		(int8_t)148,
		(int8_t)151,
		(int8_t)151,
		(int8_t)152,
		(int8_t)152,
		(int8_t)155,
		(int8_t)155,
		(int8_t)157,
		(int8_t)157,
		(int8_t)158,
		(int8_t)158,
		(int8_t)161,
		(int8_t)161,
		(int8_t)162,
		(int8_t)162,
		(int8_t)164,
		(int8_t)164,
		(int8_t)167,
		(int8_t)167,
		(int8_t)168,
		(int8_t)168,
		(int8_t)171,
		(int8_t)171,
		(int8_t)173,
		(int8_t)173,
		(int8_t)174,
		(int8_t)174,
		(int8_t)176,
		(int8_t)176,
		(int8_t)179,
		(int8_t)179,
		(int8_t)181,
		(int8_t)181,
		(int8_t)182,
		(int8_t)182,
		(int8_t)185,
		(int8_t)185,
		(int8_t)186,
		(int8_t)186,
		(int8_t)188,
		(int8_t)188,
		(int8_t)191,
		(int8_t)191,
		(int8_t)193,
		(int8_t)193,
		(int8_t)194,
		(int8_t)194,
		(int8_t)196,
		(int8_t)196,
		(int8_t)199,
		(int8_t)199,
		(int8_t)200,
		(int8_t)200,
		(int8_t)203,
		(int8_t)203,
		(int8_t)205,
		(int8_t)205,
		(int8_t)206,
		(int8_t)206,
		(int8_t)208,
		(int8_t)208,
		(int8_t)211,
		(int8_t)211,
		(int8_t)213,
		(int8_t)213,
		(int8_t)214,
		(int8_t)214,
		(int8_t)217,
		(int8_t)217,
		(int8_t)218,
		(int8_t)218,
		(int8_t)220,
		(int8_t)220,
		(int8_t)223,
		(int8_t)223,
		(int8_t)224,
		(int8_t)224,
		(int8_t)227,
		(int8_t)227,
		(int8_t)229,
		(int8_t)229,
		(int8_t)230,
		(int8_t)230,
		(int8_t)233,
		(int8_t)233,
		(int8_t)234,
		(int8_t)234,
		(int8_t)236,
		(int8_t)236,
		(int8_t)239,
		(int8_t)239,
		(int8_t)241,
		(int8_t)241,
		(int8_t)242,
		(int8_t)242,
		(int8_t)244,
		(int8_t)244,
		(int8_t)247,
		(int8_t)247,
		(int8_t)248,
		(int8_t)248,
		(int8_t)251,
		(int8_t)251,
		(int8_t)253,
		(int8_t)253,
		(int8_t)254,
		(int8_t)254
	}));
}

Des::Des() {
}

$Class* Des::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CHARSET", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Des, CHARSET)},
		{"bad_keys", "[J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Des, bad_keys)},
		{"good_parity", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Des, good_parity)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Des, init$, void)},
		{"bad_key", "(J)Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(Des, bad_key, bool, int64_t)},
		{"bad_key", "([B)Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(Des, bad_key, bool, $bytes*)},
		{"cbc_encrypt", "([B[B[B[BZ)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Des, cbc_encrypt, void, $bytes*, $bytes*, $bytes*, $bytes*, bool), "sun.security.krb5.KrbCryptoException"},
		{"char_to_key", "([C)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Des, char_to_key, int64_t, $chars*), "sun.security.krb5.KrbCryptoException"},
		{"des_cksum", "([B[B[B)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(Des, des_cksum, $bytes*, $bytes*, $bytes*, $bytes*), "sun.security.krb5.KrbCryptoException"},
		{"long2octet", "(J)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(Des, long2octet, $bytes*, int64_t)},
		{"long2octet", "(J[B)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Des, long2octet, void, int64_t, $bytes*)},
		{"long2octet", "(J[BI)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Des, long2octet, void, int64_t, $bytes*, int32_t)},
		{"octet2long", "([B)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Des, octet2long, int64_t, $bytes*)},
		{"octet2long", "([BI)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Des, octet2long, int64_t, $bytes*, int32_t)},
		{"pad", "([B)[B", nullptr, $STATIC, $staticMethod(Des, pad, $bytes*, $bytes*)},
		{"set_parity", "([B)[B", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(Des, set_parity, $bytes*, $bytes*)},
		{"set_parity", "(J)J", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(Des, set_parity, int64_t, int64_t)},
		{"string_to_key_bytes", "([C)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(Des, string_to_key_bytes, $bytes*, $chars*), "sun.security.krb5.KrbCryptoException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.krb5.internal.crypto.Des",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Des, name, initialize, &classInfo$$, Des::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Des);
	});
	return class$;
}

$Class* Des::class$ = nullptr;

				} // crypto
			} // internal
		} // krb5
	} // security
} // sun