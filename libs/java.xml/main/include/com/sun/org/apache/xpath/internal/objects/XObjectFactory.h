#ifndef _com_sun_org_apache_xpath_internal_objects_XObjectFactory_h_
#define _com_sun_org_apache_xpath_internal_objects_XObjectFactory_h_
//$ class com.sun.org.apache.xpath.internal.objects.XObjectFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
						namespace objects {

class $import XObjectFactory : public ::java::lang::Object {
	$class(XObjectFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XObjectFactory();
	void init$();
	static ::com::sun::org::apache::xpath::internal::objects::XObject* create(Object$* val);
	static ::com::sun::org::apache::xpath::internal::objects::XObject* create(Object$* val, ::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_objects_XObjectFactory_h_