#ifndef _org_w3c_dom_ls_DOMImplementationLS_h_
#define _org_w3c_dom_ls_DOMImplementationLS_h_
//$ interface org.w3c.dom.ls.DOMImplementationLS
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MODE_ASYNCHRONOUS")
#undef MODE_ASYNCHRONOUS
#pragma push_macro("MODE_SYNCHRONOUS")
#undef MODE_SYNCHRONOUS

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSInput;
				class LSOutput;
				class LSParser;
				class LSSerializer;
			}
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

class $import DOMImplementationLS : public ::java::lang::Object {
	$interface(DOMImplementationLS, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::ls::LSInput* createLSInput() {return nullptr;}
	virtual ::org::w3c::dom::ls::LSOutput* createLSOutput() {return nullptr;}
	virtual ::org::w3c::dom::ls::LSParser* createLSParser(int16_t mode, $String* schemaType) {return nullptr;}
	virtual ::org::w3c::dom::ls::LSSerializer* createLSSerializer() {return nullptr;}
	static const int16_t MODE_SYNCHRONOUS = 1;
	static const int16_t MODE_ASYNCHRONOUS = 2;
};

			} // ls
		} // dom
	} // w3c
} // org

#pragma pop_macro("MODE_ASYNCHRONOUS")
#pragma pop_macro("MODE_SYNCHRONOUS")

#endif // _org_w3c_dom_ls_DOMImplementationLS_h_