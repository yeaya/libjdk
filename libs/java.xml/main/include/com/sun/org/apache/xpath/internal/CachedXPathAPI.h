#ifndef _com_sun_org_apache_xpath_internal_CachedXPathAPI_h_
#define _com_sun_org_apache_xpath_internal_CachedXPathAPI_h_
//$ class com.sun.org.apache.xpath.internal.CachedXPathAPI
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
						class XPathContext;
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

class $import CachedXPathAPI : public ::java::lang::Object {
	$class(CachedXPathAPI, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CachedXPathAPI();
	void init$();
	void init$(::com::sun::org::apache::xpath::internal::CachedXPathAPI* priorXPathAPI);
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* eval(::org::w3c::dom::Node* contextNode, $String* str);
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* eval(::org::w3c::dom::Node* contextNode, $String* str, ::org::w3c::dom::Node* namespaceNode);
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* eval(::org::w3c::dom::Node* contextNode, $String* str, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* prefixResolver);
	virtual ::com::sun::org::apache::xpath::internal::XPathContext* getXPathContext();
	virtual ::org::w3c::dom::traversal::NodeIterator* selectNodeIterator(::org::w3c::dom::Node* contextNode, $String* str);
	virtual ::org::w3c::dom::traversal::NodeIterator* selectNodeIterator(::org::w3c::dom::Node* contextNode, $String* str, ::org::w3c::dom::Node* namespaceNode);
	virtual ::org::w3c::dom::NodeList* selectNodeList(::org::w3c::dom::Node* contextNode, $String* str);
	virtual ::org::w3c::dom::NodeList* selectNodeList(::org::w3c::dom::Node* contextNode, $String* str, ::org::w3c::dom::Node* namespaceNode);
	virtual ::org::w3c::dom::Node* selectSingleNode(::org::w3c::dom::Node* contextNode, $String* str);
	virtual ::org::w3c::dom::Node* selectSingleNode(::org::w3c::dom::Node* contextNode, $String* str, ::org::w3c::dom::Node* namespaceNode);
	::com::sun::org::apache::xpath::internal::XPathContext* xpathSupport = nullptr;
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_CachedXPathAPI_h_