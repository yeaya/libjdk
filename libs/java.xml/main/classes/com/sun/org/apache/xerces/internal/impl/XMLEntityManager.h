#ifndef _com_sun_org_apache_xerces_internal_impl_XMLEntityManager_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLEntityManager_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLEntityManager
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLComponent
//$ implements com.sun.org.apache.xerces.internal.xni.parser.XMLEntityResolver

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <java/lang/Array.h>

#pragma push_macro("ALLOW_JAVA_ENCODINGS")
#undef ALLOW_JAVA_ENCODINGS
#pragma push_macro("BUFFER_SIZE")
#undef BUFFER_SIZE
#pragma push_macro("DEBUG_BUFFER")
#undef DEBUG_BUFFER
#pragma push_macro("DEBUG_ENCODINGS")
#undef DEBUG_ENCODINGS
#pragma push_macro("DEBUG_ENTITIES")
#undef DEBUG_ENTITIES
#pragma push_macro("DEBUG_RESOLVER")
#undef DEBUG_RESOLVER
#pragma push_macro("DEFAULT_BUFFER_SIZE")
#undef DEFAULT_BUFFER_SIZE
#pragma push_macro("DEFAULT_INTERNAL_BUFFER_SIZE")
#undef DEFAULT_INTERNAL_BUFFER_SIZE
#pragma push_macro("DEFAULT_XMLDECL_BUFFER_SIZE")
#undef DEFAULT_XMLDECL_BUFFER_SIZE
#pragma push_macro("ENTITY_RESOLVER")
#undef ENTITY_RESOLVER
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("EXTERNAL_ACCESS_DEFAULT")
#undef EXTERNAL_ACCESS_DEFAULT
#pragma push_macro("EXTERNAL_GENERAL_ENTITIES")
#undef EXTERNAL_GENERAL_ENTITIES
#pragma push_macro("EXTERNAL_PARAMETER_ENTITIES")
#undef EXTERNAL_PARAMETER_ENTITIES
#pragma push_macro("FEATURE_DEFAULTS")
#undef FEATURE_DEFAULTS
#pragma push_macro("LOAD_EXTERNAL_DTD")
#undef LOAD_EXTERNAL_DTD
#pragma push_macro("PARSER_SETTINGS")
#undef PARSER_SETTINGS
#pragma push_macro("PROPERTY_DEFAULTS")
#undef PROPERTY_DEFAULTS
#pragma push_macro("RECOGNIZED_FEATURES")
#undef RECOGNIZED_FEATURES
#pragma push_macro("RECOGNIZED_PROPERTIES")
#undef RECOGNIZED_PROPERTIES
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER
#pragma push_macro("STANDARD_URI_CONFORMANT")
#undef STANDARD_URI_CONFORMANT
#pragma push_macro("STAX_ENTITY_RESOLVER")
#undef STAX_ENTITY_RESOLVER
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("VALIDATION")
#undef VALIDATION
#pragma push_macro("VALIDATION_MANAGER")
#undef VALIDATION_MANAGER
#pragma push_macro("WARN_ON_DUPLICATE_ENTITYDEF")
#undef WARN_ON_DUPLICATE_ENTITYDEF
#pragma push_macro("XML_SECURITY_PROPERTY_MANAGER")
#undef XML_SECURITY_PROPERTY_MANAGER

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class PropertyManager;
							class XMLEntityHandler;
							class XMLEntityManager$EncodingInfo;
							class XMLEntityScanner;
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
							namespace validation {
								class ValidationManager;
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
							class URI;
							class XMLResourceIdentifierImpl;
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
							class XMLLimitAnalyzer;
							class XMLSecurityManager;
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
							class XMLResourceIdentifier;
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
		namespace xml {
			namespace internal {
				namespace stream {
					class Entity$ScannedEntity;
					class StaxEntityResolverWrapper;
					class StaxXMLInputSource;
					class XMLEntityStorage;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
		class Reader;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class Map;
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
						namespace impl {

class XMLEntityManager : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver {
	$class(XMLEntityManager, 0, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent, ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver)
public:
	XMLEntityManager();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::impl::PropertyManager* propertyManager);
	static void absolutizeAgainstUserDir(::com::sun::org::apache::xerces::internal::util::URI* uri);
	virtual void addExternalEntity($String* name, $String* publicId, $String* literalSystemId, $String* baseSystemId);
	virtual void addInternalEntity($String* name, $String* text);
	virtual void addUnparsedEntity($String* name, $String* publicId, $String* systemId, $String* baseSystemId, $String* notation);
	virtual void closeReaders();
	static ::java::io::OutputStream* createOutputStream($String* uri);
	virtual ::java::io::Reader* createReader(::java::io::InputStream* inputStream, $String* encoding, ::java::lang::Boolean* isBigEndian);
	virtual void endEntity();
	virtual void endExternalSubset();
	static $String* expandSystemId($String* systemId);
	static $String* expandSystemId($String* systemId, $String* baseSystemId);
	static $String* expandSystemId($String* systemId, $String* baseSystemId, bool strict);
	static $String* expandSystemIdStrictOff($String* systemId, $String* baseSystemId);
	static $String* expandSystemIdStrictOff1($String* systemId, $String* baseSystemId);
	static $String* expandSystemIdStrictOn($String* systemId, $String* baseSystemId);
	static $String* fixURI($String* str);
	virtual int32_t getColumnNumber();
	virtual ::com::sun::xml::internal::stream::Entity$ScannedEntity* getCurrentEntity();
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* getCurrentResourceIdentifier();
	virtual ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager$EncodingInfo* getEncodingInfo($bytes* b4, int32_t count);
	virtual ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner* getEntityScanner();
	virtual ::com::sun::xml::internal::stream::XMLEntityStorage* getEntityStore();
	virtual $String* getExpandedSystemId();
	virtual ::java::lang::Boolean* getFeatureDefault($String* featureId) override;
	virtual int32_t getLineNumber();
	virtual $String* getLiteralSystemId();
	static $String* getPathWithoutEscapes($String* origPath);
	virtual $Object* getPropertyDefault($String* propertyId) override;
	virtual $String* getPublicId();
	virtual $StringArray* getRecognizedFeatures() override;
	virtual $StringArray* getRecognizedProperties() override;
	virtual ::com::sun::xml::internal::stream::Entity$ScannedEntity* getTopLevelEntity();
	static ::com::sun::org::apache::xerces::internal::util::URI* getUserDir();
	virtual bool isDeclaredEntity($String* entityName);
	virtual bool isEntityDeclInExternalSubset($String* entityName);
	virtual bool isExternalEntity($String* entityName);
	virtual bool isStandalone();
	virtual bool isUnparsedEntity($String* entityName);
	void print();
	virtual void reset(::com::sun::org::apache::xerces::internal::impl::PropertyManager* propertyManager);
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager) override;
	virtual void reset();
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* resolveEntity(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* resourceIdentifier) override;
	virtual ::com::sun::xml::internal::stream::StaxXMLInputSource* resolveEntityAsPerStax(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* resourceIdentifier);
	virtual void setEntityHandler(::com::sun::org::apache::xerces::internal::impl::XMLEntityHandler* entityHandler);
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setLimitAnalyzer(::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer* fLimitAnalyzer);
	virtual void setProperty($String* propertyId, Object$* value) override;
	virtual void setScannerVersion(int16_t version);
	virtual void setStandalone(bool standalone);
	virtual $String* setupCurrentEntity(bool reference, $String* name, ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* xmlInputSource, bool literal, bool isExternal);
	virtual void startDTDEntity(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* xmlInputSource);
	virtual void startDocumentEntity(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* xmlInputSource);
	virtual void startEntity(bool isGE, $String* entityName, bool literal);
	virtual void startEntity(bool isGE, $String* name, ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* xmlInputSource, bool literal, bool isExternal);
	virtual void startExternalSubset();
	virtual void test();
	virtual $String* toString() override;
	static const int32_t DEFAULT_BUFFER_SIZE = 8192;
	static const int32_t DEFAULT_XMLDECL_BUFFER_SIZE = 64;
	static const int32_t DEFAULT_INTERNAL_BUFFER_SIZE = 1024;
	static $String* VALIDATION;
	bool fStrictURI = false;
	static $String* EXTERNAL_GENERAL_ENTITIES;
	static $String* EXTERNAL_PARAMETER_ENTITIES;
	static $String* ALLOW_JAVA_ENCODINGS;
	static $String* WARN_ON_DUPLICATE_ENTITYDEF;
	static $String* LOAD_EXTERNAL_DTD;
	static $String* SYMBOL_TABLE;
	static $String* ERROR_REPORTER;
	static $String* STANDARD_URI_CONFORMANT;
	static $String* ENTITY_RESOLVER;
	static $String* STAX_ENTITY_RESOLVER;
	static $String* VALIDATION_MANAGER;
	static $String* BUFFER_SIZE;
	static $String* SECURITY_MANAGER;
	static $String* PARSER_SETTINGS;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	static $String* EXTERNAL_ACCESS_DEFAULT;
	static $StringArray* RECOGNIZED_FEATURES;
	static $Array<::java::lang::Boolean>* FEATURE_DEFAULTS;
	static $StringArray* RECOGNIZED_PROPERTIES;
	static $ObjectArray* PROPERTY_DEFAULTS;
	static $String* XMLEntity;
	static $String* DTDEntity;
	static const bool DEBUG_BUFFER = false;
	bool fWarnDuplicateEntityDef = false;
	static const bool DEBUG_ENTITIES = false;
	static const bool DEBUG_ENCODINGS = false;
	static const bool DEBUG_RESOLVER = false;
	bool fValidation = false;
	bool fExternalGeneralEntities = false;
	bool fExternalParameterEntities = false;
	bool fAllowJavaEncodings = false;
	bool fLoadExternalDTD = false;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* fEntityResolver = nullptr;
	::com::sun::xml::internal::stream::StaxEntityResolverWrapper* fStaxEntityResolver = nullptr;
	::com::sun::org::apache::xerces::internal::impl::PropertyManager* fPropertyManager = nullptr;
	bool fSupportDTD = false;
	bool fReplaceEntityReferences = false;
	bool fSupportExternalEntities = false;
	$String* fAccessExternalDTD = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* fValidationManager = nullptr;
	int32_t fBufferSize = 0;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* fSecurityManager = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer* fLimitAnalyzer = nullptr;
	int32_t entityExpansionIndex = 0;
	bool fStandalone = false;
	bool fInExternalSubset = false;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityHandler* fEntityHandler = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner* fEntityScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner* fXML10EntityScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner* fXML11EntityScanner = nullptr;
	int32_t fEntityExpansionCount = 0;
	::java::util::Map* fEntities = nullptr;
	::java::util::Stack* fEntityStack = nullptr;
	::com::sun::xml::internal::stream::Entity$ScannedEntity* fCurrentEntity = nullptr;
	bool fISCreatedByResolver = false;
	::com::sun::xml::internal::stream::XMLEntityStorage* fEntityStorage = nullptr;
	$ObjectArray* defaultEncoding = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl* fResourceIdentifier = nullptr;
	::com::sun::org::apache::xerces::internal::xni::Augmentations* fEntityAugs = nullptr;
	bool fUseCatalog = false;
	::javax::xml::catalog::CatalogFeatures* fCatalogFeatures = nullptr;
	::javax::xml::catalog::CatalogResolver* fCatalogResolver = nullptr;
	$String* fCatalogFile = nullptr;
	$String* fDefer = nullptr;
	$String* fPrefer = nullptr;
	$String* fResolve = nullptr;
	::java::util::Stack* fReaderStack = nullptr;
	static $String* gUserDir;
	static ::com::sun::org::apache::xerces::internal::util::URI* gUserDirURI;
	static $booleans* gNeedEscaping;
	static $chars* gAfterEscaping1;
	static $chars* gAfterEscaping2;
	static $chars* gHexChs;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ALLOW_JAVA_ENCODINGS")
#pragma pop_macro("BUFFER_SIZE")
#pragma pop_macro("DEBUG_BUFFER")
#pragma pop_macro("DEBUG_ENCODINGS")
#pragma pop_macro("DEBUG_ENTITIES")
#pragma pop_macro("DEBUG_RESOLVER")
#pragma pop_macro("DEFAULT_BUFFER_SIZE")
#pragma pop_macro("DEFAULT_INTERNAL_BUFFER_SIZE")
#pragma pop_macro("DEFAULT_XMLDECL_BUFFER_SIZE")
#pragma pop_macro("ENTITY_RESOLVER")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("EXTERNAL_ACCESS_DEFAULT")
#pragma pop_macro("EXTERNAL_GENERAL_ENTITIES")
#pragma pop_macro("EXTERNAL_PARAMETER_ENTITIES")
#pragma pop_macro("FEATURE_DEFAULTS")
#pragma pop_macro("LOAD_EXTERNAL_DTD")
#pragma pop_macro("PARSER_SETTINGS")
#pragma pop_macro("PROPERTY_DEFAULTS")
#pragma pop_macro("RECOGNIZED_FEATURES")
#pragma pop_macro("RECOGNIZED_PROPERTIES")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("STANDARD_URI_CONFORMANT")
#pragma pop_macro("STAX_ENTITY_RESOLVER")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("VALIDATION")
#pragma pop_macro("VALIDATION_MANAGER")
#pragma pop_macro("WARN_ON_DUPLICATE_ENTITYDEF")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")

#endif // _com_sun_org_apache_xerces_internal_impl_XMLEntityManager_h_