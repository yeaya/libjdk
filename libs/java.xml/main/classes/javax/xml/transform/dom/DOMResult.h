#ifndef _javax_xml_transform_dom_DOMResult_h_
#define _javax_xml_transform_dom_DOMResult_h_
//$ class javax.xml.transform.dom.DOMResult
//$ extends javax.xml.transform.Result

#include <javax/xml/transform/Result.h>

#pragma push_macro("FEATURE")
#undef FEATURE

namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace javax {
	namespace xml {
		namespace transform {
			namespace dom {

class $export DOMResult : public ::javax::xml::transform::Result {
	$class(DOMResult, 0, ::javax::xml::transform::Result)
public:
	DOMResult();
	void init$();
	void init$(::org::w3c::dom::Node* node);
	void init$(::org::w3c::dom::Node* node, $String* systemId);
	void init$(::org::w3c::dom::Node* node, ::org::w3c::dom::Node* nextSibling);
	void init$(::org::w3c::dom::Node* node, ::org::w3c::dom::Node* nextSibling, $String* systemId);
	virtual ::org::w3c::dom::Node* getNextSibling();
	virtual ::org::w3c::dom::Node* getNode();
	virtual $String* getSystemId() override;
	virtual void setNextSibling(::org::w3c::dom::Node* nextSibling);
	virtual void setNode(::org::w3c::dom::Node* node);
	virtual void setSystemId($String* systemId) override;
	static $String* FEATURE;
	::org::w3c::dom::Node* node = nullptr;
	::org::w3c::dom::Node* nextSibling = nullptr;
	$String* systemId = nullptr;
};

			} // dom
		} // transform
	} // xml
} // javax

#pragma pop_macro("FEATURE")

#endif // _javax_xml_transform_dom_DOMResult_h_