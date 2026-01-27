#ifndef _javax_xml_xpath_XPathNodes_h_
#define _javax_xml_xpath_XPathNodes_h_
//$ interface javax.xml.xpath.XPathNodes
//$ extends java.lang.Iterable

#include <java/lang/Iterable.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace javax {
	namespace xml {
		namespace xpath {

class $export XPathNodes : public ::java::lang::Iterable {
	$interface(XPathNodes, $NO_CLASS_INIT, ::java::lang::Iterable)
public:
	virtual ::org::w3c::dom::Node* get(int32_t index) {return nullptr;}
	virtual ::java::util::Iterator* iterator() override {return nullptr;}
	virtual int32_t size() {return 0;}
};

		} // xpath
	} // xml
} // javax

#endif // _javax_xml_xpath_XPathNodes_h_