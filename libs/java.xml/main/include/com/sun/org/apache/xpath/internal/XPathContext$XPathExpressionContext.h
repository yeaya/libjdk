#ifndef _com_sun_org_apache_xpath_internal_XPathContext$XPathExpressionContext_h_
#define _com_sun_org_apache_xpath_internal_XPathContext$XPathExpressionContext_h_
//$ class com.sun.org.apache.xpath.internal.XPathContext$XPathExpressionContext
//$ extends com.sun.org.apache.xalan.internal.extensions.ExpressionContext

#include <com/sun/org/apache/xalan/internal/extensions/ExpressionContext.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMManager;
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
				namespace xpath {
					namespace internal {

class $import XPathContext$XPathExpressionContext : public ::com::sun::org::apache::xalan::internal::extensions::ExpressionContext {
	$class(XPathContext$XPathExpressionContext, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::extensions::ExpressionContext)
public:
	XPathContext$XPathExpressionContext();
	void init$(::com::sun::org::apache::xpath::internal::XPathContext* this$0);
	virtual ::org::w3c::dom::Node* getContextNode() override;
	virtual ::org::w3c::dom::traversal::NodeIterator* getContextNodes() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMManager* getDTMManager();
	virtual ::javax::xml::transform::ErrorListener* getErrorListener() override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* getVariableOrParam(::com::sun::org::apache::xml::internal::utils::QName* qname) override;
	virtual ::com::sun::org::apache::xpath::internal::XPathContext* getXPathContext() override;
	virtual bool overrideDefaultParser();
	virtual void setOverrideDefaultParser(bool flag);
	virtual double toNumber(::org::w3c::dom::Node* n) override;
	using ::com::sun::org::apache::xalan::internal::extensions::ExpressionContext::toString;
	virtual $String* toString(::org::w3c::dom::Node* n) override;
	::com::sun::org::apache::xpath::internal::XPathContext* this$0 = nullptr;
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_XPathContext$XPathExpressionContext_h_