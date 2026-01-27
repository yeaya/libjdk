#ifndef _com_sun_org_apache_xpath_internal_axes_OneStepIterator_h_
#define _com_sun_org_apache_xpath_internal_axes_OneStepIterator_h_
//$ class com.sun.org.apache.xpath.internal.axes.OneStepIterator
//$ extends com.sun.org.apache.xpath.internal.axes.ChildTestIterator

#include <com/sun/org/apache/xpath/internal/axes/ChildTestIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMAxisIterator;
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

class OneStepIterator : public ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator {
	$class(OneStepIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator)
public:
	OneStepIterator();
	using ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator::execute;
	using ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator::getProximityPosition;
	void init$(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t analysis);
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator, int32_t axis);
	virtual $Object* clone() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* cloneWithReset() override;
	virtual void countProximityPosition(int32_t i) override;
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual void detach() override;
	virtual int32_t getAxis() override;
	virtual int32_t getLength() override;
	virtual int32_t getNextNode() override;
	virtual int32_t getProximityPosition(int32_t predicateIndex) override;
	virtual bool isReverseAxes() override;
	virtual void reset() override;
	virtual void setRoot(int32_t context, Object$* environment) override;
	static const int64_t serialVersionUID = (int64_t)0x402AB874E6139F8B;
	int32_t m_axis = 0;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* m_iterator = nullptr;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_OneStepIterator_h_