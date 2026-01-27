#ifndef _com_sun_org_apache_xerces_internal_xs_XSModelGroupDefinition_h_
#define _com_sun_org_apache_xerces_internal_xs_XSModelGroupDefinition_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSModelGroupDefinition
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
							class XSModelGroup;
							class XSObjectList;
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

class XSModelGroupDefinition : public ::com::sun::org::apache::xerces::internal::xs::XSObject {
	$interface(XSModelGroupDefinition, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSObject)
public:
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* getAnnotation() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModelGroup* getModelGroup() {return nullptr;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_XSModelGroupDefinition_h_