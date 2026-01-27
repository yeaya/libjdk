#ifndef _com_sun_org_apache_xpath_internal_ExpressionOwner_h_
#define _com_sun_org_apache_xpath_internal_ExpressionOwner_h_
//$ interface com.sun.org.apache.xpath.internal.ExpressionOwner
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import ExpressionOwner : public ::java::lang::Object {
	$interface(ExpressionOwner, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xpath::internal::Expression* getExpression() {return nullptr;}
	virtual void setExpression(::com::sun::org::apache::xpath::internal::Expression* exp) {}
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_ExpressionOwner_h_