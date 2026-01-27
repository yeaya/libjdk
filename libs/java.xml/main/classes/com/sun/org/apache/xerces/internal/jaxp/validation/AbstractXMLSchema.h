#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_AbstractXMLSchema_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_AbstractXMLSchema_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.AbstractXMLSchema
//$ extends javax.xml.validation.Schema
//$ implements com.sun.org.apache.xerces.internal.jaxp.validation.XSGrammarPoolContainer

#include <com/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer.h>
#include <javax/xml/validation/Schema.h>

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace xml {
		namespace validation {
			class Validator;
			class ValidatorHandler;
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

class AbstractXMLSchema : public ::javax::xml::validation::Schema, public ::com::sun::org::apache::xerces::internal::jaxp::validation::XSGrammarPoolContainer {
	$class(AbstractXMLSchema, $NO_CLASS_INIT, ::javax::xml::validation::Schema, ::com::sun::org::apache::xerces::internal::jaxp::validation::XSGrammarPoolContainer)
public:
	AbstractXMLSchema();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::lang::Boolean* getFeature($String* featureId) override;
	virtual $Object* getProperty($String* propertyId) override;
	virtual ::javax::xml::validation::Validator* newValidator() override;
	virtual ::javax::xml::validation::ValidatorHandler* newValidatorHandler() override;
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setProperty($String* propertyId, Object$* state) override;
	virtual $String* toString() override;
	::java::util::Map* fFeatures = nullptr;
	::java::util::Map* fProperties = nullptr;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_AbstractXMLSchema_h_