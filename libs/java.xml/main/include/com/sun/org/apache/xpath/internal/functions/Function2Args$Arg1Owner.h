#ifndef _com_sun_org_apache_xpath_internal_functions_Function2Args$Arg1Owner_h_
#define _com_sun_org_apache_xpath_internal_functions_Function2Args$Arg1Owner_h_
//$ class com.sun.org.apache.xpath.internal.functions.Function2Args$Arg1Owner
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
							class Function2Args;
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

class $import Function2Args$Arg1Owner : public ::com::sun::org::apache::xpath::internal::ExpressionOwner {
	$class(Function2Args$Arg1Owner, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::ExpressionOwner)
public:
	Function2Args$Arg1Owner();
	void init$(::com::sun::org::apache::xpath::internal::functions::Function2Args* this$0);
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() override;
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) override;
	::com::sun::org::apache::xpath::internal::functions::Function2Args* this$0 = nullptr;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_Function2Args$Arg1Owner_h_