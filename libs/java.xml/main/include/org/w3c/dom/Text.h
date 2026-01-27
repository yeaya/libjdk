#ifndef _org_w3c_dom_Text_h_
#define _org_w3c_dom_Text_h_
//$ interface org.w3c.dom.Text
//$ extends org.w3c.dom.CharacterData

#include <org/w3c/dom/CharacterData.h>

namespace org {
	namespace w3c {
		namespace dom {

class $import Text : public ::org::w3c::dom::CharacterData {
	$interface(Text, $NO_CLASS_INIT, ::org::w3c::dom::CharacterData)
public:
	virtual $String* getWholeText() {return nullptr;}
	virtual bool isElementContentWhitespace() {return false;}
	virtual ::org::w3c::dom::Text* replaceWholeText($String* content) {return nullptr;}
	virtual ::org::w3c::dom::Text* splitText(int32_t offset) {return nullptr;}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_Text_h_