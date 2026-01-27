#ifndef _com_sun_org_apache_xpath_internal_axes_FilterExprIterator$filterExprOwner_h_
#define _com_sun_org_apache_xpath_internal_axes_FilterExprIterator$filterExprOwner_h_
//$ class com.sun.org.apache.xpath.internal.axes.FilterExprIterator$filterExprOwner
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
						namespace axes {
							class FilterExprIterator;
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
						namespace axes {

class FilterExprIterator$filterExprOwner : public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(FilterExprIterator$filterExprOwner, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	FilterExprIterator$filterExprOwner();
	void init$(::com::sun::org::apache::xpath::internal::axes::FilterExprIterator* this$0);
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	::com::sun::org::apache::xpath::internal::axes::FilterExprIterator* this$0 = nullptr;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_FilterExprIterator$filterExprOwner_h_