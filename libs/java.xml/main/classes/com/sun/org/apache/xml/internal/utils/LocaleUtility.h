#ifndef _com_sun_org_apache_xml_internal_utils_LocaleUtility_h_
#define _com_sun_org_apache_xml_internal_utils_LocaleUtility_h_
//$ class com.sun.org.apache.xml.internal.utils.LocaleUtility
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EMPTY_STRING")
#undef EMPTY_STRING
#pragma push_macro("IETF_SEPARATOR")
#undef IETF_SEPARATOR

namespace java {
	namespace util {
		class Locale;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export LocaleUtility : public ::java::lang::Object {
	$class(LocaleUtility, 0, ::java::lang::Object)
public:
	LocaleUtility();
	void init$();
	static ::java::util::Locale* langToLocale($String* lang);
	static const char16_t IETF_SEPARATOR = ((char16_t)45);
	static $String* EMPTY_STRING;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTY_STRING")
#pragma pop_macro("IETF_SEPARATOR")

#endif // _com_sun_org_apache_xml_internal_utils_LocaleUtility_h_