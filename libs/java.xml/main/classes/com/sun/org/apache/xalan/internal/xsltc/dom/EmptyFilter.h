#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_EmptyFilter_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_EmptyFilter_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.EmptyFilter
//$ extends com.sun.org.apache.xalan.internal.xsltc.dom.Filter

#include <com/sun/org/apache/xalan/internal/xsltc/dom/Filter.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

class EmptyFilter : public ::com::sun::org::apache::xalan::internal::xsltc::dom::Filter {
	$class(EmptyFilter, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::dom::Filter)
public:
	EmptyFilter();
	void init$();
	virtual bool test(int32_t node) override;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_EmptyFilter_h_