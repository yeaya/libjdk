#ifndef _com_sun_org_apache_xerces_internal_xs_XSImplementation_h_
#define _com_sun_org_apache_xerces_internal_xs_XSImplementation_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSImplementation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class StringList;
							class XSLoader;
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

class XSImplementation : public ::java::lang::Object {
	$interface(XSImplementation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xerces::internal::xs::XSLoader* createXSLoader(::com::sun::org::apache::xerces::internal::xs::StringList* versions) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getRecognizedVersions() {return nullptr;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_XSImplementation_h_