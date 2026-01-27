#ifndef _com_sun_org_apache_xpath_internal_patterns_StepPattern$PredOwner_h_
#define _com_sun_org_apache_xpath_internal_patterns_StepPattern$PredOwner_h_
//$ class com.sun.org.apache.xpath.internal.patterns.StepPattern$PredOwner
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
						namespace patterns {
							class StepPattern;
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
						namespace patterns {

class StepPattern$PredOwner : public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(StepPattern$PredOwner, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	StepPattern$PredOwner();
	void init$(::com::sun::org::apache::xpath::internal::patterns::StepPattern* this$0, int32_t index);
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	::com::sun::org::apache::xpath::internal::patterns::StepPattern* this$0 = nullptr;
	int32_t m_index = 0;
};

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_patterns_StepPattern$PredOwner_h_