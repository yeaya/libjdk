#ifndef _com_sun_org_apache_xerces_internal_impl_xs_opti_SchemaDOMImplementation_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_opti_SchemaDOMImplementation_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaDOMImplementation
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
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {

class SchemaDOMImplementation : public ::org::w3c::dom::DOMImplementation {
	$class(SchemaDOMImplementation, 0, ::org::w3c::dom::DOMImplementation)
public:
	SchemaDOMImplementation();
	void init$();
	virtual ::org::w3c::dom::Document* createDocument($String* namespaceURI, $String* qualifiedName, ::org::w3c::dom::DocumentType* doctype) override;
	virtual ::org::w3c::dom::DocumentType* createDocumentType($String* qualifiedName, $String* publicId, $String* systemId) override;
	static ::org::w3c::dom::DOMImplementation* getDOMImplementation();
	virtual $Object* getFeature($String* feature, $String* version) override;
	virtual bool hasFeature($String* feature, $String* version) override;
	static ::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOMImplementation* singleton;
};

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_opti_SchemaDOMImplementation_h_