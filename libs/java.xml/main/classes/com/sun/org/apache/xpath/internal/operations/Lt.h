#ifndef _com_sun_org_apache_xpath_internal_operations_Lt_h_
#define _com_sun_org_apache_xpath_internal_operations_Lt_h_
//$ class com.sun.org.apache.xpath.internal.operations.Lt
//$ extends com.sun.org.apache.xpath.internal.operations.Operation

#include <com/sun/org/apache/xpath/internal/operations/Operation.h>

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

class Lt : public ::com::sun::org::apache::xpath::internal::operations::Operation {
	$class(Lt, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::operations::Operation)
public:
	Lt();
	using ::com::sun::org::apache::xpath::internal::operations::Operation::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* operate(::com::sun::org::apache::xpath::internal::objects::XObject* left, ::com::sun::org::apache::xpath::internal::objects::XObject* right) override;
	static const int64_t serialVersionUID = (int64_t)0x2F06168025D7283E;
};

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_operations_Lt_h_