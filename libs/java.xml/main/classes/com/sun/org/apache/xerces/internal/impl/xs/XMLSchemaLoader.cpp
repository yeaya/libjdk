#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader.h>

#include <com/sun/org/apache/xerces/internal/dom/DOMErrorImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMStringListImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/SchemaDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/SchemaDVFactoryImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinSchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader$LocationArray.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSConstraints.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSDDescription.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDeclHelper.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/CMBuilder.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/CMNodeFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/util/DOMEntityResolverWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/DOMErrorHandlerWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/DefaultErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/util/Status.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/URI$MalformedURIException.h>
#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$Property.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarLoader.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XSGrammar.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/org/apache/xerces/internal/xs/LSInputList.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModel.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/net/URI.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/StringTokenizer.h>
#include <java/util/WeakHashMap.h>
#include <javax/xml/XMLConstants.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/DOMError.h>
#include <org/w3c/dom/DOMErrorHandler.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/DOMStringList.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <org/w3c/dom/ls/LSResourceResolver.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_ALL
#undef ACCESS_EXTERNAL_DTD
#undef ACCESS_EXTERNAL_SCHEMA
#undef ALLOW_JAVA_ENCODINGS
#undef ALLOW_JAVA_ENCODINGS_FEATURE
#undef AUGMENT_PSVI
#undef CATALOG_DEFER
#undef CATALOG_FILES
#undef CATALOG_PREFER
#undef CATALOG_RESOLVE
#undef CDATA_CHUNK_SIZE
#undef CONTEXT_IMPORT
#undef CONTEXT_PREPARSE
#undef CONTINUE_AFTER_FATAL_ERROR
#undef CONTINUE_AFTER_FATAL_ERROR_FEATURE
#undef DISALLOW_DOCTYPE
#undef DISALLOW_DOCTYPE_DECL_FEATURE
#undef DOM_DOMAIN
#undef DOM_ERROR_HANDLER
#undef DOM_RESOURCE_RESOLVER
#undef DOM_VALIDATE
#undef EMPTY_STRING
#undef ENTITY_MANAGER
#undef ENTITY_MANAGER_PROPERTY
#undef ENTITY_RESOLVER
#undef ENTITY_RESOLVER_PROPERTY
#undef ERROR_HANDLER
#undef ERROR_HANDLER_PROPERTY
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef EXTERNAL_ACCESS_DEFAULT
#undef FALSE
#undef GENERATE_SYNTHETIC_ANNOTATIONS
#undef GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE
#undef HONOUR_ALL_SCHEMALOCATIONS
#undef HONOUR_ALL_SCHEMALOCATIONS_FEATURE
#undef JAXP_PROPERTY_PREFIX
#undef JAXP_SCHEMA_SOURCE
#undef LOCALE
#undef LOCALE_PROPERTY
#undef NAMESPACE_GROWTH
#undef NAMESPACE_GROWTH_FEATURE
#undef NOT_SUPPORTED
#undef NOT_SUPPORTED_ERR
#undef OVERRIDE_PARSER
#undef PARSER_SETTINGS
#undef RECOGNIZED_FEATURES
#undef RECOGNIZED_PROPERTIES
#undef SCHEMA_AUGMENT_PSVI
#undef SCHEMA_DOMAIN
#undef SCHEMA_DV_FACTORY
#undef SCHEMA_DV_FACTORY_PROPERTY
#undef SCHEMA_FULL_CHECKING
#undef SCHEMA_LOCATION
#undef SCHEMA_NONS_LOCATION
#undef SCHEMA_SOURCE
#undef SECURITY_MANAGER
#undef SECURITY_MANAGER_PROPERTY
#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef SEVERITY_WARNING
#undef SG_XSI
#undef STANDARD_URI_CONFORMANT_FEATURE
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TOLERATE_DUPLICATES
#undef TOLERATE_DUPLICATES_FEATURE
#undef TRUE
#undef USE_CATALOG
#undef VALIDATE_ANNOTATIONS
#undef VALIDATE_ANNOTATIONS_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLGRAMMAR_POOL
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XML_SCHEMA
#undef XML_SECURITY_PROPERTY_MANAGER
#undef XSI_NONAMESPACESCHEMALOCATION
#undef XSI_SCHEMALOCATION

using $SchemaGrammarArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>;
using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $XMLInputSourceArray = $Array<::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource>;
using $DOMErrorImpl = ::com::sun::org::apache::xerces::internal::dom::DOMErrorImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $DOMStringListImpl = ::com::sun::org::apache::xerces::internal::dom::DOMStringListImpl;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $SchemaDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory;
using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $SchemaDVFactoryImpl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::SchemaDVFactoryImpl;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaGrammar$BuiltinSchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar$BuiltinSchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $SubstitutionGroupHandler = ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler;
using $XMLSchemaLoader$LocationArray = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaLoader$LocationArray;
using $XSAttributeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl;
using $XSConstraints = ::com::sun::org::apache::xerces::internal::impl::xs::XSConstraints;
using $XSDDescription = ::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription;
using $XSDeclarationPool = ::com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSElementDeclHelper = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDeclHelper;
using $XSGrammarBucket = ::com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket;
using $XSMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::xs::XSMessageFormatter;
using $XSModelImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelImpl;
using $CMBuilder = ::com::sun::org::apache::xerces::internal::impl::xs::models::CMBuilder;
using $CMNodeFactory = ::com::sun::org::apache::xerces::internal::impl::xs::models::CMNodeFactory;
using $XSDHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler;
using $DOMEntityResolverWrapper = ::com::sun::org::apache::xerces::internal::util::DOMEntityResolverWrapper;
using $DOMErrorHandlerWrapper = ::com::sun::org::apache::xerces::internal::util::DOMErrorHandlerWrapper;
using $DefaultErrorHandler = ::com::sun::org::apache::xerces::internal::util::DefaultErrorHandler;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $ParserConfigurationSettings = ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings;
using $Status = ::com::sun::org::apache::xerces::internal::util::Status;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $URI$MalformedURIException = ::com::sun::org::apache::xerces::internal::util::URI$MalformedURIException;
using $XMLResourceIdentifierImpl = ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $XMLSecurityPropertyManager$Property = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLGrammarLoader = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarLoader;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XSGrammar = ::com::sun::org::apache::xerces::internal::xni::grammars::XSGrammar;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $LSInputList = ::com::sun::org::apache::xerces::internal::xs::LSInputList;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSModel = ::com::sun::org::apache::xerces::internal::xs::XSModel;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $StringTokenizer = ::java::util::StringTokenizer;
using $WeakHashMap = ::java::util::WeakHashMap;
using $XMLConstants = ::javax::xml::XMLConstants;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $DOMConfiguration = ::org::w3c::dom::DOMConfiguration;
using $DOMError = ::org::w3c::dom::DOMError;
using $DOMErrorHandler = ::org::w3c::dom::DOMErrorHandler;
using $DOMException = ::org::w3c::dom::DOMException;
using $DOMStringList = ::org::w3c::dom::DOMStringList;
using $LSInput = ::org::w3c::dom::ls::LSInput;
using $LSResourceResolver = ::org::w3c::dom::ls::LSResourceResolver;
using $InputSource = ::org::xml::sax::InputSource;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XMLSchemaLoader_FieldInfo_[] = {
	{"SCHEMA_FULL_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, SCHEMA_FULL_CHECKING)},
	{"CONTINUE_AFTER_FATAL_ERROR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, CONTINUE_AFTER_FATAL_ERROR)},
	{"ALLOW_JAVA_ENCODINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, ALLOW_JAVA_ENCODINGS)},
	{"STANDARD_URI_CONFORMANT_FEATURE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, STANDARD_URI_CONFORMANT_FEATURE)},
	{"VALIDATE_ANNOTATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, VALIDATE_ANNOTATIONS)},
	{"DISALLOW_DOCTYPE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, DISALLOW_DOCTYPE)},
	{"GENERATE_SYNTHETIC_ANNOTATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, GENERATE_SYNTHETIC_ANNOTATIONS)},
	{"HONOUR_ALL_SCHEMALOCATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, HONOUR_ALL_SCHEMALOCATIONS)},
	{"AUGMENT_PSVI", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, AUGMENT_PSVI)},
	{"PARSER_SETTINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, PARSER_SETTINGS)},
	{"NAMESPACE_GROWTH", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, NAMESPACE_GROWTH)},
	{"TOLERATE_DUPLICATES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, TOLERATE_DUPLICATES)},
	{"SCHEMA_DV_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, SCHEMA_DV_FACTORY)},
	{"OVERRIDE_PARSER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, OVERRIDE_PARSER)},
	{"RECOGNIZED_FEATURES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaLoader, RECOGNIZED_FEATURES)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSchemaLoader, SYMBOL_TABLE)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSchemaLoader, ERROR_REPORTER)},
	{"ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSchemaLoader, ERROR_HANDLER)},
	{"ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSchemaLoader, ENTITY_RESOLVER)},
	{"XMLGRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSchemaLoader, XMLGRAMMAR_POOL)},
	{"SCHEMA_LOCATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, SCHEMA_LOCATION)},
	{"SCHEMA_NONS_LOCATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, SCHEMA_NONS_LOCATION)},
	{"JAXP_SCHEMA_SOURCE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, JAXP_SCHEMA_SOURCE)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, SECURITY_MANAGER)},
	{"LOCALE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, LOCALE)},
	{"ENTITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaLoader, ENTITY_MANAGER)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaLoader, XML_SECURITY_PROPERTY_MANAGER)},
	{"ACCESS_EXTERNAL_DTD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSchemaLoader, ACCESS_EXTERNAL_DTD)},
	{"ACCESS_EXTERNAL_SCHEMA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSchemaLoader, ACCESS_EXTERNAL_SCHEMA)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaLoader, RECOGNIZED_PROPERTIES)},
	{"fLoaderConfig", "Lcom/sun/org/apache/xerces/internal/util/ParserConfigurationSettings;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaLoader, fLoaderConfig)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fErrorReporter)},
	{"fEntityManager", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fEntityManager)},
	{"fUserEntityResolver", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fUserEntityResolver)},
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fGrammarPool)},
	{"fExternalSchemas", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fExternalSchemas)},
	{"fExternalNoNSSchema", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fExternalNoNSSchema)},
	{"fJAXPSource", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fJAXPSource)},
	{"fIsCheckedFully", "Z", nullptr, $PRIVATE, $field(XMLSchemaLoader, fIsCheckedFully)},
	{"fJAXPProcessed", "Z", nullptr, $PRIVATE, $field(XMLSchemaLoader, fJAXPProcessed)},
	{"fSettingsChanged", "Z", nullptr, $PRIVATE, $field(XMLSchemaLoader, fSettingsChanged)},
	{"fSchemaHandler", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fSchemaHandler)},
	{"fGrammarBucket", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fGrammarBucket)},
	{"fDeclPool", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fDeclPool)},
	{"fSubGroupHandler", "Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fSubGroupHandler)},
	{"fNodeFactory", "Lcom/sun/org/apache/xerces/internal/impl/xs/models/CMNodeFactory;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaLoader, fNodeFactory)},
	{"fCMBuilder", "Lcom/sun/org/apache/xerces/internal/impl/xs/models/CMBuilder;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fCMBuilder)},
	{"fXSDDescription", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fXSDDescription)},
	{"faccessExternalSchema", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLSchemaLoader, faccessExternalSchema)},
	{"fJAXPCache", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;>;", $PRIVATE, $field(XMLSchemaLoader, fJAXPCache)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fLocale)},
	{"fRecognizedParameters", "Lorg/w3c/dom/DOMStringList;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fRecognizedParameters)},
	{"fErrorHandler", "Lcom/sun/org/apache/xerces/internal/util/DOMErrorHandlerWrapper;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fErrorHandler)},
	{"fResourceResolver", "Lcom/sun/org/apache/xerces/internal/util/DOMEntityResolverWrapper;", nullptr, $PRIVATE, $field(XMLSchemaLoader, fResourceResolver)},
	{}
};

$MethodInfo _XMLSchemaLoader_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLSchemaLoader, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(XMLSchemaLoader, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;Lcom/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket;Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/models/CMBuilder;)V", nullptr, 0, $method(XMLSchemaLoader, init$, void, $XMLErrorReporter*, $XSGrammarBucket*, $SubstitutionGroupHandler*, $CMBuilder*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;Lcom/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket;Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/models/CMBuilder;)V", nullptr, 0, $method(XMLSchemaLoader, init$, void, $SymbolTable*, $XMLErrorReporter*, $XMLEntityManager*, $XSGrammarBucket*, $SubstitutionGroupHandler*, $CMBuilder*)},
	{"canSetParameter", "(Ljava/lang/String;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, canSetParameter, bool, $String*, Object$*)},
	{"dom2xmlInputSource", "(Lorg/w3c/dom/ls/LSInput;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, 0, $virtualMethod(XMLSchemaLoader, dom2xmlInputSource, $XMLInputSource*, $LSInput*)},
	{"getConfig", "()Lorg/w3c/dom/DOMConfiguration;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, getConfig, $DOMConfiguration*)},
	{"getEntityResolver", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, getEntityResolver, $XMLEntityResolver*)},
	{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, getErrorHandler, $XMLErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, getFeature, bool, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getFeatureDefault", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, getFeatureDefault, $Boolean*, $String*)},
	{"getGlobalElementDecl", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, getGlobalElementDecl, $XSElementDecl*, $QName*)},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, getLocale, $Locale*)},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, getParameter, $Object*, $String*), "org.w3c.dom.DOMException"},
	{"getParameterNames", "()Lorg/w3c/dom/DOMStringList;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, getParameterNames, $DOMStringList*)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, getProperty, $Object*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getPropertyDefault", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, getPropertyDefault, $Object*, $String*)},
	{"getRecognizedFeatures", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, getRecognizedFeatures, $StringArray*)},
	{"getRecognizedProperties", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, getRecognizedProperties, $StringArray*)},
	{"initGrammarBucket", "()V", nullptr, $PRIVATE, $method(XMLSchemaLoader, initGrammarBucket, void)},
	{"load", "(Lorg/w3c/dom/ls/LSInput;)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, load, $XSModel*, $LSInput*)},
	{"loadGrammar", "([Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, loadGrammar, void, $XMLInputSourceArray*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"loadGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, loadGrammar, $Grammar*, $XMLInputSource*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"loadInputList", "(Lcom/sun/org/apache/xerces/internal/xs/LSInputList;)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, loadInputList, $XSModel*, $LSInputList*)},
	{"loadSchema", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;Ljava/util/Map;)Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader$LocationArray;>;)Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", 0, $virtualMethod(XMLSchemaLoader, loadSchema, $SchemaGrammar*, $XSDDescription*, $XMLInputSource*, $Map*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"loadURI", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, loadURI, $XSModel*, $String*)},
	{"loadURIList", "(Lcom/sun/org/apache/xerces/internal/xs/StringList;)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, loadURIList, $XSModel*, $StringList*)},
	{"processExternalHints", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader$LocationArray;>;Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;)V", $PUBLIC | $STATIC, $staticMethod(XMLSchemaLoader, processExternalHints, void, $String*, $String*, $Map*, $XMLErrorReporter*)},
	{"processJAXPSchemaSource", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader$LocationArray;>;)V", $PRIVATE, $method(XMLSchemaLoader, processJAXPSchemaSource, void, $Map*), "java.io.IOException"},
	{"reportDOMFatalError", "(Ljava/lang/Exception;)V", nullptr, 0, $virtualMethod(XMLSchemaLoader, reportDOMFatalError, void, $Exception*)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"resolveDocument", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;Ljava/util/Map;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader$LocationArray;>;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", $PUBLIC | $STATIC, $staticMethod(XMLSchemaLoader, resolveDocument, $XMLInputSource*, $XSDDescription*, $Map*, $XMLEntityResolver*), "java.io.IOException"},
	{"saxToXMLInputSource", "(Lorg/xml/sax/InputSource;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PRIVATE | $STATIC, $staticMethod(XMLSchemaLoader, saxToXMLInputSource, $XMLInputSource*, $InputSource*)},
	{"setEntityResolver", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, setEntityResolver, void, $XMLEntityResolver*)},
	{"setErrorHandler", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, setErrorHandler, void, $XMLErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, setLocale, void, $Locale*)},
	{"setParameter", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, setParameter, void, $String*, Object$*), "org.w3c.dom.DOMException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tokenizeSchemaLocationStr", "(Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)Z", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader$LocationArray;>;Ljava/lang/String;)Z", $PUBLIC | $STATIC, $staticMethod(XMLSchemaLoader, tokenizeSchemaLocationStr, bool, $String*, $Map*, $String*)},
	{"xsdToXMLInputSource", "(Ljava/lang/Object;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PRIVATE, $method(XMLSchemaLoader, xsdToXMLInputSource, $XMLInputSource*, Object$*)},
	{}
};

$InnerClassInfo _XMLSchemaLoader_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaLoader$LocationArray", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaLoader", "LocationArray", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XMLSchemaLoader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaLoader",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarLoader,com.sun.org.apache.xerces.internal.xni.parser.XMLComponent,com.sun.org.apache.xerces.internal.impl.xs.XSElementDeclHelper,com.sun.org.apache.xerces.internal.xs.XSLoader,org.w3c.dom.DOMConfiguration",
	_XMLSchemaLoader_FieldInfo_,
	_XMLSchemaLoader_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSchemaLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaLoader$LocationArray"
};

$Object* allocate$XMLSchemaLoader($Class* clazz) {
	return $of($alloc(XMLSchemaLoader));
}

int32_t XMLSchemaLoader::hashCode() {
	 return this->$XMLGrammarLoader::hashCode();
}

bool XMLSchemaLoader::equals(Object$* arg0) {
	 return this->$XMLGrammarLoader::equals(arg0);
}

$Object* XMLSchemaLoader::clone() {
	 return this->$XMLGrammarLoader::clone();
}

$String* XMLSchemaLoader::toString() {
	 return this->$XMLGrammarLoader::toString();
}

void XMLSchemaLoader::finalize() {
	this->$XMLGrammarLoader::finalize();
}

$String* XMLSchemaLoader::SCHEMA_FULL_CHECKING = nullptr;
$String* XMLSchemaLoader::CONTINUE_AFTER_FATAL_ERROR = nullptr;
$String* XMLSchemaLoader::ALLOW_JAVA_ENCODINGS = nullptr;
$String* XMLSchemaLoader::STANDARD_URI_CONFORMANT_FEATURE = nullptr;
$String* XMLSchemaLoader::VALIDATE_ANNOTATIONS = nullptr;
$String* XMLSchemaLoader::DISALLOW_DOCTYPE = nullptr;
$String* XMLSchemaLoader::GENERATE_SYNTHETIC_ANNOTATIONS = nullptr;
$String* XMLSchemaLoader::HONOUR_ALL_SCHEMALOCATIONS = nullptr;
$String* XMLSchemaLoader::AUGMENT_PSVI = nullptr;
$String* XMLSchemaLoader::PARSER_SETTINGS = nullptr;
$String* XMLSchemaLoader::NAMESPACE_GROWTH = nullptr;
$String* XMLSchemaLoader::TOLERATE_DUPLICATES = nullptr;
$String* XMLSchemaLoader::SCHEMA_DV_FACTORY = nullptr;
$String* XMLSchemaLoader::OVERRIDE_PARSER = nullptr;
$StringArray* XMLSchemaLoader::RECOGNIZED_FEATURES = nullptr;
$String* XMLSchemaLoader::SYMBOL_TABLE = nullptr;
$String* XMLSchemaLoader::ERROR_REPORTER = nullptr;
$String* XMLSchemaLoader::ERROR_HANDLER = nullptr;
$String* XMLSchemaLoader::ENTITY_RESOLVER = nullptr;
$String* XMLSchemaLoader::XMLGRAMMAR_POOL = nullptr;
$String* XMLSchemaLoader::SCHEMA_LOCATION = nullptr;
$String* XMLSchemaLoader::SCHEMA_NONS_LOCATION = nullptr;
$String* XMLSchemaLoader::JAXP_SCHEMA_SOURCE = nullptr;
$String* XMLSchemaLoader::SECURITY_MANAGER = nullptr;
$String* XMLSchemaLoader::LOCALE = nullptr;
$String* XMLSchemaLoader::ENTITY_MANAGER = nullptr;
$String* XMLSchemaLoader::XML_SECURITY_PROPERTY_MANAGER = nullptr;
$String* XMLSchemaLoader::ACCESS_EXTERNAL_DTD = nullptr;
$String* XMLSchemaLoader::ACCESS_EXTERNAL_SCHEMA = nullptr;
$StringArray* XMLSchemaLoader::RECOGNIZED_PROPERTIES = nullptr;

void XMLSchemaLoader::init$() {
	$useLocalCurrentObjectStackCache();
	$var($SymbolTable, var$0, $new($SymbolTable));
	XMLSchemaLoader::init$(var$0, nullptr, $$new($XMLEntityManager), nullptr, nullptr, nullptr);
}

void XMLSchemaLoader::init$($SymbolTable* symbolTable) {
	XMLSchemaLoader::init$(symbolTable, nullptr, $$new($XMLEntityManager), nullptr, nullptr, nullptr);
}

void XMLSchemaLoader::init$($XMLErrorReporter* errorReporter, $XSGrammarBucket* grammarBucket, $SubstitutionGroupHandler* sHandler, $CMBuilder* builder) {
	XMLSchemaLoader::init$(nullptr, errorReporter, nullptr, grammarBucket, sHandler, builder);
}

void XMLSchemaLoader::init$($SymbolTable* symbolTable, $XMLErrorReporter* errorReporter$renamed, $XMLEntityManager* entityResolver, $XSGrammarBucket* grammarBucket$renamed, $SubstitutionGroupHandler* sHandler$renamed, $CMBuilder* builder$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($XMLErrorReporter, errorReporter, errorReporter$renamed);
	$var($CMBuilder, builder, builder$renamed);
	$var($XSGrammarBucket, grammarBucket, grammarBucket$renamed);
	$var($SubstitutionGroupHandler, sHandler, sHandler$renamed);
	$set(this, fLoaderConfig, $new($ParserConfigurationSettings));
	$set(this, fErrorReporter, $new($XMLErrorReporter));
	$set(this, fEntityManager, nullptr);
	$set(this, fUserEntityResolver, nullptr);
	$set(this, fGrammarPool, nullptr);
	$set(this, fExternalSchemas, nullptr);
	$set(this, fExternalNoNSSchema, nullptr);
	$set(this, fJAXPSource, nullptr);
	this->fIsCheckedFully = false;
	this->fJAXPProcessed = false;
	this->fSettingsChanged = true;
	$set(this, fDeclPool, nullptr);
	$set(this, fNodeFactory, $new($CMNodeFactory));
	$set(this, fXSDDescription, $new($XSDDescription));
	$init($JdkConstants);
	$set(this, faccessExternalSchema, $JdkConstants::EXTERNAL_ACCESS_DEFAULT);
	$set(this, fLocale, $Locale::getDefault());
	$set(this, fRecognizedParameters, nullptr);
	$set(this, fErrorHandler, nullptr);
	$set(this, fResourceResolver, nullptr);
	$nc(this->fLoaderConfig)->addRecognizedFeatures(XMLSchemaLoader::RECOGNIZED_FEATURES);
	$nc(this->fLoaderConfig)->addRecognizedProperties(XMLSchemaLoader::RECOGNIZED_PROPERTIES);
	if (symbolTable != nullptr) {
		$nc(this->fLoaderConfig)->setProperty(XMLSchemaLoader::SYMBOL_TABLE, symbolTable);
	}
	if (errorReporter == nullptr) {
		$assign(errorReporter, $new($XMLErrorReporter));
		errorReporter->setLocale(this->fLocale);
		errorReporter->setProperty(XMLSchemaLoader::ERROR_HANDLER, $$new($DefaultErrorHandler));
	}
	$set(this, fErrorReporter, errorReporter);
	$init($XSMessageFormatter);
	if ($nc(this->fErrorReporter)->getMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN) == nullptr) {
		$nc(this->fErrorReporter)->putMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN, $$new($XSMessageFormatter));
	}
	$nc(this->fLoaderConfig)->setProperty(XMLSchemaLoader::ERROR_REPORTER, this->fErrorReporter);
	$set(this, fEntityManager, entityResolver);
	if (this->fEntityManager != nullptr) {
		$nc(this->fLoaderConfig)->setProperty(XMLSchemaLoader::ENTITY_MANAGER, this->fEntityManager);
	}
	$nc(this->fLoaderConfig)->setFeature(XMLSchemaLoader::AUGMENT_PSVI, true);
	if (grammarBucket == nullptr) {
		$assign(grammarBucket, $new($XSGrammarBucket));
	}
	$set(this, fGrammarBucket, grammarBucket);
	if (sHandler == nullptr) {
		$assign(sHandler, $new($SubstitutionGroupHandler, this));
	}
	$set(this, fSubGroupHandler, sHandler);
	if (builder == nullptr) {
		$assign(builder, $new($CMBuilder, this->fNodeFactory));
	}
	$set(this, fCMBuilder, builder);
	$set(this, fSchemaHandler, $new($XSDHandler, this->fGrammarBucket));
	$set(this, fJAXPCache, $new($WeakHashMap));
	this->fSettingsChanged = true;
}

$StringArray* XMLSchemaLoader::getRecognizedFeatures() {
	return $cast($StringArray, $nc(XMLSchemaLoader::RECOGNIZED_FEATURES)->clone());
}

bool XMLSchemaLoader::getFeature($String* featureId) {
	return $nc(this->fLoaderConfig)->getFeature(featureId);
}

void XMLSchemaLoader::setFeature($String* featureId, bool state) {
	this->fSettingsChanged = true;
	if ($nc(featureId)->equals(XMLSchemaLoader::CONTINUE_AFTER_FATAL_ERROR)) {
		$nc(this->fErrorReporter)->setFeature(XMLSchemaLoader::CONTINUE_AFTER_FATAL_ERROR, state);
	} else if (featureId->equals(XMLSchemaLoader::GENERATE_SYNTHETIC_ANNOTATIONS)) {
		$nc(this->fSchemaHandler)->setGenerateSyntheticAnnotations(state);
	}
	$nc(this->fLoaderConfig)->setFeature(featureId, state);
}

$StringArray* XMLSchemaLoader::getRecognizedProperties() {
	return $cast($StringArray, $nc(XMLSchemaLoader::RECOGNIZED_PROPERTIES)->clone());
}

$Object* XMLSchemaLoader::getProperty($String* propertyId) {
	return $of($nc(this->fLoaderConfig)->getProperty(propertyId));
}

void XMLSchemaLoader::setProperty($String* propertyId, Object$* state) {
	$useLocalCurrentObjectStackCache();
	this->fSettingsChanged = true;
	$nc(this->fLoaderConfig)->setProperty(propertyId, state);
	if ($nc(propertyId)->equals(XMLSchemaLoader::JAXP_SCHEMA_SOURCE)) {
		$set(this, fJAXPSource, state);
		this->fJAXPProcessed = false;
	} else if (propertyId->equals(XMLSchemaLoader::XMLGRAMMAR_POOL)) {
		$set(this, fGrammarPool, $cast($XMLGrammarPool, state));
	} else if (propertyId->equals(XMLSchemaLoader::SCHEMA_LOCATION)) {
		$set(this, fExternalSchemas, $cast($String, state));
	} else if (propertyId->equals(XMLSchemaLoader::SCHEMA_NONS_LOCATION)) {
		$set(this, fExternalNoNSSchema, $cast($String, state));
	} else if (propertyId->equals(XMLSchemaLoader::LOCALE)) {
		setLocale($cast($Locale, state));
	} else if (propertyId->equals(XMLSchemaLoader::ENTITY_RESOLVER)) {
		$nc(this->fEntityManager)->setProperty(XMLSchemaLoader::ENTITY_RESOLVER, state);
	} else if (propertyId->equals(XMLSchemaLoader::ERROR_REPORTER)) {
		$set(this, fErrorReporter, $cast($XMLErrorReporter, state));
		$init($XSMessageFormatter);
		if ($nc(this->fErrorReporter)->getMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN) == nullptr) {
			$nc(this->fErrorReporter)->putMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN, $$new($XSMessageFormatter));
		}
	} else if (propertyId->equals(XMLSchemaLoader::XML_SECURITY_PROPERTY_MANAGER)) {
		$var($XMLSecurityPropertyManager, spm, $cast($XMLSecurityPropertyManager, state));
		$init($XMLSecurityPropertyManager$Property);
		$set(this, faccessExternalSchema, $nc(spm)->getValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_SCHEMA));
	}
}

void XMLSchemaLoader::setLocale($Locale* locale) {
	$set(this, fLocale, locale);
	$nc(this->fErrorReporter)->setLocale(locale);
}

$Locale* XMLSchemaLoader::getLocale() {
	return this->fLocale;
}

void XMLSchemaLoader::setErrorHandler($XMLErrorHandler* errorHandler) {
	$nc(this->fErrorReporter)->setProperty(XMLSchemaLoader::ERROR_HANDLER, errorHandler);
}

$XMLErrorHandler* XMLSchemaLoader::getErrorHandler() {
	return $nc(this->fErrorReporter)->getErrorHandler();
}

void XMLSchemaLoader::setEntityResolver($XMLEntityResolver* entityResolver) {
	$set(this, fUserEntityResolver, entityResolver);
	$nc(this->fLoaderConfig)->setProperty(XMLSchemaLoader::ENTITY_RESOLVER, entityResolver);
	$nc(this->fEntityManager)->setProperty(XMLSchemaLoader::ENTITY_RESOLVER, entityResolver);
}

$XMLEntityResolver* XMLSchemaLoader::getEntityResolver() {
	return this->fUserEntityResolver;
}

void XMLSchemaLoader::loadGrammar($XMLInputSourceArray* source) {
	int32_t numSource = $nc(source)->length;
	for (int32_t i = 0; i < numSource; ++i) {
		loadGrammar(source->get(i));
	}
}

$Grammar* XMLSchemaLoader::loadGrammar($XMLInputSource* source) {
	$useLocalCurrentObjectStackCache();
	reset(this->fLoaderConfig);
	this->fSettingsChanged = false;
	$var($XSDDescription, desc, $new($XSDDescription));
	desc->fContextType = $XSDDescription::CONTEXT_PREPARSE;
	desc->setBaseSystemId($($nc(source)->getBaseSystemId()));
	desc->setLiteralSystemId($($nc(source)->getSystemId()));
	$var($Map, locationPairs, $new($HashMap));
	processExternalHints(this->fExternalSchemas, this->fExternalNoNSSchema, locationPairs, this->fErrorReporter);
	$var($SchemaGrammar, grammar, loadSchema(desc, source, locationPairs));
	if (grammar != nullptr && this->fGrammarPool != nullptr) {
		$init($XMLGrammarDescription);
		$nc(this->fGrammarPool)->cacheGrammars($XMLGrammarDescription::XML_SCHEMA, $($fcast($GrammarArray, $nc(this->fGrammarBucket)->getGrammars())));
		if (this->fIsCheckedFully && !$equals($nc(this->fJAXPCache)->get(grammar), grammar)) {
			$XSConstraints::fullSchemaChecking(this->fGrammarBucket, this->fSubGroupHandler, this->fCMBuilder, this->fErrorReporter);
		}
	}
	return grammar;
}

$SchemaGrammar* XMLSchemaLoader::loadSchema($XSDDescription* desc, $XMLInputSource* source, $Map* locationPairs) {
	$useLocalCurrentObjectStackCache();
	if (!this->fJAXPProcessed) {
		processJAXPSchemaSource(locationPairs);
	}
	bool var$0 = $nc(desc)->isExternal();
	if (var$0 && !$nc(source)->isCreatedByResolver()) {
		$init($JdkConstants);
		$var($String, accessError, $SecuritySupport::checkAccess($(desc->getExpandedSystemId()), this->faccessExternalSchema, $JdkConstants::ACCESS_EXTERNAL_ALL));
		if (accessError != nullptr) {
			$init($XSMessageFormatter);
			$throwNew($XNIException, $($nc(this->fErrorReporter)->reportError($XSMessageFormatter::SCHEMA_DOMAIN, "schema_reference.access"_s, $$new($ObjectArray, {
				$($of($SecuritySupport::sanitizePath($(desc->getExpandedSystemId())))),
				$of(accessError)
			}), $XMLErrorReporter::SEVERITY_ERROR)));
		}
	}
	$var($SchemaGrammar, grammar, $nc(this->fSchemaHandler)->parseSchema(source, desc, locationPairs));
	return grammar;
}

$XMLInputSource* XMLSchemaLoader::resolveDocument($XSDDescription* desc, $Map* locationPairs, $XMLEntityResolver* entityResolver) {
	$init(XMLSchemaLoader);
	$useLocalCurrentObjectStackCache();
	$var($String, loc, nullptr);
	bool var$0 = $nc(desc)->getContextType() == $XSDDescription::CONTEXT_IMPORT;
	if (var$0 || $nc(desc)->fromInstance()) {
		$var($String, namespace$, desc->getTargetNamespace());
		$init($XMLSymbols);
		$var($String, ns, namespace$ == nullptr ? $XMLSymbols::EMPTY_STRING : namespace$);
		$var($XMLSchemaLoader$LocationArray, tempLA, $cast($XMLSchemaLoader$LocationArray, $nc(locationPairs)->get(ns)));
		if (tempLA != nullptr) {
			$assign(loc, tempLA->getFirstLocation());
		}
	}
	if (loc == nullptr) {
		$var($StringArray, hints, $nc(desc)->getLocationHints());
		if (hints != nullptr && hints->length > 0) {
			$assign(loc, hints->get(0));
		}
	}
	$var($String, expandedLoc, $XMLEntityManager::expandSystemId(loc, $($nc(desc)->getBaseSystemId()), false));
	$nc(desc)->setLiteralSystemId(loc);
	desc->setExpandedSystemId(expandedLoc);
	return $nc(entityResolver)->resolveEntity(static_cast<$XMLResourceIdentifier*>(static_cast<$XMLResourceIdentifierImpl*>(desc)));
}

void XMLSchemaLoader::processExternalHints($String* sl, $String* nsl, $Map* locations, $XMLErrorReporter* er) {
	$init(XMLSchemaLoader);
	$useLocalCurrentObjectStackCache();
	if (sl != nullptr) {
		try {
			$init($SchemaGrammar);
			$init($SchemaSymbols);
			$var($XSAttributeDecl, attrDecl, $nc($SchemaGrammar::SG_XSI)->getGlobalAttributeDecl($SchemaSymbols::XSI_SCHEMALOCATION));
			$nc($nc(attrDecl)->fType)->validate(sl, ($ValidationContext*)nullptr, ($ValidatedInfo*)nullptr);
			if (!tokenizeSchemaLocationStr(sl, locations, nullptr)) {
				$init($XSMessageFormatter);
				$nc(er)->reportError($XSMessageFormatter::SCHEMA_DOMAIN, "SchemaLocation"_s, $$new($ObjectArray, {$of(sl)}), $XMLErrorReporter::SEVERITY_WARNING);
			}
		} catch ($InvalidDatatypeValueException& ex) {
			$init($XSMessageFormatter);
			$var($String, var$0, $XSMessageFormatter::SCHEMA_DOMAIN);
			$var($String, var$1, ex->getKey());
			$nc(er)->reportError(var$0, var$1, $(ex->getArgs()), $XMLErrorReporter::SEVERITY_WARNING);
		}
	}
	if (nsl != nullptr) {
		try {
			$init($SchemaGrammar);
			$init($SchemaSymbols);
			$var($XSAttributeDecl, attrDecl, $nc($SchemaGrammar::SG_XSI)->getGlobalAttributeDecl($SchemaSymbols::XSI_NONAMESPACESCHEMALOCATION));
			$nc($nc(attrDecl)->fType)->validate(nsl, ($ValidationContext*)nullptr, ($ValidatedInfo*)nullptr);
			$init($XMLSymbols);
			$var($XMLSchemaLoader$LocationArray, la, $cast($XMLSchemaLoader$LocationArray, $nc(locations)->get($XMLSymbols::EMPTY_STRING)));
			if (la == nullptr) {
				$assign(la, $new($XMLSchemaLoader$LocationArray));
				locations->put($XMLSymbols::EMPTY_STRING, la);
			}
			$nc(la)->addLocation(nsl);
		} catch ($InvalidDatatypeValueException& ex) {
			$init($XSMessageFormatter);
			$var($String, var$2, $XSMessageFormatter::SCHEMA_DOMAIN);
			$var($String, var$3, ex->getKey());
			$nc(er)->reportError(var$2, var$3, $(ex->getArgs()), $XMLErrorReporter::SEVERITY_WARNING);
		}
	}
}

bool XMLSchemaLoader::tokenizeSchemaLocationStr($String* schemaStr, $Map* locations, $String* base) {
	$init(XMLSchemaLoader);
	$useLocalCurrentObjectStackCache();
	if (schemaStr != nullptr) {
		$var($StringTokenizer, t, $new($StringTokenizer, schemaStr, " \n\t\r"_s));
		$var($String, namespace$, nullptr);
		$var($String, location, nullptr);
		while (t->hasMoreTokens()) {
			$assign(namespace$, t->nextToken());
			if (!t->hasMoreTokens()) {
				return false;
			}
			$assign(location, t->nextToken());
			$var($XMLSchemaLoader$LocationArray, la, $cast($XMLSchemaLoader$LocationArray, $nc(locations)->get(namespace$)));
			if (la == nullptr) {
				$assign(la, $new($XMLSchemaLoader$LocationArray));
				locations->put(namespace$, la);
			}
			if (base != nullptr) {
				try {
					$assign(location, $XMLEntityManager::expandSystemId(location, base, false));
				} catch ($URI$MalformedURIException& e) {
				}
			}
			$nc(la)->addLocation(location);
		}
	}
	return true;
}

void XMLSchemaLoader::processJAXPSchemaSource($Map* locationPairs) {
	$useLocalCurrentObjectStackCache();
	this->fJAXPProcessed = true;
	if (this->fJAXPSource == nullptr) {
		return;
	}
	$Class* componentType = $nc($of(this->fJAXPSource))->getClass()->getComponentType();
	$var($XMLInputSource, xis, nullptr);
	$var($String, sid, nullptr);
	if (componentType == nullptr) {
		if ($instanceOf($InputStream, this->fJAXPSource) || $instanceOf($InputSource, this->fJAXPSource)) {
			$var($SchemaGrammar, g, $cast($SchemaGrammar, $nc(this->fJAXPCache)->get(this->fJAXPSource)));
			if (g != nullptr) {
				$nc(this->fGrammarBucket)->putGrammar(g);
				return;
			}
		}
		$nc(this->fXSDDescription)->reset();
		$assign(xis, xsdToXMLInputSource(this->fJAXPSource));
		$assign(sid, $nc(xis)->getSystemId());
		$nc(this->fXSDDescription)->fContextType = $XSDDescription::CONTEXT_PREPARSE;
		if (sid != nullptr) {
			$nc(this->fXSDDescription)->setBaseSystemId($(xis->getBaseSystemId()));
			$nc(this->fXSDDescription)->setLiteralSystemId(sid);
			$nc(this->fXSDDescription)->setExpandedSystemId(sid);
			$set($nc(this->fXSDDescription), fLocationHints, $new($StringArray, {sid}));
		}
		$var($SchemaGrammar, g, loadSchema(this->fXSDDescription, xis, locationPairs));
		if (g != nullptr) {
			if ($instanceOf($InputStream, this->fJAXPSource) || $instanceOf($InputSource, this->fJAXPSource)) {
				$nc(this->fJAXPCache)->put(this->fJAXPSource, g);
				if (this->fIsCheckedFully) {
					$XSConstraints::fullSchemaChecking(this->fGrammarBucket, this->fSubGroupHandler, this->fCMBuilder, this->fErrorReporter);
				}
			}
			$nc(this->fGrammarBucket)->putGrammar(g);
		}
		return;
	} else {
		$load($File);
		bool var$5 = (componentType != $Object::class$) && (componentType != $String::class$) && !$File::class$->isAssignableFrom(componentType);
		$load($InputStream);
		bool var$4 = var$5 && !$InputStream::class$->isAssignableFrom(componentType);
		$load($InputSource);
		bool var$3 = var$4 && !$InputSource::class$->isAssignableFrom(componentType);
		if (var$3 && !$nc(componentType)->isInterface()) {
			$init($XSMessageFormatter);
			$var($MessageFormatter, mf, $nc(this->fErrorReporter)->getMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN));
			$init($Status);
			$var($Locale, var$6, $nc(this->fErrorReporter)->getLocale());
			$var($String, var$7, "jaxp12-schema-source-type.2"_s);
			$throwNew($XMLConfigurationException, $Status::NOT_SUPPORTED, $($nc(mf)->formatMessage(var$6, var$7, $$new($ObjectArray, {$($of(componentType->getName()))}))));
		}
	}
	$var($ObjectArray, objArr, $cast($ObjectArray, this->fJAXPSource));
	$var($ArrayList, jaxpSchemaSourceNamespaces, $new($ArrayList));
	for (int32_t i = 0; i < $nc(objArr)->length; ++i) {
		if ($instanceOf($InputStream, objArr->get(i)) || $instanceOf($InputSource, objArr->get(i))) {
			$var($SchemaGrammar, g, $cast($SchemaGrammar, $nc(this->fJAXPCache)->get(objArr->get(i))));
			if (g != nullptr) {
				$nc(this->fGrammarBucket)->putGrammar(g);
				continue;
			}
		}
		$nc(this->fXSDDescription)->reset();
		$assign(xis, xsdToXMLInputSource(objArr->get(i)));
		$assign(sid, $nc(xis)->getSystemId());
		$nc(this->fXSDDescription)->fContextType = $XSDDescription::CONTEXT_PREPARSE;
		if (sid != nullptr) {
			$nc(this->fXSDDescription)->setBaseSystemId($(xis->getBaseSystemId()));
			$nc(this->fXSDDescription)->setLiteralSystemId(sid);
			$nc(this->fXSDDescription)->setExpandedSystemId(sid);
			$set($nc(this->fXSDDescription), fLocationHints, $new($StringArray, {sid}));
		}
		$var($String, targetNamespace, nullptr);
		$var($SchemaGrammar, grammar, $nc(this->fSchemaHandler)->parseSchema(xis, this->fXSDDescription, locationPairs));
		if (this->fIsCheckedFully) {
			$XSConstraints::fullSchemaChecking(this->fGrammarBucket, this->fSubGroupHandler, this->fCMBuilder, this->fErrorReporter);
		}
		if (grammar != nullptr) {
			$assign(targetNamespace, grammar->getTargetNamespace());
			if (jaxpSchemaSourceNamespaces->contains(targetNamespace)) {
				$init($XSMessageFormatter);
				$var($MessageFormatter, mf, $nc(this->fErrorReporter)->getMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN));
				$throwNew($IllegalArgumentException, $($nc(mf)->formatMessage($($nc(this->fErrorReporter)->getLocale()), "jaxp12-schema-source-ns"_s, nullptr)));
			} else {
				jaxpSchemaSourceNamespaces->add(targetNamespace);
			}
			if ($instanceOf($InputStream, objArr->get(i)) || $instanceOf($InputSource, objArr->get(i))) {
				$nc(this->fJAXPCache)->put(objArr->get(i), grammar);
			}
			$nc(this->fGrammarBucket)->putGrammar(grammar);
		} else {
		}
	}
}

$XMLInputSource* XMLSchemaLoader::xsdToXMLInputSource(Object$* val) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($String, val)) {
		$var($String, loc, $cast($String, val));
		$nc(this->fXSDDescription)->reset();
		$nc(this->fXSDDescription)->setValues(nullptr, loc, nullptr, nullptr);
		$var($XMLInputSource, xis, nullptr);
		try {
			$assign(xis, $nc(this->fEntityManager)->resolveEntity(static_cast<$XMLResourceIdentifier*>(static_cast<$XMLResourceIdentifierImpl*>(this->fXSDDescription))));
		} catch ($IOException& ex) {
			$init($XSMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XSMessageFormatter::SCHEMA_DOMAIN, "schema_reference.4"_s, $$new($ObjectArray, {$of(loc)}), $XMLErrorReporter::SEVERITY_ERROR);
		}
		if (xis == nullptr) {
			return $new($XMLInputSource, nullptr, loc, nullptr, false);
		}
		return xis;
	} else if ($instanceOf($InputSource, val)) {
		return saxToXMLInputSource($cast($InputSource, val));
	} else if ($instanceOf($InputStream, val)) {
		return $new($XMLInputSource, ($String*)nullptr, ($String*)nullptr, ($String*)nullptr, $cast($InputStream, val), ($String*)nullptr);
	} else if ($instanceOf($File, val)) {
		$var($File, file, $cast($File, val));
		$var($InputStream, is, nullptr);
		try {
			$assign(is, $new($BufferedInputStream, $$new($FileInputStream, file)));
		} catch ($FileNotFoundException& ex) {
			$init($XSMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XSMessageFormatter::SCHEMA_DOMAIN, "schema_reference.4"_s, $$new($ObjectArray, {$($of($nc(file)->toString()))}), $XMLErrorReporter::SEVERITY_ERROR);
		}
		return $new($XMLInputSource, ($String*)nullptr, $($nc($($nc(file)->toURI()))->toString()), ($String*)nullptr, is, ($String*)nullptr);
	}
	$init($XSMessageFormatter);
	$var($MessageFormatter, mf, $nc(this->fErrorReporter)->getMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN));
	$init($Status);
	$var($Locale, var$0, $nc(this->fErrorReporter)->getLocale());
	$var($String, var$1, "jaxp12-schema-source-type.1"_s);
	$throwNew($XMLConfigurationException, $Status::NOT_SUPPORTED, $($nc(mf)->formatMessage(var$0, var$1, $$new($ObjectArray, {val != nullptr ? $($of($nc($of(val))->getClass()->getName())) : $of("null"_s)}))));
}

$XMLInputSource* XMLSchemaLoader::saxToXMLInputSource($InputSource* sis) {
	$init(XMLSchemaLoader);
	$useLocalCurrentObjectStackCache();
	$var($String, publicId, $nc(sis)->getPublicId());
	$var($String, systemId, sis->getSystemId());
	$var($Reader, charStream, sis->getCharacterStream());
	if (charStream != nullptr) {
		return $new($XMLInputSource, publicId, systemId, ($String*)nullptr, charStream, ($String*)nullptr);
	}
	$var($InputStream, byteStream, sis->getByteStream());
	if (byteStream != nullptr) {
		return $new($XMLInputSource, publicId, systemId, ($String*)nullptr, byteStream, $(sis->getEncoding()));
	}
	return $new($XMLInputSource, publicId, systemId, nullptr, false);
}

$Boolean* XMLSchemaLoader::getFeatureDefault($String* featureId) {
	if ($nc(featureId)->equals(XMLSchemaLoader::AUGMENT_PSVI)) {
		$init($Boolean);
		return $Boolean::TRUE;
	}
	return nullptr;
}

$Object* XMLSchemaLoader::getPropertyDefault($String* propertyId) {
	return $of(nullptr);
}

void XMLSchemaLoader::reset($XMLComponentManager* componentManager) {
	$useLocalCurrentObjectStackCache();
	$var($XMLSecurityPropertyManager, spm, $cast($XMLSecurityPropertyManager, $nc(componentManager)->getProperty(XMLSchemaLoader::XML_SECURITY_PROPERTY_MANAGER)));
	if (spm == nullptr) {
		$assign(spm, $new($XMLSecurityPropertyManager));
		setProperty(XMLSchemaLoader::XML_SECURITY_PROPERTY_MANAGER, spm);
	}
	$var($XMLSecurityManager, sm, $cast($XMLSecurityManager, componentManager->getProperty(XMLSchemaLoader::SECURITY_MANAGER)));
	if (sm == nullptr) {
		setProperty(XMLSchemaLoader::SECURITY_MANAGER, $$new($XMLSecurityManager, true));
	}
	$init($XMLSecurityPropertyManager$Property);
	$set(this, faccessExternalSchema, $nc(spm)->getValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_SCHEMA));
	$nc(this->fGrammarBucket)->reset();
	$nc(this->fSubGroupHandler)->reset();
	bool parser_settings = true;
	if (!$equals(componentManager, this->fLoaderConfig)) {
		parser_settings = componentManager->getFeature(XMLSchemaLoader::PARSER_SETTINGS, true);
	}
	if (!parser_settings || !this->fSettingsChanged) {
		this->fJAXPProcessed = false;
		initGrammarBucket();
		if (this->fDeclPool != nullptr) {
			$nc(this->fDeclPool)->reset();
		}
		return;
	}
	$nc(this->fNodeFactory)->reset(componentManager);
	$set(this, fEntityManager, $cast($XMLEntityManager, componentManager->getProperty(XMLSchemaLoader::ENTITY_MANAGER)));
	$set(this, fErrorReporter, $cast($XMLErrorReporter, componentManager->getProperty(XMLSchemaLoader::ERROR_REPORTER)));
	$var($SchemaDVFactory, dvFactory, nullptr);
	$assign(dvFactory, $nc(this->fSchemaHandler)->getDVFactory());
	if (dvFactory == nullptr) {
		$assign(dvFactory, $SchemaDVFactory::getInstance());
		$nc(this->fSchemaHandler)->setDVFactory(dvFactory);
	}
	try {
		$set(this, fExternalSchemas, $cast($String, componentManager->getProperty(XMLSchemaLoader::SCHEMA_LOCATION)));
		$set(this, fExternalNoNSSchema, $cast($String, componentManager->getProperty(XMLSchemaLoader::SCHEMA_NONS_LOCATION)));
	} catch ($XMLConfigurationException& e) {
		$set(this, fExternalSchemas, nullptr);
		$set(this, fExternalNoNSSchema, nullptr);
	}
	$set(this, fJAXPSource, componentManager->getProperty(XMLSchemaLoader::JAXP_SCHEMA_SOURCE, nullptr));
	this->fJAXPProcessed = false;
	$set(this, fGrammarPool, $cast($XMLGrammarPool, componentManager->getProperty(XMLSchemaLoader::XMLGRAMMAR_POOL, nullptr)));
	initGrammarBucket();
	bool psvi = componentManager->getFeature(XMLSchemaLoader::AUGMENT_PSVI, false);
	if (!psvi && this->fGrammarPool == nullptr && false) {
		if (this->fDeclPool != nullptr) {
			$nc(this->fDeclPool)->reset();
		} else {
			$set(this, fDeclPool, $new($XSDeclarationPool));
		}
		$nc(this->fCMBuilder)->setDeclPool(this->fDeclPool);
		$nc(this->fSchemaHandler)->setDeclPool(this->fDeclPool);
		if ($instanceOf($SchemaDVFactoryImpl, dvFactory)) {
			$nc(this->fDeclPool)->setDVFactory($cast($SchemaDVFactoryImpl, dvFactory));
			$nc(($cast($SchemaDVFactoryImpl, dvFactory)))->setDeclPool(this->fDeclPool);
		}
	} else {
		$nc(this->fCMBuilder)->setDeclPool(nullptr);
		$nc(this->fSchemaHandler)->setDeclPool(nullptr);
		if ($instanceOf($SchemaDVFactoryImpl, dvFactory)) {
			$nc(($cast($SchemaDVFactoryImpl, dvFactory)))->setDeclPool(nullptr);
		}
	}
	try {
		bool fatalError = componentManager->getFeature(XMLSchemaLoader::CONTINUE_AFTER_FATAL_ERROR, false);
		if (!fatalError) {
			$nc(this->fErrorReporter)->setFeature(XMLSchemaLoader::CONTINUE_AFTER_FATAL_ERROR, fatalError);
		}
	} catch ($XMLConfigurationException& e) {
	}
	this->fIsCheckedFully = componentManager->getFeature(XMLSchemaLoader::SCHEMA_FULL_CHECKING, false);
	$nc(this->fSchemaHandler)->setGenerateSyntheticAnnotations(componentManager->getFeature(XMLSchemaLoader::GENERATE_SYNTHETIC_ANNOTATIONS, false));
	$nc(this->fSchemaHandler)->reset(componentManager);
}

void XMLSchemaLoader::initGrammarBucket() {
	if (this->fGrammarPool != nullptr) {
		$init($XMLGrammarDescription);
		$var($GrammarArray, initialGrammars, $nc(this->fGrammarPool)->retrieveInitialGrammarSet($XMLGrammarDescription::XML_SCHEMA));
		int32_t length = (initialGrammars != nullptr) ? $nc(initialGrammars)->length : 0;
		for (int32_t i = 0; i < length; ++i) {
			if (!$nc(this->fGrammarBucket)->putGrammar(($cast($SchemaGrammar, initialGrammars->get(i))), true)) {
				$init($XSMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XSMessageFormatter::SCHEMA_DOMAIN, "GrammarConflict"_s, nullptr, $XMLErrorReporter::SEVERITY_WARNING);
			}
		}
	}
}

$DOMConfiguration* XMLSchemaLoader::getConfig() {
	return this;
}

$XSModel* XMLSchemaLoader::load($LSInput* is) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Grammar, g, loadGrammar($(dom2xmlInputSource(is))));
		return $nc(($cast($XSGrammar, g)))->toXSModel();
	} catch ($Exception& e) {
		reportDOMFatalError(e);
		return nullptr;
	}
	$shouldNotReachHere();
}

$XSModel* XMLSchemaLoader::loadInputList($LSInputList* is) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(is)->getLength();
	$var($SchemaGrammarArray, gs, $new($SchemaGrammarArray, length));
	for (int32_t i = 0; i < length; ++i) {
		try {
			gs->set(i, $cast($SchemaGrammar, $(loadGrammar($(dom2xmlInputSource($(is->item(i))))))));
		} catch ($Exception& e) {
			reportDOMFatalError(e);
			return nullptr;
		}
	}
	return $new($XSModelImpl, gs);
}

$XSModel* XMLSchemaLoader::loadURI($String* uri) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Grammar, g, loadGrammar($$new($XMLInputSource, nullptr, uri, nullptr, false)));
		return $nc(($cast($XSGrammar, g)))->toXSModel();
	} catch ($Exception& e) {
		reportDOMFatalError(e);
		return nullptr;
	}
	$shouldNotReachHere();
}

$XSModel* XMLSchemaLoader::loadURIList($StringList* uriList) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(uriList)->getLength();
	$var($SchemaGrammarArray, gs, $new($SchemaGrammarArray, length));
	for (int32_t i = 0; i < length; ++i) {
		try {
			gs->set(i, $cast($SchemaGrammar, $(loadGrammar($$new($XMLInputSource, nullptr, $(uriList->item(i)), nullptr, false)))));
		} catch ($Exception& e) {
			reportDOMFatalError(e);
			return nullptr;
		}
	}
	return $new($XSModelImpl, gs);
}

void XMLSchemaLoader::reportDOMFatalError($Exception* e) {
	$useLocalCurrentObjectStackCache();
	if (this->fErrorHandler != nullptr) {
		$var($DOMErrorImpl, error, $new($DOMErrorImpl));
		$set(error, fException, e);
		$set(error, fMessage, $nc(e)->getMessage());
		error->fSeverity = $DOMError::SEVERITY_FATAL_ERROR;
		$nc($($nc(this->fErrorHandler)->getErrorHandler()))->handleError(error);
	}
}

bool XMLSchemaLoader::canSetParameter($String* name, Object$* value) {
	if ($instanceOf($Boolean, value)) {
		$init($Constants);
		bool var$9 = $nc(name)->equals($Constants::DOM_VALIDATE);
		bool var$8 = var$9 || $nc(name)->equals(XMLSchemaLoader::SCHEMA_FULL_CHECKING);
		bool var$7 = var$8 || $nc(name)->equals(XMLSchemaLoader::VALIDATE_ANNOTATIONS);
		bool var$6 = var$7 || $nc(name)->equals(XMLSchemaLoader::CONTINUE_AFTER_FATAL_ERROR);
		bool var$5 = var$6 || $nc(name)->equals(XMLSchemaLoader::ALLOW_JAVA_ENCODINGS);
		bool var$4 = var$5 || $nc(name)->equals(XMLSchemaLoader::STANDARD_URI_CONFORMANT_FEATURE);
		bool var$3 = var$4 || $nc(name)->equals(XMLSchemaLoader::GENERATE_SYNTHETIC_ANNOTATIONS);
		bool var$2 = var$3 || $nc(name)->equals(XMLSchemaLoader::HONOUR_ALL_SCHEMALOCATIONS);
		bool var$1 = var$2 || $nc(name)->equals(XMLSchemaLoader::NAMESPACE_GROWTH);
		bool var$0 = var$1 || $nc(name)->equals(XMLSchemaLoader::TOLERATE_DUPLICATES);
		if (var$0 || $nc(name)->equals(XMLSchemaLoader::OVERRIDE_PARSER)) {
			return true;
		}
		return false;
	}
	$init($Constants);
	bool var$19 = $nc(name)->equals($Constants::DOM_ERROR_HANDLER);
	bool var$18 = var$19 || $nc(name)->equals($Constants::DOM_RESOURCE_RESOLVER);
	bool var$17 = var$18 || $nc(name)->equals(XMLSchemaLoader::SYMBOL_TABLE);
	bool var$16 = var$17 || $nc(name)->equals(XMLSchemaLoader::ERROR_REPORTER);
	bool var$15 = var$16 || $nc(name)->equals(XMLSchemaLoader::ERROR_HANDLER);
	bool var$14 = var$15 || $nc(name)->equals(XMLSchemaLoader::ENTITY_RESOLVER);
	bool var$13 = var$14 || $nc(name)->equals(XMLSchemaLoader::XMLGRAMMAR_POOL);
	bool var$12 = var$13 || $nc(name)->equals(XMLSchemaLoader::SCHEMA_LOCATION);
	bool var$11 = var$12 || $nc(name)->equals(XMLSchemaLoader::SCHEMA_NONS_LOCATION);
	bool var$10 = var$11 || $nc(name)->equals(XMLSchemaLoader::JAXP_SCHEMA_SOURCE);
	if (var$10 || $nc(name)->equals(XMLSchemaLoader::SCHEMA_DV_FACTORY)) {
		return true;
	}
	return false;
}

$Object* XMLSchemaLoader::getParameter($String* name) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	if ($nc(name)->equals($Constants::DOM_ERROR_HANDLER)) {
		return $of((this->fErrorHandler != nullptr) ? $of($nc(this->fErrorHandler)->getErrorHandler()) : ($Object*)nullptr);
	} else {
		if (name->equals($Constants::DOM_RESOURCE_RESOLVER)) {
			return $of((this->fResourceResolver != nullptr) ? $of($nc(this->fResourceResolver)->getEntityResolver()) : ($Object*)nullptr);
		}
	}
	try {
		bool feature = getFeature(name);
		$init($Boolean);
		return $of((feature) ? $Boolean::TRUE : $Boolean::FALSE);
	} catch ($Exception& e) {
		$var($Object, property, nullptr);
		try {
			$assign(property, getProperty(name));
			return $of(property);
		} catch ($Exception& ex) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_SUPPORTED"_s, $$new($ObjectArray, {$of(name)})));
			$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
		}
	}
	$shouldNotReachHere();
}

$DOMStringList* XMLSchemaLoader::getParameterNames() {
	if (this->fRecognizedParameters == nullptr) {
		$var($ArrayList, v, $new($ArrayList));
		$init($Constants);
		v->add($Constants::DOM_VALIDATE);
		v->add($Constants::DOM_ERROR_HANDLER);
		v->add($Constants::DOM_RESOURCE_RESOLVER);
		v->add(XMLSchemaLoader::SYMBOL_TABLE);
		v->add(XMLSchemaLoader::ERROR_REPORTER);
		v->add(XMLSchemaLoader::ERROR_HANDLER);
		v->add(XMLSchemaLoader::ENTITY_RESOLVER);
		v->add(XMLSchemaLoader::XMLGRAMMAR_POOL);
		v->add(XMLSchemaLoader::SCHEMA_LOCATION);
		v->add(XMLSchemaLoader::SCHEMA_NONS_LOCATION);
		v->add(XMLSchemaLoader::JAXP_SCHEMA_SOURCE);
		v->add(XMLSchemaLoader::SCHEMA_FULL_CHECKING);
		v->add(XMLSchemaLoader::CONTINUE_AFTER_FATAL_ERROR);
		v->add(XMLSchemaLoader::ALLOW_JAVA_ENCODINGS);
		v->add(XMLSchemaLoader::STANDARD_URI_CONFORMANT_FEATURE);
		v->add(XMLSchemaLoader::VALIDATE_ANNOTATIONS);
		v->add(XMLSchemaLoader::GENERATE_SYNTHETIC_ANNOTATIONS);
		v->add(XMLSchemaLoader::HONOUR_ALL_SCHEMALOCATIONS);
		v->add(XMLSchemaLoader::NAMESPACE_GROWTH);
		v->add(XMLSchemaLoader::TOLERATE_DUPLICATES);
		v->add(XMLSchemaLoader::OVERRIDE_PARSER);
		$set(this, fRecognizedParameters, $new($DOMStringListImpl, v));
	}
	return this->fRecognizedParameters;
}

void XMLSchemaLoader::setParameter($String* name, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Boolean, value)) {
		bool state = $nc(($cast($Boolean, value)))->booleanValue();
		if ($nc(name)->equals("validate"_s) && state) {
			return;
		}
		try {
			setFeature(name, state);
		} catch ($Exception& e) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_SUPPORTED"_s, $$new($ObjectArray, {$of(name)})));
			$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
		}
		return;
	}
	$init($Constants);
	if ($nc(name)->equals($Constants::DOM_ERROR_HANDLER)) {
		if ($instanceOf($DOMErrorHandler, value)) {
			try {
				$set(this, fErrorHandler, $new($DOMErrorHandlerWrapper, $cast($DOMErrorHandler, value)));
				setErrorHandler(this->fErrorHandler);
			} catch ($XMLConfigurationException& e) {
			}
		} else {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_SUPPORTED"_s, $$new($ObjectArray, {$of(name)})));
			$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
		}
		return;
	}
	if ($nc(name)->equals($Constants::DOM_RESOURCE_RESOLVER)) {
		if ($instanceOf($LSResourceResolver, value)) {
			try {
				$set(this, fResourceResolver, $new($DOMEntityResolverWrapper, $cast($LSResourceResolver, value)));
				setEntityResolver(this->fResourceResolver);
			} catch ($XMLConfigurationException& e) {
			}
		} else {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_SUPPORTED"_s, $$new($ObjectArray, {$of(name)})));
			$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
		}
		return;
	}
	try {
		setProperty(name, value);
	} catch ($Exception& ex) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_SUPPORTED"_s, $$new($ObjectArray, {$of(name)})));
		$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
	}
}

$XMLInputSource* XMLSchemaLoader::dom2xmlInputSource($LSInput* is) {
	$useLocalCurrentObjectStackCache();
	$var($XMLInputSource, xis, nullptr);
	if ($nc(is)->getCharacterStream() != nullptr) {
		$var($String, var$0, is->getPublicId());
		$var($String, var$1, is->getSystemId());
		$var($String, var$2, is->getBaseURI());
		$assign(xis, $new($XMLInputSource, var$0, var$1, var$2, $(is->getCharacterStream()), "UTF-16"_s));
	} else if (is->getByteStream() != nullptr) {
		$var($String, var$3, is->getPublicId());
		$var($String, var$4, is->getSystemId());
		$var($String, var$5, is->getBaseURI());
		$var($InputStream, var$6, is->getByteStream());
		$assign(xis, $new($XMLInputSource, var$3, var$4, var$5, var$6, $(is->getEncoding())));
	} else {
		bool var$8 = is->getStringData() != nullptr;
		if (var$8 && $nc($(is->getStringData()))->length() != 0) {
			$var($String, var$9, is->getPublicId());
			$var($String, var$10, is->getSystemId());
			$var($String, var$11, is->getBaseURI());
			$assign(xis, $new($XMLInputSource, var$9, var$10, var$11, static_cast<$Reader*>($$new($StringReader, $(is->getStringData()))), "UTF-16"_s));
		} else {
			$var($String, var$12, is->getPublicId());
			$var($String, var$13, is->getSystemId());
			$assign(xis, $new($XMLInputSource, var$12, var$13, $(is->getBaseURI()), false));
		}
	}
	return xis;
}

$XSElementDecl* XMLSchemaLoader::getGlobalElementDecl($QName* element) {
	$var($SchemaGrammar, sGrammar, $nc(this->fGrammarBucket)->getGrammar($nc(element)->uri));
	if (sGrammar != nullptr) {
		return sGrammar->getGlobalElementDecl($nc(element)->localpart);
	}
	return nullptr;
}

void clinit$XMLSchemaLoader($Class* class$) {
	$init($Constants);
	$assignStatic(XMLSchemaLoader::SCHEMA_FULL_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_FULL_CHECKING}));
	$assignStatic(XMLSchemaLoader::CONTINUE_AFTER_FATAL_ERROR, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE}));
	$assignStatic(XMLSchemaLoader::ALLOW_JAVA_ENCODINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::ALLOW_JAVA_ENCODINGS_FEATURE}));
	$assignStatic(XMLSchemaLoader::STANDARD_URI_CONFORMANT_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::STANDARD_URI_CONFORMANT_FEATURE}));
	$assignStatic(XMLSchemaLoader::VALIDATE_ANNOTATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::VALIDATE_ANNOTATIONS_FEATURE}));
	$assignStatic(XMLSchemaLoader::DISALLOW_DOCTYPE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::DISALLOW_DOCTYPE_DECL_FEATURE}));
	$assignStatic(XMLSchemaLoader::GENERATE_SYNTHETIC_ANNOTATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE}));
	$assignStatic(XMLSchemaLoader::HONOUR_ALL_SCHEMALOCATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::HONOUR_ALL_SCHEMALOCATIONS_FEATURE}));
	$assignStatic(XMLSchemaLoader::AUGMENT_PSVI, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_AUGMENT_PSVI}));
	$assignStatic(XMLSchemaLoader::PARSER_SETTINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::PARSER_SETTINGS}));
	$assignStatic(XMLSchemaLoader::NAMESPACE_GROWTH, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NAMESPACE_GROWTH_FEATURE}));
	$assignStatic(XMLSchemaLoader::TOLERATE_DUPLICATES, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::TOLERATE_DUPLICATES_FEATURE}));
	$assignStatic(XMLSchemaLoader::SCHEMA_DV_FACTORY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_DV_FACTORY_PROPERTY}));
	$init($JdkConstants);
	$assignStatic(XMLSchemaLoader::OVERRIDE_PARSER, $JdkConstants::OVERRIDE_PARSER);
	$assignStatic(XMLSchemaLoader::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XMLSchemaLoader::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XMLSchemaLoader::ERROR_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_HANDLER_PROPERTY}));
	$assignStatic(XMLSchemaLoader::ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_RESOLVER_PROPERTY}));
	$assignStatic(XMLSchemaLoader::XMLGRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	$assignStatic(XMLSchemaLoader::SCHEMA_LOCATION, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_LOCATION}));
	$assignStatic(XMLSchemaLoader::SCHEMA_NONS_LOCATION, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_NONS_LOCATION}));
	$assignStatic(XMLSchemaLoader::JAXP_SCHEMA_SOURCE, $str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_SOURCE}));
	$assignStatic(XMLSchemaLoader::SECURITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SECURITY_MANAGER_PROPERTY}));
	$assignStatic(XMLSchemaLoader::LOCALE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::LOCALE_PROPERTY}));
	$assignStatic(XMLSchemaLoader::ENTITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_MANAGER_PROPERTY}));
	$assignStatic(XMLSchemaLoader::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
	$init($XMLConstants);
	$assignStatic(XMLSchemaLoader::ACCESS_EXTERNAL_DTD, $XMLConstants::ACCESS_EXTERNAL_DTD);
	$assignStatic(XMLSchemaLoader::ACCESS_EXTERNAL_SCHEMA, $XMLConstants::ACCESS_EXTERNAL_SCHEMA);
	$init($XMLConstants);
	$assignStatic(XMLSchemaLoader::RECOGNIZED_FEATURES, $new($StringArray, {
		XMLSchemaLoader::SCHEMA_FULL_CHECKING,
		XMLSchemaLoader::AUGMENT_PSVI,
		XMLSchemaLoader::CONTINUE_AFTER_FATAL_ERROR,
		XMLSchemaLoader::ALLOW_JAVA_ENCODINGS,
		XMLSchemaLoader::STANDARD_URI_CONFORMANT_FEATURE,
		XMLSchemaLoader::DISALLOW_DOCTYPE,
		XMLSchemaLoader::GENERATE_SYNTHETIC_ANNOTATIONS,
		XMLSchemaLoader::VALIDATE_ANNOTATIONS,
		XMLSchemaLoader::HONOUR_ALL_SCHEMALOCATIONS,
		XMLSchemaLoader::NAMESPACE_GROWTH,
		XMLSchemaLoader::TOLERATE_DUPLICATES,
		XMLSchemaLoader::OVERRIDE_PARSER,
		$XMLConstants::USE_CATALOG
	}));
	$init($JdkXmlUtils);
	$init($JdkConstants);
	$assignStatic(XMLSchemaLoader::RECOGNIZED_PROPERTIES, $new($StringArray, {
		XMLSchemaLoader::ENTITY_MANAGER,
		XMLSchemaLoader::SYMBOL_TABLE,
		XMLSchemaLoader::ERROR_REPORTER,
		XMLSchemaLoader::ERROR_HANDLER,
		XMLSchemaLoader::ENTITY_RESOLVER,
		XMLSchemaLoader::XMLGRAMMAR_POOL,
		XMLSchemaLoader::SCHEMA_LOCATION,
		XMLSchemaLoader::SCHEMA_NONS_LOCATION,
		XMLSchemaLoader::JAXP_SCHEMA_SOURCE,
		XMLSchemaLoader::SECURITY_MANAGER,
		XMLSchemaLoader::LOCALE,
		XMLSchemaLoader::SCHEMA_DV_FACTORY,
		XMLSchemaLoader::XML_SECURITY_PROPERTY_MANAGER,
		$JdkXmlUtils::CATALOG_DEFER,
		$JdkXmlUtils::CATALOG_FILES,
		$JdkXmlUtils::CATALOG_PREFER,
		$JdkXmlUtils::CATALOG_RESOLVE,
		$JdkConstants::CDATA_CHUNK_SIZE
	}));
}

XMLSchemaLoader::XMLSchemaLoader() {
}

$Class* XMLSchemaLoader::load$($String* name, bool initialize) {
	$loadClass(XMLSchemaLoader, name, initialize, &_XMLSchemaLoader_ClassInfo_, clinit$XMLSchemaLoader, allocate$XMLSchemaLoader);
	return class$;
}

$Class* XMLSchemaLoader::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com