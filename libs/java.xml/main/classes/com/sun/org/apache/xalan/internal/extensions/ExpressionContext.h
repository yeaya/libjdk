#ifndef _com_sun_org_apache_xalan_internal_extensions_ExpressionContext_h_
#define _com_sun_org_apache_xalan_internal_extensions_ExpressionContext_h_
//$ interface com.sun.org.apache.xalan.internal.extensions.ExpressionContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class QName;
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
namespace javax {
	namespace xml {
		namespace transform {
			class ErrorListener;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
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
				namespace xalan {
					namespace internal {
						namespace extensions {

class $export ExpressionContext : public ::java::lang::Object {
	$interface(ExpressionContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::Node* getContextNode() {return nullptr;}
	virtual ::org::w3c::dom::traversal::NodeIterator* getContextNodes() {return nullptr;}
	virtual ::javax::xml::transform::ErrorListener* getErrorListener() {return nullptr;}
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* getVariableOrParam(::com::sun::org::apache::xml::internal::utils::QName* qname) {return nullptr;}
	virtual ::com::sun::org::apache::xpath::internal::XPathContext* getXPathContext() {return nullptr;}
	virtual double toNumber(::org::w3c::dom::Node* n) {return 0.0;}
	using ::java::lang::Object::toString;
	virtual $String* toString(::org::w3c::dom::Node* n) {return nullptr;}
};

						} // extensions
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_extensions_ExpressionContext_h_