#ifndef _javax_xml_transform_OutputKeys_h_
#define _javax_xml_transform_OutputKeys_h_
//$ class javax.xml.transform.OutputKeys
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CDATA_SECTION_ELEMENTS")
#undef CDATA_SECTION_ELEMENTS
#pragma push_macro("DOCTYPE_PUBLIC")
#undef DOCTYPE_PUBLIC
#pragma push_macro("DOCTYPE_SYSTEM")
#undef DOCTYPE_SYSTEM
#pragma push_macro("ENCODING")
#undef ENCODING
#pragma push_macro("INDENT")
#undef INDENT
#pragma push_macro("MEDIA_TYPE")
#undef MEDIA_TYPE
#pragma push_macro("METHOD")
#undef METHOD
#pragma push_macro("OMIT_XML_DECLARATION")
#undef OMIT_XML_DECLARATION
#pragma push_macro("STANDALONE")
#undef STANDALONE
#pragma push_macro("VERSION")
#undef VERSION

namespace javax {
	namespace xml {
		namespace transform {

class $import OutputKeys : public ::java::lang::Object {
	$class(OutputKeys, 0, ::java::lang::Object)
public:
	OutputKeys();
	void init$();
	static $String* METHOD;
	static $String* VERSION;
	static $String* ENCODING;
	static $String* OMIT_XML_DECLARATION;
	static $String* STANDALONE;
	static $String* DOCTYPE_PUBLIC;
	static $String* DOCTYPE_SYSTEM;
	static $String* CDATA_SECTION_ELEMENTS;
	static $String* INDENT;
	static $String* MEDIA_TYPE;
};

		} // transform
	} // xml
} // javax

#pragma pop_macro("CDATA_SECTION_ELEMENTS")
#pragma pop_macro("DOCTYPE_PUBLIC")
#pragma pop_macro("DOCTYPE_SYSTEM")
#pragma pop_macro("ENCODING")
#pragma pop_macro("INDENT")
#pragma pop_macro("MEDIA_TYPE")
#pragma pop_macro("METHOD")
#pragma pop_macro("OMIT_XML_DECLARATION")
#pragma pop_macro("STANDALONE")
#pragma pop_macro("VERSION")

#endif // _javax_xml_transform_OutputKeys_h_