#ifndef _com_sun_org_apache_xml_internal_utils_DOM2Helper_h_
#define _com_sun_org_apache_xml_internal_utils_DOM2Helper_h_
//$ class com.sun.org.apache.xml.internal.utils.DOM2Helper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export DOM2Helper : public ::java::lang::Object {
	$class(DOM2Helper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DOM2Helper();
	void init$();
	static $String* getLocalNameOfNode(::org::w3c::dom::Node* n);
	static $String* getLocalNameOfNodeFallback(::org::w3c::dom::Node* n);
	static $String* getNamespaceOfNode(::org::w3c::dom::Node* n);
	static ::org::w3c::dom::Node* getParentOfNode(::org::w3c::dom::Node* node);
	static bool isNodeAfter(::org::w3c::dom::Node* node1, ::org::w3c::dom::Node* node2);
	static bool isNodeAfterSibling(::org::w3c::dom::Node* parent, ::org::w3c::dom::Node* child1, ::org::w3c::dom::Node* child2);
	static bool isNodeTheSame(::org::w3c::dom::Node* node1, ::org::w3c::dom::Node* node2);
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_DOM2Helper_h_