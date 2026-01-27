#ifndef _com_sun_org_apache_xerces_internal_utils_XMLSecurityManager_h_
#define _com_sun_org_apache_xerces_internal_utils_XMLSecurityManager_h_
//$ class com.sun.org.apache.xerces.internal.utils.XMLSecurityManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NO_LIMIT")
#undef NO_LIMIT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {
							class XMLLimitAnalyzer;
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
		namespace concurrent {
			class CopyOnWriteArrayList;
		}
	}
}
namespace jdk {
	namespace xml {
		namespace internal {
			class JdkProperty$State;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class SAXException;
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

class XMLSecurityManager : public ::java::lang::Object {
	$class(XMLSecurityManager, 0, ::java::lang::Object)
public:
	XMLSecurityManager();
	void init$();
	void init$(bool secureProcessing);
	static ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* convert(Object$* value, ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* securityManager);
	void debugPrint(::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer* limitAnalyzer);
	$String* find($String* propertyName);
	int32_t getIndex($String* propertyName);
	int32_t getLimit(::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit* limit);
	$String* getLimitAsString($String* propertyName);
	$String* getLimitValueAsString(::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit* limit);
	$String* getLimitValueByIndex(int32_t index);
	::jdk::xml::internal::JdkProperty$State* getState(::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit* limit);
	$String* getStateLiteral(::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit* limit);
	bool getSystemProperty(::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit* limit, $String* sysPropertyName);
	bool isNoLimit(int32_t limit);
	bool isOverLimit(::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit* limit, $String* entityName, int32_t size, ::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer* limitAnalyzer);
	bool isOverLimit(int32_t index, $String* entityName, int32_t size, ::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer* limitAnalyzer);
	bool isOverLimit(::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit* limit, ::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer* limitAnalyzer);
	bool isOverLimit(int32_t index, ::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer* limitAnalyzer);
	bool isSecureProcessing();
	bool isSet(int32_t index);
	bool printEntityCountInfo();
	static void printWarning($String* parserClassName, $String* propertyName, ::org::xml::sax::SAXException* exception);
	void readSystemProperties();
	bool setLimit($String* propertyName, ::jdk::xml::internal::JdkProperty$State* state, Object$* value);
	void setLimit(::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit* limit, ::jdk::xml::internal::JdkProperty$State* state, int32_t value);
	void setLimit(int32_t index, ::jdk::xml::internal::JdkProperty$State* state, Object$* value);
	void setLimit(int32_t index, ::jdk::xml::internal::JdkProperty$State* state, int32_t value);
	void setSecureProcessing(bool secure);
	static const int32_t NO_LIMIT = 0;
	$ints* values = nullptr;
	$Array<::jdk::xml::internal::JdkProperty$State>* states = nullptr;
	bool secureProcessing = false;
	$booleans* isSet$ = nullptr;
	static const int32_t indexEntityCountInfo = 10000;
	$String* printEntityCountInfo$ = nullptr;
	static ::java::util::concurrent::CopyOnWriteArrayList* printedWarnings;
};

						} // utils
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("NO_LIMIT")

#endif // _com_sun_org_apache_xerces_internal_utils_XMLSecurityManager_h_