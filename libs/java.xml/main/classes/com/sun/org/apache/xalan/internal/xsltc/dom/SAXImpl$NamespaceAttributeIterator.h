#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_SAXImpl$NamespaceAttributeIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_SAXImpl$NamespaceAttributeIterator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NamespaceAttributeIterator
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {
								class SAXImpl;
							}
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
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMAxisIterator;
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

class SAXImpl$NamespaceAttributeIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase {
	$class(SAXImpl$NamespaceAttributeIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase)
public:
	SAXImpl$NamespaceAttributeIterator();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl* this$0, int32_t nsType);
	virtual int32_t next() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t node) override;
	::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl* this$0 = nullptr;
	int32_t _nsType = 0;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_SAXImpl$NamespaceAttributeIterator_h_