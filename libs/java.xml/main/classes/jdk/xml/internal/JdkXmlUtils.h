#ifndef _jdk_xml_internal_JdkXmlUtils_h_
#define _jdk_xml_internal_JdkXmlUtils_h_
//$ class jdk.xml.internal.JdkXmlUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CATALOG_DEFER")
#undef CATALOG_DEFER
#pragma push_macro("CATALOG_FILES")
#undef CATALOG_FILES
#pragma push_macro("CATALOG_PREFER")
#undef CATALOG_PREFER
#pragma push_macro("CATALOG_RESOLVE")
#undef CATALOG_RESOLVE
#pragma push_macro("DOM_FACTORY_ID")
#undef DOM_FACTORY_ID
#pragma push_macro("NAMESPACES_FEATURE")
#undef NAMESPACES_FEATURE
#pragma push_macro("NAMESPACE_PREFIXES_FEATURE")
#undef NAMESPACE_PREFIXES_FEATURE
#pragma push_macro("SAX_DRIVER")
#undef SAX_DRIVER
#pragma push_macro("SAX_FACTORY_ID")
#undef SAX_FACTORY_ID
#pragma push_macro("SP_USE_CATALOG")
#undef SP_USE_CATALOG
#pragma push_macro("USE_CATALOG")
#undef USE_CATALOG
#pragma push_macro("USE_CATALOG_DEFAULT")
#undef USE_CATALOG_DEFAULT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class ParserConfigurationSettings;
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
						namespace xni {
							namespace parser {
								class XMLComponentManager;
							}
						}
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace catalog {
			class CatalogFeatures;
		}
	}
}
namespace javax {
	namespace xml {
		namespace parsers {
			class DocumentBuilderFactory;
			class SAXParserFactory;
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			namespace sax {
				class SAXTransformerFactory;
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
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

namespace jdk {
	namespace xml {
		namespace internal {

class JdkXmlUtils : public ::java::lang::Object {
	$class(JdkXmlUtils, 0, ::java::lang::Object)
public:
	JdkXmlUtils();
	void init$();
	static void catalogFeaturesConfig2Config(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* config1, ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings* config2);
	static void catalogFeaturesConfig2Reader(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* config, ::org::xml::sax::XMLReader* reader);
	static $String* getCatalogFeature(::javax::xml::catalog::CatalogFeatures* features, $String* name);
	static ::javax::xml::catalog::CatalogFeatures* getCatalogFeatures($String* defer, $String* file, $String* prefer, $String* resolve);
	static ::org::w3c::dom::Document* getDOMDocument();
	static ::javax::xml::parsers::DocumentBuilderFactory* getDOMFactory(bool overrideDefaultParser);
	static char16_t getQuoteChar($String* s);
	static ::javax::xml::parsers::SAXParserFactory* getSAXFactory(bool overrideDefaultParser);
	static ::javax::xml::transform::sax::SAXTransformerFactory* getSAXTransformFactory(bool overrideDefaultParser);
	static int32_t getValue(Object$* value, int32_t defValue);
	static ::org::xml::sax::XMLReader* getXMLReader(bool overrideDefaultParser, bool secureProcessing);
	static ::org::xml::sax::XMLReader* getXMLReaderWSAXFactory(bool overrideDefaultParser);
	static ::org::xml::sax::XMLReader* getXMLReaderWXMLReaderFactory();
	static void setXMLReaderPropertyIfSupport(::org::xml::sax::XMLReader* reader, $String* property, Object$* value, bool warn);
	static $String* DOM_FACTORY_ID;
	static $String* SAX_FACTORY_ID;
	static $String* SAX_DRIVER;
	static $String* NAMESPACES_FEATURE;
	static $String* NAMESPACE_PREFIXES_FEATURE;
	static $String* USE_CATALOG;
	static $String* SP_USE_CATALOG;
	static $String* CATALOG_FILES;
	static $String* CATALOG_DEFER;
	static $String* CATALOG_PREFER;
	static $String* CATALOG_RESOLVE;
	static bool USE_CATALOG_DEFAULT;
	static ::javax::xml::parsers::SAXParserFactory* defaultSAXFactory;
};

		} // internal
	} // xml
} // jdk

#pragma pop_macro("CATALOG_DEFER")
#pragma pop_macro("CATALOG_FILES")
#pragma pop_macro("CATALOG_PREFER")
#pragma pop_macro("CATALOG_RESOLVE")
#pragma pop_macro("DOM_FACTORY_ID")
#pragma pop_macro("NAMESPACES_FEATURE")
#pragma pop_macro("NAMESPACE_PREFIXES_FEATURE")
#pragma pop_macro("SAX_DRIVER")
#pragma pop_macro("SAX_FACTORY_ID")
#pragma pop_macro("SP_USE_CATALOG")
#pragma pop_macro("USE_CATALOG")
#pragma pop_macro("USE_CATALOG_DEFAULT")

#endif // _jdk_xml_internal_JdkXmlUtils_h_