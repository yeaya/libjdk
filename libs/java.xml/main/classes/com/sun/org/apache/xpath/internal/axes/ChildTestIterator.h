#ifndef _com_sun_org_apache_xpath_internal_axes_ChildTestIterator_h_
#define _com_sun_org_apache_xpath_internal_axes_ChildTestIterator_h_
//$ class com.sun.org.apache.xpath.internal.axes.ChildTestIterator
//$ extends com.sun.org.apache.xpath.internal.axes.BasicTestIterator

#include <com/sun/org/apache/xpath/internal/axes/BasicTestIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMAxisTraverser;
							class DTMIterator;
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

class ChildTestIterator : public ::com::sun::org::apache::xpath::internal::axes::BasicTestIterator {
	$class(ChildTestIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::BasicTestIterator)
public:
	ChildTestIterator();
	using ::com::sun::org::apache::xpath::internal::axes::BasicTestIterator::execute;
	void init$(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t analysis);
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser* traverser);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* cloneWithReset() override;
	virtual void detach() override;
	virtual int32_t getAxis() override;
	virtual int32_t getNextNode() override;
	virtual void setRoot(int32_t context, Object$* environment) override;
	static const int64_t serialVersionUID = (int64_t)0x91DAB1BF55347946;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser* m_traverser = nullptr;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_ChildTestIterator_h_