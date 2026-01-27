#ifndef _com_sun_org_apache_xml_internal_utils_XMLReaderManager_h_
#define _com_sun_org_apache_xml_internal_utils_XMLReaderManager_h_
//$ class com.sun.org.apache.xml.internal.utils.XMLReaderManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace utils {
							class XMLSecurityManager;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class ThreadLocal;
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}
namespace javax {
	namespace xml {
		namespace catalog {
			class CatalogFeatures;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class XMLReader;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $import XMLReaderManager : public ::java::lang::Object {
	$class(XMLReaderManager, 0, ::java::lang::Object)
public:
	XMLReaderManager();
	void init$();
	static ::com::sun::org::apache::xml::internal::utils::XMLReaderManager* getInstance(bool overrideDefaultParser);
	virtual $Object* getProperty($String* name);
	virtual ::org::xml::sax::XMLReader* getXMLReader();
	virtual bool overrideDefaultParser();
	virtual void releaseXMLReader(::org::xml::sax::XMLReader* reader);
	virtual void setFeature($String* name, bool value);
	virtual void setOverrideDefaultParser(bool flag);
	virtual void setProperty($String* name, Object$* value);
	static ::com::sun::org::apache::xml::internal::utils::XMLReaderManager* m_singletonManager;
	static $String* property;
	::java::lang::ThreadLocal* m_readers = nullptr;
	::java::util::HashMap* m_inUse = nullptr;
	bool m_overrideDefaultParser = false;
	bool _secureProcessing = false;
	$String* _accessExternalDTD = nullptr;
	::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager* _xmlSecurityManager = nullptr;
	bool _useCatalog = false;
	::javax::xml::catalog::CatalogFeatures* _catalogFeatures = nullptr;
	int32_t _cdataChunkSize = 0;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_XMLReaderManager_h_