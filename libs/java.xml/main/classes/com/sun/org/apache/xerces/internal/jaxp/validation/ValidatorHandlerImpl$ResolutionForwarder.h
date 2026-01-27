#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_ValidatorHandlerImpl$ResolutionForwarder_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_ValidatorHandlerImpl$ResolutionForwarder_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl$ResolutionForwarder
//$ extends org.xml.sax.ext.EntityResolver2

#include <org/xml/sax/ext/EntityResolver2.h>

#pragma push_macro("XML_TYPE")
#undef XML_TYPE

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSResourceResolver;
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

class ValidatorHandlerImpl$ResolutionForwarder : public ::org::xml::sax::ext::EntityResolver2 {
	$class(ValidatorHandlerImpl$ResolutionForwarder, 0, ::org::xml::sax::ext::EntityResolver2)
public:
	ValidatorHandlerImpl$ResolutionForwarder();
	void init$();
	void init$(::org::w3c::dom::ls::LSResourceResolver* entityResolver);
	::org::w3c::dom::ls::LSResourceResolver* getEntityResolver();
	virtual ::org::xml::sax::InputSource* getExternalSubset($String* name, $String* baseURI) override;
	virtual ::org::xml::sax::InputSource* resolveEntity($String* name, $String* publicId, $String* baseURI, $String* systemId) override;
	virtual ::org::xml::sax::InputSource* resolveEntity($String* publicId, $String* systemId) override;
	$String* resolveSystemId($String* systemId, $String* baseURI);
	void setEntityResolver(::org::w3c::dom::ls::LSResourceResolver* entityResolver);
	static $String* XML_TYPE;
	::org::w3c::dom::ls::LSResourceResolver* fEntityResolver = nullptr;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("XML_TYPE")

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_ValidatorHandlerImpl$ResolutionForwarder_h_