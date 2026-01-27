#ifndef _com_sun_org_apache_xerces_internal_xs_XSFacet_h_
#define _com_sun_org_apache_xerces_internal_xs_XSFacet_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSFacet
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

class XSFacet : public ::com::sun::org::apache::xerces::internal::xs::XSObject {
	$interface(XSFacet, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSObject)
public:
	virtual $Object* getActualFacetValue() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* getAnnotation() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() {return nullptr;}
	virtual int16_t getFacetKind() {return 0;}
	virtual bool getFixed() {return false;}
	virtual int32_t getIntFacetValue() {return 0;}
	virtual $String* getLexicalFacetValue() {return nullptr;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_XSFacet_h_