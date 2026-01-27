#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaLoader_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaLoader_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaLoader
//$ extends com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarLoader
//$ implements com.sun.org.apache.xerces.internal.xni.parser.XMLComponent,com.sun.org.apache.xerces.internal.impl.xs.XSElementDeclHelper,com.sun.org.apache.xerces.internal.xs.XSLoader,org.w3c.dom.DOMConfiguration

#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDeclHelper.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarLoader.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xs/XSLoader.h>
#include <java/lang/Array.h>
#include <org/w3c/dom/DOMConfiguration.h>

#pragma push_macro("ACCESS_EXTERNAL_DTD")
#undef ACCESS_EXTERNAL_DTD
#pragma push_macro("ACCESS_EXTERNAL_SCHEMA")
#undef ACCESS_EXTERNAL_SCHEMA
#pragma push_macro("ALLOW_JAVA_ENCODINGS")
#undef ALLOW_JAVA_ENCODINGS
#pragma push_macro("AUGMENT_PSVI")
#undef AUGMENT_PSVI
#pragma push_macro("CONTINUE_AFTER_FATAL_ERROR")
#undef CONTINUE_AFTER_FATAL_ERROR
#pragma push_macro("DISALLOW_DOCTYPE")
#undef DISALLOW_DOCTYPE
#pragma push_macro("ENTITY_MANAGER")
#undef ENTITY_MANAGER
#pragma push_macro("ENTITY_RESOLVER")
#undef ENTITY_RESOLVER
#pragma push_macro("ERROR_HANDLER")
#undef ERROR_HANDLER
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("GENERATE_SYNTHETIC_ANNOTATIONS")
#undef GENERATE_SYNTHETIC_ANNOTATIONS
#pragma push_macro("HONOUR_ALL_SCHEMALOCATIONS")
#undef HONOUR_ALL_SCHEMALOCATIONS
#pragma push_macro("JAXP_SCHEMA_SOURCE")
#undef JAXP_SCHEMA_SOURCE
#pragma push_macro("LOCALE")
#undef LOCALE
#pragma push_macro("NAMESPACE_GROWTH")
#undef NAMESPACE_GROWTH
#pragma push_macro("OVERRIDE_PARSER")
#undef OVERRIDE_PARSER
#pragma push_macro("PARSER_SETTINGS")
#undef PARSER_SETTINGS
#pragma push_macro("RECOGNIZED_FEATURES")
#undef RECOGNIZED_FEATURES
#pragma push_macro("RECOGNIZED_PROPERTIES")
#undef RECOGNIZED_PROPERTIES
#pragma push_macro("SCHEMA_DV_FACTORY")
#undef SCHEMA_DV_FACTORY
#pragma push_macro("SCHEMA_FULL_CHECKING")
#undef SCHEMA_FULL_CHECKING
#pragma push_macro("SCHEMA_LOCATION")
#undef SCHEMA_LOCATION
#pragma push_macro("SCHEMA_NONS_LOCATION")
#undef SCHEMA_NONS_LOCATION
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER
#pragma push_macro("STANDARD_URI_CONFORMANT_FEATURE")
#undef STANDARD_URI_CONFORMANT_FEATURE
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("TOLERATE_DUPLICATES")
#undef TOLERATE_DUPLICATES
#pragma push_macro("VALIDATE_ANNOTATIONS")
#undef VALIDATE_ANNOTATIONS
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
						namespace impl {
							class XMLEntityManager;
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
							namespace xs {
								class SchemaGrammar;
								class SubstitutionGroupHandler;
								class XSDDescription;
								class XSDeclarationPool;
								class XSElementDecl;
								class XSGrammarBucket;
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
								namespace traversers {
									class XSDHandler;
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
							class DOMEntityResolverWrapper;
							class DOMErrorHandlerWrapper;
							class ParserConfigurationSettings;
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
							class QName;
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
								class Grammar;
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
								class XMLEntityResolver;
								class XMLErrorHandler;
								class XMLInputSource;
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
							class LSInputList;
							class StringList;
							class XSModel;
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
		class Locale;
		class Map;
		class WeakHashMap;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMStringList;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSInput;
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
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
						namespace impl {
							namespace xs {

class XMLSchemaLoader : public ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarLoader, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent, public ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDeclHelper, public ::com::sun::org::apache::xerces::internal::xs::XSLoader, public ::org::w3c::dom::DOMConfiguration {
	$class(XMLSchemaLoader, 0, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarLoader, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent, ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDeclHelper, ::com::sun::org::apache::xerces::internal::xs::XSLoader, ::org::w3c::dom::DOMConfiguration)
public:
	XMLSchemaLoader();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* errorReporter, ::com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket* grammarBucket, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* sHandler, ::com::sun::org::apache::xerces::internal::impl::xs::models::CMBuilder* builder);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* errorReporter, ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* entityResolver, ::com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket* grammarBucket, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* sHandler, ::com::sun::org::apache::xerces::internal::impl::xs::models::CMBuilder* builder);
	virtual bool canSetParameter($String* name, Object$* value) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* dom2xmlInputSource(::org::w3c::dom::ls::LSInput* is);
	virtual ::org::w3c::dom::DOMConfiguration* getConfig() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* getEntityResolver() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* getErrorHandler() override;
	virtual bool getFeature($String* featureId) override;
	virtual ::java::lang::Boolean* getFeatureDefault($String* featureId) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* getGlobalElementDecl(::com::sun::org::apache::xerces::internal::xni::QName* element) override;
	virtual ::java::util::Locale* getLocale() override;
	virtual $Object* getParameter($String* name) override;
	virtual ::org::w3c::dom::DOMStringList* getParameterNames() override;
	virtual $Object* getProperty($String* propertyId) override;
	virtual $Object* getPropertyDefault($String* propertyId) override;
	virtual $StringArray* getRecognizedFeatures() override;
	virtual $StringArray* getRecognizedProperties() override;
	void initGrammarBucket();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* load(::org::w3c::dom::ls::LSInput* is) override;
	virtual void loadGrammar($Array<::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource>* source);
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* loadGrammar(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* source) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* loadInputList(::com::sun::org::apache::xerces::internal::xs::LSInputList* is) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* loadSchema(::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* desc, ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* source, ::java::util::Map* locationPairs);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* loadURI($String* uri) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* loadURIList(::com::sun::org::apache::xerces::internal::xs::StringList* uriList) override;
	static void processExternalHints($String* sl, $String* nsl, ::java::util::Map* locations, ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* er);
	void processJAXPSchemaSource(::java::util::Map* locationPairs);
	virtual void reportDOMFatalError(::java::lang::Exception* e);
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager) override;
	static ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* resolveDocument(::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* desc, ::java::util::Map* locationPairs, ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* entityResolver);
	static ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* saxToXMLInputSource(::org::xml::sax::InputSource* sis);
	virtual void setEntityResolver(::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* entityResolver) override;
	virtual void setErrorHandler(::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* errorHandler) override;
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setLocale(::java::util::Locale* locale) override;
	virtual void setParameter($String* name, Object$* value) override;
	virtual void setProperty($String* propertyId, Object$* state) override;
	virtual $String* toString() override;
	static bool tokenizeSchemaLocationStr($String* schemaStr, ::java::util::Map* locations, $String* base);
	::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* xsdToXMLInputSource(Object$* val);
	static $String* SCHEMA_FULL_CHECKING;
	static $String* CONTINUE_AFTER_FATAL_ERROR;
	static $String* ALLOW_JAVA_ENCODINGS;
	static $String* STANDARD_URI_CONFORMANT_FEATURE;
	static $String* VALIDATE_ANNOTATIONS;
	static $String* DISALLOW_DOCTYPE;
	static $String* GENERATE_SYNTHETIC_ANNOTATIONS;
	static $String* HONOUR_ALL_SCHEMALOCATIONS;
	static $String* AUGMENT_PSVI;
	static $String* PARSER_SETTINGS;
	static $String* NAMESPACE_GROWTH;
	static $String* TOLERATE_DUPLICATES;
	static $String* SCHEMA_DV_FACTORY;
	static $String* OVERRIDE_PARSER;
	static $StringArray* RECOGNIZED_FEATURES;
	static $String* SYMBOL_TABLE;
	static $String* ERROR_REPORTER;
	static $String* ERROR_HANDLER;
	static $String* ENTITY_RESOLVER;
	static $String* XMLGRAMMAR_POOL;
	static $String* SCHEMA_LOCATION;
	static $String* SCHEMA_NONS_LOCATION;
	static $String* JAXP_SCHEMA_SOURCE;
	static $String* SECURITY_MANAGER;
	static $String* LOCALE;
	static $String* ENTITY_MANAGER;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	static $String* ACCESS_EXTERNAL_DTD;
	static $String* ACCESS_EXTERNAL_SCHEMA;
	static $StringArray* RECOGNIZED_PROPERTIES;
	::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings* fLoaderConfig = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* fEntityManager = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* fUserEntityResolver = nullptr;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* fGrammarPool = nullptr;
	$String* fExternalSchemas = nullptr;
	$String* fExternalNoNSSchema = nullptr;
	$Object* fJAXPSource = nullptr;
	bool fIsCheckedFully = false;
	bool fJAXPProcessed = false;
	bool fSettingsChanged = false;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler* fSchemaHandler = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket* fGrammarBucket = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool* fDeclPool = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* fSubGroupHandler = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::models::CMNodeFactory* fNodeFactory = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::models::CMBuilder* fCMBuilder = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* fXSDDescription = nullptr;
	$String* faccessExternalSchema = nullptr;
	::java::util::WeakHashMap* fJAXPCache = nullptr;
	::java::util::Locale* fLocale = nullptr;
	::org::w3c::dom::DOMStringList* fRecognizedParameters = nullptr;
	::com::sun::org::apache::xerces::internal::util::DOMErrorHandlerWrapper* fErrorHandler = nullptr;
	::com::sun::org::apache::xerces::internal::util::DOMEntityResolverWrapper* fResourceResolver = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ACCESS_EXTERNAL_DTD")
#pragma pop_macro("ACCESS_EXTERNAL_SCHEMA")
#pragma pop_macro("ALLOW_JAVA_ENCODINGS")
#pragma pop_macro("AUGMENT_PSVI")
#pragma pop_macro("CONTINUE_AFTER_FATAL_ERROR")
#pragma pop_macro("DISALLOW_DOCTYPE")
#pragma pop_macro("ENTITY_MANAGER")
#pragma pop_macro("ENTITY_RESOLVER")
#pragma pop_macro("ERROR_HANDLER")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("GENERATE_SYNTHETIC_ANNOTATIONS")
#pragma pop_macro("HONOUR_ALL_SCHEMALOCATIONS")
#pragma pop_macro("JAXP_SCHEMA_SOURCE")
#pragma pop_macro("LOCALE")
#pragma pop_macro("NAMESPACE_GROWTH")
#pragma pop_macro("OVERRIDE_PARSER")
#pragma pop_macro("PARSER_SETTINGS")
#pragma pop_macro("RECOGNIZED_FEATURES")
#pragma pop_macro("RECOGNIZED_PROPERTIES")
#pragma pop_macro("SCHEMA_DV_FACTORY")
#pragma pop_macro("SCHEMA_FULL_CHECKING")
#pragma pop_macro("SCHEMA_LOCATION")
#pragma pop_macro("SCHEMA_NONS_LOCATION")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("STANDARD_URI_CONFORMANT_FEATURE")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("TOLERATE_DUPLICATES")
#pragma pop_macro("VALIDATE_ANNOTATIONS")
#pragma pop_macro("XMLGRAMMAR_POOL")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaLoader_h_