#include <com/sun/org/apache/xerces/internal/impl/dv/util/Base64.h>
#include <jcpp.h>

#undef BASELENGTH
#undef EIGHTBIT
#undef FOURBYTE
#undef LOOKUPLENGTH
#undef PAD
#undef SIGN
#undef SIXBIT
#undef SIXTEENBIT
#undef TWENTYFOURBITGROUP

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

$bytes* Base64::base64Alphabet = nullptr;
$chars* Base64::lookUpBase64Alphabet = nullptr;

void Base64::init$() {
}

bool Base64::isWhiteSpace(char16_t octect) {
	$init(Base64);
	return (octect == 32 || octect == 13 || octect == 10 || octect == 9);
}

bool Base64::isPad(char16_t octect) {
	$init(Base64);
	return (octect == Base64::PAD);
}

bool Base64::isData(char16_t octect) {
	$init(Base64);
	return (octect < Base64::BASELENGTH && Base64::base64Alphabet->get(octect) != -1);
}

bool Base64::isBase64(char16_t octect) {
	$init(Base64);
	bool var$1 = isWhiteSpace(octect);
	bool var$0 = var$1 || isPad(octect);
	return (var$0 || isData(octect));
}

$String* Base64::encode($bytes* binaryData) {
	$init(Base64);
	if (binaryData == nullptr) {
		return nullptr;
	}
	int32_t lengthDataBits = $nc(binaryData)->length * Base64::EIGHTBIT;
	if (lengthDataBits == 0) {
		return ""_s;
	}
	int32_t fewerThan24bits = $mod(lengthDataBits, Base64::TWENTYFOURBITGROUP);
	int32_t numberTriplets = $div(lengthDataBits, Base64::TWENTYFOURBITGROUP);
	int32_t numberQuartet = fewerThan24bits != 0 ? numberTriplets + 1 : numberTriplets;
	$var($chars, encodedData, nullptr);
	$assign(encodedData, $new($chars, numberQuartet * 4));
	int8_t k = 0;
	int8_t l = 0;
	int8_t b1 = 0;
	int8_t b2 = 0;
	int8_t b3 = 0;
	int32_t encodedIndex = 0;
	int32_t dataIndex = 0;
	;
	for (int32_t i = 0; i < numberTriplets; ++i) {
		b1 = binaryData->get(dataIndex++);
		b2 = binaryData->get(dataIndex++);
		b3 = binaryData->get(dataIndex++);
		;
		l = (int8_t)(b2 & 0x0f);
		k = (int8_t)(b1 & 3);
		int8_t val1 = ((b1 & Base64::SIGN) == 0) ? (int8_t)(b1 >> 2) : (int8_t)(((b1) >> 2) ^ 0xc0);
		int8_t val2 = ((b2 & Base64::SIGN) == 0) ? (int8_t)(b2 >> 4) : (int8_t)(((b2) >> 4) ^ 0xf0);
		int8_t val3 = ((b3 & Base64::SIGN) == 0) ? (int8_t)(b3 >> 6) : (int8_t)(((b3) >> 6) ^ 0xfc);
		;
		encodedData->set(encodedIndex++, Base64::lookUpBase64Alphabet->get(val1));
		encodedData->set(encodedIndex++, Base64::lookUpBase64Alphabet->get(val2 | (k << 4)));
		encodedData->set(encodedIndex++, Base64::lookUpBase64Alphabet->get((l << 2) | val3));
		encodedData->set(encodedIndex++, Base64::lookUpBase64Alphabet->get(b3 & 0x3f));
	}
	if (fewerThan24bits == Base64::EIGHTBIT) {
		b1 = binaryData->get(dataIndex);
		k = (int8_t)(b1 & 3);
		;
		int8_t val1 = ((b1 & Base64::SIGN) == 0) ? (int8_t)(b1 >> 2) : (int8_t)(((b1) >> 2) ^ 0xc0);
		encodedData->set(encodedIndex++, Base64::lookUpBase64Alphabet->get(val1));
		encodedData->set(encodedIndex++, Base64::lookUpBase64Alphabet->get(k << 4));
		encodedData->set(encodedIndex++, Base64::PAD);
		encodedData->set(encodedIndex++, Base64::PAD);
	} else if (fewerThan24bits == Base64::SIXTEENBIT) {
		b1 = binaryData->get(dataIndex);
		b2 = binaryData->get(dataIndex + 1);
		l = (int8_t)(b2 & 0x0f);
		k = (int8_t)(b1 & 3);
		int8_t val1 = ((b1 & Base64::SIGN) == 0) ? (int8_t)(b1 >> 2) : (int8_t)(((b1) >> 2) ^ 0xc0);
		int8_t val2 = ((b2 & Base64::SIGN) == 0) ? (int8_t)(b2 >> 4) : (int8_t)(((b2) >> 4) ^ 0xf0);
		encodedData->set(encodedIndex++, Base64::lookUpBase64Alphabet->get(val1));
		encodedData->set(encodedIndex++, Base64::lookUpBase64Alphabet->get(val2 | (k << 4)));
		encodedData->set(encodedIndex++, Base64::lookUpBase64Alphabet->get(l << 2));
		encodedData->set(encodedIndex++, Base64::PAD);
	}
	return $new($String, encodedData);
}

$bytes* Base64::decode($String* encoded) {
	$init(Base64);
	$useLocalObjectStack();
	if (encoded == nullptr) {
		return nullptr;
	}
	$var($chars, base64Data, $nc(encoded)->toCharArray());
	int32_t len = removeWhiteSpace(base64Data);
	if ($mod(len, Base64::FOURBYTE) != 0) {
		return nullptr;
	}
	int32_t numberQuadruple = ($div(len, Base64::FOURBYTE));
	if (numberQuadruple == 0) {
		return $new($bytes, 0);
	}
	$var($bytes, decodedData, nullptr);
	int8_t b1 = 0;
	int8_t b2 = 0;
	int8_t b3 = 0;
	int8_t b4 = 0;
	char16_t d1 = 0;
	char16_t d2 = 0;
	char16_t d3 = 0;
	char16_t d4 = 0;
	int32_t i = 0;
	int32_t encodedIndex = 0;
	int32_t dataIndex = 0;
	$assign(decodedData, $new($bytes, (numberQuadruple) * 3));
	for (; i < numberQuadruple - 1; ++i) {
		bool var$2 = !isData((d1 = base64Data->get(dataIndex++)));
		bool var$1 = var$2 || !isData((d2 = base64Data->get(dataIndex++)));
		bool var$0 = var$1 || !isData((d3 = base64Data->get(dataIndex++)));
		if (var$0 || !isData((d4 = base64Data->get(dataIndex++)))) {
			return nullptr;
		}
		b1 = Base64::base64Alphabet->get(d1);
		b2 = Base64::base64Alphabet->get(d2);
		b3 = Base64::base64Alphabet->get(d3);
		b4 = Base64::base64Alphabet->get(d4);
		decodedData->set(encodedIndex++, (int8_t)((b1 << 2) | (b2 >> 4)));
		decodedData->set(encodedIndex++, (int8_t)(((b2 & 0x0f) << 4) | ((b3 >> 2) & 0x0f)));
		decodedData->set(encodedIndex++, (int8_t)((b3 << 6) | b4));
	}
	bool var$3 = !isData((d1 = base64Data->get(dataIndex++)));
	if (var$3 || !isData((d2 = base64Data->get(dataIndex++)))) {
		return nullptr;
	}
	b1 = Base64::base64Alphabet->get(d1);
	b2 = Base64::base64Alphabet->get(d2);
	d3 = base64Data->get(dataIndex++);
	d4 = base64Data->get(dataIndex++);
	bool var$4 = !isData((d3));
	if (var$4 || !isData((d4))) {
		bool var$5 = isPad(d3);
		if (var$5 && isPad(d4)) {
			if ((b2 & 0x0f) != 0) {
				return nullptr;
			}
			$var($bytes, tmp, $new($bytes, i * 3 + 1));
			$System::arraycopy(decodedData, 0, tmp, 0, i * 3);
			tmp->set(encodedIndex, (int8_t)((b1 << 2) | (b2 >> 4)));
			return tmp;
		} else {
			bool var$6 = !isPad(d3);
			if (var$6 && isPad(d4)) {
				b3 = Base64::base64Alphabet->get(d3);
				if ((b3 & 3) != 0) {
					return nullptr;
				}
				$var($bytes, tmp, $new($bytes, i * 3 + 2));
				$System::arraycopy(decodedData, 0, tmp, 0, i * 3);
				tmp->set(encodedIndex++, (int8_t)((b1 << 2) | (b2 >> 4)));
				tmp->set(encodedIndex, (int8_t)(((b2 & 0x0f) << 4) | ((b3 >> 2) & 0x0f)));
				return tmp;
			} else {
				return nullptr;
			}
		}
	} else {
		b3 = Base64::base64Alphabet->get(d3);
		b4 = Base64::base64Alphabet->get(d4);
		decodedData->set(encodedIndex++, (int8_t)((b1 << 2) | (b2 >> 4)));
		decodedData->set(encodedIndex++, (int8_t)(((b2 & 0x0f) << 4) | ((b3 >> 2) & 0x0f)));
		decodedData->set(encodedIndex++, (int8_t)((b3 << 6) | b4));
	}
	return decodedData;
}

int32_t Base64::removeWhiteSpace($chars* data) {
	$init(Base64);
	if (data == nullptr) {
		return 0;
	}
	int32_t newSize = 0;
	int32_t len = $nc(data)->length;
	for (int32_t i = 0; i < len; ++i) {
		if (!isWhiteSpace(data->get(i))) {
			data->set(newSize++, data->get(i));
		}
	}
	return newSize;
}

void Base64::clinit$($Class* clazz) {
	$assignStatic(Base64::base64Alphabet, $new($bytes, Base64::BASELENGTH));
	$assignStatic(Base64::lookUpBase64Alphabet, $new($chars, Base64::LOOKUPLENGTH));
	{
		for (int32_t i = 0; i < Base64::BASELENGTH; ++i) {
			Base64::base64Alphabet->set(i, -1);
		}
		for (int32_t i = u'Z'; i >= u'A'; --i) {
			Base64::base64Alphabet->set(i, (int8_t)(i - u'A'));
		}
		for (int32_t i = u'z'; i >= u'a'; --i) {
			Base64::base64Alphabet->set(i, (int8_t)(i - u'a' + 26));
		}
		for (int32_t i = u'9'; i >= u'0'; --i) {
			Base64::base64Alphabet->set(i, (int8_t)(i - u'0' + 52));
		}
		Base64::base64Alphabet->set(u'+', 62);
		Base64::base64Alphabet->set(u'/', 63);
		for (int32_t i = 0; i <= 25; ++i) {
			Base64::lookUpBase64Alphabet->set(i, (char16_t)(u'A' + i));
		}
		for (int32_t i = 26, j = 0; i <= 51; ++i, ++j) {
			Base64::lookUpBase64Alphabet->set(i, (char16_t)(u'a' + j));
		}
		for (int32_t i = 52, j = 0; i <= 61; ++i, ++j) {
			Base64::lookUpBase64Alphabet->set(i, (char16_t)(u'0' + j));
		}
		Base64::lookUpBase64Alphabet->set(62, u'+');
		Base64::lookUpBase64Alphabet->set(63, u'/');
	}
}

Base64::Base64() {
}

$Class* Base64::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BASELENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, BASELENGTH)},
		{"LOOKUPLENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, LOOKUPLENGTH)},
		{"TWENTYFOURBITGROUP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, TWENTYFOURBITGROUP)},
		{"EIGHTBIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, EIGHTBIT)},
		{"SIXTEENBIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, SIXTEENBIT)},
		{"SIXBIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, SIXBIT)},
		{"FOURBYTE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, FOURBYTE)},
		{"SIGN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, SIGN)},
		{"PAD", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, PAD)},
		{"fDebug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, fDebug)},
		{"base64Alphabet", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Base64, base64Alphabet)},
		{"lookUpBase64Alphabet", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Base64, lookUpBase64Alphabet)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Base64, init$, void)},
		{"decode", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(Base64, decode, $bytes*, $String*)},
		{"encode", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Base64, encode, $String*, $bytes*)},
		{"isBase64", "(C)Z", nullptr, $PROTECTED | $STATIC, $staticMethod(Base64, isBase64, bool, char16_t)},
		{"isData", "(C)Z", nullptr, $PROTECTED | $STATIC, $staticMethod(Base64, isData, bool, char16_t)},
		{"isPad", "(C)Z", nullptr, $PROTECTED | $STATIC, $staticMethod(Base64, isPad, bool, char16_t)},
		{"isWhiteSpace", "(C)Z", nullptr, $PROTECTED | $STATIC, $staticMethod(Base64, isWhiteSpace, bool, char16_t)},
		{"removeWhiteSpace", "([C)I", nullptr, $PROTECTED | $STATIC, $staticMethod(Base64, removeWhiteSpace, int32_t, $chars*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.util.Base64",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Base64, name, initialize, &classInfo$$, Base64::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Base64);
	});
	return class$;
}

$Class* Base64::class$ = nullptr;

								} // util
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com