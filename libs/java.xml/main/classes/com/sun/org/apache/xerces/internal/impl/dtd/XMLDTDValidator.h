#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_XMLDTDValidator_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_XMLDTDValidator_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDValidator
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLComponent
//$ implements com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDValidatorFilter,com.sun.org.apache.xerces.internal.impl.RevalidationHandler

#include <com/sun/org/apache/xerces/internal/impl/RevalidationHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <java/lang/Array.h>

#pragma push_macro("BALANCE_SYNTAX_TREES")
#undef BALANCE_SYNTAX_TREES
#pragma push_macro("DATATYPE_VALIDATOR_FACTORY")
#undef DATATYPE_VALIDATOR_FACTORY
#pragma push_macro("DEBUG_ATTRIBUTES")
#undef DEBUG_ATTRIBUTES
#pragma push_macro("DEBUG_ELEMENT_CHILDREN")
#undef DEBUG_ELEMENT_CHILDREN
#pragma push_macro("DYNAMIC_VALIDATION")
#undef DYNAMIC_VALIDATION
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("FEATURE_DEFAULTS")
#undef FEATURE_DEFAULTS
#pragma push_macro("GRAMMAR_POOL")
#undef GRAMMAR_POOL
#pragma push_macro("NAMESPACES")
#undef NAMESPACES
#pragma push_macro("PARSER_SETTINGS")
#undef PARSER_SETTINGS
#pragma push_macro("PROPERTY_DEFAULTS")
#undef PROPERTY_DEFAULTS
#pragma push_macro("RECOGNIZED_FEATURES")
#undef RECOGNIZED_FEATURES
#pragma push_macro("RECOGNIZED_PROPERTIES")
#undef RECOGNIZED_PROPERTIES
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("VALIDATION")
#undef VALIDATION
#pragma push_macro("VALIDATION_MANAGER")
#undef VALIDATION_MANAGER
#pragma push_macro("WARN_ON_DUPLICATE_ATTDEF")
#undef WARN_ON_DUPLICATE_ATTDEF

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
						namespace impl {
							namespace dtd {
								class DTDGrammar;
								class DTDGrammarBucket;
								class XMLAttributeDecl;
								class XMLElementDecl;
								class XMLEntityDecl;
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
						namespace impl {
							namespace dv {
								class DTDDVFactory;
								class DatatypeValidator;
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
						namespace impl {
							namespace validation {
								class ValidationManager;
								class ValidationState;
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
								class XMLComponentManager;
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
	namespace lang {
		class Boolean;
		class StringBuilder;
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

class XMLDTDValidator : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent, public ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidatorFilter, public ::com::sun::org::apache::xerces::internal::impl::RevalidationHandler {
	$class(XMLDTDValidator, 0, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidatorFilter, ::com::sun::org::apache::xerces::internal::impl::RevalidationHandler)
public:
	XMLDTDValidator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addDTDDefaultAttrsAndValidate(::com::sun::org::apache::xerces::internal::xni::QName* elementName, int32_t elementIndex, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	void charDataInContent();
	virtual bool characterData($String* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void characters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	int32_t checkContent(int32_t elementIndex, $Array<::com::sun::org::apache::xerces::internal::xni::QName>* children, int32_t childOffset, int32_t childCount);
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void doctypeDecl($String* rootElement, $String* publicId, $String* systemId, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void emptyElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDocument(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endNamespaceScope(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs, bool isEmpty);
	void ensureStackCapacity(int32_t newElementDepth);
	$String* getAttributeTypeName(::com::sun::org::apache::xerces::internal::impl::dtd::XMLAttributeDecl* attrDecl);
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* getDocumentHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* getDocumentSource() override;
	virtual $String* getExternalEntityRefInAttrValue($String* nonNormalizedValue);
	virtual ::java::lang::Boolean* getFeatureDefault($String* featureId) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammarBucket* getGrammarBucket();
	virtual $Object* getPropertyDefault($String* propertyId) override;
	virtual $StringArray* getRecognizedFeatures() override;
	virtual $StringArray* getRecognizedProperties() override;
	virtual void handleEndElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs, bool isEmpty);
	virtual bool handleStartElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs);
	virtual bool hasGrammar() override;
	virtual void ignorableWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void init();
	virtual bool invalidStandaloneAttDef(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::QName* attribute);
	virtual bool isSpace(int32_t c);
	bool normalizeAttrValue(::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, int32_t index);
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager) override;
	void rootElementSpecified(::com::sun::org::apache::xerces::internal::xni::QName* rootElement);
	virtual void setDocumentHandler(::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* documentHandler) override;
	virtual void setDocumentSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* source) override;
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setProperty($String* propertyId, Object$* value) override;
	virtual void startCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startDocument(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* namespaceContext, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startNamespaceScope(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs);
	virtual void textDecl($String* version, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual $String* toString() override;
	virtual bool validate() override;
	virtual void validateDTDattribute(::com::sun::org::apache::xerces::internal::xni::QName* element, $String* attValue, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLAttributeDecl* attributeDecl);
	virtual void xmlDecl($String* version, $String* encoding, $String* standalone, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	static $String* NAMESPACES;
	static $String* VALIDATION;
	static $String* DYNAMIC_VALIDATION;
	static $String* BALANCE_SYNTAX_TREES;
	static $String* WARN_ON_DUPLICATE_ATTDEF;
	static $String* PARSER_SETTINGS;
	static $String* SYMBOL_TABLE;
	static $String* ERROR_REPORTER;
	static $String* GRAMMAR_POOL;
	static $String* DATATYPE_VALIDATOR_FACTORY;
	static $String* VALIDATION_MANAGER;
	static $StringArray* RECOGNIZED_FEATURES;
	static $Array<::java::lang::Boolean>* FEATURE_DEFAULTS;
	static $StringArray* RECOGNIZED_PROPERTIES;
	static $ObjectArray* PROPERTY_DEFAULTS;
	static const bool DEBUG_ATTRIBUTES = false;
	static const bool DEBUG_ELEMENT_CHILDREN = false;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* fValidationManager = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationState* fValidationState = nullptr;
	bool fNamespaces = false;
	bool fValidation = false;
	bool fDTDValidation = false;
	bool fDynamicValidation = false;
	bool fBalanceSyntaxTrees = false;
	bool fWarnDuplicateAttdef = false;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* fGrammarPool = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammarBucket* fGrammarBucket = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLLocator* fDocLocation = nullptr;
	::com::sun::org::apache::xerces::internal::xni::NamespaceContext* fNamespaceContext = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory* fDatatypeValidatorFactory = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* fDocumentHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* fDocumentSource = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar* fDTDGrammar = nullptr;
	bool fSeenDoctypeDecl = false;
	bool fPerformValidation = false;
	$String* fSchemaType = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fCurrentElement = nullptr;
	int32_t fCurrentElementIndex = 0;
	int32_t fCurrentContentSpecType = 0;
	::com::sun::org::apache::xerces::internal::xni::QName* fRootElement = nullptr;
	bool fInCDATASection = false;
	$ints* fElementIndexStack = nullptr;
	$ints* fContentSpecTypeStack = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::xni::QName>* fElementQNamePartsStack = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::xni::QName>* fElementChildren = nullptr;
	int32_t fElementChildrenLength = 0;
	$ints* fElementChildrenOffsetStack = nullptr;
	int32_t fElementDepth = 0;
	bool fSeenRootElement = false;
	bool fInElementContent = false;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLElementDecl* fTempElementDecl = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLAttributeDecl* fTempAttDecl = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLEntityDecl* fEntityDecl = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fTempQName = nullptr;
	::java::lang::StringBuilder* fBuffer = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator* fValID = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator* fValIDRef = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator* fValIDRefs = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator* fValENTITY = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator* fValENTITIES = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator* fValNMTOKEN = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator* fValNMTOKENS = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator* fValNOTATION = nullptr;
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BALANCE_SYNTAX_TREES")
#pragma pop_macro("DATATYPE_VALIDATOR_FACTORY")
#pragma pop_macro("DEBUG_ATTRIBUTES")
#pragma pop_macro("DEBUG_ELEMENT_CHILDREN")
#pragma pop_macro("DYNAMIC_VALIDATION")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("FEATURE_DEFAULTS")
#pragma pop_macro("GRAMMAR_POOL")
#pragma pop_macro("NAMESPACES")
#pragma pop_macro("PARSER_SETTINGS")
#pragma pop_macro("PROPERTY_DEFAULTS")
#pragma pop_macro("RECOGNIZED_FEATURES")
#pragma pop_macro("RECOGNIZED_PROPERTIES")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("VALIDATION")
#pragma pop_macro("VALIDATION_MANAGER")
#pragma pop_macro("WARN_ON_DUPLICATE_ATTDEF")

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_XMLDTDValidator_h_