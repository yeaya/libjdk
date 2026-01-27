#ifndef _org_w3c_dom_bootstrap_DOMImplementationRegistry$3_h_
#define _org_w3c_dom_bootstrap_DOMImplementationRegistry$3_h_
//$ class org.w3c.dom.bootstrap.DOMImplementationRegistry$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace org {
	namespace w3c {
		namespace dom {
			namespace bootstrap {

class DOMImplementationRegistry$3 : public ::java::security::PrivilegedAction {
	$class(DOMImplementationRegistry$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	DOMImplementationRegistry$3();
	void init$($String* val$name);
	virtual $Object* run() override;
	$String* val$name = nullptr;
};

			} // bootstrap
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_bootstrap_DOMImplementationRegistry$3_h_