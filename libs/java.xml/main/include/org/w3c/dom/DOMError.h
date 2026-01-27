#ifndef _org_w3c_dom_DOMError_h_
#define _org_w3c_dom_DOMError_h_
//$ interface org.w3c.dom.DOMError
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SEVERITY_ERROR")
#undef SEVERITY_ERROR
#pragma push_macro("SEVERITY_FATAL_ERROR")
#undef SEVERITY_FATAL_ERROR
#pragma push_macro("SEVERITY_WARNING")
#undef SEVERITY_WARNING

namespace org {
	namespace w3c {
		namespace dom {
			class DOMLocator;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {

class $import DOMError : public ::java::lang::Object {
	$interface(DOMError, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::DOMLocator* getLocation() {return nullptr;}
	virtual $String* getMessage() {return nullptr;}
	virtual $Object* getRelatedData() {return nullptr;}
	virtual $Object* getRelatedException() {return nullptr;}
	virtual int16_t getSeverity() {return 0;}
	virtual $String* getType() {return nullptr;}
	static const int16_t SEVERITY_WARNING = 1;
	static const int16_t SEVERITY_ERROR = 2;
	static const int16_t SEVERITY_FATAL_ERROR = 3;
};

		} // dom
	} // w3c
} // org

#pragma pop_macro("SEVERITY_ERROR")
#pragma pop_macro("SEVERITY_FATAL_ERROR")
#pragma pop_macro("SEVERITY_WARNING")

#endif // _org_w3c_dom_DOMError_h_