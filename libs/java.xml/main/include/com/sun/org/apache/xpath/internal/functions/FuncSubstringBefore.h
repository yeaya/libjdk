#ifndef _com_sun_org_apache_xpath_internal_functions_FuncSubstringBefore_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncSubstringBefore_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncSubstringBefore
//$ extends com.sun.org.apache.xpath.internal.functions.Function2Args

#include <com/sun/org/apache/xpath/internal/functions/Function2Args.h>

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

class $import FuncSubstringBefore : public ::com::sun::org::apache::xpath::internal::functions::Function2Args {
	$class(FuncSubstringBefore, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::Function2Args)
public:
	FuncSubstringBefore();
	using ::com::sun::org::apache::xpath::internal::functions::Function2Args::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	static const int64_t serialVersionUID = (int64_t)0x390B98DD6BF9B89F;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncSubstringBefore_h_