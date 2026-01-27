#ifndef _javax_xml_transform_dom_DOMLocator_h_
#define _javax_xml_transform_dom_DOMLocator_h_
//$ interface javax.xml.transform.dom.DOMLocator
//$ extends javax.xml.transform.SourceLocator

#include <javax/xml/transform/SourceLocator.h>

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

class $export DOMLocator : public ::javax::xml::transform::SourceLocator {
	$interface(DOMLocator, $NO_CLASS_INIT, ::javax::xml::transform::SourceLocator)
public:
	virtual ::org::w3c::dom::Node* getOriginatingNode() {return nullptr;}
};

			} // dom
		} // transform
	} // xml
} // javax

#endif // _javax_xml_transform_dom_DOMLocator_h_