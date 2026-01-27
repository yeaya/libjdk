#ifndef _com_sun_org_apache_xpath_internal_functions_FuncExtFunction$ArgExtOwner_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncExtFunction$ArgExtOwner_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncExtFunction$ArgExtOwner
//$ extends com.sun.org.apache.xpath.internal.ExpressionOwner

#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class Expression;
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
							class FuncExtFunction;
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

class $import FuncExtFunction$ArgExtOwner : public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(FuncExtFunction$ArgExtOwner, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	FuncExtFunction$ArgExtOwner();
	void init$(::com::sun::org::apache::xpath::internal::functions::FuncExtFunction* this$0, ::com::sun::org::apache::xpath::internal::Expression* exp);
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	::com::sun::org::apache::xpath::internal::functions::FuncExtFunction* this$0 = nullptr;
	::com::sun::org::apache::xpath::internal::Expression* m_exp = nullptr;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncExtFunction$ArgExtOwner_h_