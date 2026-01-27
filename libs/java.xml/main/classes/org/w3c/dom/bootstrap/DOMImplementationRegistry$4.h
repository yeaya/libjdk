#ifndef _org_w3c_dom_bootstrap_DOMImplementationRegistry$4_h_
#define _org_w3c_dom_bootstrap_DOMImplementationRegistry$4_h_
//$ class org.w3c.dom.bootstrap.DOMImplementationRegistry$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace bootstrap {

class DOMImplementationRegistry$4 : public ::java::security::PrivilegedAction {
	$class(DOMImplementationRegistry$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	DOMImplementationRegistry$4();
	void init$(::java::lang::ClassLoader* val$classLoader, $String* val$name);
	virtual $Object* run() override;
	$String* val$name = nullptr;
	::java::lang::ClassLoader* val$classLoader = nullptr;
};

			} // bootstrap
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_bootstrap_DOMImplementationRegistry$4_h_