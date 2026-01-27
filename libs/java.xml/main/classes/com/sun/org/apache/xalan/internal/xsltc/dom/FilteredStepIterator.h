#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_FilteredStepIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_FilteredStepIterator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.FilteredStepIterator
//$ extends com.sun.org.apache.xalan.internal.xsltc.dom.StepIterator

#include <com/sun/org/apache/xalan/internal/xsltc/dom/StepIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {
								class Filter;
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

class FilteredStepIterator : public ::com::sun::org::apache::xalan::internal::xsltc::dom::StepIterator {
	$class(FilteredStepIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::dom::StepIterator)
public:
	FilteredStepIterator();
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* source, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator, ::com::sun::org::apache::xalan::internal::xsltc::dom::Filter* filter);
	virtual int32_t next() override;
	::com::sun::org::apache::xalan::internal::xsltc::dom::Filter* _filter = nullptr;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_FilteredStepIterator_h_