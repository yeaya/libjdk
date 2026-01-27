#ifndef _com_sun_org_apache_xpath_internal_operations_UnaryOperation_h_
#define _com_sun_org_apache_xpath_internal_operations_UnaryOperation_h_
//$ class com.sun.org.apache.xpath.internal.operations.UnaryOperation
//$ extends com.sun.org.apache.xpath.internal.Expression
//$ implements com.sun.org.apache.xpath.internal.ExpressionOwner

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
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
						namespace operations {

class UnaryOperation : public ::com::sun::org::apache::xpath::internal::Expression, public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(UnaryOperation, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::Expression, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	UnaryOperation();
	using ::com::sun::org::apache::xpath::internal::Expression::execute;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void callVisitors(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual bool canTraverseOutsideSubtree() override;
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual ::com::sun::org::apache::xpath::internal::Expression* getOperand();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* operate(::com::sun::org::apache::xpath::internal::objects::XObject* right) {return nullptr;}
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	virtual void setRight(::com::sun::org::apache::xpath::internal::Expression* r);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x5AB4D598174FD7D6;
	::com::sun::org::apache::xpath::internal::Expression* m_right = nullptr;
};

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_operations_UnaryOperation_h_