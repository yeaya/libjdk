#ifndef _com_sun_org_apache_xpath_internal_axes_FilterExprIteratorSimple$filterExprOwner_h_
#define _com_sun_org_apache_xpath_internal_axes_FilterExprIteratorSimple$filterExprOwner_h_
//$ class com.sun.org.apache.xpath.internal.axes.FilterExprIteratorSimple$filterExprOwner
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
							class FilterExprIteratorSimple;
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

class FilterExprIteratorSimple$filterExprOwner : public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(FilterExprIteratorSimple$filterExprOwner, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	FilterExprIteratorSimple$filterExprOwner();
	void init$(::com::sun::org::apache::xpath::internal::axes::FilterExprIteratorSimple* this$0);
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	::com::sun::org::apache::xpath::internal::axes::FilterExprIteratorSimple* this$0 = nullptr;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_FilterExprIteratorSimple$filterExprOwner_h_