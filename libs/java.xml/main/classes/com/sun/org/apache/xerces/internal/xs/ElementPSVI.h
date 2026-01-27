#ifndef _com_sun_org_apache_xerces_internal_xs_ElementPSVI_h_
#define _com_sun_org_apache_xerces_internal_xs_ElementPSVI_h_
//$ interface com.sun.org.apache.xerces.internal.xs.ElementPSVI
//$ extends com.sun.org.apache.xerces.internal.xs.ItemPSVI

#include <com/sun/org/apache/xerces/internal/xs/ItemPSVI.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSElementDeclaration;
							class XSModel;
							class XSNotationDeclaration;
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

class ElementPSVI : public ::com::sun::org::apache::xerces::internal::xs::ItemPSVI {
	$interface(ElementPSVI, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::ItemPSVI)
public:
	virtual ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration* getElementDeclaration() {return nullptr;}
	virtual bool getNil() {return false;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration* getNotation() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* getSchemaInformation() {return nullptr;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_ElementPSVI_h_