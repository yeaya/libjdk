#ifndef _javax_xml_validation_ValidatorHandler_h_
#define _javax_xml_validation_ValidatorHandler_h_
//$ class javax.xml.validation.ValidatorHandler
//$ extends org.xml.sax.ContentHandler

#include <org/xml/sax/ContentHandler.h>

namespace javax {
	namespace xml {
		namespace validation {
			class TypeInfoProvider;
		}
	}
}
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
			class ErrorHandler;
		}
	}
}

namespace javax {
	namespace xml {
		namespace validation {

class $import ValidatorHandler : public ::org::xml::sax::ContentHandler {
	$class(ValidatorHandler, $NO_CLASS_INIT, ::org::xml::sax::ContentHandler)
public:
	ValidatorHandler();
	void init$();
	virtual ::org::xml::sax::ContentHandler* getContentHandler() {return nullptr;}
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() {return nullptr;}
	virtual bool getFeature($String* name);
	virtual $Object* getProperty($String* name);
	virtual ::org::w3c::dom::ls::LSResourceResolver* getResourceResolver() {return nullptr;}
	virtual ::javax::xml::validation::TypeInfoProvider* getTypeInfoProvider() {return nullptr;}
	virtual void setContentHandler(::org::xml::sax::ContentHandler* receiver) {}
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* errorHandler) {}
	virtual void setFeature($String* name, bool value);
	virtual void setProperty($String* name, Object$* object);
	virtual void setResourceResolver(::org::w3c::dom::ls::LSResourceResolver* resourceResolver) {}
};

		} // validation
	} // xml
} // javax

#endif // _javax_xml_validation_ValidatorHandler_h_