#ifndef _com_sun_org_apache_xpath_internal_operations_Mod_h_
#define _com_sun_org_apache_xpath_internal_operations_Mod_h_
//$ class com.sun.org.apache.xpath.internal.operations.Mod
//$ extends com.sun.org.apache.xpath.internal.operations.Operation

#include <com/sun/org/apache/xpath/internal/operations/Operation.h>

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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace operations {

class Mod : public ::com::sun::org::apache::xpath::internal::operations::Operation {
	$class(Mod, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::operations::Operation)
public:
	Mod();
	using ::com::sun::org::apache::xpath::internal::operations::Operation::execute;
	void init$();
	virtual double num(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* operate(::com::sun::org::apache::xpath::internal::objects::XObject* left, ::com::sun::org::apache::xpath::internal::objects::XObject* right) override;
	static const int64_t serialVersionUID = (int64_t)0x4585377934FA0E39;
};

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_operations_Mod_h_