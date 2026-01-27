#ifndef _com_sun_org_apache_xerces_internal_jaxp_JAXPConstants_h_
#define _com_sun_org_apache_xerces_internal_jaxp_JAXPConstants_h_
//$ interface com.sun.org.apache.xerces.internal.jaxp.JAXPConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("JAXP_SCHEMA_LANGUAGE")
#undef JAXP_SCHEMA_LANGUAGE
#pragma push_macro("JAXP_SCHEMA_SOURCE")
#undef JAXP_SCHEMA_SOURCE
#pragma push_macro("W3C_XML_SCHEMA")
#undef W3C_XML_SCHEMA

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

class JAXPConstants : public ::java::lang::Object {
	$interface(JAXPConstants, 0, ::java::lang::Object)
public:
	static $String* JAXP_SCHEMA_LANGUAGE;
	static $String* W3C_XML_SCHEMA;
	static $String* JAXP_SCHEMA_SOURCE;
};

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("JAXP_SCHEMA_LANGUAGE")
#pragma pop_macro("JAXP_SCHEMA_SOURCE")
#pragma pop_macro("W3C_XML_SCHEMA")

#endif // _com_sun_org_apache_xerces_internal_jaxp_JAXPConstants_h_