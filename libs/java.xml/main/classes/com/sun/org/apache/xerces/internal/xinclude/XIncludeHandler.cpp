#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeHandler.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/io/MalformedByteSequenceException.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/parsers/XIncludeParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XPointerParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl.h>
#include <com/sun/org/apache/xerces/internal/util/HTTPInputSource.h>
#include <com/sun/org/apache/xerces/internal/util/IntStack.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/URI$MalformedURIException.h>
#include <com/sun/org/apache/xerces/internal/util/URI.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLLocatorWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xerces/internal/xinclude/XInclude11TextReader.h>
#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeHandler$Notation.h>
#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeHandler$UnparsedEntity.h>
#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeNamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeTextReader.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLPullParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerHandler.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerProcessor.h>
#include <java/io/CharConversionException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/net/URI.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <java/util/Stack.h>
#include <java/util/StringTokenizer.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/catalog/CatalogException.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <javax/xml/catalog/CatalogManager.h>
#include <javax/xml/catalog/CatalogResolver.h>
#include <javax/xml/transform/Source.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

#undef ALLOW_DTD_EVENTS_AFTER_ENDDTD_FEATURE
#undef ALLOW_UE_AND_NOTATION_EVENTS
#undef BUFFER_SIZE
#undef BUFFER_SIZE_PROPERTY
#undef CURRENT_BASE_URI
#undef DEFAULT_BUFFER_SIZE
#undef DEFER
#undef DYNAMIC_VALIDATION
#undef DYNAMIC_VALIDATION_FEATURE
#undef EMPTY_STRING
#undef ENTITY_RESOLVER
#undef ENTITY_RESOLVER_PROPERTY
#undef ENTITY_SKIPPED
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef FEATURE_DEFAULTS
#undef FILES
#undef HTTP_ACCEPT
#undef HTTP_ACCEPT_LANGUAGE
#undef INITIAL_SIZE
#undef JAXP_PROPERTY_PREFIX
#undef JAXP_SCHEMA_LANGUAGE
#undef NAMESPACE_CONTEXT_PROPERTY
#undef NEW_NS_ATTR_QNAME
#undef NS_XMLSCHEMA
#undef PARSER_SETTINGS
#undef PREFER
#undef PREFIX_XML
#undef PREFIX_XMLNS
#undef PROPERTY_DEFAULTS
#undef RECOGNIZED_FEATURES
#undef RECOGNIZED_PROPERTIES
#undef RESOLVE
#undef SAX_FEATURE_PREFIX
#undef SCHEMA_LANGUAGE
#undef SCHEMA_VALIDATION
#undef SCHEMA_VALIDATION_FEATURE
#undef SECURITY_MANAGER
#undef SECURITY_MANAGER_PROPERTY
#undef SEVERITY_FATAL_ERROR
#undef SEVERITY_WARNING
#undef STATE_EXPECT_FALLBACK
#undef STATE_IGNORE
#undef STATE_NORMAL_PROCESSING
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TRUE
#undef USE_CATALOG
#undef VALIDATION
#undef VALIDATION_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XINCLUDE_ATTR_ACCEPT
#undef XINCLUDE_ATTR_ACCEPT_LANGUAGE
#undef XINCLUDE_ATTR_ENCODING
#undef XINCLUDE_ATTR_HREF
#undef XINCLUDE_ATTR_PARSE
#undef XINCLUDE_BASE
#undef XINCLUDE_DOMAIN
#undef XINCLUDE_FALLBACK
#undef XINCLUDE_FIXUP_BASE_URIS
#undef XINCLUDE_FIXUP_BASE_URIS_FEATURE
#undef XINCLUDE_FIXUP_LANGUAGE
#undef XINCLUDE_FIXUP_LANGUAGE_FEATURE
#undef XINCLUDE_HANDLER_PROPERTY
#undef XINCLUDE_INCLUDE
#undef XINCLUDE_INCLUDED
#undef XINCLUDE_LANG
#undef XINCLUDE_NS_URI
#undef XINCLUDE_PARSE_TEXT
#undef XINCLUDE_PARSE_XML
#undef XMLNS_URI
#undef XML_BASE_QNAME
#undef XML_DOMAIN
#undef XML_LANG_QNAME
#undef XML_SECURITY_PROPERTY_MANAGER
#undef XML_URI
#undef XPOINTER
#undef XPOINTER_HANDLER_PROPERTY

using $BooleanArray = $Array<::java::lang::Boolean>;
using $URIArray = $Array<::java::net::URI>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $MalformedByteSequenceException = ::com::sun::org::apache::xerces::internal::impl::io::MalformedByteSequenceException;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $XIncludeParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::XIncludeParserConfiguration;
using $XML11Configuration = ::com::sun::org::apache::xerces::internal::parsers::XML11Configuration;
using $XPointerParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::XPointerParserConfiguration;
using $AugmentationsImpl = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl;
using $HTTPInputSource = ::com::sun::org::apache::xerces::internal::util::HTTPInputSource;
using $IntStack = ::com::sun::org::apache::xerces::internal::util::IntStack;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $ParserConfigurationSettings = ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $URI = ::com::sun::org::apache::xerces::internal::util::URI;
using $URI$MalformedURIException = ::com::sun::org::apache::xerces::internal::util::URI$MalformedURIException;
using $XMLAttributesImpl = ::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLLocatorWrapper = ::com::sun::org::apache::xerces::internal::util::XMLLocatorWrapper;
using $XMLResourceIdentifierImpl = ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $XInclude11TextReader = ::com::sun::org::apache::xerces::internal::xinclude::XInclude11TextReader;
using $XIncludeHandler$Notation = ::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler$Notation;
using $XIncludeHandler$UnparsedEntity = ::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler$UnparsedEntity;
using $XIncludeMessageFormatter = ::com::sun::org::apache::xerces::internal::xinclude::XIncludeMessageFormatter;
using $XIncludeNamespaceSupport = ::com::sun::org::apache::xerces::internal::xinclude::XIncludeNamespaceSupport;
using $XIncludeTextReader = ::com::sun::org::apache::xerces::internal::xinclude::XIncludeTextReader;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $XMLDTDSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $XMLPullParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration;
using $XPointerHandler = ::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler;
using $XPointerProcessor = ::com::sun::org::apache::xerces::internal::xpointer::XPointerProcessor;
using $CharConversionException = ::java::io::CharConversionException;
using $IOException = ::java::io::IOException;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Objects = ::java::util::Objects;
using $Stack = ::java::util::Stack;
using $StringTokenizer = ::java::util::StringTokenizer;
using $XMLConstants = ::javax::xml::XMLConstants;
using $CatalogException = ::javax::xml::catalog::CatalogException;
using $CatalogFeatures = ::javax::xml::catalog::CatalogFeatures;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $CatalogManager = ::javax::xml::catalog::CatalogManager;
using $CatalogResolver = ::javax::xml::catalog::CatalogResolver;
using $Source = ::javax::xml::transform::Source;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $InputSource = ::org::xml::sax::InputSource;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xinclude {

$FieldInfo _XIncludeHandler_FieldInfo_[] = {
	{"HTTP_ACCEPT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XIncludeHandler, HTTP_ACCEPT)},
	{"HTTP_ACCEPT_LANGUAGE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XIncludeHandler, HTTP_ACCEPT_LANGUAGE)},
	{"XPOINTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XIncludeHandler, XPOINTER)},
	{"XINCLUDE_NS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XIncludeHandler, XINCLUDE_NS_URI)},
	{"XINCLUDE_INCLUDE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XIncludeHandler, XINCLUDE_INCLUDE)},
	{"XINCLUDE_FALLBACK", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XIncludeHandler, XINCLUDE_FALLBACK)},
	{"XINCLUDE_PARSE_XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XIncludeHandler, XINCLUDE_PARSE_XML)},
	{"XINCLUDE_PARSE_TEXT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XIncludeHandler, XINCLUDE_PARSE_TEXT)},
	{"XINCLUDE_ATTR_HREF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XIncludeHandler, XINCLUDE_ATTR_HREF)},
	{"XINCLUDE_ATTR_PARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XIncludeHandler, XINCLUDE_ATTR_PARSE)},
	{"XINCLUDE_ATTR_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XIncludeHandler, XINCLUDE_ATTR_ENCODING)},
	{"XINCLUDE_ATTR_ACCEPT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XIncludeHandler, XINCLUDE_ATTR_ACCEPT)},
	{"XINCLUDE_ATTR_ACCEPT_LANGUAGE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XIncludeHandler, XINCLUDE_ATTR_ACCEPT_LANGUAGE)},
	{"XINCLUDE_INCLUDED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XIncludeHandler, XINCLUDE_INCLUDED)},
	{"CURRENT_BASE_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XIncludeHandler, CURRENT_BASE_URI)},
	{"XINCLUDE_BASE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XIncludeHandler, XINCLUDE_BASE)},
	{"XML_BASE_QNAME", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XIncludeHandler, XML_BASE_QNAME)},
	{"XINCLUDE_LANG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XIncludeHandler, XINCLUDE_LANG)},
	{"XML_LANG_QNAME", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XIncludeHandler, XML_LANG_QNAME)},
	{"NEW_NS_ATTR_QNAME", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XIncludeHandler, NEW_NS_ATTR_QNAME)},
	{"STATE_NORMAL_PROCESSING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XIncludeHandler, STATE_NORMAL_PROCESSING)},
	{"STATE_IGNORE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XIncludeHandler, STATE_IGNORE)},
	{"STATE_EXPECT_FALLBACK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XIncludeHandler, STATE_EXPECT_FALLBACK)},
	{"VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeHandler, VALIDATION)},
	{"SCHEMA_VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeHandler, SCHEMA_VALIDATION)},
	{"DYNAMIC_VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeHandler, DYNAMIC_VALIDATION)},
	{"ALLOW_UE_AND_NOTATION_EVENTS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeHandler, ALLOW_UE_AND_NOTATION_EVENTS)},
	{"XINCLUDE_FIXUP_BASE_URIS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeHandler, XINCLUDE_FIXUP_BASE_URIS)},
	{"XINCLUDE_FIXUP_LANGUAGE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeHandler, XINCLUDE_FIXUP_LANGUAGE)},
	{"JAXP_SCHEMA_LANGUAGE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeHandler, JAXP_SCHEMA_LANGUAGE)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeHandler, SYMBOL_TABLE)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeHandler, ERROR_REPORTER)},
	{"ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeHandler, ENTITY_RESOLVER)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeHandler, SECURITY_MANAGER)},
	{"BUFFER_SIZE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeHandler, BUFFER_SIZE)},
	{"PARSER_SETTINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeHandler, PARSER_SETTINGS)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeHandler, XML_SECURITY_PROPERTY_MANAGER)},
	{"RECOGNIZED_FEATURES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XIncludeHandler, RECOGNIZED_FEATURES)},
	{"FEATURE_DEFAULTS", "[Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XIncludeHandler, FEATURE_DEFAULTS)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XIncludeHandler, RECOGNIZED_PROPERTIES)},
	{"PROPERTY_DEFAULTS", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XIncludeHandler, PROPERTY_DEFAULTS)},
	{"fDocumentHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PROTECTED, $field(XIncludeHandler, fDocumentHandler)},
	{"fDocumentSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PROTECTED, $field(XIncludeHandler, fDocumentSource)},
	{"fDTDHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PROTECTED, $field(XIncludeHandler, fDTDHandler)},
	{"fDTDSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;", nullptr, $PROTECTED, $field(XIncludeHandler, fDTDSource)},
	{"fParentXIncludeHandler", "Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeHandler;", nullptr, $PROTECTED, $field(XIncludeHandler, fParentXIncludeHandler)},
	{"fBufferSize", "I", nullptr, $PROTECTED, $field(XIncludeHandler, fBufferSize)},
	{"fParentRelativeURI", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XIncludeHandler, fParentRelativeURI)},
	{"fChildConfig", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;", nullptr, $PROTECTED, $field(XIncludeHandler, fChildConfig)},
	{"fXIncludeChildConfig", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;", nullptr, $PROTECTED, $field(XIncludeHandler, fXIncludeChildConfig)},
	{"fXPointerChildConfig", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;", nullptr, $PROTECTED, $field(XIncludeHandler, fXPointerChildConfig)},
	{"fXPtrProcessor", "Lcom/sun/org/apache/xerces/internal/xpointer/XPointerProcessor;", nullptr, $PROTECTED, $field(XIncludeHandler, fXPtrProcessor)},
	{"fDocLocation", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PROTECTED, $field(XIncludeHandler, fDocLocation)},
	{"fXIncludeLocator", "Lcom/sun/org/apache/xerces/internal/util/XMLLocatorWrapper;", nullptr, $PROTECTED, $field(XIncludeHandler, fXIncludeLocator)},
	{"fXIncludeMessageFormatter", "Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeMessageFormatter;", nullptr, $PROTECTED, $field(XIncludeHandler, fXIncludeMessageFormatter)},
	{"fNamespaceContext", "Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeNamespaceSupport;", nullptr, $PROTECTED, $field(XIncludeHandler, fNamespaceContext)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XIncludeHandler, fSymbolTable)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(XIncludeHandler, fErrorReporter)},
	{"fEntityResolver", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PROTECTED, $field(XIncludeHandler, fEntityResolver)},
	{"fSecurityManager", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager;", nullptr, $PROTECTED, $field(XIncludeHandler, fSecurityManager)},
	{"fSecurityPropertyMgr", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager;", nullptr, $PROTECTED, $field(XIncludeHandler, fSecurityPropertyMgr)},
	{"fXInclude10TextReader", "Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeTextReader;", nullptr, $PROTECTED, $field(XIncludeHandler, fXInclude10TextReader)},
	{"fXInclude11TextReader", "Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeTextReader;", nullptr, $PROTECTED, $field(XIncludeHandler, fXInclude11TextReader)},
	{"fCurrentBaseURI", "Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;", nullptr, $PROTECTED | $FINAL, $field(XIncludeHandler, fCurrentBaseURI)},
	{"fBaseURIScope", "Lcom/sun/org/apache/xerces/internal/util/IntStack;", nullptr, $PROTECTED | $FINAL, $field(XIncludeHandler, fBaseURIScope)},
	{"fBaseURI", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/lang/String;>;", $PROTECTED | $FINAL, $field(XIncludeHandler, fBaseURI)},
	{"fLiteralSystemID", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/lang/String;>;", $PROTECTED | $FINAL, $field(XIncludeHandler, fLiteralSystemID)},
	{"fExpandedSystemID", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/lang/String;>;", $PROTECTED | $FINAL, $field(XIncludeHandler, fExpandedSystemID)},
	{"fLanguageScope", "Lcom/sun/org/apache/xerces/internal/util/IntStack;", nullptr, $PROTECTED | $FINAL, $field(XIncludeHandler, fLanguageScope)},
	{"fLanguageStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/lang/String;>;", $PROTECTED | $FINAL, $field(XIncludeHandler, fLanguageStack)},
	{"fCurrentLanguage", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XIncludeHandler, fCurrentLanguage)},
	{"fHrefFromParent", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XIncludeHandler, fHrefFromParent)},
	{"fSettings", "Lcom/sun/org/apache/xerces/internal/util/ParserConfigurationSettings;", nullptr, $PROTECTED, $field(XIncludeHandler, fSettings)},
	{"fDepth", "I", nullptr, $PRIVATE, $field(XIncludeHandler, fDepth)},
	{"fResultDepth", "I", nullptr, $PRIVATE, $field(XIncludeHandler, fResultDepth)},
	{"INITIAL_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XIncludeHandler, INITIAL_SIZE)},
	{"fSawInclude", "[Z", nullptr, $PRIVATE, $field(XIncludeHandler, fSawInclude)},
	{"fSawFallback", "[Z", nullptr, $PRIVATE, $field(XIncludeHandler, fSawFallback)},
	{"fState", "[I", nullptr, $PRIVATE, $field(XIncludeHandler, fState)},
	{"fNotations", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeHandler$Notation;>;", $PRIVATE | $FINAL, $field(XIncludeHandler, fNotations)},
	{"fUnparsedEntities", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeHandler$UnparsedEntity;>;", $PRIVATE | $FINAL, $field(XIncludeHandler, fUnparsedEntities)},
	{"fFixupBaseURIs", "Z", nullptr, $PRIVATE, $field(XIncludeHandler, fFixupBaseURIs)},
	{"fFixupLanguage", "Z", nullptr, $PRIVATE, $field(XIncludeHandler, fFixupLanguage)},
	{"fSendUEAndNotationEvents", "Z", nullptr, $PRIVATE, $field(XIncludeHandler, fSendUEAndNotationEvents)},
	{"fIsXML11", "Z", nullptr, $PRIVATE, $field(XIncludeHandler, fIsXML11)},
	{"fInDTD", "Z", nullptr, $PRIVATE, $field(XIncludeHandler, fInDTD)},
	{"fHasIncludeReportedContent", "Z", nullptr, 0, $field(XIncludeHandler, fHasIncludeReportedContent)},
	{"fSeenRootElement", "Z", nullptr, $PRIVATE, $field(XIncludeHandler, fSeenRootElement)},
	{"fNeedCopyFeatures", "Z", nullptr, $PRIVATE, $field(XIncludeHandler, fNeedCopyFeatures)},
	{"fUseCatalog", "Z", nullptr, $PRIVATE, $field(XIncludeHandler, fUseCatalog)},
	{"fCatalogFeatures", "Ljavax/xml/catalog/CatalogFeatures;", nullptr, 0, $field(XIncludeHandler, fCatalogFeatures)},
	{"fCatalogResolver", "Ljavax/xml/catalog/CatalogResolver;", nullptr, 0, $field(XIncludeHandler, fCatalogResolver)},
	{"fCatalogFile", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XIncludeHandler, fCatalogFile)},
	{"fDefer", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XIncludeHandler, fDefer)},
	{"fPrefer", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XIncludeHandler, fPrefer)},
	{"fResolve", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XIncludeHandler, fResolve)},
	{"gNeedEscaping", "[Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XIncludeHandler, gNeedEscaping)},
	{"gAfterEscaping1", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XIncludeHandler, gAfterEscaping1)},
	{"gAfterEscaping2", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XIncludeHandler, gAfterEscaping2)},
	{"gHexChs", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XIncludeHandler, gHexChs)},
	{}
};

$MethodInfo _XIncludeHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XIncludeHandler, init$, void)},
	{"addNotation", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, addNotation, void, $String*, $XMLResourceIdentifier*, $Augmentations*)},
	{"addUnparsedEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, addUnparsedEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*)},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, attributeDecl, void, $String*, $String*, $String*, $StringArray*, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, characters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"checkAndSendNotation", "(Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeHandler$Notation;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, checkAndSendNotation, void, $XIncludeHandler$Notation*)},
	{"checkAndSendUnparsedEntity", "(Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeHandler$UnparsedEntity;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, checkAndSendUnparsedEntity, void, $XIncludeHandler$UnparsedEntity*)},
	{"checkMultipleRootElements", "()V", nullptr, $PRIVATE, $method(XIncludeHandler, checkMultipleRootElements, void)},
	{"checkNotation", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, checkNotation, void, $String*)},
	{"checkUnparsedEntity", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, checkUnparsedEntity, void, $String*)},
	{"checkWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, $PRIVATE, $method(XIncludeHandler, checkWhitespace, void, $XMLString*)},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"copyFeatures", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;Lcom/sun/org/apache/xerces/internal/util/ParserConfigurationSettings;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, copyFeatures, void, $XMLComponentManager*, $ParserConfigurationSettings*)},
	{"copyFeatures", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, copyFeatures, void, $XMLComponentManager*, $XMLParserConfiguration*)},
	{"copyFeatures1", "(Ljava/util/Enumeration;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;Lcom/sun/org/apache/xerces/internal/util/ParserConfigurationSettings;)V", "(Ljava/util/Enumeration<Ljava/lang/Object;>;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;Lcom/sun/org/apache/xerces/internal/util/ParserConfigurationSettings;)V", $PRIVATE, $method(XIncludeHandler, copyFeatures1, void, $Enumeration*, $String*, $XMLComponentManager*, $ParserConfigurationSettings*)},
	{"copyFeatures1", "(Ljava/util/Enumeration;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;)V", "(Ljava/util/Enumeration<Ljava/lang/Object;>;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;)V", $PRIVATE, $method(XIncludeHandler, copyFeatures1, void, $Enumeration*, $String*, $XMLComponentManager*, $XMLParserConfiguration*)},
	{"createInputSource", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PRIVATE, $method(XIncludeHandler, createInputSource, $XMLInputSource*, $String*, $String*, $String*, $String*, $String*)},
	{"doctypeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, doctypeDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, elementDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, emptyElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endAttlist", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, endAttlist, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, endCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endConditional", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, endConditional, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDTD", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, endDTD, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, endDocument, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, endElement, void, $QName*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, endExternalSubset, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, endGeneralEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, endParameterEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"escapeHref", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(XIncludeHandler, escapeHref, $String*, $String*)},
	{"externalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, externalEntityDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getBaseURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, getBaseURI, $String*, int32_t)},
	{"getDTDHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, getDTDHandler, $XMLDTDHandler*)},
	{"getDTDSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, getDTDSource, $XMLDTDSource*)},
	{"getDocumentHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, getDocumentHandler, $XMLDocumentHandler*)},
	{"getDocumentSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, getDocumentSource, $XMLDocumentSource*)},
	{"getFeatureDefault", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, getFeatureDefault, $Boolean*, $String*)},
	{"getIncludeParentBaseURI", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(XIncludeHandler, getIncludeParentBaseURI, $String*)},
	{"getIncludeParentDepth", "()I", nullptr, $PRIVATE, $method(XIncludeHandler, getIncludeParentDepth, int32_t)},
	{"getIncludeParentLanguage", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(XIncludeHandler, getIncludeParentLanguage, $String*)},
	{"getLanguage", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, getLanguage, $String*, int32_t)},
	{"getPropertyDefault", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, getPropertyDefault, $Object*, $String*)},
	{"getRecognizedFeatures", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, getRecognizedFeatures, $StringArray*)},
	{"getRecognizedProperties", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, getRecognizedProperties, $StringArray*)},
	{"getRelativeBaseURI", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, getRelativeBaseURI, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"getRelativeURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, getRelativeURI, $String*, int32_t), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"getResultDepth", "()I", nullptr, $PRIVATE, $method(XIncludeHandler, getResultDepth, int32_t)},
	{"getRootElementProcessed", "()Z", nullptr, $PRIVATE, $method(XIncludeHandler, getRootElementProcessed, bool)},
	{"getSawFallback", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, getSawFallback, bool, int32_t)},
	{"getSawInclude", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, getSawInclude, bool, int32_t)},
	{"getState", "(I)I", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, getState, int32_t, int32_t)},
	{"getState", "()I", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, getState, int32_t)},
	{"handleFallbackElement", "()V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, handleFallbackElement, void)},
	{"handleIncludeElement", "(Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)Z", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, handleIncludeElement, bool, $XMLAttributes*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"hasXIncludeNamespace", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)Z", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, hasXIncludeNamespace, bool, $QName*)},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, ignorableWhitespace, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"ignoredCharacters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, ignoredCharacters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"internalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, internalEntityDecl, void, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"isFallbackElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)Z", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, isFallbackElement, bool, $QName*)},
	{"isIncludeElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)Z", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, isIncludeElement, bool, $QName*)},
	{"isRootDocument", "()Z", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, isRootDocument, bool)},
	{"isTopLevelIncludedItem", "()Z", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, isTopLevelIncludedItem, bool)},
	{"isTopLevelIncludedItemViaFallback", "()Z", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, isTopLevelIncludedItemViaFallback, bool)},
	{"isTopLevelIncludedItemViaInclude", "()Z", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, isTopLevelIncludedItemViaInclude, bool)},
	{"isValidInHTTPHeader", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(XIncludeHandler, isValidInHTTPHeader, bool, $String*)},
	{"modifyAugmentations", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, modifyAugmentations, $Augmentations*, $Augmentations*)},
	{"modifyAugmentations", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;Z)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, modifyAugmentations, $Augmentations*, $Augmentations*, bool)},
	{"notationDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, notationDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processAttributes", "(Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, processAttributes, $XMLAttributes*, $XMLAttributes*)},
	{"processXMLBaseAttributes", "(Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, processXMLBaseAttributes, void, $XMLAttributes*)},
	{"processXMLLangAttributes", "(Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, processXMLLangAttributes, void, $XMLAttributes*)},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reportError", "(Ljava/lang/String;[Ljava/lang/Object;SLjava/lang/Exception;)V", nullptr, $PRIVATE, $method(XIncludeHandler, reportError, void, $String*, $ObjectArray*, int16_t, $Exception*)},
	{"reportFatalError", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, reportFatalError, void, $String*)},
	{"reportFatalError", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, reportFatalError, void, $String*, $ObjectArray*)},
	{"reportFatalError", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, reportFatalError, void, $String*, $ObjectArray*, $Exception*)},
	{"reportResourceError", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, reportResourceError, void, $String*)},
	{"reportResourceError", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, reportResourceError, void, $String*, $ObjectArray*)},
	{"reportResourceError", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, reportResourceError, void, $String*, $ObjectArray*, $Exception*)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"restoreBaseURI", "()V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, restoreBaseURI, void)},
	{"restoreLanguage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, restoreLanguage, $String*)},
	{"sameBaseURIAsIncludeParent", "()Z", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, sameBaseURIAsIncludeParent, bool)},
	{"sameLanguageAsIncludeParent", "()Z", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, sameLanguageAsIncludeParent, bool)},
	{"saveBaseURI", "()V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, saveBaseURI, void)},
	{"saveLanguage", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, saveLanguage, void, $String*)},
	{"scopeOfBaseURI", "(I)I", nullptr, $PRIVATE, $method(XIncludeHandler, scopeOfBaseURI, int32_t, int32_t)},
	{"scopeOfLanguage", "(I)I", nullptr, $PRIVATE, $method(XIncludeHandler, scopeOfLanguage, int32_t, int32_t)},
	{"searchForRecursiveIncludes", "(Ljava/lang/String;)Z", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, searchForRecursiveIncludes, bool, $String*)},
	{"setDTDHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, setDTDHandler, void, $XMLDTDHandler*)},
	{"setDTDSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, setDTDSource, void, $XMLDTDSource*)},
	{"setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, setDocumentHandler, void, $XMLDocumentHandler*)},
	{"setDocumentSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, setDocumentSource, void, $XMLDocumentSource*)},
	{"setErrorReporter", "(Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;)V", nullptr, $PRIVATE, $method(XIncludeHandler, setErrorReporter, void, $XMLErrorReporter*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setHref", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, setHref, void, $String*)},
	{"setParent", "(Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeHandler;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, setParent, void, XIncludeHandler*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setRootElementProcessed", "(Z)V", nullptr, $PRIVATE, $method(XIncludeHandler, setRootElementProcessed, void, bool)},
	{"setSawFallback", "(IZ)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, setSawFallback, void, int32_t, bool)},
	{"setSawInclude", "(IZ)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, setSawInclude, void, int32_t, bool)},
	{"setState", "(I)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, setState, void, int32_t)},
	{"setXIncludeLocator", "(Lcom/sun/org/apache/xerces/internal/util/XMLLocatorWrapper;)V", nullptr, $PROTECTED, $virtualMethod(XIncludeHandler, setXIncludeLocator, void, $XMLLocatorWrapper*)},
	{"setupCurrentBaseURI", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;)V", nullptr, $PRIVATE, $method(XIncludeHandler, setupCurrentBaseURI, void, $XMLLocator*)},
	{"startAttlist", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, startAttlist, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, startCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startConditional", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, startConditional, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDTD", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, startDTD, void, $XMLLocator*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, startDocument, void, $XMLLocator*, $String*, $NamespaceContext*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, startElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, startExternalSubset, void, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, startGeneralEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, startParameterEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, textDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, unparsedEntityDecl, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"xmlDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler, xmlDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _XIncludeHandler_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler$UnparsedEntity", "com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler", "UnparsedEntity", $PROTECTED | $STATIC},
	{"com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler$Notation", "com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler", "Notation", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _XIncludeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLComponent,com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentFilter,com.sun.org.apache.xerces.internal.xni.parser.XMLDTDFilter",
	_XIncludeHandler_FieldInfo_,
	_XIncludeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_XIncludeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler$UnparsedEntity,com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler$Notation"
};

$Object* allocate$XIncludeHandler($Class* clazz) {
	return $of($alloc(XIncludeHandler));
}

int32_t XIncludeHandler::hashCode() {
	 return this->$XMLComponent::hashCode();
}

bool XIncludeHandler::equals(Object$* arg0) {
	 return this->$XMLComponent::equals(arg0);
}

$Object* XIncludeHandler::clone() {
	 return this->$XMLComponent::clone();
}

$String* XIncludeHandler::toString() {
	 return this->$XMLComponent::toString();
}

void XIncludeHandler::finalize() {
	this->$XMLComponent::finalize();
}

$String* XIncludeHandler::HTTP_ACCEPT = nullptr;
$String* XIncludeHandler::HTTP_ACCEPT_LANGUAGE = nullptr;
$String* XIncludeHandler::XPOINTER = nullptr;
$String* XIncludeHandler::XINCLUDE_NS_URI = nullptr;
$String* XIncludeHandler::XINCLUDE_INCLUDE = nullptr;
$String* XIncludeHandler::XINCLUDE_FALLBACK = nullptr;
$String* XIncludeHandler::XINCLUDE_PARSE_XML = nullptr;
$String* XIncludeHandler::XINCLUDE_PARSE_TEXT = nullptr;
$String* XIncludeHandler::XINCLUDE_ATTR_HREF = nullptr;
$String* XIncludeHandler::XINCLUDE_ATTR_PARSE = nullptr;
$String* XIncludeHandler::XINCLUDE_ATTR_ENCODING = nullptr;
$String* XIncludeHandler::XINCLUDE_ATTR_ACCEPT = nullptr;
$String* XIncludeHandler::XINCLUDE_ATTR_ACCEPT_LANGUAGE = nullptr;
$String* XIncludeHandler::XINCLUDE_INCLUDED = nullptr;
$String* XIncludeHandler::CURRENT_BASE_URI = nullptr;
$String* XIncludeHandler::XINCLUDE_BASE = nullptr;
$QName* XIncludeHandler::XML_BASE_QNAME = nullptr;
$String* XIncludeHandler::XINCLUDE_LANG = nullptr;
$QName* XIncludeHandler::XML_LANG_QNAME = nullptr;
$QName* XIncludeHandler::NEW_NS_ATTR_QNAME = nullptr;
$String* XIncludeHandler::VALIDATION = nullptr;
$String* XIncludeHandler::SCHEMA_VALIDATION = nullptr;
$String* XIncludeHandler::DYNAMIC_VALIDATION = nullptr;
$String* XIncludeHandler::ALLOW_UE_AND_NOTATION_EVENTS = nullptr;
$String* XIncludeHandler::XINCLUDE_FIXUP_BASE_URIS = nullptr;
$String* XIncludeHandler::XINCLUDE_FIXUP_LANGUAGE = nullptr;
$String* XIncludeHandler::JAXP_SCHEMA_LANGUAGE = nullptr;
$String* XIncludeHandler::SYMBOL_TABLE = nullptr;
$String* XIncludeHandler::ERROR_REPORTER = nullptr;
$String* XIncludeHandler::ENTITY_RESOLVER = nullptr;
$String* XIncludeHandler::SECURITY_MANAGER = nullptr;
$String* XIncludeHandler::BUFFER_SIZE = nullptr;
$String* XIncludeHandler::PARSER_SETTINGS = nullptr;
$String* XIncludeHandler::XML_SECURITY_PROPERTY_MANAGER = nullptr;
$StringArray* XIncludeHandler::RECOGNIZED_FEATURES = nullptr;
$BooleanArray* XIncludeHandler::FEATURE_DEFAULTS = nullptr;
$StringArray* XIncludeHandler::RECOGNIZED_PROPERTIES = nullptr;
$ObjectArray* XIncludeHandler::PROPERTY_DEFAULTS = nullptr;
$booleans* XIncludeHandler::gNeedEscaping = nullptr;
$chars* XIncludeHandler::gAfterEscaping1 = nullptr;
$chars* XIncludeHandler::gAfterEscaping2 = nullptr;
$chars* XIncludeHandler::gHexChs = nullptr;

void XIncludeHandler::init$() {
	this->fBufferSize = $XMLEntityManager::DEFAULT_BUFFER_SIZE;
	$set(this, fXPtrProcessor, nullptr);
	$set(this, fXIncludeLocator, $new($XMLLocatorWrapper));
	$set(this, fXIncludeMessageFormatter, $new($XIncludeMessageFormatter));
	$set(this, fSawInclude, $new($booleans, XIncludeHandler::INITIAL_SIZE));
	$set(this, fSawFallback, $new($booleans, XIncludeHandler::INITIAL_SIZE));
	$set(this, fState, $new($ints, XIncludeHandler::INITIAL_SIZE));
	this->fFixupBaseURIs = true;
	this->fFixupLanguage = true;
	this->fNeedCopyFeatures = true;
	this->fUseCatalog = true;
	this->fDepth = 0;
	$nc(this->fSawFallback)->set(this->fDepth, false);
	$nc(this->fSawInclude)->set(this->fDepth, false);
	$nc(this->fState)->set(this->fDepth, XIncludeHandler::STATE_NORMAL_PROCESSING);
	$set(this, fNotations, $new($ArrayList));
	$set(this, fUnparsedEntities, $new($ArrayList));
	$set(this, fBaseURIScope, $new($IntStack));
	$set(this, fBaseURI, $new($Stack));
	$set(this, fLiteralSystemID, $new($Stack));
	$set(this, fExpandedSystemID, $new($Stack));
	$set(this, fCurrentBaseURI, $new($XMLResourceIdentifierImpl));
	$set(this, fLanguageScope, $new($IntStack));
	$set(this, fLanguageStack, $new($Stack));
	$set(this, fCurrentLanguage, nullptr);
}

void XIncludeHandler::reset($XMLComponentManager* componentManager) {
	$useLocalCurrentObjectStackCache();
	$set(this, fNamespaceContext, nullptr);
	this->fDepth = 0;
	this->fResultDepth = isRootDocument() ? 0 : $nc(this->fParentXIncludeHandler)->getResultDepth();
	$nc(this->fNotations)->clear();
	$nc(this->fUnparsedEntities)->clear();
	$set(this, fParentRelativeURI, nullptr);
	this->fIsXML11 = false;
	this->fInDTD = false;
	this->fSeenRootElement = false;
	$nc(this->fBaseURIScope)->clear();
	$nc(this->fBaseURI)->clear();
	$nc(this->fLiteralSystemID)->clear();
	$nc(this->fExpandedSystemID)->clear();
	$nc(this->fLanguageScope)->clear();
	$nc(this->fLanguageStack)->clear();
	for (int32_t i = 0; i < $nc(this->fState)->length; ++i) {
		$nc(this->fState)->set(i, XIncludeHandler::STATE_NORMAL_PROCESSING);
	}
	for (int32_t i = 0; i < $nc(this->fSawFallback)->length; ++i) {
		$nc(this->fSawFallback)->set(i, false);
	}
	for (int32_t i = 0; i < $nc(this->fSawInclude)->length; ++i) {
		$nc(this->fSawInclude)->set(i, false);
	}
	try {
		if (!$nc(componentManager)->getFeature(XIncludeHandler::PARSER_SETTINGS)) {
			return;
		}
	} catch ($XMLConfigurationException& e) {
	}
	this->fNeedCopyFeatures = true;
	try {
		this->fSendUEAndNotationEvents = $nc(componentManager)->getFeature(XIncludeHandler::ALLOW_UE_AND_NOTATION_EVENTS);
		if (this->fChildConfig != nullptr) {
			$nc(this->fChildConfig)->setFeature(XIncludeHandler::ALLOW_UE_AND_NOTATION_EVENTS, this->fSendUEAndNotationEvents);
		}
	} catch ($XMLConfigurationException& e) {
	}
	try {
		this->fFixupBaseURIs = $nc(componentManager)->getFeature(XIncludeHandler::XINCLUDE_FIXUP_BASE_URIS);
		if (this->fChildConfig != nullptr) {
			$nc(this->fChildConfig)->setFeature(XIncludeHandler::XINCLUDE_FIXUP_BASE_URIS, this->fFixupBaseURIs);
		}
	} catch ($XMLConfigurationException& e) {
		this->fFixupBaseURIs = true;
	}
	try {
		this->fFixupLanguage = $nc(componentManager)->getFeature(XIncludeHandler::XINCLUDE_FIXUP_LANGUAGE);
		if (this->fChildConfig != nullptr) {
			$nc(this->fChildConfig)->setFeature(XIncludeHandler::XINCLUDE_FIXUP_LANGUAGE, this->fFixupLanguage);
		}
	} catch ($XMLConfigurationException& e) {
		this->fFixupLanguage = true;
	}
	try {
		$var($SymbolTable, value, $cast($SymbolTable, $nc(componentManager)->getProperty(XIncludeHandler::SYMBOL_TABLE)));
		if (value != nullptr) {
			$set(this, fSymbolTable, value);
			if (this->fChildConfig != nullptr) {
				$nc(this->fChildConfig)->setProperty(XIncludeHandler::SYMBOL_TABLE, value);
			}
		}
	} catch ($XMLConfigurationException& e) {
		$set(this, fSymbolTable, nullptr);
	}
	try {
		$var($XMLErrorReporter, value, $cast($XMLErrorReporter, $nc(componentManager)->getProperty(XIncludeHandler::ERROR_REPORTER)));
		if (value != nullptr) {
			setErrorReporter(value);
			if (this->fChildConfig != nullptr) {
				$nc(this->fChildConfig)->setProperty(XIncludeHandler::ERROR_REPORTER, value);
			}
		}
	} catch ($XMLConfigurationException& e) {
		$set(this, fErrorReporter, nullptr);
	}
	try {
		$var($XMLEntityResolver, value, $cast($XMLEntityResolver, $nc(componentManager)->getProperty(XIncludeHandler::ENTITY_RESOLVER)));
		if (value != nullptr) {
			$set(this, fEntityResolver, value);
			if (this->fChildConfig != nullptr) {
				$nc(this->fChildConfig)->setProperty(XIncludeHandler::ENTITY_RESOLVER, value);
			}
		}
	} catch ($XMLConfigurationException& e) {
		$set(this, fEntityResolver, nullptr);
	}
	try {
		$var($XMLSecurityManager, value, $cast($XMLSecurityManager, $nc(componentManager)->getProperty(XIncludeHandler::SECURITY_MANAGER)));
		if (value != nullptr) {
			$set(this, fSecurityManager, value);
			if (this->fChildConfig != nullptr) {
				$nc(this->fChildConfig)->setProperty(XIncludeHandler::SECURITY_MANAGER, value);
			}
		}
	} catch ($XMLConfigurationException& e) {
		$set(this, fSecurityManager, nullptr);
	}
	$init($JdkConstants);
	$set(this, fSecurityPropertyMgr, $cast($XMLSecurityPropertyManager, $nc(componentManager)->getProperty($JdkConstants::XML_SECURITY_PROPERTY_MANAGER)));
	$init($XMLConstants);
	this->fUseCatalog = componentManager->getFeature($XMLConstants::USE_CATALOG);
	$init($CatalogFeatures$Feature);
	$set(this, fCatalogFile, $cast($String, componentManager->getProperty($($CatalogFeatures$Feature::FILES->getPropertyName()))));
	$set(this, fDefer, $cast($String, componentManager->getProperty($($CatalogFeatures$Feature::DEFER->getPropertyName()))));
	$set(this, fPrefer, $cast($String, componentManager->getProperty($($CatalogFeatures$Feature::PREFER->getPropertyName()))));
	$set(this, fResolve, $cast($String, componentManager->getProperty($($CatalogFeatures$Feature::RESOLVE->getPropertyName()))));
	try {
		$var($Integer, value, $cast($Integer, componentManager->getProperty(XIncludeHandler::BUFFER_SIZE)));
		if (value != nullptr && value->intValue() > 0) {
			this->fBufferSize = value->intValue();
			if (this->fChildConfig != nullptr) {
				$nc(this->fChildConfig)->setProperty(XIncludeHandler::BUFFER_SIZE, value);
			}
		} else {
			this->fBufferSize = $nc(($cast($Integer, $(getPropertyDefault(XIncludeHandler::BUFFER_SIZE)))))->intValue();
		}
	} catch ($XMLConfigurationException& e) {
		this->fBufferSize = $nc(($cast($Integer, $(getPropertyDefault(XIncludeHandler::BUFFER_SIZE)))))->intValue();
	}
	if (this->fXInclude10TextReader != nullptr) {
		$nc(this->fXInclude10TextReader)->setBufferSize(this->fBufferSize);
	}
	if (this->fXInclude11TextReader != nullptr) {
		$nc(this->fXInclude11TextReader)->setBufferSize(this->fBufferSize);
	}
	$set(this, fSettings, $new($ParserConfigurationSettings));
	copyFeatures(componentManager, this->fSettings);
	try {
		if (componentManager->getFeature(XIncludeHandler::SCHEMA_VALIDATION)) {
			$nc(this->fSettings)->setFeature(XIncludeHandler::SCHEMA_VALIDATION, false);
			$init($Constants);
			if ($nc($Constants::NS_XMLSCHEMA)->equals($(componentManager->getProperty(XIncludeHandler::JAXP_SCHEMA_LANGUAGE)))) {
				$nc(this->fSettings)->setFeature(XIncludeHandler::VALIDATION, false);
			} else if (componentManager->getFeature(XIncludeHandler::VALIDATION)) {
				$nc(this->fSettings)->setFeature(XIncludeHandler::DYNAMIC_VALIDATION, true);
			}
		}
	} catch ($XMLConfigurationException& e) {
	}
}

$StringArray* XIncludeHandler::getRecognizedFeatures() {
	return $cast($StringArray, $nc(XIncludeHandler::RECOGNIZED_FEATURES)->clone());
}

void XIncludeHandler::setFeature($String* featureId, bool state) {
	if ($nc(featureId)->equals(XIncludeHandler::ALLOW_UE_AND_NOTATION_EVENTS)) {
		this->fSendUEAndNotationEvents = state;
	}
	if (this->fSettings != nullptr) {
		this->fNeedCopyFeatures = true;
		$nc(this->fSettings)->setFeature(featureId, state);
	}
}

$StringArray* XIncludeHandler::getRecognizedProperties() {
	return $cast($StringArray, $nc(XIncludeHandler::RECOGNIZED_PROPERTIES)->clone());
}

void XIncludeHandler::setProperty($String* propertyId, Object$* value) {
	if ($nc(propertyId)->equals(XIncludeHandler::SYMBOL_TABLE)) {
		$set(this, fSymbolTable, $cast($SymbolTable, value));
		if (this->fChildConfig != nullptr) {
			$nc(this->fChildConfig)->setProperty(propertyId, value);
		}
		return;
	}
	if ($nc(propertyId)->equals(XIncludeHandler::ERROR_REPORTER)) {
		setErrorReporter($cast($XMLErrorReporter, value));
		if (this->fChildConfig != nullptr) {
			$nc(this->fChildConfig)->setProperty(propertyId, value);
		}
		return;
	}
	if ($nc(propertyId)->equals(XIncludeHandler::ENTITY_RESOLVER)) {
		$set(this, fEntityResolver, $cast($XMLEntityResolver, value));
		if (this->fChildConfig != nullptr) {
			$nc(this->fChildConfig)->setProperty(propertyId, value);
		}
		return;
	}
	if ($nc(propertyId)->equals(XIncludeHandler::SECURITY_MANAGER)) {
		$set(this, fSecurityManager, $cast($XMLSecurityManager, value));
		if (this->fChildConfig != nullptr) {
			$nc(this->fChildConfig)->setProperty(propertyId, value);
		}
		return;
	}
	if ($nc(propertyId)->equals(XIncludeHandler::XML_SECURITY_PROPERTY_MANAGER)) {
		$set(this, fSecurityPropertyMgr, $cast($XMLSecurityPropertyManager, value));
		if (this->fChildConfig != nullptr) {
			$nc(this->fChildConfig)->setProperty(XIncludeHandler::XML_SECURITY_PROPERTY_MANAGER, value);
		}
		return;
	}
	if ($nc(propertyId)->equals(XIncludeHandler::BUFFER_SIZE)) {
		$var($Integer, bufferSize, $cast($Integer, value));
		if (this->fChildConfig != nullptr) {
			$nc(this->fChildConfig)->setProperty(propertyId, value);
		}
		if (bufferSize != nullptr && bufferSize->intValue() > 0) {
			this->fBufferSize = bufferSize->intValue();
			if (this->fXInclude10TextReader != nullptr) {
				$nc(this->fXInclude10TextReader)->setBufferSize(this->fBufferSize);
			}
			if (this->fXInclude11TextReader != nullptr) {
				$nc(this->fXInclude11TextReader)->setBufferSize(this->fBufferSize);
			}
		}
		return;
	}
}

$Boolean* XIncludeHandler::getFeatureDefault($String* featureId) {
	for (int32_t i = 0; i < $nc(XIncludeHandler::RECOGNIZED_FEATURES)->length; ++i) {
		if ($nc($nc(XIncludeHandler::RECOGNIZED_FEATURES)->get(i))->equals(featureId)) {
			return $nc(XIncludeHandler::FEATURE_DEFAULTS)->get(i);
		}
	}
	return nullptr;
}

$Object* XIncludeHandler::getPropertyDefault($String* propertyId) {
	for (int32_t i = 0; i < $nc(XIncludeHandler::RECOGNIZED_PROPERTIES)->length; ++i) {
		if ($nc($nc(XIncludeHandler::RECOGNIZED_PROPERTIES)->get(i))->equals(propertyId)) {
			return $of($nc(XIncludeHandler::PROPERTY_DEFAULTS)->get(i));
		}
	}
	return $of(nullptr);
}

void XIncludeHandler::setDocumentHandler($XMLDocumentHandler* handler) {
	if (this->fDocumentHandler != handler) {
		$set(this, fDocumentHandler, handler);
		if (this->fXIncludeChildConfig != nullptr) {
			$nc(this->fXIncludeChildConfig)->setDocumentHandler(handler);
		}
		if (this->fXPointerChildConfig != nullptr) {
			$nc(this->fXPointerChildConfig)->setDocumentHandler(handler);
		}
	}
}

$XMLDocumentHandler* XIncludeHandler::getDocumentHandler() {
	return this->fDocumentHandler;
}

void XIncludeHandler::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* namespaceContext, $Augmentations* augs$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Augmentations, augs, augs$renamed);
	$nc(this->fErrorReporter)->setDocumentLocator(locator);
	if (!($instanceOf($XIncludeNamespaceSupport, namespaceContext))) {
		reportFatalError("IncompatibleNamespaceContext"_s);
	}
	$set(this, fNamespaceContext, $cast($XIncludeNamespaceSupport, namespaceContext));
	$set(this, fDocLocation, locator);
	$nc(this->fXIncludeLocator)->setLocator(this->fDocLocation);
	setupCurrentBaseURI(locator);
	saveBaseURI();
	if (augs == nullptr) {
		$assign(augs, $new($AugmentationsImpl));
	}
	$nc(augs)->putItem(XIncludeHandler::CURRENT_BASE_URI, this->fCurrentBaseURI);
	if (!isRootDocument()) {
		$nc(this->fParentXIncludeHandler)->fHasIncludeReportedContent = true;
		if ($nc(this->fParentXIncludeHandler)->searchForRecursiveIncludes($($nc(this->fCurrentBaseURI)->getExpandedSystemId()))) {
			reportFatalError("RecursiveInclude"_s, $$new($ObjectArray, {$($of($nc(this->fCurrentBaseURI)->getExpandedSystemId()))}));
		}
	}
	$init($XMLSymbols);
	$set(this, fCurrentLanguage, $XMLSymbols::EMPTY_STRING);
	saveLanguage(this->fCurrentLanguage);
	if (isRootDocument() && this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->startDocument(this->fXIncludeLocator, encoding, namespaceContext, augs);
	}
}

void XIncludeHandler::xmlDecl($String* version, $String* encoding, $String* standalone, $Augmentations* augs) {
	this->fIsXML11 = "1.1"_s->equals(version);
	if (isRootDocument() && this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->xmlDecl(version, encoding, standalone, augs);
	}
}

void XIncludeHandler::doctypeDecl($String* rootElement, $String* publicId, $String* systemId, $Augmentations* augs) {
	if (isRootDocument() && this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->doctypeDecl(rootElement, publicId, systemId, augs);
	}
}

void XIncludeHandler::comment($XMLString* text, $Augmentations* augs$renamed) {
	$var($Augmentations, augs, augs$renamed);
	if (!this->fInDTD) {
		if (this->fDocumentHandler != nullptr && getState() == XIncludeHandler::STATE_NORMAL_PROCESSING) {
			++this->fDepth;
			$assign(augs, modifyAugmentations(augs));
			$nc(this->fDocumentHandler)->comment(text, augs);
			--this->fDepth;
		}
	} else if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->comment(text, augs);
	}
}

void XIncludeHandler::processingInstruction($String* target, $XMLString* data, $Augmentations* augs$renamed) {
	$var($Augmentations, augs, augs$renamed);
	if (!this->fInDTD) {
		if (this->fDocumentHandler != nullptr && getState() == XIncludeHandler::STATE_NORMAL_PROCESSING) {
			++this->fDepth;
			$assign(augs, modifyAugmentations(augs));
			$nc(this->fDocumentHandler)->processingInstruction(target, data, augs);
			--this->fDepth;
		}
	} else if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->processingInstruction(target, data, augs);
	}
}

void XIncludeHandler::startElement($QName* element, $XMLAttributes* attributes$renamed, $Augmentations* augs$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($XMLAttributes, attributes, attributes$renamed);
	$var($Augmentations, augs, augs$renamed);
	++this->fDepth;
	int32_t lastState = getState(this->fDepth - 1);
	if (lastState == XIncludeHandler::STATE_EXPECT_FALLBACK && getState(this->fDepth - 2) == XIncludeHandler::STATE_EXPECT_FALLBACK) {
		setState(XIncludeHandler::STATE_IGNORE);
	} else {
		setState(lastState);
	}
	processXMLBaseAttributes(attributes);
	if (this->fFixupLanguage) {
		processXMLLangAttributes(attributes);
	}
	if (isIncludeElement(element)) {
		bool success = this->handleIncludeElement(attributes);
		if (success) {
			setState(XIncludeHandler::STATE_IGNORE);
		} else {
			setState(XIncludeHandler::STATE_EXPECT_FALLBACK);
		}
	} else if (isFallbackElement(element)) {
		this->handleFallbackElement();
	} else if (hasXIncludeNamespace(element)) {
		if (getSawInclude(this->fDepth - 1)) {
			reportFatalError("IncludeChild"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}));
		}
		if (getSawFallback(this->fDepth - 1)) {
			reportFatalError("FallbackChild"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}));
		}
		if (getState() == XIncludeHandler::STATE_NORMAL_PROCESSING) {
			if (this->fResultDepth++ == 0) {
				checkMultipleRootElements();
			}
			if (this->fDocumentHandler != nullptr) {
				$assign(augs, modifyAugmentations(augs));
				$assign(attributes, processAttributes(attributes));
				$nc(this->fDocumentHandler)->startElement(element, attributes, augs);
			}
		}
	} else if (getState() == XIncludeHandler::STATE_NORMAL_PROCESSING) {
		if (this->fResultDepth++ == 0) {
			checkMultipleRootElements();
		}
		if (this->fDocumentHandler != nullptr) {
			$assign(augs, modifyAugmentations(augs));
			$assign(attributes, processAttributes(attributes));
			$nc(this->fDocumentHandler)->startElement(element, attributes, augs);
		}
	}
}

void XIncludeHandler::emptyElement($QName* element, $XMLAttributes* attributes$renamed, $Augmentations* augs$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($XMLAttributes, attributes, attributes$renamed);
	$var($Augmentations, augs, augs$renamed);
	++this->fDepth;
	int32_t lastState = getState(this->fDepth - 1);
	if (lastState == XIncludeHandler::STATE_EXPECT_FALLBACK && getState(this->fDepth - 2) == XIncludeHandler::STATE_EXPECT_FALLBACK) {
		setState(XIncludeHandler::STATE_IGNORE);
	} else {
		setState(lastState);
	}
	processXMLBaseAttributes(attributes);
	if (this->fFixupLanguage) {
		processXMLLangAttributes(attributes);
	}
	if (isIncludeElement(element)) {
		bool success = this->handleIncludeElement(attributes);
		if (success) {
			setState(XIncludeHandler::STATE_IGNORE);
		} else {
			reportFatalError("NoFallback"_s, $$new($ObjectArray, {$($of($nc(attributes)->getValue(nullptr, "href"_s)))}));
		}
	} else if (isFallbackElement(element)) {
		this->handleFallbackElement();
	} else if (hasXIncludeNamespace(element)) {
		if (getSawInclude(this->fDepth - 1)) {
			reportFatalError("IncludeChild"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}));
		}
		if (getSawFallback(this->fDepth - 1)) {
			reportFatalError("FallbackChild"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}));
		}
		if (getState() == XIncludeHandler::STATE_NORMAL_PROCESSING) {
			if (this->fResultDepth == 0) {
				checkMultipleRootElements();
			}
			if (this->fDocumentHandler != nullptr) {
				$assign(augs, modifyAugmentations(augs));
				$assign(attributes, processAttributes(attributes));
				$nc(this->fDocumentHandler)->emptyElement(element, attributes, augs);
			}
		}
	} else if (getState() == XIncludeHandler::STATE_NORMAL_PROCESSING) {
		if (this->fResultDepth == 0) {
			checkMultipleRootElements();
		}
		if (this->fDocumentHandler != nullptr) {
			$assign(augs, modifyAugmentations(augs));
			$assign(attributes, processAttributes(attributes));
			$nc(this->fDocumentHandler)->emptyElement(element, attributes, augs);
		}
	}
	setSawFallback(this->fDepth + 1, false);
	setSawInclude(this->fDepth, false);
	bool var$0 = $nc(this->fBaseURIScope)->size() > 0;
	if (var$0 && this->fDepth == $nc(this->fBaseURIScope)->peek()) {
		restoreBaseURI();
	}
	--this->fDepth;
}

void XIncludeHandler::endElement($QName* element, $Augmentations* augs) {
	if (isIncludeElement(element)) {
		bool var$0 = getState() == XIncludeHandler::STATE_EXPECT_FALLBACK;
		if (var$0 && !getSawFallback(this->fDepth + 1)) {
			reportFatalError("NoFallback"_s, $$new($ObjectArray, {$of("unknown"_s)}));
		}
	}
	if (isFallbackElement(element)) {
		if (getState() == XIncludeHandler::STATE_NORMAL_PROCESSING) {
			setState(XIncludeHandler::STATE_IGNORE);
		}
	} else if (getState() == XIncludeHandler::STATE_NORMAL_PROCESSING) {
		--this->fResultDepth;
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->endElement(element, augs);
		}
	}
	setSawFallback(this->fDepth + 1, false);
	setSawInclude(this->fDepth, false);
	bool var$1 = $nc(this->fBaseURIScope)->size() > 0;
	if (var$1 && this->fDepth == $nc(this->fBaseURIScope)->peek()) {
		restoreBaseURI();
	}
	bool var$2 = $nc(this->fLanguageScope)->size() > 0;
	if (var$2 && this->fDepth == $nc(this->fLanguageScope)->peek()) {
		$set(this, fCurrentLanguage, restoreLanguage());
	}
	--this->fDepth;
}

void XIncludeHandler::startGeneralEntity($String* name, $XMLResourceIdentifier* resId, $String* encoding, $Augmentations* augs) {
	if (getState() == XIncludeHandler::STATE_NORMAL_PROCESSING) {
		if (this->fResultDepth == 0) {
			$init($Boolean);
			$init($Constants);
			if (augs != nullptr && $nc($Boolean::TRUE)->equals($(augs->getItem($Constants::ENTITY_SKIPPED)))) {
				reportFatalError("UnexpandedEntityReferenceIllegal"_s);
			}
		} else if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->startGeneralEntity(name, resId, encoding, augs);
		}
	}
}

void XIncludeHandler::textDecl($String* version, $String* encoding, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && getState() == XIncludeHandler::STATE_NORMAL_PROCESSING) {
		$nc(this->fDocumentHandler)->textDecl(version, encoding, augs);
	}
}

void XIncludeHandler::endGeneralEntity($String* name, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && getState() == XIncludeHandler::STATE_NORMAL_PROCESSING && this->fResultDepth != 0) {
		$nc(this->fDocumentHandler)->endGeneralEntity(name, augs);
	}
}

void XIncludeHandler::characters($XMLString* text, $Augmentations* augs$renamed) {
	$var($Augmentations, augs, augs$renamed);
	if (getState() == XIncludeHandler::STATE_NORMAL_PROCESSING) {
		if (this->fResultDepth == 0) {
			checkWhitespace(text);
		} else if (this->fDocumentHandler != nullptr) {
			++this->fDepth;
			$assign(augs, modifyAugmentations(augs));
			$nc(this->fDocumentHandler)->characters(text, augs);
			--this->fDepth;
		}
	}
}

void XIncludeHandler::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && getState() == XIncludeHandler::STATE_NORMAL_PROCESSING && this->fResultDepth != 0) {
		$nc(this->fDocumentHandler)->ignorableWhitespace(text, augs);
	}
}

void XIncludeHandler::startCDATA($Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && getState() == XIncludeHandler::STATE_NORMAL_PROCESSING && this->fResultDepth != 0) {
		$nc(this->fDocumentHandler)->startCDATA(augs);
	}
}

void XIncludeHandler::endCDATA($Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && getState() == XIncludeHandler::STATE_NORMAL_PROCESSING && this->fResultDepth != 0) {
		$nc(this->fDocumentHandler)->endCDATA(augs);
	}
}

void XIncludeHandler::endDocument($Augmentations* augs) {
	if (isRootDocument()) {
		if (!this->fSeenRootElement) {
			reportFatalError("RootElementRequired"_s);
		}
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->endDocument(augs);
		}
	}
}

void XIncludeHandler::setDocumentSource($XMLDocumentSource* source) {
	$set(this, fDocumentSource, source);
}

$XMLDocumentSource* XIncludeHandler::getDocumentSource() {
	return this->fDocumentSource;
}

void XIncludeHandler::attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, $XMLString* defaultValue, $XMLString* nonNormalizedDefaultValue, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->attributeDecl(elementName, attributeName, type, enumeration, defaultType, defaultValue, nonNormalizedDefaultValue, augmentations);
	}
}

void XIncludeHandler::elementDecl($String* name, $String* contentModel, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->elementDecl(name, contentModel, augmentations);
	}
}

void XIncludeHandler::endAttlist($Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->endAttlist(augmentations);
	}
}

void XIncludeHandler::endConditional($Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->endConditional(augmentations);
	}
}

void XIncludeHandler::endDTD($Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->endDTD(augmentations);
	}
	this->fInDTD = false;
}

void XIncludeHandler::endExternalSubset($Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->endExternalSubset(augmentations);
	}
}

void XIncludeHandler::endParameterEntity($String* name, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->endParameterEntity(name, augmentations);
	}
}

void XIncludeHandler::externalEntityDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->externalEntityDecl(name, identifier, augmentations);
	}
}

$XMLDTDSource* XIncludeHandler::getDTDSource() {
	return this->fDTDSource;
}

void XIncludeHandler::ignoredCharacters($XMLString* text, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->ignoredCharacters(text, augmentations);
	}
}

void XIncludeHandler::internalEntityDecl($String* name, $XMLString* text, $XMLString* nonNormalizedText, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->internalEntityDecl(name, text, nonNormalizedText, augmentations);
	}
}

void XIncludeHandler::notationDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
	this->addNotation(name, identifier, augmentations);
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->notationDecl(name, identifier, augmentations);
	}
}

void XIncludeHandler::setDTDSource($XMLDTDSource* source) {
	$set(this, fDTDSource, source);
}

void XIncludeHandler::startAttlist($String* elementName, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->startAttlist(elementName, augmentations);
	}
}

void XIncludeHandler::startConditional(int16_t type, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->startConditional(type, augmentations);
	}
}

void XIncludeHandler::startDTD($XMLLocator* locator, $Augmentations* augmentations) {
	this->fInDTD = true;
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->startDTD(locator, augmentations);
	}
}

void XIncludeHandler::startExternalSubset($XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->startExternalSubset(identifier, augmentations);
	}
}

void XIncludeHandler::startParameterEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->startParameterEntity(name, identifier, encoding, augmentations);
	}
}

void XIncludeHandler::unparsedEntityDecl($String* name, $XMLResourceIdentifier* identifier, $String* notation, $Augmentations* augmentations) {
	this->addUnparsedEntity(name, identifier, notation, augmentations);
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->unparsedEntityDecl(name, identifier, notation, augmentations);
	}
}

$XMLDTDHandler* XIncludeHandler::getDTDHandler() {
	return this->fDTDHandler;
}

void XIncludeHandler::setDTDHandler($XMLDTDHandler* handler) {
	$set(this, fDTDHandler, handler);
}

void XIncludeHandler::setErrorReporter($XMLErrorReporter* reporter) {
	$set(this, fErrorReporter, reporter);
	if (this->fErrorReporter != nullptr) {
		$init($XIncludeMessageFormatter);
		$nc(this->fErrorReporter)->putMessageFormatter($XIncludeMessageFormatter::XINCLUDE_DOMAIN, this->fXIncludeMessageFormatter);
		if (this->fDocLocation != nullptr) {
			$nc(this->fErrorReporter)->setDocumentLocator(this->fDocLocation);
		}
	}
}

void XIncludeHandler::handleFallbackElement() {
	if (!getSawInclude(this->fDepth - 1)) {
		if (getState() == XIncludeHandler::STATE_IGNORE) {
			return;
		}
		reportFatalError("FallbackParent"_s);
	}
	setSawInclude(this->fDepth, false);
	$nc(this->fNamespaceContext)->setContextInvalid();
	if (getSawFallback(this->fDepth)) {
		reportFatalError("MultipleFallbacks"_s);
	} else {
		setSawFallback(this->fDepth, true);
	}
	if (getState() == XIncludeHandler::STATE_EXPECT_FALLBACK) {
		setState(XIncludeHandler::STATE_NORMAL_PROCESSING);
	}
}

bool XIncludeHandler::handleIncludeElement($XMLAttributes* attributes) {
	$useLocalCurrentObjectStackCache();
	if (getSawInclude(this->fDepth - 1)) {
		reportFatalError("IncludeChild"_s, $$new($ObjectArray, {$of(XIncludeHandler::XINCLUDE_INCLUDE)}));
	}
	if (getState() == XIncludeHandler::STATE_IGNORE) {
		return true;
	}
	setSawInclude(this->fDepth, true);
	$nc(this->fNamespaceContext)->setContextInvalid();
	$var($String, href, $nc(attributes)->getValue(XIncludeHandler::XINCLUDE_ATTR_HREF));
	$var($String, parse, attributes->getValue(XIncludeHandler::XINCLUDE_ATTR_PARSE));
	$var($String, xpointer, attributes->getValue(XIncludeHandler::XPOINTER));
	$var($String, accept, attributes->getValue(XIncludeHandler::XINCLUDE_ATTR_ACCEPT));
	$var($String, acceptLanguage, attributes->getValue(XIncludeHandler::XINCLUDE_ATTR_ACCEPT_LANGUAGE));
	if (parse == nullptr) {
		$assign(parse, XIncludeHandler::XINCLUDE_PARSE_XML);
	}
	if (href == nullptr) {
		$init($XMLSymbols);
		$assign(href, $XMLSymbols::EMPTY_STRING);
	}
	bool var$0 = $nc(href)->length() == 0;
	if (var$0 && $nc(XIncludeHandler::XINCLUDE_PARSE_XML)->equals(parse)) {
		if (xpointer == nullptr) {
			reportFatalError("XpointerMissing"_s);
		} else {
			$var($Locale, locale, (this->fErrorReporter != nullptr) ? $nc(this->fErrorReporter)->getLocale() : ($Locale*)nullptr);
			$var($String, reason, $nc(this->fXIncludeMessageFormatter)->formatMessage(locale, "XPointerStreamability"_s, nullptr));
			reportResourceError("XMLResourceError"_s, $$new($ObjectArray, {
				$of(href),
				$of(reason)
			}));
			return false;
		}
	}
	$var($URI, hrefURI, nullptr);
	try {
		$assign(hrefURI, $new($URI, href, true));
		if (hrefURI->getFragment() != nullptr) {
			reportFatalError("HrefFragmentIdentifierIllegal"_s, $$new($ObjectArray, {$of(href)}));
		}
	} catch ($URI$MalformedURIException& exc) {
		$var($String, newHref, escapeHref(href));
		if (href != newHref) {
			$assign(href, newHref);
			try {
				$assign(hrefURI, $new($URI, href, true));
				if (hrefURI->getFragment() != nullptr) {
					reportFatalError("HrefFragmentIdentifierIllegal"_s, $$new($ObjectArray, {$of(href)}));
				}
			} catch ($URI$MalformedURIException& exc2) {
				reportFatalError("HrefSyntacticallyInvalid"_s, $$new($ObjectArray, {$of(href)}));
			}
		} else {
			reportFatalError("HrefSyntacticallyInvalid"_s, $$new($ObjectArray, {$of(href)}));
		}
	}
	if (accept != nullptr && !isValidInHTTPHeader(accept)) {
		reportFatalError("AcceptMalformed"_s, nullptr);
		$assign(accept, nullptr);
	}
	if (acceptLanguage != nullptr && !isValidInHTTPHeader(acceptLanguage)) {
		reportFatalError("AcceptLanguageMalformed"_s, nullptr);
		$assign(acceptLanguage, nullptr);
	}
	$var($XMLInputSource, includedSource, nullptr);
	if (this->fEntityResolver != nullptr) {
		try {
			$var($String, var$1, href);
			$var($String, var$2, $nc(this->fCurrentBaseURI)->getExpandedSystemId());
			$var($XMLResourceIdentifier, resourceIdentifier, $new($XMLResourceIdentifierImpl, nullptr, var$1, var$2, $($XMLEntityManager::expandSystemId(href, $($nc(this->fCurrentBaseURI)->getExpandedSystemId()), false))));
			$assign(includedSource, $nc(this->fEntityResolver)->resolveEntity(resourceIdentifier));
			if (includedSource == nullptr && this->fUseCatalog) {
				if (this->fCatalogFeatures == nullptr) {
					$set(this, fCatalogFeatures, $JdkXmlUtils::getCatalogFeatures(this->fDefer, this->fCatalogFile, this->fPrefer, this->fResolve));
				}
				$init($CatalogFeatures$Feature);
				$set(this, fCatalogFile, $nc(this->fCatalogFeatures)->get($CatalogFeatures$Feature::FILES));
				if (this->fCatalogFile != nullptr) {
					$var($Source, source, nullptr);
					try {
						if (this->fCatalogResolver == nullptr) {
							$set(this, fCatalogResolver, $CatalogManager::catalogResolver(this->fCatalogFeatures, $$new($URIArray, 0)));
						}
						$assign(source, $nc(this->fCatalogResolver)->resolve(href, $($nc(this->fCurrentBaseURI)->getExpandedSystemId())));
					} catch ($CatalogException& e) {
					}
					if (source != nullptr && !source->isEmpty()) {
						$var($String, var$3, source->getSystemId());
						$assign(includedSource, $new($XMLInputSource, nullptr, var$3, $($nc(this->fCurrentBaseURI)->getExpandedSystemId()), true));
					} else {
						if (this->fCatalogResolver == nullptr) {
							$set(this, fCatalogResolver, $CatalogManager::catalogResolver(this->fCatalogFeatures, $$new($URIArray, 0)));
						}
						$var($InputSource, is, $nc(this->fCatalogResolver)->resolveEntity(href, href));
						if (is != nullptr && !is->isEmpty()) {
							$assign(includedSource, $new($XMLInputSource, is, true));
						}
					}
				}
			}
			bool var$4 = includedSource != nullptr && !($instanceOf($HTTPInputSource, includedSource)) && (accept != nullptr || acceptLanguage != nullptr) && $nc(includedSource)->getCharacterStream() == nullptr;
			if (var$4 && includedSource->getByteStream() == nullptr) {
				$var($String, var$5, includedSource->getPublicId());
				$var($String, var$6, includedSource->getSystemId());
				$assign(includedSource, createInputSource(var$5, var$6, $(includedSource->getBaseSystemId()), accept, acceptLanguage));
			}
		} catch ($IOException& e) {
			reportResourceError("XMLResourceError"_s, $$new($ObjectArray, {
				$of(href),
				$($of(e->getMessage()))
			}), e);
			return false;
		} catch ($CatalogException& e) {
			reportResourceError("XMLResourceError"_s, $$new($ObjectArray, {
				$of(href),
				$($of(e->getMessage()))
			}), e);
			return false;
		}
	}
	if (includedSource == nullptr) {
		if (accept != nullptr || acceptLanguage != nullptr) {
			$assign(includedSource, createInputSource(nullptr, href, $($nc(this->fCurrentBaseURI)->getExpandedSystemId()), accept, acceptLanguage));
		} else {
			$assign(includedSource, $new($XMLInputSource, nullptr, href, $($nc(this->fCurrentBaseURI)->getExpandedSystemId()), false));
		}
	}
	if ($nc(parse)->equals(XIncludeHandler::XINCLUDE_PARSE_XML)) {
		if ((xpointer != nullptr && this->fXPointerChildConfig == nullptr) || (xpointer == nullptr && this->fXIncludeChildConfig == nullptr)) {
			if (xpointer == nullptr) {
				$set(this, fChildConfig, $new($XIncludeParserConfiguration));
			} else {
				$set(this, fChildConfig, $new($XPointerParserConfiguration));
			}
			if (this->fSymbolTable != nullptr) {
				$nc(this->fChildConfig)->setProperty(XIncludeHandler::SYMBOL_TABLE, this->fSymbolTable);
			}
			if (this->fErrorReporter != nullptr) {
				$nc(this->fChildConfig)->setProperty(XIncludeHandler::ERROR_REPORTER, this->fErrorReporter);
			}
			if (this->fEntityResolver != nullptr) {
				$nc(this->fChildConfig)->setProperty(XIncludeHandler::ENTITY_RESOLVER, this->fEntityResolver);
			}
			$nc(this->fChildConfig)->setProperty(XIncludeHandler::SECURITY_MANAGER, this->fSecurityManager);
			$nc(this->fChildConfig)->setProperty(XIncludeHandler::XML_SECURITY_PROPERTY_MANAGER, this->fSecurityPropertyMgr);
			$nc(this->fChildConfig)->setProperty(XIncludeHandler::BUFFER_SIZE, $($Integer::valueOf(this->fBufferSize)));
			this->fNeedCopyFeatures = true;
			$init($Constants);
			$nc(this->fChildConfig)->setProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::NAMESPACE_CONTEXT_PROPERTY}), this->fNamespaceContext);
			$nc(this->fChildConfig)->setFeature(XIncludeHandler::XINCLUDE_FIXUP_BASE_URIS, this->fFixupBaseURIs);
			$nc(this->fChildConfig)->setFeature(XIncludeHandler::XINCLUDE_FIXUP_LANGUAGE, this->fFixupLanguage);
			if (xpointer != nullptr) {
				$var($XPointerHandler, newHandler, $cast($XPointerHandler, $nc(this->fChildConfig)->getProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XPOINTER_HANDLER_PROPERTY}))));
				$set(this, fXPtrProcessor, newHandler);
				$nc(($cast($XPointerHandler, this->fXPtrProcessor)))->setProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::NAMESPACE_CONTEXT_PROPERTY}), this->fNamespaceContext);
				$nc(($cast($XPointerHandler, this->fXPtrProcessor)))->setProperty(XIncludeHandler::XINCLUDE_FIXUP_BASE_URIS, $($Boolean::valueOf(this->fFixupBaseURIs)));
				$nc(($cast($XPointerHandler, this->fXPtrProcessor)))->setProperty(XIncludeHandler::XINCLUDE_FIXUP_LANGUAGE, $($Boolean::valueOf(this->fFixupLanguage)));
				if (this->fErrorReporter != nullptr) {
					$nc(($cast($XPointerHandler, this->fXPtrProcessor)))->setProperty(XIncludeHandler::ERROR_REPORTER, this->fErrorReporter);
				}
				$nc(newHandler)->setParent(this);
				newHandler->setHref(href);
				newHandler->setXIncludeLocator(this->fXIncludeLocator);
				newHandler->setDocumentHandler($(this->getDocumentHandler()));
				$set(this, fXPointerChildConfig, this->fChildConfig);
			} else {
				$var(XIncludeHandler, newHandler, $cast(XIncludeHandler, $nc(this->fChildConfig)->getProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XINCLUDE_HANDLER_PROPERTY}))));
				$nc(newHandler)->setParent(this);
				newHandler->setHref(href);
				newHandler->setDocumentHandler($(this->getDocumentHandler()));
				$set(this, fXIncludeChildConfig, this->fChildConfig);
			}
		}
		if (xpointer != nullptr) {
			$set(this, fChildConfig, this->fXPointerChildConfig);
			try {
				$nc(this->fXPtrProcessor)->parseXPointer(xpointer);
			} catch ($XNIException& ex) {
				reportResourceError("XMLResourceError"_s, $$new($ObjectArray, {
					$of(href),
					$($of(ex->getMessage()))
				}));
				return false;
			}
		} else {
			$set(this, fChildConfig, this->fXIncludeChildConfig);
		}
		if (this->fNeedCopyFeatures) {
			copyFeatures(static_cast<$XMLComponentManager*>(this->fSettings), this->fChildConfig);
		}
		this->fNeedCopyFeatures = false;
		{
			$var($Throwable, var$7, nullptr);
			bool var$9 = false;
			bool return$8 = false;
			try {
				try {
					this->fHasIncludeReportedContent = false;
					$nc(this->fNamespaceContext)->pushScope();
					$nc(this->fChildConfig)->parse(includedSource);
					$nc(this->fXIncludeLocator)->setLocator(this->fDocLocation);
					if (this->fErrorReporter != nullptr) {
						$nc(this->fErrorReporter)->setDocumentLocator(this->fDocLocation);
					}
					if (xpointer != nullptr) {
						if (!$nc(this->fXPtrProcessor)->isXPointerResolved()) {
							$var($Locale, locale, (this->fErrorReporter != nullptr) ? $nc(this->fErrorReporter)->getLocale() : ($Locale*)nullptr);
							$var($String, reason, $nc(this->fXIncludeMessageFormatter)->formatMessage(locale, "XPointerResolutionUnsuccessful"_s, nullptr));
							reportResourceError("XMLResourceError"_s, $$new($ObjectArray, {
								$of(href),
								$of(reason)
							}));
							var$9 = false;
							return$8 = true;
							goto $finally;
						}
					}
				} catch ($XNIException& e) {
					$nc(this->fXIncludeLocator)->setLocator(this->fDocLocation);
					if (this->fErrorReporter != nullptr) {
						$nc(this->fErrorReporter)->setDocumentLocator(this->fDocLocation);
					}
					reportFatalError("XMLParseError"_s, $$new($ObjectArray, {
						$of(href),
						$($of(e->getMessage()))
					}));
				} catch ($IOException& e) {
					$nc(this->fXIncludeLocator)->setLocator(this->fDocLocation);
					if (this->fErrorReporter != nullptr) {
						$nc(this->fErrorReporter)->setDocumentLocator(this->fDocLocation);
					}
					if (this->fHasIncludeReportedContent) {
						$throwNew($XNIException, static_cast<$Exception*>(e));
					}
					reportResourceError("XMLResourceError"_s, $$new($ObjectArray, {
						$of(href),
						$($of(e->getMessage()))
					}), e);
					var$9 = false;
					return$8 = true;
					goto $finally;
				}
			} catch ($Throwable& var$10) {
				$assign(var$7, var$10);
			} $finally: {
				$nc(this->fNamespaceContext)->popScope();
			}
			if (var$7 != nullptr) {
				$throw(var$7);
			}
			if (return$8) {
				return var$9;
			}
		}
	} else if (parse->equals(XIncludeHandler::XINCLUDE_PARSE_TEXT)) {
		$var($String, encoding, attributes->getValue(XIncludeHandler::XINCLUDE_ATTR_ENCODING));
		$nc(includedSource)->setEncoding(encoding);
		$var($XIncludeTextReader, textReader, nullptr);
		{
			$var($Throwable, var$11, nullptr);
			bool var$13 = false;
			bool return$12 = false;
			try {
				try {
					this->fHasIncludeReportedContent = false;
					if (!this->fIsXML11) {
						if (this->fXInclude10TextReader == nullptr) {
							$set(this, fXInclude10TextReader, $new($XIncludeTextReader, includedSource, this, this->fBufferSize));
						} else {
							$nc(this->fXInclude10TextReader)->setInputSource(includedSource);
						}
						$assign(textReader, this->fXInclude10TextReader);
					} else {
						if (this->fXInclude11TextReader == nullptr) {
							$set(this, fXInclude11TextReader, $new($XInclude11TextReader, includedSource, this, this->fBufferSize));
						} else {
							$nc(this->fXInclude11TextReader)->setInputSource(includedSource);
						}
						$assign(textReader, this->fXInclude11TextReader);
					}
					$nc(textReader)->setErrorReporter(this->fErrorReporter);
					textReader->parse();
				} catch ($MalformedByteSequenceException& ex) {
					$var($String, var$14, ex->getDomain());
					$var($String, var$15, ex->getKey());
					$nc(this->fErrorReporter)->reportError(var$14, var$15, $(ex->getArguments()), $XMLErrorReporter::SEVERITY_FATAL_ERROR, static_cast<$Exception*>(ex));
				} catch ($CharConversionException& e) {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "CharConversionFailure"_s, ($ObjectArray*)nullptr, $XMLErrorReporter::SEVERITY_FATAL_ERROR, static_cast<$Exception*>(e));
				} catch ($IOException& e) {
					if (this->fHasIncludeReportedContent) {
						$throwNew($XNIException, static_cast<$Exception*>(e));
					}
					reportResourceError("TextResourceError"_s, $$new($ObjectArray, {
						$of(href),
						$($of(e->getMessage()))
					}), e);
					var$13 = false;
					return$12 = true;
					goto $finally1;
				}
			} catch ($Throwable& var$16) {
				$assign(var$11, var$16);
			} $finally1: {
				if (textReader != nullptr) {
					try {
						textReader->close();
					} catch ($IOException& e) {
						reportResourceError("TextResourceError"_s, $$new($ObjectArray, {
							$of(href),
							$($of(e->getMessage()))
						}), e);
						return false;
					}
				}
			}
			if (var$11 != nullptr) {
				$throw(var$11);
			}
			if (return$12) {
				return var$13;
			}
		}
	} else {
		reportFatalError("InvalidParseValue"_s, $$new($ObjectArray, {$of(parse)}));
	}
	return true;
}

bool XIncludeHandler::hasXIncludeNamespace($QName* element) {
	return $nc(element)->uri == XIncludeHandler::XINCLUDE_NS_URI || $nc(this->fNamespaceContext)->getURI($nc(element)->prefix) == XIncludeHandler::XINCLUDE_NS_URI;
}

bool XIncludeHandler::isIncludeElement($QName* element) {
	bool var$0 = $nc($nc(element)->localpart)->equals(XIncludeHandler::XINCLUDE_INCLUDE);
	return var$0 && hasXIncludeNamespace(element);
}

bool XIncludeHandler::isFallbackElement($QName* element) {
	bool var$0 = $nc($nc(element)->localpart)->equals(XIncludeHandler::XINCLUDE_FALLBACK);
	return var$0 && hasXIncludeNamespace(element);
}

bool XIncludeHandler::sameBaseURIAsIncludeParent() {
	$useLocalCurrentObjectStackCache();
	$var($String, parentBaseURI, getIncludeParentBaseURI());
	$var($String, baseURI, $nc(this->fCurrentBaseURI)->getExpandedSystemId());
	return parentBaseURI != nullptr && parentBaseURI->equals(baseURI);
}

bool XIncludeHandler::sameLanguageAsIncludeParent() {
	$var($String, parentLanguage, getIncludeParentLanguage());
	return parentLanguage != nullptr && parentLanguage->equalsIgnoreCase(this->fCurrentLanguage);
}

void XIncludeHandler::setupCurrentBaseURI($XMLLocator* locator) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fCurrentBaseURI)->setBaseSystemId($($nc(locator)->getBaseSystemId()));
	if ($nc(locator)->getLiteralSystemId() != nullptr) {
		$nc(this->fCurrentBaseURI)->setLiteralSystemId($(locator->getLiteralSystemId()));
	} else {
		$nc(this->fCurrentBaseURI)->setLiteralSystemId(this->fHrefFromParent);
	}
	$var($String, expandedSystemId, $nc(locator)->getExpandedSystemId());
	if (expandedSystemId == nullptr) {
		try {
			$var($String, var$0, $nc(this->fCurrentBaseURI)->getLiteralSystemId());
			$assign(expandedSystemId, $XMLEntityManager::expandSystemId(var$0, $($nc(this->fCurrentBaseURI)->getBaseSystemId()), false));
			if (expandedSystemId == nullptr) {
				$assign(expandedSystemId, $nc(this->fCurrentBaseURI)->getLiteralSystemId());
			}
		} catch ($URI$MalformedURIException& e) {
			reportFatalError("ExpandedSystemId"_s);
		}
	}
	$nc(this->fCurrentBaseURI)->setExpandedSystemId(expandedSystemId);
}

bool XIncludeHandler::searchForRecursiveIncludes($String* includedSysId) {
	if ($nc(includedSysId)->equals($($nc(this->fCurrentBaseURI)->getExpandedSystemId()))) {
		return true;
	} else if (this->fParentXIncludeHandler == nullptr) {
		return false;
	} else {
		return $nc(this->fParentXIncludeHandler)->searchForRecursiveIncludes(includedSysId);
	}
}

bool XIncludeHandler::isTopLevelIncludedItem() {
	bool var$0 = isTopLevelIncludedItemViaInclude();
	return var$0 || isTopLevelIncludedItemViaFallback();
}

bool XIncludeHandler::isTopLevelIncludedItemViaInclude() {
	return this->fDepth == 1 && !isRootDocument();
}

bool XIncludeHandler::isTopLevelIncludedItemViaFallback() {
	return getSawFallback(this->fDepth - 1);
}

$XMLAttributes* XIncludeHandler::processAttributes($XMLAttributes* attributes$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($XMLAttributes, attributes, attributes$renamed);
	if (isTopLevelIncludedItem()) {
		if (this->fFixupBaseURIs && !sameBaseURIAsIncludeParent()) {
			if (attributes == nullptr) {
				$assign(attributes, $new($XMLAttributesImpl));
			}
			$var($String, uri, nullptr);
			try {
				$assign(uri, this->getRelativeBaseURI());
			} catch ($URI$MalformedURIException& e) {
				$assign(uri, $nc(this->fCurrentBaseURI)->getExpandedSystemId());
			}
			$init($XMLSymbols);
			int32_t index = $nc(attributes)->addAttribute(XIncludeHandler::XML_BASE_QNAME, $XMLSymbols::fCDATASymbol, uri);
			attributes->setSpecified(index, true);
		}
		if (this->fFixupLanguage && !sameLanguageAsIncludeParent()) {
			if (attributes == nullptr) {
				$assign(attributes, $new($XMLAttributesImpl));
			}
			$init($XMLSymbols);
			int32_t index = $nc(attributes)->addAttribute(XIncludeHandler::XML_LANG_QNAME, $XMLSymbols::fCDATASymbol, this->fCurrentLanguage);
			attributes->setSpecified(index, true);
		}
		$var($Enumeration, inscopeNS, $nc(this->fNamespaceContext)->getAllPrefixes());
		while ($nc(inscopeNS)->hasMoreElements()) {
			$var($String, prefix, $cast($String, inscopeNS->nextElement()));
			$var($String, parentURI, $nc(this->fNamespaceContext)->getURIFromIncludeParent(prefix));
			$var($String, uri, $nc(this->fNamespaceContext)->getURI(prefix));
			if (parentURI != uri && attributes != nullptr) {
				$init($XMLSymbols);
				if (prefix == $XMLSymbols::EMPTY_STRING) {
					$init($NamespaceContext);
					if (attributes->getValue($NamespaceContext::XMLNS_URI, $XMLSymbols::PREFIX_XMLNS) == nullptr) {
						if (attributes == nullptr) {
							$assign(attributes, $new($XMLAttributesImpl));
						}
						$var($QName, ns, $cast($QName, $nc(XIncludeHandler::NEW_NS_ATTR_QNAME)->clone()));
						$set($nc(ns), prefix, nullptr);
						$set(ns, localpart, $XMLSymbols::PREFIX_XMLNS);
						$set(ns, rawname, $XMLSymbols::PREFIX_XMLNS);
						int32_t index = attributes->addAttribute(ns, $XMLSymbols::fCDATASymbol, uri != nullptr ? uri : $XMLSymbols::EMPTY_STRING);
						attributes->setSpecified(index, true);
						$nc(this->fNamespaceContext)->declarePrefix(prefix, uri);
					}
				} else {
					$init($NamespaceContext);
					if (attributes->getValue($NamespaceContext::XMLNS_URI, prefix) == nullptr) {
						if (attributes == nullptr) {
							$assign(attributes, $new($XMLAttributesImpl));
						}
						$var($QName, ns, $cast($QName, $nc(XIncludeHandler::NEW_NS_ATTR_QNAME)->clone()));
						$set($nc(ns), localpart, prefix);
						$plusAssignField(ns, rawname, prefix);
						$set(ns, rawname, (this->fSymbolTable != nullptr) ? $nc(this->fSymbolTable)->addSymbol(ns->rawname) : $nc(ns->rawname)->intern());
						int32_t index = attributes->addAttribute(ns, $XMLSymbols::fCDATASymbol, uri != nullptr ? uri : $XMLSymbols::EMPTY_STRING);
						attributes->setSpecified(index, true);
						$nc(this->fNamespaceContext)->declarePrefix(prefix, uri);
					}
				}
			}
		}
	}
	if (attributes != nullptr) {
		int32_t length = attributes->getLength();
		for (int32_t i = 0; i < length; ++i) {
			$var($String, type, attributes->getType(i));
			$var($String, value, attributes->getValue(i));
			$init($XMLSymbols);
			if (type == $XMLSymbols::fENTITYSymbol) {
				this->checkUnparsedEntity(value);
			}
			if (type == $XMLSymbols::fENTITIESSymbol) {
				$var($StringTokenizer, st, $new($StringTokenizer, value));
				while (st->hasMoreTokens()) {
					$var($String, entName, st->nextToken());
					this->checkUnparsedEntity(entName);
				}
			} else {
				if (type == $XMLSymbols::fNOTATIONSymbol) {
					this->checkNotation(value);
				}
			}
		}
	}
	return attributes;
}

$String* XIncludeHandler::getRelativeBaseURI() {
	$useLocalCurrentObjectStackCache();
	int32_t includeParentDepth = getIncludeParentDepth();
	$var($String, relativeURI, this->getRelativeURI(includeParentDepth));
	if (isRootDocument()) {
		return relativeURI;
	} else {
		if ($nc(relativeURI)->length() == 0) {
			$assign(relativeURI, $nc(this->fCurrentBaseURI)->getLiteralSystemId());
		}
		if (includeParentDepth == 0) {
			if (this->fParentRelativeURI == nullptr) {
				$set(this, fParentRelativeURI, $nc(this->fParentXIncludeHandler)->getRelativeBaseURI());
			}
			if ($nc(this->fParentRelativeURI)->length() == 0) {
				return relativeURI;
			}
			$var($URI, base, $new($URI, this->fParentRelativeURI, true));
			$var($URI, uri, $new($URI, base, relativeURI));
			$var($String, baseScheme, base->getScheme());
			$var($String, literalScheme, uri->getScheme());
			if (!$Objects::equals(baseScheme, literalScheme)) {
				return relativeURI;
			}
			$var($String, baseAuthority, base->getAuthority());
			$var($String, literalAuthority, uri->getAuthority());
			if (!$Objects::equals(baseAuthority, literalAuthority)) {
				return uri->getSchemeSpecificPart();
			}
			$var($String, literalPath, uri->getPath());
			$var($String, literalQuery, uri->getQueryString());
			$var($String, literalFragment, uri->getFragment());
			if (literalQuery != nullptr || literalFragment != nullptr) {
				$var($StringBuilder, buffer, $new($StringBuilder));
				if (literalPath != nullptr) {
					buffer->append(literalPath);
				}
				if (literalQuery != nullptr) {
					buffer->append(u'?');
					buffer->append(literalQuery);
				}
				if (literalFragment != nullptr) {
					buffer->append(u'#');
					buffer->append(literalFragment);
				}
				return buffer->toString();
			}
			return literalPath;
		} else {
			return relativeURI;
		}
	}
}

$String* XIncludeHandler::getIncludeParentBaseURI() {
	int32_t depth = getIncludeParentDepth();
	if (!isRootDocument() && depth == 0) {
		return $nc(this->fParentXIncludeHandler)->getIncludeParentBaseURI();
	} else {
		return this->getBaseURI(depth);
	}
}

$String* XIncludeHandler::getIncludeParentLanguage() {
	int32_t depth = getIncludeParentDepth();
	if (!isRootDocument() && depth == 0) {
		return $nc(this->fParentXIncludeHandler)->getIncludeParentLanguage();
	} else {
		return getLanguage(depth);
	}
}

int32_t XIncludeHandler::getIncludeParentDepth() {
	for (int32_t i = this->fDepth - 1; i >= 0; --i) {
		bool var$0 = !getSawInclude(i);
		if (var$0 && !getSawFallback(i)) {
			return i;
		}
	}
	return 0;
}

int32_t XIncludeHandler::getResultDepth() {
	return this->fResultDepth;
}

$Augmentations* XIncludeHandler::modifyAugmentations($Augmentations* augs) {
	return modifyAugmentations(augs, false);
}

$Augmentations* XIncludeHandler::modifyAugmentations($Augmentations* augs$renamed, bool force) {
	$var($Augmentations, augs, augs$renamed);
	if (force || isTopLevelIncludedItem()) {
		if (augs == nullptr) {
			$assign(augs, $new($AugmentationsImpl));
		}
		$init($Boolean);
		$nc(augs)->putItem(XIncludeHandler::XINCLUDE_INCLUDED, $Boolean::TRUE);
	}
	return augs;
}

int32_t XIncludeHandler::getState(int32_t depth) {
	return $nc(this->fState)->get(depth);
}

int32_t XIncludeHandler::getState() {
	return $nc(this->fState)->get(this->fDepth);
}

void XIncludeHandler::setState(int32_t state) {
	if (this->fDepth >= $nc(this->fState)->length) {
		$var($ints, newarray, $new($ints, this->fDepth * 2));
		$System::arraycopy(this->fState, 0, newarray, 0, $nc(this->fState)->length);
		$set(this, fState, newarray);
	}
	$nc(this->fState)->set(this->fDepth, state);
}

void XIncludeHandler::setSawFallback(int32_t depth, bool val) {
	if (depth >= $nc(this->fSawFallback)->length) {
		$var($booleans, newarray, $new($booleans, depth * 2));
		$System::arraycopy(this->fSawFallback, 0, newarray, 0, $nc(this->fSawFallback)->length);
		$set(this, fSawFallback, newarray);
	}
	$nc(this->fSawFallback)->set(depth, val);
}

bool XIncludeHandler::getSawFallback(int32_t depth) {
	if (depth >= $nc(this->fSawFallback)->length) {
		return false;
	}
	return $nc(this->fSawFallback)->get(depth);
}

void XIncludeHandler::setSawInclude(int32_t depth, bool val) {
	if (depth >= $nc(this->fSawInclude)->length) {
		$var($booleans, newarray, $new($booleans, depth * 2));
		$System::arraycopy(this->fSawInclude, 0, newarray, 0, $nc(this->fSawInclude)->length);
		$set(this, fSawInclude, newarray);
	}
	$nc(this->fSawInclude)->set(depth, val);
}

bool XIncludeHandler::getSawInclude(int32_t depth) {
	if (depth >= $nc(this->fSawInclude)->length) {
		return false;
	}
	return $nc(this->fSawInclude)->get(depth);
}

void XIncludeHandler::reportResourceError($String* key) {
	this->reportResourceError(key, nullptr);
}

void XIncludeHandler::reportResourceError($String* key, $ObjectArray* args) {
	this->reportResourceError(key, args, nullptr);
}

void XIncludeHandler::reportResourceError($String* key, $ObjectArray* args, $Exception* exception) {
	this->reportError(key, args, $XMLErrorReporter::SEVERITY_WARNING, exception);
}

void XIncludeHandler::reportFatalError($String* key) {
	this->reportFatalError(key, nullptr);
}

void XIncludeHandler::reportFatalError($String* key, $ObjectArray* args) {
	this->reportFatalError(key, args, nullptr);
}

void XIncludeHandler::reportFatalError($String* key, $ObjectArray* args, $Exception* exception) {
	this->reportError(key, args, $XMLErrorReporter::SEVERITY_FATAL_ERROR, exception);
}

void XIncludeHandler::reportError($String* key, $ObjectArray* args, int16_t severity, $Exception* exception) {
	if (this->fErrorReporter != nullptr) {
		$init($XIncludeMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XIncludeMessageFormatter::XINCLUDE_DOMAIN, key, args, severity, exception);
	}
}

void XIncludeHandler::setParent(XIncludeHandler* parent) {
	$set(this, fParentXIncludeHandler, parent);
}

void XIncludeHandler::setHref($String* href) {
	$set(this, fHrefFromParent, href);
}

void XIncludeHandler::setXIncludeLocator($XMLLocatorWrapper* locator) {
	$set(this, fXIncludeLocator, locator);
}

bool XIncludeHandler::isRootDocument() {
	return this->fParentXIncludeHandler == nullptr;
}

void XIncludeHandler::addUnparsedEntity($String* name, $XMLResourceIdentifier* identifier, $String* notation, $Augmentations* augmentations) {
	$var($XIncludeHandler$UnparsedEntity, ent, $new($XIncludeHandler$UnparsedEntity));
	$set(ent, name, name);
	$set(ent, systemId, $nc(identifier)->getLiteralSystemId());
	$set(ent, publicId, identifier->getPublicId());
	$set(ent, baseURI, identifier->getBaseSystemId());
	$set(ent, expandedSystemId, identifier->getExpandedSystemId());
	$set(ent, notation, notation);
	$set(ent, augmentations, augmentations);
	$nc(this->fUnparsedEntities)->add(ent);
}

void XIncludeHandler::addNotation($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
	$var($XIncludeHandler$Notation, not$, $new($XIncludeHandler$Notation));
	$set(not$, name, name);
	$set(not$, systemId, $nc(identifier)->getLiteralSystemId());
	$set(not$, publicId, identifier->getPublicId());
	$set(not$, baseURI, identifier->getBaseSystemId());
	$set(not$, expandedSystemId, identifier->getExpandedSystemId());
	$set(not$, augmentations, augmentations);
	$nc(this->fNotations)->add(not$);
}

void XIncludeHandler::checkUnparsedEntity($String* entName) {
	$var($XIncludeHandler$UnparsedEntity, ent, $new($XIncludeHandler$UnparsedEntity));
	$set(ent, name, entName);
	int32_t index = $nc(this->fUnparsedEntities)->indexOf(ent);
	if (index != -1) {
		$assign(ent, $cast($XIncludeHandler$UnparsedEntity, $nc(this->fUnparsedEntities)->get(index)));
		checkNotation($nc(ent)->notation);
		checkAndSendUnparsedEntity(ent);
	}
}

void XIncludeHandler::checkNotation($String* notName) {
	$var($XIncludeHandler$Notation, not$, $new($XIncludeHandler$Notation));
	$set(not$, name, notName);
	int32_t index = $nc(this->fNotations)->indexOf(not$);
	if (index != -1) {
		$assign(not$, $cast($XIncludeHandler$Notation, $nc(this->fNotations)->get(index)));
		checkAndSendNotation(not$);
	}
}

void XIncludeHandler::checkAndSendUnparsedEntity($XIncludeHandler$UnparsedEntity* ent) {
	$useLocalCurrentObjectStackCache();
	if (isRootDocument()) {
		int32_t index = $nc(this->fUnparsedEntities)->indexOf(ent);
		if (index == -1) {
			$var($XMLResourceIdentifier, id, $new($XMLResourceIdentifierImpl, $nc(ent)->publicId, ent->systemId, ent->baseURI, ent->expandedSystemId));
			addUnparsedEntity($nc(ent)->name, id, ent->notation, ent->augmentations);
			if (this->fSendUEAndNotationEvents && this->fDTDHandler != nullptr) {
				$nc(this->fDTDHandler)->unparsedEntityDecl($nc(ent)->name, id, ent->notation, ent->augmentations);
			}
		} else {
			$var($XIncludeHandler$UnparsedEntity, localEntity, $cast($XIncludeHandler$UnparsedEntity, $nc(this->fUnparsedEntities)->get(index)));
			if (!$nc(ent)->isDuplicate(localEntity)) {
				reportFatalError("NonDuplicateUnparsedEntity"_s, $$new($ObjectArray, {$of(ent->name)}));
			}
		}
	} else {
		$nc(this->fParentXIncludeHandler)->checkAndSendUnparsedEntity(ent);
	}
}

void XIncludeHandler::checkAndSendNotation($XIncludeHandler$Notation* not$) {
	$useLocalCurrentObjectStackCache();
	if (isRootDocument()) {
		int32_t index = $nc(this->fNotations)->indexOf(not$);
		if (index == -1) {
			$var($XMLResourceIdentifier, id, $new($XMLResourceIdentifierImpl, $nc(not$)->publicId, not$->systemId, not$->baseURI, not$->expandedSystemId));
			addNotation($nc(not$)->name, id, not$->augmentations);
			if (this->fSendUEAndNotationEvents && this->fDTDHandler != nullptr) {
				$nc(this->fDTDHandler)->notationDecl($nc(not$)->name, id, not$->augmentations);
			}
		} else {
			$var($XIncludeHandler$Notation, localNotation, $cast($XIncludeHandler$Notation, $nc(this->fNotations)->get(index)));
			if (!$nc(not$)->isDuplicate(localNotation)) {
				reportFatalError("NonDuplicateNotation"_s, $$new($ObjectArray, {$of(not$->name)}));
			}
		}
	} else {
		$nc(this->fParentXIncludeHandler)->checkAndSendNotation(not$);
	}
}

void XIncludeHandler::checkWhitespace($XMLString* value) {
	int32_t end = $nc(value)->offset + value->length;
	for (int32_t i = value->offset; i < end; ++i) {
		if (!$XMLChar::isSpace($nc(value->ch)->get(i))) {
			reportFatalError("ContentIllegalAtTopLevel"_s);
			return;
		}
	}
}

void XIncludeHandler::checkMultipleRootElements() {
	if (getRootElementProcessed()) {
		reportFatalError("MultipleRootElements"_s);
	}
	setRootElementProcessed(true);
}

void XIncludeHandler::setRootElementProcessed(bool seenRoot) {
	if (isRootDocument()) {
		this->fSeenRootElement = seenRoot;
		return;
	}
	$nc(this->fParentXIncludeHandler)->setRootElementProcessed(seenRoot);
}

bool XIncludeHandler::getRootElementProcessed() {
	return isRootDocument() ? this->fSeenRootElement : $nc(this->fParentXIncludeHandler)->getRootElementProcessed();
}

void XIncludeHandler::copyFeatures($XMLComponentManager* from, $ParserConfigurationSettings* to) {
	$var($Enumeration, features, $Constants::getXercesFeatures());
	copyFeatures1(features, $Constants::XERCES_FEATURE_PREFIX, from, to);
	$assign(features, $Constants::getSAXFeatures());
	copyFeatures1(features, $Constants::SAX_FEATURE_PREFIX, from, to);
}

void XIncludeHandler::copyFeatures($XMLComponentManager* from, $XMLParserConfiguration* to) {
	$var($Enumeration, features, $Constants::getXercesFeatures());
	copyFeatures1(features, $Constants::XERCES_FEATURE_PREFIX, from, to);
	$assign(features, $Constants::getSAXFeatures());
	copyFeatures1(features, $Constants::SAX_FEATURE_PREFIX, from, to);
}

void XIncludeHandler::copyFeatures1($Enumeration* features, $String* featurePrefix, $XMLComponentManager* from, $ParserConfigurationSettings* to) {
	$useLocalCurrentObjectStackCache();
	while ($nc(features)->hasMoreElements()) {
		$var($String, featureId, $str({featurePrefix, $cast($String, $(features->nextElement()))}));
		$nc(to)->addRecognizedFeatures($$new($StringArray, {featureId}));
		try {
			to->setFeature(featureId, $nc(from)->getFeature(featureId));
		} catch ($XMLConfigurationException& e) {
		}
	}
}

void XIncludeHandler::copyFeatures1($Enumeration* features, $String* featurePrefix, $XMLComponentManager* from, $XMLParserConfiguration* to) {
	$useLocalCurrentObjectStackCache();
	while ($nc(features)->hasMoreElements()) {
		$var($String, featureId, $str({featurePrefix, $cast($String, $(features->nextElement()))}));
		bool value = $nc(from)->getFeature(featureId);
		try {
			$nc(to)->setFeature(featureId, value);
		} catch ($XMLConfigurationException& e) {
		}
	}
}

void XIncludeHandler::saveBaseURI() {
	$useLocalCurrentObjectStackCache();
	$nc(this->fBaseURIScope)->push(this->fDepth);
	$nc(this->fBaseURI)->push($($nc(this->fCurrentBaseURI)->getBaseSystemId()));
	$nc(this->fLiteralSystemID)->push($($nc(this->fCurrentBaseURI)->getLiteralSystemId()));
	$nc(this->fExpandedSystemID)->push($($nc(this->fCurrentBaseURI)->getExpandedSystemId()));
}

void XIncludeHandler::restoreBaseURI() {
	$useLocalCurrentObjectStackCache();
	$nc(this->fBaseURI)->pop();
	$nc(this->fLiteralSystemID)->pop();
	$nc(this->fExpandedSystemID)->pop();
	$nc(this->fBaseURIScope)->pop();
	$nc(this->fCurrentBaseURI)->setBaseSystemId($cast($String, $($nc(this->fBaseURI)->peek())));
	$nc(this->fCurrentBaseURI)->setLiteralSystemId($cast($String, $($nc(this->fLiteralSystemID)->peek())));
	$nc(this->fCurrentBaseURI)->setExpandedSystemId($cast($String, $($nc(this->fExpandedSystemID)->peek())));
}

void XIncludeHandler::saveLanguage($String* language) {
	$nc(this->fLanguageScope)->push(this->fDepth);
	$nc(this->fLanguageStack)->push(language);
}

$String* XIncludeHandler::restoreLanguage() {
	$nc(this->fLanguageStack)->pop();
	$nc(this->fLanguageScope)->pop();
	return $cast($String, $nc(this->fLanguageStack)->peek());
}

$String* XIncludeHandler::getBaseURI(int32_t depth) {
	int32_t scope = scopeOfBaseURI(depth);
	return $cast($String, $nc(this->fExpandedSystemID)->get(scope));
}

$String* XIncludeHandler::getLanguage(int32_t depth) {
	int32_t scope = scopeOfLanguage(depth);
	return $cast($String, $nc(this->fLanguageStack)->get(scope));
}

$String* XIncludeHandler::getRelativeURI(int32_t depth) {
	$useLocalCurrentObjectStackCache();
	int32_t start = scopeOfBaseURI(depth) + 1;
	if (start == $nc(this->fBaseURIScope)->size()) {
		return ""_s;
	}
	$var($URI, uri, $new($URI, "file"_s, $cast($String, $($nc(this->fLiteralSystemID)->get(start)))));
	for (int32_t i = start + 1; i < $nc(this->fBaseURIScope)->size(); ++i) {
		$assign(uri, $new($URI, uri, $cast($String, $($nc(this->fLiteralSystemID)->get(i)))));
	}
	return uri->getPath();
}

int32_t XIncludeHandler::scopeOfBaseURI(int32_t depth) {
	for (int32_t i = $nc(this->fBaseURIScope)->size() - 1; i >= 0; --i) {
		if ($nc(this->fBaseURIScope)->elementAt(i) <= depth) {
			return i;
		}
	}
	return -1;
}

int32_t XIncludeHandler::scopeOfLanguage(int32_t depth) {
	for (int32_t i = $nc(this->fLanguageScope)->size() - 1; i >= 0; --i) {
		if ($nc(this->fLanguageScope)->elementAt(i) <= depth) {
			return i;
		}
	}
	return -1;
}

void XIncludeHandler::processXMLBaseAttributes($XMLAttributes* attributes) {
	$useLocalCurrentObjectStackCache();
	$init($NamespaceContext);
	$var($String, baseURIValue, $nc(attributes)->getValue($NamespaceContext::XML_URI, "base"_s));
	if (baseURIValue != nullptr) {
		try {
			$var($String, expandedValue, $XMLEntityManager::expandSystemId(baseURIValue, $($nc(this->fCurrentBaseURI)->getExpandedSystemId()), false));
			$nc(this->fCurrentBaseURI)->setLiteralSystemId(baseURIValue);
			$nc(this->fCurrentBaseURI)->setBaseSystemId($($nc(this->fCurrentBaseURI)->getExpandedSystemId()));
			$nc(this->fCurrentBaseURI)->setExpandedSystemId(expandedValue);
			saveBaseURI();
		} catch ($URI$MalformedURIException& e) {
		}
	}
}

void XIncludeHandler::processXMLLangAttributes($XMLAttributes* attributes) {
	$init($NamespaceContext);
	$var($String, language, $nc(attributes)->getValue($NamespaceContext::XML_URI, "lang"_s));
	if (language != nullptr) {
		$set(this, fCurrentLanguage, language);
		saveLanguage(this->fCurrentLanguage);
	}
}

bool XIncludeHandler::isValidInHTTPHeader($String* value) {
	char16_t ch = 0;
	for (int32_t i = $nc(value)->length() - 1; i >= 0; --i) {
		ch = value->charAt(i);
		if (ch < 32 || ch > 126) {
			return false;
		}
	}
	return true;
}

$XMLInputSource* XIncludeHandler::createInputSource($String* publicId, $String* systemId, $String* baseSystemId, $String* accept, $String* acceptLanguage) {
	$var($HTTPInputSource, httpSource, $new($HTTPInputSource, publicId, systemId, baseSystemId));
	if (accept != nullptr && accept->length() > 0) {
		httpSource->setHTTPRequestProperty(XIncludeHandler::HTTP_ACCEPT, accept);
	}
	if (acceptLanguage != nullptr && acceptLanguage->length() > 0) {
		httpSource->setHTTPRequestProperty(XIncludeHandler::HTTP_ACCEPT_LANGUAGE, acceptLanguage);
	}
	return httpSource;
}

$String* XIncludeHandler::escapeHref($String* href) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(href)->length();
	int32_t ch = 0;
	$var($StringBuilder, buffer, $new($StringBuilder, len * 3));
	int32_t i = 0;
	for (; i < len; ++i) {
		ch = href->charAt(i);
		if (ch > 126) {
			break;
		}
		if (ch < 32) {
			return href;
		}
		if ($nc(XIncludeHandler::gNeedEscaping)->get(ch)) {
			buffer->append(u'%');
			buffer->append($nc(XIncludeHandler::gAfterEscaping1)->get(ch));
			buffer->append($nc(XIncludeHandler::gAfterEscaping2)->get(ch));
		} else {
			buffer->append((char16_t)ch);
		}
	}
	if (i < len) {
		for (int32_t j = i; j < len; ++j) {
			ch = href->charAt(j);
			if ((ch >= 32 && ch <= 126) || (ch >= 160 && ch <= 0x0000D7FF) || (ch >= 0x0000F900 && ch <= 0x0000FDCF) || (ch >= 0x0000FDF0 && ch <= 0x0000FFEF)) {
				continue;
			}
			if ($XMLChar::isHighSurrogate(ch) && ++j < len) {
				int32_t ch2 = href->charAt(j);
				if ($XMLChar::isLowSurrogate(ch2)) {
					ch2 = $XMLChar::supplemental((char16_t)ch, (char16_t)ch2);
					if (ch2 < 0x000F0000 && ((int32_t)(ch2 & (uint32_t)0x0000FFFF)) <= 0x0000FFFD) {
						continue;
					}
				}
			}
			return href;
		}
		$var($bytes, bytes, nullptr);
		int8_t b = 0;
		try {
			$assign(bytes, $(href->substring(i))->getBytes("UTF-8"_s));
		} catch ($UnsupportedEncodingException& e) {
			return href;
		}
		len = $nc(bytes)->length;
		for (i = 0; i < len; ++i) {
			b = bytes->get(i);
			if (b < 0) {
				ch = b + 256;
				buffer->append(u'%');
				buffer->append($nc(XIncludeHandler::gHexChs)->get(ch >> 4));
				buffer->append($nc(XIncludeHandler::gHexChs)->get((int32_t)(ch & (uint32_t)15)));
			} else if ($nc(XIncludeHandler::gNeedEscaping)->get(b)) {
				buffer->append(u'%');
				buffer->append($nc(XIncludeHandler::gAfterEscaping1)->get(b));
				buffer->append($nc(XIncludeHandler::gAfterEscaping2)->get(b));
			} else {
				buffer->append((char16_t)b);
			}
		}
	}
	if (buffer->length() != len) {
		return buffer->toString();
	} else {
		return href;
	}
}

void clinit$XIncludeHandler($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XIncludeHandler::HTTP_ACCEPT, "Accept"_s);
	$assignStatic(XIncludeHandler::HTTP_ACCEPT_LANGUAGE, "Accept-Language"_s);
	$assignStatic(XIncludeHandler::XPOINTER, "xpointer"_s);
	$assignStatic(XIncludeHandler::CURRENT_BASE_URI, "currentBaseURI"_s);
	$init($Constants);
	$assignStatic(XIncludeHandler::VALIDATION, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(XIncludeHandler::SCHEMA_VALIDATION, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_VALIDATION_FEATURE}));
	$assignStatic(XIncludeHandler::DYNAMIC_VALIDATION, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::DYNAMIC_VALIDATION_FEATURE}));
	$assignStatic(XIncludeHandler::ALLOW_UE_AND_NOTATION_EVENTS, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::ALLOW_DTD_EVENTS_AFTER_ENDDTD_FEATURE}));
	$assignStatic(XIncludeHandler::XINCLUDE_FIXUP_BASE_URIS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::XINCLUDE_FIXUP_BASE_URIS_FEATURE}));
	$assignStatic(XIncludeHandler::XINCLUDE_FIXUP_LANGUAGE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::XINCLUDE_FIXUP_LANGUAGE_FEATURE}));
	$assignStatic(XIncludeHandler::JAXP_SCHEMA_LANGUAGE, $str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE}));
	$assignStatic(XIncludeHandler::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XIncludeHandler::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XIncludeHandler::ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_RESOLVER_PROPERTY}));
	$assignStatic(XIncludeHandler::SECURITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SECURITY_MANAGER_PROPERTY}));
	$assignStatic(XIncludeHandler::BUFFER_SIZE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::BUFFER_SIZE_PROPERTY}));
	$assignStatic(XIncludeHandler::PARSER_SETTINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::PARSER_SETTINGS}));
	$init($JdkConstants);
	$assignStatic(XIncludeHandler::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
	$assignStatic(XIncludeHandler::XINCLUDE_NS_URI, "http://www.w3.org/2001/XInclude"_s->intern());
	$assignStatic(XIncludeHandler::XINCLUDE_INCLUDE, "include"_s->intern());
	$assignStatic(XIncludeHandler::XINCLUDE_FALLBACK, "fallback"_s->intern());
	$assignStatic(XIncludeHandler::XINCLUDE_PARSE_XML, "xml"_s->intern());
	$assignStatic(XIncludeHandler::XINCLUDE_PARSE_TEXT, "text"_s->intern());
	$assignStatic(XIncludeHandler::XINCLUDE_ATTR_HREF, "href"_s->intern());
	$assignStatic(XIncludeHandler::XINCLUDE_ATTR_PARSE, "parse"_s->intern());
	$assignStatic(XIncludeHandler::XINCLUDE_ATTR_ENCODING, "encoding"_s->intern());
	$assignStatic(XIncludeHandler::XINCLUDE_ATTR_ACCEPT, "accept"_s->intern());
	$assignStatic(XIncludeHandler::XINCLUDE_ATTR_ACCEPT_LANGUAGE, "accept-language"_s->intern());
	$assignStatic(XIncludeHandler::XINCLUDE_INCLUDED, "[included]"_s->intern());
	$assignStatic(XIncludeHandler::XINCLUDE_BASE, "base"_s->intern());
	$init($XMLSymbols);
	$init($NamespaceContext);
	$assignStatic(XIncludeHandler::XML_BASE_QNAME, $new($QName, $XMLSymbols::PREFIX_XML, XIncludeHandler::XINCLUDE_BASE, $($nc(($$str({$XMLSymbols::PREFIX_XML, ":"_s, XIncludeHandler::XINCLUDE_BASE})))->intern()), $NamespaceContext::XML_URI));
	$assignStatic(XIncludeHandler::XINCLUDE_LANG, "lang"_s->intern());
	$assignStatic(XIncludeHandler::XML_LANG_QNAME, $new($QName, $XMLSymbols::PREFIX_XML, XIncludeHandler::XINCLUDE_LANG, $($nc(($$str({$XMLSymbols::PREFIX_XML, ":"_s, XIncludeHandler::XINCLUDE_LANG})))->intern()), $NamespaceContext::XML_URI));
	$assignStatic(XIncludeHandler::NEW_NS_ATTR_QNAME, $new($QName, $XMLSymbols::PREFIX_XMLNS, ""_s, $$str({$XMLSymbols::PREFIX_XMLNS, ":"_s}), $NamespaceContext::XMLNS_URI));
	$assignStatic(XIncludeHandler::RECOGNIZED_FEATURES, $new($StringArray, {
		XIncludeHandler::ALLOW_UE_AND_NOTATION_EVENTS,
		XIncludeHandler::XINCLUDE_FIXUP_BASE_URIS,
		XIncludeHandler::XINCLUDE_FIXUP_LANGUAGE
	}));
	$init($Boolean);
	$assignStatic(XIncludeHandler::FEATURE_DEFAULTS, $new($BooleanArray, {
		$Boolean::TRUE,
		$Boolean::TRUE,
		$Boolean::TRUE
	}));
	$assignStatic(XIncludeHandler::RECOGNIZED_PROPERTIES, $new($StringArray, {
		XIncludeHandler::ERROR_REPORTER,
		XIncludeHandler::ENTITY_RESOLVER,
		XIncludeHandler::SECURITY_MANAGER,
		XIncludeHandler::BUFFER_SIZE
	}));
	$assignStatic(XIncludeHandler::PROPERTY_DEFAULTS, $new($ObjectArray, {
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		$($of($Integer::valueOf($XMLEntityManager::DEFAULT_BUFFER_SIZE)))
	}));
	$assignStatic(XIncludeHandler::gNeedEscaping, $new($booleans, 128));
	$assignStatic(XIncludeHandler::gAfterEscaping1, $new($chars, 128));
	$assignStatic(XIncludeHandler::gAfterEscaping2, $new($chars, 128));
	$assignStatic(XIncludeHandler::gHexChs, $new($chars, {
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
		$var($chars, escChs, $new($chars, {
			u' ',
			u'<',
			u'>',
			u'\"',
			u'{',
			u'}',
			u'|',
			u'\\',
			u'^',
			u'`'
		}));
		int32_t len = escChs->length;
		char16_t ch = 0;
		for (int32_t i = 0; i < len; ++i) {
			ch = escChs->get(i);
			$nc(XIncludeHandler::gNeedEscaping)->set(ch, true);
			$nc(XIncludeHandler::gAfterEscaping1)->set(ch, $nc(XIncludeHandler::gHexChs)->get(ch >> 4));
			$nc(XIncludeHandler::gAfterEscaping2)->set(ch, $nc(XIncludeHandler::gHexChs)->get((int32_t)(ch & (uint32_t)15)));
		}
	}
}

XIncludeHandler::XIncludeHandler() {
}

$Class* XIncludeHandler::load$($String* name, bool initialize) {
	$loadClass(XIncludeHandler, name, initialize, &_XIncludeHandler_ClassInfo_, clinit$XIncludeHandler, allocate$XIncludeHandler);
	return class$;
}

$Class* XIncludeHandler::class$ = nullptr;

						} // xinclude
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com