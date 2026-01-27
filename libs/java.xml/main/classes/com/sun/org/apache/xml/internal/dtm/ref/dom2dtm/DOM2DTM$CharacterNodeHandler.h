#ifndef _com_sun_org_apache_xml_internal_dtm_ref_dom2dtm_DOM2DTM$CharacterNodeHandler_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_dom2dtm_DOM2DTM$CharacterNodeHandler_h_
//$ interface com.sun.org.apache.xml.internal.dtm.ref.dom2dtm.DOM2DTM$CharacterNodeHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								namespace dom2dtm {

class DOM2DTM$CharacterNodeHandler : public ::java::lang::Object {
	$interface(DOM2DTM$CharacterNodeHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void characters(::org::w3c::dom::Node* node) {}
};

								} // dom2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_dom2dtm_DOM2DTM$CharacterNodeHandler_h_