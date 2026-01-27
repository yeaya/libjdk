#ifndef _com_sun_org_apache_xerces_internal_util_XMLChar_h_
#define _com_sun_org_apache_xerces_internal_util_XMLChar_h_
//$ class com.sun.org.apache.xerces.internal.util.XMLChar
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHARS")
#undef CHARS
#pragma push_macro("MASK_CONTENT")
#undef MASK_CONTENT
#pragma push_macro("MASK_NAME")
#undef MASK_NAME
#pragma push_macro("MASK_NAME_START")
#undef MASK_NAME_START
#pragma push_macro("MASK_NCNAME")
#undef MASK_NCNAME
#pragma push_macro("MASK_NCNAME_START")
#undef MASK_NCNAME_START
#pragma push_macro("MASK_PUBID")
#undef MASK_PUBID
#pragma push_macro("MASK_SPACE")
#undef MASK_SPACE
#pragma push_macro("MASK_VALID")
#undef MASK_VALID

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class XMLChar : public ::java::lang::Object {
	$class(XMLChar, 0, ::java::lang::Object)
public:
	XMLChar();
	void init$();
	static char16_t highSurrogate(int32_t c);
	static bool isContent(int32_t c);
	static bool isHighSurrogate(int32_t c);
	static bool isInvalid(int32_t c);
	static bool isLowSurrogate(int32_t c);
	static bool isMarkup(int32_t c);
	static bool isNCName(int32_t c);
	static bool isNCNameStart(int32_t c);
	static bool isName(int32_t c);
	static bool isNameStart(int32_t c);
	static bool isPubid(int32_t c);
	static bool isSpace(int32_t c);
	static bool isSupplemental(int32_t c);
	static bool isValid(int32_t c);
	static bool isValidIANAEncoding($String* ianaEncoding);
	static bool isValidJavaEncoding($String* javaEncoding);
	static bool isValidNCName($String* ncName);
	static bool isValidName($String* name);
	static bool isValidNmtoken($String* nmtoken);
	static char16_t lowSurrogate(int32_t c);
	static int32_t supplemental(char16_t h, char16_t l);
	static $String* trim($String* value);
	static $bytes* CHARS;
	static const int32_t MASK_VALID = 1;
	static const int32_t MASK_SPACE = 2;
	static const int32_t MASK_NAME_START = 4;
	static const int32_t MASK_NAME = 8;
	static const int32_t MASK_PUBID = 16;
	static const int32_t MASK_CONTENT = 32;
	static const int32_t MASK_NCNAME_START = 64;
	static const int32_t MASK_NCNAME = 128;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CHARS")
#pragma pop_macro("MASK_CONTENT")
#pragma pop_macro("MASK_NAME")
#pragma pop_macro("MASK_NAME_START")
#pragma pop_macro("MASK_NCNAME")
#pragma pop_macro("MASK_NCNAME_START")
#pragma pop_macro("MASK_PUBID")
#pragma pop_macro("MASK_SPACE")
#pragma pop_macro("MASK_VALID")

#endif // _com_sun_org_apache_xerces_internal_util_XMLChar_h_