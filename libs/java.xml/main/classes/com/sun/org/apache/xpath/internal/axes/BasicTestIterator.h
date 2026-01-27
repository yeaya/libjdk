#ifndef _com_sun_org_apache_xpath_internal_axes_BasicTestIterator_h_
#define _com_sun_org_apache_xpath_internal_axes_BasicTestIterator_h_
//$ class com.sun.org.apache.xpath.internal.axes.BasicTestIterator
//$ extends com.sun.org.apache.xpath.internal.axes.LocPathIterator

#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
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
				namespace xml {
					namespace internal {
						namespace utils {
							class PrefixResolver;
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

class BasicTestIterator : public ::com::sun::org::apache::xpath::internal::axes::LocPathIterator {
	$class(BasicTestIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::LocPathIterator)
public:
	BasicTestIterator();
	using ::com::sun::org::apache::xpath::internal::axes::LocPathIterator::execute;
	void init$();
	void init$(::com::sun::org::apache::xml::internal::utils::PrefixResolver* nscontext);
	void init$(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t analysis);
	void init$(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t analysis, bool shouldLoadWalkers);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* cloneWithReset() override;
	virtual int32_t getNextNode() {return 0;}
	virtual int32_t nextNode() override;
	static const int64_t serialVersionUID = (int64_t)0x30A59ACA78C5C1EF;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_BasicTestIterator_h_