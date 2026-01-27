#ifndef _com_sun_org_apache_xpath_internal_axes_OneStepIteratorForward_h_
#define _com_sun_org_apache_xpath_internal_axes_OneStepIteratorForward_h_
//$ class com.sun.org.apache.xpath.internal.axes.OneStepIteratorForward
//$ extends com.sun.org.apache.xpath.internal.axes.ChildTestIterator

#include <com/sun/org/apache/xpath/internal/axes/ChildTestIterator.h>

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

class OneStepIteratorForward : public ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator {
	$class(OneStepIteratorForward, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator)
public:
	OneStepIteratorForward();
	using ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator::execute;
	void init$(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t analysis);
	void init$(int32_t axis);
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual int32_t getAxis() override;
	virtual int32_t getNextNode() override;
	virtual void setRoot(int32_t context, Object$* environment) override;
	static const int64_t serialVersionUID = (int64_t)0xEA1D9882FB705B1A;
	int32_t m_axis = 0;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_OneStepIteratorForward_h_