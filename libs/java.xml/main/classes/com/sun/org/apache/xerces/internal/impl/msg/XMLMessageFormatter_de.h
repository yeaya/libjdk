#ifndef _com_sun_org_apache_xerces_internal_impl_msg_XMLMessageFormatter_de_h_
#define _com_sun_org_apache_xerces_internal_impl_msg_XMLMessageFormatter_de_h_
//$ class com.sun.org.apache.xerces.internal.impl.msg.XMLMessageFormatter_de
//$ extends com.sun.org.apache.xerces.internal.util.MessageFormatter

#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <java/lang/Array.h>

#pragma push_macro("XMLNS_DOMAIN")
#undef XMLNS_DOMAIN
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
						namespace impl {
							namespace msg {

class XMLMessageFormatter_de : public ::com::sun::org::apache::xerces::internal::util::MessageFormatter {
	$class(XMLMessageFormatter_de, 0, ::com::sun::org::apache::xerces::internal::util::MessageFormatter)
public:
	XMLMessageFormatter_de();
	void init$();
	virtual $String* formatMessage(::java::util::Locale* locale, $String* key, $ObjectArray* arguments) override;
	static $String* XML_DOMAIN;
	static $String* XMLNS_DOMAIN;
	::java::util::Locale* fLocale = nullptr;
	::java::util::ResourceBundle* fResourceBundle = nullptr;
};

							} // msg
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("XMLNS_DOMAIN")
#pragma pop_macro("XML_DOMAIN")

#endif // _com_sun_org_apache_xerces_internal_impl_msg_XMLMessageFormatter_de_h_