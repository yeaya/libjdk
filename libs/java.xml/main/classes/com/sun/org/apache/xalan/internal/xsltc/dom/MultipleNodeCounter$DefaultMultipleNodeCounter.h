#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_MultipleNodeCounter$DefaultMultipleNodeCounter_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_MultipleNodeCounter$DefaultMultipleNodeCounter_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.MultipleNodeCounter$DefaultMultipleNodeCounter
//$ extends com.sun.org.apache.xalan.internal.xsltc.dom.MultipleNodeCounter

#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultipleNodeCounter.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOM;
							class Translet;
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

class MultipleNodeCounter$DefaultMultipleNodeCounter : public ::com::sun::org::apache::xalan::internal::xsltc::dom::MultipleNodeCounter {
	$class(MultipleNodeCounter$DefaultMultipleNodeCounter, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::dom::MultipleNodeCounter)
public:
	MultipleNodeCounter$DefaultMultipleNodeCounter();
	using ::com::sun::org::apache::xalan::internal::xsltc::dom::MultipleNodeCounter::getCounter;
	void init$(::com::sun::org::apache::xalan::internal::xsltc::Translet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* document, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator);
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_MultipleNodeCounter$DefaultMultipleNodeCounter_h_