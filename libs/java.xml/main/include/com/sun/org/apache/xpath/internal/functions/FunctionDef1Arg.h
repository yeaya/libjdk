#ifndef _com_sun_org_apache_xpath_internal_functions_FunctionDef1Arg_h_
#define _com_sun_org_apache_xpath_internal_functions_FunctionDef1Arg_h_
//$ class com.sun.org.apache.xpath.internal.functions.FunctionDef1Arg
//$ extends com.sun.org.apache.xpath.internal.functions.FunctionOneArg

#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class XMLString;
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
						class XPathContext;
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

class $import FunctionDef1Arg : public ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg {
	$class(FunctionDef1Arg, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg)
public:
	FunctionDef1Arg();
	using ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg::execute;
	void init$();
	virtual bool Arg0IsNodesetExpr();
	virtual bool canTraverseOutsideSubtree() override;
	virtual void checkNumberArgs(int32_t argNum) override;
	virtual int32_t getArg0AsNode(::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	virtual double getArg0AsNumber(::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* getArg0AsString(::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	virtual void reportWrongNumberArgs() override;
	static const int64_t serialVersionUID = (int64_t)0x2044BB739A495690;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FunctionDef1Arg_h_