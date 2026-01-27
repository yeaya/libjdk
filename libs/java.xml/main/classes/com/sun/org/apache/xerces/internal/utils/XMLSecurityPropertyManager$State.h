#ifndef _com_sun_org_apache_xerces_internal_utils_XMLSecurityPropertyManager$State_h_
#define _com_sun_org_apache_xerces_internal_utils_XMLSecurityPropertyManager$State_h_
//$ class com.sun.org.apache.xerces.internal.utils.XMLSecurityPropertyManager$State
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("APIPROPERTY")
#undef APIPROPERTY
#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("FSP")
#undef FSP
#pragma push_macro("JAXPDOTPROPERTIES")
#undef JAXPDOTPROPERTIES
#pragma push_macro("SYSTEMPROPERTY")
#undef SYSTEMPROPERTY

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {

class XMLSecurityPropertyManager$State : public ::java::lang::Enum {
	$class(XMLSecurityPropertyManager$State, 0, ::java::lang::Enum)
public:
	XMLSecurityPropertyManager$State();
	static $Array<::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State* valueOf($String* name);
	static $Array<::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State>* values();
	static ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State* DEFAULT;
	static ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State* FSP;
	static ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State* JAXPDOTPROPERTIES;
	static ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State* SYSTEMPROPERTY;
	static ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State* APIPROPERTY;
	static $Array<::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State>* $VALUES;
};

						} // utils
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("APIPROPERTY")
#pragma pop_macro("DEFAULT")
#pragma pop_macro("FSP")
#pragma pop_macro("JAXPDOTPROPERTIES")
#pragma pop_macro("SYSTEMPROPERTY")

#endif // _com_sun_org_apache_xerces_internal_utils_XMLSecurityPropertyManager$State_h_