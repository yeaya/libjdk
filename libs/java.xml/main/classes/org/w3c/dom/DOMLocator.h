#ifndef _org_w3c_dom_DOMLocator_h_
#define _org_w3c_dom_DOMLocator_h_
//$ interface org.w3c.dom.DOMLocator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {

class $export DOMLocator : public ::java::lang::Object {
	$interface(DOMLocator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getByteOffset() {return 0;}
	virtual int32_t getColumnNumber() {return 0;}
	virtual int32_t getLineNumber() {return 0;}
	virtual ::org::w3c::dom::Node* getRelatedNode() {return nullptr;}
	virtual $String* getUri() {return nullptr;}
	virtual int32_t getUtf16Offset() {return 0;}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_DOMLocator_h_