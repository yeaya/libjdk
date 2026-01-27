#ifndef _com_sun_org_apache_xerces_internal_xs_XSWildcard_h_
#define _com_sun_org_apache_xerces_internal_xs_XSWildcard_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSWildcard
//$ extends com.sun.org.apache.xerces.internal.xs.XSTerm

#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>

#pragma push_macro("NSCONSTRAINT_ANY")
#undef NSCONSTRAINT_ANY
#pragma push_macro("NSCONSTRAINT_LIST")
#undef NSCONSTRAINT_LIST
#pragma push_macro("NSCONSTRAINT_NOT")
#undef NSCONSTRAINT_NOT
#pragma push_macro("PC_LAX")
#undef PC_LAX
#pragma push_macro("PC_SKIP")
#undef PC_SKIP
#pragma push_macro("PC_STRICT")
#undef PC_STRICT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class StringList;
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

class XSWildcard : public ::com::sun::org::apache::xerces::internal::xs::XSTerm {
	$interface(XSWildcard, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSTerm)
public:
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* getAnnotation() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() {return nullptr;}
	virtual int16_t getConstraintType() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getNsConstraintList() {return nullptr;}
	virtual int16_t getProcessContents() {return 0;}
	static const int16_t NSCONSTRAINT_ANY = 1;
	static const int16_t NSCONSTRAINT_NOT = 2;
	static const int16_t NSCONSTRAINT_LIST = 3;
	static const int16_t PC_STRICT = 1;
	static const int16_t PC_SKIP = 2;
	static const int16_t PC_LAX = 3;
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("NSCONSTRAINT_ANY")
#pragma pop_macro("NSCONSTRAINT_LIST")
#pragma pop_macro("NSCONSTRAINT_NOT")
#pragma pop_macro("PC_LAX")
#pragma pop_macro("PC_SKIP")
#pragma pop_macro("PC_STRICT")

#endif // _com_sun_org_apache_xerces_internal_xs_XSWildcard_h_