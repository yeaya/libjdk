#ifndef _com_sun_org_apache_xerces_internal_dom_DOMNormalizer_h_
#define _com_sun_org_apache_xerces_internal_dom_DOMNormalizer_h_
//$ class com.sun.org.apache.xerces.internal.dom.DOMNormalizer
//$ extends com.sun.org.apache.xerces.internal.xni.XMLDocumentHandler

#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("DEBUG_EVENTS")
#undef DEBUG_EVENTS
#pragma push_macro("DEBUG_ND")
#undef DEBUG_ND
#pragma push_macro("EMPTY_STRING")
#undef EMPTY_STRING
#pragma push_macro("PREFIX")
#undef PREFIX

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class AttributeMap;
							class CoreDocumentImpl;
							class DOMConfigurationImpl;
							class DOMErrorImpl;
							class DOMLocatorImpl;
							class DOMNormalizer$XMLAttributesProxy;
							class ElementImpl;
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
						namespace impl {
							class RevalidationHandler;
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
						namespace impl {
							namespace dtd {
								class XMLDTDValidator;
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
								class XMLDocumentSource;
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
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
			class DOMErrorHandler;
			class NamedNodeMap;
			class Node;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class DOMNormalizer : public ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler {
	$class(DOMNormalizer, 0, ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler)
public:
	DOMNormalizer();
	void init$();
	void addNamespaceDecl($String* prefix, $String* uri, ::com::sun::org::apache::xerces::internal::dom::ElementImpl* element);
	virtual void characters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void doctypeDecl($String* rootElement, $String* publicId, $String* systemId, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void emptyElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDocument(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void expandEntityRef(::org::w3c::dom::Node* parent, ::org::w3c::dom::Node* reference);
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* getDocumentSource() override;
	virtual void ignorableWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	static void isAttrValueWF(::org::w3c::dom::DOMErrorHandler* errorHandler, ::com::sun::org::apache::xerces::internal::dom::DOMErrorImpl* error, ::com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl* locator, ::org::w3c::dom::NamedNodeMap* attributes, ::org::w3c::dom::Attr* a, $String* value, bool xml11Version);
	static void isCDataWF(::org::w3c::dom::DOMErrorHandler* errorHandler, ::com::sun::org::apache::xerces::internal::dom::DOMErrorImpl* error, ::com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl* locator, $String* datavalue, bool isXML11Version);
	static void isCommentWF(::org::w3c::dom::DOMErrorHandler* errorHandler, ::com::sun::org::apache::xerces::internal::dom::DOMErrorImpl* error, ::com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl* locator, $String* datavalue, bool isXML11Version);
	static void isXMLCharWF(::org::w3c::dom::DOMErrorHandler* errorHandler, ::com::sun::org::apache::xerces::internal::dom::DOMErrorImpl* error, ::com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl* locator, $String* datavalue, bool isXML11Version);
	void namespaceFixUp(::com::sun::org::apache::xerces::internal::dom::ElementImpl* element, ::com::sun::org::apache::xerces::internal::dom::AttributeMap* attributes);
	$String* normalizeAttributeValue($String* value, ::org::w3c::dom::Attr* attr);
	virtual void normalizeDocument(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* document, ::com::sun::org::apache::xerces::internal::dom::DOMConfigurationImpl* config);
	virtual ::org::w3c::dom::Node* normalizeNode(::org::w3c::dom::Node* node);
	void processDTD($String* xmlVersion, $String* schemaLocation);
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	static void reportDOMError(::org::w3c::dom::DOMErrorHandler* errorHandler, ::com::sun::org::apache::xerces::internal::dom::DOMErrorImpl* error, ::com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl* locator, $String* message, int16_t severity, $String* type);
	virtual void setDocumentSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* source) override;
	virtual void startCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startDocument(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* namespaceContext, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void textDecl($String* version, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void updateQName(::org::w3c::dom::Node* node, ::com::sun::org::apache::xerces::internal::xni::QName* qname);
	virtual void xmlDecl($String* version, $String* encoding, $String* standalone, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	static const bool DEBUG_ND = false;
	static const bool DEBUG = false;
	static const bool DEBUG_EVENTS = false;
	static $String* PREFIX;
	::com::sun::org::apache::xerces::internal::dom::DOMConfigurationImpl* fConfiguration = nullptr;
	::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* fDocument = nullptr;
	::com::sun::org::apache::xerces::internal::dom::DOMNormalizer$XMLAttributesProxy* fAttrProxy = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fQName = nullptr;
	::com::sun::org::apache::xerces::internal::impl::RevalidationHandler* fValidationHandler = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::org::w3c::dom::DOMErrorHandler* fErrorHandler = nullptr;
	::com::sun::org::apache::xerces::internal::dom::DOMErrorImpl* fError = nullptr;
	bool fNamespaceValidation = false;
	bool fPSVI = false;
	::com::sun::org::apache::xerces::internal::xni::NamespaceContext* fNamespaceContext = nullptr;
	::com::sun::org::apache::xerces::internal::xni::NamespaceContext* fLocalNSBinder = nullptr;
	::java::util::List* fAttributeList = nullptr;
	::com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl* fLocator = nullptr;
	::org::w3c::dom::Node* fCurrentNode = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fAttrQName = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fNormalizedValue = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator* fDTDValidator = nullptr;
	static ::com::sun::org::apache::xerces::internal::xni::XMLString* EMPTY_STRING;
	bool fAllWhitespace = false;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("DEBUG_EVENTS")
#pragma pop_macro("DEBUG_ND")
#pragma pop_macro("EMPTY_STRING")
#pragma pop_macro("PREFIX")

#endif // _com_sun_org_apache_xerces_internal_dom_DOMNormalizer_h_