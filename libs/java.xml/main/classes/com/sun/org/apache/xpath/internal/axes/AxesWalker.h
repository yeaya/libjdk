#ifndef _com_sun_org_apache_xpath_internal_axes_AxesWalker_h_
#define _com_sun_org_apache_xpath_internal_axes_AxesWalker_h_
//$ class com.sun.org.apache.xpath.internal.axes.AxesWalker
//$ extends com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest
//$ implements java.lang.Cloneable,com.sun.org.apache.xpath.internal.axes.PathComponent,com.sun.org.apache.xpath.internal.ExpressionOwner

#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/axes/PathComponent.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTM;
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

class AxesWalker : public ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest, public ::java::lang::Cloneable, public ::com::sun::org::apache::xpath::internal::axes::PathComponent, public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(AxesWalker, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest, ::java::lang::Cloneable, ::com::sun::org::apache::xpath::internal::axes::PathComponent, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	AxesWalker();
	using ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest::execute;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xpath::internal::axes::LocPathIterator* locPathIterator, int32_t axis);
	virtual void callVisitors(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual $Object* clone() override;
	virtual ::com::sun::org::apache::xpath::internal::axes::AxesWalker* cloneDeep(::com::sun::org::apache::xpath::internal::axes::WalkingIterator* cloneOwner, ::java::util::List* cloneList);
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual void detach();
	static ::com::sun::org::apache::xpath::internal::axes::AxesWalker* findClone(::com::sun::org::apache::xpath::internal::axes::AxesWalker* key, ::java::util::List* cloneList);
	virtual int32_t getAnalysisBits() override;
	virtual int32_t getAxis();
	int32_t getCurrentNode();
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getDTM(int32_t node);
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual int32_t getLastPos(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual int32_t getNextNode();
	virtual ::com::sun::org::apache::xpath::internal::axes::AxesWalker* getNextWalker();
	virtual ::com::sun::org::apache::xpath::internal::axes::AxesWalker* getPrevWalker();
	virtual int32_t getRoot();
	virtual void init(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t stepType);
	virtual bool isDocOrdered();
	virtual int32_t nextNode();
	int32_t returnNextNode(int32_t n);
	virtual void setDefaultDTM(::com::sun::org::apache::xml::internal::dtm::DTM* dtm);
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	virtual void setNextWalker(::com::sun::org::apache::xpath::internal::axes::AxesWalker* walker);
	virtual void setPrevWalker(::com::sun::org::apache::xpath::internal::axes::AxesWalker* walker);
	virtual void setRoot(int32_t root);
	virtual $String* toString() override;
	::com::sun::org::apache::xpath::internal::axes::WalkingIterator* wi();
	static const int64_t serialVersionUID = (int64_t)0xD6D689A7ADE94CE1;
	::com::sun::org::apache::xml::internal::dtm::DTM* m_dtm = nullptr;
	int32_t m_root = 0;
	int32_t m_currentNode = 0;
	bool m_isFresh = false;
	::com::sun::org::apache::xpath::internal::axes::AxesWalker* m_nextWalker = nullptr;
	::com::sun::org::apache::xpath::internal::axes::AxesWalker* m_prevWalker = nullptr;
	int32_t m_axis = 0;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser* m_traverser = nullptr;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_AxesWalker_h_