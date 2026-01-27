#ifndef _com_sun_org_apache_xpath_internal_jaxp_JAXPPrefixResolver_h_
#define _com_sun_org_apache_xpath_internal_jaxp_JAXPPrefixResolver_h_
//$ class com.sun.org.apache.xpath.internal.jaxp.JAXPPrefixResolver
//$ extends com.sun.org.apache.xml.internal.utils.PrefixResolver

#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>

#pragma push_macro("S_XMLNAMESPACEURI")
#undef S_XMLNAMESPACEURI

namespace javax {
	namespace xml {
		namespace namespace$ {
			class NamespaceContext;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace jaxp {

class JAXPPrefixResolver : public ::com::sun::org::apache::xml::internal::utils::PrefixResolver {
	$class(JAXPPrefixResolver, 0, ::com::sun::org::apache::xml::internal::utils::PrefixResolver)
public:
	JAXPPrefixResolver();
	void init$(::javax::xml::namespace$::NamespaceContext* nsContext);
	virtual $String* getBaseIdentifier() override;
	virtual $String* getNamespaceForPrefix($String* prefix) override;
	virtual $String* getNamespaceForPrefix($String* prefix, ::org::w3c::dom::Node* namespaceContext) override;
	virtual bool handlesNullPrefixes() override;
	::javax::xml::namespace$::NamespaceContext* namespaceContext = nullptr;
	static $String* S_XMLNAMESPACEURI;
};

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("S_XMLNAMESPACEURI")

#endif // _com_sun_org_apache_xpath_internal_jaxp_JAXPPrefixResolver_h_