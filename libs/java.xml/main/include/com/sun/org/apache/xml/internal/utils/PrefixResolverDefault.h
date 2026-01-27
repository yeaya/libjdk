#ifndef _com_sun_org_apache_xml_internal_utils_PrefixResolverDefault_h_
#define _com_sun_org_apache_xml_internal_utils_PrefixResolverDefault_h_
//$ class com.sun.org.apache.xml.internal.utils.PrefixResolverDefault
//$ extends com.sun.org.apache.xml.internal.utils.PrefixResolver

#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>

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
				namespace xml {
					namespace internal {
						namespace utils {

class $import PrefixResolverDefault : public ::com::sun::org::apache::xml::internal::utils::PrefixResolver {
	$class(PrefixResolverDefault, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::utils::PrefixResolver)
public:
	PrefixResolverDefault();
	void init$(::org::w3c::dom::Node* xpathExpressionContext);
	virtual $String* getBaseIdentifier() override;
	virtual $String* getNamespaceForPrefix($String* prefix) override;
	virtual $String* getNamespaceForPrefix($String* prefix, ::org::w3c::dom::Node* namespaceContext) override;
	virtual bool handlesNullPrefixes() override;
	::org::w3c::dom::Node* m_context = nullptr;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_PrefixResolverDefault_h_