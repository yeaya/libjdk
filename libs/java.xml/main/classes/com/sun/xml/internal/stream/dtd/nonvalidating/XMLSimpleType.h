#ifndef _com_sun_xml_internal_stream_dtd_nonvalidating_XMLSimpleType_h_
#define _com_sun_xml_internal_stream_dtd_nonvalidating_XMLSimpleType_h_
//$ class com.sun.xml.internal.stream.dtd.nonvalidating.XMLSimpleType
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_TYPE_DEFAULT")
#undef DEFAULT_TYPE_DEFAULT
#pragma push_macro("DEFAULT_TYPE_FIXED")
#undef DEFAULT_TYPE_FIXED
#pragma push_macro("DEFAULT_TYPE_IMPLIED")
#undef DEFAULT_TYPE_IMPLIED
#pragma push_macro("DEFAULT_TYPE_REQUIRED")
#undef DEFAULT_TYPE_REQUIRED
#pragma push_macro("TYPE_CDATA")
#undef TYPE_CDATA
#pragma push_macro("TYPE_ENTITY")
#undef TYPE_ENTITY
#pragma push_macro("TYPE_ENUMERATION")
#undef TYPE_ENUMERATION
#pragma push_macro("TYPE_ID")
#undef TYPE_ID
#pragma push_macro("TYPE_IDREF")
#undef TYPE_IDREF
#pragma push_macro("TYPE_NAMED")
#undef TYPE_NAMED
#pragma push_macro("TYPE_NMTOKEN")
#undef TYPE_NMTOKEN
#pragma push_macro("TYPE_NOTATION")
#undef TYPE_NOTATION

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace dtd {
						namespace nonvalidating {

class XMLSimpleType : public ::java::lang::Object {
	$class(XMLSimpleType, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLSimpleType();
	void init$();
	virtual void clear();
	virtual void setValues(int16_t type, $String* name, $StringArray* enumeration, bool list, int16_t defaultType, $String* defaultValue, $String* nonNormalizedDefaultValue);
	virtual void setValues(::com::sun::xml::internal::stream::dtd::nonvalidating::XMLSimpleType* simpleType);
	static const int16_t TYPE_CDATA = 0;
	static const int16_t TYPE_ENTITY = 1;
	static const int16_t TYPE_ENUMERATION = 2;
	static const int16_t TYPE_ID = 3;
	static const int16_t TYPE_IDREF = 4;
	static const int16_t TYPE_NMTOKEN = 5;
	static const int16_t TYPE_NOTATION = 6;
	static const int16_t TYPE_NAMED = 7;
	static const int16_t DEFAULT_TYPE_DEFAULT = 3;
	static const int16_t DEFAULT_TYPE_FIXED = 1;
	static const int16_t DEFAULT_TYPE_IMPLIED = 0;
	static const int16_t DEFAULT_TYPE_REQUIRED = 2;
	int16_t type = 0;
	$String* name = nullptr;
	$StringArray* enumeration = nullptr;
	bool list = false;
	int16_t defaultType = 0;
	$String* defaultValue = nullptr;
	$String* nonNormalizedDefaultValue = nullptr;
};

						} // nonvalidating
					} // dtd
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#pragma pop_macro("DEFAULT_TYPE_DEFAULT")
#pragma pop_macro("DEFAULT_TYPE_FIXED")
#pragma pop_macro("DEFAULT_TYPE_IMPLIED")
#pragma pop_macro("DEFAULT_TYPE_REQUIRED")
#pragma pop_macro("TYPE_CDATA")
#pragma pop_macro("TYPE_ENTITY")
#pragma pop_macro("TYPE_ENUMERATION")
#pragma pop_macro("TYPE_ID")
#pragma pop_macro("TYPE_IDREF")
#pragma pop_macro("TYPE_NAMED")
#pragma pop_macro("TYPE_NMTOKEN")
#pragma pop_macro("TYPE_NOTATION")

#endif // _com_sun_xml_internal_stream_dtd_nonvalidating_XMLSimpleType_h_