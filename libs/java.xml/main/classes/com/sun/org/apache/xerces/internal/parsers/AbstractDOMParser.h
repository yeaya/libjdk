#ifndef _com_sun_org_apache_xerces_internal_parsers_AbstractDOMParser_h_
#define _com_sun_org_apache_xerces_internal_parsers_AbstractDOMParser_h_
//$ class com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser
//$ extends com.sun.org.apache.xerces.internal.parsers.AbstractXMLDocumentParser

#include <com/sun/org/apache/xerces/internal/parsers/AbstractXMLDocumentParser.h>
#include <java/lang/Array.h>

#pragma push_macro("CORE_DOCUMENT_CLASS_NAME")
#undef CORE_DOCUMENT_CLASS_NAME
#pragma push_macro("CREATE_CDATA_NODES_FEATURE")
#undef CREATE_CDATA_NODES_FEATURE
#pragma push_macro("CREATE_ENTITY_REF_NODES")
#undef CREATE_ENTITY_REF_NODES
#pragma push_macro("CURRENT_ELEMENT_NODE")
#undef CURRENT_ELEMENT_NODE
#pragma push_macro("DEBUG_BASEURI")
#undef DEBUG_BASEURI
#pragma push_macro("DEBUG_EVENTS")
#undef DEBUG_EVENTS
#pragma push_macro("DEFAULT_DOCUMENT_CLASS_NAME")
#undef DEFAULT_DOCUMENT_CLASS_NAME
#pragma push_macro("DEFER_NODE_EXPANSION")
#undef DEFER_NODE_EXPANSION
#pragma push_macro("DOCUMENT_CLASS_NAME")
#undef DOCUMENT_CLASS_NAME
#pragma push_macro("INCLUDE_COMMENTS_FEATURE")
#undef INCLUDE_COMMENTS_FEATURE
#pragma push_macro("INCLUDE_IGNORABLE_WHITESPACE")
#undef INCLUDE_IGNORABLE_WHITESPACE
#pragma push_macro("NAMESPACES")
#undef NAMESPACES
#pragma push_macro("PSVI_DOCUMENT_CLASS_NAME")
#undef PSVI_DOCUMENT_CLASS_NAME
#pragma push_macro("RECOGNIZED_FEATURES")
#undef RECOGNIZED_FEATURES
#pragma push_macro("RECOGNIZED_PROPERTIES")
#undef RECOGNIZED_PROPERTIES

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class CoreDocumentImpl;
							class DeferredDocumentImpl;
							class EntityImpl;
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
							class DOMErrorHandlerWrapper;
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
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Stack;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
			class CDATASection;
			class Document;
			class DocumentType;
			class Element;
			class Node;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSParserFilter;
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

class AbstractDOMParser : public ::com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser {
	$class(AbstractDOMParser, 0, ::com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser)
public:
	AbstractDOMParser();
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* config);
	virtual void abort();
	virtual void attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, ::com::sun::org::apache::xerces::internal::xni::XMLString* defaultValue, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedDefaultValue, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void characters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual ::org::w3c::dom::Attr* createAttrNode(::com::sun::org::apache::xerces::internal::xni::QName* attrQName);
	virtual ::org::w3c::dom::Element* createElementNode(::com::sun::org::apache::xerces::internal::xni::QName* element);
	virtual void doctypeDecl($String* rootElement, $String* publicId, $String* systemId, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void dropDocumentReferences();
	virtual void elementDecl($String* name, $String* contentModel, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void emptyElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endAttlist(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endConditional(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDTD(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDocument(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endExternalSubset(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endParameterEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void externalEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual ::org::w3c::dom::Document* getDocument();
	virtual $String* getDocumentClassName();
	void handleBaseURI(::org::w3c::dom::Node* node);
	void handleBaseURI(int32_t node);
	virtual void ignorableWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void ignoredCharacters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void internalEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedText, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void notationDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void reset() override;
	virtual void setCharacterData(bool sawChars);
	virtual void setDocumentClassName($String* documentClassName);
	virtual void setLocale(::java::util::Locale* locale);
	virtual void startAttlist($String* elementName, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startConditional(int16_t type, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startDTD(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startDocument(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* namespaceContext, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startExternalSubset(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startParameterEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void textDecl($String* version, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void unparsedEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* notation, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void xmlDecl($String* version, $String* encoding, $String* standalone, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	static $String* NAMESPACES;
	static $String* CREATE_ENTITY_REF_NODES;
	static $String* INCLUDE_COMMENTS_FEATURE;
	static $String* CREATE_CDATA_NODES_FEATURE;
	static $String* INCLUDE_IGNORABLE_WHITESPACE;
	static $String* DEFER_NODE_EXPANSION;
	static $StringArray* RECOGNIZED_FEATURES;
	static $String* DOCUMENT_CLASS_NAME;
	static $String* CURRENT_ELEMENT_NODE;
	static $StringArray* RECOGNIZED_PROPERTIES;
	static $String* DEFAULT_DOCUMENT_CLASS_NAME;
	static $String* CORE_DOCUMENT_CLASS_NAME;
	static $String* PSVI_DOCUMENT_CLASS_NAME;
	static const bool DEBUG_EVENTS = false;
	static const bool DEBUG_BASEURI = false;
	::com::sun::org::apache::xerces::internal::util::DOMErrorHandlerWrapper* fErrorHandler = nullptr;
	bool fInDTD = false;
	bool fCreateEntityRefNodes = false;
	bool fIncludeIgnorableWhitespace = false;
	bool fIncludeComments = false;
	bool fCreateCDATANodes = false;
	::org::w3c::dom::Document* fDocument = nullptr;
	::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* fDocumentImpl = nullptr;
	bool fStorePSVI = false;
	$String* fDocumentClassName = nullptr;
	::org::w3c::dom::DocumentType* fDocumentType = nullptr;
	::org::w3c::dom::Node* fCurrentNode = nullptr;
	::org::w3c::dom::CDATASection* fCurrentCDATASection = nullptr;
	::com::sun::org::apache::xerces::internal::dom::EntityImpl* fCurrentEntityDecl = nullptr;
	int32_t fDeferredEntityDecl = 0;
	::java::lang::StringBuilder* fStringBuilder = nullptr;
	::java::lang::StringBuilder* fInternalSubset = nullptr;
	bool fDeferNodeExpansion = false;
	bool fNamespaceAware = false;
	::com::sun::org::apache::xerces::internal::dom::DeferredDocumentImpl* fDeferredDocumentImpl = nullptr;
	int32_t fDocumentIndex = 0;
	int32_t fDocumentTypeIndex = 0;
	int32_t fCurrentNodeIndex = 0;
	int32_t fCurrentCDATASectionIndex = 0;
	bool fInDTDExternalSubset = false;
	::org::w3c::dom::Node* fRoot = nullptr;
	bool fInCDATASection = false;
	bool fFirstChunk = false;
	bool fFilterReject = false;
	::java::util::Stack* fBaseURIStack = nullptr;
	int32_t fRejectedElementDepth = 0;
	::java::util::Stack* fSkippedElemStack = nullptr;
	bool fInEntityRef = false;
	::com::sun::org::apache::xerces::internal::xni::QName* fAttrQName = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLLocator* fLocator = nullptr;
	::org::w3c::dom::ls::LSParserFilter* fDOMFilter = nullptr;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CORE_DOCUMENT_CLASS_NAME")
#pragma pop_macro("CREATE_CDATA_NODES_FEATURE")
#pragma pop_macro("CREATE_ENTITY_REF_NODES")
#pragma pop_macro("CURRENT_ELEMENT_NODE")
#pragma pop_macro("DEBUG_BASEURI")
#pragma pop_macro("DEBUG_EVENTS")
#pragma pop_macro("DEFAULT_DOCUMENT_CLASS_NAME")
#pragma pop_macro("DEFER_NODE_EXPANSION")
#pragma pop_macro("DOCUMENT_CLASS_NAME")
#pragma pop_macro("INCLUDE_COMMENTS_FEATURE")
#pragma pop_macro("INCLUDE_IGNORABLE_WHITESPACE")
#pragma pop_macro("NAMESPACES")
#pragma pop_macro("PSVI_DOCUMENT_CLASS_NAME")
#pragma pop_macro("RECOGNIZED_FEATURES")
#pragma pop_macro("RECOGNIZED_PROPERTIES")

#endif // _com_sun_org_apache_xerces_internal_parsers_AbstractDOMParser_h_