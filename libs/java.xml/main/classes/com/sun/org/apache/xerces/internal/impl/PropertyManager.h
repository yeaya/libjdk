#ifndef _com_sun_org_apache_xerces_internal_impl_PropertyManager_h_
#define _com_sun_org_apache_xerces_internal_impl_PropertyManager_h_
//$ class com.sun.org.apache.xerces.internal.impl.PropertyManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CONTEXT_READER")
#undef CONTEXT_READER
#pragma push_macro("CONTEXT_WRITER")
#undef CONTEXT_WRITER
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER
#pragma push_macro("STAX_ENTITIES")
#undef STAX_ENTITIES
#pragma push_macro("STAX_NOTATIONS")
#undef STAX_NOTATIONS
#pragma push_macro("STRING_INTERNING")
#undef STRING_INTERNING
#pragma push_macro("XML_SECURITY_PROPERTY_MANAGER")
#undef XML_SECURITY_PROPERTY_MANAGER

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {
							class XMLSecurityManager;
							class XMLSecurityPropertyManager;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

class PropertyManager : public ::java::lang::Object {
	$class(PropertyManager, 0, ::java::lang::Object)
public:
	PropertyManager();
	void init$(int32_t context);
	void init$(::com::sun::org::apache::xerces::internal::impl::PropertyManager* propertyManager);
	virtual bool containsProperty($String* property);
	::java::util::HashMap* getProperties();
	virtual $Object* getProperty($String* property);
	void initConfigurableReaderProperties();
	void initWriterProps();
	virtual void setProperty($String* property, Object$* value);
	virtual $String* toString() override;
	static $String* STAX_NOTATIONS;
	static $String* STAX_ENTITIES;
	static $String* STRING_INTERNING;
	static $String* SECURITY_MANAGER;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	::java::util::HashMap* supportedProps = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* fSecurityManager = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager* fSecurityPropertyMgr = nullptr;
	static const int32_t CONTEXT_READER = 1;
	static const int32_t CONTEXT_WRITER = 2;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CONTEXT_READER")
#pragma pop_macro("CONTEXT_WRITER")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("STAX_ENTITIES")
#pragma pop_macro("STAX_NOTATIONS")
#pragma pop_macro("STRING_INTERNING")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")

#endif // _com_sun_org_apache_xerces_internal_impl_PropertyManager_h_