#ifndef _com_sun_org_apache_xpath_internal_functions_FuncContains_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncContains_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncContains
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

class $export FuncContains : public ::com::sun::org::apache::xpath::internal::functions::Function2Args {
	$class(FuncContains, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::Function2Args)
public:
	FuncContains();
	using ::com::sun::org::apache::xpath::internal::functions::Function2Args::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	static const int64_t serialVersionUID = (int64_t)0x4690AC9FDBC0E66B;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncContains_h_