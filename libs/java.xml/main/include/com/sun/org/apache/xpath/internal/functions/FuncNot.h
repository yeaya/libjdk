#ifndef _com_sun_org_apache_xpath_internal_functions_FuncNot_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncNot_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncNot
//$ extends com.sun.org.apache.xpath.internal.functions.FunctionOneArg

#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>

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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

class $import FuncNot : public ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg {
	$class(FuncNot, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg)
public:
	FuncNot();
	using ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	static const int64_t serialVersionUID = (int64_t)0x654DBE706AE32D3E;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncNot_h_