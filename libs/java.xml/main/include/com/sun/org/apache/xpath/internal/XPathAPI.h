#ifndef _com_sun_org_apache_xpath_internal_XPathAPI_h_
#define _com_sun_org_apache_xpath_internal_XPathAPI_h_
//$ class com.sun.org.apache.xpath.internal.XPathAPI
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class PrefixResolver;
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {
							class XObject;
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
			class NodeList;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace traversal {
				class NodeIterator;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

class $import XPathAPI : public ::java::lang::Object {
	$class(XPathAPI, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XPathAPI();
	void init$();
	static ::com::sun::org::apache::xpath::internal::objects::XObject* eval(::org::w3c::dom::Node* contextNode, $String* str);
	static ::com::sun::org::apache::xpath::internal::objects::XObject* eval(::org::w3c::dom::Node* contextNode, $String* str, ::org::w3c::dom::Node* namespaceNode);
	static ::com::sun::org::apache::xpath::internal::objects::XObject* eval(::org::w3c::dom::Node* contextNode, $String* str, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* prefixResolver);
	static ::org::w3c::dom::traversal::NodeIterator* selectNodeIterator(::org::w3c::dom::Node* contextNode, $String* str);
	static ::org::w3c::dom::traversal::NodeIterator* selectNodeIterator(::org::w3c::dom::Node* contextNode, $String* str, ::org::w3c::dom::Node* namespaceNode);
	static ::org::w3c::dom::NodeList* selectNodeList(::org::w3c::dom::Node* contextNode, $String* str);
	static ::org::w3c::dom::NodeList* selectNodeList(::org::w3c::dom::Node* contextNode, $String* str, ::org::w3c::dom::Node* namespaceNode);
	static ::org::w3c::dom::Node* selectSingleNode(::org::w3c::dom::Node* contextNode, $String* str);
	static ::org::w3c::dom::Node* selectSingleNode(::org::w3c::dom::Node* contextNode, $String* str, ::org::w3c::dom::Node* namespaceNode);
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_XPathAPI_h_