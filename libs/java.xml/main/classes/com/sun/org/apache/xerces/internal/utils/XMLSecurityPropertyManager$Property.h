#ifndef _com_sun_org_apache_xerces_internal_utils_XMLSecurityPropertyManager$Property_h_
#define _com_sun_org_apache_xerces_internal_utils_XMLSecurityPropertyManager$Property_h_
//$ class com.sun.org.apache.xerces.internal.utils.XMLSecurityPropertyManager$Property
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ACCESS_EXTERNAL_DTD")
#undef ACCESS_EXTERNAL_DTD
#pragma push_macro("ACCESS_EXTERNAL_SCHEMA")
#undef ACCESS_EXTERNAL_SCHEMA

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {

class XMLSecurityPropertyManager$Property : public ::java::lang::Enum {
	$class(XMLSecurityPropertyManager$Property, 0, ::java::lang::Enum)
public:
	XMLSecurityPropertyManager$Property();
	static $Array<::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $String* value);
	virtual $String* defaultValue();
	virtual bool equalsName($String* propertyName);
	virtual $String* propertyName();
	static ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property* valueOf($String* name);
	static $Array<::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property>* values();
	static ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property* ACCESS_EXTERNAL_DTD;
	static ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property* ACCESS_EXTERNAL_SCHEMA;
	static $Array<::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property>* $VALUES;
	$String* name$ = nullptr;
	$String* defaultValue$ = nullptr;
};

						} // utils
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ACCESS_EXTERNAL_DTD")
#pragma pop_macro("ACCESS_EXTERNAL_SCHEMA")

#endif // _com_sun_org_apache_xerces_internal_utils_XMLSecurityPropertyManager$Property_h_