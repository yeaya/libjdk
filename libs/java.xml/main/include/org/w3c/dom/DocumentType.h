#ifndef _org_w3c_dom_DocumentType_h_
#define _org_w3c_dom_DocumentType_h_
//$ interface org.w3c.dom.DocumentType
//$ extends org.w3c.dom.Node

#include <org/w3c/dom/Node.h>

namespace org {
	namespace w3c {
		namespace dom {
			class NamedNodeMap;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {

class $import DocumentType : public ::org::w3c::dom::Node {
	$interface(DocumentType, $NO_CLASS_INIT, ::org::w3c::dom::Node)
public:
	virtual ::org::w3c::dom::NamedNodeMap* getEntities() {return nullptr;}
	virtual $String* getInternalSubset() {return nullptr;}
	virtual $String* getName() {return nullptr;}
	virtual ::org::w3c::dom::NamedNodeMap* getNotations() {return nullptr;}
	virtual $String* getPublicId() {return nullptr;}
	virtual $String* getSystemId() {return nullptr;}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_DocumentType_h_