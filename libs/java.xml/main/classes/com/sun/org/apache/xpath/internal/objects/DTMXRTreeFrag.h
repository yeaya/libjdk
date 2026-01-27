#ifndef _com_sun_org_apache_xpath_internal_objects_DTMXRTreeFrag_h_
#define _com_sun_org_apache_xpath_internal_objects_DTMXRTreeFrag_h_
//$ class com.sun.org.apache.xpath.internal.objects.DTMXRTreeFrag
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTM;
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
						namespace objects {

class $export DTMXRTreeFrag : public ::java::lang::Object {
	$class(DTMXRTreeFrag, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DTMXRTreeFrag();
	void init$(int32_t dtmIdentity, ::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	void destruct();
	virtual bool equals(Object$* obj) override;
	::com::sun::org::apache::xml::internal::dtm::DTM* getDTM();
	int32_t getDTMIdentity();
	::com::sun::org::apache::xpath::internal::XPathContext* getXPathContext();
	virtual int32_t hashCode() override;
	::com::sun::org::apache::xml::internal::dtm::DTM* m_dtm = nullptr;
	int32_t m_dtmIdentity = 0;
	::com::sun::org::apache::xpath::internal::XPathContext* m_xctxt = nullptr;
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_objects_DTMXRTreeFrag_h_