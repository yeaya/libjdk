#ifndef _com_sun_org_apache_xerces_internal_parsers_AbstractSAXParser_h_
#define _com_sun_org_apache_xerces_internal_parsers_AbstractSAXParser_h_
//$ class com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser
//$ extends com.sun.org.apache.xerces.internal.parsers.AbstractXMLDocumentParser
//$ implements com.sun.org.apache.xerces.internal.xs.PSVIProvider,org.xml.sax.Parser,org.xml.sax.XMLReader

#include <com/sun/org/apache/xerces/internal/parsers/AbstractXMLDocumentParser.h>
#include <com/sun/org/apache/xerces/internal/xs/PSVIProvider.h>
#include <java/lang/Array.h>
#include <org/xml/sax/Parser.h>
#include <org/xml/sax/XMLReader.h>

#pragma push_macro("ALLOW_UE_AND_NOTATION_EVENTS")
#undef ALLOW_UE_AND_NOTATION_EVENTS
#pragma push_macro("BUFFER_SIZE")
#undef BUFFER_SIZE
#pragma push_macro("DECLARATION_HANDLER")
#undef DECLARATION_HANDLER
#pragma push_macro("DOM_NODE")
#undef DOM_NODE
#pragma push_macro("LEXICAL_HANDLER")
#undef LEXICAL_HANDLER
#pragma push_macro("NAMESPACES")
#undef NAMESPACES
#pragma push_macro("NAMESPACE_PREFIXES")
#undef NAMESPACE_PREFIXES
#pragma push_macro("RECOGNIZED_FEATURES")
#undef RECOGNIZED_FEATURES
#pragma push_macro("RECOGNIZED_PROPERTIES")
#undef RECOGNIZED_PROPERTIES
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER
#pragma push_macro("STRING_INTERNING")
#undef STRING_INTERNING

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {
							class AbstractSAXParser$AttributesProxy;
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
						namespace util {
							class SymbolHash;
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
							class Augmentations;
							class NamespaceContext;
							class QName;
							class XMLAttributes;
							class XMLLocator;
							class XMLResourceIdentifier;
							class XMLString;
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
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class AttributePSVI;
							class ElementPSVI;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
			class DTDHandler;
			class DocumentHandler;
			class EntityResolver;
			class ErrorHandler;
			class InputSource;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace ext {
				class DeclHandler;
				class LexicalHandler;
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
						namespace parsers {

class AbstractSAXParser : public ::com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser, public ::com::sun::org::apache::xerces::internal::xs::PSVIProvider, public ::org::xml::sax::Parser, public ::org::xml::sax::XMLReader {
	$class(AbstractSAXParser, 0, ::com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser, ::com::sun::org::apache::xerces::internal::xs::PSVIProvider, ::org::xml::sax::Parser, ::org::xml::sax::XMLReader)
public:
	AbstractSAXParser();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* config);
	virtual void attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, ::com::sun::org::apache::xerces::internal::xni::XMLString* defaultValue, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedDefaultValue, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void characters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void doctypeDecl($String* rootElement, $String* publicId, $String* systemId, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void elementDecl($String* name, $String* contentModel, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDTD(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDocument(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endExternalSubset(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void endNamespaceMapping();
	virtual void endParameterEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void externalEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::AttributePSVI* getAttributePSVI(int32_t index) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::AttributePSVI* getAttributePSVIByName($String* uri, $String* localname) override;
	virtual ::org::xml::sax::ContentHandler* getContentHandler() override;
	virtual ::org::xml::sax::DTDHandler* getDTDHandler() override;
	virtual ::org::xml::sax::ext::DeclHandler* getDeclHandler();
	virtual ::com::sun::org::apache::xerces::internal::xs::ElementPSVI* getElementPSVI() override;
	virtual ::org::xml::sax::EntityResolver* getEntityResolver() override;
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() override;
	virtual bool getFeature($String* featureId) override;
	virtual ::org::xml::sax::ext::LexicalHandler* getLexicalHandler();
	virtual $Object* getProperty($String* propertyId) override;
	virtual void ignorableWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void internalEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedText, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void notationDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	using ::com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser::parse;
	virtual void parse($String* systemId) override;
	virtual void parse(::org::xml::sax::InputSource* inputSource) override;
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void reset() override;
	virtual void setContentHandler(::org::xml::sax::ContentHandler* contentHandler) override;
	virtual void setDTDHandler(::org::xml::sax::DTDHandler* dtdHandler) override;
	virtual void setDeclHandler(::org::xml::sax::ext::DeclHandler* handler);
	virtual void setDocumentHandler(::org::xml::sax::DocumentHandler* documentHandler) override;
	virtual void setEntityResolver(::org::xml::sax::EntityResolver* resolver) override;
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* errorHandler) override;
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setLexicalHandler(::org::xml::sax::ext::LexicalHandler* handler);
	virtual void setLocale(::java::util::Locale* locale) override;
	virtual void setProperty($String* propertyId, Object$* value) override;
	virtual void startCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startDocument(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* namespaceContext, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startExternalSubset(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void startNamespaceMapping();
	virtual void startParameterEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual $String* toString() override;
	virtual void unparsedEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* notation, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void xmlDecl($String* version, $String* encoding, $String* standalone, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	static $String* NAMESPACES;
	static $String* NAMESPACE_PREFIXES;
	static $String* STRING_INTERNING;
	static $String* ALLOW_UE_AND_NOTATION_EVENTS;
	static $StringArray* RECOGNIZED_FEATURES;
	static $String* LEXICAL_HANDLER;
	static $String* DECLARATION_HANDLER;
	static $String* DOM_NODE;
	static $String* SECURITY_MANAGER;
	static $StringArray* RECOGNIZED_PROPERTIES;
	bool fNamespaces = false;
	bool fNamespacePrefixes = false;
	bool fLexicalHandlerParameterEntities = false;
	bool fStandalone = false;
	bool fResolveDTDURIs = false;
	bool fUseEntityResolver2 = false;
	bool fXMLNSURIs = false;
	::org::xml::sax::ContentHandler* fContentHandler = nullptr;
	::org::xml::sax::DocumentHandler* fDocumentHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::NamespaceContext* fNamespaceContext = nullptr;
	::org::xml::sax::DTDHandler* fDTDHandler = nullptr;
	::org::xml::sax::ext::DeclHandler* fDeclHandler = nullptr;
	::org::xml::sax::ext::LexicalHandler* fLexicalHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fQName = nullptr;
	bool fParseInProgress = false;
	$String* fVersion = nullptr;
	::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser$AttributesProxy* fAttributesProxy = nullptr;
	::com::sun::org::apache::xerces::internal::xni::Augmentations* fAugmentations = nullptr;
	static const int32_t BUFFER_SIZE = 20;
	$chars* fCharBuffer = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fDeclaredAttrs = nullptr;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ALLOW_UE_AND_NOTATION_EVENTS")
#pragma pop_macro("BUFFER_SIZE")
#pragma pop_macro("DECLARATION_HANDLER")
#pragma pop_macro("DOM_NODE")
#pragma pop_macro("LEXICAL_HANDLER")
#pragma pop_macro("NAMESPACES")
#pragma pop_macro("NAMESPACE_PREFIXES")
#pragma pop_macro("RECOGNIZED_FEATURES")
#pragma pop_macro("RECOGNIZED_PROPERTIES")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("STRING_INTERNING")

#endif // _com_sun_org_apache_xerces_internal_parsers_AbstractSAXParser_h_