#ifndef _com_sun_org_apache_xerces_internal_xs_XSComplexTypeDefinition_h_
#define _com_sun_org_apache_xerces_internal_xs_XSComplexTypeDefinition_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSComplexTypeDefinition
//$ extends com.sun.org.apache.xerces.internal.xs.XSTypeDefinition

#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>

#pragma push_macro("CONTENTTYPE_ELEMENT")
#undef CONTENTTYPE_ELEMENT
#pragma push_macro("CONTENTTYPE_EMPTY")
#undef CONTENTTYPE_EMPTY
#pragma push_macro("CONTENTTYPE_MIXED")
#undef CONTENTTYPE_MIXED
#pragma push_macro("CONTENTTYPE_SIMPLE")
#undef CONTENTTYPE_SIMPLE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSObjectList;
							class XSParticle;
							class XSSimpleTypeDefinition;
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

class XSComplexTypeDefinition : public ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition {
	$interface(XSComplexTypeDefinition, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition)
public:
	virtual bool getAbstract() {return false;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAttributeUses() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSWildcard* getAttributeWildcard() {return nullptr;}
	virtual int16_t getContentType() {return 0;}
	virtual int16_t getDerivationMethod() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSParticle* getParticle() {return nullptr;}
	virtual int16_t getProhibitedSubstitutions() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getSimpleType() {return nullptr;}
	virtual bool isProhibitedSubstitution(int16_t restriction) {return false;}
	static const int16_t CONTENTTYPE_EMPTY = 0;
	static const int16_t CONTENTTYPE_SIMPLE = 1;
	static const int16_t CONTENTTYPE_ELEMENT = 2;
	static const int16_t CONTENTTYPE_MIXED = 3;
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CONTENTTYPE_ELEMENT")
#pragma pop_macro("CONTENTTYPE_EMPTY")
#pragma pop_macro("CONTENTTYPE_MIXED")
#pragma pop_macro("CONTENTTYPE_SIMPLE")

#endif // _com_sun_org_apache_xerces_internal_xs_XSComplexTypeDefinition_h_