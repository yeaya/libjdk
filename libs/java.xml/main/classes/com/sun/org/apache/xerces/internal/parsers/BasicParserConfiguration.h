#ifndef _com_sun_org_apache_xerces_internal_parsers_BasicParserConfiguration_h_
#define _com_sun_org_apache_xerces_internal_parsers_BasicParserConfiguration_h_
//$ class com.sun.org.apache.xerces.internal.parsers.BasicParserConfiguration
//$ extends com.sun.org.apache.xerces.internal.util.ParserConfigurationSettings
//$ implements com.sun.org.apache.xerces.internal.xni.parser.XMLParserConfiguration

#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>

#pragma push_macro("ENTITY_RESOLVER")
#undef ENTITY_RESOLVER
#pragma push_macro("ERROR_HANDLER")
#undef ERROR_HANDLER
#pragma push_macro("EXTERNAL_GENERAL_ENTITIES")
#undef EXTERNAL_GENERAL_ENTITIES
#pragma push_macro("EXTERNAL_PARAMETER_ENTITIES")
#undef EXTERNAL_PARAMETER_ENTITIES
#pragma push_macro("NAMESPACES")
#undef NAMESPACES
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("VALIDATION")
#undef VALIDATION
#pragma push_macro("XML_STRING")
#undef XML_STRING

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class FeatureState;
							class PropertyState;
							class SymbolTable;
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
							class XMLDTDContentModelHandler;
							class XMLDTDHandler;
							class XMLDocumentHandler;
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
								class XMLComponent;
								class XMLComponentManager;
								class XMLDocumentSource;
								class XMLEntityResolver;
								class XMLErrorHandler;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Locale;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

class BasicParserConfiguration : public ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration {
	$class(BasicParserConfiguration, 0, ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration)
public:
	BasicParserConfiguration();
	virtual void addRecognizedFeatures($StringArray* featureIds) override;
	virtual void addRecognizedProperties($StringArray* propertyIds) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual bool getFeature($String* featureId) override;
	virtual bool getFeature($String* featureId, bool defaultValue) override;
	virtual ::com::sun::org::apache::xerces::internal::util::FeatureState* getFeatureState($String* featureId) override;
	virtual $Object* getProperty($String* propertyId) override;
	virtual $Object* getProperty($String* propertyId, Object$* defaultValue) override;
	virtual ::com::sun::org::apache::xerces::internal::util::PropertyState* getPropertyState($String* propertyId) override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* parentSettings);
	virtual void addComponent(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent* component);
	virtual ::com::sun::org::apache::xerces::internal::util::FeatureState* checkFeature($String* featureId) override;
	virtual ::com::sun::org::apache::xerces::internal::util::PropertyState* checkProperty($String* propertyId) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* getDTDContentModelHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* getDTDHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* getDocumentHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* getEntityResolver() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* getErrorHandler() override;
	virtual ::java::util::Locale* getLocale() override;
	virtual void parse(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource) override {}
	virtual void reset();
	virtual void setDTDContentModelHandler(::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* handler) override;
	virtual void setDTDHandler(::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* dtdHandler) override;
	virtual void setDocumentHandler(::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* documentHandler) override;
	virtual void setEntityResolver(::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* resolver) override;
	virtual void setErrorHandler(::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* errorHandler) override;
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setLocale(::java::util::Locale* locale) override;
	virtual void setProperty($String* propertyId, Object$* value) override;
	virtual $String* toString() override;
	static $String* VALIDATION;
	static $String* NAMESPACES;
	static $String* EXTERNAL_GENERAL_ENTITIES;
	static $String* EXTERNAL_PARAMETER_ENTITIES;
	static $String* XML_STRING;
	static $String* SYMBOL_TABLE;
	static $String* ERROR_HANDLER;
	static $String* ENTITY_RESOLVER;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::java::util::Locale* fLocale = nullptr;
	::java::util::List* fComponents = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* fDocumentHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* fDTDHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* fDTDContentModelHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* fLastComponent = nullptr;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ENTITY_RESOLVER")
#pragma pop_macro("ERROR_HANDLER")
#pragma pop_macro("EXTERNAL_GENERAL_ENTITIES")
#pragma pop_macro("EXTERNAL_PARAMETER_ENTITIES")
#pragma pop_macro("NAMESPACES")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("VALIDATION")
#pragma pop_macro("XML_STRING")

#endif // _com_sun_org_apache_xerces_internal_parsers_BasicParserConfiguration_h_