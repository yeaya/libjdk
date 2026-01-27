#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_MultipleNodeCounter_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_MultipleNodeCounter_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.MultipleNodeCounter
//$ extends com.sun.org.apache.xalan.internal.xsltc.dom.NodeCounter

#include <com/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter.h>

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

class MultipleNodeCounter : public ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter {
	$class(MultipleNodeCounter, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter)
public:
	MultipleNodeCounter();
	using ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter::getCounter;
	void init$(::com::sun::org::apache::xalan::internal::xsltc::Translet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* document, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::Translet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* document, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator, bool hasFrom);
	virtual $String* getCounter() override;
	static ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter* getDefaultNodeCounter(::com::sun::org::apache::xalan::internal::xsltc::Translet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* document, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter* setStartNode(int32_t node) override;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* _precSiblings = nullptr;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_MultipleNodeCounter_h_