#ifndef _com_sun_org_apache_xpath_internal_functions_FuncFalse_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncFalse_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncFalse
//$ extends com.sun.org.apache.xpath.internal.functions.Function

#include <com/sun/org/apache/xpath/internal/functions/Function.h>

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
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

class $import FuncFalse : public ::com::sun::org::apache::xpath::internal::functions::Function {
	$class(FuncFalse, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::Function)
public:
	FuncFalse();
	using ::com::sun::org::apache::xpath::internal::functions::Function::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	static const int64_t serialVersionUID = (int64_t)0x555C73639D54771F;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncFalse_h_