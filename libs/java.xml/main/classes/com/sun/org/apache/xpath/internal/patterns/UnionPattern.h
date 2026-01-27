#ifndef _com_sun_org_apache_xpath_internal_patterns_UnionPattern_h_
#define _com_sun_org_apache_xpath_internal_patterns_UnionPattern_h_
//$ class com.sun.org.apache.xpath.internal.patterns.UnionPattern
//$ extends com.sun.org.apache.xpath.internal.Expression

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class ExpressionOwner;
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
							class XObject;
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
							class StepPattern;
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
						namespace patterns {

class UnionPattern : public ::com::sun::org::apache::xpath::internal::Expression {
	$class(UnionPattern, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::Expression)
public:
	UnionPattern();
	using ::com::sun::org::apache::xpath::internal::Expression::execute;
	void init$();
	virtual void callVisitors(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual bool canTraverseOutsideSubtree() override;
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual $Array<::com::sun::org::apache::xpath::internal::patterns::StepPattern>* getPatterns();
	virtual void setPatterns($Array<::com::sun::org::apache::xpath::internal::patterns::StepPattern>* patterns);
	static const int64_t serialVersionUID = (int64_t)0xA36DCD18B1FB12A4;
	$Array<::com::sun::org::apache::xpath::internal::patterns::StepPattern>* m_patterns = nullptr;
};

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_patterns_UnionPattern_h_