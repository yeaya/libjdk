#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_DOMResultAugmentor_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_DOMResultAugmentor_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.DOMResultAugmentor
//$ extends com.sun.org.apache.xerces.internal.jaxp.validation.DOMDocumentHandler

#include <com/sun/org/apache/xerces/internal/jaxp/validation/DOMDocumentHandler.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class AttrImpl;
							class CoreDocumentImpl;
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
						namespace jaxp {
							namespace validation {
								class DOMValidatorHelper;
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
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class AttributePSVI;
						}
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			namespace dom {
				class DOMResult;
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class CDATASection;
			class Comment;
			class Document;
			class DocumentType;
			class ProcessingInstruction;
			class Text;
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
							namespace validation {

class DOMResultAugmentor : public ::com::sun::org::apache::xerces::internal::jaxp::validation::DOMDocumentHandler {
	$class(DOMResultAugmentor, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::jaxp::validation::DOMDocumentHandler)
public:
	DOMResultAugmentor();
	void init$(::com::sun::org::apache::xerces::internal::jaxp::validation::DOMValidatorHelper* helper);
	virtual void cdata(::org::w3c::dom::CDATASection* node) override;
	virtual void characters(::org::w3c::dom::Text* node) override;
	virtual void characters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void comment(::org::w3c::dom::Comment* node) override;
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void doctypeDecl(::org::w3c::dom::DocumentType* node) override;
	virtual void doctypeDecl($String* rootElement, $String* publicId, $String* systemId, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void emptyElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDocument(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* getDocumentSource() override;
	virtual void ignorableWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	bool processAttributePSVI(::com::sun::org::apache::xerces::internal::dom::AttrImpl* attr, ::com::sun::org::apache::xerces::internal::xs::AttributePSVI* attrPSVI);
	virtual void processingInstruction(::org::w3c::dom::ProcessingInstruction* node) override;
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void setDOMResult(::javax::xml::transform::dom::DOMResult* result) override;
	virtual void setDocumentSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* source) override;
	virtual void setIgnoringCharacters(bool ignore) override;
	virtual void startCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startDocument(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* namespaceContext, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void textDecl($String* version, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void xmlDecl($String* version, $String* encoding, $String* standalone, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	::com::sun::org::apache::xerces::internal::jaxp::validation::DOMValidatorHelper* fDOMValidatorHelper = nullptr;
	::org::w3c::dom::Document* fDocument = nullptr;
	::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* fDocumentImpl = nullptr;
	bool fStorePSVI = false;
	bool fIgnoreChars = false;
	::com::sun::org::apache::xerces::internal::xni::QName* fAttributeQName = nullptr;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_DOMResultAugmentor_h_