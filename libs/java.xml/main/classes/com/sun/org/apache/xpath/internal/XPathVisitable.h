#ifndef _com_sun_org_apache_xpath_internal_XPathVisitable_h_
#define _com_sun_org_apache_xpath_internal_XPathVisitable_h_
//$ interface com.sun.org.apache.xpath.internal.XPathVisitable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class ExpressionOwner;
						class XPathVisitor;
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

class $export XPathVisitable : public ::java::lang::Object {
	$interface(XPathVisitable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void callVisitors(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) {}
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_XPathVisitable_h_