#ifndef _com_sun_org_apache_xpath_internal_patterns_FunctionPattern$FunctionOwner_h_
#define _com_sun_org_apache_xpath_internal_patterns_FunctionPattern$FunctionOwner_h_
//$ class com.sun.org.apache.xpath.internal.patterns.FunctionPattern$FunctionOwner
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
							class FunctionPattern;
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

class FunctionPattern$FunctionOwner : public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(FunctionPattern$FunctionOwner, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	FunctionPattern$FunctionOwner();
	void init$(::com::sun::org::apache::xpath::internal::patterns::FunctionPattern* this$0);
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	::com::sun::org::apache::xpath::internal::patterns::FunctionPattern* this$0 = nullptr;
};

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_patterns_FunctionPattern$FunctionOwner_h_