#ifndef _com_sun_org_apache_xpath_internal_jaxp_JAXPVariableStack_h_
#define _com_sun_org_apache_xpath_internal_jaxp_JAXPVariableStack_h_
//$ class com.sun.org.apache.xpath.internal.jaxp.JAXPVariableStack
//$ extends com.sun.org.apache.xpath.internal.VariableStack

#include <com/sun/org/apache/xpath/internal/VariableStack.h>

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
		namespace xpath {
			class XPathVariableResolver;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace jaxp {

class JAXPVariableStack : public ::com::sun::org::apache::xpath::internal::VariableStack {
	$class(JAXPVariableStack, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::VariableStack)
public:
	JAXPVariableStack();
	void init$(::javax::xml::xpath::XPathVariableResolver* resolver);
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* getVariableOrParam(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, ::com::sun::org::apache::xml::internal::utils::QName* qname) override;
	::javax::xml::xpath::XPathVariableResolver* resolver = nullptr;
};

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_jaxp_JAXPVariableStack_h_