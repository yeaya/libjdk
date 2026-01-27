#ifndef _com_sun_org_apache_xerces_internal_impl_RevalidationHandler_h_
#define _com_sun_org_apache_xerces_internal_impl_RevalidationHandler_h_
//$ interface com.sun.org.apache.xerces.internal.impl.RevalidationHandler
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentFilter

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentFilter.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class Augmentations;
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

class RevalidationHandler : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter {
	$interface(RevalidationHandler, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter)
public:
	virtual bool characterData($String* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) {return false;}
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_RevalidationHandler_h_