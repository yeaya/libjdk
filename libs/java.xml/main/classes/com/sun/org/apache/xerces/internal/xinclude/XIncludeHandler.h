#ifndef _com_sun_org_apache_xerces_internal_xinclude_XIncludeHandler_h_
#define _com_sun_org_apache_xerces_internal_xinclude_XIncludeHandler_h_
//$ class com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLComponent
//$ implements com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentFilter,com.sun.org.apache.xerces.internal.xni.parser.XMLDTDFilter

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentFilter.h>
#include <java/lang/Array.h>

#pragma push_macro("ALLOW_UE_AND_NOTATION_EVENTS")
#undef ALLOW_UE_AND_NOTATION_EVENTS
#pragma push_macro("BUFFER_SIZE")
#undef BUFFER_SIZE
#pragma push_macro("CURRENT_BASE_URI")
#undef CURRENT_BASE_URI
#pragma push_macro("DYNAMIC_VALIDATION")
#undef DYNAMIC_VALIDATION
#pragma push_macro("ENTITY_RESOLVER")
#undef ENTITY_RESOLVER
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("FEATURE_DEFAULTS")
#undef FEATURE_DEFAULTS
#pragma push_macro("HTTP_ACCEPT")
#undef HTTP_ACCEPT
#pragma push_macro("HTTP_ACCEPT_LANGUAGE")
#undef HTTP_ACCEPT_LANGUAGE
#pragma push_macro("INITIAL_SIZE")
#undef INITIAL_SIZE
#pragma push_macro("JAXP_SCHEMA_LANGUAGE")
#undef JAXP_SCHEMA_LANGUAGE
#pragma push_macro("NEW_NS_ATTR_QNAME")
#undef NEW_NS_ATTR_QNAME
#pragma push_macro("PARSER_SETTINGS")
#undef PARSER_SETTINGS
#pragma push_macro("PROPERTY_DEFAULTS")
#undef PROPERTY_DEFAULTS
#pragma push_macro("RECOGNIZED_FEATURES")
#undef RECOGNIZED_FEATURES
#pragma push_macro("RECOGNIZED_PROPERTIES")
#undef RECOGNIZED_PROPERTIES
#pragma push_macro("SCHEMA_VALIDATION")
#undef SCHEMA_VALIDATION
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER
#pragma push_macro("STATE_EXPECT_FALLBACK")
#undef STATE_EXPECT_FALLBACK
#pragma push_macro("STATE_IGNORE")
#undef STATE_IGNORE
#pragma push_macro("STATE_NORMAL_PROCESSING")
#undef STATE_NORMAL_PROCESSING
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("VALIDATION")
#undef VALIDATION
#pragma push_macro("XINCLUDE_ATTR_ACCEPT")
#undef XINCLUDE_ATTR_ACCEPT
#pragma push_macro("XINCLUDE_ATTR_ACCEPT_LANGUAGE")
#undef XINCLUDE_ATTR_ACCEPT_LANGUAGE
#pragma push_macro("XINCLUDE_ATTR_ENCODING")
#undef XINCLUDE_ATTR_ENCODING
#pragma push_macro("XINCLUDE_ATTR_HREF")
#undef XINCLUDE_ATTR_HREF
#pragma push_macro("XINCLUDE_ATTR_PARSE")
#undef XINCLUDE_ATTR_PARSE
#pragma push_macro("XINCLUDE_BASE")
#undef XINCLUDE_BASE
#pragma push_macro("XINCLUDE_FALLBACK")
#undef XINCLUDE_FALLBACK
#pragma push_macro("XINCLUDE_FIXUP_BASE_URIS")
#undef XINCLUDE_FIXUP_BASE_URIS
#pragma push_macro("XINCLUDE_FIXUP_LANGUAGE")
#undef XINCLUDE_FIXUP_LANGUAGE
#pragma push_macro("XINCLUDE_INCLUDE")
#undef XINCLUDE_INCLUDE
#pragma push_macro("XINCLUDE_INCLUDED")
#undef XINCLUDE_INCLUDED
#pragma push_macro("XINCLUDE_LANG")
#undef XINCLUDE_LANG
#pragma push_macro("XINCLUDE_NS_URI")
#undef XINCLUDE_NS_URI
#pragma push_macro("XINCLUDE_PARSE_TEXT")
#undef XINCLUDE_PARSE_TEXT
#pragma push_macro("XINCLUDE_PARSE_XML")
#undef XINCLUDE_PARSE_XML
#pragma push_macro("XML_BASE_QNAME")
#undef XML_BASE_QNAME
#pragma push_macro("XML_LANG_QNAME")
#undef XML_LANG_QNAME
#pragma push_macro("XML_SECURITY_PROPERTY_MANAGER")
#undef XML_SECURITY_PROPERTY_MANAGER
#pragma push_macro("XPOINTER")
#undef XPOINTER

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLErrorReporter;
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
							class IntStack;
							class ParserConfigurationSettings;
							class SymbolTable;
							class XMLLocatorWrapper;
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
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xinclude {
							class XIncludeHandler$Notation;
							class XIncludeHandler$UnparsedEntity;
							class XIncludeMessageFormatter;
							class XIncludeNamespaceSupport;
							class XIncludeTextReader;
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
							class XMLDTDHandler;
							class XMLDocumentHandler;
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
								class XMLComponentManager;
								class XMLDTDSource;
								class XMLDocumentSource;
								class XMLEntityResolver;
								class XMLInputSource;
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
						namespace xpointer {
							class XPointerProcessor;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
		class Exception;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class List;
		class Stack;
	}
}
namespace javax {
	namespace xml {
		namespace catalog {
			class CatalogFeatures;
			class CatalogResolver;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xinclude {

class XIncludeHandler : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDFilter {
	$class(XIncludeHandler, 0, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDFilter)
public:
	XIncludeHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addNotation($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations);
	virtual void addUnparsedEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* notation, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations);
	virtual void attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, ::com::sun::org::apache::xerces::internal::xni::XMLString* defaultValue, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedDefaultValue, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void characters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void checkAndSendNotation(::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler$Notation* not$);
	virtual void checkAndSendUnparsedEntity(::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler$UnparsedEntity* ent);
	void checkMultipleRootElements();
	virtual void checkNotation($String* notName);
	virtual void checkUnparsedEntity($String* entName);
	void checkWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* value);
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void copyFeatures(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* from, ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings* to);
	virtual void copyFeatures(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* from, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* to);
	void copyFeatures1(::java::util::Enumeration* features, $String* featurePrefix, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* from, ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings* to);
	void copyFeatures1(::java::util::Enumeration* features, $String* featurePrefix, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* from, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* to);
	::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* createInputSource($String* publicId, $String* systemId, $String* baseSystemId, $String* accept, $String* acceptLanguage);
	virtual void doctypeDecl($String* rootElement, $String* publicId, $String* systemId, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void elementDecl($String* name, $String* contentModel, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void emptyElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endAttlist(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void endCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endConditional(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void endDTD(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void endDocument(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endExternalSubset(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void endGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endParameterEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	$String* escapeHref($String* href);
	virtual void externalEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual $String* getBaseURI(int32_t depth);
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* getDTDHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource* getDTDSource() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* getDocumentHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* getDocumentSource() override;
	virtual ::java::lang::Boolean* getFeatureDefault($String* featureId) override;
	$String* getIncludeParentBaseURI();
	int32_t getIncludeParentDepth();
	$String* getIncludeParentLanguage();
	virtual $String* getLanguage(int32_t depth);
	virtual $Object* getPropertyDefault($String* propertyId) override;
	virtual $StringArray* getRecognizedFeatures() override;
	virtual $StringArray* getRecognizedProperties() override;
	virtual $String* getRelativeBaseURI();
	virtual $String* getRelativeURI(int32_t depth);
	int32_t getResultDepth();
	bool getRootElementProcessed();
	virtual bool getSawFallback(int32_t depth);
	virtual bool getSawInclude(int32_t depth);
	virtual int32_t getState(int32_t depth);
	virtual int32_t getState();
	virtual void handleFallbackElement();
	virtual bool handleIncludeElement(::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	virtual bool hasXIncludeNamespace(::com::sun::org::apache::xerces::internal::xni::QName* element);
	virtual void ignorableWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void ignoredCharacters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void internalEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedText, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual bool isFallbackElement(::com::sun::org::apache::xerces::internal::xni::QName* element);
	virtual bool isIncludeElement(::com::sun::org::apache::xerces::internal::xni::QName* element);
	virtual bool isRootDocument();
	virtual bool isTopLevelIncludedItem();
	virtual bool isTopLevelIncludedItemViaFallback();
	virtual bool isTopLevelIncludedItemViaInclude();
	bool isValidInHTTPHeader($String* value);
	virtual ::com::sun::org::apache::xerces::internal::xni::Augmentations* modifyAugmentations(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs);
	virtual ::com::sun::org::apache::xerces::internal::xni::Augmentations* modifyAugmentations(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs, bool force);
	virtual void notationDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* processAttributes(::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	virtual void processXMLBaseAttributes(::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	virtual void processXMLLangAttributes(::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void reportError($String* key, $ObjectArray* args, int16_t severity, ::java::lang::Exception* exception);
	virtual void reportFatalError($String* key);
	virtual void reportFatalError($String* key, $ObjectArray* args);
	virtual void reportFatalError($String* key, $ObjectArray* args, ::java::lang::Exception* exception);
	virtual void reportResourceError($String* key);
	virtual void reportResourceError($String* key, $ObjectArray* args);
	virtual void reportResourceError($String* key, $ObjectArray* args, ::java::lang::Exception* exception);
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager) override;
	virtual void restoreBaseURI();
	virtual $String* restoreLanguage();
	virtual bool sameBaseURIAsIncludeParent();
	virtual bool sameLanguageAsIncludeParent();
	virtual void saveBaseURI();
	virtual void saveLanguage($String* language);
	int32_t scopeOfBaseURI(int32_t depth);
	int32_t scopeOfLanguage(int32_t depth);
	virtual bool searchForRecursiveIncludes($String* includedSysId);
	virtual void setDTDHandler(::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* handler) override;
	virtual void setDTDSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource* source) override;
	virtual void setDocumentHandler(::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* handler) override;
	virtual void setDocumentSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* source) override;
	void setErrorReporter(::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* reporter);
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setHref($String* href);
	virtual void setParent(::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler* parent);
	virtual void setProperty($String* propertyId, Object$* value) override;
	void setRootElementProcessed(bool seenRoot);
	virtual void setSawFallback(int32_t depth, bool val);
	virtual void setSawInclude(int32_t depth, bool val);
	virtual void setState(int32_t state);
	virtual void setXIncludeLocator(::com::sun::org::apache::xerces::internal::util::XMLLocatorWrapper* locator);
	void setupCurrentBaseURI(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator);
	virtual void startAttlist($String* elementName, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void startCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startConditional(int16_t type, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void startDTD(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void startDocument(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* namespaceContext, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startExternalSubset(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void startGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* resId, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startParameterEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void textDecl($String* version, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual $String* toString() override;
	virtual void unparsedEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* notation, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void xmlDecl($String* version, $String* encoding, $String* standalone, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	static $String* HTTP_ACCEPT;
	static $String* HTTP_ACCEPT_LANGUAGE;
	static $String* XPOINTER;
	static $String* XINCLUDE_NS_URI;
	static $String* XINCLUDE_INCLUDE;
	static $String* XINCLUDE_FALLBACK;
	static $String* XINCLUDE_PARSE_XML;
	static $String* XINCLUDE_PARSE_TEXT;
	static $String* XINCLUDE_ATTR_HREF;
	static $String* XINCLUDE_ATTR_PARSE;
	static $String* XINCLUDE_ATTR_ENCODING;
	static $String* XINCLUDE_ATTR_ACCEPT;
	static $String* XINCLUDE_ATTR_ACCEPT_LANGUAGE;
	static $String* XINCLUDE_INCLUDED;
	static $String* CURRENT_BASE_URI;
	static $String* XINCLUDE_BASE;
	static ::com::sun::org::apache::xerces::internal::xni::QName* XML_BASE_QNAME;
	static $String* XINCLUDE_LANG;
	static ::com::sun::org::apache::xerces::internal::xni::QName* XML_LANG_QNAME;
	static ::com::sun::org::apache::xerces::internal::xni::QName* NEW_NS_ATTR_QNAME;
	static const int32_t STATE_NORMAL_PROCESSING = 1;
	static const int32_t STATE_IGNORE = 2;
	static const int32_t STATE_EXPECT_FALLBACK = 3;
	static $String* VALIDATION;
	static $String* SCHEMA_VALIDATION;
	static $String* DYNAMIC_VALIDATION;
	static $String* ALLOW_UE_AND_NOTATION_EVENTS;
	static $String* XINCLUDE_FIXUP_BASE_URIS;
	static $String* XINCLUDE_FIXUP_LANGUAGE;
	static $String* JAXP_SCHEMA_LANGUAGE;
	static $String* SYMBOL_TABLE;
	static $String* ERROR_REPORTER;
	static $String* ENTITY_RESOLVER;
	static $String* SECURITY_MANAGER;
	static $String* BUFFER_SIZE;
	static $String* PARSER_SETTINGS;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	static $StringArray* RECOGNIZED_FEATURES;
	static $Array<::java::lang::Boolean>* FEATURE_DEFAULTS;
	static $StringArray* RECOGNIZED_PROPERTIES;
	static $ObjectArray* PROPERTY_DEFAULTS;
	::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* fDocumentHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* fDocumentSource = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* fDTDHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource* fDTDSource = nullptr;
	::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler* fParentXIncludeHandler = nullptr;
	int32_t fBufferSize = 0;
	$String* fParentRelativeURI = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* fChildConfig = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* fXIncludeChildConfig = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* fXPointerChildConfig = nullptr;
	::com::sun::org::apache::xerces::internal::xpointer::XPointerProcessor* fXPtrProcessor = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLLocator* fDocLocation = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLLocatorWrapper* fXIncludeLocator = nullptr;
	::com::sun::org::apache::xerces::internal::xinclude::XIncludeMessageFormatter* fXIncludeMessageFormatter = nullptr;
	::com::sun::org::apache::xerces::internal::xinclude::XIncludeNamespaceSupport* fNamespaceContext = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* fEntityResolver = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* fSecurityManager = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager* fSecurityPropertyMgr = nullptr;
	::com::sun::org::apache::xerces::internal::xinclude::XIncludeTextReader* fXInclude10TextReader = nullptr;
	::com::sun::org::apache::xerces::internal::xinclude::XIncludeTextReader* fXInclude11TextReader = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* fCurrentBaseURI = nullptr;
	::com::sun::org::apache::xerces::internal::util::IntStack* fBaseURIScope = nullptr;
	::java::util::Stack* fBaseURI = nullptr;
	::java::util::Stack* fLiteralSystemID = nullptr;
	::java::util::Stack* fExpandedSystemID = nullptr;
	::com::sun::org::apache::xerces::internal::util::IntStack* fLanguageScope = nullptr;
	::java::util::Stack* fLanguageStack = nullptr;
	$String* fCurrentLanguage = nullptr;
	$String* fHrefFromParent = nullptr;
	::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings* fSettings = nullptr;
	int32_t fDepth = 0;
	int32_t fResultDepth = 0;
	static const int32_t INITIAL_SIZE = 8;
	$booleans* fSawInclude = nullptr;
	$booleans* fSawFallback = nullptr;
	$ints* fState = nullptr;
	::java::util::List* fNotations = nullptr;
	::java::util::List* fUnparsedEntities = nullptr;
	bool fFixupBaseURIs = false;
	bool fFixupLanguage = false;
	bool fSendUEAndNotationEvents = false;
	bool fIsXML11 = false;
	bool fInDTD = false;
	bool fHasIncludeReportedContent = false;
	bool fSeenRootElement = false;
	bool fNeedCopyFeatures = false;
	bool fUseCatalog = false;
	::javax::xml::catalog::CatalogFeatures* fCatalogFeatures = nullptr;
	::javax::xml::catalog::CatalogResolver* fCatalogResolver = nullptr;
	$String* fCatalogFile = nullptr;
	$String* fDefer = nullptr;
	$String* fPrefer = nullptr;
	$String* fResolve = nullptr;
	static $booleans* gNeedEscaping;
	static $chars* gAfterEscaping1;
	static $chars* gAfterEscaping2;
	static $chars* gHexChs;
};

						} // xinclude
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ALLOW_UE_AND_NOTATION_EVENTS")
#pragma pop_macro("BUFFER_SIZE")
#pragma pop_macro("CURRENT_BASE_URI")
#pragma pop_macro("DYNAMIC_VALIDATION")
#pragma pop_macro("ENTITY_RESOLVER")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("FEATURE_DEFAULTS")
#pragma pop_macro("HTTP_ACCEPT")
#pragma pop_macro("HTTP_ACCEPT_LANGUAGE")
#pragma pop_macro("INITIAL_SIZE")
#pragma pop_macro("JAXP_SCHEMA_LANGUAGE")
#pragma pop_macro("NEW_NS_ATTR_QNAME")
#pragma pop_macro("PARSER_SETTINGS")
#pragma pop_macro("PROPERTY_DEFAULTS")
#pragma pop_macro("RECOGNIZED_FEATURES")
#pragma pop_macro("RECOGNIZED_PROPERTIES")
#pragma pop_macro("SCHEMA_VALIDATION")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("STATE_EXPECT_FALLBACK")
#pragma pop_macro("STATE_IGNORE")
#pragma pop_macro("STATE_NORMAL_PROCESSING")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("VALIDATION")
#pragma pop_macro("XINCLUDE_ATTR_ACCEPT")
#pragma pop_macro("XINCLUDE_ATTR_ACCEPT_LANGUAGE")
#pragma pop_macro("XINCLUDE_ATTR_ENCODING")
#pragma pop_macro("XINCLUDE_ATTR_HREF")
#pragma pop_macro("XINCLUDE_ATTR_PARSE")
#pragma pop_macro("XINCLUDE_BASE")
#pragma pop_macro("XINCLUDE_FALLBACK")
#pragma pop_macro("XINCLUDE_FIXUP_BASE_URIS")
#pragma pop_macro("XINCLUDE_FIXUP_LANGUAGE")
#pragma pop_macro("XINCLUDE_INCLUDE")
#pragma pop_macro("XINCLUDE_INCLUDED")
#pragma pop_macro("XINCLUDE_LANG")
#pragma pop_macro("XINCLUDE_NS_URI")
#pragma pop_macro("XINCLUDE_PARSE_TEXT")
#pragma pop_macro("XINCLUDE_PARSE_XML")
#pragma pop_macro("XML_BASE_QNAME")
#pragma pop_macro("XML_LANG_QNAME")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")
#pragma pop_macro("XPOINTER")

#endif // _com_sun_org_apache_xerces_internal_xinclude_XIncludeHandler_h_