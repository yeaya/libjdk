#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_AnyNodeCounter$DefaultAnyNodeCounter_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_AnyNodeCounter$DefaultAnyNodeCounter_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.AnyNodeCounter$DefaultAnyNodeCounter
//$ extends com.sun.org.apache.xalan.internal.xsltc.dom.AnyNodeCounter

#include <com/sun/org/apache/xalan/internal/xsltc/dom/AnyNodeCounter.h>

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

class AnyNodeCounter$DefaultAnyNodeCounter : public ::com::sun::org::apache::xalan::internal::xsltc::dom::AnyNodeCounter {
	$class(AnyNodeCounter$DefaultAnyNodeCounter, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::dom::AnyNodeCounter)
public:
	AnyNodeCounter$DefaultAnyNodeCounter();
	using ::com::sun::org::apache::xalan::internal::xsltc::dom::AnyNodeCounter::getCounter;
	void init$(::com::sun::org::apache::xalan::internal::xsltc::Translet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* document, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator);
	virtual $String* getCounter() override;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_AnyNodeCounter$DefaultAnyNodeCounter_h_