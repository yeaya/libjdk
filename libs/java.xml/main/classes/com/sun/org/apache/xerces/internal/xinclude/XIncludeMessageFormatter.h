#ifndef _com_sun_org_apache_xerces_internal_xinclude_XIncludeMessageFormatter_h_
#define _com_sun_org_apache_xerces_internal_xinclude_XIncludeMessageFormatter_h_
//$ class com.sun.org.apache.xerces.internal.xinclude.XIncludeMessageFormatter
//$ extends com.sun.org.apache.xerces.internal.util.MessageFormatter

#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <java/lang/Array.h>

#pragma push_macro("XINCLUDE_DOMAIN")
#undef XINCLUDE_DOMAIN

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
						namespace xinclude {

class XIncludeMessageFormatter : public ::com::sun::org::apache::xerces::internal::util::MessageFormatter {
	$class(XIncludeMessageFormatter, 0, ::com::sun::org::apache::xerces::internal::util::MessageFormatter)
public:
	XIncludeMessageFormatter();
	void init$();
	virtual $String* formatMessage(::java::util::Locale* locale, $String* key, $ObjectArray* arguments) override;
	static $String* XINCLUDE_DOMAIN;
	::java::util::Locale* fLocale = nullptr;
	::java::util::ResourceBundle* fResourceBundle = nullptr;
};

						} // xinclude
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("XINCLUDE_DOMAIN")

#endif // _com_sun_org_apache_xerces_internal_xinclude_XIncludeMessageFormatter_h_