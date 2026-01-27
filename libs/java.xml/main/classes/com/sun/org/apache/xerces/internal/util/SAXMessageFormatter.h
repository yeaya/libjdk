#ifndef _com_sun_org_apache_xerces_internal_util_SAXMessageFormatter_h_
#define _com_sun_org_apache_xerces_internal_util_SAXMessageFormatter_h_
//$ class com.sun.org.apache.xerces.internal.util.SAXMessageFormatter
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
						namespace util {

class SAXMessageFormatter : public ::java::lang::Object {
	$class(SAXMessageFormatter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SAXMessageFormatter();
	void init$();
	static $String* formatMessage(::java::util::Locale* locale, $String* key, $ObjectArray* arguments);
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_SAXMessageFormatter_h_