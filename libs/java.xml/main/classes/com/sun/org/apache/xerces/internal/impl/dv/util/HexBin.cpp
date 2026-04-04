#include <com/sun/org/apache/xerces/internal/impl/dv/util/HexBin.h>
#include <jcpp.h>

#undef BASELENGTH
#undef LOOKUPLENGTH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace util {

$bytes* HexBin::hexNumberTable = nullptr;
$chars* HexBin::lookUpHexAlphabet = nullptr;

void HexBin::init$() {
}

$String* HexBin::encode($bytes* binaryData) {
	$init(HexBin);
	if (binaryData == nullptr) {
		return nullptr;
	}
	int32_t lengthData = $nc(binaryData)->length;
	int32_t lengthEncode = lengthData * 2;
	$var($chars, encodedData, $new($chars, lengthEncode));
	int32_t temp = 0;
	for (int32_t i = 0; i < lengthData; ++i) {
		temp = binaryData->get(i);
		if (temp < 0) {
			temp += 256;
		}
		encodedData->set(i * 2, HexBin::lookUpHexAlphabet->get(temp >> 4));
		encodedData->set(i * 2 + 1, HexBin::lookUpHexAlphabet->get(temp & 0x0f));
	}
	return $new($String, encodedData);
}

$bytes* HexBin::decode($String* encoded) {
	$init(HexBin);
	$useLocalObjectStack();
	if (encoded == nullptr) {
		return nullptr;
	}
	int32_t lengthData = $nc(encoded)->length();
	if (lengthData % 2 != 0) {
		return nullptr;
	}
	$var($chars, binaryData, encoded->toCharArray());
	int32_t lengthDecode = lengthData / 2;
	$var($bytes, decodedData, $new($bytes, lengthDecode));
	int8_t temp1 = 0;
	int8_t temp2 = 0;
	char16_t tempChar = 0;
	for (int32_t i = 0; i < lengthDecode; ++i) {
		tempChar = binaryData->get(i * 2);
		temp1 = (tempChar < HexBin::BASELENGTH) ? HexBin::hexNumberTable->get(tempChar) : -1;
		if (temp1 == -1) {
			return nullptr;
		}
		tempChar = binaryData->get(i * 2 + 1);
		temp2 = (tempChar < HexBin::BASELENGTH) ? HexBin::hexNumberTable->get(tempChar) : -1;
		if (temp2 == -1) {
			return nullptr;
		}
		decodedData->set(i, (int8_t)((temp1 << 4) | temp2));
	}
	return decodedData;
}

void HexBin::clinit$($Class* clazz) {
	$assignStatic(HexBin::hexNumberTable, $new($bytes, HexBin::BASELENGTH));
	$assignStatic(HexBin::lookUpHexAlphabet, $new($chars, HexBin::LOOKUPLENGTH));
	{
		for (int32_t i = 0; i < HexBin::BASELENGTH; ++i) {
			HexBin::hexNumberTable->set(i, -1);
		}
		for (int32_t i = u'9'; i >= u'0'; --i) {
			HexBin::hexNumberTable->set(i, (int8_t)(i - u'0'));
		}
		for (int32_t i = u'F'; i >= u'A'; --i) {
			HexBin::hexNumberTable->set(i, (int8_t)(i - u'A' + 10));
		}
		for (int32_t i = u'f'; i >= u'a'; --i) {
			HexBin::hexNumberTable->set(i, (int8_t)(i - u'a' + 10));
		}
		for (int32_t i = 0; i < 10; ++i) {
			HexBin::lookUpHexAlphabet->set(i, (char16_t)(u'0' + i));
		}
		for (int32_t i = 10; i <= 15; ++i) {
			HexBin::lookUpHexAlphabet->set(i, (char16_t)(u'A' + i - 10));
		}
	}
}

HexBin::HexBin() {
}

$Class* HexBin::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BASELENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HexBin, BASELENGTH)},
		{"LOOKUPLENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HexBin, LOOKUPLENGTH)},
		{"hexNumberTable", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HexBin, hexNumberTable)},
		{"lookUpHexAlphabet", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HexBin, lookUpHexAlphabet)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HexBin, init$, void)},
		{"decode", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(HexBin, decode, $bytes*, $String*)},
		{"encode", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(HexBin, encode, $String*, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.util.HexBin",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HexBin, name, initialize, &classInfo$$, HexBin::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HexBin);
	});
	return class$;
}

$Class* HexBin::class$ = nullptr;

								} // util
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com