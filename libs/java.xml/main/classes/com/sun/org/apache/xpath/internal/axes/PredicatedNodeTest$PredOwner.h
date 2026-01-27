#ifndef _com_sun_org_apache_xpath_internal_axes_PredicatedNodeTest$PredOwner_h_
#define _com_sun_org_apache_xpath_internal_axes_PredicatedNodeTest$PredOwner_h_
//$ class com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest$PredOwner
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
							class PredicatedNodeTest;
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

class PredicatedNodeTest$PredOwner : public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(PredicatedNodeTest$PredOwner, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	PredicatedNodeTest$PredOwner();
	void init$(::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest* this$0, int32_t index);
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest* this$0 = nullptr;
	int32_t m_index = 0;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_PredicatedNodeTest$PredOwner_h_