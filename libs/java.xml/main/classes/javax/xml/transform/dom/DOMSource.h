#ifndef _javax_xml_transform_dom_DOMSource_h_
#define _javax_xml_transform_dom_DOMSource_h_
//$ class javax.xml.transform.dom.DOMSource
//$ extends javax.xml.transform.Source

#include <javax/xml/transform/Source.h>

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

class $export DOMSource : public ::javax::xml::transform::Source {
	$class(DOMSource, 0, ::javax::xml::transform::Source)
public:
	DOMSource();
	void init$();
	void init$(::org::w3c::dom::Node* n);
	void init$(::org::w3c::dom::Node* node, $String* systemID);
	virtual ::org::w3c::dom::Node* getNode();
	virtual $String* getSystemId() override;
	virtual bool isEmpty() override;
	virtual void setNode(::org::w3c::dom::Node* node);
	virtual void setSystemId($String* systemID) override;
	::org::w3c::dom::Node* node = nullptr;
	$String* systemID = nullptr;
	static $String* FEATURE;
};

			} // dom
		} // transform
	} // xml
} // javax

#pragma pop_macro("FEATURE")

#endif // _javax_xml_transform_dom_DOMSource_h_