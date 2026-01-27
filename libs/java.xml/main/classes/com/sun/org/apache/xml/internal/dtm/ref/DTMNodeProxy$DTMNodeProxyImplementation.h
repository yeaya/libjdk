#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMNodeProxy$DTMNodeProxyImplementation_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMNodeProxy$DTMNodeProxyImplementation_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMNodeProxy$DTMNodeProxyImplementation
//$ extends org.w3c.dom.DOMImplementation

#include <org/w3c/dom/DOMImplementation.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class DocumentType;
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

class DTMNodeProxy$DTMNodeProxyImplementation : public ::org::w3c::dom::DOMImplementation {
	$class(DTMNodeProxy$DTMNodeProxyImplementation, $NO_CLASS_INIT, ::org::w3c::dom::DOMImplementation)
public:
	DTMNodeProxy$DTMNodeProxyImplementation();
	void init$();
	virtual ::org::w3c::dom::Document* createDocument($String* namespaceURI, $String* qualfiedName, ::org::w3c::dom::DocumentType* doctype) override;
	virtual ::org::w3c::dom::DocumentType* createDocumentType($String* qualifiedName, $String* publicId, $String* systemId) override;
	virtual $Object* getFeature($String* feature, $String* version) override;
	virtual bool hasFeature($String* feature, $String* version) override;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMNodeProxy$DTMNodeProxyImplementation_h_