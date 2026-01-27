#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_UnionIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_UnionIterator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.UnionIterator
//$ extends com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator

#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOM;
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

class UnionIterator : public ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator {
	$class(UnionIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator)
public:
	UnionIterator();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	::com::sun::org::apache::xalan::internal::xsltc::dom::UnionIterator* addIterator(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator);
	::com::sun::org::apache::xalan::internal::xsltc::DOM* _dom = nullptr;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_UnionIterator_h_