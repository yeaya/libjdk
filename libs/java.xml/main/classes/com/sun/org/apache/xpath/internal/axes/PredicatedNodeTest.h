#ifndef _com_sun_org_apache_xpath_internal_axes_PredicatedNodeTest_h_
#define _com_sun_org_apache_xpath_internal_axes_PredicatedNodeTest_h_
//$ class com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest
//$ extends com.sun.org.apache.xpath.internal.patterns.NodeTest
//$ implements com.sun.org.apache.xpath.internal.axes.SubContextList

#include <com/sun/org/apache/xpath/internal/axes/SubContextList.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <java/lang/Array.h>

#pragma push_macro("DEBUG_PREDICATECOUNTING")
#undef DEBUG_PREDICATECOUNTING

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
							class LocPathIterator;
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
	namespace io {
		class ObjectInputStream;
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

class PredicatedNodeTest : public ::com::sun::org::apache::xpath::internal::patterns::NodeTest, public ::com::sun::org::apache::xpath::internal::axes::SubContextList {
	$class(PredicatedNodeTest, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::patterns::NodeTest, ::com::sun::org::apache::xpath::internal::axes::SubContextList)
public:
	PredicatedNodeTest();
	using ::com::sun::org::apache::xpath::internal::patterns::NodeTest::execute;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t getLastPos(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override {return 0;}
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xpath::internal::axes::LocPathIterator* locPathIterator);
	void init$();
	virtual int16_t acceptNode(int32_t n);
	virtual void callPredicateVisitors(::com::sun::org::apache::xpath::internal::XPathVisitor* visitor);
	virtual bool canTraverseOutsideSubtree() override;
	virtual $Object* clone() override;
	virtual void countProximityPosition(int32_t i);
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual bool executePredicates(int32_t context, ::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual ::com::sun::org::apache::xpath::internal::axes::LocPathIterator* getLocPathIterator();
	virtual ::com::sun::org::apache::xpath::internal::Expression* getPredicate(int32_t index);
	virtual int32_t getPredicateCount();
	virtual int32_t getPredicateIndex();
	virtual int32_t getProximityPosition();
	virtual int32_t getProximityPosition(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual int32_t getProximityPosition(int32_t predicateIndex);
	virtual void initPredicateInfo(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos);
	virtual void initProximityPosition(int32_t i);
	virtual bool isReverseAxes();
	virtual $String* nodeToString(int32_t n);
	void readObject(::java::io::ObjectInputStream* stream);
	virtual void resetProximityPositions();
	virtual void setLocPathIterator(::com::sun::org::apache::xpath::internal::axes::LocPathIterator* li);
	virtual void setPredicateCount(int32_t count);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xAA0C289749E4B1F9;
	int32_t m_predCount = 0;
	bool m_foundLast = false;
	::com::sun::org::apache::xpath::internal::axes::LocPathIterator* m_lpi = nullptr;
	int32_t m_predicateIndex = 0;
	$Array<::com::sun::org::apache::xpath::internal::Expression>* m_predicates = nullptr;
	$ints* m_proximityPositions = nullptr;
	static const bool DEBUG_PREDICATECOUNTING = false;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG_PREDICATECOUNTING")

#endif // _com_sun_org_apache_xpath_internal_axes_PredicatedNodeTest_h_