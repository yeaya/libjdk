#ifndef _com_sun_org_apache_xerces_internal_dom_DeferredNode_h_
#define _com_sun_org_apache_xerces_internal_dom_DeferredNode_h_
//$ interface com.sun.org.apache.xerces.internal.dom.DeferredNode
//$ extends org.w3c.dom.Node

#include <org/w3c/dom/Node.h>

#pragma push_macro("TYPE_NODE")
#undef TYPE_NODE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class DeferredNode : public ::org::w3c::dom::Node {
	$interface(DeferredNode, $NO_CLASS_INIT, ::org::w3c::dom::Node)
public:
	virtual int32_t getNodeIndex() {return 0;}
	static const int16_t TYPE_NODE = 20;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("TYPE_NODE")

#endif // _com_sun_org_apache_xerces_internal_dom_DeferredNode_h_