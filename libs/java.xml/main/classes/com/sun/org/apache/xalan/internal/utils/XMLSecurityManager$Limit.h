#ifndef _com_sun_org_apache_xalan_internal_utils_XMLSecurityManager$Limit_h_
#define _com_sun_org_apache_xalan_internal_utils_XMLSecurityManager$Limit_h_
//$ class com.sun.org.apache.xalan.internal.utils.XMLSecurityManager$Limit
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ELEMENT_ATTRIBUTE_LIMIT")
#undef ELEMENT_ATTRIBUTE_LIMIT
#pragma push_macro("ENTITY_EXPANSION_LIMIT")
#undef ENTITY_EXPANSION_LIMIT
#pragma push_macro("ENTITY_REPLACEMENT_LIMIT")
#undef ENTITY_REPLACEMENT_LIMIT
#pragma push_macro("GENERAL_ENTITY_SIZE_LIMIT")
#undef GENERAL_ENTITY_SIZE_LIMIT
#pragma push_macro("MAX_ELEMENT_DEPTH_LIMIT")
#undef MAX_ELEMENT_DEPTH_LIMIT
#pragma push_macro("MAX_NAME_LIMIT")
#undef MAX_NAME_LIMIT
#pragma push_macro("MAX_OCCUR_NODE_LIMIT")
#undef MAX_OCCUR_NODE_LIMIT
#pragma push_macro("PARAMETER_ENTITY_SIZE_LIMIT")
#undef PARAMETER_ENTITY_SIZE_LIMIT
#pragma push_macro("TOTAL_ENTITY_SIZE_LIMIT")
#undef TOTAL_ENTITY_SIZE_LIMIT

namespace jdk {
	namespace xml {
		namespace internal {
			class JdkProperty$State;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace utils {

class XMLSecurityManager$Limit : public ::java::lang::Enum {
	$class(XMLSecurityManager$Limit, 0, ::java::lang::Enum)
public:
	XMLSecurityManager$Limit();
	static $Array<::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* key, $String* apiProperty, $String* systemProperty, int32_t value, int32_t secureValue);
	virtual $String* apiProperty();
	virtual int32_t defaultValue();
	virtual ::jdk::xml::internal::JdkProperty$State* getState($String* name);
	virtual bool is($String* name);
	virtual $String* key();
	virtual int32_t secureValue();
	virtual $String* systemProperty();
	static ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit* valueOf($String* name);
	static $Array<::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit>* values();
	static ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit* ENTITY_EXPANSION_LIMIT;
	static ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit* MAX_OCCUR_NODE_LIMIT;
	static ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit* ELEMENT_ATTRIBUTE_LIMIT;
	static ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit* TOTAL_ENTITY_SIZE_LIMIT;
	static ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit* GENERAL_ENTITY_SIZE_LIMIT;
	static ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit* PARAMETER_ENTITY_SIZE_LIMIT;
	static ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit* MAX_ELEMENT_DEPTH_LIMIT;
	static ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit* MAX_NAME_LIMIT;
	static ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit* ENTITY_REPLACEMENT_LIMIT;
	static $Array<::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit>* $VALUES;
	$String* key$ = nullptr;
	$String* apiProperty$ = nullptr;
	$String* systemProperty$ = nullptr;
	int32_t defaultValue$ = 0;
	int32_t secureValue$ = 0;
};

						} // utils
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ELEMENT_ATTRIBUTE_LIMIT")
#pragma pop_macro("ENTITY_EXPANSION_LIMIT")
#pragma pop_macro("ENTITY_REPLACEMENT_LIMIT")
#pragma pop_macro("GENERAL_ENTITY_SIZE_LIMIT")
#pragma pop_macro("MAX_ELEMENT_DEPTH_LIMIT")
#pragma pop_macro("MAX_NAME_LIMIT")
#pragma pop_macro("MAX_OCCUR_NODE_LIMIT")
#pragma pop_macro("PARAMETER_ENTITY_SIZE_LIMIT")
#pragma pop_macro("TOTAL_ENTITY_SIZE_LIMIT")

#endif // _com_sun_org_apache_xalan_internal_utils_XMLSecurityManager$Limit_h_