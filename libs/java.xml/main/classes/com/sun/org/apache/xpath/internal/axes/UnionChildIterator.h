#ifndef _com_sun_org_apache_xpath_internal_axes_UnionChildIterator_h_
#define _com_sun_org_apache_xpath_internal_axes_UnionChildIterator_h_
//$ class com.sun.org.apache.xpath.internal.axes.UnionChildIterator
//$ extends com.sun.org.apache.xpath.internal.axes.ChildTestIterator

#include <com/sun/org/apache/xpath/internal/axes/ChildTestIterator.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {
							class PredicatedNodeTest;
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

class UnionChildIterator : public ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator {
	$class(UnionChildIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator)
public:
	UnionChildIterator();
	using ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator::execute;
	void init$();
	virtual int16_t acceptNode(int32_t n) override;
	virtual void addNodeTest(::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest* test);
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	static const int64_t serialVersionUID = (int64_t)0x30938EEC96F3F3E7;
	$Array<::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest>* m_nodeTests = nullptr;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_UnionChildIterator_h_