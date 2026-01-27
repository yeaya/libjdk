#ifndef _com_sun_org_apache_xpath_internal_functions_FuncExtFunction_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncExtFunction_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncExtFunction
//$ extends com.sun.org.apache.xpath.internal.functions.Function

#include <com/sun/org/apache/xpath/internal/functions/Function.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class Expression;
						class ExpressionNode;
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
						namespace functions {

class $export FuncExtFunction : public ::com::sun::org::apache::xpath::internal::functions::Function {
	$class(FuncExtFunction, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::Function)
public:
	FuncExtFunction();
	using ::com::sun::org::apache::xpath::internal::functions::Function::execute;
	void init$($String* namespace$, $String* extensionName, Object$* methodKey);
	virtual void callArgVisitors(::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual void checkNumberArgs(int32_t argNum) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void exprSetParent(::com::sun::org::apache::xpath::internal::ExpressionNode* n) override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual ::com::sun::org::apache::xpath::internal::Expression* getArg(int32_t n);
	virtual int32_t getArgCount();
	virtual $String* getFunctionName();
	virtual $Object* getMethodKey();
	virtual $String* getNamespace();
	virtual void reportWrongNumberArgs() override;
	virtual void setArg(::com::sun::org::apache::xpath::internal::Expression* arg, int32_t argNum) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x481C4F9119667BAE;
	$String* m_namespace = nullptr;
	$String* m_extensionName = nullptr;
	$Object* m_methodKey = nullptr;
	::java::util::List* m_argVec = nullptr;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncExtFunction_h_