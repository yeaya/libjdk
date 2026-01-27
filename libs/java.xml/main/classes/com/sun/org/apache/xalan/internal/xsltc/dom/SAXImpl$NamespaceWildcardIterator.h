#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_SAXImpl$NamespaceWildcardIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_SAXImpl$NamespaceWildcardIterator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NamespaceWildcardIterator
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

class SAXImpl$NamespaceWildcardIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase {
	$class(SAXImpl$NamespaceWildcardIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase)
public:
	SAXImpl$NamespaceWildcardIterator();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl* this$0, int32_t axis, int32_t nsType);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* cloneIterator() override;
	virtual void gotoMark() override;
	virtual bool isReverse() override;
	virtual int32_t next() override;
	virtual void setMark() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t node) override;
	::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl* this$0 = nullptr;
	int32_t m_nsType = 0;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* m_baseIterator = nullptr;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_SAXImpl$NamespaceWildcardIterator_h_