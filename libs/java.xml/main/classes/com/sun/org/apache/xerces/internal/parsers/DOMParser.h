#ifndef _com_sun_org_apache_xerces_internal_parsers_DOMParser_h_
#define _com_sun_org_apache_xerces_internal_parsers_DOMParser_h_
//$ class com.sun.org.apache.xerces.internal.parsers.DOMParser
//$ extends com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser

#include <com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser.h>
#include <java/lang/Array.h>

#pragma push_macro("RECOGNIZED_FEATURES")
#undef RECOGNIZED_FEATURES
#pragma push_macro("RECOGNIZED_PROPERTIES")
#undef RECOGNIZED_PROPERTIES
#pragma push_macro("REPORT_WHITESPACE")
#undef REPORT_WHITESPACE
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("USE_ENTITY_RESOLVER2")
#undef USE_ENTITY_RESOLVER2
#pragma push_macro("XMLGRAMMAR_POOL")
#undef XMLGRAMMAR_POOL
#pragma push_macro("XML_SECURITY_PROPERTY_MANAGER")
#undef XML_SECURITY_PROPERTY_MANAGER

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
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
							namespace grammars {
								class XMLGrammarPool;
							}
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
								class XMLParserConfiguration;
							}
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class EntityResolver;
			class ErrorHandler;
			class InputSource;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

class DOMParser : public ::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser {
	$class(DOMParser, 0, ::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser)
public:
	DOMParser();
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* config);
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	virtual ::org::xml::sax::EntityResolver* getEntityResolver();
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler();
	virtual bool getFeature($String* featureId) override;
	virtual $Object* getProperty($String* propertyId);
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* getXMLParserConfiguration();
	using ::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser::parse;
	virtual void parse($String* systemId);
	virtual void parse(::org::xml::sax::InputSource* inputSource);
	virtual void setEntityResolver(::org::xml::sax::EntityResolver* resolver);
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* errorHandler);
	virtual void setFeature($String* featureId, bool state);
	virtual void setProperty($String* propertyId, Object$* value);
	virtual void setProperty0($String* propertyId, Object$* value);
	static $String* USE_ENTITY_RESOLVER2;
	static $String* REPORT_WHITESPACE;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	static $StringArray* RECOGNIZED_FEATURES;
	static $String* SYMBOL_TABLE;
	static $String* XMLGRAMMAR_POOL;
	static $StringArray* RECOGNIZED_PROPERTIES;
	bool fUseEntityResolver2 = false;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("RECOGNIZED_FEATURES")
#pragma pop_macro("RECOGNIZED_PROPERTIES")
#pragma pop_macro("REPORT_WHITESPACE")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("USE_ENTITY_RESOLVER2")
#pragma pop_macro("XMLGRAMMAR_POOL")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")

#endif // _com_sun_org_apache_xerces_internal_parsers_DOMParser_h_