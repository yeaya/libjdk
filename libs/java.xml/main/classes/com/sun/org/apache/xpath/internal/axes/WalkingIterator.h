#ifndef _com_sun_org_apache_xpath_internal_axes_WalkingIterator_h_
#define _com_sun_org_apache_xpath_internal_axes_WalkingIterator_h_
//$ class com.sun.org.apache.xpath.internal.axes.WalkingIterator
//$ extends com.sun.org.apache.xpath.internal.axes.LocPathIterator
//$ implements com.sun.org.apache.xpath.internal.ExpressionOwner

#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>

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
						class Expression;
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
							class AxesWalker;
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

class WalkingIterator : public ::com::sun::org::apache::xpath::internal::axes::LocPathIterator, public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(WalkingIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::LocPathIterator, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	WalkingIterator();
	using ::com::sun::org::apache::xpath::internal::axes::LocPathIterator::execute;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t analysis, bool shouldLoadWalkers);
	void init$(::com::sun::org::apache::xml::internal::utils::PrefixResolver* nscontext);
	virtual void callVisitors(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual $Object* clone() override;
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual void detach() override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual int32_t getAnalysisBits() override;
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	::com::sun::org::apache::xpath::internal::axes::AxesWalker* getFirstWalker();
	::com::sun::org::apache::xpath::internal::axes::AxesWalker* getLastUsedWalker();
	virtual int32_t nextNode() override;
	virtual void reset() override;
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	void setFirstWalker(::com::sun::org::apache::xpath::internal::axes::AxesWalker* walker);
	void setLastUsedWalker(::com::sun::org::apache::xpath::internal::axes::AxesWalker* walker);
	virtual void setRoot(int32_t context, Object$* environment) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x7E6E0639DD78A4F2;
	::com::sun::org::apache::xpath::internal::axes::AxesWalker* m_lastUsedWalker = nullptr;
	::com::sun::org::apache::xpath::internal::axes::AxesWalker* m_firstWalker = nullptr;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_WalkingIterator_h_