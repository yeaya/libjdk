#ifndef _com_sun_org_apache_xpath_internal_patterns_StepPattern_h_
#define _com_sun_org_apache_xpath_internal_patterns_StepPattern_h_
//$ class com.sun.org.apache.xpath.internal.patterns.StepPattern
//$ extends com.sun.org.apache.xpath.internal.patterns.NodeTest
//$ implements com.sun.org.apache.xpath.internal.axes.SubContextList,com.sun.org.apache.xpath.internal.ExpressionOwner

#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/axes/SubContextList.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <java/lang/Array.h>

#pragma push_macro("DEBUG_MATCHES")
#undef DEBUG_MATCHES

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTM;
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
						namespace objects {
							class XObject;
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
						namespace patterns {

class StepPattern : public ::com::sun::org::apache::xpath::internal::patterns::NodeTest, public ::com::sun::org::apache::xpath::internal::axes::SubContextList, public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(StepPattern, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::patterns::NodeTest, ::com::sun::org::apache::xpath::internal::axes::SubContextList, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	StepPattern();
	using ::com::sun::org::apache::xpath::internal::patterns::NodeTest::execute;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t whatToShow, $String* namespace$, $String* name, int32_t axis, int32_t axisForPredicate);
	void init$(int32_t whatToShow, int32_t axis, int32_t axisForPredicate);
	virtual void calcScore() override;
	virtual void calcTargetString();
	virtual void callSubtreeVisitors(::com::sun::org::apache::xpath::internal::XPathVisitor* visitor);
	virtual void callVisitors(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual bool canTraverseOutsideSubtree() override;
	bool checkProximityPosition(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t predPos, ::com::sun::org::apache::xml::internal::dtm::DTM* dtm, int32_t context, int32_t pos);
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t currentNode) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t currentNode, ::com::sun::org::apache::xml::internal::dtm::DTM* dtm, int32_t expType) override;
	bool executePredicates(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, ::com::sun::org::apache::xml::internal::dtm::DTM* dtm, int32_t currentNode);
	::com::sun::org::apache::xpath::internal::objects::XObject* executeRelativePathPattern(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, ::com::sun::org::apache::xml::internal::dtm::DTM* dtm, int32_t currentNode);
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual int32_t getAxis();
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual int32_t getLastPos(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual double getMatchScore(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t context);
	virtual ::com::sun::org::apache::xpath::internal::Expression* getPredicate(int32_t i);
	int32_t getPredicateCount();
	virtual $Array<::com::sun::org::apache::xpath::internal::Expression>* getPredicates();
	int32_t getProximityPosition(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t predPos, bool findLast);
	virtual int32_t getProximityPosition(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual ::com::sun::org::apache::xpath::internal::patterns::StepPattern* getRelativePathPattern();
	virtual $String* getTargetString();
	virtual void setAxis(int32_t axis);
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	virtual void setPredicates($Array<::com::sun::org::apache::xpath::internal::Expression>* predicates);
	virtual void setRelativePathPattern(::com::sun::org::apache::xpath::internal::patterns::StepPattern* expr);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x7DE50ADB02C28E44;
	int32_t m_axis = 0;
	$String* m_targetString = nullptr;
	::com::sun::org::apache::xpath::internal::patterns::StepPattern* m_relativePathPattern = nullptr;
	$Array<::com::sun::org::apache::xpath::internal::Expression>* m_predicates = nullptr;
	static const bool DEBUG_MATCHES = false;
};

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG_MATCHES")

#endif // _com_sun_org_apache_xpath_internal_patterns_StepPattern_h_