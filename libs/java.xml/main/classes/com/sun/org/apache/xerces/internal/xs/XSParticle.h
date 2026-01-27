#ifndef _com_sun_org_apache_xerces_internal_xs_XSParticle_h_
#define _com_sun_org_apache_xerces_internal_xs_XSParticle_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSParticle
//$ extends com.sun.org.apache.xerces.internal.xs.XSObject

#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSObjectList;
							class XSTerm;
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

class XSParticle : public ::com::sun::org::apache::xerces::internal::xs::XSObject {
	$interface(XSParticle, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSObject)
public:
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() {return nullptr;}
	virtual int32_t getMaxOccurs() {return 0;}
	virtual bool getMaxOccursUnbounded() {return false;}
	virtual int32_t getMinOccurs() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTerm* getTerm() {return nullptr;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_XSParticle_h_