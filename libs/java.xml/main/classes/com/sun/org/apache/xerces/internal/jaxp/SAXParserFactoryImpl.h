#ifndef _com_sun_org_apache_xerces_internal_jaxp_SAXParserFactoryImpl_h_
#define _com_sun_org_apache_xerces_internal_jaxp_SAXParserFactoryImpl_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.SAXParserFactoryImpl
//$ extends javax.xml.parsers.SAXParserFactory

#include <javax/xml/parsers/SAXParserFactory.h>

#pragma push_macro("NAMESPACES_FEATURE")
#undef NAMESPACES_FEATURE
#pragma push_macro("VALIDATION_FEATURE")
#undef VALIDATION_FEATURE
#pragma push_macro("XINCLUDE_FEATURE")
#undef XINCLUDE_FEATURE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							class SAXParserImpl;
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
			class SAXParser;
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

class SAXParserFactoryImpl : public ::javax::xml::parsers::SAXParserFactory {
	$class(SAXParserFactoryImpl, 0, ::javax::xml::parsers::SAXParserFactory)
public:
	SAXParserFactoryImpl();
	void init$();
	virtual bool getFeature($String* name) override;
	bool getFromFeatures($String* name);
	virtual ::javax::xml::validation::Schema* getSchema() override;
	virtual bool isNamespaceAware() override;
	virtual bool isValidating() override;
	virtual bool isXIncludeAware() override;
	virtual ::javax::xml::parsers::SAXParser* newSAXParser() override;
	::com::sun::org::apache::xerces::internal::jaxp::SAXParserImpl* newSAXParserImpl();
	void putInFeatures($String* name, bool value);
	virtual void setFeature($String* name, bool value) override;
	virtual void setNamespaceAware(bool awareness) override;
	virtual void setSchema(::javax::xml::validation::Schema* grammar) override;
	virtual void setValidating(bool validating) override;
	virtual void setXIncludeAware(bool state) override;
	static $String* VALIDATION_FEATURE;
	static $String* NAMESPACES_FEATURE;
	static $String* XINCLUDE_FEATURE;
	::java::util::Map* features = nullptr;
	::javax::xml::validation::Schema* grammar = nullptr;
	bool isXIncludeAware$ = false;
	bool fSecureProcess = false;
};

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("NAMESPACES_FEATURE")
#pragma pop_macro("VALIDATION_FEATURE")
#pragma pop_macro("XINCLUDE_FEATURE")

#endif // _com_sun_org_apache_xerces_internal_jaxp_SAXParserFactoryImpl_h_