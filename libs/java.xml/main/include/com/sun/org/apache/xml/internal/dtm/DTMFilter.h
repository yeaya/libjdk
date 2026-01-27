#ifndef _com_sun_org_apache_xml_internal_dtm_DTMFilter_h_
#define _com_sun_org_apache_xml_internal_dtm_DTMFilter_h_
//$ interface com.sun.org.apache.xml.internal.dtm.DTMFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SHOW_ALL")
#undef SHOW_ALL
#pragma push_macro("SHOW_ATTRIBUTE")
#undef SHOW_ATTRIBUTE
#pragma push_macro("SHOW_BYFUNCTION")
#undef SHOW_BYFUNCTION
#pragma push_macro("SHOW_CDATA_SECTION")
#undef SHOW_CDATA_SECTION
#pragma push_macro("SHOW_COMMENT")
#undef SHOW_COMMENT
#pragma push_macro("SHOW_DOCUMENT")
#undef SHOW_DOCUMENT
#pragma push_macro("SHOW_DOCUMENT_FRAGMENT")
#undef SHOW_DOCUMENT_FRAGMENT
#pragma push_macro("SHOW_DOCUMENT_TYPE")
#undef SHOW_DOCUMENT_TYPE
#pragma push_macro("SHOW_ELEMENT")
#undef SHOW_ELEMENT
#pragma push_macro("SHOW_ENTITY")
#undef SHOW_ENTITY
#pragma push_macro("SHOW_ENTITY_REFERENCE")
#undef SHOW_ENTITY_REFERENCE
#pragma push_macro("SHOW_NAMESPACE")
#undef SHOW_NAMESPACE
#pragma push_macro("SHOW_NOTATION")
#undef SHOW_NOTATION
#pragma push_macro("SHOW_PROCESSING_INSTRUCTION")
#undef SHOW_PROCESSING_INSTRUCTION
#pragma push_macro("SHOW_TEXT")
#undef SHOW_TEXT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

class $import DTMFilter : public ::java::lang::Object {
	$interface(DTMFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int16_t acceptNode(int32_t nodeHandle, int32_t whatToShow) {return 0;}
	virtual int16_t acceptNode(int32_t nodeHandle, int32_t whatToShow, int32_t expandedName) {return 0;}
	static const int32_t SHOW_ALL = (-1);
	static const int32_t SHOW_ELEMENT = 1;
	static const int32_t SHOW_ATTRIBUTE = 2;
	static const int32_t SHOW_TEXT = 4;
	static const int32_t SHOW_CDATA_SECTION = 8;
	static const int32_t SHOW_ENTITY_REFERENCE = 16;
	static const int32_t SHOW_ENTITY = 32;
	static const int32_t SHOW_PROCESSING_INSTRUCTION = 64;
	static const int32_t SHOW_COMMENT = 128;
	static const int32_t SHOW_DOCUMENT = 256;
	static const int32_t SHOW_DOCUMENT_TYPE = 512;
	static const int32_t SHOW_DOCUMENT_FRAGMENT = 1024;
	static const int32_t SHOW_NOTATION = 2048;
	static const int32_t SHOW_NAMESPACE = 4096;
	static const int32_t SHOW_BYFUNCTION = 0x00010000;
};

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("SHOW_ALL")
#pragma pop_macro("SHOW_ATTRIBUTE")
#pragma pop_macro("SHOW_BYFUNCTION")
#pragma pop_macro("SHOW_CDATA_SECTION")
#pragma pop_macro("SHOW_COMMENT")
#pragma pop_macro("SHOW_DOCUMENT")
#pragma pop_macro("SHOW_DOCUMENT_FRAGMENT")
#pragma pop_macro("SHOW_DOCUMENT_TYPE")
#pragma pop_macro("SHOW_ELEMENT")
#pragma pop_macro("SHOW_ENTITY")
#pragma pop_macro("SHOW_ENTITY_REFERENCE")
#pragma pop_macro("SHOW_NAMESPACE")
#pragma pop_macro("SHOW_NOTATION")
#pragma pop_macro("SHOW_PROCESSING_INSTRUCTION")
#pragma pop_macro("SHOW_TEXT")

#endif // _com_sun_org_apache_xml_internal_dtm_DTMFilter_h_