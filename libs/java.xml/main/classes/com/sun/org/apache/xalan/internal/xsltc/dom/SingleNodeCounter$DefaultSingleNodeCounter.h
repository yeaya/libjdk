#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_SingleNodeCounter$DefaultSingleNodeCounter_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_SingleNodeCounter$DefaultSingleNodeCounter_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.SingleNodeCounter$DefaultSingleNodeCounter
//$ extends com.sun.org.apache.xalan.internal.xsltc.dom.SingleNodeCounter

#include <com/sun/org/apache/xalan/internal/xsltc/dom/SingleNodeCounter.h>

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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {
								class NodeCounter;
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

class SingleNodeCounter$DefaultSingleNodeCounter : public ::com::sun::org::apache::xalan::internal::xsltc::dom::SingleNodeCounter {
	$class(SingleNodeCounter$DefaultSingleNodeCounter, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::dom::SingleNodeCounter)
public:
	SingleNodeCounter$DefaultSingleNodeCounter();
	using ::com::sun::org::apache::xalan::internal::xsltc::dom::SingleNodeCounter::getCounter;
	void init$(::com::sun::org::apache::xalan::internal::xsltc::Translet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* document, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator);
	virtual $String* getCounter() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter* setStartNode(int32_t node) override;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_SingleNodeCounter$DefaultSingleNodeCounter_h_