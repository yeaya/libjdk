#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLComponent
//$ implements com.sun.org.apache.xerces.internal.impl.xs.identity.FieldActivator,com.sun.org.apache.xerces.internal.impl.RevalidationHandler,com.sun.org.apache.xerces.internal.impl.xs.XSElementDeclHelper

#include <com/sun/org/apache/xerces/internal/impl/RevalidationHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDeclHelper.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/FieldActivator.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <java/lang/Array.h>

#pragma push_macro("ALLOW_JAVA_ENCODINGS")
#undef ALLOW_JAVA_ENCODINGS
#pragma push_macro("BUFFER_SIZE")
#undef BUFFER_SIZE
#pragma push_macro("CONTINUE_AFTER_FATAL_ERROR")
#undef CONTINUE_AFTER_FATAL_ERROR
#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("DEBUG_NORMALIZATION")
#undef DEBUG_NORMALIZATION
#pragma push_macro("DYNAMIC_VALIDATION")
#undef DYNAMIC_VALIDATION
#pragma push_macro("ENTITY_MANAGER")
#undef ENTITY_MANAGER
#pragma push_macro("ENTITY_RESOLVER")
#undef ENTITY_RESOLVER
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("FEATURE_DEFAULTS")
#undef FEATURE_DEFAULTS
#pragma push_macro("GENERATE_SYNTHETIC_ANNOTATIONS")
#undef GENERATE_SYNTHETIC_ANNOTATIONS
#pragma push_macro("HONOUR_ALL_SCHEMALOCATIONS")
#undef HONOUR_ALL_SCHEMALOCATIONS
#pragma push_macro("IDENTITY_CONSTRAINT_CHECKING")
#undef IDENTITY_CONSTRAINT_CHECKING
#pragma push_macro("ID_CONSTRAINT_NUM")
#undef ID_CONSTRAINT_NUM
#pragma push_macro("ID_IDREF_CHECKING")
#undef ID_IDREF_CHECKING
#pragma push_macro("IGNORE_XSI_TYPE")
#undef IGNORE_XSI_TYPE
#pragma push_macro("INC_STACK_SIZE")
#undef INC_STACK_SIZE
#pragma push_macro("INITIAL_STACK_SIZE")
#undef INITIAL_STACK_SIZE
#pragma push_macro("JAXP_SCHEMA_LANGUAGE")
#undef JAXP_SCHEMA_LANGUAGE
#pragma push_macro("JAXP_SCHEMA_SOURCE")
#undef JAXP_SCHEMA_SOURCE
#pragma push_macro("NAMESPACE_GROWTH")
#undef NAMESPACE_GROWTH
#pragma push_macro("NORMALIZE_DATA")
#undef NORMALIZE_DATA
#pragma push_macro("OVERRIDE_PARSER")
#undef OVERRIDE_PARSER
#pragma push_macro("PARSER_SETTINGS")
#undef PARSER_SETTINGS
#pragma push_macro("PROPERTY_DEFAULTS")
#undef PROPERTY_DEFAULTS
#pragma push_macro("RECOGNIZED_FEATURES")
#undef RECOGNIZED_FEATURES
#pragma push_macro("RECOGNIZED_PROPERTIES")
#undef RECOGNIZED_PROPERTIES
#pragma push_macro("REPORT_WHITESPACE")
#undef REPORT_WHITESPACE
#pragma push_macro("ROOT_ELEMENT_DECL")
#undef ROOT_ELEMENT_DECL
#pragma push_macro("ROOT_TYPE_DEF")
#undef ROOT_TYPE_DEF
#pragma push_macro("SCHEMA_AUGMENT_PSVI")
#undef SCHEMA_AUGMENT_PSVI
#pragma push_macro("SCHEMA_DV_FACTORY")
#undef SCHEMA_DV_FACTORY
#pragma push_macro("SCHEMA_ELEMENT_DEFAULT")
#undef SCHEMA_ELEMENT_DEFAULT
#pragma push_macro("SCHEMA_FULL_CHECKING")
#undef SCHEMA_FULL_CHECKING
#pragma push_macro("SCHEMA_LOCATION")
#undef SCHEMA_LOCATION
#pragma push_macro("SCHEMA_NONS_LOCATION")
#undef SCHEMA_NONS_LOCATION
#pragma push_macro("SCHEMA_VALIDATION")
#undef SCHEMA_VALIDATION
#pragma push_macro("STANDARD_URI_CONFORMANT_FEATURE")
#undef STANDARD_URI_CONFORMANT_FEATURE
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("TOLERATE_DUPLICATES")
#undef TOLERATE_DUPLICATES
#pragma push_macro("UNPARSED_ENTITY_CHECKING")
#undef UNPARSED_ENTITY_CHECKING
#pragma push_macro("USE_CATALOG")
#undef USE_CATALOG
#pragma push_macro("USE_GRAMMAR_POOL_ONLY")
#undef USE_GRAMMAR_POOL_ONLY
#pragma push_macro("VALIDATE_ANNOTATIONS")
#undef VALIDATE_ANNOTATIONS
#pragma push_macro("VALIDATION")
#undef VALIDATION
#pragma push_macro("VALIDATION_MANAGER")
#undef VALIDATION_MANAGER
#pragma push_macro("XMLGRAMMAR_POOL")
#undef XMLGRAMMAR_POOL
#pragma push_macro("XML_SECURITY_PROPERTY_MANAGER")
#undef XML_SECURITY_PROPERTY_MANAGER
#pragma push_macro("XSI_NIL")
#undef XSI_NIL
#pragma push_macro("XSI_NONAMESPACESCHEMALOCATION")
#undef XSI_NONAMESPACESCHEMALOCATION
#pragma push_macro("XSI_SCHEMALOCATION")
#undef XSI_SCHEMALOCATION
#pragma push_macro("XSI_TYPE")
#undef XSI_TYPE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class ValidatedInfo;
								class XSSimpleType;
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
								class ConfigurableValidationState;
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
						namespace impl {
							namespace xs {
								class AttributePSVImpl;
								class ElementPSVImpl;
								class SchemaGrammar;
								class SubstitutionGroupHandler;
								class XMLSchemaLoader;
								class XMLSchemaValidator$ValueStoreCache;
								class XMLSchemaValidator$XPathMatcherStack;
								class XMLSchemaValidator$XSIErrorReporter;
								class XSAttributeDecl;
								class XSAttributeGroupDecl;
								class XSAttributeUseImpl;
								class XSDDescription;
								class XSElementDecl;
								class XSGrammarBucket;
								class XSNotationDecl;
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
							namespace xs {
								namespace identity {
									class Field;
									class IdentityConstraint;
									class XPathMatcher;
								}
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
							namespace xs {
								namespace models {
									class CMBuilder;
									class CMNodeFactory;
									class XSCMValidator;
								}
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
							class AugmentationsImpl;
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
								class XMLEntityResolver;
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
							class StringList;
							class XSTypeDefinition;
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
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace javax {
	namespace xml {
		namespace namespace$ {
			class QName;
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
							namespace xs {

class XMLSchemaValidator : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent, public ::com::sun::org::apache::xerces::internal::impl::xs::identity::FieldActivator, public ::com::sun::org::apache::xerces::internal::impl::RevalidationHandler, public ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDeclHelper {
	$class(XMLSchemaValidator, 0, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent, ::com::sun::org::apache::xerces::internal::impl::xs::identity::FieldActivator, ::com::sun::org::apache::xerces::internal::impl::RevalidationHandler, ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDeclHelper)
public:
	XMLSchemaValidator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher* activateField(::com::sun::org::apache::xerces::internal::impl::xs::identity::Field* field, int32_t initialDepth) override;
	void activateSelectorFor(::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* ic);
	virtual void addDefaultAttributes(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* attrGrp);
	virtual bool characterData($String* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void characters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void checkElementMatchesRootElementDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* rootElementDecl, ::com::sun::org::apache::xerces::internal::xni::QName* element);
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void doctypeDecl($String* rootElement, $String* publicId, $String* systemId, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void elementDefault($String* data);
	virtual $Object* elementLocallyValidComplexType(::com::sun::org::apache::xerces::internal::xni::QName* element, Object$* textContent);
	virtual $Object* elementLocallyValidType(::com::sun::org::apache::xerces::internal::xni::QName* element, Object$* textContent);
	virtual void emptyElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDocument(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	::com::sun::org::apache::xerces::internal::xni::Augmentations* endElementPSVI(bool root, $Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>* grammars, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs);
	virtual void endGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endValueScopeFor(::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* identityConstraint, int32_t initialDepth) override;
	virtual void ensureStackCapacity();
	$String* expectedStr(::java::util::List* expected);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* findSchemaGrammar(int16_t contextType, $String* namespace$, ::com::sun::org::apache::xerces::internal::xni::QName* enclosingElement, ::com::sun::org::apache::xerces::internal::xni::QName* triggeringComponent, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getAndCheckXsiType(::com::sun::org::apache::xerces::internal::xni::QName* element, $String* xsiType, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* getDocumentHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* getDocumentSource() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::Augmentations* getEmptyAugs(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs);
	virtual ::java::lang::Boolean* getFeatureDefault($String* featureId) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* getGlobalElementDecl(::com::sun::org::apache::xerces::internal::xni::QName* element) override;
	virtual $Object* getPropertyDefault($String* propertyId) override;
	virtual $StringArray* getRecognizedFeatures() override;
	virtual $StringArray* getRecognizedProperties() override;
	virtual bool getXsiNil(::com::sun::org::apache::xerces::internal::xni::QName* element, $String* xsiNil);
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLString* handleCharacters(::com::sun::org::apache::xerces::internal::xni::XMLString* text);
	virtual void handleEndDocument();
	virtual ::com::sun::org::apache::xerces::internal::xni::Augmentations* handleEndElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs);
	virtual void handleIgnorableWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* text);
	virtual void handleStartDocument(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, $String* encoding);
	virtual ::com::sun::org::apache::xerces::internal::xni::Augmentations* handleStartElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs);
	bool hasSchemaComponent(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar, int16_t contextType, ::com::sun::org::apache::xerces::internal::xni::QName* triggeringComponent);
	virtual void ignorableWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void normalizeWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* value, bool collapse);
	void normalizeWhitespace($String* value, bool collapse);
	virtual void processAttributes(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* attrGrp);
	virtual void processElementContent(::com::sun::org::apache::xerces::internal::xni::QName* element);
	virtual void processOneAttribute(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, int32_t index, ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* currDecl, ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl* currUse, ::com::sun::org::apache::xerces::internal::impl::xs::AttributePSVImpl* attrPSVI);
	virtual void processRootElementDeclQName(::javax::xml::namespace$::QName* rootElementDeclQName, ::com::sun::org::apache::xerces::internal::xni::QName* element);
	virtual void processRootTypeQName(::javax::xml::namespace$::QName* rootTypeQName);
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void reportSchemaError($String* key, $ObjectArray* arguments);
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager) override;
	virtual void setDocumentHandler(::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* documentHandler) override;
	virtual void setDocumentSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* source) override;
	virtual void setFeature($String* featureId, bool state) override;
	void setLocationHints(::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* desc, $StringArray* locations, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	void setLocationHints(::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* desc, $StringArray* locations, ::com::sun::org::apache::xerces::internal::xs::StringList* docLocations);
	virtual void setProperty($String* propertyId, Object$* value) override;
	virtual void startCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startDocument(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* namespaceContext, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startValueScopeFor(::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* identityConstraint, int32_t initialDepth) override;
	virtual void storeLocations($String* sLocation, $String* nsLocation);
	virtual void textDecl($String* version, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual $String* toString() override;
	virtual void xmlDecl($String* version, $String* encoding, $String* standalone, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	static const bool DEBUG = false;
	static $String* VALIDATION;
	static $String* SCHEMA_VALIDATION;
	static $String* SCHEMA_FULL_CHECKING;
	static $String* DYNAMIC_VALIDATION;
	static $String* NORMALIZE_DATA;
	static $String* SCHEMA_ELEMENT_DEFAULT;
	static $String* SCHEMA_AUGMENT_PSVI;
	static $String* ALLOW_JAVA_ENCODINGS;
	static $String* STANDARD_URI_CONFORMANT_FEATURE;
	static $String* GENERATE_SYNTHETIC_ANNOTATIONS;
	static $String* VALIDATE_ANNOTATIONS;
	static $String* HONOUR_ALL_SCHEMALOCATIONS;
	static $String* USE_GRAMMAR_POOL_ONLY;
	static $String* CONTINUE_AFTER_FATAL_ERROR;
	static $String* PARSER_SETTINGS;
	static $String* NAMESPACE_GROWTH;
	static $String* TOLERATE_DUPLICATES;
	static $String* IGNORE_XSI_TYPE;
	static $String* ID_IDREF_CHECKING;
	static $String* UNPARSED_ENTITY_CHECKING;
	static $String* IDENTITY_CONSTRAINT_CHECKING;
	static $String* REPORT_WHITESPACE;
	static $String* SYMBOL_TABLE;
	static $String* ERROR_REPORTER;
	static $String* ENTITY_RESOLVER;
	static $String* XMLGRAMMAR_POOL;
	static $String* VALIDATION_MANAGER;
	static $String* ENTITY_MANAGER;
	static $String* SCHEMA_LOCATION;
	static $String* SCHEMA_NONS_LOCATION;
	static $String* JAXP_SCHEMA_SOURCE;
	static $String* JAXP_SCHEMA_LANGUAGE;
	static $String* ROOT_TYPE_DEF;
	static $String* ROOT_ELEMENT_DECL;
	static $String* SCHEMA_DV_FACTORY;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	static $String* OVERRIDE_PARSER;
	static $String* USE_CATALOG;
	static $StringArray* RECOGNIZED_FEATURES;
	static $Array<::java::lang::Boolean>* FEATURE_DEFAULTS;
	static $StringArray* RECOGNIZED_PROPERTIES;
	static $ObjectArray* PROPERTY_DEFAULTS;
	static const int32_t ID_CONSTRAINT_NUM = 1;
	static ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* XSI_TYPE;
	static ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* XSI_NIL;
	static ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* XSI_SCHEMALOCATION;
	static ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* XSI_NONAMESPACESCHEMALOCATION;
	::com::sun::org::apache::xerces::internal::impl::xs::ElementPSVImpl* fCurrentPSVI = nullptr;
	::com::sun::org::apache::xerces::internal::util::AugmentationsImpl* fAugmentations = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fDefaultValue = nullptr;
	bool fDynamicValidation = false;
	bool fSchemaDynamicValidation = false;
	bool fDoValidation = false;
	bool fFullChecking = false;
	bool fNormalizeData = false;
	bool fSchemaElementDefault = false;
	bool fAugPSVI = false;
	bool fIdConstraint = false;
	bool fUseGrammarPoolOnly = false;
	bool fNamespaceGrowth = false;
	$String* fSchemaType = nullptr;
	bool fEntityRef = false;
	bool fInCDATA = false;
	bool fSawOnlyWhitespaceInElementContent = false;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLLocator* fLocator = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$XSIErrorReporter* fXSIErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* fEntityResolver = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* fValidationManager = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ConfigurableValidationState* fValidationState = nullptr;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* fGrammarPool = nullptr;
	$String* fExternalSchemas = nullptr;
	$String* fExternalNoNamespaceSchema = nullptr;
	$Object* fJaxpSchemaSource = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* fXSDDescription = nullptr;
	::java::util::Map* fLocationPairs = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* fDocumentHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* fDocumentSource = nullptr;
	bool reportWhitespace = false;
	static const int32_t INITIAL_STACK_SIZE = 8;
	static const int32_t INC_STACK_SIZE = 8;
	static const bool DEBUG_NORMALIZATION = false;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fEmptyXMLStr = nullptr;
	static const int32_t BUFFER_SIZE = 20;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fNormalizedStr = nullptr;
	bool fFirstChunk = false;
	bool fTrailing = false;
	int16_t fWhiteSpace = 0;
	bool fUnionType = false;
	::com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket* fGrammarBucket = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* fSubGroupHandler = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* fQNameDV = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::models::CMNodeFactory* nodeFactory = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::models::CMBuilder* fCMBuilder = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaLoader* fSchemaLoader = nullptr;
	$String* fValidationRoot = nullptr;
	int32_t fSkipValidationDepth = 0;
	int32_t fNFullValidationDepth = 0;
	int32_t fNNoneValidationDepth = 0;
	int32_t fElementDepth = 0;
	bool fSubElement = false;
	$booleans* fSubElementStack = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* fCurrentElemDecl = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>* fElemDeclStack = nullptr;
	bool fNil = false;
	$booleans* fNilStack = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl* fNotation = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl>* fNotationStack = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* fCurrentType = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition>* fTypeStack = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator* fCurrentCM = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator>* fCMStack = nullptr;
	$ints* fCurrCMState = nullptr;
	$Array<int32_t, 2>* fCMStateStack = nullptr;
	bool fStrictAssess = false;
	$booleans* fStrictAssessStack = nullptr;
	::java::lang::StringBuilder* fBuffer = nullptr;
	bool fAppendBuffer = false;
	bool fSawText = false;
	$booleans* fSawTextStack = nullptr;
	bool fSawCharacters = false;
	$booleans* fStringContent = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fTempQName = nullptr;
	::javax::xml::namespace$::QName* fRootTypeQName = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* fRootTypeDefinition = nullptr;
	::javax::xml::namespace$::QName* fRootElementDeclQName = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* fRootElementDeclaration = nullptr;
	int32_t fIgnoreXSITypeDepth = 0;
	bool fIDCChecking = false;
	::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* fValidatedInfo = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationState* fState4XsiType = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationState* fState4ApplyDefault = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$XPathMatcherStack* fMatcherStack = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ValueStoreCache* fValueStoreCache = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ALLOW_JAVA_ENCODINGS")
#pragma pop_macro("BUFFER_SIZE")
#pragma pop_macro("CONTINUE_AFTER_FATAL_ERROR")
#pragma pop_macro("DEBUG")
#pragma pop_macro("DEBUG_NORMALIZATION")
#pragma pop_macro("DYNAMIC_VALIDATION")
#pragma pop_macro("ENTITY_MANAGER")
#pragma pop_macro("ENTITY_RESOLVER")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("FEATURE_DEFAULTS")
#pragma pop_macro("GENERATE_SYNTHETIC_ANNOTATIONS")
#pragma pop_macro("HONOUR_ALL_SCHEMALOCATIONS")
#pragma pop_macro("IDENTITY_CONSTRAINT_CHECKING")
#pragma pop_macro("ID_CONSTRAINT_NUM")
#pragma pop_macro("ID_IDREF_CHECKING")
#pragma pop_macro("IGNORE_XSI_TYPE")
#pragma pop_macro("INC_STACK_SIZE")
#pragma pop_macro("INITIAL_STACK_SIZE")
#pragma pop_macro("JAXP_SCHEMA_LANGUAGE")
#pragma pop_macro("JAXP_SCHEMA_SOURCE")
#pragma pop_macro("NAMESPACE_GROWTH")
#pragma pop_macro("NORMALIZE_DATA")
#pragma pop_macro("OVERRIDE_PARSER")
#pragma pop_macro("PARSER_SETTINGS")
#pragma pop_macro("PROPERTY_DEFAULTS")
#pragma pop_macro("RECOGNIZED_FEATURES")
#pragma pop_macro("RECOGNIZED_PROPERTIES")
#pragma pop_macro("REPORT_WHITESPACE")
#pragma pop_macro("ROOT_ELEMENT_DECL")
#pragma pop_macro("ROOT_TYPE_DEF")
#pragma pop_macro("SCHEMA_AUGMENT_PSVI")
#pragma pop_macro("SCHEMA_DV_FACTORY")
#pragma pop_macro("SCHEMA_ELEMENT_DEFAULT")
#pragma pop_macro("SCHEMA_FULL_CHECKING")
#pragma pop_macro("SCHEMA_LOCATION")
#pragma pop_macro("SCHEMA_NONS_LOCATION")
#pragma pop_macro("SCHEMA_VALIDATION")
#pragma pop_macro("STANDARD_URI_CONFORMANT_FEATURE")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("TOLERATE_DUPLICATES")
#pragma pop_macro("UNPARSED_ENTITY_CHECKING")
#pragma pop_macro("USE_CATALOG")
#pragma pop_macro("USE_GRAMMAR_POOL_ONLY")
#pragma pop_macro("VALIDATE_ANNOTATIONS")
#pragma pop_macro("VALIDATION")
#pragma pop_macro("VALIDATION_MANAGER")
#pragma pop_macro("XMLGRAMMAR_POOL")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")
#pragma pop_macro("XSI_NIL")
#pragma pop_macro("XSI_NONAMESPACESCHEMALOCATION")
#pragma pop_macro("XSI_SCHEMALOCATION")
#pragma pop_macro("XSI_TYPE")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator_h_