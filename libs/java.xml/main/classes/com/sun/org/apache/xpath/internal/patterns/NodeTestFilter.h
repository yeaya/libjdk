#ifndef _com_sun_org_apache_xpath_internal_patterns_NodeTestFilter_h_
#define _com_sun_org_apache_xpath_internal_patterns_NodeTestFilter_h_
//$ interface com.sun.org.apache.xpath.internal.patterns.NodeTestFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace patterns {
							class NodeTest;
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
						namespace patterns {

class NodeTestFilter : public ::java::lang::Object {
	$interface(NodeTestFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void setNodeTest(::com::sun::org::apache::xpath::internal::patterns::NodeTest* nodeTest) {}
};

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_patterns_NodeTestFilter_h_