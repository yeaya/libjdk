#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_Filter_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_Filter_h_
//$ interface com.sun.org.apache.xalan.internal.xsltc.dom.Filter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

class Filter : public ::java::lang::Object {
	$interface(Filter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool test(int32_t node) {return false;}
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_Filter_h_