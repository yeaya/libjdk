#ifndef _com_sun_org_apache_xerces_internal_xs_AttributePSVI_h_
#define _com_sun_org_apache_xerces_internal_xs_AttributePSVI_h_
//$ interface com.sun.org.apache.xerces.internal.xs.AttributePSVI
//$ extends com.sun.org.apache.xerces.internal.xs.ItemPSVI

#include <com/sun/org/apache/xerces/internal/xs/ItemPSVI.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSAttributeDeclaration;
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

class AttributePSVI : public ::com::sun::org::apache::xerces::internal::xs::ItemPSVI {
	$interface(AttributePSVI, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::ItemPSVI)
public:
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration* getAttributeDeclaration() {return nullptr;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_AttributePSVI_h_