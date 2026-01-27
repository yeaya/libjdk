#ifndef _com_sun_org_apache_xpath_internal_functions_FunctionMultiArgs_h_
#define _com_sun_org_apache_xpath_internal_functions_FunctionMultiArgs_h_
//$ class com.sun.org.apache.xpath.internal.functions.FunctionMultiArgs
//$ extends com.sun.org.apache.xpath.internal.functions.Function3Args

#include <com/sun/org/apache/xpath/internal/functions/Function3Args.h>
#include <java/lang/Array.h>

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

class $import FunctionMultiArgs : public ::com::sun::org::apache::xpath::internal::functions::Function3Args {
	$class(FunctionMultiArgs, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::Function3Args)
public:
	FunctionMultiArgs();
	using ::com::sun::org::apache::xpath::internal::functions::Function3Args::execute;
	void init$();
	virtual void callArgVisitors(::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual bool canTraverseOutsideSubtree() override;
	virtual void checkNumberArgs(int32_t argNum) override;
	virtual bool deepEquals(::com::sun::org::apache::xpath::internal::Expression* expr) override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual $Array<::com::sun::org::apache::xpath::internal::Expression>* getArgs();
	virtual void reportWrongNumberArgs() override;
	virtual void setArg(::com::sun::org::apache::xpath::internal::Expression* arg, int32_t argNum) override;
	static const int64_t serialVersionUID = (int64_t)0x62C59436157A481D;
	$Array<::com::sun::org::apache::xpath::internal::Expression>* m_args = nullptr;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FunctionMultiArgs_h_