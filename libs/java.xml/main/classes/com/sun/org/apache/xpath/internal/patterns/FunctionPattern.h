#ifndef _com_sun_org_apache_xpath_internal_patterns_FunctionPattern_h_
#define _com_sun_org_apache_xpath_internal_patterns_FunctionPattern_h_
//$ class com.sun.org.apache.xpath.internal.patterns.FunctionPattern
//$ extends com.sun.org.apache.xpath.internal.patterns.StepPattern

#include <com/sun/org/apache/xpath/internal/patterns/StepPattern.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTM;
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
							class XObject;
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

class FunctionPattern : public ::com::sun::org::apache::xpath::internal::patterns::StepPattern {
	$class(FunctionPattern, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::patterns::StepPattern)
public:
	FunctionPattern();
	using ::com::sun::org::apache::xpath::internal::patterns::StepPattern::execute;
	void init$(::com::sun::org::apache::xpath::internal::Expression* expr, int32_t axis, int32_t predaxis);
	virtual void calcScore() override;
	virtual void callSubtreeVisitors(::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t context) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t context, ::com::sun::org::apache::xml::internal::dtm::DTM* dtm, int32_t expType) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	static const int64_t serialVersionUID = (int64_t)0xB4B02824A744CD28;
	::com::sun::org::apache::xpath::internal::Expression* m_functionExpr = nullptr;
};

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_patterns_FunctionPattern_h_