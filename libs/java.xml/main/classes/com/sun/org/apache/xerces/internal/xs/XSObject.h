#ifndef _com_sun_org_apache_xerces_internal_xs_XSObject_h_
#define _com_sun_org_apache_xerces_internal_xs_XSObject_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSObject
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSNamespaceItem;
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
				namespace xerces {
					namespace internal {
						namespace xs {

class XSObject : public ::java::lang::Object {
	$interface(XSObject, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getName() {return nullptr;}
	virtual $String* getNamespace() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() {return nullptr;}
	virtual int16_t getType() {return 0;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_XSObject_h_