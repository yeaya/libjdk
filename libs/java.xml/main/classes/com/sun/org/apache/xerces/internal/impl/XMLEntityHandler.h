#ifndef _com_sun_org_apache_xerces_internal_impl_XMLEntityHandler_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLEntityHandler_h_
//$ interface com.sun.org.apache.xerces.internal.impl.XMLEntityHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class Augmentations;
							class XMLResourceIdentifier;
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

class XMLEntityHandler : public ::java::lang::Object {
	$interface(XMLEntityHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void endEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) {}
	virtual void startEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) {}
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XMLEntityHandler_h_