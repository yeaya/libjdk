#ifndef _com_sun_org_apache_xalan_internal_lib_Extensions_h_
#define _com_sun_org_apache_xalan_internal_lib_Extensions_h_
//$ class com.sun.org.apache.xalan.internal.lib.Extensions
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace extensions {
							class ExpressionContext;
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
						class NodeSet;
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
			class NodeList;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace lib {

class Extensions : public ::java::lang::Object {
	$class(Extensions, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Extensions();
	void init$();
	static ::org::w3c::dom::NodeList* difference(::org::w3c::dom::NodeList* nl1, ::org::w3c::dom::NodeList* nl2);
	static ::org::w3c::dom::NodeList* distinct(::org::w3c::dom::NodeList* nl);
	static ::com::sun::org::apache::xpath::internal::objects::XObject* evaluate(::com::sun::org::apache::xalan::internal::extensions::ExpressionContext* myContext, $String* xpathExpr);
	static bool hasSameNodes(::org::w3c::dom::NodeList* nl1, ::org::w3c::dom::NodeList* nl2);
	static ::org::w3c::dom::NodeList* intersection(::org::w3c::dom::NodeList* nl1, ::org::w3c::dom::NodeList* nl2);
	static ::com::sun::org::apache::xpath::internal::NodeSet* nodeset(::com::sun::org::apache::xalan::internal::extensions::ExpressionContext* myProcessor, Object$* rtf);
	static ::org::w3c::dom::NodeList* tokenize($String* toTokenize, $String* delims);
	static ::org::w3c::dom::NodeList* tokenize($String* toTokenize);
};

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_lib_Extensions_h_