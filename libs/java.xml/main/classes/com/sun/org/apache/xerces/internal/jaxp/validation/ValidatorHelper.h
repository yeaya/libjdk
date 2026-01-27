#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_ValidatorHelper_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_ValidatorHelper_h_
//$ interface com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHelper
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

class ValidatorHelper : public ::java::lang::Object {
	$interface(ValidatorHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void validate(::javax::xml::transform::Source* source, ::javax::xml::transform::Result* result) {}
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_ValidatorHelper_h_