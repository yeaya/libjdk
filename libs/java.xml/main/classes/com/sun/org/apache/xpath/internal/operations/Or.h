#ifndef _com_sun_org_apache_xpath_internal_operations_Or_h_
#define _com_sun_org_apache_xpath_internal_operations_Or_h_
//$ class com.sun.org.apache.xpath.internal.operations.Or
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

class Or : public ::com::sun::org::apache::xpath::internal::operations::Operation {
	$class(Or, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::operations::Operation)
public:
	Or();
	using ::com::sun::org::apache::xpath::internal::operations::Operation::execute;
	void init$();
	virtual bool bool$(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	static const int64_t serialVersionUID = (int64_t)0xF70FABEC0E143B69;
};

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_operations_Or_h_