#include <java/util/prefs/Base64.h>
#include <java/util/Arrays.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Random = ::java::util::Random;

namespace java {
	namespace util {
		namespace prefs {

$chars* Base64::intToBase64 = nullptr;
$chars* Base64::intToAltBase64 = nullptr;
$bytes* Base64::base64ToInt = nullptr;
$bytes* Base64::altBase64ToInt = nullptr;

void Base64::init$() {
}

$String* Base64::byteArrayToBase64($bytes* a) {
	$init(Base64);
	return byteArrayToBase64(a, false);
}

$String* Base64::byteArrayToAltBase64($bytes* a) {
	$init(Base64);
	return byteArrayToBase64(a, true);
}

$String* Base64::byteArrayToBase64($bytes* a, bool alternate) {
	$init(Base64);
	$useLocalObjectStack();
	int32_t aLen = $nc(a)->length;
	int32_t numFullGroups = aLen / 3;
	int32_t numBytesInPartialGroup = aLen - 3 * numFullGroups;
	int32_t resultLen = 4 * ((aLen + 2) / 3);
	$var($StringBuilder, result, $new($StringBuilder, resultLen));
	$var($chars, intToAlpha, alternate ? Base64::intToAltBase64 : Base64::intToBase64);
	int32_t inCursor = 0;
	for (int32_t i = 0; i < numFullGroups; ++i) {
		int32_t byte0 = a->get(inCursor++) & 0xff;
		int32_t byte1 = a->get(inCursor++) & 0xff;
		int32_t byte2 = a->get(inCursor++) & 0xff;
		result->append($nc(intToAlpha)->get(byte0 >> 2));
		result->append(intToAlpha->get(((byte0 << 4) & 0x3f) | (byte1 >> 4)));
		result->append(intToAlpha->get(((byte1 << 2) & 0x3f) | (byte2 >> 6)));
		result->append(intToAlpha->get(byte2 & 0x3f));
	}
	if (numBytesInPartialGroup != 0) {
		int32_t byte0 = a->get(inCursor++) & 0xff;
		result->append($nc(intToAlpha)->get(byte0 >> 2));
		if (numBytesInPartialGroup == 1) {
			result->append(intToAlpha->get((byte0 << 4) & 0x3f));
			result->append("=="_s);
		} else {
			int32_t byte1 = a->get(inCursor++) & 0xff;
			result->append(intToAlpha->get(((byte0 << 4) & 0x3f) | (byte1 >> 4)));
			result->append(intToAlpha->get((byte1 << 2) & 0x3f));
			result->append(u'=');
		}
	}
	return result->toString();
}

$bytes* Base64::base64ToByteArray($String* s) {
	$init(Base64);
	return base64ToByteArray(s, false);
}

$bytes* Base64::altBase64ToByteArray($String* s) {
	$init(Base64);
	return base64ToByteArray(s, true);
}

$bytes* Base64::base64ToByteArray($String* s, bool alternate) {
	$init(Base64);
	$useLocalObjectStack();
	$var($bytes, alphaToInt, alternate ? Base64::altBase64ToInt : Base64::base64ToInt);
	int32_t sLen = $nc(s)->length();
	int32_t numGroups = sLen / 4;
	if (4 * numGroups != sLen) {
		$throwNew($IllegalArgumentException, "String length must be a multiple of four."_s);
	}
	int32_t missingBytesInLastGroup = 0;
	int32_t numFullGroups = numGroups;
	if (sLen != 0) {
		if (s->charAt(sLen - 1) == u'=') {
			++missingBytesInLastGroup;
			--numFullGroups;
		}
		if (s->charAt(sLen - 2) == u'=') {
			++missingBytesInLastGroup;
		}
	}
	$var($bytes, result, $new($bytes, 3 * numGroups - missingBytesInLastGroup));
	int32_t inCursor = 0;
	int32_t outCursor = 0;
	for (int32_t i = 0; i < numFullGroups; ++i) {
		int32_t ch0 = base64toInt(s->charAt(inCursor++), alphaToInt);
		int32_t ch1 = base64toInt(s->charAt(inCursor++), alphaToInt);
		int32_t ch2 = base64toInt(s->charAt(inCursor++), alphaToInt);
		int32_t ch3 = base64toInt(s->charAt(inCursor++), alphaToInt);
		result->set(outCursor++, (int8_t)((ch0 << 2) | (ch1 >> 4)));
		result->set(outCursor++, (int8_t)((ch1 << 4) | (ch2 >> 2)));
		result->set(outCursor++, (int8_t)((ch2 << 6) | ch3));
	}
	if (missingBytesInLastGroup != 0) {
		int32_t ch0 = base64toInt(s->charAt(inCursor++), alphaToInt);
		int32_t ch1 = base64toInt(s->charAt(inCursor++), alphaToInt);
		result->set(outCursor++, (int8_t)((ch0 << 2) | (ch1 >> 4)));
		if (missingBytesInLastGroup == 1) {
			int32_t ch2 = base64toInt(s->charAt(inCursor++), alphaToInt);
			result->set(outCursor++, (int8_t)((ch1 << 4) | (ch2 >> 2)));
		}
	}
	return result;
}

int32_t Base64::base64toInt(char16_t c, $bytes* alphaToInt) {
	$init(Base64);
	$useLocalObjectStack();
	int32_t result = $nc(alphaToInt)->get(c);
	if (result < 0) {
		$throwNew($IllegalArgumentException, $$str({"Illegal character "_s, $$str(c)}));
	}
	return result;
}

void Base64::main($StringArray* args) {
	$init(Base64);
	$useLocalObjectStack();
	int32_t numRuns = $Integer::parseInt($nc(args)->get(0));
	int32_t numBytes = $Integer::parseInt(args->get(1));
	$var($Random, rnd, $new($Random));
	for (int32_t i = 0; i < numRuns; ++i) {
		for (int32_t j = 0; j < numBytes; ++j) {
			$var($bytes, arr, $new($bytes, j));
			for (int32_t k = 0; k < j; ++k) {
				arr->set(k, (int8_t)rnd->nextInt());
			}
			$var($String, s, byteArrayToBase64(arr));
			$var($bytes, b, base64ToByteArray(s));
			if (!$Arrays::equals(arr, b)) {
				$nc($System::out)->println("Dismal failure!"_s);
			}
			$assign(s, byteArrayToAltBase64(arr));
			$assign(b, altBase64ToByteArray(s));
			if (!$Arrays::equals(arr, b)) {
				$nc($System::out)->println("Alternate dismal failure!"_s);
			}
		}
	}
}

void Base64::clinit$($Class* clazz) {
	$assignStatic(Base64::intToBase64, $new($chars, {
		u'A',
		u'B',
		u'C',
		u'D',
		u'E',
		u'F',
		u'G',
		u'H',
		u'I',
		u'J',
		u'K',
		u'L',
		u'M',
		u'N',
		u'O',
		u'P',
		u'Q',
		u'R',
		u'S',
		u'T',
		u'U',
		u'V',
		u'W',
		u'X',
		u'Y',
		u'Z',
		u'a',
		u'b',
		u'c',
		u'd',
		u'e',
		u'f',
		u'g',
		u'h',
		u'i',
		u'j',
		u'k',
		u'l',
		u'm',
		u'n',
		u'o',
		u'p',
		u'q',
		u'r',
		u's',
		u't',
		u'u',
		u'v',
		u'w',
		u'x',
		u'y',
		u'z',
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'+',
		u'/'
	}));
	$assignStatic(Base64::intToAltBase64, $new($chars, {
		u'!',
		u'\"',
		u'#',
		u'$',
		u'%',
		u'&',
		u'\'',
		u'(',
		u')',
		u',',
		u'-',
		u'.',
		u':',
		u';',
		u'<',
		u'>',
		u'@',
		u'[',
		u']',
		u'^',
		u'`',
		u'_',
		u'{',
		u'|',
		u'}',
		u'~',
		u'a',
		u'b',
		u'c',
		u'd',
		u'e',
		u'f',
		u'g',
		u'h',
		u'i',
		u'j',
		u'k',
		u'l',
		u'm',
		u'n',
		u'o',
		u'p',
		u'q',
		u'r',
		u's',
		u't',
		u'u',
		u'v',
		u'w',
		u'x',
		u'y',
		u'z',
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'+',
		u'?'
	}));
	$assignStatic(Base64::base64ToInt, $new($bytes, {
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		62,
		-1,
		-1,
		-1,
		63,
		52,
		53,
		54,
		55,
		56,
		57,
		58,
		59,
		60,
		61,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		0,
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		9,
		10,
		11,
		12,
		13,
		14,
		15,
		16,
		17,
		18,
		19,
		20,
		21,
		22,
		23,
		24,
		25,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		26,
		27,
		28,
		29,
		30,
		31,
		32,
		33,
		34,
		35,
		36,
		37,
		38,
		39,
		40,
		41,
		42,
		43,
		44,
		45,
		46,
		47,
		48,
		49,
		50,
		51
	}));
	$assignStatic(Base64::altBase64ToInt, $new($bytes, {
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		0,
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		-1,
		62,
		9,
		10,
		11,
		-1,
		52,
		53,
		54,
		55,
		56,
		57,
		58,
		59,
		60,
		61,
		12,
		13,
		14,
		-1,
		15,
		63,
		16,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		17,
		-1,
		18,
		19,
		21,
		20,
		26,
		27,
		28,
		29,
		30,
		31,
		32,
		33,
		34,
		35,
		36,
		37,
		38,
		39,
		40,
		41,
		42,
		43,
		44,
		45,
		46,
		47,
		48,
		49,
		50,
		51,
		22,
		23,
		24,
		25
	}));
}

Base64::Base64() {
}

$Class* Base64::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"intToBase64", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Base64, intToBase64)},
		{"intToAltBase64", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Base64, intToAltBase64)},
		{"base64ToInt", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Base64, base64ToInt)},
		{"altBase64ToInt", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Base64, altBase64ToInt)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Base64, init$, void)},
		{"altBase64ToByteArray", "(Ljava/lang/String;)[B", nullptr, $STATIC, $staticMethod(Base64, altBase64ToByteArray, $bytes*, $String*)},
		{"base64ToByteArray", "(Ljava/lang/String;)[B", nullptr, $STATIC, $staticMethod(Base64, base64ToByteArray, $bytes*, $String*)},
		{"base64ToByteArray", "(Ljava/lang/String;Z)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(Base64, base64ToByteArray, $bytes*, $String*, bool)},
		{"base64toInt", "(C[B)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Base64, base64toInt, int32_t, char16_t, $bytes*)},
		{"byteArrayToAltBase64", "([B)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Base64, byteArrayToAltBase64, $String*, $bytes*)},
		{"byteArrayToBase64", "([B)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Base64, byteArrayToBase64, $String*, $bytes*)},
		{"byteArrayToBase64", "([BZ)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Base64, byteArrayToBase64, $String*, $bytes*, bool)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Base64, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.Base64",
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

		} // prefs
	} // util
} // java