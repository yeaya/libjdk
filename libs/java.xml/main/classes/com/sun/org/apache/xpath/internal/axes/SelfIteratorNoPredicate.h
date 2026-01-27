#ifndef _com_sun_org_apache_xpath_internal_axes_SelfIteratorNoPredicate_h_
#define _com_sun_org_apache_xpath_internal_axes_SelfIteratorNoPredicate_h_
//$ class com.sun.org.apache.xpath.internal.axes.SelfIteratorNoPredicate
//$ extends com.sun.org.apache.xpath.internal.axes.LocPathIterator

#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>

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
						namespace compiler {
							class Compiler;
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

class SelfIteratorNoPredicate : public ::com::sun::org::apache::xpath::internal::axes::LocPathIterator {
	$class(SelfIteratorNoPredicate, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::LocPathIterator)
public:
	SelfIteratorNoPredicate();
	using ::com::sun::org::apache::xpath::internal::axes::LocPathIterator::execute;
	void init$(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t analysis);
	void init$();
	virtual int32_t asNode(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual int32_t getLastPos(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual int32_t nextNode() override;
	static const int64_t serialVersionUID = (int64_t)0xC55713D85C66D5C7;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_SelfIteratorNoPredicate_h_