#ifndef _com_sun_org_apache_xpath_internal_axes_FilterExprIteratorSimple_h_
#define _com_sun_org_apache_xpath_internal_axes_FilterExprIteratorSimple_h_
//$ class com.sun.org.apache.xpath.internal.axes.FilterExprIteratorSimple
//$ extends com.sun.org.apache.xpath.internal.axes.LocPathIterator

#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class PrefixResolver;
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
						class Expression;
						class XPathContext;
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

class FilterExprIteratorSimple : public ::com::sun::org::apache::xpath::internal::axes::LocPathIterator {
	$class(FilterExprIteratorSimple, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::LocPathIterator)
public:
	FilterExprIteratorSimple();
	using ::com::sun::org::apache::xpath::internal::axes::LocPathIterator::execute;
	void init$();
	void init$(::com::sun::org::apache::xpath::internal::Expression* expr);
	virtual void callPredicateVisitors(::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual void detach() override;
	static ::com::sun::org::apache::xpath::internal::objects::XNodeSet* executeFilterExpr(int32_t context, ::com::sun::org::apache::xpath::internal::XPathContext* xctxt, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* prefixResolver, bool isTopLevel, int32_t stackFrame, ::com::sun::org::apache::xpath::internal::Expression* expr);
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual int32_t getAnalysisBits() override;
	virtual int32_t getAxis() override;
	virtual ::com::sun::org::apache::xpath::internal::Expression* getInnerExpression();
	virtual bool isDocOrdered() override;
	virtual int32_t nextNode() override;
	virtual void setInnerExpression(::com::sun::org::apache::xpath::internal::Expression* expr);
	virtual void setRoot(int32_t context, Object$* environment) override;
	static const int64_t serialVersionUID = (int64_t)0x9F25B1397FCC2EA5;
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

#endif // _com_sun_org_apache_xpath_internal_axes_FilterExprIteratorSimple_h_