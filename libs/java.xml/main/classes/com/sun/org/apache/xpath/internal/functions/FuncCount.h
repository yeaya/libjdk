#ifndef _com_sun_org_apache_xpath_internal_functions_FuncCount_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncCount_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncCount
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

class $export FuncCount : public ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg {
	$class(FuncCount, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg)
public:
	FuncCount();
	using ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	static const int64_t serialVersionUID = (int64_t)0x9D3E16F9788504E9;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncCount_h_