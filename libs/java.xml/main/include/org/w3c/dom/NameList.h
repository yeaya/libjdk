#ifndef _org_w3c_dom_NameList_h_
#define _org_w3c_dom_NameList_h_
//$ interface org.w3c.dom.NameList
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {

class $import NameList : public ::java::lang::Object {
	$interface(NameList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool contains($String* str) {return false;}
	virtual bool containsNS($String* namespaceURI, $String* name) {return false;}
	virtual int32_t getLength() {return 0;}
	virtual $String* getName(int32_t index) {return nullptr;}
	virtual $String* getNamespaceURI(int32_t index) {return nullptr;}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_NameList_h_