#ifndef _com_sun_org_apache_xpath_internal_functions_Function3Args$Arg2Owner_h_
#define _com_sun_org_apache_xpath_internal_functions_Function3Args$Arg2Owner_h_
//$ class com.sun.org.apache.xpath.internal.functions.Function3Args$Arg2Owner
//$ extends com.sun.org.apache.xpath.internal.ExpressionOwner

#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class Expression;
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
							class Function3Args;
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

class $import Function3Args$Arg2Owner : public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(Function3Args$Arg2Owner, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	Function3Args$Arg2Owner();
	void init$(::com::sun::org::apache::xpath::internal::functions::Function3Args* this$0);
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	::com::sun::org::apache::xpath::internal::functions::Function3Args* this$0 = nullptr;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_Function3Args$Arg2Owner_h_