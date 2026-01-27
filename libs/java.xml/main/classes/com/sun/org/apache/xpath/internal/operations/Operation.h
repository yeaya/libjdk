#ifndef _com_sun_org_apache_xpath_internal_operations_Operation_h_
#define _com_sun_org_apache_xpath_internal_operations_Operation_h_
//$ class com.sun.org.apache.xpath.internal.operations.Operation
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

class Operation : public ::com::sun::org::apache::xpath::internal::Expression, public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(Operation, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::Expression, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	Operation();
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
	virtual ::com::sun::org::apache::xpath::internal::Expression* getLeftOperand();
	virtual ::com::sun::org::apache::xpath::internal::Expression* getRightOperand();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* operate(::com::sun::org::apache::xpath::internal::objects::XObject* left, ::com::sun::org::apache::xpath::internal::objects::XObject* right);
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	virtual void setLeftRight(::com::sun::org::apache::xpath::internal::Expression* l, ::com::sun::org::apache::xpath::internal::Expression* r);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xD5D9E9AEB1A01042;
	::com::sun::org::apache::xpath::internal::Expression* m_left = nullptr;
	::com::sun::org::apache::xpath::internal::Expression* m_right = nullptr;
};

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_operations_Operation_h_