#ifndef _com_sun_org_apache_xerces_internal_util_MessageFormatter_h_
#define _com_sun_org_apache_xerces_internal_util_MessageFormatter_h_
//$ interface com.sun.org.apache.xerces.internal.util.MessageFormatter
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

class MessageFormatter : public ::java::lang::Object {
	$interface(MessageFormatter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* formatMessage(::java::util::Locale* locale, $String* key, $ObjectArray* arguments) {return nullptr;}
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_MessageFormatter_h_