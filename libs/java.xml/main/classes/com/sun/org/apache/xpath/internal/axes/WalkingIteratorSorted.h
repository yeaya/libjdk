#ifndef _com_sun_org_apache_xpath_internal_axes_WalkingIteratorSorted_h_
#define _com_sun_org_apache_xpath_internal_axes_WalkingIteratorSorted_h_
//$ class com.sun.org.apache.xpath.internal.axes.WalkingIteratorSorted
//$ extends com.sun.org.apache.xpath.internal.axes.WalkingIterator

#include <com/sun/org/apache/xpath/internal/axes/WalkingIterator.h>

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

class WalkingIteratorSorted : public ::com::sun::org::apache::xpath::internal::axes::WalkingIterator {
	$class(WalkingIteratorSorted, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::WalkingIterator)
public:
	WalkingIteratorSorted();
	using ::com::sun::org::apache::xpath::internal::axes::WalkingIterator::execute;
	void init$(::com::sun::org::apache::xml::internal::utils::PrefixResolver* nscontext);
	void init$(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t analysis, bool shouldLoadWalkers);
	virtual bool canBeWalkedInNaturalDocOrderStatic();
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual bool isDocOrdered() override;
	static const int64_t serialVersionUID = (int64_t)0xC160563CC9C0982B;
	bool m_inNaturalOrderStatic = false;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_WalkingIteratorSorted_h_