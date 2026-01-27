#ifndef _com_sun_org_apache_xerces_internal_xs_XSNamedMap_h_
#define _com_sun_org_apache_xerces_internal_xs_XSNamedMap_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSNamedMap
//$ extends java.util.Map

#include <java/util/Map.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSObject;
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

class XSNamedMap : public ::java::util::Map {
	$interface(XSNamedMap, $NO_CLASS_INIT, ::java::util::Map)
public:
	virtual int32_t getLength() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObject* item(int32_t index) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObject* itemByName($String* namespace$, $String* localName) {return nullptr;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_XSNamedMap_h_