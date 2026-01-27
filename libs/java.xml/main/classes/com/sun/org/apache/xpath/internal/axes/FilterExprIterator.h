#ifndef _com_sun_org_apache_xpath_internal_axes_FilterExprIterator_h_
#define _com_sun_org_apache_xpath_internal_axes_FilterExprIterator_h_
//$ class com.sun.org.apache.xpath.internal.axes.FilterExprIterator
//$ extends com.sun.org.apache.xpath.internal.axes.BasicTestIterator

#include <com/sun/org/apache/xpath/internal/axes/BasicTestIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class Expression;
						class XPathVisitor;
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
							class XNodeSet;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

class FilterExprIterator : public ::com::sun::org::apache::xpath::internal::axes::BasicTestIterator {
	$class(FilterExprIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::BasicTestIterator)
public:
	FilterExprIterator();
	using ::com::sun::org::apache::xpath::internal::axes::BasicTestIterator::execute;
	void init$();
	void init$(::com::sun::org::apache::xpath::internal::Expression* expr);
	virtual void callPredicateVisitors(::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual void detach() override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual int32_t getAnalysisBits() override;
	virtual ::com::sun::org::apache::xpath::internal::Expression* getInnerExpression();
	virtual int32_t getNextNode() override;
	virtual bool isDocOrdered() override;
	virtual void setInnerExpression(::com::sun::org::apache::xpath::internal::Expression* expr);
	virtual void setRoot(int32_t context, Object$* environment) override;
	static const int64_t serialVersionUID = (int64_t)0x236B26A548A4CE8E;
	::com::sun::org::apache::xpath::internal::Expression* m_expr = nullptr;
	::com::sun::org::apache::xpath::internal::objects::XNodeSet* m_exprObj = nullptr;
	bool m_mustHardReset = false;
	bool m_canDetachNodeset = false;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_FilterExprIterator_h_