#ifndef _org_w3c_dom_DOMErrorHandler_h_
#define _org_w3c_dom_DOMErrorHandler_h_
//$ interface org.w3c.dom.DOMErrorHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class DOMError;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {

class $export DOMErrorHandler : public ::java::lang::Object {
	$interface(DOMErrorHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool handleError(::org::w3c::dom::DOMError* error) {return false;}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_DOMErrorHandler_h_