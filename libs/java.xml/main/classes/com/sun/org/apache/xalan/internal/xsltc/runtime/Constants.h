#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_Constants_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_Constants_h_
//$ interface com.sun.org.apache.xalan.internal.xsltc.runtime.Constants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ANY")
#undef ANY
#pragma push_macro("ATTRIBUTE")
#undef ATTRIBUTE
#pragma push_macro("COMMENT")
#undef COMMENT
#pragma push_macro("ELEMENT")
#undef ELEMENT
#pragma push_macro("EMPTYSTRING")
#undef EMPTYSTRING
#pragma push_macro("NAMESPACE_FEATURE")
#undef NAMESPACE_FEATURE
#pragma push_macro("PROCESSING_INSTRUCTION")
#undef PROCESSING_INSTRUCTION
#pragma push_macro("ROOT")
#undef ROOT
#pragma push_macro("TEXT")
#undef TEXT
#pragma push_macro("XMLNS_PREFIX")
#undef XMLNS_PREFIX
#pragma push_macro("XMLNS_STRING")
#undef XMLNS_STRING
#pragma push_macro("XMLNS_URI")
#undef XMLNS_URI
#pragma push_macro("XML_PREFIX")
#undef XML_PREFIX
#pragma push_macro("XSLT_URI")
#undef XSLT_URI

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

class Constants : public ::java::lang::Object {
	$interface(Constants, 0, ::java::lang::Object)
public:
	static const int32_t ANY = (-1);
	static const int32_t ATTRIBUTE = (-2);
	static const int32_t ROOT = 0; // DTM.ROOT_NODE
	static const int32_t TEXT = 3; // DTM.TEXT_NODE
	static const int32_t ELEMENT = 1; // DTM.ELEMENT_NODE
	static const int32_t COMMENT = 8; // DTM.COMMENT_NODE
	static const int32_t PROCESSING_INSTRUCTION = 7; // DTM.PROCESSING_INSTRUCTION_NODE
	static $String* XSLT_URI;
	static $String* NAMESPACE_FEATURE;
	static $String* EMPTYSTRING;
	static $String* XML_PREFIX;
	static $String* XMLNS_PREFIX;
	static $String* XMLNS_STRING;
	static $String* XMLNS_URI;
};

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ANY")
#pragma pop_macro("ATTRIBUTE")
#pragma pop_macro("COMMENT")
#pragma pop_macro("ELEMENT")
#pragma pop_macro("EMPTYSTRING")
#pragma pop_macro("NAMESPACE_FEATURE")
#pragma pop_macro("PROCESSING_INSTRUCTION")
#pragma pop_macro("ROOT")
#pragma pop_macro("TEXT")
#pragma pop_macro("XMLNS_PREFIX")
#pragma pop_macro("XMLNS_STRING")
#pragma pop_macro("XMLNS_URI")
#pragma pop_macro("XML_PREFIX")
#pragma pop_macro("XSLT_URI")

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_Constants_h_