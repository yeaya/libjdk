#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_XMLDTDProcessor_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_XMLDTDProcessor_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDProcessor
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLComponent
//$ implements com.sun.org.apache.xerces.internal.xni.parser.XMLDTDFilter,com.sun.org.apache.xerces.internal.xni.parser.XMLDTDContentModelFilter

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDFilter.h>
#include <java/lang/Array.h>

#pragma push_macro("DTD_VALIDATOR")
#undef DTD_VALIDATOR
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("FEATURE_DEFAULTS")
#undef FEATURE_DEFAULTS
#pragma push_macro("GRAMMAR_POOL")
#undef GRAMMAR_POOL
#pragma push_macro("NOTIFY_CHAR_REFS")
#undef NOTIFY_CHAR_REFS
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
#pragma push_macro("TOP_LEVEL_SCOPE")
#undef TOP_LEVEL_SCOPE
#pragma push_macro("VALIDATION")
#undef VALIDATION
#pragma push_macro("WARN_ON_DUPLICATE_ATTDEF")
#undef WARN_ON_DUPLICATE_ATTDEF
#pragma push_macro("WARN_ON_UNDECLARED_ELEMDEF")
#undef WARN_ON_UNDECLARED_ELEMDEF

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
								class XMLContentSpec;
								class XMLDTDValidator;
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
							class XMLDTDContentModelHandler;
							class XMLDTDHandler;
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
								class XMLDTDContentModelSource;
								class XMLDTDSource;
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
	}
}
namespace java {
	namespace util {
		class List;
		class Locale;
		class Map;
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

class XMLDTDProcessor : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDFilter, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelFilter {
	$class(XMLDTDProcessor, 0, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDFilter, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelFilter)
public:
	XMLDTDProcessor();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void any(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, ::com::sun::org::apache::xerces::internal::xni::XMLString* defaultValue, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedDefaultValue, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void checkDeclaredElements(::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar* grammar);
	void checkDeclaredElements(::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar* grammar, int32_t elementIndex, int32_t contentSpecIndex, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec* contentSpec);
	static void checkStandaloneEntityRef($String* name, ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar* grammar, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLEntityDecl* tempEntityDecl, ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* errorReporter);
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void element($String* elementName, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void elementDecl($String* name, $String* contentModel, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void empty(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endAttlist(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endConditional(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endContentModel(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDTD(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endExternalSubset(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endGroup(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endParameterEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void externalEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* getDTDContentModelHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource* getDTDContentModelSource() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* getDTDHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource* getDTDSource() override;
	virtual ::java::lang::Boolean* getFeatureDefault($String* featureId) override;
	virtual $Object* getPropertyDefault($String* propertyId) override;
	virtual $StringArray* getRecognizedFeatures() override;
	virtual $StringArray* getRecognizedProperties() override;
	virtual void ignoredCharacters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void internalEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedText, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual bool isValidName($String* name);
	virtual bool isValidNmtoken($String* nmtoken);
	bool normalizeDefaultAttrValue(::com::sun::org::apache::xerces::internal::xni::XMLString* value);
	virtual void notationDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void occurrence(int16_t occurrence, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void pcdata(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager) override;
	virtual void reset();
	virtual void separator(int16_t separator, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void setDTDContentModelHandler(::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* dtdContentModelHandler) override;
	virtual void setDTDContentModelSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource* source) override;
	virtual void setDTDHandler(::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* dtdHandler) override;
	virtual void setDTDSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource* source) override;
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setProperty($String* propertyId, Object$* value) override;
	virtual void startAttlist($String* elementName, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startConditional(int16_t type, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startContentModel($String* elementName, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startDTD(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startExternalSubset(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startGroup(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startParameterEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void textDecl($String* version, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual $String* toString() override;
	virtual void unparsedEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* notation, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	static const int32_t TOP_LEVEL_SCOPE = (-1);
	static $String* VALIDATION;
	static $String* NOTIFY_CHAR_REFS;
	static $String* WARN_ON_DUPLICATE_ATTDEF;
	static $String* WARN_ON_UNDECLARED_ELEMDEF;
	static $String* PARSER_SETTINGS;
	static $String* SYMBOL_TABLE;
	static $String* ERROR_REPORTER;
	static $String* GRAMMAR_POOL;
	static $String* DTD_VALIDATOR;
	static $StringArray* RECOGNIZED_FEATURES;
	static $Array<::java::lang::Boolean>* FEATURE_DEFAULTS;
	static $StringArray* RECOGNIZED_PROPERTIES;
	static $ObjectArray* PROPERTY_DEFAULTS;
	bool fValidation = false;
	bool fDTDValidation = false;
	bool fWarnDuplicateAttdef = false;
	bool fWarnOnUndeclaredElemdef = false;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammarBucket* fGrammarBucket = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator* fValidator = nullptr;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* fGrammarPool = nullptr;
	::java::util::Locale* fLocale = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* fDTDHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource* fDTDSource = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* fDTDContentModelHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource* fDTDContentModelSource = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar* fDTDGrammar = nullptr;
	bool fPerformValidation = false;
	bool fInDTDIgnore = false;
	bool fMixed = false;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLEntityDecl* fEntityDecl = nullptr;
	::java::util::Map* fNDataDeclNotations = nullptr;
	$String* fDTDElementDeclName = nullptr;
	::java::util::List* fMixedElementTypes = nullptr;
	::java::util::List* fDTDElementDecls = nullptr;
	::java::util::Map* fTableOfIDAttributeNames = nullptr;
	::java::util::Map* fTableOfNOTATIONAttributeNames = nullptr;
	::java::util::Map* fNotationEnumVals = nullptr;
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DTD_VALIDATOR")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("FEATURE_DEFAULTS")
#pragma pop_macro("GRAMMAR_POOL")
#pragma pop_macro("NOTIFY_CHAR_REFS")
#pragma pop_macro("PARSER_SETTINGS")
#pragma pop_macro("PROPERTY_DEFAULTS")
#pragma pop_macro("RECOGNIZED_FEATURES")
#pragma pop_macro("RECOGNIZED_PROPERTIES")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("TOP_LEVEL_SCOPE")
#pragma pop_macro("VALIDATION")
#pragma pop_macro("WARN_ON_DUPLICATE_ATTDEF")
#pragma pop_macro("WARN_ON_UNDECLARED_ELEMDEF")

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_XMLDTDProcessor_h_