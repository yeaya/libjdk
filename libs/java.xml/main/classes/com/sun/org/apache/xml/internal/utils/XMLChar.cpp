#include <com/sun/org/apache/xml/internal/utils/XMLChar.h>

#include <jcpp.h>

#undef CHARS
#undef MASK_CONTENT
#undef MASK_NAME
#undef MASK_NAME_START
#undef MASK_NCNAME
#undef MASK_NCNAME_START
#undef MASK_PUBID
#undef MASK_SPACE
#undef MASK_VALID

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _XMLChar_FieldInfo_[] = {
	{"CHARS", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLChar, CHARS)},
	{"MASK_VALID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLChar, MASK_VALID)},
	{"MASK_SPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLChar, MASK_SPACE)},
	{"MASK_NAME_START", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLChar, MASK_NAME_START)},
	{"MASK_NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLChar, MASK_NAME)},
	{"MASK_PUBID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLChar, MASK_PUBID)},
	{"MASK_CONTENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLChar, MASK_CONTENT)},
	{"MASK_NCNAME_START", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLChar, MASK_NCNAME_START)},
	{"MASK_NCNAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLChar, MASK_NCNAME)},
	{}
};

$MethodInfo _XMLChar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLChar, init$, void)},
	{"highSurrogate", "(I)C", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, highSurrogate, char16_t, int32_t)},
	{"isContent", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isContent, bool, int32_t)},
	{"isHighSurrogate", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isHighSurrogate, bool, int32_t)},
	{"isInvalid", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isInvalid, bool, int32_t)},
	{"isLowSurrogate", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isLowSurrogate, bool, int32_t)},
	{"isMarkup", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isMarkup, bool, int32_t)},
	{"isNCName", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isNCName, bool, int32_t)},
	{"isNCNameStart", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isNCNameStart, bool, int32_t)},
	{"isName", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isName, bool, int32_t)},
	{"isNameStart", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isNameStart, bool, int32_t)},
	{"isPubid", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isPubid, bool, int32_t)},
	{"isSpace", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isSpace, bool, int32_t)},
	{"isSupplemental", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isSupplemental, bool, int32_t)},
	{"isValid", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isValid, bool, int32_t)},
	{"isValidIANAEncoding", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isValidIANAEncoding, bool, $String*)},
	{"isValidJavaEncoding", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isValidJavaEncoding, bool, $String*)},
	{"isValidNCName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isValidNCName, bool, $String*)},
	{"isValidName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isValidName, bool, $String*)},
	{"isValidNmtoken", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isValidNmtoken, bool, $String*)},
	{"isValidQName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, isValidQName, bool, $String*)},
	{"lowSurrogate", "(I)C", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, lowSurrogate, char16_t, int32_t)},
	{"supplemental", "(CC)I", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, supplemental, int32_t, char16_t, char16_t)},
	{}
};

$ClassInfo _XMLChar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.XMLChar",
	"java.lang.Object",
	nullptr,
	_XMLChar_FieldInfo_,
	_XMLChar_MethodInfo_
};

$Object* allocate$XMLChar($Class* clazz) {
	return $of($alloc(XMLChar));
}

$bytes* XMLChar::CHARS = nullptr;

void XMLChar::init$() {
}

bool XMLChar::isSupplemental(int32_t c) {
	$init(XMLChar);
	return (c >= 0x00010000 && c <= 0x0010FFFF);
}

int32_t XMLChar::supplemental(char16_t h, char16_t l) {
	$init(XMLChar);
	return (h - 0x0000D800) * 1024 + (l - 0x0000DC00) + 0x00010000;
}

char16_t XMLChar::highSurrogate(int32_t c) {
	$init(XMLChar);
	return (char16_t)(((c - 0x00010000) >> 10) + 0x0000D800);
}

char16_t XMLChar::lowSurrogate(int32_t c) {
	$init(XMLChar);
	return (char16_t)(((int32_t)((c - 0x00010000) & (uint32_t)1023)) + 0x0000DC00);
}

bool XMLChar::isHighSurrogate(int32_t c) {
	$init(XMLChar);
	return (0x0000D800 <= c && c <= 0x0000DBFF);
}

bool XMLChar::isLowSurrogate(int32_t c) {
	$init(XMLChar);
	return (0x0000DC00 <= c && c <= 0x0000DFFF);
}

bool XMLChar::isValid(int32_t c) {
	$init(XMLChar);
	return (c < 0x00010000 && ((int32_t)($nc(XMLChar::CHARS)->get(c) & (uint32_t)XMLChar::MASK_VALID)) != 0) || (0x00010000 <= c && c <= 0x0010FFFF);
}

bool XMLChar::isInvalid(int32_t c) {
	$init(XMLChar);
	return !isValid(c);
}

bool XMLChar::isContent(int32_t c) {
	$init(XMLChar);
	return (c < 0x00010000 && ((int32_t)($nc(XMLChar::CHARS)->get(c) & (uint32_t)XMLChar::MASK_CONTENT)) != 0) || (0x00010000 <= c && c <= 0x0010FFFF);
}

bool XMLChar::isMarkup(int32_t c) {
	$init(XMLChar);
	return c == u'<' || c == u'&' || c == u'%';
}

bool XMLChar::isSpace(int32_t c) {
	$init(XMLChar);
	return c < 0x00010000 && ((int32_t)($nc(XMLChar::CHARS)->get(c) & (uint32_t)XMLChar::MASK_SPACE)) != 0;
}

bool XMLChar::isNameStart(int32_t c) {
	$init(XMLChar);
	return c < 0x00010000 && ((int32_t)($nc(XMLChar::CHARS)->get(c) & (uint32_t)XMLChar::MASK_NAME_START)) != 0;
}

bool XMLChar::isName(int32_t c) {
	$init(XMLChar);
	return c < 0x00010000 && ((int32_t)($nc(XMLChar::CHARS)->get(c) & (uint32_t)XMLChar::MASK_NAME)) != 0;
}

bool XMLChar::isNCNameStart(int32_t c) {
	$init(XMLChar);
	return c < 0x00010000 && ((int32_t)($nc(XMLChar::CHARS)->get(c) & (uint32_t)XMLChar::MASK_NCNAME_START)) != 0;
}

bool XMLChar::isNCName(int32_t c) {
	$init(XMLChar);
	return c < 0x00010000 && ((int32_t)($nc(XMLChar::CHARS)->get(c) & (uint32_t)XMLChar::MASK_NCNAME)) != 0;
}

bool XMLChar::isPubid(int32_t c) {
	$init(XMLChar);
	return c < 0x00010000 && ((int32_t)($nc(XMLChar::CHARS)->get(c) & (uint32_t)XMLChar::MASK_PUBID)) != 0;
}

bool XMLChar::isValidName($String* name) {
	$init(XMLChar);
	if ($nc(name)->length() == 0) {
		return false;
	}
	char16_t ch = $nc(name)->charAt(0);
	if (isNameStart(ch) == false) {
		return false;
	}
	for (int32_t i = 1; i < name->length(); ++i) {
		ch = name->charAt(i);
		if (isName(ch) == false) {
			return false;
		}
	}
	return true;
}

bool XMLChar::isValidNCName($String* ncName) {
	$init(XMLChar);
	if ($nc(ncName)->length() == 0) {
		return false;
	}
	char16_t ch = $nc(ncName)->charAt(0);
	if (isNCNameStart(ch) == false) {
		return false;
	}
	for (int32_t i = 1; i < ncName->length(); ++i) {
		ch = ncName->charAt(i);
		if (isNCName(ch) == false) {
			return false;
		}
	}
	return true;
}

bool XMLChar::isValidNmtoken($String* nmtoken) {
	$init(XMLChar);
	if ($nc(nmtoken)->length() == 0) {
		return false;
	}
	for (int32_t i = 0; i < $nc(nmtoken)->length(); ++i) {
		char16_t ch = nmtoken->charAt(i);
		if (!isName(ch)) {
			return false;
		}
	}
	return true;
}

bool XMLChar::isValidIANAEncoding($String* ianaEncoding) {
	$init(XMLChar);
	if (ianaEncoding != nullptr) {
		int32_t length = ianaEncoding->length();
		if (length > 0) {
			char16_t c = ianaEncoding->charAt(0);
			if ((c >= u'A' && c <= u'Z') || (c >= u'a' && c <= u'z')) {
				for (int32_t i = 1; i < length; ++i) {
					c = ianaEncoding->charAt(i);
					if ((c < u'A' || c > u'Z') && (c < u'a' || c > u'z') && (c < u'0' || c > u'9') && c != u'.' && c != u'_' && c != u'-') {
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

bool XMLChar::isValidJavaEncoding($String* javaEncoding) {
	$init(XMLChar);
	if (javaEncoding != nullptr) {
		int32_t length = javaEncoding->length();
		if (length > 0) {
			for (int32_t i = 1; i < length; ++i) {
				char16_t c = javaEncoding->charAt(i);
				if ((c < u'A' || c > u'Z') && (c < u'a' || c > u'z') && (c < u'0' || c > u'9') && c != u'.' && c != u'_' && c != u'-') {
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

bool XMLChar::isValidQName($String* str) {
	$init(XMLChar);
	$useLocalCurrentObjectStackCache();
	int32_t colon = $nc(str)->indexOf((int32_t)u':');
	if (colon == 0 || colon == str->length() - 1) {
		return false;
	}
	if (colon > 0) {
		$var($String, prefix, str->substring(0, colon));
		$var($String, localPart, str->substring(colon + 1));
		bool var$0 = isValidNCName(prefix);
		return var$0 && isValidNCName(localPart);
	} else {
		return isValidNCName(str);
	}
}

void clinit$XMLChar($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XMLChar::CHARS, $new($bytes, 1 << 16));
	{
		$var($ints, charRange, $new($ints, {
			9,
			10,
			13,
			13,
			32,
			0x0000D7FF,
			0x0000E000,
			0x0000FFFD
		}));
		$var($ints, spaceChar, $new($ints, {
			32,
			9,
			13,
			10
		}));
		$var($ints, nameChar, $new($ints, {
			45,
			46
		}));
		$var($ints, nameStartChar, $new($ints, {
			58,
			95
		}));
		$var($ints, pubidChar, $new($ints, {
			10,
			13,
			32,
			33,
			35,
			36,
			37,
			61,
			95
		}));
		$var($ints, pubidRange, $new($ints, {
			39,
			59,
			63,
			90,
			97,
			122
		}));
		$var($ints, letterRange, $new($ints, {
			65,
			90,
			97,
			122,
			192,
			214,
			216,
			246,
			248,
			305,
			308,
			318,
			321,
			328,
			330,
			382,
			384,
			451,
			461,
			496,
			500,
			501,
			506,
			535,
			592,
			680,
			699,
			705,
			904,
			906,
			910,
			929,
			931,
			974,
			976,
			982,
			994,
			1011,
			1025,
			1036,
			1038,
			1103,
			1105,
			1116,
			1118,
			1153,
			1168,
			1220,
			1223,
			1224,
			1227,
			1228,
			1232,
			1259,
			1262,
			1269,
			1272,
			1273,
			1329,
			1366,
			1377,
			1414,
			1488,
			1514,
			1520,
			1522,
			1569,
			1594,
			1601,
			1610,
			1649,
			1719,
			1722,
			1726,
			1728,
			1742,
			1744,
			1747,
			1765,
			1766,
			2309,
			2361,
			2392,
			2401,
			2437,
			2444,
			2447,
			2448,
			2451,
			2472,
			2474,
			2480,
			2486,
			2489,
			2524,
			2525,
			2527,
			2529,
			2544,
			2545,
			2565,
			2570,
			2575,
			2576,
			2579,
			2600,
			2602,
			2608,
			2610,
			2611,
			2613,
			2614,
			2616,
			2617,
			2649,
			2652,
			2674,
			2676,
			2693,
			2699,
			2703,
			2705,
			2707,
			2728,
			2730,
			2736,
			2738,
			2739,
			2741,
			2745,
			2821,
			2828,
			2831,
			2832,
			2835,
			2856,
			2858,
			2864,
			2866,
			2867,
			2870,
			2873,
			2908,
			2909,
			2911,
			2913,
			2949,
			2954,
			2958,
			2960,
			2962,
			2965,
			2969,
			2970,
			2974,
			2975,
			2979,
			2980,
			2984,
			2986,
			2990,
			2997,
			2999,
			3001,
			3077,
			3084,
			3086,
			3088,
			3090,
			3112,
			3114,
			3123,
			3125,
			3129,
			3168,
			3169,
			3205,
			3212,
			3214,
			3216,
			3218,
			3240,
			3242,
			3251,
			3253,
			3257,
			3296,
			3297,
			3333,
			3340,
			3342,
			3344,
			3346,
			3368,
			3370,
			3385,
			3424,
			3425,
			3585,
			3630,
			3634,
			3635,
			3648,
			3653,
			3713,
			3714,
			3719,
			3720,
			3732,
			3735,
			3737,
			3743,
			3745,
			3747,
			3754,
			3755,
			3757,
			3758,
			3762,
			3763,
			3776,
			3780,
			3904,
			3911,
			3913,
			3945,
			4256,
			4293,
			4304,
			4342,
			4354,
			4355,
			4357,
			4359,
			4363,
			4364,
			4366,
			4370,
			4436,
			4437,
			4447,
			4449,
			4461,
			4462,
			4466,
			4467,
			4526,
			4527,
			4535,
			4536,
			4540,
			4546,
			7680,
			7835,
			7840,
			7929,
			7936,
			7957,
			7960,
			7965,
			7968,
			8005,
			8008,
			8013,
			8016,
			8023,
			8031,
			8061,
			8064,
			8116,
			8118,
			8124,
			8130,
			8132,
			8134,
			8140,
			8144,
			8147,
			8150,
			8155,
			8160,
			8172,
			8178,
			8180,
			8182,
			8188,
			8490,
			8491,
			8576,
			8578,
			12353,
			12436,
			12449,
			12538,
			12549,
			12588,
			0x0000AC00,
			0x0000D7A3,
			12321,
			12329,
			19968,
			0x00009FA5
		}));
		$var($ints, letterChar, $new($ints, {
			902,
			908,
			986,
			988,
			990,
			992,
			1369,
			1749,
			2365,
			2482,
			2654,
			2701,
			2749,
			2784,
			2877,
			2972,
			3294,
			3632,
			3716,
			3722,
			3725,
			3749,
			3751,
			3760,
			3773,
			4352,
			4361,
			4412,
			4414,
			4416,
			4428,
			4430,
			4432,
			4441,
			4451,
			4453,
			4455,
			4457,
			4469,
			4510,
			4520,
			4523,
			4538,
			4587,
			4592,
			4601,
			8025,
			8027,
			8029,
			8126,
			8486,
			8494,
			12295
		}));
		$var($ints, combiningCharRange, $new($ints, {
			768,
			837,
			864,
			865,
			1155,
			1158,
			1425,
			1441,
			1443,
			1465,
			1467,
			1469,
			1473,
			1474,
			1611,
			1618,
			1750,
			1756,
			1757,
			1759,
			1760,
			1764,
			1767,
			1768,
			1770,
			1773,
			2305,
			2307,
			2366,
			2380,
			2385,
			2388,
			2402,
			2403,
			2433,
			2435,
			2496,
			2500,
			2503,
			2504,
			2507,
			2509,
			2530,
			2531,
			2624,
			2626,
			2631,
			2632,
			2635,
			2637,
			2672,
			2673,
			2689,
			2691,
			2750,
			2757,
			2759,
			2761,
			2763,
			2765,
			2817,
			2819,
			2878,
			2883,
			2887,
			2888,
			2891,
			2893,
			2902,
			2903,
			2946,
			2947,
			3006,
			3010,
			3014,
			3016,
			3018,
			3021,
			3073,
			3075,
			3134,
			3140,
			3142,
			3144,
			3146,
			3149,
			3157,
			3158,
			3202,
			3203,
			3262,
			3268,
			3270,
			3272,
			3274,
			3277,
			3285,
			3286,
			3330,
			3331,
			3390,
			3395,
			3398,
			3400,
			3402,
			3405,
			3636,
			3642,
			3655,
			3662,
			3764,
			3769,
			3771,
			3772,
			3784,
			3789,
			3864,
			3865,
			3953,
			3972,
			3974,
			3979,
			3984,
			3989,
			3993,
			4013,
			4017,
			4023,
			8400,
			8412,
			12330,
			12335
		}));
		$var($ints, combiningCharChar, $new($ints, {
			1471,
			1476,
			1648,
			2364,
			2381,
			2492,
			2494,
			2495,
			2519,
			2562,
			2620,
			2622,
			2623,
			2748,
			2876,
			3031,
			3415,
			3633,
			3761,
			3893,
			3895,
			3897,
			3902,
			3903,
			3991,
			4025,
			8417,
			12441,
			12442
		}));
		$var($ints, digitRange, $new($ints, {
			48,
			57,
			1632,
			1641,
			1776,
			1785,
			2406,
			2415,
			2534,
			2543,
			2662,
			2671,
			2790,
			2799,
			2918,
			2927,
			3047,
			3055,
			3174,
			3183,
			3302,
			3311,
			3430,
			3439,
			3664,
			3673,
			3792,
			3801,
			3872,
			3881
		}));
		$var($ints, extenderRange, $new($ints, {
			12337,
			12341,
			12445,
			12446,
			12540,
			12542
		}));
		$var($ints, extenderChar, $new($ints, {
			183,
			720,
			721,
			903,
			1600,
			3654,
			3782,
			12293
		}));
		$var($ints, specialChar, $new($ints, {
			(int32_t)u'<',
			(int32_t)u'&',
			(int32_t)u'\n',
			(int32_t)u'\r',
			(int32_t)u']'
		}));
		for (int32_t i = 0; i < charRange->length; i += 2) {
			for (int32_t j = charRange->get(i); j <= charRange->get(i + 1); ++j) {
				(*$nc(XMLChar::CHARS))[j] |= XMLChar::MASK_VALID | XMLChar::MASK_CONTENT;
			}
		}
		for (int32_t i = 0; i < specialChar->length; ++i) {
			$nc(XMLChar::CHARS)->set(specialChar->get(i), (int8_t)((int32_t)($nc(XMLChar::CHARS)->get(specialChar->get(i)) & (uint32_t)~XMLChar::MASK_CONTENT)));
		}
		for (int32_t i = 0; i < spaceChar->length; ++i) {
			(*$nc(XMLChar::CHARS))[spaceChar->get(i)] |= XMLChar::MASK_SPACE;
		}
		for (int32_t i = 0; i < nameStartChar->length; ++i) {
			(*$nc(XMLChar::CHARS))[nameStartChar->get(i)] |= ((XMLChar::MASK_NAME_START | XMLChar::MASK_NAME) | XMLChar::MASK_NCNAME_START) | XMLChar::MASK_NCNAME;
		}
		for (int32_t i = 0; i < letterRange->length; i += 2) {
			for (int32_t j = letterRange->get(i); j <= letterRange->get(i + 1); ++j) {
				(*$nc(XMLChar::CHARS))[j] |= ((XMLChar::MASK_NAME_START | XMLChar::MASK_NAME) | XMLChar::MASK_NCNAME_START) | XMLChar::MASK_NCNAME;
			}
		}
		for (int32_t i = 0; i < letterChar->length; ++i) {
			(*$nc(XMLChar::CHARS))[letterChar->get(i)] |= ((XMLChar::MASK_NAME_START | XMLChar::MASK_NAME) | XMLChar::MASK_NCNAME_START) | XMLChar::MASK_NCNAME;
		}
		for (int32_t i = 0; i < nameChar->length; ++i) {
			(*$nc(XMLChar::CHARS))[nameChar->get(i)] |= XMLChar::MASK_NAME | XMLChar::MASK_NCNAME;
		}
		for (int32_t i = 0; i < digitRange->length; i += 2) {
			for (int32_t j = digitRange->get(i); j <= digitRange->get(i + 1); ++j) {
				(*$nc(XMLChar::CHARS))[j] |= XMLChar::MASK_NAME | XMLChar::MASK_NCNAME;
			}
		}
		for (int32_t i = 0; i < combiningCharRange->length; i += 2) {
			for (int32_t j = combiningCharRange->get(i); j <= combiningCharRange->get(i + 1); ++j) {
				(*$nc(XMLChar::CHARS))[j] |= XMLChar::MASK_NAME | XMLChar::MASK_NCNAME;
			}
		}
		for (int32_t i = 0; i < combiningCharChar->length; ++i) {
			(*$nc(XMLChar::CHARS))[combiningCharChar->get(i)] |= XMLChar::MASK_NAME | XMLChar::MASK_NCNAME;
		}
		for (int32_t i = 0; i < extenderRange->length; i += 2) {
			for (int32_t j = extenderRange->get(i); j <= extenderRange->get(i + 1); ++j) {
				(*$nc(XMLChar::CHARS))[j] |= XMLChar::MASK_NAME | XMLChar::MASK_NCNAME;
			}
		}
		for (int32_t i = 0; i < extenderChar->length; ++i) {
			(*$nc(XMLChar::CHARS))[extenderChar->get(i)] |= XMLChar::MASK_NAME | XMLChar::MASK_NCNAME;
		}
		(*$nc(XMLChar::CHARS))[u':'] &= (uint8_t)~(XMLChar::MASK_NCNAME_START | XMLChar::MASK_NCNAME);
		for (int32_t i = 0; i < pubidChar->length; ++i) {
			(*$nc(XMLChar::CHARS))[pubidChar->get(i)] |= XMLChar::MASK_PUBID;
		}
		for (int32_t i = 0; i < pubidRange->length; i += 2) {
			for (int32_t j = pubidRange->get(i); j <= pubidRange->get(i + 1); ++j) {
				(*$nc(XMLChar::CHARS))[j] |= XMLChar::MASK_PUBID;
			}
		}
	}
}

XMLChar::XMLChar() {
}

$Class* XMLChar::load$($String* name, bool initialize) {
	$loadClass(XMLChar, name, initialize, &_XMLChar_ClassInfo_, clinit$XMLChar, allocate$XMLChar);
	return class$;
}

$Class* XMLChar::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com