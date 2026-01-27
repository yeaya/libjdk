#ifndef _com_sun_org_apache_xml_internal_serializer_CharInfo_h_
#define _com_sun_org_apache_xml_internal_serializer_CharInfo_h_
//$ class com.sun.org.apache.xml.internal.serializer.CharInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ASCII_MAX")
#undef ASCII_MAX
#pragma push_macro("HTML_ENTITIES_RESOURCE")
#undef HTML_ENTITIES_RESOURCE
#pragma push_macro("LOW_ORDER_BITMASK")
#undef LOW_ORDER_BITMASK
#pragma push_macro("SHIFT_PER_WORD")
#undef SHIFT_PER_WORD
#pragma push_macro("S_CARRIAGERETURN")
#undef S_CARRIAGERETURN
#pragma push_macro("S_HORIZONAL_TAB")
#undef S_HORIZONAL_TAB
#pragma push_macro("S_LINEFEED")
#undef S_LINEFEED
#pragma push_macro("XML_ENTITIES_RESOURCE")
#undef XML_ENTITIES_RESOURCE

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
						namespace serializer {

class CharInfo : public ::java::lang::Object {
	$class(CharInfo, 0, ::java::lang::Object)
public:
	CharInfo();
	void init$($String* entitiesResource, $String* method);
	void init$($String* entitiesResource, $String* method, bool internal);
	static int32_t arrayIndex(int32_t i);
	static int32_t bit(int32_t i);
	$ints* createEmptySetOfIntegers(int32_t max);
	void defineChar2StringMapping($String* outputString, char16_t inputChar);
	void defineEntity($String* name, char16_t value);
	bool extraEntity(int32_t entityValue);
	bool get(int32_t i);
	static ::com::sun::org::apache::xml::internal::serializer::CharInfo* getCharInfo($String* entitiesFileName, $String* method);
	static ::com::sun::org::apache::xml::internal::serializer::CharInfo* getCharInfoInternal($String* entitiesFileName, $String* method);
	$String* getOutputStringForChar(char16_t value);
	bool isSpecialAttrChar(int32_t value);
	bool isSpecialTextChar(int32_t value);
	bool isTextASCIIClean(int32_t value);
	void set(int32_t i);
	void setASCIIclean(int32_t j);
	void setASCIIdirty(int32_t j);
	::java::util::Map* m_charToString = nullptr;
	static $String* HTML_ENTITIES_RESOURCE;
	static $String* XML_ENTITIES_RESOURCE;
	static const char16_t S_HORIZONAL_TAB = 9;
	static const char16_t S_LINEFEED = 10;
	static const char16_t S_CARRIAGERETURN = 13;
	bool onlyQuotAmpLtGt = false;
	static const int32_t ASCII_MAX = 128;
	$booleans* isSpecialAttrASCII = nullptr;
	$booleans* isSpecialTextASCII = nullptr;
	$booleans* isCleanTextASCII = nullptr;
	$ints* array_of_bits = nullptr;
	static const int32_t SHIFT_PER_WORD = 5;
	static const int32_t LOW_ORDER_BITMASK = 31;
	int32_t firstWordNotUsed = 0;
	static ::java::util::Map* m_getCharInfoCache;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ASCII_MAX")
#pragma pop_macro("HTML_ENTITIES_RESOURCE")
#pragma pop_macro("LOW_ORDER_BITMASK")
#pragma pop_macro("SHIFT_PER_WORD")
#pragma pop_macro("S_CARRIAGERETURN")
#pragma pop_macro("S_HORIZONAL_TAB")
#pragma pop_macro("S_LINEFEED")
#pragma pop_macro("XML_ENTITIES_RESOURCE")

#endif // _com_sun_org_apache_xml_internal_serializer_CharInfo_h_