#ifndef _com_sun_org_apache_xml_internal_serialize_HTMLdtd_h_
#define _com_sun_org_apache_xml_internal_serialize_HTMLdtd_h_
//$ class com.sun.org.apache.xml.internal.serialize.HTMLdtd
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALLOWED_HEAD")
#undef ALLOWED_HEAD
#pragma push_macro("CLOSE_DD_DT")
#undef CLOSE_DD_DT
#pragma push_macro("CLOSE_P")
#undef CLOSE_P
#pragma push_macro("CLOSE_SELF")
#undef CLOSE_SELF
#pragma push_macro("CLOSE_TABLE")
#undef CLOSE_TABLE
#pragma push_macro("CLOSE_TH_TD")
#undef CLOSE_TH_TD
#pragma push_macro("ELEM_CONTENT")
#undef ELEM_CONTENT
#pragma push_macro("EMPTY")
#undef EMPTY
#pragma push_macro("ENTITIES_RESOURCE")
#undef ENTITIES_RESOURCE
#pragma push_macro("ONLY_OPENING")
#undef ONLY_OPENING
#pragma push_macro("OPT_CLOSING")
#undef OPT_CLOSING
#pragma push_macro("PRESERVE")
#undef PRESERVE

namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

class HTMLdtd : public ::java::lang::Object {
	$class(HTMLdtd, 0, ::java::lang::Object)
public:
	HTMLdtd();
	void init$();
	static int32_t charFromName($String* name);
	static void defineBoolean($String* tagName, $String* attrName);
	static void defineBoolean($String* tagName, $StringArray* attrNames);
	static void defineElement($String* name, int32_t flags);
	static void defineEntity($String* name, char16_t value);
	static $String* fromChar(int32_t value);
	static void initialize();
	static bool isBoolean($String* tagName, $String* attrName);
	static bool isClosing($String* tagName, $String* openTag);
	static bool isElement($String* name, int32_t flag);
	static bool isElementContent($String* tagName);
	static bool isEmptyTag($String* tagName);
	static bool isOnlyOpening($String* tagName);
	static bool isOptionalClosing($String* tagName);
	static bool isPreserveSpace($String* tagName);
	static bool isURI($String* tagName, $String* attrName);
	static $String* HTMLPublicId;
	static $String* HTMLSystemId;
	static $String* XHTMLPublicId;
	static $String* XHTMLSystemId;
	static ::java::util::Map* _byChar;
	static ::java::util::Map* _byName;
	static ::java::util::Map* _boolAttrs;
	static ::java::util::Map* _elemDefs;
	static $String* ENTITIES_RESOURCE;
	static const int32_t ONLY_OPENING = 1;
	static const int32_t ELEM_CONTENT = 2;
	static const int32_t PRESERVE = 4;
	static const int32_t OPT_CLOSING = 8;
	static const int32_t EMPTY = 17; // 16 | ONLY_OPENING
	static const int32_t ALLOWED_HEAD = 32;
	static const int32_t CLOSE_P = 64;
	static const int32_t CLOSE_DD_DT = 128;
	static const int32_t CLOSE_SELF = 256;
	static const int32_t CLOSE_TABLE = 512;
	static const int32_t CLOSE_TH_TD = 16384;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ALLOWED_HEAD")
#pragma pop_macro("CLOSE_DD_DT")
#pragma pop_macro("CLOSE_P")
#pragma pop_macro("CLOSE_SELF")
#pragma pop_macro("CLOSE_TABLE")
#pragma pop_macro("CLOSE_TH_TD")
#pragma pop_macro("ELEM_CONTENT")
#pragma pop_macro("EMPTY")
#pragma pop_macro("ENTITIES_RESOURCE")
#pragma pop_macro("ONLY_OPENING")
#pragma pop_macro("OPT_CLOSING")
#pragma pop_macro("PRESERVE")

#endif // _com_sun_org_apache_xml_internal_serialize_HTMLdtd_h_