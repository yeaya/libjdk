#ifndef _com_sun_org_apache_xpath_internal_operations_Operation$LeftExprOwner_h_
#define _com_sun_org_apache_xpath_internal_operations_Operation$LeftExprOwner_h_
//$ class com.sun.org.apache.xpath.internal.operations.Operation$LeftExprOwner
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
						namespace operations {
							class Operation;
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
						namespace operations {

class Operation$LeftExprOwner : public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(Operation$LeftExprOwner, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	Operation$LeftExprOwner();
	void init$(::com::sun::org::apache::xpath::internal::operations::Operation* this$0);
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	::com::sun::org::apache::xpath::internal::operations::Operation* this$0 = nullptr;
};

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_operations_Operation$LeftExprOwner_h_