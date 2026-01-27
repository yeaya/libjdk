#ifndef _com_sun_org_apache_xerces_internal_xni_grammars_XMLDTDDescription_h_
#define _com_sun_org_apache_xerces_internal_xni_grammars_XMLDTDDescription_h_
//$ interface com.sun.org.apache.xerces.internal.xni.grammars.XMLDTDDescription
//$ extends com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarDescription

#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace grammars {

class XMLDTDDescription : public ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription {
	$interface(XMLDTDDescription, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription)
public:
	virtual $String* getRootName() {return nullptr;}
};

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_grammars_XMLDTDDescription_h_