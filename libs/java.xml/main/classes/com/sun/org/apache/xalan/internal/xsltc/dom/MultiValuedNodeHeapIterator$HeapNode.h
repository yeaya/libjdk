#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_MultiValuedNodeHeapIterator$HeapNode_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_MultiValuedNodeHeapIterator$HeapNode_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator$HeapNode
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {
								class MultiValuedNodeHeapIterator;
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

class MultiValuedNodeHeapIterator$HeapNode : public ::java::lang::Cloneable {
	$class(MultiValuedNodeHeapIterator$HeapNode, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	MultiValuedNodeHeapIterator$HeapNode();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator* this$0);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode* cloneHeapNode();
	virtual void gotoMark();
	virtual bool isLessThan(::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode* heapNode) {return false;}
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode* reset() {return nullptr;}
	virtual void setMark();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode* setStartNode(int32_t node) {return nullptr;}
	virtual int32_t step() {return 0;}
	::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator* this$0 = nullptr;
	int32_t _node = 0;
	int32_t _markedNode = 0;
	bool _isStartSet = false;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_MultiValuedNodeHeapIterator$HeapNode_h_