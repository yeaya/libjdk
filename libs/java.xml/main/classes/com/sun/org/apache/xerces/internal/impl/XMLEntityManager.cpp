#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/PropertyManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XML11EntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager$EncodingInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager$RewindableInputStream.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/io/UCSReader.h>
#include <com/sun/org/apache/xerces/internal/impl/io/UTF16Reader.h>
#include <com/sun/org/apache/xerces/internal/impl/io/UTF8Reader.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl.h>
#include <com/sun/org/apache/xerces/internal/util/EncodingMap.h>
#include <com/sun/org/apache/xerces/internal/util/HTTPInputSource.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/URI$MalformedURIException.h>
#include <com/sun/org/apache/xerces/internal/util/URI.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLEntityDescriptionImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$Property.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/xml/internal/stream/Entity$ExternalEntity.h>
#include <com/sun/xml/internal/stream/Entity$InternalEntity.h>
#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>
#include <com/sun/xml/internal/stream/Entity.h>
#include <com/sun/xml/internal/stream/StaxEntityResolverWrapper.h>
#include <com/sun/xml/internal/stream/StaxXMLInputSource.h>
#include <com/sun/xml/internal/stream/XMLEntityStorage.h>
#include <java/io/BufferedReader.h>
#include <java/io/EOFException.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/SecurityException.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Stack.h>
#include <java/util/StringTokenizer.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/catalog/CatalogException.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <javax/xml/catalog/CatalogManager.h>
#include <javax/xml/catalog/CatalogResolver.h>
#include <javax/xml/stream/XMLInputFactory.h>
#include <javax/xml/transform/Source.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_ALL
#undef ACCESS_EXTERNAL_DTD
#undef ALLOW_JAVA_ENCODINGS
#undef ALLOW_JAVA_ENCODINGS_FEATURE
#undef BUFFER_SIZE
#undef BUFFER_SIZE_PROPERTY
#undef CATALOG_DEFER
#undef CATALOG_FILES
#undef CATALOG_PREFER
#undef CATALOG_RESOLVE
#undef CDATA_CHUNK_SIZE
#undef CDATA_CHUNK_SIZE_DEFAULT
#undef DEBUG_BUFFER
#undef DEBUG_ENCODINGS
#undef DEBUG_ENTITIES
#undef DEBUG_RESOLVER
#undef DEFAULT_BUFFER_SIZE
#undef DEFAULT_INTERNAL_BUFFER_SIZE
#undef DEFAULT_XMLDECL_BUFFER_SIZE
#undef EBCDIC
#undef ENGLISH
#undef ENTITY_RESOLVER
#undef ENTITY_RESOLVER_PROPERTY
#undef ENTITY_SKIPPED
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef EXTERNAL_ACCESS_DEFAULT
#undef EXTERNAL_GENERAL_ENTITIES
#undef EXTERNAL_GENERAL_ENTITIES_FEATURE
#undef EXTERNAL_PARAMETER_ENTITIES
#undef EXTERNAL_PARAMETER_ENTITIES_FEATURE
#undef FALSE
#undef FEATURE_DEFAULTS
#undef FILES
#undef GENERAL_ENTITY_SIZE_LIMIT
#undef IGNORE_EXTERNAL_DTD
#undef IS_REPLACING_ENTITY_REFERENCES
#undef IS_SUPPORTING_EXTERNAL_ENTITIES
#undef LAST_ENTITY
#undef LOAD_EXTERNAL_DTD
#undef LOAD_EXTERNAL_DTD_FEATURE
#undef PARSER_SETTINGS
#undef PROPERTY_DEFAULTS
#undef RECOGNIZED_FEATURES
#undef RECOGNIZED_PROPERTIES
#undef SAX_FEATURE_PREFIX
#undef SECURITY_MANAGER
#undef SECURITY_MANAGER_PROPERTY
#undef SEVERITY_FATAL_ERROR
#undef SEVERITY_WARNING
#undef SP_ENTITY_EXPANSION_LIMIT
#undef STANDARD_URI_CONFORMANT
#undef STANDARD_URI_CONFORMANT_FEATURE
#undef STAX_ENTITY_RESOLVER
#undef STAX_ENTITY_RESOLVER_PROPERTY
#undef STR_UCS2
#undef STR_UCS4
#undef STR_UTF16
#undef STR_UTF8
#undef SUPPORT_DTD
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TRUE
#undef UCS2BE
#undef UCS2LE
#undef UCS4BE
#undef UCS4LE
#undef UCS_4_BIG_ENDIAN
#undef UCS_4_LITTLE_ENDIAN
#undef UCS_4_UNUSUAL_BYTE_ORDER
#undef USE_CATALOG
#undef USE_CATALOG_DEFAULT
#undef UTF_16_BIG_ENDIAN
#undef UTF_16_BIG_ENDIAN_WITH_BOM
#undef UTF_16_LITTLE_ENDIAN
#undef UTF_16_LITTLE_ENDIAN_WITH_BOM
#undef UTF_8
#undef UTF_8_WITH_BOM
#undef VALIDATION
#undef VALIDATION_FEATURE
#undef VALIDATION_MANAGER
#undef VALIDATION_MANAGER_PROPERTY
#undef WARN_ON_DUPLICATE_ENTITYDEF
#undef WARN_ON_DUPLICATE_ENTITYDEF_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XML_DOMAIN
#undef XML_SECURITY_PROPERTY_MANAGER
#undef XML_VERSION_1_0
#undef ZEPHYR_PROPERTY_PREFIX

using $BooleanArray = $Array<::java::lang::Boolean>;
using $URIArray = $Array<::java::net::URI>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $PropertyManager = ::com::sun::org::apache::xerces::internal::impl::PropertyManager;
using $XML11EntityScanner = ::com::sun::org::apache::xerces::internal::impl::XML11EntityScanner;
using $XMLEntityHandler = ::com::sun::org::apache::xerces::internal::impl::XMLEntityHandler;
using $XMLEntityManager$EncodingInfo = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager$EncodingInfo;
using $XMLEntityManager$RewindableInputStream = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager$RewindableInputStream;
using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $UCSReader = ::com::sun::org::apache::xerces::internal::impl::io::UCSReader;
using $UTF16Reader = ::com::sun::org::apache::xerces::internal::impl::io::UTF16Reader;
using $UTF8Reader = ::com::sun::org::apache::xerces::internal::impl::io::UTF8Reader;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $AugmentationsImpl = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl;
using $EncodingMap = ::com::sun::org::apache::xerces::internal::util::EncodingMap;
using $HTTPInputSource = ::com::sun::org::apache::xerces::internal::util::HTTPInputSource;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $URI = ::com::sun::org::apache::xerces::internal::util::URI;
using $URI$MalformedURIException = ::com::sun::org::apache::xerces::internal::util::URI$MalformedURIException;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLEntityDescriptionImpl = ::com::sun::org::apache::xerces::internal::util::XMLEntityDescriptionImpl;
using $XMLResourceIdentifierImpl = ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl;
using $XMLLimitAnalyzer = ::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityManager$Limit = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $XMLSecurityPropertyManager$Property = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $Entity = ::com::sun::xml::internal::stream::Entity;
using $Entity$ExternalEntity = ::com::sun::xml::internal::stream::Entity$ExternalEntity;
using $Entity$InternalEntity = ::com::sun::xml::internal::stream::Entity$InternalEntity;
using $Entity$ScannedEntity = ::com::sun::xml::internal::stream::Entity$ScannedEntity;
using $StaxEntityResolverWrapper = ::com::sun::xml::internal::stream::StaxEntityResolverWrapper;
using $StaxXMLInputSource = ::com::sun::xml::internal::stream::StaxXMLInputSource;
using $XMLEntityStorage = ::com::sun::xml::internal::stream::XMLEntityStorage;
using $BufferedReader = ::java::io::BufferedReader;
using $EOFException = ::java::io::EOFException;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $1URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Stack = ::java::util::Stack;
using $StringTokenizer = ::java::util::StringTokenizer;
using $XMLConstants = ::javax::xml::XMLConstants;
using $CatalogException = ::javax::xml::catalog::CatalogException;
using $CatalogFeatures = ::javax::xml::catalog::CatalogFeatures;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $CatalogManager = ::javax::xml::catalog::CatalogManager;
using $CatalogResolver = ::javax::xml::catalog::CatalogResolver;
using $XMLInputFactory = ::javax::xml::stream::XMLInputFactory;
using $Source = ::javax::xml::transform::Source;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $InputSource = ::org::xml::sax::InputSource;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLEntityManager_FieldInfo_[] = {
	{"DEFAULT_BUFFER_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLEntityManager, DEFAULT_BUFFER_SIZE)},
	{"DEFAULT_XMLDECL_BUFFER_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLEntityManager, DEFAULT_XMLDECL_BUFFER_SIZE)},
	{"DEFAULT_INTERNAL_BUFFER_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLEntityManager, DEFAULT_INTERNAL_BUFFER_SIZE)},
	{"VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityManager, VALIDATION)},
	{"fStrictURI", "Z", nullptr, $PROTECTED, $field(XMLEntityManager, fStrictURI)},
	{"EXTERNAL_GENERAL_ENTITIES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityManager, EXTERNAL_GENERAL_ENTITIES)},
	{"EXTERNAL_PARAMETER_ENTITIES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityManager, EXTERNAL_PARAMETER_ENTITIES)},
	{"ALLOW_JAVA_ENCODINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityManager, ALLOW_JAVA_ENCODINGS)},
	{"WARN_ON_DUPLICATE_ENTITYDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityManager, WARN_ON_DUPLICATE_ENTITYDEF)},
	{"LOAD_EXTERNAL_DTD", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityManager, LOAD_EXTERNAL_DTD)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityManager, SYMBOL_TABLE)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityManager, ERROR_REPORTER)},
	{"STANDARD_URI_CONFORMANT", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityManager, STANDARD_URI_CONFORMANT)},
	{"ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityManager, ENTITY_RESOLVER)},
	{"STAX_ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityManager, STAX_ENTITY_RESOLVER)},
	{"VALIDATION_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityManager, VALIDATION_MANAGER)},
	{"BUFFER_SIZE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityManager, BUFFER_SIZE)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityManager, SECURITY_MANAGER)},
	{"PARSER_SETTINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityManager, PARSER_SETTINGS)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLEntityManager, XML_SECURITY_PROPERTY_MANAGER)},
	{"EXTERNAL_ACCESS_DEFAULT", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XMLEntityManager, EXTERNAL_ACCESS_DEFAULT)},
	{"RECOGNIZED_FEATURES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLEntityManager, RECOGNIZED_FEATURES)},
	{"FEATURE_DEFAULTS", "[Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLEntityManager, FEATURE_DEFAULTS)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLEntityManager, RECOGNIZED_PROPERTIES)},
	{"PROPERTY_DEFAULTS", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLEntityManager, PROPERTY_DEFAULTS)},
	{"XMLEntity", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLEntityManager, XMLEntity)},
	{"DTDEntity", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLEntityManager, DTDEntity)},
	{"DEBUG_BUFFER", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLEntityManager, DEBUG_BUFFER)},
	{"fWarnDuplicateEntityDef", "Z", nullptr, $PROTECTED, $field(XMLEntityManager, fWarnDuplicateEntityDef)},
	{"DEBUG_ENTITIES", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLEntityManager, DEBUG_ENTITIES)},
	{"DEBUG_ENCODINGS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLEntityManager, DEBUG_ENCODINGS)},
	{"DEBUG_RESOLVER", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLEntityManager, DEBUG_RESOLVER)},
	{"fValidation", "Z", nullptr, $PROTECTED, $field(XMLEntityManager, fValidation)},
	{"fExternalGeneralEntities", "Z", nullptr, $PROTECTED, $field(XMLEntityManager, fExternalGeneralEntities)},
	{"fExternalParameterEntities", "Z", nullptr, $PROTECTED, $field(XMLEntityManager, fExternalParameterEntities)},
	{"fAllowJavaEncodings", "Z", nullptr, $PROTECTED, $field(XMLEntityManager, fAllowJavaEncodings)},
	{"fLoadExternalDTD", "Z", nullptr, $PROTECTED, $field(XMLEntityManager, fLoadExternalDTD)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XMLEntityManager, fSymbolTable)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(XMLEntityManager, fErrorReporter)},
	{"fEntityResolver", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PROTECTED, $field(XMLEntityManager, fEntityResolver)},
	{"fStaxEntityResolver", "Lcom/sun/xml/internal/stream/StaxEntityResolverWrapper;", nullptr, $PROTECTED, $field(XMLEntityManager, fStaxEntityResolver)},
	{"fPropertyManager", "Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;", nullptr, $PROTECTED, $field(XMLEntityManager, fPropertyManager)},
	{"fSupportDTD", "Z", nullptr, 0, $field(XMLEntityManager, fSupportDTD)},
	{"fReplaceEntityReferences", "Z", nullptr, 0, $field(XMLEntityManager, fReplaceEntityReferences)},
	{"fSupportExternalEntities", "Z", nullptr, 0, $field(XMLEntityManager, fSupportExternalEntities)},
	{"fAccessExternalDTD", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLEntityManager, fAccessExternalDTD)},
	{"fValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PROTECTED, $field(XMLEntityManager, fValidationManager)},
	{"fBufferSize", "I", nullptr, $PROTECTED, $field(XMLEntityManager, fBufferSize)},
	{"fSecurityManager", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager;", nullptr, $PROTECTED, $field(XMLEntityManager, fSecurityManager)},
	{"fLimitAnalyzer", "Lcom/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer;", nullptr, $PROTECTED, $field(XMLEntityManager, fLimitAnalyzer)},
	{"entityExpansionIndex", "I", nullptr, $PROTECTED, $field(XMLEntityManager, entityExpansionIndex)},
	{"fStandalone", "Z", nullptr, $PROTECTED, $field(XMLEntityManager, fStandalone)},
	{"fInExternalSubset", "Z", nullptr, $PROTECTED, $field(XMLEntityManager, fInExternalSubset)},
	{"fEntityHandler", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityHandler;", nullptr, $PROTECTED, $field(XMLEntityManager, fEntityHandler)},
	{"fEntityScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityScanner;", nullptr, $PROTECTED, $field(XMLEntityManager, fEntityScanner)},
	{"fXML10EntityScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityScanner;", nullptr, $PROTECTED, $field(XMLEntityManager, fXML10EntityScanner)},
	{"fXML11EntityScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityScanner;", nullptr, $PROTECTED, $field(XMLEntityManager, fXML11EntityScanner)},
	{"fEntityExpansionCount", "I", nullptr, $PROTECTED, $field(XMLEntityManager, fEntityExpansionCount)},
	{"fEntities", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/xml/internal/stream/Entity;>;", $PROTECTED, $field(XMLEntityManager, fEntities)},
	{"fEntityStack", "Ljava/util/Stack;", "Ljava/util/Stack<Lcom/sun/xml/internal/stream/Entity;>;", $PROTECTED, $field(XMLEntityManager, fEntityStack)},
	{"fCurrentEntity", "Lcom/sun/xml/internal/stream/Entity$ScannedEntity;", nullptr, $PROTECTED, $field(XMLEntityManager, fCurrentEntity)},
	{"fISCreatedByResolver", "Z", nullptr, 0, $field(XMLEntityManager, fISCreatedByResolver)},
	{"fEntityStorage", "Lcom/sun/xml/internal/stream/XMLEntityStorage;", nullptr, $PROTECTED, $field(XMLEntityManager, fEntityStorage)},
	{"defaultEncoding", "[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $field(XMLEntityManager, defaultEncoding)},
	{"fResourceIdentifier", "Lcom/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl;", nullptr, $PRIVATE | $FINAL, $field(XMLEntityManager, fResourceIdentifier)},
	{"fEntityAugs", "Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PRIVATE | $FINAL, $field(XMLEntityManager, fEntityAugs)},
	{"fUseCatalog", "Z", nullptr, $PRIVATE, $field(XMLEntityManager, fUseCatalog)},
	{"fCatalogFeatures", "Ljavax/xml/catalog/CatalogFeatures;", nullptr, 0, $field(XMLEntityManager, fCatalogFeatures)},
	{"fCatalogResolver", "Ljavax/xml/catalog/CatalogResolver;", nullptr, 0, $field(XMLEntityManager, fCatalogResolver)},
	{"fCatalogFile", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLEntityManager, fCatalogFile)},
	{"fDefer", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLEntityManager, fDefer)},
	{"fPrefer", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLEntityManager, fPrefer)},
	{"fResolve", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLEntityManager, fResolve)},
	{"fReaderStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/io/Reader;>;", $PROTECTED, $field(XMLEntityManager, fReaderStack)},
	{"gUserDir", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(XMLEntityManager, gUserDir)},
	{"gUserDirURI", "Lcom/sun/org/apache/xerces/internal/util/URI;", nullptr, $PRIVATE | $STATIC, $staticField(XMLEntityManager, gUserDirURI)},
	{"gNeedEscaping", "[Z", nullptr, $PRIVATE | $STATIC, $staticField(XMLEntityManager, gNeedEscaping)},
	{"gAfterEscaping1", "[C", nullptr, $PRIVATE | $STATIC, $staticField(XMLEntityManager, gAfterEscaping1)},
	{"gAfterEscaping2", "[C", nullptr, $PRIVATE | $STATIC, $staticField(XMLEntityManager, gAfterEscaping2)},
	{"gHexChs", "[C", nullptr, $PRIVATE | $STATIC, $staticField(XMLEntityManager, gHexChs)},
	{}
};

$MethodInfo _XMLEntityManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLEntityManager, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $method(XMLEntityManager, init$, void, $PropertyManager*)},
	{"absolutizeAgainstUserDir", "(Lcom/sun/org/apache/xerces/internal/util/URI;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLEntityManager, absolutizeAgainstUserDir, void, $URI*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"addExternalEntity", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, addExternalEntity, void, $String*, $String*, $String*, $String*), "java.io.IOException"},
	{"addInternalEntity", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, addInternalEntity, void, $String*, $String*)},
	{"addUnparsedEntity", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, addUnparsedEntity, void, $String*, $String*, $String*, $String*, $String*)},
	{"closeReaders", "()V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, closeReaders, void)},
	{"createOutputStream", "(Ljava/lang/String;)Ljava/io/OutputStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLEntityManager, createOutputStream, $OutputStream*, $String*), "java.io.IOException"},
	{"createReader", "(Ljava/io/InputStream;Ljava/lang/String;Ljava/lang/Boolean;)Ljava/io/Reader;", nullptr, $PROTECTED, $virtualMethod(XMLEntityManager, createReader, $Reader*, $InputStream*, $String*, $Boolean*), "java.io.IOException"},
	{"endEntity", "()V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, endEntity, void), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endExternalSubset", "()V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, endExternalSubset, void)},
	{"expandSystemId", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLEntityManager, expandSystemId, $String*, $String*)},
	{"expandSystemId", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLEntityManager, expandSystemId, $String*, $String*, $String*)},
	{"expandSystemId", "(Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLEntityManager, expandSystemId, $String*, $String*, $String*, bool), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"expandSystemIdStrictOff", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(XMLEntityManager, expandSystemIdStrictOff, $String*, $String*, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"expandSystemIdStrictOff1", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(XMLEntityManager, expandSystemIdStrictOff1, $String*, $String*, $String*), "java.net.URISyntaxException,com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"expandSystemIdStrictOn", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(XMLEntityManager, expandSystemIdStrictOn, $String*, $String*, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"fixURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticMethod(XMLEntityManager, fixURI, $String*, $String*)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, getColumnNumber, int32_t)},
	{"getCurrentEntity", "()Lcom/sun/xml/internal/stream/Entity$ScannedEntity;", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, getCurrentEntity, $Entity$ScannedEntity*)},
	{"getCurrentResourceIdentifier", "()Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, getCurrentResourceIdentifier, $XMLResourceIdentifier*)},
	{"getEncodingInfo", "([BI)Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager$EncodingInfo;", nullptr, $PROTECTED, $virtualMethod(XMLEntityManager, getEncodingInfo, $XMLEntityManager$EncodingInfo*, $bytes*, int32_t)},
	{"getEntityScanner", "()Lcom/sun/org/apache/xerces/internal/impl/XMLEntityScanner;", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, getEntityScanner, $XMLEntityScanner*)},
	{"getEntityStore", "()Lcom/sun/xml/internal/stream/XMLEntityStorage;", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, getEntityStore, $XMLEntityStorage*)},
	{"getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, getExpandedSystemId, $String*)},
	{"getFeatureDefault", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, getFeatureDefault, $Boolean*, $String*)},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, getLineNumber, int32_t)},
	{"getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, getLiteralSystemId, $String*)},
	{"getPathWithoutEscapes", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(XMLEntityManager, getPathWithoutEscapes, $String*, $String*)},
	{"getPropertyDefault", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, getPropertyDefault, $Object*, $String*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, getPublicId, $String*)},
	{"getRecognizedFeatures", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, getRecognizedFeatures, $StringArray*)},
	{"getRecognizedProperties", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, getRecognizedProperties, $StringArray*)},
	{"getTopLevelEntity", "()Lcom/sun/xml/internal/stream/Entity$ScannedEntity;", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, getTopLevelEntity, $Entity$ScannedEntity*)},
	{"getUserDir", "()Lcom/sun/org/apache/xerces/internal/util/URI;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(XMLEntityManager, getUserDir, $URI*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"isDeclaredEntity", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, isDeclaredEntity, bool, $String*)},
	{"isEntityDeclInExternalSubset", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, isEntityDeclInExternalSubset, bool, $String*)},
	{"isExternalEntity", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, isExternalEntity, bool, $String*)},
	{"isStandalone", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, isStandalone, bool)},
	{"isUnparsedEntity", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, isUnparsedEntity, bool, $String*)},
	{"print", "()V", nullptr, $FINAL, $method(XMLEntityManager, print, void)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, reset, void, $PropertyManager*)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, reset, void)},
	{"resolveEntity", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, resolveEntity, $XMLInputSource*, $XMLResourceIdentifier*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"resolveEntityAsPerStax", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;)Lcom/sun/xml/internal/stream/StaxXMLInputSource;", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, resolveEntityAsPerStax, $StaxXMLInputSource*, $XMLResourceIdentifier*), "java.io.IOException"},
	{"setEntityHandler", "(Lcom/sun/org/apache/xerces/internal/impl/XMLEntityHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, setEntityHandler, void, $XMLEntityHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setLimitAnalyzer", "(Lcom/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, setLimitAnalyzer, void, $XMLLimitAnalyzer*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, setProperty, void, $String*, Object$*)},
	{"setScannerVersion", "(S)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, setScannerVersion, void, int16_t)},
	{"setStandalone", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, setStandalone, void, bool)},
	{"setupCurrentEntity", "(ZLjava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;ZZ)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, setupCurrentEntity, $String*, bool, $String*, $XMLInputSource*, bool, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDTDEntity", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, startDTDEntity, void, $XMLInputSource*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocumentEntity", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, startDocumentEntity, void, $XMLInputSource*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startEntity", "(ZLjava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, startEntity, void, bool, $String*, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startEntity", "(ZLjava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;ZZ)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, startEntity, void, bool, $String*, $XMLInputSource*, bool, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startExternalSubset", "()V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, startExternalSubset, void)},
	{"test", "()V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager, test, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XMLEntityManager_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLEntityManager$RewindableInputStream", "com.sun.org.apache.xerces.internal.impl.XMLEntityManager", "RewindableInputStream", $PROTECTED | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.XMLEntityManager$EncodingInfo", "com.sun.org.apache.xerces.internal.impl.XMLEntityManager", "EncodingInfo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XMLEntityManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLEntityManager",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLComponent,com.sun.org.apache.xerces.internal.xni.parser.XMLEntityResolver",
	_XMLEntityManager_FieldInfo_,
	_XMLEntityManager_MethodInfo_,
	nullptr,
	nullptr,
	_XMLEntityManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLEntityManager$RewindableInputStream,com.sun.org.apache.xerces.internal.impl.XMLEntityManager$EncodingInfo"
};

$Object* allocate$XMLEntityManager($Class* clazz) {
	return $of($alloc(XMLEntityManager));
}

int32_t XMLEntityManager::hashCode() {
	 return this->$XMLComponent::hashCode();
}

bool XMLEntityManager::equals(Object$* arg0) {
	 return this->$XMLComponent::equals(arg0);
}

$Object* XMLEntityManager::clone() {
	 return this->$XMLComponent::clone();
}

$String* XMLEntityManager::toString() {
	 return this->$XMLComponent::toString();
}

void XMLEntityManager::finalize() {
	this->$XMLComponent::finalize();
}

$String* XMLEntityManager::VALIDATION = nullptr;
$String* XMLEntityManager::EXTERNAL_GENERAL_ENTITIES = nullptr;
$String* XMLEntityManager::EXTERNAL_PARAMETER_ENTITIES = nullptr;
$String* XMLEntityManager::ALLOW_JAVA_ENCODINGS = nullptr;
$String* XMLEntityManager::WARN_ON_DUPLICATE_ENTITYDEF = nullptr;
$String* XMLEntityManager::LOAD_EXTERNAL_DTD = nullptr;
$String* XMLEntityManager::SYMBOL_TABLE = nullptr;
$String* XMLEntityManager::ERROR_REPORTER = nullptr;
$String* XMLEntityManager::STANDARD_URI_CONFORMANT = nullptr;
$String* XMLEntityManager::ENTITY_RESOLVER = nullptr;
$String* XMLEntityManager::STAX_ENTITY_RESOLVER = nullptr;
$String* XMLEntityManager::VALIDATION_MANAGER = nullptr;
$String* XMLEntityManager::BUFFER_SIZE = nullptr;
$String* XMLEntityManager::SECURITY_MANAGER = nullptr;
$String* XMLEntityManager::PARSER_SETTINGS = nullptr;
$String* XMLEntityManager::XML_SECURITY_PROPERTY_MANAGER = nullptr;
$String* XMLEntityManager::EXTERNAL_ACCESS_DEFAULT = nullptr;
$StringArray* XMLEntityManager::RECOGNIZED_FEATURES = nullptr;
$BooleanArray* XMLEntityManager::FEATURE_DEFAULTS = nullptr;
$StringArray* XMLEntityManager::RECOGNIZED_PROPERTIES = nullptr;
$ObjectArray* XMLEntityManager::PROPERTY_DEFAULTS = nullptr;
$String* XMLEntityManager::XMLEntity = nullptr;
$String* XMLEntityManager::DTDEntity = nullptr;
$String* XMLEntityManager::gUserDir = nullptr;
$URI* XMLEntityManager::gUserDirURI = nullptr;
$booleans* XMLEntityManager::gNeedEscaping = nullptr;
$chars* XMLEntityManager::gAfterEscaping1 = nullptr;
$chars* XMLEntityManager::gAfterEscaping2 = nullptr;
$chars* XMLEntityManager::gHexChs = nullptr;

void XMLEntityManager::init$() {
	this->fAllowJavaEncodings = true;
	this->fLoadExternalDTD = true;
	this->fSupportDTD = true;
	this->fReplaceEntityReferences = true;
	this->fSupportExternalEntities = true;
	$set(this, fAccessExternalDTD, XMLEntityManager::EXTERNAL_ACCESS_DEFAULT);
	this->fBufferSize = XMLEntityManager::DEFAULT_BUFFER_SIZE;
	$set(this, fSecurityManager, nullptr);
	$set(this, fLimitAnalyzer, nullptr);
	this->fInExternalSubset = false;
	this->fEntityExpansionCount = 0;
	$set(this, fEntities, $new($HashMap));
	$set(this, fEntityStack, $new($Stack));
	$set(this, fCurrentEntity, nullptr);
	this->fISCreatedByResolver = false;
	$set(this, defaultEncoding, $new($ObjectArray, {
		$of("UTF-8"_s),
		($Object*)nullptr
	}));
	$set(this, fResourceIdentifier, $new($XMLResourceIdentifierImpl));
	$set(this, fEntityAugs, $new($AugmentationsImpl));
	this->fUseCatalog = true;
	$set(this, fReaderStack, $new($Stack));
	$set(this, fSecurityManager, $new($XMLSecurityManager, true));
	$set(this, fEntityStorage, $new($XMLEntityStorage, this));
	setScannerVersion($Constants::XML_VERSION_1_0);
}

void XMLEntityManager::init$($PropertyManager* propertyManager) {
	this->fAllowJavaEncodings = true;
	this->fLoadExternalDTD = true;
	this->fSupportDTD = true;
	this->fReplaceEntityReferences = true;
	this->fSupportExternalEntities = true;
	$set(this, fAccessExternalDTD, XMLEntityManager::EXTERNAL_ACCESS_DEFAULT);
	this->fBufferSize = XMLEntityManager::DEFAULT_BUFFER_SIZE;
	$set(this, fSecurityManager, nullptr);
	$set(this, fLimitAnalyzer, nullptr);
	this->fInExternalSubset = false;
	this->fEntityExpansionCount = 0;
	$set(this, fEntities, $new($HashMap));
	$set(this, fEntityStack, $new($Stack));
	$set(this, fCurrentEntity, nullptr);
	this->fISCreatedByResolver = false;
	$set(this, defaultEncoding, $new($ObjectArray, {
		$of("UTF-8"_s),
		($Object*)nullptr
	}));
	$set(this, fResourceIdentifier, $new($XMLResourceIdentifierImpl));
	$set(this, fEntityAugs, $new($AugmentationsImpl));
	this->fUseCatalog = true;
	$set(this, fReaderStack, $new($Stack));
	$set(this, fPropertyManager, propertyManager);
	$set(this, fEntityStorage, $new($XMLEntityStorage, this));
	$set(this, fEntityScanner, $new($XMLEntityScanner, propertyManager, this));
	reset(propertyManager);
}

void XMLEntityManager::addInternalEntity($String* name, $String* text) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->fEntities)->containsKey(name)) {
		$var($Entity, entity, $new($Entity$InternalEntity, name, text, this->fInExternalSubset));
		$nc(this->fEntities)->put(name, entity);
	} else if (this->fWarnDuplicateEntityDef) {
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_DUPLICATE_ENTITY_DEFINITION"_s, $$new($ObjectArray, {$of(name)}), $XMLErrorReporter::SEVERITY_WARNING);
	}
}

void XMLEntityManager::addExternalEntity($String* name, $String* publicId, $String* literalSystemId, $String* baseSystemId$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, baseSystemId, baseSystemId$renamed);
	if (!$nc(this->fEntities)->containsKey(name)) {
		if (baseSystemId == nullptr) {
			int32_t size = $nc(this->fEntityStack)->size();
			if (size == 0 && this->fCurrentEntity != nullptr && $nc(this->fCurrentEntity)->entityLocation != nullptr) {
				$assign(baseSystemId, $nc($nc(this->fCurrentEntity)->entityLocation)->getExpandedSystemId());
			}
			for (int32_t i = size - 1; i >= 0; --i) {
				$var($Entity$ScannedEntity, externalEntity, $cast($Entity$ScannedEntity, $nc(this->fEntityStack)->get(i)));
				if ($nc(externalEntity)->entityLocation != nullptr && $nc(externalEntity->entityLocation)->getExpandedSystemId() != nullptr) {
					$assign(baseSystemId, $nc(externalEntity->entityLocation)->getExpandedSystemId());
					break;
				}
			}
		}
		$var($Entity, entity, $new($Entity$ExternalEntity, name, static_cast<$XMLResourceIdentifier*>(static_cast<$XMLResourceIdentifierImpl*>($$new($XMLEntityDescriptionImpl, name, publicId, literalSystemId, baseSystemId, $(expandSystemId(literalSystemId, baseSystemId, false))))), nullptr, this->fInExternalSubset));
		$nc(this->fEntities)->put(name, entity);
	} else if (this->fWarnDuplicateEntityDef) {
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_DUPLICATE_ENTITY_DEFINITION"_s, $$new($ObjectArray, {$of(name)}), $XMLErrorReporter::SEVERITY_WARNING);
	}
}

void XMLEntityManager::addUnparsedEntity($String* name, $String* publicId, $String* systemId, $String* baseSystemId, $String* notation) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->fEntities)->containsKey(name)) {
		$var($Entity$ExternalEntity, entity, $new($Entity$ExternalEntity, name, static_cast<$XMLResourceIdentifier*>(static_cast<$XMLResourceIdentifierImpl*>($$new($XMLEntityDescriptionImpl, name, publicId, systemId, baseSystemId, nullptr))), notation, this->fInExternalSubset));
		$nc(this->fEntities)->put(name, entity);
	} else if (this->fWarnDuplicateEntityDef) {
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_DUPLICATE_ENTITY_DEFINITION"_s, $$new($ObjectArray, {$of(name)}), $XMLErrorReporter::SEVERITY_WARNING);
	}
}

$XMLEntityStorage* XMLEntityManager::getEntityStore() {
	return this->fEntityStorage;
}

$XMLEntityScanner* XMLEntityManager::getEntityScanner() {
	if (this->fEntityScanner == nullptr) {
		if (this->fXML10EntityScanner == nullptr) {
			$set(this, fXML10EntityScanner, $new($XMLEntityScanner));
		}
		$nc(this->fXML10EntityScanner)->reset(this->fSymbolTable, this, this->fErrorReporter);
		$set(this, fEntityScanner, this->fXML10EntityScanner);
	}
	return this->fEntityScanner;
}

void XMLEntityManager::setScannerVersion(int16_t version) {
	if (version == $Constants::XML_VERSION_1_0) {
		if (this->fXML10EntityScanner == nullptr) {
			$set(this, fXML10EntityScanner, $new($XMLEntityScanner));
		}
		$nc(this->fXML10EntityScanner)->reset(this->fSymbolTable, this, this->fErrorReporter);
		$set(this, fEntityScanner, this->fXML10EntityScanner);
		$nc(this->fEntityScanner)->setCurrentEntity(this->fCurrentEntity);
	} else {
		if (this->fXML11EntityScanner == nullptr) {
			$set(this, fXML11EntityScanner, $new($XML11EntityScanner));
		}
		$nc(this->fXML11EntityScanner)->reset(this->fSymbolTable, this, this->fErrorReporter);
		$set(this, fEntityScanner, this->fXML11EntityScanner);
		$nc(this->fEntityScanner)->setCurrentEntity(this->fCurrentEntity);
	}
}

$String* XMLEntityManager::setupCurrentEntity(bool reference, $String* name, $XMLInputSource* xmlInputSource, bool literal, bool isExternal) {
	$useLocalCurrentObjectStackCache();
	$var($String, publicId, $nc(xmlInputSource)->getPublicId());
	$var($String, literalSystemId, xmlInputSource->getSystemId());
	$var($String, baseSystemId, xmlInputSource->getBaseSystemId());
	$var($String, encoding, xmlInputSource->getEncoding());
	bool encodingExternallySpecified = (encoding != nullptr);
	$var($Boolean, isBigEndian, nullptr);
	$var($InputStream, stream, nullptr);
	$var($Reader, reader, xmlInputSource->getCharacterStream());
	$var($String, expandedSystemId, expandSystemId(literalSystemId, baseSystemId, this->fStrictURI));
	if (baseSystemId == nullptr) {
		$assign(baseSystemId, expandedSystemId);
	}
	if (reader == nullptr) {
		$assign(stream, xmlInputSource->getByteStream());
		if (stream == nullptr) {
			$var($URL, location, $new($URL, expandedSystemId));
			$var($URLConnection, connect, location->openConnection());
			if (!($instanceOf($HttpURLConnection, connect))) {
				$assign(stream, $nc(connect)->getInputStream());
			} else {
				bool followRedirects = true;
				if ($instanceOf($HTTPInputSource, xmlInputSource)) {
					$var($HttpURLConnection, urlConnection, $cast($HttpURLConnection, connect));
					$var($HTTPInputSource, httpInputSource, $cast($HTTPInputSource, xmlInputSource));
					$var($Iterator, propIter, httpInputSource->getHTTPRequestProperties());
					while ($nc(propIter)->hasNext()) {
						$var($Map$Entry, entry, $cast($Map$Entry, propIter->next()));
						$var($String, var$0, $cast($String, $nc(entry)->getKey()));
						$nc(urlConnection)->setRequestProperty(var$0, $cast($String, $(entry->getValue())));
					}
					followRedirects = httpInputSource->getFollowHTTPRedirects();
					if (!followRedirects) {
						$nc(urlConnection)->setInstanceFollowRedirects(followRedirects);
					}
				}
				$assign(stream, $nc(connect)->getInputStream());
				if (followRedirects) {
					$var($String, redirect, $nc($(connect->getURL()))->toString());
					if (!$nc(redirect)->equals(expandedSystemId)) {
						$assign(literalSystemId, redirect);
						$assign(expandedSystemId, redirect);
					}
				}
			}
		}
		$var($XMLEntityManager$RewindableInputStream, rewindableStream, $new($XMLEntityManager$RewindableInputStream, this, stream));
		$assign(stream, rewindableStream);
		if (encoding == nullptr) {
			$var($bytes, b4, $new($bytes, 4));
			int32_t count = 0;
			for (; count < 4; ++count) {
				b4->set(count, (int8_t)rewindableStream->readAndBuffer());
			}
			if (count == 4) {
				$var($XMLEntityManager$EncodingInfo, info, getEncodingInfo(b4, count));
				$assign(encoding, $nc(info)->autoDetectedEncoding);
				$var($String, readerEncoding, info->readerEncoding);
				$assign(isBigEndian, info->isBigEndian);
				stream->reset();
				if (info->hasBOM) {
					$init($XMLEntityManager$EncodingInfo);
					if ($nc($XMLEntityManager$EncodingInfo::STR_UTF8)->equals(readerEncoding)) {
						stream->skip(3);
					} else {
						if ($nc($XMLEntityManager$EncodingInfo::STR_UTF16)->equals(readerEncoding)) {
							stream->skip(2);
						}
					}
				}
				$assign(reader, createReader(stream, readerEncoding, isBigEndian));
			} else {
				$assign(reader, createReader(stream, encoding, isBigEndian));
			}
		} else {
			$init($Locale);
			$assign(encoding, encoding->toUpperCase($Locale::ENGLISH));
			$init($XMLEntityManager$EncodingInfo);
			if ($nc($XMLEntityManager$EncodingInfo::STR_UTF8)->equals(encoding)) {
				$var($ints, b3, $new($ints, 3));
				int32_t count = 0;
				for (; count < 3; ++count) {
					b3->set(count, rewindableStream->readAndBuffer());
					if (b3->get(count) == -1) {
						break;
					}
				}
				if (count == 3) {
					if (b3->get(0) != 239 || b3->get(1) != 187 || b3->get(2) != 191) {
						stream->reset();
					}
				} else {
					stream->reset();
				}
			} else {
				if ($nc($XMLEntityManager$EncodingInfo::STR_UTF16)->equals(encoding)) {
					$var($ints, b4, $new($ints, 4));
					int32_t count = 0;
					for (; count < 4; ++count) {
						b4->set(count, rewindableStream->readAndBuffer());
						if (b4->get(count) == -1) {
							break;
						}
					}
					stream->reset();
					if (count >= 2) {
						int32_t b0 = b4->get(0);
						int32_t b1 = b4->get(1);
						if (b0 == 254 && b1 == 255) {
							$init($Boolean);
							$assign(isBigEndian, $Boolean::TRUE);
							stream->skip(2);
						} else if (b0 == 255 && b1 == 254) {
							$init($Boolean);
							$assign(isBigEndian, $Boolean::FALSE);
							stream->skip(2);
						} else if (count == 4) {
							int32_t b2 = b4->get(2);
							int32_t b3 = b4->get(3);
							if (b0 == 0 && b1 == 60 && b2 == 0 && b3 == 63) {
								$init($Boolean);
								$assign(isBigEndian, $Boolean::TRUE);
							}
							if (b0 == 60 && b1 == 0 && b2 == 63 && b3 == 0) {
								$init($Boolean);
								$assign(isBigEndian, $Boolean::FALSE);
							}
						}
					}
				} else {
					if ($nc($XMLEntityManager$EncodingInfo::STR_UCS4)->equals(encoding)) {
						$var($ints, b4, $new($ints, 4));
						int32_t count = 0;
						for (; count < 4; ++count) {
							b4->set(count, rewindableStream->readAndBuffer());
							if (b4->get(count) == -1) {
								break;
							}
						}
						stream->reset();
						if (count == 4) {
							if (b4->get(0) == 0 && b4->get(1) == 0 && b4->get(2) == 0 && b4->get(3) == 60) {
								$init($Boolean);
								$assign(isBigEndian, $Boolean::TRUE);
							} else if (b4->get(0) == 60 && b4->get(1) == 0 && b4->get(2) == 0 && b4->get(3) == 0) {
								$init($Boolean);
								$assign(isBigEndian, $Boolean::FALSE);
							}
						}
					} else {
						if ($nc($XMLEntityManager$EncodingInfo::STR_UCS2)->equals(encoding)) {
							$var($ints, b4, $new($ints, 4));
							int32_t count = 0;
							for (; count < 4; ++count) {
								b4->set(count, rewindableStream->readAndBuffer());
								if (b4->get(count) == -1) {
									break;
								}
							}
							stream->reset();
							if (count == 4) {
								if (b4->get(0) == 0 && b4->get(1) == 60 && b4->get(2) == 0 && b4->get(3) == 63) {
									$init($Boolean);
									$assign(isBigEndian, $Boolean::TRUE);
								} else if (b4->get(0) == 60 && b4->get(1) == 0 && b4->get(2) == 63 && b4->get(3) == 0) {
									$init($Boolean);
									$assign(isBigEndian, $Boolean::FALSE);
								}
							}
						}
					}
				}
			}
			$assign(reader, createReader(stream, encoding, isBigEndian));
		}
	}
	$nc(this->fReaderStack)->push(reader);
	if (this->fCurrentEntity != nullptr) {
		$nc(this->fEntityStack)->push(this->fCurrentEntity);
	}
	$set(this, fCurrentEntity, $new($Entity$ScannedEntity, reference, name, $$new($XMLResourceIdentifierImpl, publicId, literalSystemId, baseSystemId, expandedSystemId), stream, reader, encoding, literal, encodingExternallySpecified, isExternal));
	$nc(this->fCurrentEntity)->setEncodingExternallySpecified(encodingExternallySpecified);
	$nc(this->fEntityScanner)->setCurrentEntity(this->fCurrentEntity);
	$nc(this->fResourceIdentifier)->setValues(publicId, literalSystemId, baseSystemId, expandedSystemId);
	if (this->fLimitAnalyzer != nullptr) {
		$nc(this->fLimitAnalyzer)->startEntity(name);
	}
	return encoding;
}

bool XMLEntityManager::isExternalEntity($String* entityName) {
	$var($Entity, entity, $cast($Entity, $nc(this->fEntities)->get(entityName)));
	if (entity == nullptr) {
		return false;
	}
	return $nc(entity)->isExternal();
}

bool XMLEntityManager::isEntityDeclInExternalSubset($String* entityName) {
	$var($Entity, entity, $cast($Entity, $nc(this->fEntities)->get(entityName)));
	if (entity == nullptr) {
		return false;
	}
	return $nc(entity)->isEntityDeclInExternalSubset();
}

void XMLEntityManager::setStandalone(bool standalone) {
	this->fStandalone = standalone;
}

bool XMLEntityManager::isStandalone() {
	return this->fStandalone;
}

bool XMLEntityManager::isDeclaredEntity($String* entityName) {
	$var($Entity, entity, $cast($Entity, $nc(this->fEntities)->get(entityName)));
	return entity != nullptr;
}

bool XMLEntityManager::isUnparsedEntity($String* entityName) {
	$var($Entity, entity, $cast($Entity, $nc(this->fEntities)->get(entityName)));
	if (entity == nullptr) {
		return false;
	}
	return $nc(entity)->isUnparsed();
}

$XMLResourceIdentifier* XMLEntityManager::getCurrentResourceIdentifier() {
	return this->fResourceIdentifier;
}

void XMLEntityManager::setEntityHandler($XMLEntityHandler* entityHandler) {
	$set(this, fEntityHandler, entityHandler);
}

$StaxXMLInputSource* XMLEntityManager::resolveEntityAsPerStax($XMLResourceIdentifier* resourceIdentifier) {
	$useLocalCurrentObjectStackCache();
	if (resourceIdentifier == nullptr) {
		return nullptr;
	}
	$var($String, publicId, $nc(resourceIdentifier)->getPublicId());
	$var($String, literalSystemId, resourceIdentifier->getLiteralSystemId());
	$var($String, baseSystemId, resourceIdentifier->getBaseSystemId());
	$var($String, expandedSystemId, resourceIdentifier->getExpandedSystemId());
	bool needExpand = (expandedSystemId == nullptr);
	if (baseSystemId == nullptr && this->fCurrentEntity != nullptr && $nc(this->fCurrentEntity)->entityLocation != nullptr) {
		$assign(baseSystemId, $nc($nc(this->fCurrentEntity)->entityLocation)->getExpandedSystemId());
		if (baseSystemId != nullptr) {
			needExpand = true;
		}
	}
	if (needExpand) {
		$assign(expandedSystemId, expandSystemId(literalSystemId, baseSystemId, false));
	}
	$var($StaxXMLInputSource, staxInputSource, nullptr);
	$var($XMLInputSource, xmlInputSource, nullptr);
	$var($XMLResourceIdentifierImpl, ri, nullptr);
	if ($instanceOf($XMLResourceIdentifierImpl, resourceIdentifier)) {
		$assign(ri, $cast($XMLResourceIdentifierImpl, resourceIdentifier));
	} else {
		$nc(this->fResourceIdentifier)->clear();
		$assign(ri, this->fResourceIdentifier);
	}
	$nc(ri)->setValues(publicId, literalSystemId, baseSystemId, expandedSystemId);
	this->fISCreatedByResolver = false;
	if (this->fStaxEntityResolver != nullptr) {
		$assign(staxInputSource, $nc(this->fStaxEntityResolver)->resolveEntity(ri));
		if (staxInputSource != nullptr) {
			this->fISCreatedByResolver = true;
		}
	}
	if (this->fEntityResolver != nullptr) {
		$assign(xmlInputSource, $nc(this->fEntityResolver)->resolveEntity(ri));
		if (xmlInputSource != nullptr) {
			this->fISCreatedByResolver = true;
		}
	}
	if (xmlInputSource != nullptr) {
		$assign(staxInputSource, $new($StaxXMLInputSource, xmlInputSource, this->fISCreatedByResolver));
	}
	if (staxInputSource == nullptr && this->fUseCatalog) {
		if (this->fCatalogFeatures == nullptr) {
			$set(this, fCatalogFeatures, $JdkXmlUtils::getCatalogFeatures(this->fDefer, this->fCatalogFile, this->fPrefer, this->fResolve));
		}
		$init($CatalogFeatures$Feature);
		$set(this, fCatalogFile, $nc(this->fCatalogFeatures)->get($CatalogFeatures$Feature::FILES));
		if (this->fCatalogFile != nullptr) {
			try {
				if (this->fCatalogResolver == nullptr) {
					$set(this, fCatalogResolver, $CatalogManager::catalogResolver(this->fCatalogFeatures, $$new($URIArray, 0)));
				}
				$var($InputSource, is, $nc(this->fCatalogResolver)->resolveEntity(publicId, literalSystemId));
				if (is != nullptr && !is->isEmpty()) {
					$assign(staxInputSource, $new($StaxXMLInputSource, $$new($XMLInputSource, is, true), true));
				}
			} catch ($CatalogException& e) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "CatalogException"_s, $$new($ObjectArray, {$($of($SecuritySupport::sanitizePath(this->fCatalogFile)))}), $XMLErrorReporter::SEVERITY_FATAL_ERROR, static_cast<$Exception*>(e));
			}
		}
	}
	if (staxInputSource == nullptr) {
		$assign(staxInputSource, $new($StaxXMLInputSource, $$new($XMLInputSource, publicId, literalSystemId, baseSystemId, true), false));
	} else if ($nc(staxInputSource)->hasXMLStreamOrXMLEventReader()) {
	}
	return staxInputSource;
}

$XMLInputSource* XMLEntityManager::resolveEntity($XMLResourceIdentifier* resourceIdentifier) {
	$useLocalCurrentObjectStackCache();
	if (resourceIdentifier == nullptr) {
		return nullptr;
	}
	$var($String, publicId, $nc(resourceIdentifier)->getPublicId());
	$var($String, literalSystemId, resourceIdentifier->getLiteralSystemId());
	$var($String, baseSystemId, resourceIdentifier->getBaseSystemId());
	$var($String, expandedSystemId, resourceIdentifier->getExpandedSystemId());
	bool needExpand = (expandedSystemId == nullptr);
	if (baseSystemId == nullptr && this->fCurrentEntity != nullptr && $nc(this->fCurrentEntity)->entityLocation != nullptr) {
		$assign(baseSystemId, $nc($nc(this->fCurrentEntity)->entityLocation)->getExpandedSystemId());
		if (baseSystemId != nullptr) {
			needExpand = true;
		}
	}
	if (needExpand) {
		$assign(expandedSystemId, expandSystemId(literalSystemId, baseSystemId, false));
	}
	$var($XMLInputSource, xmlInputSource, nullptr);
	if (this->fEntityResolver != nullptr) {
		resourceIdentifier->setBaseSystemId(baseSystemId);
		resourceIdentifier->setExpandedSystemId(expandedSystemId);
		$assign(xmlInputSource, $nc(this->fEntityResolver)->resolveEntity(resourceIdentifier));
	}
	if (xmlInputSource == nullptr && this->fUseCatalog) {
		if (this->fCatalogFeatures == nullptr) {
			$set(this, fCatalogFeatures, $JdkXmlUtils::getCatalogFeatures(this->fDefer, this->fCatalogFile, this->fPrefer, this->fResolve));
		}
		$init($CatalogFeatures$Feature);
		$set(this, fCatalogFile, $nc(this->fCatalogFeatures)->get($CatalogFeatures$Feature::FILES));
		if (this->fCatalogFile != nullptr) {
			$var($InputSource, is, nullptr);
			try {
				if (this->fCatalogResolver == nullptr) {
					$set(this, fCatalogResolver, $CatalogManager::catalogResolver(this->fCatalogFeatures, $$new($URIArray, 0)));
				}
				$var($String, pid, publicId != nullptr ? publicId : resourceIdentifier->getNamespace());
				if (pid != nullptr || literalSystemId != nullptr) {
					$assign(is, $nc(this->fCatalogResolver)->resolveEntity(pid, literalSystemId));
				}
			} catch ($CatalogException& e) {
			}
			if (is != nullptr && !is->isEmpty()) {
				$assign(xmlInputSource, $new($XMLInputSource, is, true));
			} else if (literalSystemId != nullptr) {
				if (this->fCatalogResolver == nullptr) {
					$set(this, fCatalogResolver, $CatalogManager::catalogResolver(this->fCatalogFeatures, $$new($URIArray, 0)));
				}
				$var($Source, source, nullptr);
				try {
					$assign(source, $nc(this->fCatalogResolver)->resolve(literalSystemId, baseSystemId));
				} catch ($CatalogException& e) {
					$throwNew($XNIException, static_cast<$Exception*>(e));
				}
				if (source != nullptr && !source->isEmpty()) {
					$assign(xmlInputSource, $new($XMLInputSource, publicId, $(source->getSystemId()), baseSystemId, true));
				}
			}
		}
	}
	if (xmlInputSource == nullptr) {
		$assign(xmlInputSource, $new($XMLInputSource, publicId, literalSystemId, baseSystemId, false));
	}
	return xmlInputSource;
}

void XMLEntityManager::startEntity(bool isGE, $String* entityName, bool literal) {
	$useLocalCurrentObjectStackCache();
	$var($Entity, entity, $nc(this->fEntityStorage)->getEntity(entityName));
	if (entity == nullptr) {
		if (this->fEntityHandler != nullptr) {
			$var($String, encoding, nullptr);
			$nc(this->fResourceIdentifier)->clear();
			$nc(this->fEntityAugs)->removeAllItems();
			$init($Constants);
			$init($Boolean);
			$nc(this->fEntityAugs)->putItem($Constants::ENTITY_SKIPPED, $Boolean::TRUE);
			$nc(this->fEntityHandler)->startEntity(entityName, this->fResourceIdentifier, encoding, this->fEntityAugs);
			$nc(this->fEntityAugs)->removeAllItems();
			$nc(this->fEntityAugs)->putItem($Constants::ENTITY_SKIPPED, $Boolean::TRUE);
			$nc(this->fEntityHandler)->endEntity(entityName, this->fEntityAugs);
		}
		return;
	}
	bool external = $nc(entity)->isExternal();
	$var($Entity$ExternalEntity, externalEntity, nullptr);
	$var($String, extLitSysId, nullptr);
	$var($String, extBaseSysId, nullptr);
	$var($String, expandedSystemId, nullptr);
	if (external) {
		$assign(externalEntity, $cast($Entity$ExternalEntity, entity));
		$assign(extLitSysId, externalEntity->entityLocation != nullptr ? $nc(externalEntity->entityLocation)->getLiteralSystemId() : ($String*)nullptr);
		$assign(extBaseSysId, externalEntity->entityLocation != nullptr ? $nc(externalEntity->entityLocation)->getBaseSystemId() : ($String*)nullptr);
		$assign(expandedSystemId, expandSystemId(extLitSysId, extBaseSysId));
		bool unparsed = entity->isUnparsed();
		bool parameter = $nc(entityName)->startsWith("%"_s);
		bool general = !parameter;
		if (unparsed || (general && !this->fExternalGeneralEntities) || (parameter && !this->fExternalParameterEntities) || !this->fSupportDTD || !this->fSupportExternalEntities) {
			if (this->fEntityHandler != nullptr) {
				$nc(this->fResourceIdentifier)->clear();
				$var($String, encoding, nullptr);
				$nc(this->fResourceIdentifier)->setValues((externalEntity->entityLocation != nullptr ? $($nc(externalEntity->entityLocation)->getPublicId()) : ($String*)nullptr), extLitSysId, extBaseSysId, expandedSystemId);
				$nc(this->fEntityAugs)->removeAllItems();
				$init($Constants);
				$init($Boolean);
				$nc(this->fEntityAugs)->putItem($Constants::ENTITY_SKIPPED, $Boolean::TRUE);
				$nc(this->fEntityHandler)->startEntity(entityName, this->fResourceIdentifier, encoding, this->fEntityAugs);
				$nc(this->fEntityAugs)->removeAllItems();
				$nc(this->fEntityAugs)->putItem($Constants::ENTITY_SKIPPED, $Boolean::TRUE);
				$nc(this->fEntityHandler)->endEntity(entityName, this->fEntityAugs);
			}
			return;
		}
	}
	int32_t size = $nc(this->fEntityStack)->size();
	for (int32_t i = size; i >= 0; --i) {
		$var($Entity, activeEntity, i == size ? static_cast<$Entity*>(this->fCurrentEntity) : $cast($Entity, $nc(this->fEntityStack)->get(i)));
		if ($nc(activeEntity)->name == entityName) {
			$var($String, path, entityName);
			for (int32_t j = i + 1; j < size; ++j) {
				$assign(activeEntity, $cast($Entity, $nc(this->fEntityStack)->get(j)));
				$assign(path, $str({path, " -> "_s, $nc(activeEntity)->name}));
			}
			$assign(path, $str({path, " -> "_s, $nc(this->fCurrentEntity)->name}));
			$assign(path, $str({path, " -> "_s, entityName}));
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($(static_cast<$XMLLocator*>(this->getEntityScanner())), $XMLMessageFormatter::XML_DOMAIN, "RecursiveReference"_s, $$new($ObjectArray, {
				$of(entityName),
				$of(path)
			}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			if (this->fEntityHandler != nullptr) {
				$nc(this->fResourceIdentifier)->clear();
				$var($String, encoding, nullptr);
				if (external) {
					$nc(this->fResourceIdentifier)->setValues(($nc(externalEntity)->entityLocation != nullptr ? $($nc($nc(externalEntity)->entityLocation)->getPublicId()) : ($String*)nullptr), extLitSysId, extBaseSysId, expandedSystemId);
				}
				$nc(this->fEntityAugs)->removeAllItems();
				$init($Constants);
				$init($Boolean);
				$nc(this->fEntityAugs)->putItem($Constants::ENTITY_SKIPPED, $Boolean::TRUE);
				$nc(this->fEntityHandler)->startEntity(entityName, this->fResourceIdentifier, encoding, this->fEntityAugs);
				$nc(this->fEntityAugs)->removeAllItems();
				$nc(this->fEntityAugs)->putItem($Constants::ENTITY_SKIPPED, $Boolean::TRUE);
				$nc(this->fEntityHandler)->endEntity(entityName, this->fEntityAugs);
			}
			return;
		}
	}
	$var($StaxXMLInputSource, staxInputSource, nullptr);
	$var($XMLInputSource, xmlInputSource, nullptr);
	if (external) {
		$assign(staxInputSource, resolveEntityAsPerStax($nc(externalEntity)->entityLocation));
		$assign(xmlInputSource, $nc(staxInputSource)->getXMLInputSource());
		if (!this->fISCreatedByResolver) {
			if (this->fLoadExternalDTD) {
				$init($JdkConstants);
				$var($String, accessError, $SecuritySupport::checkAccess(expandedSystemId, this->fAccessExternalDTD, $JdkConstants::ACCESS_EXTERNAL_ALL));
				if (accessError != nullptr) {
					$var($XMLLocator, var$0, static_cast<$XMLLocator*>(this->getEntityScanner()));
					$init($XMLMessageFormatter);
					$var($String, var$1, $XMLMessageFormatter::XML_DOMAIN);
					$var($String, var$2, "AccessExternalEntity"_s);
					$nc(this->fErrorReporter)->reportError(var$0, var$1, var$2, $$new($ObjectArray, {
						$($of($SecuritySupport::sanitizePath(expandedSystemId))),
						$of(accessError)
					}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				}
			}
		}
	} else {
		$var($Entity$InternalEntity, internalEntity, $cast($Entity$InternalEntity, entity));
		$var($Reader, reader, $new($StringReader, internalEntity->text));
		$assign(xmlInputSource, $new($XMLInputSource, ($String*)nullptr, ($String*)nullptr, ($String*)nullptr, reader, ($String*)nullptr));
	}
	startEntity(isGE, entityName, xmlInputSource, literal, external);
}

void XMLEntityManager::startDocumentEntity($XMLInputSource* xmlInputSource) {
	startEntity(false, XMLEntityManager::XMLEntity, xmlInputSource, false, true);
}

void XMLEntityManager::startDTDEntity($XMLInputSource* xmlInputSource) {
	startEntity(false, XMLEntityManager::DTDEntity, xmlInputSource, false, true);
}

void XMLEntityManager::startExternalSubset() {
	this->fInExternalSubset = true;
}

void XMLEntityManager::endExternalSubset() {
	this->fInExternalSubset = false;
}

void XMLEntityManager::startEntity(bool isGE, $String* name, $XMLInputSource* xmlInputSource, bool literal, bool isExternal) {
	$useLocalCurrentObjectStackCache();
	$var($String, encoding, setupCurrentEntity(isGE, name, xmlInputSource, literal, isExternal));
	++this->fEntityExpansionCount;
	if (this->fLimitAnalyzer != nullptr) {
		$nc(this->fLimitAnalyzer)->addValue(this->entityExpansionIndex, name, 1);
	}
	if (this->fSecurityManager != nullptr && $nc(this->fSecurityManager)->isOverLimit(this->entityExpansionIndex, this->fLimitAnalyzer)) {
		$nc(this->fSecurityManager)->debugPrint(this->fLimitAnalyzer);
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "EntityExpansionLimit"_s, $$new($ObjectArray, {$($of($nc(this->fSecurityManager)->getLimitValueByIndex(this->entityExpansionIndex)))}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
		this->fEntityExpansionCount = 0;
	}
	if (this->fEntityHandler != nullptr) {
		$nc(this->fEntityHandler)->startEntity(name, this->fResourceIdentifier, encoding, nullptr);
	}
}

$Entity$ScannedEntity* XMLEntityManager::getCurrentEntity() {
	return this->fCurrentEntity;
}

$Entity$ScannedEntity* XMLEntityManager::getTopLevelEntity() {
	return ($cast($Entity$ScannedEntity, ($nc(this->fEntityStack)->empty() ? ($Entity*)nullptr : $cast($Entity, $nc(this->fEntityStack)->get(0)))));
}

void XMLEntityManager::closeReaders() {
	$useLocalCurrentObjectStackCache();
	while (!$nc(this->fReaderStack)->isEmpty()) {
		try {
			$nc(($cast($Reader, $($nc(this->fReaderStack)->pop()))))->close();
		} catch ($IOException& e) {
		}
	}
}

void XMLEntityManager::endEntity() {
	$var($Entity$ScannedEntity, entity, $nc(this->fEntityStack)->size() > 0 ? $cast($Entity$ScannedEntity, $nc(this->fEntityStack)->pop()) : ($Entity$ScannedEntity*)nullptr);
	if (this->fCurrentEntity != nullptr) {
		try {
			if (this->fLimitAnalyzer != nullptr) {
				$init($XMLSecurityManager$Limit);
				$nc(this->fLimitAnalyzer)->endEntity($XMLSecurityManager$Limit::GENERAL_ENTITY_SIZE_LIMIT, $nc(this->fCurrentEntity)->name);
				if ($nc($nc(this->fCurrentEntity)->name)->equals("[xml]"_s)) {
					$nc(this->fSecurityManager)->debugPrint(this->fLimitAnalyzer);
				}
			}
			$nc(this->fCurrentEntity)->close();
		} catch ($IOException& ex) {
			$throwNew($XNIException, static_cast<$Exception*>(ex));
		}
	}
	if (!$nc(this->fReaderStack)->isEmpty()) {
		$nc(this->fReaderStack)->pop();
	}
	if (this->fEntityHandler != nullptr) {
		if (entity == nullptr) {
			$nc(this->fEntityAugs)->removeAllItems();
			$init($Constants);
			$init($Boolean);
			$nc(this->fEntityAugs)->putItem($Constants::LAST_ENTITY, $Boolean::TRUE);
			$nc(this->fEntityHandler)->endEntity($nc(this->fCurrentEntity)->name, this->fEntityAugs);
			$nc(this->fEntityAugs)->removeAllItems();
		} else {
			$nc(this->fEntityHandler)->endEntity($nc(this->fCurrentEntity)->name, nullptr);
		}
	}
	bool documentEntity = $nc(this->fCurrentEntity)->name == XMLEntityManager::XMLEntity;
	$set(this, fCurrentEntity, entity);
	$nc(this->fEntityScanner)->setCurrentEntity(this->fCurrentEntity);
	if ((this->fCurrentEntity == nullptr) & !documentEntity) {
		$throwNew($EOFException);
	}
}

void XMLEntityManager::reset($PropertyManager* propertyManager) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$set(this, fSymbolTable, $cast($SymbolTable, $nc(propertyManager)->getProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}))));
	$set(this, fErrorReporter, $cast($XMLErrorReporter, propertyManager->getProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}))));
	try {
		$set(this, fStaxEntityResolver, $cast($StaxEntityResolverWrapper, propertyManager->getProperty(XMLEntityManager::STAX_ENTITY_RESOLVER)));
	} catch ($XMLConfigurationException& e) {
		$set(this, fStaxEntityResolver, nullptr);
	}
	$init($XMLInputFactory);
	this->fSupportDTD = $nc(($cast($Boolean, $(propertyManager->getProperty($XMLInputFactory::SUPPORT_DTD)))))->booleanValue();
	this->fReplaceEntityReferences = $nc(($cast($Boolean, $(propertyManager->getProperty($XMLInputFactory::IS_REPLACING_ENTITY_REFERENCES)))))->booleanValue();
	this->fSupportExternalEntities = $nc(($cast($Boolean, $(propertyManager->getProperty($XMLInputFactory::IS_SUPPORTING_EXTERNAL_ENTITIES)))))->booleanValue();
	this->fLoadExternalDTD = !$nc(($cast($Boolean, $(propertyManager->getProperty($$str({$Constants::ZEPHYR_PROPERTY_PREFIX, $Constants::IGNORE_EXTERNAL_DTD}))))))->booleanValue();
	$init($XMLConstants);
	this->fUseCatalog = $nc(($cast($Boolean, $(propertyManager->getProperty($XMLConstants::USE_CATALOG)))))->booleanValue();
	$init($JdkXmlUtils);
	$set(this, fCatalogFile, $cast($String, propertyManager->getProperty($JdkXmlUtils::CATALOG_FILES)));
	$set(this, fDefer, $cast($String, propertyManager->getProperty($JdkXmlUtils::CATALOG_DEFER)));
	$set(this, fPrefer, $cast($String, propertyManager->getProperty($JdkXmlUtils::CATALOG_PREFER)));
	$set(this, fResolve, $cast($String, propertyManager->getProperty($JdkXmlUtils::CATALOG_RESOLVE)));
	$var($XMLSecurityPropertyManager, spm, $cast($XMLSecurityPropertyManager, propertyManager->getProperty(XMLEntityManager::XML_SECURITY_PROPERTY_MANAGER)));
	$init($XMLSecurityPropertyManager$Property);
	$set(this, fAccessExternalDTD, $nc(spm)->getValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD));
	$set(this, fSecurityManager, $cast($XMLSecurityManager, propertyManager->getProperty(XMLEntityManager::SECURITY_MANAGER)));
	$set(this, fLimitAnalyzer, $new($XMLLimitAnalyzer));
	$nc(this->fEntityStorage)->reset(propertyManager);
	$nc(this->fEntityScanner)->reset(propertyManager);
	$nc(this->fEntities)->clear();
	$nc(this->fEntityStack)->removeAllElements();
	$set(this, fCurrentEntity, nullptr);
	this->fValidation = false;
	this->fExternalGeneralEntities = true;
	this->fExternalParameterEntities = true;
	this->fAllowJavaEncodings = true;
}

void XMLEntityManager::reset($XMLComponentManager* componentManager) {
	bool parser_settings = $nc(componentManager)->getFeature(XMLEntityManager::PARSER_SETTINGS, true);
	if (!parser_settings) {
		reset();
		if (this->fEntityScanner != nullptr) {
			$nc(this->fEntityScanner)->reset(componentManager);
		}
		if (this->fEntityStorage != nullptr) {
			$nc(this->fEntityStorage)->reset(componentManager);
		}
		return;
	}
	this->fValidation = componentManager->getFeature(XMLEntityManager::VALIDATION, false);
	this->fExternalGeneralEntities = componentManager->getFeature(XMLEntityManager::EXTERNAL_GENERAL_ENTITIES, true);
	this->fExternalParameterEntities = componentManager->getFeature(XMLEntityManager::EXTERNAL_PARAMETER_ENTITIES, true);
	this->fAllowJavaEncodings = componentManager->getFeature(XMLEntityManager::ALLOW_JAVA_ENCODINGS, false);
	this->fWarnDuplicateEntityDef = componentManager->getFeature(XMLEntityManager::WARN_ON_DUPLICATE_ENTITYDEF, false);
	this->fStrictURI = componentManager->getFeature(XMLEntityManager::STANDARD_URI_CONFORMANT, false);
	this->fLoadExternalDTD = componentManager->getFeature(XMLEntityManager::LOAD_EXTERNAL_DTD, true);
	$set(this, fSymbolTable, $cast($SymbolTable, componentManager->getProperty(XMLEntityManager::SYMBOL_TABLE)));
	$set(this, fErrorReporter, $cast($XMLErrorReporter, componentManager->getProperty(XMLEntityManager::ERROR_REPORTER)));
	$set(this, fEntityResolver, $cast($XMLEntityResolver, componentManager->getProperty(XMLEntityManager::ENTITY_RESOLVER, nullptr)));
	$set(this, fStaxEntityResolver, $cast($StaxEntityResolverWrapper, componentManager->getProperty(XMLEntityManager::STAX_ENTITY_RESOLVER, nullptr)));
	$set(this, fValidationManager, $cast($ValidationManager, componentManager->getProperty(XMLEntityManager::VALIDATION_MANAGER, nullptr)));
	$set(this, fSecurityManager, $cast($XMLSecurityManager, componentManager->getProperty(XMLEntityManager::SECURITY_MANAGER, nullptr)));
	$init($JdkConstants);
	this->entityExpansionIndex = $nc(this->fSecurityManager)->getIndex($JdkConstants::SP_ENTITY_EXPANSION_LIMIT);
	this->fSupportDTD = true;
	this->fReplaceEntityReferences = true;
	this->fSupportExternalEntities = true;
	$var($XMLSecurityPropertyManager, spm, $cast($XMLSecurityPropertyManager, componentManager->getProperty(XMLEntityManager::XML_SECURITY_PROPERTY_MANAGER, nullptr)));
	if (spm == nullptr) {
		$assign(spm, $new($XMLSecurityPropertyManager));
	}
	$init($XMLSecurityPropertyManager$Property);
	$set(this, fAccessExternalDTD, $nc(spm)->getValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD));
	$init($XMLConstants);
	this->fUseCatalog = componentManager->getFeature($XMLConstants::USE_CATALOG, true);
	$init($JdkXmlUtils);
	$set(this, fCatalogFile, $cast($String, componentManager->getProperty($JdkXmlUtils::CATALOG_FILES)));
	$set(this, fDefer, $cast($String, componentManager->getProperty($JdkXmlUtils::CATALOG_DEFER)));
	$set(this, fPrefer, $cast($String, componentManager->getProperty($JdkXmlUtils::CATALOG_PREFER)));
	$set(this, fResolve, $cast($String, componentManager->getProperty($JdkXmlUtils::CATALOG_RESOLVE)));
	reset();
	$nc(this->fEntityScanner)->reset(componentManager);
	$nc(this->fEntityStorage)->reset(componentManager);
}

void XMLEntityManager::reset() {
	$set(this, fLimitAnalyzer, $new($XMLLimitAnalyzer));
	this->fStandalone = false;
	$nc(this->fEntities)->clear();
	$nc(this->fEntityStack)->removeAllElements();
	this->fEntityExpansionCount = 0;
	$set(this, fCurrentEntity, nullptr);
	if (this->fXML10EntityScanner != nullptr) {
		$nc(this->fXML10EntityScanner)->reset(this->fSymbolTable, this, this->fErrorReporter);
	}
	if (this->fXML11EntityScanner != nullptr) {
		$nc(this->fXML11EntityScanner)->reset(this->fSymbolTable, this, this->fErrorReporter);
	}
	$set(this, fEntityHandler, nullptr);
}

$StringArray* XMLEntityManager::getRecognizedFeatures() {
	return $cast($StringArray, $nc(XMLEntityManager::RECOGNIZED_FEATURES)->clone());
}

void XMLEntityManager::setFeature($String* featureId, bool state) {
	$init($Constants);
	if ($nc(featureId)->startsWith($Constants::XERCES_FEATURE_PREFIX)) {
		int32_t var$0 = featureId->length();
		int32_t suffixLength = var$0 - $nc($Constants::XERCES_FEATURE_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::ALLOW_JAVA_ENCODINGS_FEATURE)->length();
		if (var$1 && featureId->endsWith($Constants::ALLOW_JAVA_ENCODINGS_FEATURE)) {
			this->fAllowJavaEncodings = state;
		}
		bool var$2 = suffixLength == $nc($Constants::LOAD_EXTERNAL_DTD_FEATURE)->length();
		if (var$2 && featureId->endsWith($Constants::LOAD_EXTERNAL_DTD_FEATURE)) {
			this->fLoadExternalDTD = state;
			return;
		}
	} else {
		$init($XMLConstants);
		if (featureId->equals($XMLConstants::USE_CATALOG)) {
			this->fUseCatalog = state;
		}
	}
}

void XMLEntityManager::setProperty($String* propertyId, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	if ($nc(propertyId)->startsWith($Constants::XERCES_PROPERTY_PREFIX)) {
		int32_t var$0 = propertyId->length();
		int32_t suffixLength = var$0 - $nc($Constants::XERCES_PROPERTY_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::SYMBOL_TABLE_PROPERTY)->length();
		if (var$1 && propertyId->endsWith($Constants::SYMBOL_TABLE_PROPERTY)) {
			$set(this, fSymbolTable, $cast($SymbolTable, value));
			return;
		}
		bool var$2 = suffixLength == $nc($Constants::ERROR_REPORTER_PROPERTY)->length();
		if (var$2 && propertyId->endsWith($Constants::ERROR_REPORTER_PROPERTY)) {
			$set(this, fErrorReporter, $cast($XMLErrorReporter, value));
			return;
		}
		bool var$3 = suffixLength == $nc($Constants::ENTITY_RESOLVER_PROPERTY)->length();
		if (var$3 && propertyId->endsWith($Constants::ENTITY_RESOLVER_PROPERTY)) {
			$set(this, fEntityResolver, $cast($XMLEntityResolver, value));
			return;
		}
		bool var$4 = suffixLength == $nc($Constants::BUFFER_SIZE_PROPERTY)->length();
		if (var$4 && propertyId->endsWith($Constants::BUFFER_SIZE_PROPERTY)) {
			$var($Integer, bufferSize, $cast($Integer, value));
			if (bufferSize != nullptr && bufferSize->intValue() > XMLEntityManager::DEFAULT_XMLDECL_BUFFER_SIZE) {
				this->fBufferSize = bufferSize->intValue();
				$nc(this->fEntityScanner)->setBufferSize(this->fBufferSize);
			}
		}
		bool var$5 = suffixLength == $nc($Constants::SECURITY_MANAGER_PROPERTY)->length();
		if (var$5 && propertyId->endsWith($Constants::SECURITY_MANAGER_PROPERTY)) {
			$set(this, fSecurityManager, $cast($XMLSecurityManager, value));
		}
	}
	if ($nc(propertyId)->equals(XMLEntityManager::XML_SECURITY_PROPERTY_MANAGER)) {
		$var($XMLSecurityPropertyManager, spm, $cast($XMLSecurityPropertyManager, value));
		$init($XMLSecurityPropertyManager$Property);
		$set(this, fAccessExternalDTD, $nc(spm)->getValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD));
		return;
	}
	$init($JdkXmlUtils);
	if ($nc(propertyId)->equals($JdkXmlUtils::CATALOG_FILES)) {
		$set(this, fCatalogFile, $cast($String, value));
	} else {
		if (propertyId->equals($JdkXmlUtils::CATALOG_DEFER)) {
			$set(this, fDefer, $cast($String, value));
		} else {
			if (propertyId->equals($JdkXmlUtils::CATALOG_PREFER)) {
				$set(this, fPrefer, $cast($String, value));
			} else {
				if (propertyId->equals($JdkXmlUtils::CATALOG_RESOLVE)) {
					$set(this, fResolve, $cast($String, value));
				}
			}
		}
	}
}

void XMLEntityManager::setLimitAnalyzer($XMLLimitAnalyzer* fLimitAnalyzer) {
	$set(this, fLimitAnalyzer, fLimitAnalyzer);
}

$StringArray* XMLEntityManager::getRecognizedProperties() {
	return $cast($StringArray, $nc(XMLEntityManager::RECOGNIZED_PROPERTIES)->clone());
}

$Boolean* XMLEntityManager::getFeatureDefault($String* featureId) {
	for (int32_t i = 0; i < $nc(XMLEntityManager::RECOGNIZED_FEATURES)->length; ++i) {
		if ($nc($nc(XMLEntityManager::RECOGNIZED_FEATURES)->get(i))->equals(featureId)) {
			return $nc(XMLEntityManager::FEATURE_DEFAULTS)->get(i);
		}
	}
	return nullptr;
}

$Object* XMLEntityManager::getPropertyDefault($String* propertyId) {
	for (int32_t i = 0; i < $nc(XMLEntityManager::RECOGNIZED_PROPERTIES)->length; ++i) {
		if ($nc($nc(XMLEntityManager::RECOGNIZED_PROPERTIES)->get(i))->equals(propertyId)) {
			return $of($nc(XMLEntityManager::PROPERTY_DEFAULTS)->get(i));
		}
	}
	return $of(nullptr);
}

$String* XMLEntityManager::expandSystemId($String* systemId) {
	$init(XMLEntityManager);
	return expandSystemId(systemId, nullptr);
}

$URI* XMLEntityManager::getUserDir() {
	$load(XMLEntityManager);
	$synchronized(class$) {
		$init(XMLEntityManager);
		$useLocalCurrentObjectStackCache();
		$var($String, userDir, ""_s);
		try {
			$assign(userDir, $SecuritySupport::getSystemProperty("user.dir"_s));
		} catch ($SecurityException& se) {
		}
		if (userDir->length() == 0) {
			return $new($URI, "file"_s, ""_s, ""_s, nullptr, nullptr);
		}
		if (XMLEntityManager::gUserDirURI != nullptr && userDir->equals(XMLEntityManager::gUserDir)) {
			return XMLEntityManager::gUserDirURI;
		}
		$assignStatic(XMLEntityManager::gUserDir, userDir);
		$init($File);
		char16_t separator = $File::separatorChar;
		$assign(userDir, userDir->replace(separator, u'/'));
		int32_t len = userDir->length();
		int32_t ch = 0;
		$var($StringBuilder, buffer, $new($StringBuilder, len * 3));
		if (len >= 2 && userDir->charAt(1) == u':') {
			ch = $Character::toUpperCase(userDir->charAt(0));
			if (ch >= u'A' && ch <= u'Z') {
				buffer->append(u'/');
			}
		}
		int32_t i = 0;
		for (; i < len; ++i) {
			ch = userDir->charAt(i);
			if (ch >= 128) {
				break;
			}
			if ($nc(XMLEntityManager::gNeedEscaping)->get(ch)) {
				buffer->append(u'%');
				buffer->append($nc(XMLEntityManager::gAfterEscaping1)->get(ch));
				buffer->append($nc(XMLEntityManager::gAfterEscaping2)->get(ch));
			} else {
				buffer->append((char16_t)ch);
			}
		}
		if (i < len) {
			$var($bytes, bytes, nullptr);
			int8_t b = 0;
			try {
				$assign(bytes, $(userDir->substring(i))->getBytes("UTF-8"_s));
			} catch ($UnsupportedEncodingException& e) {
				return $new($URI, "file"_s, ""_s, userDir, nullptr, nullptr);
			}
			len = $nc(bytes)->length;
			for (i = 0; i < len; ++i) {
				b = bytes->get(i);
				if (b < 0) {
					ch = b + 256;
					buffer->append(u'%');
					buffer->append($nc(XMLEntityManager::gHexChs)->get(ch >> 4));
					buffer->append($nc(XMLEntityManager::gHexChs)->get((int32_t)(ch & (uint32_t)15)));
				} else {
					if ($nc(XMLEntityManager::gNeedEscaping)->get(b)) {
						buffer->append(u'%');
						buffer->append($nc(XMLEntityManager::gAfterEscaping1)->get(b));
						buffer->append($nc(XMLEntityManager::gAfterEscaping2)->get(b));
					} else {
						buffer->append((char16_t)b);
					}
				}
			}
		}
		if (!userDir->endsWith("/"_s)) {
			buffer->append(u'/');
		}
		$assignStatic(XMLEntityManager::gUserDirURI, $new($URI, "file"_s, ""_s, $(buffer->toString()), nullptr, nullptr));
		return XMLEntityManager::gUserDirURI;
	}
}

$OutputStream* XMLEntityManager::createOutputStream($String* uri) {
	$init(XMLEntityManager);
	$useLocalCurrentObjectStackCache();
	$var($String, expanded, XMLEntityManager::expandSystemId(uri, nullptr, true));
	$var($URL, url, $new($URL, expanded != nullptr ? expanded : uri));
	$var($OutputStream, out, nullptr);
	$var($String, protocol, url->getProtocol());
	$var($String, host, url->getHost());
	bool var$0 = $nc(protocol)->equals("file"_s);
	if (var$0) {
		bool var$1 = host == nullptr || $nc(host)->length() == 0;
		var$0 = (var$1 || $nc(host)->equals("localhost"_s));
	}
	if (var$0) {
		$var($File, file, $new($File, $(getPathWithoutEscapes($(url->getPath())))));
		if (!file->exists()) {
			$var($File, parent, file->getParentFile());
			if (parent != nullptr && !parent->exists()) {
				parent->mkdirs();
			}
		}
		$assign(out, $new($FileOutputStream, file));
	} else {
		$var($URLConnection, urlCon, url->openConnection());
		$nc(urlCon)->setDoInput(false);
		urlCon->setDoOutput(true);
		urlCon->setUseCaches(false);
		if ($instanceOf($HttpURLConnection, urlCon)) {
			$var($HttpURLConnection, httpCon, $cast($HttpURLConnection, urlCon));
			httpCon->setRequestMethod("PUT"_s);
		}
		$assign(out, urlCon->getOutputStream());
	}
	return out;
}

$String* XMLEntityManager::getPathWithoutEscapes($String* origPath) {
	$init(XMLEntityManager);
	$useLocalCurrentObjectStackCache();
	bool var$0 = origPath != nullptr && origPath->length() != 0;
	if (var$0 && origPath->indexOf((int32_t)u'%') != -1) {
		$var($StringTokenizer, tokenizer, $new($StringTokenizer, origPath, "%"_s));
		$var($StringBuilder, result, $new($StringBuilder, origPath->length()));
		int32_t size = tokenizer->countTokens();
		result->append($(tokenizer->nextToken()));
		for (int32_t i = 1; i < size; ++i) {
			$var($String, token, tokenizer->nextToken());
			result->append((char16_t)$nc($($Integer::valueOf($($nc(token)->substring(0, 2)), 16)))->intValue());
			result->append($($nc(token)->substring(2)));
		}
		return result->toString();
	}
	return origPath;
}

void XMLEntityManager::absolutizeAgainstUserDir($URI* uri) {
	$init(XMLEntityManager);
	$nc(uri)->absolutize($(getUserDir()));
}

$String* XMLEntityManager::expandSystemId($String* systemId, $String* baseSystemId) {
	$init(XMLEntityManager);
	$useLocalCurrentObjectStackCache();
	if (systemId == nullptr || $nc(systemId)->length() == 0) {
		return systemId;
	}
	try {
		$var($URI, uri, $new($URI, systemId));
		if (uri != nullptr) {
			return systemId;
		}
	} catch ($URI$MalformedURIException& e) {
	}
	$var($String, id, fixURI(systemId));
	$var($URI, base, nullptr);
	$var($URI, uri, nullptr);
	try {
		bool var$0 = baseSystemId == nullptr || $nc(baseSystemId)->length() == 0;
		if (var$0 || $nc(baseSystemId)->equals(systemId)) {
			$var($String, dir, $nc($(getUserDir()))->toString());
			$assign(base, $new($URI, "file"_s, ""_s, dir, nullptr, nullptr));
		} else {
			try {
				$assign(base, $new($URI, $(fixURI(baseSystemId))));
			} catch ($URI$MalformedURIException& e) {
				if (baseSystemId->indexOf((int32_t)u':') != -1) {
					$assign(base, $new($URI, "file"_s, ""_s, $(fixURI(baseSystemId)), nullptr, nullptr));
				} else {
					$var($String, dir, $nc($(getUserDir()))->toString());
					$assign(dir, $str({dir, $(fixURI(baseSystemId))}));
					$assign(base, $new($URI, "file"_s, ""_s, dir, nullptr, nullptr));
				}
			}
		}
		$assign(uri, $new($URI, base, id));
	} catch ($Exception& e) {
	}
	if (uri == nullptr) {
		return systemId;
	}
	return $nc(uri)->toString();
}

$String* XMLEntityManager::expandSystemId($String* systemId, $String* baseSystemId, bool strict) {
	$init(XMLEntityManager);
	$useLocalCurrentObjectStackCache();
	if (systemId == nullptr) {
		return nullptr;
	}
	if (strict) {
		try {
			$new($URI, systemId);
			return systemId;
		} catch ($URI$MalformedURIException& ex) {
		}
		$var($URI, base, nullptr);
		if (baseSystemId == nullptr || $nc(baseSystemId)->length() == 0) {
			$assign(base, $new($URI, "file"_s, ""_s, $($nc($(getUserDir()))->toString()), nullptr, nullptr));
		} else {
			try {
				$assign(base, $new($URI, baseSystemId));
			} catch ($URI$MalformedURIException& e) {
				$var($String, dir, $nc($(getUserDir()))->toString());
				$assign(dir, $str({dir, baseSystemId}));
				$assign(base, $new($URI, "file"_s, ""_s, dir, nullptr, nullptr));
			}
		}
		$var($URI, uri, $new($URI, base, systemId));
		return uri->toString();
	}
	try {
		return expandSystemIdStrictOff(systemId, baseSystemId);
	} catch ($URI$MalformedURIException& e) {
		try {
			return expandSystemIdStrictOff1(systemId, baseSystemId);
		} catch ($URISyntaxException& ex) {
		}
	}
	if ($nc(systemId)->length() == 0) {
		return systemId;
	}
	$var($String, id, fixURI(systemId));
	$var($URI, base, nullptr);
	$var($URI, uri, nullptr);
	try {
		bool var$0 = baseSystemId == nullptr || $nc(baseSystemId)->length() == 0;
		if (var$0 || $nc(baseSystemId)->equals(systemId)) {
			$assign(base, getUserDir());
		} else {
			try {
				$assign(base, $new($URI, $($nc($(fixURI(baseSystemId)))->trim())));
			} catch ($URI$MalformedURIException& e) {
				if (baseSystemId->indexOf((int32_t)u':') != -1) {
					$assign(base, $new($URI, "file"_s, ""_s, $($nc($(fixURI(baseSystemId)))->trim()), nullptr, nullptr));
				} else {
					$var($URI, var$1, getUserDir());
					$assign(base, $new($URI, var$1, $(fixURI(baseSystemId))));
				}
			}
		}
		$assign(uri, $new($URI, base, $($nc(id)->trim())));
	} catch ($Exception& e) {
	}
	if (uri == nullptr) {
		return systemId;
	}
	return $nc(uri)->toString();
}

$String* XMLEntityManager::expandSystemIdStrictOn($String* systemId, $String* baseSystemId) {
	$init(XMLEntityManager);
	$useLocalCurrentObjectStackCache();
	$var($URI, systemURI, $new($URI, systemId, true));
	if (systemURI->isAbsoluteURI()) {
		return systemId;
	}
	$var($URI, baseURI, nullptr);
	if (baseSystemId == nullptr || $nc(baseSystemId)->length() == 0) {
		$assign(baseURI, getUserDir());
	} else {
		$assign(baseURI, $new($URI, baseSystemId, true));
		if (!baseURI->isAbsoluteURI()) {
			baseURI->absolutize($(getUserDir()));
		}
	}
	systemURI->absolutize(baseURI);
	return systemURI->toString();
}

$String* XMLEntityManager::expandSystemIdStrictOff($String* systemId, $String* baseSystemId) {
	$init(XMLEntityManager);
	$useLocalCurrentObjectStackCache();
	$var($URI, systemURI, $new($URI, systemId, true));
	if (systemURI->isAbsoluteURI()) {
		if ($nc($(systemURI->getScheme()))->length() > 1) {
			return systemId;
		}
		$throwNew($URI$MalformedURIException);
	}
	$var($URI, baseURI, nullptr);
	if (baseSystemId == nullptr || $nc(baseSystemId)->length() == 0) {
		$assign(baseURI, getUserDir());
	} else {
		$assign(baseURI, $new($URI, baseSystemId, true));
		if (!baseURI->isAbsoluteURI()) {
			baseURI->absolutize($(getUserDir()));
		}
	}
	systemURI->absolutize(baseURI);
	return systemURI->toString();
}

$String* XMLEntityManager::expandSystemIdStrictOff1($String* systemId, $String* baseSystemId) {
	$init(XMLEntityManager);
	$useLocalCurrentObjectStackCache();
	$var($1URI, systemURI, $new($1URI, systemId));
	if (systemURI->isAbsolute()) {
		if ($nc($(systemURI->getScheme()))->length() > 1) {
			return systemId;
		}
		$throwNew($URISyntaxException, systemId, "the scheme\'s length is only one character"_s);
	}
	$var($URI, baseURI, nullptr);
	if (baseSystemId == nullptr || $nc(baseSystemId)->length() == 0) {
		$assign(baseURI, getUserDir());
	} else {
		$assign(baseURI, $new($URI, baseSystemId, true));
		if (!baseURI->isAbsoluteURI()) {
			baseURI->absolutize($(getUserDir()));
		}
	}
	$assign(systemURI, ($$new($1URI, $($nc(baseURI)->toString())))->resolve(systemURI));
	return $nc(systemURI)->toString();
}

$XMLEntityManager$EncodingInfo* XMLEntityManager::getEncodingInfo($bytes* b4, int32_t count) {
	if (count < 2) {
		$init($XMLEntityManager$EncodingInfo);
		return $XMLEntityManager$EncodingInfo::UTF_8;
	}
	int32_t b0 = (int32_t)($nc(b4)->get(0) & (uint32_t)255);
	int32_t b1 = (int32_t)(b4->get(1) & (uint32_t)255);
	if (b0 == 254 && b1 == 255) {
		$init($XMLEntityManager$EncodingInfo);
		return $XMLEntityManager$EncodingInfo::UTF_16_BIG_ENDIAN_WITH_BOM;
	}
	if (b0 == 255 && b1 == 254) {
		$init($XMLEntityManager$EncodingInfo);
		return $XMLEntityManager$EncodingInfo::UTF_16_LITTLE_ENDIAN_WITH_BOM;
	}
	if (count < 3) {
		$init($XMLEntityManager$EncodingInfo);
		return $XMLEntityManager$EncodingInfo::UTF_8;
	}
	int32_t b2 = (int32_t)(b4->get(2) & (uint32_t)255);
	if (b0 == 239 && b1 == 187 && b2 == 191) {
		$init($XMLEntityManager$EncodingInfo);
		return $XMLEntityManager$EncodingInfo::UTF_8_WITH_BOM;
	}
	if (count < 4) {
		$init($XMLEntityManager$EncodingInfo);
		return $XMLEntityManager$EncodingInfo::UTF_8;
	}
	int32_t b3 = (int32_t)(b4->get(3) & (uint32_t)255);
	if (b0 == 0 && b1 == 0 && b2 == 0 && b3 == 60) {
		$init($XMLEntityManager$EncodingInfo);
		return $XMLEntityManager$EncodingInfo::UCS_4_BIG_ENDIAN;
	}
	if (b0 == 60 && b1 == 0 && b2 == 0 && b3 == 0) {
		$init($XMLEntityManager$EncodingInfo);
		return $XMLEntityManager$EncodingInfo::UCS_4_LITTLE_ENDIAN;
	}
	if (b0 == 0 && b1 == 0 && b2 == 60 && b3 == 0) {
		$init($XMLEntityManager$EncodingInfo);
		return $XMLEntityManager$EncodingInfo::UCS_4_UNUSUAL_BYTE_ORDER;
	}
	if (b0 == 0 && b1 == 60 && b2 == 0 && b3 == 0) {
		$init($XMLEntityManager$EncodingInfo);
		return $XMLEntityManager$EncodingInfo::UCS_4_UNUSUAL_BYTE_ORDER;
	}
	if (b0 == 0 && b1 == 60 && b2 == 0 && b3 == 63) {
		$init($XMLEntityManager$EncodingInfo);
		return $XMLEntityManager$EncodingInfo::UTF_16_BIG_ENDIAN;
	}
	if (b0 == 60 && b1 == 0 && b2 == 63 && b3 == 0) {
		$init($XMLEntityManager$EncodingInfo);
		return $XMLEntityManager$EncodingInfo::UTF_16_LITTLE_ENDIAN;
	}
	if (b0 == 76 && b1 == 111 && b2 == 167 && b3 == 148) {
		$init($XMLEntityManager$EncodingInfo);
		return $XMLEntityManager$EncodingInfo::EBCDIC;
	}
	$init($XMLEntityManager$EncodingInfo);
	return $XMLEntityManager$EncodingInfo::UTF_8;
}

$Reader* XMLEntityManager::createReader($InputStream* inputStream, $String* encoding$renamed, $Boolean* isBigEndian) {
	$useLocalCurrentObjectStackCache();
	$var($String, encoding, encoding$renamed);
	$init($XMLEntityManager$EncodingInfo);
	$var($String, enc, (encoding != nullptr) ? encoding : $XMLEntityManager$EncodingInfo::STR_UTF8);
	$init($Locale);
	$assign(enc, $nc(enc)->toUpperCase($Locale::ENGLISH));
	$init($XMLMessageFormatter);
	$var($MessageFormatter, f, $nc(this->fErrorReporter)->getMessageFormatter($XMLMessageFormatter::XML_DOMAIN));
	$var($Locale, l, $nc(this->fErrorReporter)->getLocale());
	{
		$var($String, s101758$, enc);
		int32_t tmp101758$ = -1;
		switch (s101758$->hashCode()) {
		case 0x04D50972:
			{
				if (s101758$->equals("UTF-8"_s)) {
					tmp101758$ = 0;
				}
				break;
			}
		case (int32_t)0x95CC242B:
			{
				if (s101758$->equals("UTF-16"_s)) {
					tmp101758$ = 1;
				}
				break;
			}
		case 0x5353CDAE:
			{
				if (s101758$->equals("UTF-16BE"_s)) {
					tmp101758$ = 2;
				}
				break;
			}
		case 0x5353CEE4:
			{
				if (s101758$->equals("UTF-16LE"_s)) {
					tmp101758$ = 3;
				}
				break;
			}
		case (int32_t)0xF702C670:
			{
				if (s101758$->equals("ISO-10646-UCS-4"_s)) {
					tmp101758$ = 4;
				}
				break;
			}
		case (int32_t)0xF702C66E:
			{
				if (s101758$->equals("ISO-10646-UCS-2"_s)) {
					tmp101758$ = 5;
				}
				break;
			}
		}
		switch (tmp101758$) {
		case 0:
			{
				return $new($UTF8Reader, inputStream, this->fBufferSize, f, l);
			}
		case 1:
			{
				if (isBigEndian != nullptr) {
					return $new($UTF16Reader, inputStream, this->fBufferSize, isBigEndian->booleanValue(), f, l);
				}
				break;
			}
		case 2:
			{
				return $new($UTF16Reader, inputStream, this->fBufferSize, true, f, l);
			}
		case 3:
			{
				return $new($UTF16Reader, inputStream, this->fBufferSize, false, f, l);
			}
		case 4:
			{
				if (isBigEndian != nullptr) {
					if ((isBigEndian)->booleanValue()) {
						return $new($UCSReader, inputStream, $UCSReader::UCS4BE);
					} else {
						return $new($UCSReader, inputStream, $UCSReader::UCS4LE);
					}
				} else {
					$nc(this->fErrorReporter)->reportError($(static_cast<$XMLLocator*>(this->getEntityScanner())), $XMLMessageFormatter::XML_DOMAIN, "EncodingByteOrderUnsupported"_s, $$new($ObjectArray, {$of(encoding)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				}
				break;
			}
		case 5:
			{
				if (isBigEndian != nullptr) {
					if ((isBigEndian)->booleanValue()) {
						return $new($UCSReader, inputStream, $UCSReader::UCS2BE);
					} else {
						return $new($UCSReader, inputStream, $UCSReader::UCS2LE);
					}
				} else {
					$nc(this->fErrorReporter)->reportError($(static_cast<$XMLLocator*>(this->getEntityScanner())), $XMLMessageFormatter::XML_DOMAIN, "EncodingByteOrderUnsupported"_s, $$new($ObjectArray, {$of(encoding)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				}
				break;
			}
		}
	}
	bool validIANA = $XMLChar::isValidIANAEncoding(encoding);
	bool validJava = $XMLChar::isValidJavaEncoding(encoding);
	if (!validIANA || (this->fAllowJavaEncodings && !validJava)) {
		$nc(this->fErrorReporter)->reportError($(static_cast<$XMLLocator*>(this->getEntityScanner())), $XMLMessageFormatter::XML_DOMAIN, "EncodingDeclInvalid"_s, $$new($ObjectArray, {$of(encoding)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
		$assign(encoding, "ISO-8859-1"_s);
	}
	$var($String, javaEncoding, $EncodingMap::getIANA2JavaMapping(enc));
	if (javaEncoding == nullptr) {
		if (this->fAllowJavaEncodings) {
			$assign(javaEncoding, encoding);
		} else {
			$nc(this->fErrorReporter)->reportError($(static_cast<$XMLLocator*>(this->getEntityScanner())), $XMLMessageFormatter::XML_DOMAIN, "EncodingDeclInvalid"_s, $$new($ObjectArray, {$of(encoding)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			$assign(javaEncoding, "ISO8859_1"_s);
		}
	}
	return $new($BufferedReader, $$new($InputStreamReader, inputStream, javaEncoding));
}

$String* XMLEntityManager::getPublicId() {
	return (this->fCurrentEntity != nullptr && $nc(this->fCurrentEntity)->entityLocation != nullptr) ? $nc($nc(this->fCurrentEntity)->entityLocation)->getPublicId() : ($String*)nullptr;
}

$String* XMLEntityManager::getExpandedSystemId() {
	$useLocalCurrentObjectStackCache();
	if (this->fCurrentEntity != nullptr) {
		if ($nc(this->fCurrentEntity)->entityLocation != nullptr && $nc($nc(this->fCurrentEntity)->entityLocation)->getExpandedSystemId() != nullptr) {
			return $nc($nc(this->fCurrentEntity)->entityLocation)->getExpandedSystemId();
		} else {
			int32_t size = $nc(this->fEntityStack)->size();
			for (int32_t i = size - 1; i >= 0; --i) {
				$var($Entity$ScannedEntity, externalEntity, $cast($Entity$ScannedEntity, $nc(this->fEntityStack)->get(i)));
				if ($nc(externalEntity)->entityLocation != nullptr && $nc(externalEntity->entityLocation)->getExpandedSystemId() != nullptr) {
					return $nc(externalEntity->entityLocation)->getExpandedSystemId();
				}
			}
		}
	}
	return nullptr;
}

$String* XMLEntityManager::getLiteralSystemId() {
	$useLocalCurrentObjectStackCache();
	if (this->fCurrentEntity != nullptr) {
		if ($nc(this->fCurrentEntity)->entityLocation != nullptr && $nc($nc(this->fCurrentEntity)->entityLocation)->getLiteralSystemId() != nullptr) {
			return $nc($nc(this->fCurrentEntity)->entityLocation)->getLiteralSystemId();
		} else {
			int32_t size = $nc(this->fEntityStack)->size();
			for (int32_t i = size - 1; i >= 0; --i) {
				$var($Entity$ScannedEntity, externalEntity, $cast($Entity$ScannedEntity, $nc(this->fEntityStack)->get(i)));
				if ($nc(externalEntity)->entityLocation != nullptr && $nc(externalEntity->entityLocation)->getLiteralSystemId() != nullptr) {
					return $nc(externalEntity->entityLocation)->getLiteralSystemId();
				}
			}
		}
	}
	return nullptr;
}

int32_t XMLEntityManager::getLineNumber() {
	$useLocalCurrentObjectStackCache();
	if (this->fCurrentEntity != nullptr) {
		if ($nc(this->fCurrentEntity)->isExternal()) {
			return $nc(this->fCurrentEntity)->lineNumber;
		} else {
			int32_t size = $nc(this->fEntityStack)->size();
			for (int32_t i = size - 1; i > 0; --i) {
				$var($Entity$ScannedEntity, firstExternalEntity, $cast($Entity$ScannedEntity, $nc(this->fEntityStack)->get(i)));
				if ($nc(firstExternalEntity)->isExternal()) {
					return firstExternalEntity->lineNumber;
				}
			}
		}
	}
	return -1;
}

int32_t XMLEntityManager::getColumnNumber() {
	$useLocalCurrentObjectStackCache();
	if (this->fCurrentEntity != nullptr) {
		if ($nc(this->fCurrentEntity)->isExternal()) {
			return $nc(this->fCurrentEntity)->columnNumber;
		} else {
			int32_t size = $nc(this->fEntityStack)->size();
			for (int32_t i = size - 1; i > 0; --i) {
				$var($Entity$ScannedEntity, firstExternalEntity, $cast($Entity$ScannedEntity, $nc(this->fEntityStack)->get(i)));
				if ($nc(firstExternalEntity)->isExternal()) {
					return firstExternalEntity->columnNumber;
				}
			}
		}
	}
	return -1;
}

$String* XMLEntityManager::fixURI($String* str$renamed) {
	$init(XMLEntityManager);
	$useLocalCurrentObjectStackCache();
	$var($String, str, str$renamed);
	$init($File);
	$assign(str, $nc(str)->replace($File::separatorChar, u'/'));
	if (str->length() >= 2) {
		char16_t ch1 = str->charAt(1);
		if (ch1 == u':') {
			char16_t ch0 = $Character::toUpperCase(str->charAt(0));
			if (ch0 >= u'A' && ch0 <= u'Z') {
				$assign(str, $str({"/"_s, str}));
			}
		} else if (ch1 == u'/' && str->charAt(0) == u'/') {
			$assign(str, $str({"file:"_s, str}));
		}
	}
	int32_t pos = str->indexOf((int32_t)u' ');
	if (pos >= 0) {
		$var($StringBuilder, sb, $new($StringBuilder, str->length()));
		for (int32_t i = 0; i < pos; ++i) {
			sb->append(str->charAt(i));
		}
		sb->append("%20"_s);
		for (int32_t i = pos + 1; i < str->length(); ++i) {
			if (str->charAt(i) == u' ') {
				sb->append("%20"_s);
			} else {
				sb->append(str->charAt(i));
			}
		}
		$assign(str, sb->toString());
	}
	return str;
}

void XMLEntityManager::print() {
}

void XMLEntityManager::test() {
	$nc(this->fEntityStorage)->addExternalEntity("entityUsecase1"_s, nullptr, "/space/home/stax/sun/6thJan2004/zephyr/data/test.txt"_s, "/space/home/stax/sun/6thJan2004/zephyr/data/entity.xml"_s);
	$nc(this->fEntityStorage)->addInternalEntity("entityUsecase2"_s, "<Test>value</Test>"_s);
	$nc(this->fEntityStorage)->addInternalEntity("entityUsecase3"_s, "value3"_s);
	$nc(this->fEntityStorage)->addInternalEntity("text"_s, "Hello World."_s);
	$nc(this->fEntityStorage)->addInternalEntity("empty-element"_s, "<foo/>"_s);
	$nc(this->fEntityStorage)->addInternalEntity("balanced-element"_s, "<foo></foo>"_s);
	$nc(this->fEntityStorage)->addInternalEntity("balanced-element-with-text"_s, "<foo>Hello, World</foo>"_s);
	$nc(this->fEntityStorage)->addInternalEntity("balanced-element-with-entity"_s, "<foo>&text;</foo>"_s);
	$nc(this->fEntityStorage)->addInternalEntity("unbalanced-entity"_s, "<foo>"_s);
	$nc(this->fEntityStorage)->addInternalEntity("recursive-entity"_s, "<foo>&recursive-entity2;</foo>"_s);
	$nc(this->fEntityStorage)->addInternalEntity("recursive-entity2"_s, "<bar>&recursive-entity3;</bar>"_s);
	$nc(this->fEntityStorage)->addInternalEntity("recursive-entity3"_s, "<baz>&recursive-entity;</baz>"_s);
	$nc(this->fEntityStorage)->addInternalEntity("ch"_s, "&#x00A9;"_s);
	$nc(this->fEntityStorage)->addInternalEntity("ch1"_s, "&#84;"_s);
	$nc(this->fEntityStorage)->addInternalEntity("% ch2"_s, "param"_s);
}

void clinit$XMLEntityManager($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$assignStatic(XMLEntityManager::VALIDATION, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(XMLEntityManager::EXTERNAL_GENERAL_ENTITIES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::EXTERNAL_GENERAL_ENTITIES_FEATURE}));
	$assignStatic(XMLEntityManager::EXTERNAL_PARAMETER_ENTITIES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::EXTERNAL_PARAMETER_ENTITIES_FEATURE}));
	$assignStatic(XMLEntityManager::ALLOW_JAVA_ENCODINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::ALLOW_JAVA_ENCODINGS_FEATURE}));
	$assignStatic(XMLEntityManager::WARN_ON_DUPLICATE_ENTITYDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_DUPLICATE_ENTITYDEF_FEATURE}));
	$assignStatic(XMLEntityManager::LOAD_EXTERNAL_DTD, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::LOAD_EXTERNAL_DTD_FEATURE}));
	$assignStatic(XMLEntityManager::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XMLEntityManager::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XMLEntityManager::STANDARD_URI_CONFORMANT, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::STANDARD_URI_CONFORMANT_FEATURE}));
	$assignStatic(XMLEntityManager::ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_RESOLVER_PROPERTY}));
	$assignStatic(XMLEntityManager::STAX_ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::STAX_ENTITY_RESOLVER_PROPERTY}));
	$assignStatic(XMLEntityManager::VALIDATION_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::VALIDATION_MANAGER_PROPERTY}));
	$assignStatic(XMLEntityManager::BUFFER_SIZE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::BUFFER_SIZE_PROPERTY}));
	$assignStatic(XMLEntityManager::SECURITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SECURITY_MANAGER_PROPERTY}));
	$assignStatic(XMLEntityManager::PARSER_SETTINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::PARSER_SETTINGS}));
	$init($JdkConstants);
	$assignStatic(XMLEntityManager::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
	$assignStatic(XMLEntityManager::EXTERNAL_ACCESS_DEFAULT, $JdkConstants::EXTERNAL_ACCESS_DEFAULT);
	$init($XMLConstants);
	$assignStatic(XMLEntityManager::RECOGNIZED_FEATURES, $new($StringArray, {
		XMLEntityManager::VALIDATION,
		XMLEntityManager::EXTERNAL_GENERAL_ENTITIES,
		XMLEntityManager::EXTERNAL_PARAMETER_ENTITIES,
		XMLEntityManager::ALLOW_JAVA_ENCODINGS,
		XMLEntityManager::WARN_ON_DUPLICATE_ENTITYDEF,
		XMLEntityManager::STANDARD_URI_CONFORMANT,
		$XMLConstants::USE_CATALOG
	}));
	$init($Boolean);
	$init($JdkXmlUtils);
	$assignStatic(XMLEntityManager::FEATURE_DEFAULTS, $new($BooleanArray, {
		($Boolean*)nullptr,
		$Boolean::TRUE,
		$Boolean::TRUE,
		$Boolean::TRUE,
		$Boolean::FALSE,
		$Boolean::FALSE,
		$($Boolean::valueOf($JdkXmlUtils::USE_CATALOG_DEFAULT))
	}));
	$init($JdkConstants);
	$assignStatic(XMLEntityManager::RECOGNIZED_PROPERTIES, $new($StringArray, {
		XMLEntityManager::SYMBOL_TABLE,
		XMLEntityManager::ERROR_REPORTER,
		XMLEntityManager::ENTITY_RESOLVER,
		XMLEntityManager::VALIDATION_MANAGER,
		XMLEntityManager::BUFFER_SIZE,
		XMLEntityManager::SECURITY_MANAGER,
		XMLEntityManager::XML_SECURITY_PROPERTY_MANAGER,
		$JdkXmlUtils::CATALOG_DEFER,
		$JdkXmlUtils::CATALOG_FILES,
		$JdkXmlUtils::CATALOG_PREFER,
		$JdkXmlUtils::CATALOG_RESOLVE,
		$JdkConstants::CDATA_CHUNK_SIZE
	}));
	$assignStatic(XMLEntityManager::PROPERTY_DEFAULTS, $new($ObjectArray, {
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		$($of($Integer::valueOf(XMLEntityManager::DEFAULT_BUFFER_SIZE))),
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		$($of($Integer::valueOf($JdkConstants::CDATA_CHUNK_SIZE_DEFAULT)))
	}));
	$assignStatic(XMLEntityManager::XMLEntity, "[xml]"_s->intern());
	$assignStatic(XMLEntityManager::DTDEntity, "[dtd]"_s->intern());
	$assignStatic(XMLEntityManager::gNeedEscaping, $new($booleans, 128));
	$assignStatic(XMLEntityManager::gAfterEscaping1, $new($chars, 128));
	$assignStatic(XMLEntityManager::gAfterEscaping2, $new($chars, 128));
	$assignStatic(XMLEntityManager::gHexChs, $new($chars, {
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'A',
		u'B',
		u'C',
		u'D',
		u'E',
		u'F'
	}));
	{
		for (int32_t i = 0; i <= 31; ++i) {
			$nc(XMLEntityManager::gNeedEscaping)->set(i, true);
			$nc(XMLEntityManager::gAfterEscaping1)->set(i, $nc(XMLEntityManager::gHexChs)->get(i >> 4));
			$nc(XMLEntityManager::gAfterEscaping2)->set(i, $nc(XMLEntityManager::gHexChs)->get((int32_t)(i & (uint32_t)15)));
		}
		$nc(XMLEntityManager::gNeedEscaping)->set(127, true);
		$nc(XMLEntityManager::gAfterEscaping1)->set(127, u'7');
		$nc(XMLEntityManager::gAfterEscaping2)->set(127, u'F');
		$var($chars, escChs, $new($chars, {
			u' ',
			u'<',
			u'>',
			u'#',
			u'%',
			u'\"',
			u'{',
			u'}',
			u'|',
			u'\\',
			u'^',
			u'~',
			u'[',
			u']',
			u'`'
		}));
		int32_t len = escChs->length;
		char16_t ch = 0;
		for (int32_t i = 0; i < len; ++i) {
			ch = escChs->get(i);
			$nc(XMLEntityManager::gNeedEscaping)->set(ch, true);
			$nc(XMLEntityManager::gAfterEscaping1)->set(ch, $nc(XMLEntityManager::gHexChs)->get(ch >> 4));
			$nc(XMLEntityManager::gAfterEscaping2)->set(ch, $nc(XMLEntityManager::gHexChs)->get((int32_t)(ch & (uint32_t)15)));
		}
	}
}

XMLEntityManager::XMLEntityManager() {
}

$Class* XMLEntityManager::load$($String* name, bool initialize) {
	$loadClass(XMLEntityManager, name, initialize, &_XMLEntityManager_ClassInfo_, clinit$XMLEntityManager, allocate$XMLEntityManager);
	return class$;
}

$Class* XMLEntityManager::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com