#ifndef _com_sun_org_apache_xpath_internal_axes_ChildIterator_h_
#define _com_sun_org_apache_xpath_internal_axes_ChildIterator_h_
//$ class com.sun.org.apache.xpath.internal.axes.ChildIterator
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

class ChildIterator : public ::com::sun::org::apache::xpath::internal::axes::LocPathIterator {
	$class(ChildIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::LocPathIterator)
public:
	ChildIterator();
	using ::com::sun::org::apache::xpath::internal::axes::LocPathIterator::execute;
	void init$(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t analysis);
	virtual int32_t asNode(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual int32_t getAxis() override;
	virtual int32_t nextNode() override;
	static const int64_t serialVersionUID = (int64_t)0x9FC068F7381C0151;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_ChildIterator_h_