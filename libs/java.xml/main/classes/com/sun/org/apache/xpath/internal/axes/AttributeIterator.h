#ifndef _com_sun_org_apache_xpath_internal_axes_AttributeIterator_h_
#define _com_sun_org_apache_xpath_internal_axes_AttributeIterator_h_
//$ class com.sun.org.apache.xpath.internal.axes.AttributeIterator
//$ extends com.sun.org.apache.xpath.internal.axes.ChildTestIterator

#include <com/sun/org/apache/xpath/internal/axes/ChildTestIterator.h>

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

class AttributeIterator : public ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator {
	$class(AttributeIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator)
public:
	AttributeIterator();
	using ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator::execute;
	void init$(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t analysis);
	virtual int32_t getAxis() override;
	virtual int32_t getNextNode() override;
	static const int64_t serialVersionUID = (int64_t)0x8B2D4DB23415C4CA;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_AttributeIterator_h_