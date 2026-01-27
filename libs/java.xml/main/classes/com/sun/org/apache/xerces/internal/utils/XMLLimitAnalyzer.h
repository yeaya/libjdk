#ifndef _com_sun_org_apache_xerces_internal_utils_XMLLimitAnalyzer_h_
#define _com_sun_org_apache_xerces_internal_utils_XMLLimitAnalyzer_h_
//$ class com.sun.org.apache.xerces.internal.utils.XMLLimitAnalyzer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {
							class XMLSecurityManager;
							class XMLSecurityManager$Limit;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {

class XMLLimitAnalyzer : public ::java::lang::Object {
	$class(XMLLimitAnalyzer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLLimitAnalyzer();
	void init$();
	void addValue(::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit* limit, $String* entityName, int32_t value);
	void addValue(int32_t index, $String* entityName, int32_t value);
	void debugPrint(::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* securityManager);
	void endEntity(::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit* limit, $String* name);
	int32_t getTotalValue(::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit* limit);
	int32_t getTotalValue(int32_t index);
	int32_t getValue(::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit* limit);
	int32_t getValue(int32_t index);
	int32_t getValueByIndex(int32_t index);
	bool isTracking($String* name);
	void reset(::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit* limit);
	void startEntity($String* name);
	$ints* values = nullptr;
	$StringArray* names = nullptr;
	$ints* totalValue = nullptr;
	$Array<::java::util::Map>* caches = nullptr;
	$String* entityStart = nullptr;
	$String* entityEnd = nullptr;
};

						} // utils
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_utils_XMLLimitAnalyzer_h_