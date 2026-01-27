#ifndef _com_sun_org_apache_xpath_internal_axes_HasPositionalPredChecker_h_
#define _com_sun_org_apache_xpath_internal_axes_HasPositionalPredChecker_h_
//$ class com.sun.org.apache.xpath.internal.axes.HasPositionalPredChecker
//$ extends com.sun.org.apache.xpath.internal.XPathVisitor

#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class Expression;
						class ExpressionOwner;
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
							class LocPathIterator;
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
							class Function;
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

class HasPositionalPredChecker : public ::com::sun::org::apache::xpath::internal::XPathVisitor {
	$class(HasPositionalPredChecker, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::XPathVisitor)
public:
	HasPositionalPredChecker();
	void init$();
	static bool check(::com::sun::org::apache::xpath::internal::axes::LocPathIterator* path);
	virtual bool visitFunction(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::functions::Function* func) override;
	virtual bool visitPredicate(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::Expression* pred) override;
	bool m_hasPositionalPred = false;
	int32_t m_predDepth = 0;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_HasPositionalPredChecker_h_