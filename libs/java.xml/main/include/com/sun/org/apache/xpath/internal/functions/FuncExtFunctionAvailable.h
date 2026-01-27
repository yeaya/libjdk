#ifndef _com_sun_org_apache_xpath_internal_functions_FuncExtFunctionAvailable_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncExtFunctionAvailable_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncExtFunctionAvailable
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
						namespace compiler {
							class FunctionTable;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

class $import FuncExtFunctionAvailable : public ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg {
	$class(FuncExtFunctionAvailable, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg)
public:
	FuncExtFunctionAvailable();
	using ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void setFunctionTable(::com::sun::org::apache::xpath::internal::compiler::FunctionTable* aTable);
	static const int64_t serialVersionUID = (int64_t)0x4709AE7FAFE83EF1;
	::com::sun::org::apache::xpath::internal::compiler::FunctionTable* m_functionTable = nullptr;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncExtFunctionAvailable_h_