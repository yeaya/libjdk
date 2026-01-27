#ifndef _com_sun_org_apache_xalan_internal_utils_XMLSecurityManager$NameMap_h_
#define _com_sun_org_apache_xalan_internal_utils_XMLSecurityManager$NameMap_h_
//$ class com.sun.org.apache.xalan.internal.utils.XMLSecurityManager$NameMap
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ELEMENT_ATTRIBUTE_LIMIT")
#undef ELEMENT_ATTRIBUTE_LIMIT
#pragma push_macro("ENTITY_EXPANSION_LIMIT")
#undef ENTITY_EXPANSION_LIMIT
#pragma push_macro("MAX_OCCUR_NODE_LIMIT")
#undef MAX_OCCUR_NODE_LIMIT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace utils {

class XMLSecurityManager$NameMap : public ::java::lang::Enum {
	$class(XMLSecurityManager$NameMap, 0, ::java::lang::Enum)
public:
	XMLSecurityManager$NameMap();
	static $Array<::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$NameMap>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* newName, $String* oldName);
	virtual $String* getOldName($String* newName);
	static ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$NameMap* valueOf($String* name);
	static $Array<::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$NameMap>* values();
	static ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$NameMap* ENTITY_EXPANSION_LIMIT;
	static ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$NameMap* MAX_OCCUR_NODE_LIMIT;
	static ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$NameMap* ELEMENT_ATTRIBUTE_LIMIT;
	static $Array<::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$NameMap>* $VALUES;
	$String* newName = nullptr;
	$String* oldName = nullptr;
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
#pragma pop_macro("MAX_OCCUR_NODE_LIMIT")

#endif // _com_sun_org_apache_xalan_internal_utils_XMLSecurityManager$NameMap_h_