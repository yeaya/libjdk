#ifndef _com_sun_org_apache_xpath_internal_functions_FuncLast_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncLast_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncLast
//$ extends com.sun.org.apache.xpath.internal.functions.Function

#include <com/sun/org/apache/xpath/internal/functions/Function.h>

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

class $export FuncLast : public ::com::sun::org::apache::xpath::internal::functions::Function {
	$class(FuncLast, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::Function)
public:
	FuncLast();
	using ::com::sun::org::apache::xpath::internal::functions::Function::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual int32_t getCountOfContextNodeList(::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	virtual void postCompileStep(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler) override;
	static const int64_t serialVersionUID = (int64_t)0x7FC19D9B2ACAD86F;
	bool m_isTopLevel = false;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncLast_h_