#ifndef _com_sun_org_apache_xerces_internal_xs_ItemPSVI_h_
#define _com_sun_org_apache_xerces_internal_xs_ItemPSVI_h_
//$ interface com.sun.org.apache.xerces.internal.xs.ItemPSVI
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("VALIDATION_FULL")
#undef VALIDATION_FULL
#pragma push_macro("VALIDATION_NONE")
#undef VALIDATION_NONE
#pragma push_macro("VALIDATION_PARTIAL")
#undef VALIDATION_PARTIAL
#pragma push_macro("VALIDITY_INVALID")
#undef VALIDITY_INVALID
#pragma push_macro("VALIDITY_NOTKNOWN")
#undef VALIDITY_NOTKNOWN
#pragma push_macro("VALIDITY_VALID")
#undef VALIDITY_VALID

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class ShortList;
							class StringList;
							class XSSimpleTypeDefinition;
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

class ItemPSVI : public ::java::lang::Object {
	$interface(ItemPSVI, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xerces::internal::xs::ItemPSVI* constant() {return nullptr;}
	virtual $Object* getActualNormalizedValue() {return nullptr;}
	virtual int16_t getActualNormalizedValueType() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getErrorCodes() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getErrorMessages() {return nullptr;}
	virtual bool getIsSchemaSpecified() {return false;}
	virtual ::com::sun::org::apache::xerces::internal::xs::ShortList* getItemValueTypes() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getMemberTypeDefinition() {return nullptr;}
	virtual $String* getSchemaDefault() {return nullptr;}
	virtual $String* getSchemaNormalizedValue() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSValue* getSchemaValue() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getTypeDefinition() {return nullptr;}
	virtual int16_t getValidationAttempted() {return 0;}
	virtual $String* getValidationContext() {return nullptr;}
	virtual int16_t getValidity() {return 0;}
	virtual bool isConstant() {return false;}
	static const int16_t VALIDITY_NOTKNOWN = 0;
	static const int16_t VALIDITY_INVALID = 1;
	static const int16_t VALIDITY_VALID = 2;
	static const int16_t VALIDATION_NONE = 0;
	static const int16_t VALIDATION_PARTIAL = 1;
	static const int16_t VALIDATION_FULL = 2;
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("VALIDATION_FULL")
#pragma pop_macro("VALIDATION_NONE")
#pragma pop_macro("VALIDATION_PARTIAL")
#pragma pop_macro("VALIDITY_INVALID")
#pragma pop_macro("VALIDITY_NOTKNOWN")
#pragma pop_macro("VALIDITY_VALID")

#endif // _com_sun_org_apache_xerces_internal_xs_ItemPSVI_h_