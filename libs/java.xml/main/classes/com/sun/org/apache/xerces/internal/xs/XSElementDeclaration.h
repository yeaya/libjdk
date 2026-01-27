#ifndef _com_sun_org_apache_xerces_internal_xs_XSElementDeclaration_h_
#define _com_sun_org_apache_xerces_internal_xs_XSElementDeclaration_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSElementDeclaration
//$ extends com.sun.org.apache.xerces.internal.xs.XSTerm

#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class ShortList;
							class XSAnnotation;
							class XSComplexTypeDefinition;
							class XSNamedMap;
							class XSObjectList;
							class XSTypeDefinition;
							class XSValue;
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

class XSElementDeclaration : public ::com::sun::org::apache::xerces::internal::xs::XSTerm {
	$interface(XSElementDeclaration, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSTerm)
public:
	virtual bool getAbstract() {return false;}
	virtual $Object* getActualVC() {return nullptr;}
	virtual int16_t getActualVCType() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* getAnnotation() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() {return nullptr;}
	virtual int16_t getConstraintType() {return 0;}
	virtual $String* getConstraintValue() {return nullptr;}
	virtual int16_t getDisallowedSubstitutions() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition* getEnclosingCTDefinition() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamedMap* getIdentityConstraints() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::ShortList* getItemValueTypes() {return nullptr;}
	virtual bool getNillable() {return false;}
	virtual int16_t getScope() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration* getSubstitutionGroupAffiliation() {return nullptr;}
	virtual int16_t getSubstitutionGroupExclusions() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getTypeDefinition() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSValue* getValueConstraintValue() {return nullptr;}
	virtual bool isDisallowedSubstitution(int16_t disallowed) {return false;}
	virtual bool isSubstitutionGroupExclusion(int16_t exclusion) {return false;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_XSElementDeclaration_h_