#ifndef _com_sun_org_apache_xpath_internal_functions_Function2Args_h_
#define _com_sun_org_apache_xpath_internal_functions_Function2Args_h_
//$ class com.sun.org.apache.xpath.internal.functions.Function2Args
//$ extends com.sun.org.apache.xpath.internal.functions.FunctionOneArg

#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>

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

class $export Function2Args : public ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg {
	$class(Function2Args, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg)
public:
	Function2Args();
	using ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg::execute;
	void init$();
	virtual void callArgVisitors(::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual bool canTraverseOutsideSubtree() override;
	virtual void checkNumberArgs(int32_t argNum) override;
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual ::com::sun::org::apache::xpath::internal::Expression* getArg1();
	virtual void reportWrongNumberArgs() override;
	virtual void setArg(::com::sun::org::apache::xpath::internal::Expression* arg, int32_t argNum) override;
	static const int64_t serialVersionUID = (int64_t)0x4D5BDFC4080C0671;
	::com::sun::org::apache::xpath::internal::Expression* m_arg1 = nullptr;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_Function2Args_h_