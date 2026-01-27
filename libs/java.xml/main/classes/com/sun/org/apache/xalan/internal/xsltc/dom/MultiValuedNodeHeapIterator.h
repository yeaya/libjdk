#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_MultiValuedNodeHeapIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_MultiValuedNodeHeapIterator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {
								class MultiValuedNodeHeapIterator$HeapNode;
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

class MultiValuedNodeHeapIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase {
	$class(MultiValuedNodeHeapIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase)
public:
	MultiValuedNodeHeapIterator();
	void init$();
	virtual void addHeapNode(::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode* node);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* cloneIterator() override;
	virtual void gotoMark() override;
	void heapify(int32_t i);
	virtual void init();
	virtual int32_t next() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* reset() override;
	virtual void setMark() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t node) override;
	static const int32_t InitSize = 8;
	int32_t _heapSize = 0;
	int32_t _size = 0;
	$Array<::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator$HeapNode>* _heap = nullptr;
	int32_t _free = 0;
	int32_t _returnedLast = 0;
	int32_t _cachedReturnedLast = 0;
	int32_t _cachedHeapSize = 0;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_MultiValuedNodeHeapIterator_h_