#ifndef _com_sun_org_apache_xpath_internal_XPathFactory_h_
#define _com_sun_org_apache_xpath_internal_XPathFactory_h_
//$ interface com.sun.org.apache.xpath.internal.XPathFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class PrefixResolver;
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class XPath;
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class SourceLocator;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

class $import XPathFactory : public ::java::lang::Object {
	$interface(XPathFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xpath::internal::XPath* create($String* exprString, ::javax::xml::transform::SourceLocator* locator, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* prefixResolver, int32_t type) {return nullptr;}
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_XPathFactory_h_