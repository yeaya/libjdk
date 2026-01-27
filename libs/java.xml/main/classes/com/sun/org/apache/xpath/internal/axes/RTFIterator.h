#ifndef _com_sun_org_apache_xpath_internal_axes_RTFIterator_h_
#define _com_sun_org_apache_xpath_internal_axes_RTFIterator_h_
//$ class com.sun.org.apache.xpath.internal.axes.RTFIterator
//$ extends com.sun.org.apache.xpath.internal.NodeSetDTM

#include <com/sun/org/apache/xpath/internal/NodeSetDTM.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMManager;
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
						namespace axes {

class RTFIterator : public ::com::sun::org::apache::xpath::internal::NodeSetDTM {
	$class(RTFIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::NodeSetDTM)
public:
	RTFIterator();
	void init$(int32_t root, ::com::sun::org::apache::xml::internal::dtm::DTMManager* manager);
	static const int64_t serialVersionUID = (int64_t)0x6A47192B9016F2E4;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_RTFIterator_h_