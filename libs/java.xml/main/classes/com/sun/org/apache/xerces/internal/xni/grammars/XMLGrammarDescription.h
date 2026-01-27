#ifndef _com_sun_org_apache_xerces_internal_xni_grammars_XMLGrammarDescription_h_
#define _com_sun_org_apache_xerces_internal_xni_grammars_XMLGrammarDescription_h_
//$ interface com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarDescription
//$ extends com.sun.org.apache.xerces.internal.xni.XMLResourceIdentifier

#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>

#pragma push_macro("XML_DTD")
#undef XML_DTD
#pragma push_macro("XML_SCHEMA")
#undef XML_SCHEMA

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace grammars {

class XMLGrammarDescription : public ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier {
	$interface(XMLGrammarDescription, 0, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier)
public:
	virtual $String* getGrammarType() {return nullptr;}
	static $String* XML_SCHEMA;
	static $String* XML_DTD;
};

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("XML_DTD")
#pragma pop_macro("XML_SCHEMA")

#endif // _com_sun_org_apache_xerces_internal_xni_grammars_XMLGrammarDescription_h_