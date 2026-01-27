#ifndef _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent$3_h_
#define _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent$3_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$3
//$ extends javax.xml.validation.TypeInfoProvider

#include <javax/xml/validation/TypeInfoProvider.h>

namespace org {
	namespace w3c {
		namespace dom {
			class TypeInfo;
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

class JAXPValidatorComponent$3 : public ::javax::xml::validation::TypeInfoProvider {
	$class(JAXPValidatorComponent$3, $NO_CLASS_INIT, ::javax::xml::validation::TypeInfoProvider)
public:
	JAXPValidatorComponent$3();
	void init$();
	virtual ::org::w3c::dom::TypeInfo* getAttributeTypeInfo(int32_t index) override;
	virtual ::org::w3c::dom::TypeInfo* getAttributeTypeInfo($String* attributeQName);
	virtual ::org::w3c::dom::TypeInfo* getAttributeTypeInfo($String* attributeUri, $String* attributeLocalName);
	virtual ::org::w3c::dom::TypeInfo* getElementTypeInfo() override;
	virtual bool isIdAttribute(int32_t index) override;
	virtual bool isSpecified(int32_t index) override;
};

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent$3_h_