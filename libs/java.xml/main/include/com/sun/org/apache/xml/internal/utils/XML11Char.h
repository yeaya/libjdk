#ifndef _com_sun_org_apache_xml_internal_utils_XML11Char_h_
#define _com_sun_org_apache_xml_internal_utils_XML11Char_h_
//$ class com.sun.org.apache.xml.internal.utils.XML11Char
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MASK_XML11_CONTENT")
#undef MASK_XML11_CONTENT
#pragma push_macro("MASK_XML11_CONTENT_INTERNAL")
#undef MASK_XML11_CONTENT_INTERNAL
#pragma push_macro("MASK_XML11_CONTROL")
#undef MASK_XML11_CONTROL
#pragma push_macro("MASK_XML11_NAME")
#undef MASK_XML11_NAME
#pragma push_macro("MASK_XML11_NAME_START")
#undef MASK_XML11_NAME_START
#pragma push_macro("MASK_XML11_NCNAME")
#undef MASK_XML11_NCNAME
#pragma push_macro("MASK_XML11_NCNAME_START")
#undef MASK_XML11_NCNAME_START
#pragma push_macro("MASK_XML11_SPACE")
#undef MASK_XML11_SPACE
#pragma push_macro("MASK_XML11_VALID")
#undef MASK_XML11_VALID
#pragma push_macro("XML11CHARS")
#undef XML11CHARS

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $import XML11Char : public ::java::lang::Object {
	$class(XML11Char, 0, ::java::lang::Object)
public:
	XML11Char();
	void init$();
	static bool isXML11Content(int32_t c);
	static bool isXML11InternalEntityContent(int32_t c);
	static bool isXML11Invalid(int32_t c);
	static bool isXML11NCName(int32_t c);
	static bool isXML11NCNameStart(int32_t c);
	static bool isXML11Name(int32_t c);
	static bool isXML11NameHighSurrogate(int32_t c);
	static bool isXML11NameStart(int32_t c);
	static bool isXML11Space(int32_t c);
	static bool isXML11Valid(int32_t c);
	static bool isXML11ValidLiteral(int32_t c);
	static bool isXML11ValidNCName($String* ncName);
	static bool isXML11ValidName($String* name);
	static bool isXML11ValidNmtoken($String* nmtoken);
	static bool isXML11ValidQName($String* str);
	static $bytes* XML11CHARS;
	static const int32_t MASK_XML11_VALID = 1;
	static const int32_t MASK_XML11_SPACE = 2;
	static const int32_t MASK_XML11_NAME_START = 4;
	static const int32_t MASK_XML11_NAME = 8;
	static const int32_t MASK_XML11_CONTROL = 16;
	static const int32_t MASK_XML11_CONTENT = 32;
	static const int32_t MASK_XML11_NCNAME_START = 64;
	static const int32_t MASK_XML11_NCNAME = 128;
	static const int32_t MASK_XML11_CONTENT_INTERNAL = 48; // MASK_XML11_CONTROL | MASK_XML11_CONTENT
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("MASK_XML11_CONTENT")
#pragma pop_macro("MASK_XML11_CONTENT_INTERNAL")
#pragma pop_macro("MASK_XML11_CONTROL")
#pragma pop_macro("MASK_XML11_NAME")
#pragma pop_macro("MASK_XML11_NAME_START")
#pragma pop_macro("MASK_XML11_NCNAME")
#pragma pop_macro("MASK_XML11_NCNAME_START")
#pragma pop_macro("MASK_XML11_SPACE")
#pragma pop_macro("MASK_XML11_VALID")
#pragma pop_macro("XML11CHARS")

#endif // _com_sun_org_apache_xml_internal_utils_XML11Char_h_