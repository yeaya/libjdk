#ifndef _com_sun_org_apache_xpath_internal_functions_FuncCeiling_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncCeiling_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncCeiling
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

class $import FuncCeiling : public ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg {
	$class(FuncCeiling, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg)
public:
	FuncCeiling();
	using ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	static const int64_t serialVersionUID = (int64_t)0xEE4AC6D2A51E2B1D;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncCeiling_h_