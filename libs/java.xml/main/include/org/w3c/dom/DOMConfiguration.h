#ifndef _org_w3c_dom_DOMConfiguration_h_
#define _org_w3c_dom_DOMConfiguration_h_
//$ interface org.w3c.dom.DOMConfiguration
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class DOMStringList;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {

class $import DOMConfiguration : public ::java::lang::Object {
	$interface(DOMConfiguration, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool canSetParameter($String* name, Object$* value) {return false;}
	virtual $Object* getParameter($String* name) {return nullptr;}
	virtual ::org::w3c::dom::DOMStringList* getParameterNames() {return nullptr;}
	virtual void setParameter($String* name, Object$* value) {}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_DOMConfiguration_h_