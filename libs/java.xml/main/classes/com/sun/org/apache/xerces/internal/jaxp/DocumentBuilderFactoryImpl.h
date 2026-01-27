#ifndef _com_sun_org_apache_xerces_internal_jaxp_DocumentBuilderFactoryImpl_h_
#define _com_sun_org_apache_xerces_internal_jaxp_DocumentBuilderFactoryImpl_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.DocumentBuilderFactoryImpl
//$ extends javax.xml.parsers.DocumentBuilderFactory

#include <javax/xml/parsers/DocumentBuilderFactory.h>

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
		class Map;
	}
}
namespace javax {
	namespace xml {
		namespace parsers {
			class DocumentBuilder;
		}
	}
}
namespace javax {
	namespace xml {
		namespace validation {
			class Schema;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

class DocumentBuilderFactoryImpl : public ::javax::xml::parsers::DocumentBuilderFactory {
	$class(DocumentBuilderFactoryImpl, $NO_CLASS_INIT, ::javax::xml::parsers::DocumentBuilderFactory)
public:
	DocumentBuilderFactoryImpl();
	void init$();
	virtual $Object* getAttribute($String* name) override;
	virtual bool getFeature($String* name) override;
	virtual ::javax::xml::validation::Schema* getSchema() override;
	virtual bool isXIncludeAware() override;
	virtual ::javax::xml::parsers::DocumentBuilder* newDocumentBuilder() override;
	virtual void setAttribute($String* name, Object$* value) override;
	virtual void setFeature($String* name, bool value) override;
	virtual void setSchema(::javax::xml::validation::Schema* grammar) override;
	virtual void setXIncludeAware(bool state) override;
	::java::util::Map* attributes = nullptr;
	::java::util::Map* features = nullptr;
	::javax::xml::validation::Schema* grammar = nullptr;
	bool isXIncludeAware$ = false;
	bool fSecureProcess = false;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* fSecurityManager = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager* fSecurityPropertyMgr = nullptr;
};

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_DocumentBuilderFactoryImpl_h_