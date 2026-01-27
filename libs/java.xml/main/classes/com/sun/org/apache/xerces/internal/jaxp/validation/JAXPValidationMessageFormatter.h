#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_JAXPValidationMessageFormatter_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_JAXPValidationMessageFormatter_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.JAXPValidationMessageFormatter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Locale;
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

class JAXPValidationMessageFormatter : public ::java::lang::Object {
	$class(JAXPValidationMessageFormatter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JAXPValidationMessageFormatter();
	void init$();
	static $String* formatMessage(::java::util::Locale* locale, $String* key, $ObjectArray* arguments);
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_JAXPValidationMessageFormatter_h_