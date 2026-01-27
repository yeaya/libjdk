#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_UnionIterator$LookAheadIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_UnionIterator$LookAheadIterator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.UnionIterator$LookAheadIterator
//$ extends com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator$HeapNode

#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {
								class UnionIterator;
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

class UnionIterator$LookAheadIterator : public ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode {
	$class(UnionIterator$LookAheadIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode)
public:
	UnionIterator$LookAheadIterator();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::UnionIterator* this$0, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode* cloneHeapNode() override;
	virtual void gotoMark() override;
	virtual bool isLessThan(::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode* heapNode) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode* reset() override;
	virtual void setMark() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode* setStartNode(int32_t node) override;
	virtual int32_t step() override;
	::com::sun::org::apache::xalan::internal::xsltc::dom::UnionIterator* this$0 = nullptr;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator = nullptr;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_UnionIterator$LookAheadIterator_h_