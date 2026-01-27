#ifndef _com_sun_org_apache_xpath_internal_axes_SubContextList_h_
#define _com_sun_org_apache_xpath_internal_axes_SubContextList_h_
//$ interface com.sun.org.apache.xpath.internal.axes.SubContextList
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

class SubContextList : public ::java::lang::Object {
	$interface(SubContextList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getLastPos(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) {return 0;}
	virtual int32_t getProximityPosition(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) {return 0;}
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_SubContextList_h_