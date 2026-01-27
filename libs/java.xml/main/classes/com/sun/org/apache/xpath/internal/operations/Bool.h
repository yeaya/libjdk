#ifndef _com_sun_org_apache_xpath_internal_operations_Bool_h_
#define _com_sun_org_apache_xpath_internal_operations_Bool_h_
//$ class com.sun.org.apache.xpath.internal.operations.Bool
//$ extends com.sun.org.apache.xpath.internal.operations.UnaryOperation

#include <com/sun/org/apache/xpath/internal/operations/UnaryOperation.h>

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

class Bool : public ::com::sun::org::apache::xpath::internal::operations::UnaryOperation {
	$class(Bool, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::operations::UnaryOperation)
public:
	Bool();
	using ::com::sun::org::apache::xpath::internal::operations::UnaryOperation::execute;
	void init$();
	virtual bool bool$(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* operate(::com::sun::org::apache::xpath::internal::objects::XObject* right) override;
	static const int64_t serialVersionUID = (int64_t)0x009ED34D4F9CFD0B;
};

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_operations_Bool_h_