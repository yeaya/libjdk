#ifndef _com_sun_org_apache_xpath_internal_functions_FuncConcat_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncConcat_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncConcat
//$ extends com.sun.org.apache.xpath.internal.functions.FunctionMultiArgs

#include <com/sun/org/apache/xpath/internal/functions/FunctionMultiArgs.h>

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

class $export FuncConcat : public ::com::sun::org::apache::xpath::internal::functions::FunctionMultiArgs {
	$class(FuncConcat, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::FunctionMultiArgs)
public:
	FuncConcat();
	using ::com::sun::org::apache::xpath::internal::functions::FunctionMultiArgs::execute;
	void init$();
	virtual void checkNumberArgs(int32_t argNum) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void reportWrongNumberArgs() override;
	static const int64_t serialVersionUID = (int64_t)0x181BE077840824AD;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncConcat_h_