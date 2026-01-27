#ifndef _com_sun_org_apache_xpath_internal_functions_FuncSystemProperty_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncSystemProperty_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncSystemProperty
//$ extends com.sun.org.apache.xpath.internal.functions.FunctionOneArg

#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>

#pragma push_macro("XSLT_PROPERTIES")
#undef XSLT_PROPERTIES

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
		class Properties;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

class $import FuncSystemProperty : public ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg {
	$class(FuncSystemProperty, 0, ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg)
public:
	FuncSystemProperty();
	using ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	void loadPropertyFile(::java::util::Properties* target);
	static const int64_t serialVersionUID = (int64_t)0x3346D5380B84C043;
	static $String* XSLT_PROPERTIES;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("XSLT_PROPERTIES")

#endif // _com_sun_org_apache_xpath_internal_functions_FuncSystemProperty_h_