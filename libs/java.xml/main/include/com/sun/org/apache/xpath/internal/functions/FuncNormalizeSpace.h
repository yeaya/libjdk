#ifndef _com_sun_org_apache_xpath_internal_functions_FuncNormalizeSpace_h_
#define _com_sun_org_apache_xpath_internal_functions_FuncNormalizeSpace_h_
//$ class com.sun.org.apache.xpath.internal.functions.FuncNormalizeSpace
//$ extends com.sun.org.apache.xpath.internal.functions.FunctionDef1Arg

#include <com/sun/org/apache/xpath/internal/functions/FunctionDef1Arg.h>

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
						namespace objects {
							class XObject;
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
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

class $import FuncNormalizeSpace : public ::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg {
	$class(FuncNormalizeSpace, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg)
public:
	FuncNormalizeSpace();
	using ::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void executeCharsToContentHandler(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, ::org::xml::sax::ContentHandler* handler) override;
	static const int64_t serialVersionUID = (int64_t)0xD11F161F3FEE7E60;
};

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_functions_FuncNormalizeSpace_h_