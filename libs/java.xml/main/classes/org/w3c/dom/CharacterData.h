#ifndef _org_w3c_dom_CharacterData_h_
#define _org_w3c_dom_CharacterData_h_
//$ interface org.w3c.dom.CharacterData
//$ extends org.w3c.dom.Node

#include <org/w3c/dom/Node.h>

namespace org {
	namespace w3c {
		namespace dom {

class $export CharacterData : public ::org::w3c::dom::Node {
	$interface(CharacterData, $NO_CLASS_INIT, ::org::w3c::dom::Node)
public:
	virtual void appendData($String* arg) {}
	virtual void deleteData(int32_t offset, int32_t count) {}
	virtual $String* getData() {return nullptr;}
	virtual int32_t getLength() {return 0;}
	virtual void insertData(int32_t offset, $String* arg) {}
	virtual void replaceData(int32_t offset, int32_t count, $String* arg) {}
	virtual void setData($String* data) {}
	virtual $String* substringData(int32_t offset, int32_t count) {return nullptr;}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_CharacterData_h_