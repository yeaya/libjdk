#ifndef _com_sun_org_apache_xpath_internal_functions_FunctionMultiArgs$ArgMultiOwner_h_
#define _com_sun_org_apache_xpath_internal_functions_FunctionMultiArgs$ArgMultiOwner_h_
//$ class com.sun.org.apache.xpath.internal.functions.FunctionMultiArgs$ArgMultiOwner
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
							class FunctionMultiArgs;
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

class $export FunctionMultiArgs$ArgMultiOwner : public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(FunctionMultiArgs$ArgMultiOwner, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	FunctionMultiArgs$ArgMultiOwner();
	void init$(::com::sun::org::apache::xpath::internal::functions::FunctionMultiArgs* this$0, int32_t index);
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	::com::sun::org::apache::xpath::internal::functions::FunctionMultiArgs* this$0 = nullptr;
	int32_t m_argIndex = 0;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FunctionMultiArgs$ArgMultiOwner_h_