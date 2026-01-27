#ifndef _com_sun_org_apache_xerces_internal_xpointer_XPointerMessageFormatter_h_
#define _com_sun_org_apache_xerces_internal_xpointer_XPointerMessageFormatter_h_
//$ class com.sun.org.apache.xerces.internal.xpointer.XPointerMessageFormatter
//$ extends com.sun.org.apache.xerces.internal.util.MessageFormatter

#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <java/lang/Array.h>

#pragma push_macro("XPOINTER_DOMAIN")
#undef XPOINTER_DOMAIN

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
						namespace xpointer {

class XPointerMessageFormatter : public ::com::sun::org::apache::xerces::internal::util::MessageFormatter {
	$class(XPointerMessageFormatter, 0, ::com::sun::org::apache::xerces::internal::util::MessageFormatter)
public:
	XPointerMessageFormatter();
	void init$();
	virtual $String* formatMessage(::java::util::Locale* locale, $String* key, $ObjectArray* arguments) override;
	static $String* XPOINTER_DOMAIN;
	::java::util::Locale* fLocale = nullptr;
	::java::util::ResourceBundle* fResourceBundle = nullptr;
};

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("XPOINTER_DOMAIN")

#endif // _com_sun_org_apache_xerces_internal_xpointer_XPointerMessageFormatter_h_