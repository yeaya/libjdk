#ifndef _com_sun_org_apache_xml_internal_serialize_Method_h_
#define _com_sun_org_apache_xml_internal_serialize_Method_h_
//$ class com.sun.org.apache.xml.internal.serialize.Method
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("FOP")
#undef FOP
#pragma push_macro("HTML")
#undef HTML
#pragma push_macro("TEXT")
#undef TEXT
#pragma push_macro("XHTML")
#undef XHTML
#pragma push_macro("XML")
#undef XML

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

class Method : public ::java::lang::Object {
	$class(Method, 0, ::java::lang::Object)
public:
	Method();
	void init$();
	static $String* XML;
	static $String* HTML;
	static $String* XHTML;
	static $String* TEXT;
	static $String* FOP;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("FOP")
#pragma pop_macro("HTML")
#pragma pop_macro("TEXT")
#pragma pop_macro("XHTML")
#pragma pop_macro("XML")

#endif // _com_sun_org_apache_xml_internal_serialize_Method_h_