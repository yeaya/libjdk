#ifndef _com_sun_org_apache_xpath_internal_operations_String_h_
#define _com_sun_org_apache_xpath_internal_operations_String_h_
//$ class com.sun.org.apache.xpath.internal.operations.String
//$ extends com.sun.org.apache.xpath.internal.operations.UnaryOperation

#include <com/sun/org/apache/xpath/internal/operations/UnaryOperation.h>

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

class String : public ::com::sun::org::apache::xpath::internal::operations::UnaryOperation {
	$class(String, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::operations::UnaryOperation)
public:
	String();
	using ::com::sun::org::apache::xpath::internal::operations::UnaryOperation::execute;
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* operate(::com::sun::org::apache::xpath::internal::objects::XObject* right) override;
	static const int64_t serialVersionUID = (int64_t)0x29438C3E2055EEA8;
};

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_operations_String_h_