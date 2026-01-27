#ifndef _com_sun_org_apache_xpath_internal_axes_DescendantIterator_h_
#define _com_sun_org_apache_xpath_internal_axes_DescendantIterator_h_
//$ class com.sun.org.apache.xpath.internal.axes.DescendantIterator
//$ extends com.sun.org.apache.xpath.internal.axes.LocPathIterator

#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>

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
						class Expression;
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

class DescendantIterator : public ::com::sun::org::apache::xpath::internal::axes::LocPathIterator {
	$class(DescendantIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::LocPathIterator)
public:
	DescendantIterator();
	using ::com::sun::org::apache::xpath::internal::axes::LocPathIterator::execute;
	void init$(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t analysis);
	void init$();
	virtual int32_t asNode(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* cloneWithReset() override;
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual void detach() override;
	virtual int32_t getAxis() override;
	virtual int32_t nextNode() override;
	virtual void setRoot(int32_t context, Object$* environment) override;
	static const int64_t serialVersionUID = (int64_t)0xEF7B1157CAFCBA16;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser* m_traverser = nullptr;
	int32_t m_axis = 0;
	int32_t m_extendedTypeID = 0;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_DescendantIterator_h_