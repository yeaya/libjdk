#ifndef _com_sun_org_apache_xerces_internal_xs_XSAttributeGroupDefinition_h_
#define _com_sun_org_apache_xerces_internal_xs_XSAttributeGroupDefinition_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSAttributeGroupDefinition
//$ extends com.sun.org.apache.xerces.internal.xs.XSObject

#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSAnnotation;
							class XSObjectList;
							class XSWildcard;
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

class XSAttributeGroupDefinition : public ::com::sun::org::apache::xerces::internal::xs::XSObject {
	$interface(XSAttributeGroupDefinition, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSObject)
public:
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* getAnnotation() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAttributeUses() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSWildcard* getAttributeWildcard() {return nullptr;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_XSAttributeGroupDefinition_h_