#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>

#include <java/util/Arrays.h>
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
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

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
	{"lowSurrogate", "(I)C", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, lowSurrogate, char16_t, int32_t)},
	{"supplemental", "(CC)I", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, supplemental, int32_t, char16_t, char16_t)},
	{"trim", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLChar, trim, $String*, $String*)},
	{}
};

$ClassInfo _XMLChar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.XMLChar",
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
	return c <= 32 && ((int32_t)($nc(XMLChar::CHARS)->get(c) & (uint32_t)XMLChar::MASK_SPACE)) != 0;
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
	int32_t length = $nc(name)->length();
	if (length == 0) {
		return false;
	}
	char16_t ch = name->charAt(0);
	if (!isNameStart(ch)) {
		return false;
	}
	for (int32_t i = 1; i < length; ++i) {
		ch = name->charAt(i);
		if (!isName(ch)) {
			return false;
		}
	}
	return true;
}

bool XMLChar::isValidNCName($String* ncName) {
	$init(XMLChar);
	int32_t length = $nc(ncName)->length();
	if (length == 0) {
		return false;
	}
	char16_t ch = ncName->charAt(0);
	if (!isNCNameStart(ch)) {
		return false;
	}
	for (int32_t i = 1; i < length; ++i) {
		ch = ncName->charAt(i);
		if (!isNCName(ch)) {
			return false;
		}
	}
	return true;
}

bool XMLChar::isValidNmtoken($String* nmtoken) {
	$init(XMLChar);
	int32_t length = $nc(nmtoken)->length();
	if (length == 0) {
		return false;
	}
	for (int32_t i = 0; i < length; ++i) {
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

$String* XMLChar::trim($String* value) {
	$init(XMLChar);
	int32_t start = 0;
	int32_t end = 0;
	int32_t lengthMinusOne = $nc(value)->length() - 1;
	for (start = 0; start <= lengthMinusOne; ++start) {
		if (!isSpace(value->charAt(start))) {
			break;
		}
	}
	for (end = lengthMinusOne; end >= start; --end) {
		if (!isSpace(value->charAt(end))) {
			break;
		}
	}
	if (start == 0 && end == lengthMinusOne) {
		return value;
	}
	if (start > lengthMinusOne) {
		return ""_s;
	}
	return value->substring(start, end + 1);
}

void clinit$XMLChar($Class* class$) {
	$assignStatic(XMLChar::CHARS, $new($bytes, 1 << 16));
	{
		$nc(XMLChar::CHARS)->set(9, (int8_t)35);
		$nc(XMLChar::CHARS)->set(10, (int8_t)19);
		$nc(XMLChar::CHARS)->set(13, (int8_t)19);
		$nc(XMLChar::CHARS)->set(32, (int8_t)51);
		$nc(XMLChar::CHARS)->set(33, (int8_t)49);
		$nc(XMLChar::CHARS)->set(34, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 35, 38, (int8_t)49);
		$nc(XMLChar::CHARS)->set(38, (int8_t)1);
		$Arrays::fill(XMLChar::CHARS, 39, 45, (int8_t)49);
		$Arrays::fill(XMLChar::CHARS, 45, 47, (int8_t)-71);
		$nc(XMLChar::CHARS)->set(47, (int8_t)49);
		$Arrays::fill(XMLChar::CHARS, 48, 58, (int8_t)-71);
		$nc(XMLChar::CHARS)->set(58, (int8_t)61);
		$nc(XMLChar::CHARS)->set(59, (int8_t)49);
		$nc(XMLChar::CHARS)->set(60, (int8_t)1);
		$nc(XMLChar::CHARS)->set(61, (int8_t)49);
		$nc(XMLChar::CHARS)->set(62, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 63, 65, (int8_t)49);
		$Arrays::fill(XMLChar::CHARS, 65, 91, (int8_t)-3);
		$Arrays::fill(XMLChar::CHARS, 91, 93, (int8_t)33);
		$nc(XMLChar::CHARS)->set(93, (int8_t)1);
		$nc(XMLChar::CHARS)->set(94, (int8_t)33);
		$nc(XMLChar::CHARS)->set(95, (int8_t)-3);
		$nc(XMLChar::CHARS)->set(96, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 97, 123, (int8_t)-3);
		$Arrays::fill(XMLChar::CHARS, 123, 183, (int8_t)33);
		$nc(XMLChar::CHARS)->set(183, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 184, 192, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 192, 215, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(215, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 216, 247, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(247, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 248, 306, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 306, 308, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 308, 319, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 319, 321, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 321, 329, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(329, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 330, 383, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(383, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 384, 452, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 452, 461, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 461, 497, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 497, 500, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 500, 502, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 502, 506, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 506, 536, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 536, 592, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 592, 681, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 681, 699, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 699, 706, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 706, 720, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 720, 722, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 722, 768, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 768, 838, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 838, 864, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 864, 866, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 866, 902, (int8_t)33);
		$nc(XMLChar::CHARS)->set(902, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(903, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 904, 907, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(907, (int8_t)33);
		$nc(XMLChar::CHARS)->set(908, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(909, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 910, 930, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(930, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 931, 975, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(975, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 976, 983, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 983, 986, (int8_t)33);
		$nc(XMLChar::CHARS)->set(986, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(987, (int8_t)33);
		$nc(XMLChar::CHARS)->set(988, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(989, (int8_t)33);
		$nc(XMLChar::CHARS)->set(990, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(991, (int8_t)33);
		$nc(XMLChar::CHARS)->set(992, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(993, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 994, 1012, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1012, 1025, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1025, 1037, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(1037, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1038, 1104, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(1104, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1105, 1117, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(1117, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1118, 1154, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(1154, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1155, 1159, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 1159, 1168, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1168, 1221, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1221, 1223, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1223, 1225, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1225, 1227, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1227, 1229, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1229, 1232, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1232, 1260, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1260, 1262, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1262, 1270, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1270, 1272, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1272, 1274, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1274, 1329, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1329, 1367, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1367, 1369, (int8_t)33);
		$nc(XMLChar::CHARS)->set(1369, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1370, 1377, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1377, 1415, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1415, 1425, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1425, 1442, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(1442, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1443, 1466, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(1466, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1467, 1470, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(1470, (int8_t)33);
		$nc(XMLChar::CHARS)->set(1471, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(1472, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1473, 1475, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(1475, (int8_t)33);
		$nc(XMLChar::CHARS)->set(1476, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 1477, 1488, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1488, 1515, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1515, 1520, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1520, 1523, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1523, 1569, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1569, 1595, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1595, 1600, (int8_t)33);
		$nc(XMLChar::CHARS)->set(1600, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 1601, 1611, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1611, 1619, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 1619, 1632, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1632, 1642, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 1642, 1648, (int8_t)33);
		$nc(XMLChar::CHARS)->set(1648, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 1649, 1720, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1720, 1722, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1722, 1727, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(1727, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1728, 1743, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(1743, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1744, 1748, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(1748, (int8_t)33);
		$nc(XMLChar::CHARS)->set(1749, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1750, 1765, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 1765, 1767, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 1767, 1769, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(1769, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1770, 1774, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 1774, 1776, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 1776, 1786, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 1786, 2305, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2305, 2308, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(2308, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2309, 2362, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2362, 2364, (int8_t)33);
		$nc(XMLChar::CHARS)->set(2364, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(2365, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2366, 2382, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2382, 2385, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2385, 2389, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2389, 2392, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2392, 2402, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2402, 2404, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2404, 2406, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2406, 2416, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2416, 2433, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2433, 2436, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(2436, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2437, 2445, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2445, 2447, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2447, 2449, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2449, 2451, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2451, 2473, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2473, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2474, 2481, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2481, (int8_t)33);
		$nc(XMLChar::CHARS)->set(2482, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2483, 2486, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2486, 2490, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2490, 2492, (int8_t)33);
		$nc(XMLChar::CHARS)->set(2492, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(2493, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2494, 2501, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2501, 2503, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2503, 2505, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2505, 2507, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2507, 2510, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2510, 2519, (int8_t)33);
		$nc(XMLChar::CHARS)->set(2519, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2520, 2524, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2524, 2526, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2526, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2527, 2530, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2530, 2532, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2532, 2534, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2534, 2544, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2544, 2546, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2546, 2562, (int8_t)33);
		$nc(XMLChar::CHARS)->set(2562, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2563, 2565, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2565, 2571, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2571, 2575, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2575, 2577, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2577, 2579, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2579, 2601, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2601, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2602, 2609, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2609, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2610, 2612, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2612, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2613, 2615, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2615, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2616, 2618, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2618, 2620, (int8_t)33);
		$nc(XMLChar::CHARS)->set(2620, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(2621, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2622, 2627, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2627, 2631, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2631, 2633, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2633, 2635, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2635, 2638, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2638, 2649, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2649, 2653, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2653, (int8_t)33);
		$nc(XMLChar::CHARS)->set(2654, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2655, 2662, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2662, 2674, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2674, 2677, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2677, 2689, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2689, 2692, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(2692, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2693, 2700, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2700, (int8_t)33);
		$nc(XMLChar::CHARS)->set(2701, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2702, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2703, 2706, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2706, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2707, 2729, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2729, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2730, 2737, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2737, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2738, 2740, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2740, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2741, 2746, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2746, 2748, (int8_t)33);
		$nc(XMLChar::CHARS)->set(2748, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(2749, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2750, 2758, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(2758, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2759, 2762, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(2762, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2763, 2766, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2766, 2784, (int8_t)33);
		$nc(XMLChar::CHARS)->set(2784, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2785, 2790, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2790, 2800, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2800, 2817, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2817, 2820, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(2820, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2821, 2829, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2829, 2831, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2831, 2833, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2833, 2835, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2835, 2857, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2857, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2858, 2865, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2865, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2866, 2868, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2868, 2870, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2870, 2874, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2874, 2876, (int8_t)33);
		$nc(XMLChar::CHARS)->set(2876, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(2877, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2878, 2884, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2884, 2887, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2887, 2889, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2889, 2891, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2891, 2894, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2894, 2902, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2902, 2904, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2904, 2908, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2908, 2910, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2910, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2911, 2914, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2914, 2918, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2918, 2928, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 2928, 2946, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2946, 2948, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(2948, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2949, 2955, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2955, 2958, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2958, 2961, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2961, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2962, 2966, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2966, 2969, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2969, 2971, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2971, (int8_t)33);
		$nc(XMLChar::CHARS)->set(2972, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2973, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2974, 2976, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2976, 2979, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2979, 2981, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2981, 2984, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2984, 2987, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 2987, 2990, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2990, 2998, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(2998, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 2999, 3002, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 3002, 3006, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3006, 3011, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3011, 3014, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3014, 3017, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3017, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3018, 3022, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3022, 3031, (int8_t)33);
		$nc(XMLChar::CHARS)->set(3031, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3032, 3047, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3047, 3056, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3056, 3073, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3073, 3076, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3076, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3077, 3085, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3085, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3086, 3089, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3089, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3090, 3113, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3113, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3114, 3124, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3124, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3125, 3130, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 3130, 3134, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3134, 3141, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3141, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3142, 3145, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3145, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3146, 3150, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3150, 3157, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3157, 3159, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3159, 3168, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3168, 3170, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 3170, 3174, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3174, 3184, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3184, 3202, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3202, 3204, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3204, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3205, 3213, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3213, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3214, 3217, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3217, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3218, 3241, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3241, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3242, 3252, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3252, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3253, 3258, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 3258, 3262, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3262, 3269, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3269, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3270, 3273, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3273, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3274, 3278, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3278, 3285, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3285, 3287, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3287, 3294, (int8_t)33);
		$nc(XMLChar::CHARS)->set(3294, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3295, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3296, 3298, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 3298, 3302, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3302, 3312, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3312, 3330, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3330, 3332, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3332, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3333, 3341, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3341, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3342, 3345, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3345, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3346, 3369, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3369, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3370, 3386, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 3386, 3390, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3390, 3396, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3396, 3398, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3398, 3401, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3401, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3402, 3406, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3406, 3415, (int8_t)33);
		$nc(XMLChar::CHARS)->set(3415, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3416, 3424, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3424, 3426, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 3426, 3430, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3430, 3440, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3440, 3585, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3585, 3631, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3631, (int8_t)33);
		$nc(XMLChar::CHARS)->set(3632, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3633, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3634, 3636, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 3636, 3643, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3643, 3648, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3648, 3654, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 3654, 3663, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3663, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3664, 3674, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3674, 3713, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3713, 3715, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3715, (int8_t)33);
		$nc(XMLChar::CHARS)->set(3716, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 3717, 3719, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3719, 3721, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3721, (int8_t)33);
		$nc(XMLChar::CHARS)->set(3722, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 3723, 3725, (int8_t)33);
		$nc(XMLChar::CHARS)->set(3725, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 3726, 3732, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3732, 3736, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3736, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3737, 3744, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3744, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3745, 3748, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3748, (int8_t)33);
		$nc(XMLChar::CHARS)->set(3749, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3750, (int8_t)33);
		$nc(XMLChar::CHARS)->set(3751, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 3752, 3754, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3754, 3756, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3756, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3757, 3759, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3759, (int8_t)33);
		$nc(XMLChar::CHARS)->set(3760, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3761, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3762, 3764, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 3764, 3770, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3770, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3771, 3773, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3773, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 3774, 3776, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3776, 3781, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3781, (int8_t)33);
		$nc(XMLChar::CHARS)->set(3782, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3783, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3784, 3790, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3790, 3792, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3792, 3802, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3802, 3864, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3864, 3866, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3866, 3872, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3872, 3882, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3882, 3893, (int8_t)33);
		$nc(XMLChar::CHARS)->set(3893, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3894, (int8_t)33);
		$nc(XMLChar::CHARS)->set(3895, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3896, (int8_t)33);
		$nc(XMLChar::CHARS)->set(3897, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3898, 3902, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3902, 3904, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3904, 3912, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(3912, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3913, 3946, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 3946, 3953, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3953, 3973, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3973, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3974, 3980, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 3980, 3984, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3984, 3990, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3990, (int8_t)33);
		$nc(XMLChar::CHARS)->set(3991, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(3992, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 3993, 4014, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 4014, 4017, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 4017, 4024, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(4024, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4025, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 4026, 4256, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 4256, 4294, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4294, 4304, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 4304, 4343, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4343, 4352, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4352, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(4353, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 4354, 4356, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(4356, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 4357, 4360, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(4360, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4361, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(4362, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 4363, 4365, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(4365, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 4366, 4371, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4371, 4412, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4412, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(4413, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4414, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(4415, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4416, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4417, 4428, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4428, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(4429, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4430, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(4431, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4432, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4433, 4436, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 4436, 4438, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4438, 4441, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4441, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4442, 4447, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 4447, 4450, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(4450, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4451, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(4452, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4453, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(4454, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4455, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(4456, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4457, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4458, 4461, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 4461, 4463, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4463, 4466, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 4466, 4468, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(4468, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4469, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4470, 4510, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4510, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4511, 4520, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4520, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4521, 4523, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4523, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4524, 4526, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 4526, 4528, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4528, 4535, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 4535, 4537, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(4537, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4538, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(4539, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 4540, 4547, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4547, 4587, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4587, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4588, 4592, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4592, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4593, 4601, (int8_t)33);
		$nc(XMLChar::CHARS)->set(4601, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 4602, 7680, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 7680, 7836, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 7836, 7840, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 7840, 7930, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 7930, 7936, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 7936, 7958, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 7958, 7960, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 7960, 7966, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 7966, 7968, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 7968, 8006, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 8006, 8008, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 8008, 8014, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 8014, 8016, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 8016, 8024, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(8024, (int8_t)33);
		$nc(XMLChar::CHARS)->set(8025, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(8026, (int8_t)33);
		$nc(XMLChar::CHARS)->set(8027, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(8028, (int8_t)33);
		$nc(XMLChar::CHARS)->set(8029, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(8030, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 8031, 8062, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 8062, 8064, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 8064, 8117, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(8117, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 8118, 8125, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(8125, (int8_t)33);
		$nc(XMLChar::CHARS)->set(8126, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 8127, 8130, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 8130, 8133, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(8133, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 8134, 8141, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 8141, 8144, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 8144, 8148, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 8148, 8150, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 8150, 8156, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 8156, 8160, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 8160, 8173, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 8173, 8178, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 8178, 8181, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(8181, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 8182, 8189, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 8189, 8400, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 8400, 8413, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 8413, 8417, (int8_t)33);
		$nc(XMLChar::CHARS)->set(8417, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 8418, 8486, (int8_t)33);
		$nc(XMLChar::CHARS)->set(8486, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 8487, 8490, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 8490, 8492, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 8492, 8494, (int8_t)33);
		$nc(XMLChar::CHARS)->set(8494, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 8495, 8576, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 8576, 8579, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 8579, 12293, (int8_t)33);
		$nc(XMLChar::CHARS)->set(12293, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(12294, (int8_t)33);
		$nc(XMLChar::CHARS)->set(12295, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 12296, 12321, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 12321, 12330, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 12330, 12336, (int8_t)-87);
		$nc(XMLChar::CHARS)->set(12336, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 12337, 12342, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 12342, 12353, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 12353, 12437, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 12437, 12441, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 12441, 12443, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 12443, 12445, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 12445, 12447, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 12447, 12449, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 12449, 12539, (int8_t)-19);
		$nc(XMLChar::CHARS)->set(12539, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 12540, 12543, (int8_t)-87);
		$Arrays::fill(XMLChar::CHARS, 12543, 12549, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 12549, 12589, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 12589, 19968, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 19968, 0x00009FA6, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 0x00009FA6, 0x0000AC00, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 0x0000AC00, 0x0000D7A4, (int8_t)-19);
		$Arrays::fill(XMLChar::CHARS, 0x0000D7A4, 0x0000D800, (int8_t)33);
		$Arrays::fill(XMLChar::CHARS, 0x0000E000, 0x0000FFFE, (int8_t)33);
	}
}

XMLChar::XMLChar() {
}

$Class* XMLChar::load$($String* name, bool initialize) {
	$loadClass(XMLChar, name, initialize, &_XMLChar_ClassInfo_, clinit$XMLChar, allocate$XMLChar);
	return class$;
}

$Class* XMLChar::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com