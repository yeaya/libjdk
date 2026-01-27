#ifndef _com_sun_org_apache_xpath_internal_axes_FilterExprWalker_h_
#define _com_sun_org_apache_xpath_internal_axes_FilterExprWalker_h_
//$ class com.sun.org.apache.xpath.internal.axes.FilterExprWalker
//$ extends com.sun.org.apache.xpath.internal.axes.AxesWalker

#include <com/sun/org/apache/xpath/internal/axes/AxesWalker.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class Expression;
						class XPathContext;
						class XPathVisitor;
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
							class WalkingIterator;
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
						namespace objects {
							class XNodeSet;
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

class FilterExprWalker : public ::com::sun::org::apache::xpath::internal::axes::AxesWalker {
	$class(FilterExprWalker, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::AxesWalker)
public:
	FilterExprWalker();
	using ::com::sun::org::apache::xpath::internal::axes::AxesWalker::execute;
	void init$(::com::sun::org::apache::xpath::internal::axes::WalkingIterator* locPathIterator);
	virtual int16_t acceptNode(int32_t n) override;
	virtual void callPredicateVisitors(::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual $Object* clone() override;
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual void detach() override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual int32_t getAnalysisBits() override;
	virtual int32_t getAxis() override;
	virtual ::com::sun::org::apache::xpath::internal::Expression* getInnerExpression();
	virtual int32_t getLastPos(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual int32_t getNextNode() override;
	virtual void init(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t stepType) override;
	virtual bool isDocOrdered() override;
	virtual void setInnerExpression(::com::sun::org::apache::xpath::internal::Expression* expr);
	virtual void setRoot(int32_t root) override;
	static const int64_t serialVersionUID = (int64_t)0x4BBBCE8B5BBEB3B7;
	::com::sun::org::apache::xpath::internal::Expression* m_expr = nullptr;
	::com::sun::org::apache::xpath::internal::objects::XNodeSet* m_exprObj = nullptr;
	bool m_mustHardReset = false;
	bool m_canDetachNodeset = false;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_FilterExprWalker_h_