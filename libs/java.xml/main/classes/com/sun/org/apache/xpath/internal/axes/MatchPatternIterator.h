#ifndef _com_sun_org_apache_xpath_internal_axes_MatchPatternIterator_h_
#define _com_sun_org_apache_xpath_internal_axes_MatchPatternIterator_h_
//$ class com.sun.org.apache.xpath.internal.axes.MatchPatternIterator
//$ extends com.sun.org.apache.xpath.internal.axes.LocPathIterator

#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>

#pragma push_macro("DEBUG")
#undef DEBUG

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMAxisTraverser;
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
						namespace patterns {
							class StepPattern;
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

class MatchPatternIterator : public ::com::sun::org::apache::xpath::internal::axes::LocPathIterator {
	$class(MatchPatternIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::LocPathIterator)
public:
	MatchPatternIterator();
	using ::com::sun::org::apache::xpath::internal::axes::LocPathIterator::execute;
	using ::com::sun::org::apache::xpath::internal::axes::LocPathIterator::acceptNode;
	void init$(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t analysis);
	virtual int16_t acceptNode(int32_t n, ::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	virtual void detach() override;
	virtual int32_t getNextNode();
	virtual int32_t nextNode() override;
	virtual void setRoot(int32_t context, Object$* environment) override;
	static const int64_t serialVersionUID = (int64_t)0xB7D1CA349828B8E6;
	::com::sun::org::apache::xpath::internal::patterns::StepPattern* m_pattern = nullptr;
	int32_t m_superAxis = 0;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser* m_traverser = nullptr;
	static const bool DEBUG = false;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG")

#endif // _com_sun_org_apache_xpath_internal_axes_MatchPatternIterator_h_