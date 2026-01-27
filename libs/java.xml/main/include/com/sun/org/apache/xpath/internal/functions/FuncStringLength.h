#ifndef _com_sun_org_apache_xpath_internal_functions_FuncStringLength_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncStringLength_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncStringLength
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

class $import FuncStringLength : public ::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg {
	$class(FuncStringLength, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg)
public:
	FuncStringLength();
	using ::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	static const int64_t serialVersionUID = (int64_t)0xFDC8EDB6A8FF4661;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncStringLength_h_