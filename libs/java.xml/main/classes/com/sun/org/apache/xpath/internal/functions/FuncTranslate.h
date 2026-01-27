#ifndef _com_sun_org_apache_xpath_internal_functions_FuncTranslate_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncTranslate_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncTranslate
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

class $export FuncTranslate : public ::com::sun::org::apache::xpath::internal::functions::Function3Args {
	$class(FuncTranslate, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::Function3Args)
public:
	FuncTranslate();
	using ::com::sun::org::apache::xpath::internal::functions::Function3Args::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	static const int64_t serialVersionUID = (int64_t)0xE8C8E607E2AB167E;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncTranslate_h_