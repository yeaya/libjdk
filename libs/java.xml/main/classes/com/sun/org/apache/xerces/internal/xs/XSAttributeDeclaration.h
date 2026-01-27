#ifndef _com_sun_org_apache_xerces_internal_xs_XSAttributeDeclaration_h_
#define _com_sun_org_apache_xerces_internal_xs_XSAttributeDeclaration_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSAttributeDeclaration
//$ extends com.sun.org.apache.xerces.internal.xs.XSObject

#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>

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
							class XSObjectList;
							class XSSimpleTypeDefinition;
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

class XSAttributeDeclaration : public ::com::sun::org::apache::xerces::internal::xs::XSObject {
	$interface(XSAttributeDeclaration, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSObject)
public:
	virtual $Object* getActualVC() {return nullptr;}
	virtual int16_t getActualVCType() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* getAnnotation() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() {return nullptr;}
	virtual int16_t getConstraintType() {return 0;}
	virtual $String* getConstraintValue() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition* getEnclosingCTDefinition() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::ShortList* getItemValueTypes() {return nullptr;}
	virtual int16_t getScope() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getTypeDefinition() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSValue* getValueConstraintValue() {return nullptr;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_XSAttributeDeclaration_h_