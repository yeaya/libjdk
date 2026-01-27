#ifndef _com_sun_org_apache_xpath_internal_patterns_ContextMatchStepPattern_h_
#define _com_sun_org_apache_xpath_internal_patterns_ContextMatchStepPattern_h_
//$ class com.sun.org.apache.xpath.internal.patterns.ContextMatchStepPattern
//$ extends com.sun.org.apache.xpath.internal.patterns.StepPattern

#include <com/sun/org/apache/xpath/internal/patterns/StepPattern.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class XPathContext;
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

class ContextMatchStepPattern : public ::com::sun::org::apache::xpath::internal::patterns::StepPattern {
	$class(ContextMatchStepPattern, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::patterns::StepPattern)
public:
	ContextMatchStepPattern();
	using ::com::sun::org::apache::xpath::internal::patterns::StepPattern::execute;
	using ::com::sun::org::apache::xpath::internal::patterns::StepPattern::executeRelativePathPattern;
	void init$(int32_t axis, int32_t paxis);
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* executeRelativePathPattern(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, ::com::sun::org::apache::xpath::internal::patterns::StepPattern* prevStep);
	static const int64_t serialVersionUID = (int64_t)0xE5CC259EEA0E55DA;
};

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_patterns_ContextMatchStepPattern_h_