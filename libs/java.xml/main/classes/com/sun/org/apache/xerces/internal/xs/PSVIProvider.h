#ifndef _com_sun_org_apache_xerces_internal_xs_PSVIProvider_h_
#define _com_sun_org_apache_xerces_internal_xs_PSVIProvider_h_
//$ interface com.sun.org.apache.xerces.internal.xs.PSVIProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class AttributePSVI;
							class ElementPSVI;
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

class PSVIProvider : public ::java::lang::Object {
	$interface(PSVIProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xerces::internal::xs::AttributePSVI* getAttributePSVI(int32_t index) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::AttributePSVI* getAttributePSVIByName($String* uri, $String* localname) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::ElementPSVI* getElementPSVI() {return nullptr;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_PSVIProvider_h_