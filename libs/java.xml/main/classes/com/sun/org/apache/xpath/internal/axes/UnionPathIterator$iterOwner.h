#ifndef _com_sun_org_apache_xpath_internal_axes_UnionPathIterator$iterOwner_h_
#define _com_sun_org_apache_xpath_internal_axes_UnionPathIterator$iterOwner_h_
//$ class com.sun.org.apache.xpath.internal.axes.UnionPathIterator$iterOwner
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
							class UnionPathIterator;
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

class UnionPathIterator$iterOwner : public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(UnionPathIterator$iterOwner, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	UnionPathIterator$iterOwner();
	void init$(::com::sun::org::apache::xpath::internal::axes::UnionPathIterator* this$0, int32_t index);
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	::com::sun::org::apache::xpath::internal::axes::UnionPathIterator* this$0 = nullptr;
	int32_t m_index = 0;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_UnionPathIterator$iterOwner_h_