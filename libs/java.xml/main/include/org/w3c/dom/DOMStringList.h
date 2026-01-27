#ifndef _org_w3c_dom_DOMStringList_h_
#define _org_w3c_dom_DOMStringList_h_
//$ interface org.w3c.dom.DOMStringList
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {

class $import DOMStringList : public ::java::lang::Object {
	$interface(DOMStringList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool contains($String* str) {return false;}
	virtual int32_t getLength() {return 0;}
	virtual $String* item(int32_t index) {return nullptr;}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_DOMStringList_h_