#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_KeyIndex$KeyIndexIterator$KeyIndexHeapNode_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_KeyIndex$KeyIndexIterator$KeyIndexHeapNode_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex$KeyIndexIterator$KeyIndexHeapNode
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
								class KeyIndex$KeyIndexIterator;
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace util {
								class IntegerArray;
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

class KeyIndex$KeyIndexIterator$KeyIndexHeapNode : public ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode {
	$class(KeyIndex$KeyIndexIterator$KeyIndexHeapNode, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode)
public:
	KeyIndex$KeyIndexIterator$KeyIndexHeapNode();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex$KeyIndexIterator* this$1, ::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray* nodes);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode* cloneHeapNode() override;
	virtual void gotoMark() override;
	virtual bool isLessThan(::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode* heapNode) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode* reset() override;
	virtual void setMark() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode* setStartNode(int32_t node) override;
	virtual int32_t step() override;
	::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex$KeyIndexIterator* this$1 = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray* _nodes = nullptr;
	int32_t _position = 0;
	int32_t _markPosition = 0;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_KeyIndex$KeyIndexIterator$KeyIndexHeapNode_h_