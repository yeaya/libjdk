#ifndef _com_sun_org_apache_xerces_internal_xs_XSModelGroup_h_
#define _com_sun_org_apache_xerces_internal_xs_XSModelGroup_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSModelGroup
//$ extends com.sun.org.apache.xerces.internal.xs.XSTerm

#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>

#pragma push_macro("COMPOSITOR_ALL")
#undef COMPOSITOR_ALL
#pragma push_macro("COMPOSITOR_CHOICE")
#undef COMPOSITOR_CHOICE
#pragma push_macro("COMPOSITOR_SEQUENCE")
#undef COMPOSITOR_SEQUENCE

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

class XSModelGroup : public ::com::sun::org::apache::xerces::internal::xs::XSTerm {
	$interface(XSModelGroup, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSTerm)
public:
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* getAnnotation() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() {return nullptr;}
	virtual int16_t getCompositor() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getParticles() {return nullptr;}
	static const int16_t COMPOSITOR_SEQUENCE = 1;
	static const int16_t COMPOSITOR_CHOICE = 2;
	static const int16_t COMPOSITOR_ALL = 3;
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("COMPOSITOR_ALL")
#pragma pop_macro("COMPOSITOR_CHOICE")
#pragma pop_macro("COMPOSITOR_SEQUENCE")

#endif // _com_sun_org_apache_xerces_internal_xs_XSModelGroup_h_