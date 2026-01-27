#ifndef _com_sun_org_apache_xerces_internal_utils_XMLSecurityPropertyManager_h_
#define _com_sun_org_apache_xerces_internal_utils_XMLSecurityPropertyManager_h_
//$ class com.sun.org.apache.xerces.internal.utils.XMLSecurityPropertyManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {
							class XMLSecurityPropertyManager$Property;
							class XMLSecurityPropertyManager$State;
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
						namespace utils {

class XMLSecurityPropertyManager : public ::java::lang::Object {
	$class(XMLSecurityPropertyManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLSecurityPropertyManager();
	void init$();
	$String* find($String* propertyName);
	int32_t getIndex($String* propertyName);
	void getSystemProperty(::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property* property, $String* systemProperty);
	$String* getValue($String* propertyName);
	$String* getValue(::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property* property);
	$String* getValueByIndex(int32_t index);
	void readSystemProperties();
	bool setValue($String* propertyName, ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State* state, Object$* value);
	void setValue(::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property* property, ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State* state, $String* value);
	void setValue(int32_t index, ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State* state, $String* value);
	$StringArray* values = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State>* states = nullptr;
};

						} // utils
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_utils_XMLSecurityPropertyManager_h_