#ifndef _com_sun_org_apache_xerces_internal_xs_XSIDCDefinition_h_
#define _com_sun_org_apache_xerces_internal_xs_XSIDCDefinition_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSIDCDefinition
//$ extends com.sun.org.apache.xerces.internal.xs.XSObject

#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>

#pragma push_macro("IC_KEY")
#undef IC_KEY
#pragma push_macro("IC_KEYREF")
#undef IC_KEYREF
#pragma push_macro("IC_UNIQUE")
#undef IC_UNIQUE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class StringList;
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

class XSIDCDefinition : public ::com::sun::org::apache::xerces::internal::xs::XSObject {
	$interface(XSIDCDefinition, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSObject)
public:
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() {return nullptr;}
	virtual int16_t getCategory() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getFieldStrs() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition* getRefKey() {return nullptr;}
	virtual $String* getSelectorStr() {return nullptr;}
	static const int16_t IC_KEY = 1;
	static const int16_t IC_KEYREF = 2;
	static const int16_t IC_UNIQUE = 3;
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("IC_KEY")
#pragma pop_macro("IC_KEYREF")
#pragma pop_macro("IC_UNIQUE")

#endif // _com_sun_org_apache_xerces_internal_xs_XSIDCDefinition_h_