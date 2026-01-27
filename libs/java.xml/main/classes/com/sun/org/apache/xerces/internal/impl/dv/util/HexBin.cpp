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

$FieldInfo _HexBin_FieldInfo_[] = {
	{"BASELENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HexBin, BASELENGTH)},
	{"LOOKUPLENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HexBin, LOOKUPLENGTH)},
	{"hexNumberTable", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HexBin, hexNumberTable)},
	{"lookUpHexAlphabet", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HexBin, lookUpHexAlphabet)},
	{}
};

$MethodInfo _HexBin_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HexBin, init$, void)},
	{"decode", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(HexBin, decode, $bytes*, $String*)},
	{"encode", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(HexBin, encode, $String*, $bytes*)},
	{}
};

$ClassInfo _HexBin_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.util.HexBin",
	"java.lang.Object",
	nullptr,
	_HexBin_FieldInfo_,
	_HexBin_MethodInfo_
};

$Object* allocate$HexBin($Class* clazz) {
	return $of($alloc(HexBin));
}

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
		encodedData->set(i * 2, $nc(HexBin::lookUpHexAlphabet)->get(temp >> 4));
		encodedData->set(i * 2 + 1, $nc(HexBin::lookUpHexAlphabet)->get((int32_t)(temp & (uint32_t)15)));
	}
	return $new($String, encodedData);
}

$bytes* HexBin::decode($String* encoded) {
	$init(HexBin);
	$useLocalCurrentObjectStackCache();
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
		temp1 = (tempChar < HexBin::BASELENGTH) ? $nc(HexBin::hexNumberTable)->get(tempChar) : (int8_t)-1;
		if (temp1 == -1) {
			return nullptr;
		}
		tempChar = binaryData->get(i * 2 + 1);
		temp2 = (tempChar < HexBin::BASELENGTH) ? $nc(HexBin::hexNumberTable)->get(tempChar) : (int8_t)-1;
		if (temp2 == -1) {
			return nullptr;
		}
		decodedData->set(i, (int8_t)((temp1 << 4) | temp2));
	}
	return decodedData;
}

void clinit$HexBin($Class* class$) {
	$assignStatic(HexBin::hexNumberTable, $new($bytes, HexBin::BASELENGTH));
	$assignStatic(HexBin::lookUpHexAlphabet, $new($chars, HexBin::LOOKUPLENGTH));
	{
		for (int32_t i = 0; i < HexBin::BASELENGTH; ++i) {
			$nc(HexBin::hexNumberTable)->set(i, (int8_t)-1);
		}
		for (int32_t i = u'9'; i >= u'0'; --i) {
			$nc(HexBin::hexNumberTable)->set(i, (int8_t)(i - u'0'));
		}
		for (int32_t i = u'F'; i >= u'A'; --i) {
			$nc(HexBin::hexNumberTable)->set(i, (int8_t)(i - u'A' + 10));
		}
		for (int32_t i = u'f'; i >= u'a'; --i) {
			$nc(HexBin::hexNumberTable)->set(i, (int8_t)(i - u'a' + 10));
		}
		for (int32_t i = 0; i < 10; ++i) {
			$nc(HexBin::lookUpHexAlphabet)->set(i, (char16_t)(u'0' + i));
		}
		for (int32_t i = 10; i <= 15; ++i) {
			$nc(HexBin::lookUpHexAlphabet)->set(i, (char16_t)(u'A' + i - 10));
		}
	}
}

HexBin::HexBin() {
}

$Class* HexBin::load$($String* name, bool initialize) {
	$loadClass(HexBin, name, initialize, &_HexBin_ClassInfo_, clinit$HexBin, allocate$HexBin);
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