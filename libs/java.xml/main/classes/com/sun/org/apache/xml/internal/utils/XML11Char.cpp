#include <com/sun/org/apache/xml/internal/utils/XML11Char.h>

#include <com/sun/org/apache/xml/internal/utils/XMLChar.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef MASK_XML11_CONTENT
#undef MASK_XML11_CONTENT_INTERNAL
#undef MASK_XML11_CONTROL
#undef MASK_XML11_NAME
#undef MASK_XML11_NAME_START
#undef MASK_XML11_NCNAME
#undef MASK_XML11_NCNAME_START
#undef MASK_XML11_SPACE
#undef MASK_XML11_VALID
#undef XML11CHARS

using $XMLChar = ::com::sun::org::apache::xml::internal::utils::XMLChar;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _XML11Char_FieldInfo_[] = {
	{"XML11CHARS", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XML11Char, XML11CHARS)},
	{"MASK_XML11_VALID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XML11Char, MASK_XML11_VALID)},
	{"MASK_XML11_SPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XML11Char, MASK_XML11_SPACE)},
	{"MASK_XML11_NAME_START", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XML11Char, MASK_XML11_NAME_START)},
	{"MASK_XML11_NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XML11Char, MASK_XML11_NAME)},
	{"MASK_XML11_CONTROL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XML11Char, MASK_XML11_CONTROL)},
	{"MASK_XML11_CONTENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XML11Char, MASK_XML11_CONTENT)},
	{"MASK_XML11_NCNAME_START", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XML11Char, MASK_XML11_NCNAME_START)},
	{"MASK_XML11_NCNAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XML11Char, MASK_XML11_NCNAME)},
	{"MASK_XML11_CONTENT_INTERNAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XML11Char, MASK_XML11_CONTENT_INTERNAL)},
	{}
};

$MethodInfo _XML11Char_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XML11Char, init$, void)},
	{"isXML11Content", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XML11Char, isXML11Content, bool, int32_t)},
	{"isXML11InternalEntityContent", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XML11Char, isXML11InternalEntityContent, bool, int32_t)},
	{"isXML11Invalid", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XML11Char, isXML11Invalid, bool, int32_t)},
	{"isXML11NCName", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XML11Char, isXML11NCName, bool, int32_t)},
	{"isXML11NCNameStart", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XML11Char, isXML11NCNameStart, bool, int32_t)},
	{"isXML11Name", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XML11Char, isXML11Name, bool, int32_t)},
	{"isXML11NameHighSurrogate", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XML11Char, isXML11NameHighSurrogate, bool, int32_t)},
	{"isXML11NameStart", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XML11Char, isXML11NameStart, bool, int32_t)},
	{"isXML11Space", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XML11Char, isXML11Space, bool, int32_t)},
	{"isXML11Valid", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XML11Char, isXML11Valid, bool, int32_t)},
	{"isXML11ValidLiteral", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XML11Char, isXML11ValidLiteral, bool, int32_t)},
	{"isXML11ValidNCName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XML11Char, isXML11ValidNCName, bool, $String*)},
	{"isXML11ValidName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XML11Char, isXML11ValidName, bool, $String*)},
	{"isXML11ValidNmtoken", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XML11Char, isXML11ValidNmtoken, bool, $String*)},
	{"isXML11ValidQName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XML11Char, isXML11ValidQName, bool, $String*)},
	{}
};

$ClassInfo _XML11Char_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.XML11Char",
	"java.lang.Object",
	nullptr,
	_XML11Char_FieldInfo_,
	_XML11Char_MethodInfo_
};

$Object* allocate$XML11Char($Class* clazz) {
	return $of($alloc(XML11Char));
}

$bytes* XML11Char::XML11CHARS = nullptr;

void XML11Char::init$() {
}

bool XML11Char::isXML11Space(int32_t c) {
	$init(XML11Char);
	return (c < 0x00010000 && ((int32_t)($nc(XML11Char::XML11CHARS)->get(c) & (uint32_t)XML11Char::MASK_XML11_SPACE)) != 0);
}

bool XML11Char::isXML11Valid(int32_t c) {
	$init(XML11Char);
	return (c < 0x00010000 && ((int32_t)($nc(XML11Char::XML11CHARS)->get(c) & (uint32_t)XML11Char::MASK_XML11_VALID)) != 0) || (0x00010000 <= c && c <= 0x0010FFFF);
}

bool XML11Char::isXML11Invalid(int32_t c) {
	$init(XML11Char);
	return !isXML11Valid(c);
}

bool XML11Char::isXML11ValidLiteral(int32_t c) {
	$init(XML11Char);
	return ((c < 0x00010000 && (((int32_t)($nc(XML11Char::XML11CHARS)->get(c) & (uint32_t)XML11Char::MASK_XML11_VALID)) != 0 && ((int32_t)($nc(XML11Char::XML11CHARS)->get(c) & (uint32_t)XML11Char::MASK_XML11_CONTROL)) == 0)) || (0x00010000 <= c && c <= 0x0010FFFF));
}

bool XML11Char::isXML11Content(int32_t c) {
	$init(XML11Char);
	return (c < 0x00010000 && ((int32_t)($nc(XML11Char::XML11CHARS)->get(c) & (uint32_t)XML11Char::MASK_XML11_CONTENT)) != 0) || (0x00010000 <= c && c <= 0x0010FFFF);
}

bool XML11Char::isXML11InternalEntityContent(int32_t c) {
	$init(XML11Char);
	return (c < 0x00010000 && ((int32_t)($nc(XML11Char::XML11CHARS)->get(c) & (uint32_t)XML11Char::MASK_XML11_CONTENT_INTERNAL)) != 0) || (0x00010000 <= c && c <= 0x0010FFFF);
}

bool XML11Char::isXML11NameStart(int32_t c) {
	$init(XML11Char);
	return (c < 0x00010000 && ((int32_t)($nc(XML11Char::XML11CHARS)->get(c) & (uint32_t)XML11Char::MASK_XML11_NAME_START)) != 0) || (0x00010000 <= c && c < 0x000F0000);
}

bool XML11Char::isXML11Name(int32_t c) {
	$init(XML11Char);
	return (c < 0x00010000 && ((int32_t)($nc(XML11Char::XML11CHARS)->get(c) & (uint32_t)XML11Char::MASK_XML11_NAME)) != 0) || (c >= 0x00010000 && c < 0x000F0000);
}

bool XML11Char::isXML11NCNameStart(int32_t c) {
	$init(XML11Char);
	return (c < 0x00010000 && ((int32_t)($nc(XML11Char::XML11CHARS)->get(c) & (uint32_t)XML11Char::MASK_XML11_NCNAME_START)) != 0) || (0x00010000 <= c && c < 0x000F0000);
}

bool XML11Char::isXML11NCName(int32_t c) {
	$init(XML11Char);
	return (c < 0x00010000 && ((int32_t)($nc(XML11Char::XML11CHARS)->get(c) & (uint32_t)XML11Char::MASK_XML11_NCNAME)) != 0) || (0x00010000 <= c && c < 0x000F0000);
}

bool XML11Char::isXML11NameHighSurrogate(int32_t c) {
	$init(XML11Char);
	return (0x0000D800 <= c && c <= 0x0000DB7F);
}

bool XML11Char::isXML11ValidName($String* name) {
	$init(XML11Char);
	int32_t length = $nc(name)->length();
	if (length == 0) {
		return false;
	}
	int32_t i = 1;
	char16_t ch = name->charAt(0);
	if (!isXML11NameStart(ch)) {
		if (length > 1 && isXML11NameHighSurrogate(ch)) {
			char16_t ch2 = name->charAt(1);
			bool var$0 = !$XMLChar::isLowSurrogate(ch2);
			if (var$0 || !isXML11NameStart($XMLChar::supplemental(ch, ch2))) {
				return false;
			}
			i = 2;
		} else {
			return false;
		}
	}
	while (i < length) {
		ch = name->charAt(i);
		if (!isXML11Name(ch)) {
			if (++i < length && isXML11NameHighSurrogate(ch)) {
				char16_t ch2 = name->charAt(i);
				bool var$1 = !$XMLChar::isLowSurrogate(ch2);
				if (var$1 || !isXML11Name($XMLChar::supplemental(ch, ch2))) {
					return false;
				}
			} else {
				return false;
			}
		}
		++i;
	}
	return true;
}

bool XML11Char::isXML11ValidNCName($String* ncName) {
	$init(XML11Char);
	int32_t length = $nc(ncName)->length();
	if (length == 0) {
		return false;
	}
	int32_t i = 1;
	char16_t ch = ncName->charAt(0);
	if (!isXML11NCNameStart(ch)) {
		if (length > 1 && isXML11NameHighSurrogate(ch)) {
			char16_t ch2 = ncName->charAt(1);
			bool var$0 = !$XMLChar::isLowSurrogate(ch2);
			if (var$0 || !isXML11NCNameStart($XMLChar::supplemental(ch, ch2))) {
				return false;
			}
			i = 2;
		} else {
			return false;
		}
	}
	while (i < length) {
		ch = ncName->charAt(i);
		if (!isXML11NCName(ch)) {
			if (++i < length && isXML11NameHighSurrogate(ch)) {
				char16_t ch2 = ncName->charAt(i);
				bool var$1 = !$XMLChar::isLowSurrogate(ch2);
				if (var$1 || !isXML11NCName($XMLChar::supplemental(ch, ch2))) {
					return false;
				}
			} else {
				return false;
			}
		}
		++i;
	}
	return true;
}

bool XML11Char::isXML11ValidNmtoken($String* nmtoken) {
	$init(XML11Char);
	int32_t length = $nc(nmtoken)->length();
	if (length == 0) {
		return false;
	}
	for (int32_t i = 0; i < length; ++i) {
		char16_t ch = nmtoken->charAt(i);
		if (!isXML11Name(ch)) {
			if (++i < length && isXML11NameHighSurrogate(ch)) {
				char16_t ch2 = nmtoken->charAt(i);
				bool var$0 = !$XMLChar::isLowSurrogate(ch2);
				if (var$0 || !isXML11Name($XMLChar::supplemental(ch, ch2))) {
					return false;
				}
			} else {
				return false;
			}
		}
	}
	return true;
}

bool XML11Char::isXML11ValidQName($String* str) {
	$init(XML11Char);
	$useLocalCurrentObjectStackCache();
	int32_t colon = $nc(str)->indexOf((int32_t)u':');
	if (colon == 0 || colon == str->length() - 1) {
		return false;
	}
	if (colon > 0) {
		$var($String, prefix, str->substring(0, colon));
		$var($String, localPart, str->substring(colon + 1));
		bool var$0 = isXML11ValidNCName(prefix);
		return var$0 && isXML11ValidNCName(localPart);
	} else {
		return isXML11ValidNCName(str);
	}
}

void clinit$XML11Char($Class* class$) {
	$assignStatic(XML11Char::XML11CHARS, $new($bytes, 1 << 16));
	{
		$Arrays::fill(XML11Char::XML11CHARS, 1, 9, (int8_t)17);
		$nc(XML11Char::XML11CHARS)->set(9, (int8_t)35);
		$nc(XML11Char::XML11CHARS)->set(10, (int8_t)3);
		$Arrays::fill(XML11Char::XML11CHARS, 11, 13, (int8_t)17);
		$nc(XML11Char::XML11CHARS)->set(13, (int8_t)3);
		$Arrays::fill(XML11Char::XML11CHARS, 14, 32, (int8_t)17);
		$nc(XML11Char::XML11CHARS)->set(32, (int8_t)35);
		$Arrays::fill(XML11Char::XML11CHARS, 33, 38, (int8_t)33);
		$nc(XML11Char::XML11CHARS)->set(38, (int8_t)1);
		$Arrays::fill(XML11Char::XML11CHARS, 39, 45, (int8_t)33);
		$Arrays::fill(XML11Char::XML11CHARS, 45, 47, (int8_t)-87);
		$nc(XML11Char::XML11CHARS)->set(47, (int8_t)33);
		$Arrays::fill(XML11Char::XML11CHARS, 48, 58, (int8_t)-87);
		$nc(XML11Char::XML11CHARS)->set(58, (int8_t)45);
		$nc(XML11Char::XML11CHARS)->set(59, (int8_t)33);
		$nc(XML11Char::XML11CHARS)->set(60, (int8_t)1);
		$Arrays::fill(XML11Char::XML11CHARS, 61, 65, (int8_t)33);
		$Arrays::fill(XML11Char::XML11CHARS, 65, 91, (int8_t)-19);
		$Arrays::fill(XML11Char::XML11CHARS, 91, 93, (int8_t)33);
		$nc(XML11Char::XML11CHARS)->set(93, (int8_t)1);
		$nc(XML11Char::XML11CHARS)->set(94, (int8_t)33);
		$nc(XML11Char::XML11CHARS)->set(95, (int8_t)-19);
		$nc(XML11Char::XML11CHARS)->set(96, (int8_t)33);
		$Arrays::fill(XML11Char::XML11CHARS, 97, 123, (int8_t)-19);
		$Arrays::fill(XML11Char::XML11CHARS, 123, 127, (int8_t)33);
		$Arrays::fill(XML11Char::XML11CHARS, 127, 133, (int8_t)17);
		$nc(XML11Char::XML11CHARS)->set(133, (int8_t)35);
		$Arrays::fill(XML11Char::XML11CHARS, 134, 160, (int8_t)17);
		$Arrays::fill(XML11Char::XML11CHARS, 160, 183, (int8_t)33);
		$nc(XML11Char::XML11CHARS)->set(183, (int8_t)-87);
		$Arrays::fill(XML11Char::XML11CHARS, 184, 192, (int8_t)33);
		$Arrays::fill(XML11Char::XML11CHARS, 192, 215, (int8_t)-19);
		$nc(XML11Char::XML11CHARS)->set(215, (int8_t)33);
		$Arrays::fill(XML11Char::XML11CHARS, 216, 247, (int8_t)-19);
		$nc(XML11Char::XML11CHARS)->set(247, (int8_t)33);
		$Arrays::fill(XML11Char::XML11CHARS, 248, 768, (int8_t)-19);
		$Arrays::fill(XML11Char::XML11CHARS, 768, 880, (int8_t)-87);
		$Arrays::fill(XML11Char::XML11CHARS, 880, 894, (int8_t)-19);
		$nc(XML11Char::XML11CHARS)->set(894, (int8_t)33);
		$Arrays::fill(XML11Char::XML11CHARS, 895, 8192, (int8_t)-19);
		$Arrays::fill(XML11Char::XML11CHARS, 8192, 8204, (int8_t)33);
		$Arrays::fill(XML11Char::XML11CHARS, 8204, 8206, (int8_t)-19);
		$Arrays::fill(XML11Char::XML11CHARS, 8206, 8232, (int8_t)33);
		$nc(XML11Char::XML11CHARS)->set(8232, (int8_t)35);
		$Arrays::fill(XML11Char::XML11CHARS, 8233, 8255, (int8_t)33);
		$Arrays::fill(XML11Char::XML11CHARS, 8255, 8257, (int8_t)-87);
		$Arrays::fill(XML11Char::XML11CHARS, 8257, 8304, (int8_t)33);
		$Arrays::fill(XML11Char::XML11CHARS, 8304, 8592, (int8_t)-19);
		$Arrays::fill(XML11Char::XML11CHARS, 8592, 11264, (int8_t)33);
		$Arrays::fill(XML11Char::XML11CHARS, 11264, 12272, (int8_t)-19);
		$Arrays::fill(XML11Char::XML11CHARS, 12272, 12289, (int8_t)33);
		$Arrays::fill(XML11Char::XML11CHARS, 12289, 0x0000D800, (int8_t)-19);
		$Arrays::fill(XML11Char::XML11CHARS, 0x0000E000, 0x0000F900, (int8_t)33);
		$Arrays::fill(XML11Char::XML11CHARS, 0x0000F900, 0x0000FDD0, (int8_t)-19);
		$Arrays::fill(XML11Char::XML11CHARS, 0x0000FDD0, 0x0000FDF0, (int8_t)33);
		$Arrays::fill(XML11Char::XML11CHARS, 0x0000FDF0, 0x0000FFFE, (int8_t)-19);
	}
}

XML11Char::XML11Char() {
}

$Class* XML11Char::load$($String* name, bool initialize) {
	$loadClass(XML11Char, name, initialize, &_XML11Char_ClassInfo_, clinit$XML11Char, allocate$XML11Char);
	return class$;
}

$Class* XML11Char::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com