#ifndef _javax_xml_validation_Validator_h_
#define _javax_xml_validation_Validator_h_
//$ class javax.xml.validation.Validator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace transform {
			class Result;
			class Source;
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

class $export Validator : public ::java::lang::Object {
	$class(Validator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Validator();
	void init$();
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() {return nullptr;}
	virtual bool getFeature($String* name);
	virtual $Object* getProperty($String* name);
	virtual ::org::w3c::dom::ls::LSResourceResolver* getResourceResolver() {return nullptr;}
	virtual void reset() {}
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* errorHandler) {}
	virtual void setFeature($String* name, bool value);
	virtual void setProperty($String* name, Object$* object);
	virtual void setResourceResolver(::org::w3c::dom::ls::LSResourceResolver* resourceResolver) {}
	virtual void validate(::javax::xml::transform::Source* source);
	virtual void validate(::javax::xml::transform::Source* source, ::javax::xml::transform::Result* result) {}
};

		} // validation
	} // xml
} // javax

#endif // _javax_xml_validation_Validator_h_