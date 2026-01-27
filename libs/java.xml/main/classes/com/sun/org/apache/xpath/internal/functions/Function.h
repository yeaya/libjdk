#ifndef _com_sun_org_apache_xpath_internal_functions_Function_h_
#define _com_sun_org_apache_xpath_internal_functions_Function_h_
//$ class com.sun.org.apache.xpath.internal.functions.Function
//$ extends com.sun.org.apache.xpath.internal.Expression

#include <com/sun/org/apache/xpath/internal/Expression.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class ExpressionOwner;
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
							class XObject;
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
						namespace functions {

class $export Function : public ::com::sun::org::apache::xpath::internal::Expression {
	$class(Function, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::Expression)
public:
	Function();
	using ::com::sun::org::apache::xpath::internal::Expression::execute;
	void init$();
	virtual void callArgVisitors(::com::sun::org::apache::xpath::internal::XPathVisitor* visitor);
	virtual void callVisitors(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual void checkNumberArgs(int32_t argNum);
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void postCompileStep(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler);
	virtual void reportWrongNumberArgs();
	virtual void setArg(::com::sun::org::apache::xpath::internal::Expression* arg, int32_t argNum);
	static const int64_t serialVersionUID = (int64_t)0x6023FF31B9615858;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_Function_h_