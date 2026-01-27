#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSMessageFormatter_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSMessageFormatter_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSMessageFormatter
//$ extends com.sun.org.apache.xerces.internal.util.MessageFormatter

#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <java/lang/Array.h>

#pragma push_macro("SCHEMA_DOMAIN")
#undef SCHEMA_DOMAIN

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
						namespace impl {
							namespace xs {

class XSMessageFormatter : public ::com::sun::org::apache::xerces::internal::util::MessageFormatter {
	$class(XSMessageFormatter, 0, ::com::sun::org::apache::xerces::internal::util::MessageFormatter)
public:
	XSMessageFormatter();
	void init$();
	virtual $String* formatMessage(::java::util::Locale* locale, $String* key, $ObjectArray* arguments) override;
	static $String* SCHEMA_DOMAIN;
	::java::util::Locale* fLocale = nullptr;
	::java::util::ResourceBundle* fResourceBundle = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("SCHEMA_DOMAIN")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSMessageFormatter_h_