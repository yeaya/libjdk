#ifndef _com_sun_org_apache_xpath_internal_functions_FunctionOneArg_h_
#define _com_sun_org_apache_xpath_internal_functions_FunctionOneArg_h_
//$ class com.sun.org.apache.xpath.internal.functions.FunctionOneArg
//$ extends com.sun.org.apache.xpath.internal.functions.Function
//$ implements com.sun.org.apache.xpath.internal.ExpressionOwner

#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>

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
						namespace functions {

class $import FunctionOneArg : public ::com::sun::org::apache::xpath::internal::functions::Function, public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(FunctionOneArg, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::Function, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	FunctionOneArg();
	using ::com::sun::org::apache::xpath::internal::functions::Function::execute;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void callArgVisitors(::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual bool canTraverseOutsideSubtree() override;
	virtual void checkNumberArgs(int32_t argNum) override;
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual ::com::sun::org::apache::xpath::internal::Expression* getArg0();
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual void reportWrongNumberArgs() override;
	virtual void setArg(::com::sun::org::apache::xpath::internal::Expression* arg, int32_t argNum) override;
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xB81C530740D0D0E2;
	::com::sun::org::apache::xpath::internal::Expression* m_arg0 = nullptr;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FunctionOneArg_h_