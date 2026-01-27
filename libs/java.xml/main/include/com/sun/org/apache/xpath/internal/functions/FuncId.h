#ifndef _com_sun_org_apache_xpath_internal_functions_FuncId_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncId_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncId
//$ extends com.sun.org.apache.xpath.internal.functions.FunctionOneArg

#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class StringVector;
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
						class NodeSetDTM;
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

class $import FuncId : public ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg {
	$class(FuncId, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg)
public:
	FuncId();
	using ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	::com::sun::org::apache::xml::internal::utils::StringVector* getNodesByID(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t docContext, $String* refval, ::com::sun::org::apache::xml::internal::utils::StringVector* usedrefs, ::com::sun::org::apache::xpath::internal::NodeSetDTM* nodeSet, bool mayBeMore);
	static const int64_t serialVersionUID = (int64_t)0x7BEFC5B4BC56B5CE;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncId_h_