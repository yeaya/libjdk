#ifndef _com_sun_org_apache_xerces_internal_xs_datatypes_XSQName_h_
#define _com_sun_org_apache_xerces_internal_xs_datatypes_XSQName_h_
//$ interface com.sun.org.apache.xerces.internal.xs.datatypes.XSQName
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class QName;
						}
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace namespace$ {
			class QName;
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
							namespace datatypes {

class XSQName : public ::java::lang::Object {
	$interface(XSQName, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::xml::namespace$::QName* getJAXPQName() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xni::QName* getXNIQName() {return nullptr;}
};

							} // datatypes
						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_datatypes_XSQName_h_