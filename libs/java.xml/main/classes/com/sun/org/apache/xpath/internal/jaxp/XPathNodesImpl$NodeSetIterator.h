#ifndef _com_sun_org_apache_xpath_internal_jaxp_XPathNodesImpl$NodeSetIterator_h_
#define _com_sun_org_apache_xpath_internal_jaxp_XPathNodesImpl$NodeSetIterator_h_
//$ class com.sun.org.apache.xpath.internal.jaxp.XPathNodesImpl$NodeSetIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace jaxp {
							class XPathNodesImpl;
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
						namespace jaxp {

class XPathNodesImpl$NodeSetIterator : public ::java::util::Iterator {
	$class(XPathNodesImpl$NodeSetIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	XPathNodesImpl$NodeSetIterator();
	void init$(::com::sun::org::apache::xpath::internal::jaxp::XPathNodesImpl* this$0, $Class* elementType);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::com::sun::org::apache::xpath::internal::jaxp::XPathNodesImpl* this$0 = nullptr;
	int32_t currentIndex = 0;
	$Class* elementType = nullptr;
};

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_jaxp_XPathNodesImpl$NodeSetIterator_h_