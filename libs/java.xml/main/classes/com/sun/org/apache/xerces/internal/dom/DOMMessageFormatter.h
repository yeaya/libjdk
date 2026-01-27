#ifndef _com_sun_org_apache_xerces_internal_dom_DOMMessageFormatter_h_
#define _com_sun_org_apache_xerces_internal_dom_DOMMessageFormatter_h_
//$ class com.sun.org.apache.xerces.internal.dom.DOMMessageFormatter
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DOM_DOMAIN")
#undef DOM_DOMAIN
#pragma push_macro("SERIALIZER_DOMAIN")
#undef SERIALIZER_DOMAIN
#pragma push_macro("XML_DOMAIN")
#undef XML_DOMAIN

namespace java {
	namespace util {
		class Locale;
		class ResourceBundle;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class DOMMessageFormatter : public ::java::lang::Object {
	$class(DOMMessageFormatter, 0, ::java::lang::Object)
public:
	DOMMessageFormatter();
	void init$();
	static $String* formatMessage($String* domain, $String* key, $ObjectArray* arguments);
	static ::java::util::ResourceBundle* getResourceBundle($String* domain);
	static void init();
	static void setLocale(::java::util::Locale* dlocale);
	static $String* DOM_DOMAIN;
	static $String* XML_DOMAIN;
	static $String* SERIALIZER_DOMAIN;
	static ::java::util::ResourceBundle* domResourceBundle;
	static ::java::util::ResourceBundle* xmlResourceBundle;
	static ::java::util::ResourceBundle* serResourceBundle;
	static ::java::util::Locale* locale;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DOM_DOMAIN")
#pragma pop_macro("SERIALIZER_DOMAIN")
#pragma pop_macro("XML_DOMAIN")

#endif // _com_sun_org_apache_xerces_internal_dom_DOMMessageFormatter_h_