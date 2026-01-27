#ifndef _com_sun_org_apache_xpath_internal_functions_FuncDoclocation_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncDoclocation_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncDoclocation
//$ extends com.sun.org.apache.xpath.internal.functions.FunctionDef1Arg

#include <com/sun/org/apache/xpath/internal/functions/FunctionDef1Arg.h>

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

class $export FuncDoclocation : public ::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg {
	$class(FuncDoclocation, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg)
public:
	FuncDoclocation();
	using ::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	static const int64_t serialVersionUID = (int64_t)0x67A7FA82B733B581;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncDoclocation_h_