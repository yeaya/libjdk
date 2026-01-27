#ifndef _com_sun_org_apache_xpath_internal_objects_XBooleanStatic_h_
#define _com_sun_org_apache_xpath_internal_objects_XBooleanStatic_h_
//$ class com.sun.org.apache.xpath.internal.objects.XBooleanStatic
//$ extends com.sun.org.apache.xpath.internal.objects.XBoolean

#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>

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
						namespace objects {

class $import XBooleanStatic : public ::com::sun::org::apache::xpath::internal::objects::XBoolean {
	$class(XBooleanStatic, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::objects::XBoolean)
public:
	XBooleanStatic();
	using ::com::sun::org::apache::xpath::internal::objects::XBoolean::bool$;
	using ::com::sun::org::apache::xpath::internal::objects::XBoolean::execute;
	using ::com::sun::org::apache::xpath::internal::objects::XBoolean::error;
	using ::com::sun::org::apache::xpath::internal::objects::XBoolean::equals;
	void init$(bool b);
	virtual bool equals(::com::sun::org::apache::xpath::internal::objects::XObject* obj2) override;
	using ::com::sun::org::apache::xpath::internal::objects::XBoolean::num;
	using ::com::sun::org::apache::xpath::internal::objects::XBoolean::xstr;
	static const int64_t serialVersionUID = (int64_t)0x901664C743228BCF;
	bool m_val = false;
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_objects_XBooleanStatic_h_