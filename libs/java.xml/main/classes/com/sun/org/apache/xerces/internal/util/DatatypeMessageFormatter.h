#ifndef _com_sun_org_apache_xerces_internal_util_DatatypeMessageFormatter_h_
#define _com_sun_org_apache_xerces_internal_util_DatatypeMessageFormatter_h_
//$ class com.sun.org.apache.xerces.internal.util.DatatypeMessageFormatter
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BASE_NAME")
#undef BASE_NAME

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
						namespace util {

class DatatypeMessageFormatter : public ::java::lang::Object {
	$class(DatatypeMessageFormatter, 0, ::java::lang::Object)
public:
	DatatypeMessageFormatter();
	void init$();
	static $String* formatMessage(::java::util::Locale* locale, $String* key, $ObjectArray* arguments);
	static $String* BASE_NAME;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BASE_NAME")

#endif // _com_sun_org_apache_xerces_internal_util_DatatypeMessageFormatter_h_