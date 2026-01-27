#ifndef _com_sun_org_apache_xpath_internal_operations_VariableSafeAbsRef_h_
#define _com_sun_org_apache_xpath_internal_operations_VariableSafeAbsRef_h_
//$ class com.sun.org.apache.xpath.internal.operations.VariableSafeAbsRef
//$ extends com.sun.org.apache.xpath.internal.operations.Variable

#include <com/sun/org/apache/xpath/internal/operations/Variable.h>

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

class VariableSafeAbsRef : public ::com::sun::org::apache::xpath::internal::operations::Variable {
	$class(VariableSafeAbsRef, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::operations::Variable)
public:
	VariableSafeAbsRef();
	using ::com::sun::org::apache::xpath::internal::operations::Variable::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, bool destructiveOK) override;
	static const int64_t serialVersionUID = (int64_t)0x80AD0D875EE5CE24;
};

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_operations_VariableSafeAbsRef_h_