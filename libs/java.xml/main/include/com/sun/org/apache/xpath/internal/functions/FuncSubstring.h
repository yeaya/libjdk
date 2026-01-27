#ifndef _com_sun_org_apache_xpath_internal_functions_FuncSubstring_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncSubstring_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncSubstring
//$ extends com.sun.org.apache.xpath.internal.functions.Function3Args

#include <com/sun/org/apache/xpath/internal/functions/Function3Args.h>

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

class $import FuncSubstring : public ::com::sun::org::apache::xpath::internal::functions::Function3Args {
	$class(FuncSubstring, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::Function3Args)
public:
	FuncSubstring();
	using ::com::sun::org::apache::xpath::internal::functions::Function3Args::execute;
	void init$();
	virtual void checkNumberArgs(int32_t argNum) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void reportWrongNumberArgs() override;
	static const int64_t serialVersionUID = (int64_t)0xACC786DD02F9A912;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncSubstring_h_