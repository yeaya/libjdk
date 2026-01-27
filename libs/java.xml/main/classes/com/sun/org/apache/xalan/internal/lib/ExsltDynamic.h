#ifndef _com_sun_org_apache_xalan_internal_lib_ExsltDynamic_h_
#define _com_sun_org_apache_xalan_internal_lib_ExsltDynamic_h_
//$ class com.sun.org.apache.xalan.internal.lib.ExsltDynamic
//$ extends com.sun.org.apache.xalan.internal.lib.ExsltBase

#include <com/sun/org/apache/xalan/internal/lib/ExsltBase.h>

#pragma push_macro("EXSL_URI")
#undef EXSL_URI

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

class ExsltDynamic : public ::com::sun::org::apache::xalan::internal::lib::ExsltBase {
	$class(ExsltDynamic, 0, ::com::sun::org::apache::xalan::internal::lib::ExsltBase)
public:
	ExsltDynamic();
	void init$();
	static ::org::w3c::dom::NodeList* closure(::com::sun::org::apache::xalan::internal::extensions::ExpressionContext* myContext, ::org::w3c::dom::NodeList* nl, $String* expr);
	static ::com::sun::org::apache::xpath::internal::objects::XObject* evaluate(::com::sun::org::apache::xalan::internal::extensions::ExpressionContext* myContext, $String* xpathExpr);
	static ::org::w3c::dom::NodeList* map(::com::sun::org::apache::xalan::internal::extensions::ExpressionContext* myContext, ::org::w3c::dom::NodeList* nl, $String* expr);
	static double max(::com::sun::org::apache::xalan::internal::extensions::ExpressionContext* myContext, ::org::w3c::dom::NodeList* nl, $String* expr);
	static double min(::com::sun::org::apache::xalan::internal::extensions::ExpressionContext* myContext, ::org::w3c::dom::NodeList* nl, $String* expr);
	static double sum(::com::sun::org::apache::xalan::internal::extensions::ExpressionContext* myContext, ::org::w3c::dom::NodeList* nl, $String* expr);
	static $String* EXSL_URI;
};

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EXSL_URI")

#endif // _com_sun_org_apache_xalan_internal_lib_ExsltDynamic_h_