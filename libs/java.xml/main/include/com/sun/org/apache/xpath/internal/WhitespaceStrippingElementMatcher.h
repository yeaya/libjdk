#ifndef _com_sun_org_apache_xpath_internal_WhitespaceStrippingElementMatcher_h_
#define _com_sun_org_apache_xpath_internal_WhitespaceStrippingElementMatcher_h_
//$ interface com.sun.org.apache.xpath.internal.WhitespaceStrippingElementMatcher
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class XPathContext;
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Element;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

class $import WhitespaceStrippingElementMatcher : public ::java::lang::Object {
	$interface(WhitespaceStrippingElementMatcher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool canStripWhiteSpace() {return false;}
	virtual bool shouldStripWhiteSpace(::com::sun::org::apache::xpath::internal::XPathContext* support, ::org::w3c::dom::Element* targetElement) {return false;}
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_WhitespaceStrippingElementMatcher_h_