#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_XMLContentSpec$Provider_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_XMLContentSpec$Provider_h_
//$ interface com.sun.org.apache.xerces.internal.impl.dtd.XMLContentSpec$Provider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								class XMLContentSpec;
							}
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
						namespace impl {
							namespace dtd {

class XMLContentSpec$Provider : public ::java::lang::Object {
	$interface(XMLContentSpec$Provider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool getContentSpec(int32_t contentSpecIndex, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec* contentSpec) {return false;}
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_XMLContentSpec$Provider_h_