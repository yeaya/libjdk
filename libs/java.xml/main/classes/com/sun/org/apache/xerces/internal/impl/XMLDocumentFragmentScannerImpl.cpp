#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/ExternalSubsetResolver.h>
#include <com/sun/org/apache/xerces/internal/impl/PropertyManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$ElementStack.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$ElementStack2.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$FragmentContentDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner$NameType.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesIteratorImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$Property.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>
#include <com/sun/xml/internal/stream/XMLEntityStorage.h>
#include <com/sun/xml/internal/stream/dtd/DTDGrammarUtil.h>
#include <java/util/ArrayList.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/stream/XMLInputFactory.h>
#include <javax/xml/stream/XMLStreamConstants.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_ALL
#undef ACCESS_EXTERNAL_DTD
#undef ATTRIBUTE
#undef ATTRIBUTENAME
#undef CATALOG_DEFER
#undef CATALOG_FILES
#undef CATALOG_PREFER
#undef CATALOG_RESOLVE
#undef CDATA
#undef CDATA_CHUNK_SIZE
#undef CDATA_CHUNK_SIZE_DEFAULT
#undef CHARACTERS
#undef CHAR_REF_PROBABLE_WS
#undef COMMENT
#undef CREATE_ENTITY_REF_NODES
#undef CREATE_ENTITY_REF_NODES_FEATURE
#undef DEBUG
#undef DEBUG_DISPATCHER
#undef DEBUG_SCANNER_STATE
#undef DEBUG_SKIP_ALGORITHM
#undef DEBUG_START_END_ELEMENT
#undef DTD
#undef ELEMENTEND
#undef ELEMENTSTART
#undef ELEMENT_ARRAY_LENGTH
#undef ELEMENT_ATTRIBUTE_LIMIT
#undef END_DOCUMENT
#undef END_ELEMENT
#undef ENTITY_DECLARATION
#undef ENTITY_MANAGER
#undef ENTITY_MANAGER_PROPERTY
#undef ENTITY_REFERENCE
#undef ENTITY_RESOLVER
#undef ENTITY_RESOLVER_PROPERTY
#undef ERROR_REPORTER
#undef EXTERNAL_ACCESS_DEFAULT
#undef FALSE
#undef FEATURE_DEFAULTS
#undef IS_COALESCING
#undef IS_NAMESPACE_AWARE
#undef IS_REPLACING_ENTITY_REFERENCES
#undef IS_SUPPORTING_EXTERNAL_ENTITIES
#undef MAX_DEPTH_LIMIT
#undef MAX_ELEMENT_DEPTH_LIMIT
#undef MAX_NAME_LIMIT
#undef MAX_POINTER_AT_A_DEPTH
#undef NAMESPACE
#undef NAMESPACES
#undef NOTATION_DECLARATION
#undef NOTIFY_BUILTIN_REFS
#undef NOTIFY_BUILTIN_REFS_FEATURE
#undef NOTIFY_CHAR_REFS
#undef PROCESSING_INSTRUCTION
#undef PROPERTY_DEFAULTS
#undef RECOGNIZED_FEATURES
#undef RECOGNIZED_PROPERTIES
#undef REFERENCE
#undef SCANNER_STATE_ATTRIBUTE
#undef SCANNER_STATE_ATTRIBUTE_VALUE
#undef SCANNER_STATE_BUILT_IN_REFS
#undef SCANNER_STATE_CDATA
#undef SCANNER_STATE_CHARACTER_DATA
#undef SCANNER_STATE_CHAR_REFERENCE
#undef SCANNER_STATE_COMMENT
#undef SCANNER_STATE_CONTENT
#undef SCANNER_STATE_DOCTYPE
#undef SCANNER_STATE_END_ELEMENT_TAG
#undef SCANNER_STATE_END_OF_INPUT
#undef SCANNER_STATE_PI
#undef SCANNER_STATE_REFERENCE
#undef SCANNER_STATE_ROOT_ELEMENT
#undef SCANNER_STATE_START_ELEMENT_TAG
#undef SCANNER_STATE_START_OF_MARKUP
#undef SCANNER_STATE_TERMINATED
#undef SCANNER_STATE_TEXT_DECL
#undef SCANNER_STATE_XML_DECL
#undef SECURITY_MANAGER
#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef SPACE
#undef STANDARD_URI_CONFORMANT
#undef STANDARD_URI_CONFORMANT_FEATURE
#undef START_DOCUMENT
#undef START_ELEMENT
#undef STAX_REPORT_CDATA_EVENT
#undef SYMBOL_TABLE
#undef TRUE
#undef USE_CATALOG
#undef USE_CATALOG_DEFAULT
#undef VALIDATION
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLDECL
#undef XML_DOMAIN
#undef XML_SECURITY_PROPERTY_MANAGER
#undef ZEPHYR_PROPERTY_PREFIX

using $BooleanArray = $Array<::java::lang::Boolean>;
using $shortArray2 = $Array<int16_t, 2>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $ExternalSubsetResolver = ::com::sun::org::apache::xerces::internal::impl::ExternalSubsetResolver;
using $PropertyManager = ::com::sun::org::apache::xerces::internal::impl::PropertyManager;
using $XMLDocumentFragmentScannerImpl$Driver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver;
using $XMLDocumentFragmentScannerImpl$ElementStack = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$ElementStack;
using $XMLDocumentFragmentScannerImpl$ElementStack2 = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$ElementStack2;
using $XMLDocumentFragmentScannerImpl$FragmentContentDriver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$FragmentContentDriver;
using $XMLEntityHandler = ::com::sun::org::apache::xerces::internal::impl::XMLEntityHandler;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLScanner = ::com::sun::org::apache::xerces::internal::impl::XMLScanner;
using $XMLScanner$NameType = ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $AugmentationsImpl = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl;
using $XMLAttributesImpl = ::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl;
using $XMLAttributesIteratorImpl = ::com::sun::org::apache::xerces::internal::util::XMLAttributesIteratorImpl;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLStringBuffer = ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $XMLLimitAnalyzer = ::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityManager$Limit = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $XMLSecurityPropertyManager$Property = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $Entity$ScannedEntity = ::com::sun::xml::internal::stream::Entity$ScannedEntity;
using $XMLEntityStorage = ::com::sun::xml::internal::stream::XMLEntityStorage;
using $DTDGrammarUtil = ::com::sun::xml::internal::stream::dtd::DTDGrammarUtil;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $XMLConstants = ::javax::xml::XMLConstants;
using $XMLInputFactory = ::javax::xml::stream::XMLInputFactory;
using $XMLStreamConstants = ::javax::xml::stream::XMLStreamConstants;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLDocumentFragmentScannerImpl_FieldInfo_[] = {
	{"fElementAttributeLimit", "I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fElementAttributeLimit)},
	{"fXMLNameLimit", "I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fXMLNameLimit)},
	{"fExternalSubsetResolver", "Lcom/sun/org/apache/xerces/internal/impl/ExternalSubsetResolver;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fExternalSubsetResolver)},
	{"SCANNER_STATE_START_OF_MARKUP", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_START_OF_MARKUP)},
	{"SCANNER_STATE_CONTENT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_CONTENT)},
	{"SCANNER_STATE_PI", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_PI)},
	{"SCANNER_STATE_DOCTYPE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_DOCTYPE)},
	{"SCANNER_STATE_XML_DECL", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_XML_DECL)},
	{"SCANNER_STATE_ROOT_ELEMENT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_ROOT_ELEMENT)},
	{"SCANNER_STATE_COMMENT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_COMMENT)},
	{"SCANNER_STATE_REFERENCE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_REFERENCE)},
	{"SCANNER_STATE_ATTRIBUTE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_ATTRIBUTE)},
	{"SCANNER_STATE_ATTRIBUTE_VALUE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_ATTRIBUTE_VALUE)},
	{"SCANNER_STATE_END_OF_INPUT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_END_OF_INPUT)},
	{"SCANNER_STATE_TERMINATED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_TERMINATED)},
	{"SCANNER_STATE_CDATA", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_CDATA)},
	{"SCANNER_STATE_TEXT_DECL", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_TEXT_DECL)},
	{"SCANNER_STATE_CHARACTER_DATA", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_CHARACTER_DATA)},
	{"SCANNER_STATE_START_ELEMENT_TAG", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_START_ELEMENT_TAG)},
	{"SCANNER_STATE_END_ELEMENT_TAG", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_END_ELEMENT_TAG)},
	{"SCANNER_STATE_CHAR_REFERENCE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_CHAR_REFERENCE)},
	{"SCANNER_STATE_BUILT_IN_REFS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, SCANNER_STATE_BUILT_IN_REFS)},
	{"NOTIFY_BUILTIN_REFS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDocumentFragmentScannerImpl, NOTIFY_BUILTIN_REFS)},
	{"ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDocumentFragmentScannerImpl, ENTITY_RESOLVER)},
	{"STANDARD_URI_CONFORMANT", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDocumentFragmentScannerImpl, STANDARD_URI_CONFORMANT)},
	{"CREATE_ENTITY_REF_NODES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDocumentFragmentScannerImpl, CREATE_ENTITY_REF_NODES)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDocumentFragmentScannerImpl, XML_SECURITY_PROPERTY_MANAGER)},
	{"EXTERNAL_ACCESS_DEFAULT", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XMLDocumentFragmentScannerImpl, EXTERNAL_ACCESS_DEFAULT)},
	{"RECOGNIZED_FEATURES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDocumentFragmentScannerImpl, RECOGNIZED_FEATURES)},
	{"FEATURE_DEFAULTS", "[Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDocumentFragmentScannerImpl, FEATURE_DEFAULTS)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDocumentFragmentScannerImpl, RECOGNIZED_PROPERTIES)},
	{"PROPERTY_DEFAULTS", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDocumentFragmentScannerImpl, PROPERTY_DEFAULTS)},
	{"CDATA", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDocumentFragmentScannerImpl, CDATA)},
	{"XMLDECL", "[C", nullptr, $STATIC | $FINAL, $staticField(XMLDocumentFragmentScannerImpl, XMLDECL)},
	{"DEBUG_SCANNER_STATE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, DEBUG_SCANNER_STATE)},
	{"DEBUG_DISPATCHER", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, DEBUG_DISPATCHER)},
	{"DEBUG_START_END_ELEMENT", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, DEBUG_START_END_ELEMENT)},
	{"DEBUG", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, DEBUG)},
	{"fDocumentHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fDocumentHandler)},
	{"fScannerLastState", "I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fScannerLastState)},
	{"fEntityStore", "Lcom/sun/xml/internal/stream/XMLEntityStorage;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fEntityStore)},
	{"fEntityStack", "[I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fEntityStack)},
	{"fMarkupDepth", "I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fMarkupDepth)},
	{"fEmptyElement", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fEmptyElement)},
	{"fReadingAttributes", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fReadingAttributes)},
	{"fScannerState", "I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fScannerState)},
	{"fInScanContent", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fInScanContent)},
	{"fLastSectionWasCData", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fLastSectionWasCData)},
	{"fCDataStart", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fCDataStart)},
	{"fInCData", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fInCData)},
	{"fCDataEnd", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fCDataEnd)},
	{"fLastSectionWasEntityReference", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fLastSectionWasEntityReference)},
	{"fLastSectionWasCharacterData", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fLastSectionWasCharacterData)},
	{"fHasExternalDTD", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fHasExternalDTD)},
	{"fStandaloneSet", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fStandaloneSet)},
	{"fStandalone", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fStandalone)},
	{"fVersion", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fVersion)},
	{"fCurrentElement", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fCurrentElement)},
	{"fElementStack", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$ElementStack;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fElementStack)},
	{"fElementStack2", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$ElementStack2;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fElementStack2)},
	{"fPITarget", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fPITarget)},
	{"fPIData", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fPIData)},
	{"fNotifyBuiltInRefs", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fNotifyBuiltInRefs)},
	{"fSupportDTD", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fSupportDTD)},
	{"fReplaceEntityReferences", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fReplaceEntityReferences)},
	{"fSupportExternalEntities", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fSupportExternalEntities)},
	{"fReportCdataEvent", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fReportCdataEvent)},
	{"fIsCoalesce", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fIsCoalesce)},
	{"fDeclaredEncoding", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fDeclaredEncoding)},
	{"fDisallowDoctype", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fDisallowDoctype)},
	{"fCreateEntityRefNodes", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fCreateEntityRefNodes)},
	{"fChunkSize", "I", nullptr, $PRIVATE, $field(XMLDocumentFragmentScannerImpl, fChunkSize)},
	{"fAccessExternalDTD", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fAccessExternalDTD)},
	{"fStrictURI", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fStrictURI)},
	{"fDriver", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fDriver)},
	{"fContentDriver", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fContentDriver)},
	{"fElementQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fElementQName)},
	{"fAttributeQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fAttributeQName)},
	{"fAttributes", "Lcom/sun/org/apache/xerces/internal/util/XMLAttributesIteratorImpl;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fAttributes)},
	{"fTempString", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fTempString)},
	{"fTempString2", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fTempString2)},
	{"fStrings", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XMLDocumentFragmentScannerImpl, fStrings)},
	{"fStringBuffer", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fStringBuffer)},
	{"fStringBuffer2", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fStringBuffer2)},
	{"fContentBuffer", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fContentBuffer)},
	{"fSingleChar", "[C", nullptr, $PRIVATE | $FINAL, $field(XMLDocumentFragmentScannerImpl, fSingleChar)},
	{"fCurrentEntityName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLDocumentFragmentScannerImpl, fCurrentEntityName)},
	{"fScanToEnd", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fScanToEnd)},
	{"dtdGrammarUtil", "Lcom/sun/xml/internal/stream/dtd/DTDGrammarUtil;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, dtdGrammarUtil)},
	{"fAddDefaultAttr", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fAddDefaultAttr)},
	{"foundBuiltInRefs", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, foundBuiltInRefs)},
	{"builtInRefCharacterHandled", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, builtInRefCharacterHandled)},
	{"MAX_DEPTH_LIMIT", "S", nullptr, $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, MAX_DEPTH_LIMIT)},
	{"ELEMENT_ARRAY_LENGTH", "S", nullptr, $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, ELEMENT_ARRAY_LENGTH)},
	{"MAX_POINTER_AT_A_DEPTH", "S", nullptr, $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, MAX_POINTER_AT_A_DEPTH)},
	{"DEBUG_SKIP_ALGORITHM", "Z", nullptr, $STATIC | $FINAL, $constField(XMLDocumentFragmentScannerImpl, DEBUG_SKIP_ALGORITHM)},
	{"fElementArray", "[Ljava/lang/String;", nullptr, 0, $field(XMLDocumentFragmentScannerImpl, fElementArray)},
	{"fLastPointerLocation", "S", nullptr, 0, $field(XMLDocumentFragmentScannerImpl, fLastPointerLocation)},
	{"fElementPointer", "S", nullptr, 0, $field(XMLDocumentFragmentScannerImpl, fElementPointer)},
	{"fPointerInfo", "[[S", nullptr, 0, $field(XMLDocumentFragmentScannerImpl, fPointerInfo)},
	{"fElementRawname", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fElementRawname)},
	{"fShouldSkip", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fShouldSkip)},
	{"fAdd", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fAdd)},
	{"fSkip", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fSkip)},
	{"fTempAugmentations", "Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PRIVATE, $field(XMLDocumentFragmentScannerImpl, fTempAugmentations)},
	{"fUsebuffer", "Z", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl, fUsebuffer)},
	{}
};

$MethodInfo _XMLDocumentFragmentScannerImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLDocumentFragmentScannerImpl, init$, void)},
	{"addElement", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(XMLDocumentFragmentScannerImpl, addElement, void, $String*)},
	{"bufferContent", "()V", nullptr, $PRIVATE, $method(XMLDocumentFragmentScannerImpl, bufferContent, void)},
	{"canStore", "(SS)Z", nullptr, 0, $virtualMethod(XMLDocumentFragmentScannerImpl, canStore, bool, int16_t, int16_t)},
	{"checkAccess", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $virtualMethod(XMLDocumentFragmentScannerImpl, checkAccess, $String*, $String*, $String*), "java.io.IOException"},
	{"checkDepth", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(XMLDocumentFragmentScannerImpl, checkDepth, void, $String*)},
	{"createContentDriver", "()Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver;", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl, createContentDriver, $XMLDocumentFragmentScannerImpl$Driver*)},
	{"endEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, endEntity, void, $String*, $Augmentations*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getAttributeIterator", "()Lcom/sun/org/apache/xerces/internal/util/XMLAttributesIteratorImpl;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, getAttributeIterator, $XMLAttributesIteratorImpl*)},
	{"getCharacterData", "()Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, getCharacterData, $XMLString*)},
	{"getComment", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, getComment, $String*)},
	{"getDocumentHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, getDocumentHandler, $XMLDocumentHandler*)},
	{"getDriverName", "(Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, getDriverName, $String*, $XMLDocumentFragmentScannerImpl$Driver*)},
	{"getElementPointer", "(SS)S", nullptr, 0, $virtualMethod(XMLDocumentFragmentScannerImpl, getElementPointer, int16_t, int16_t, int16_t)},
	{"getElementQName", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, getElementQName, $QName*)},
	{"getEntityName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, getEntityName, $String*)},
	{"getFeatureDefault", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, getFeatureDefault, $Boolean*, $String*)},
	{"getPIData", "()Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, getPIData, $XMLStringBuffer*)},
	{"getPITarget", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, getPITarget, $String*)},
	{"getPropertyDefault", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, getPropertyDefault, $Object*, $String*)},
	{"getRecognizedFeatures", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, getRecognizedFeatures, $StringArray*)},
	{"getRecognizedProperties", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, getRecognizedProperties, $StringArray*)},
	{"getScannerStateName", "(I)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl, getScannerStateName, $String*, int32_t)},
	{"getString", "()Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl, getString, $XMLString*)},
	{"handleCharacter", "(CLjava/lang/String;Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;)V", nullptr, $PRIVATE, $method(XMLDocumentFragmentScannerImpl, handleCharacter, void, char16_t, $String*, $XMLStringBuffer*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"hasAttributes", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, hasAttributes, bool)},
	{"isStandAlone", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, isStandAlone, bool)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, next, int32_t), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"pr", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(XMLDocumentFragmentScannerImpl, pr, void, $String*)},
	{"refresh", "()V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, refresh, void)},
	{"refresh", "(I)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, refresh, void, int32_t)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, reset, void, $PropertyManager*)},
	{"resetCommon", "()V", nullptr, 0, $virtualMethod(XMLDocumentFragmentScannerImpl, resetCommon, void)},
	{"resetPointer", "(SS)V", nullptr, 0, $virtualMethod(XMLDocumentFragmentScannerImpl, resetPointer, void, int16_t, int16_t)},
	{"scanAttribute", "(Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)V", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl, scanAttribute, void, $XMLAttributes*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanCDATASection", "(Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;Z)Z", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl, scanCDATASection, bool, $XMLStringBuffer*, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanCharReference", "()V", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl, scanCharReference, void), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanComment", "()V", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl, scanComment, void), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanContent", "(Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;)I", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl, scanContent, int32_t, $XMLStringBuffer*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanDocument", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, scanDocument, bool, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanEndElement", "()I", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl, scanEndElement, int32_t), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanEntityReference", "(Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;)V", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl, scanEntityReference, void, $XMLStringBuffer*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanPIData", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;)V", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl, scanPIData, void, $String*, $XMLStringBuffer*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanStartElement", "()Z", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl, scanStartElement, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanXMLDeclOrTextDecl", "(Z)V", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl, scanXMLDeclOrTextDecl, void, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"seekCloseOfStartTag", "()Z", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl, seekCloseOfStartTag, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, setDocumentHandler, void, $XMLDocumentHandler*)},
	{"setDriver", "(Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver;)V", nullptr, $PROTECTED | $FINAL, $method(XMLDocumentFragmentScannerImpl, setDriver, void, $XMLDocumentFragmentScannerImpl$Driver*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setInputSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, setInputSource, void, $XMLInputSource*), "java.io.IOException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setScannerState", "(I)V", nullptr, $PROTECTED | $FINAL, $method(XMLDocumentFragmentScannerImpl, setScannerState, void, int32_t)},
	{"skipElement", "()Z", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl, skipElement, bool), "java.io.IOException"},
	{"skipElement", "(S)Z", nullptr, 0, $virtualMethod(XMLDocumentFragmentScannerImpl, skipElement, bool, int16_t), "java.io.IOException"},
	{"skipFromTheBuffer", "(Ljava/lang/String;)Z", nullptr, 0, $virtualMethod(XMLDocumentFragmentScannerImpl, skipFromTheBuffer, bool, $String*), "java.io.IOException"},
	{"skipQElement", "(Ljava/lang/String;)Z", nullptr, 0, $virtualMethod(XMLDocumentFragmentScannerImpl, skipQElement, bool, $String*), "java.io.IOException"},
	{"standaloneSet", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, standaloneSet, bool)},
	{"startEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl, startEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"storePointerForADepth", "(S)S", nullptr, 0, $virtualMethod(XMLDocumentFragmentScannerImpl, storePointerForADepth, int16_t, int16_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XMLDocumentFragmentScannerImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$FragmentContentDriver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "FragmentContentDriver", $PROTECTED},
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "Driver", $PROTECTED | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$ElementStack", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "ElementStack", $PROTECTED},
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$ElementStack2", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "ElementStack2", $PROTECTED},
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Element", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "Element", $PROTECTED | $STATIC | $FINAL},
	{}
};

$ClassInfo _XMLDocumentFragmentScannerImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl",
	"com.sun.org.apache.xerces.internal.impl.XMLScanner",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentScanner,com.sun.org.apache.xerces.internal.impl.XMLEntityHandler,com.sun.xml.internal.stream.XMLBufferListener",
	_XMLDocumentFragmentScannerImpl_FieldInfo_,
	_XMLDocumentFragmentScannerImpl_MethodInfo_,
	nullptr,
	nullptr,
	_XMLDocumentFragmentScannerImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$FragmentContentDriver,com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver,com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$ElementStack,com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$ElementStack2,com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Element"
};

$Object* allocate$XMLDocumentFragmentScannerImpl($Class* clazz) {
	return $of($alloc(XMLDocumentFragmentScannerImpl));
}

int32_t XMLDocumentFragmentScannerImpl::hashCode() {
	 return this->$XMLScanner::hashCode();
}

bool XMLDocumentFragmentScannerImpl::equals(Object$* arg0) {
	 return this->$XMLScanner::equals(arg0);
}

$Object* XMLDocumentFragmentScannerImpl::clone() {
	 return this->$XMLScanner::clone();
}

$String* XMLDocumentFragmentScannerImpl::toString() {
	 return this->$XMLScanner::toString();
}

void XMLDocumentFragmentScannerImpl::finalize() {
	this->$XMLScanner::finalize();
}

$String* XMLDocumentFragmentScannerImpl::NOTIFY_BUILTIN_REFS = nullptr;
$String* XMLDocumentFragmentScannerImpl::ENTITY_RESOLVER = nullptr;
$String* XMLDocumentFragmentScannerImpl::STANDARD_URI_CONFORMANT = nullptr;
$String* XMLDocumentFragmentScannerImpl::CREATE_ENTITY_REF_NODES = nullptr;
$String* XMLDocumentFragmentScannerImpl::XML_SECURITY_PROPERTY_MANAGER = nullptr;
$String* XMLDocumentFragmentScannerImpl::EXTERNAL_ACCESS_DEFAULT = nullptr;
$StringArray* XMLDocumentFragmentScannerImpl::RECOGNIZED_FEATURES = nullptr;
$BooleanArray* XMLDocumentFragmentScannerImpl::FEATURE_DEFAULTS = nullptr;
$StringArray* XMLDocumentFragmentScannerImpl::RECOGNIZED_PROPERTIES = nullptr;
$ObjectArray* XMLDocumentFragmentScannerImpl::PROPERTY_DEFAULTS = nullptr;
$chars* XMLDocumentFragmentScannerImpl::CDATA = nullptr;
$chars* XMLDocumentFragmentScannerImpl::XMLDECL = nullptr;

void XMLDocumentFragmentScannerImpl::init$() {
	$XMLScanner::init$();
	$set(this, fEntityStack, $new($ints, 4));
	this->fReadingAttributes = false;
	this->fInScanContent = false;
	this->fLastSectionWasCData = false;
	this->fCDataStart = false;
	this->fInCData = false;
	this->fCDataEnd = false;
	this->fLastSectionWasEntityReference = false;
	this->fLastSectionWasCharacterData = false;
	$set(this, fElementStack, $new($XMLDocumentFragmentScannerImpl$ElementStack, this));
	$set(this, fElementStack2, $new($XMLDocumentFragmentScannerImpl$ElementStack2, this));
	$set(this, fPIData, $new($XMLString));
	this->fNotifyBuiltInRefs = false;
	this->fSupportDTD = true;
	this->fReplaceEntityReferences = true;
	this->fSupportExternalEntities = false;
	this->fReportCdataEvent = false;
	this->fIsCoalesce = false;
	$set(this, fDeclaredEncoding, nullptr);
	this->fDisallowDoctype = false;
	this->fCreateEntityRefNodes = false;
	$set(this, fAccessExternalDTD, XMLDocumentFragmentScannerImpl::EXTERNAL_ACCESS_DEFAULT);
	$set(this, fContentDriver, createContentDriver());
	$set(this, fElementQName, $new($QName));
	$set(this, fAttributeQName, $new($QName));
	$set(this, fAttributes, $new($XMLAttributesIteratorImpl));
	$set(this, fTempString, $new($XMLString));
	$set(this, fTempString2, $new($XMLString));
	$set(this, fStrings, $new($StringArray, 3));
	$set(this, fStringBuffer, $new($XMLStringBuffer));
	$set(this, fStringBuffer2, $new($XMLStringBuffer));
	$set(this, fContentBuffer, $new($XMLStringBuffer));
	$set(this, fSingleChar, $new($chars, 1));
	$set(this, fCurrentEntityName, nullptr);
	this->fScanToEnd = false;
	$set(this, dtdGrammarUtil, nullptr);
	this->fAddDefaultAttr = false;
	this->foundBuiltInRefs = false;
	this->builtInRefCharacterHandled = false;
	$set(this, fElementArray, $new($StringArray, XMLDocumentFragmentScannerImpl::ELEMENT_ARRAY_LENGTH));
	this->fLastPointerLocation = (int16_t)0;
	this->fElementPointer = (int16_t)0;
	$set(this, fPointerInfo, $new($shortArray2, XMLDocumentFragmentScannerImpl::MAX_DEPTH_LIMIT, XMLDocumentFragmentScannerImpl::MAX_POINTER_AT_A_DEPTH));
	this->fShouldSkip = false;
	this->fAdd = false;
	this->fSkip = false;
	$set(this, fTempAugmentations, nullptr);
}

void XMLDocumentFragmentScannerImpl::setInputSource($XMLInputSource* inputSource) {
	$nc(this->fEntityManager)->setEntityHandler(this);
	$nc(this->fEntityManager)->startEntity(false, "$fragment$"_s, inputSource, false, true);
}

bool XMLDocumentFragmentScannerImpl::scanDocument(bool complete) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fEntityManager)->setEntityHandler(this);
	int32_t event = next();
	do {
		switch (event) {
		case $XMLStreamConstants::START_DOCUMENT:
			{
				break;
			}
		case $XMLStreamConstants::START_ELEMENT:
			{
				break;
			}
		case $XMLStreamConstants::CHARACTERS:
			{
				$nc(this->fEntityScanner)->checkNodeCount($nc(this->fEntityScanner)->fCurrentEntity);
				$nc(this->fDocumentHandler)->characters($(getCharacterData()), nullptr);
				break;
			}
		case $XMLStreamConstants::SPACE:
			{
				break;
			}
		case $XMLStreamConstants::ENTITY_REFERENCE:
			{
				$nc(this->fEntityScanner)->checkNodeCount($nc(this->fEntityScanner)->fCurrentEntity);
				break;
			}
		case $XMLStreamConstants::PROCESSING_INSTRUCTION:
			{
				$nc(this->fEntityScanner)->checkNodeCount($nc(this->fEntityScanner)->fCurrentEntity);
				$var($String, var$0, getPITarget());
				$nc(this->fDocumentHandler)->processingInstruction(var$0, $(getPIData()), nullptr);
				break;
			}
		case $XMLStreamConstants::COMMENT:
			{
				$nc(this->fEntityScanner)->checkNodeCount($nc(this->fEntityScanner)->fCurrentEntity);
				$nc(this->fDocumentHandler)->comment($(getCharacterData()), nullptr);
				break;
			}
		case $XMLStreamConstants::DTD:
			{
				break;
			}
		case $XMLStreamConstants::CDATA:
			{
				$nc(this->fEntityScanner)->checkNodeCount($nc(this->fEntityScanner)->fCurrentEntity);
				if (this->fCDataStart) {
					$nc(this->fDocumentHandler)->startCDATA(nullptr);
					this->fCDataStart = false;
					this->fInCData = true;
				}
				$nc(this->fDocumentHandler)->characters($(getCharacterData()), nullptr);
				if (this->fCDataEnd) {
					$nc(this->fDocumentHandler)->endCDATA(nullptr);
					this->fCDataEnd = false;
				}
				break;
			}
		case $XMLStreamConstants::NOTATION_DECLARATION:
			{
				break;
			}
		case $XMLStreamConstants::ENTITY_DECLARATION:
			{
				break;
			}
		case $XMLStreamConstants::NAMESPACE:
			{
				break;
			}
		case $XMLStreamConstants::ATTRIBUTE:
			{
				break;
			}
		case $XMLStreamConstants::END_ELEMENT:
			{
				break;
			}
		default:
			{
				return false;
			}
		}
		event = next();
	} while (event != $XMLStreamConstants::END_DOCUMENT && complete);
	if (event == $XMLStreamConstants::END_DOCUMENT) {
		$nc(this->fDocumentHandler)->endDocument(nullptr);
		return false;
	}
	return true;
}

$QName* XMLDocumentFragmentScannerImpl::getElementQName() {
	if (this->fScannerLastState == $XMLEvent::END_ELEMENT) {
		$nc(this->fElementQName)->setValues($($nc(this->fElementStack)->getLastPoppedElement()));
	}
	return this->fElementQName;
}

int32_t XMLDocumentFragmentScannerImpl::next() {
	return $nc(this->fDriver)->next();
}

void XMLDocumentFragmentScannerImpl::reset($XMLComponentManager* componentManager) {
	$useLocalCurrentObjectStackCache();
	$XMLScanner::reset(componentManager);
	$init($Constants);
	this->fReportCdataEvent = $nc(componentManager)->getFeature($Constants::STAX_REPORT_CDATA_EVENT, true);
	$set(this, fSecurityManager, $cast($XMLSecurityManager, componentManager->getProperty($Constants::SECURITY_MANAGER, nullptr)));
	this->fNotifyBuiltInRefs = componentManager->getFeature(XMLDocumentFragmentScannerImpl::NOTIFY_BUILTIN_REFS, false);
	this->fCreateEntityRefNodes = componentManager->getFeature(XMLDocumentFragmentScannerImpl::CREATE_ENTITY_REF_NODES, this->fCreateEntityRefNodes);
	$var($Object, resolver, componentManager->getProperty(XMLDocumentFragmentScannerImpl::ENTITY_RESOLVER, nullptr));
	$set(this, fExternalSubsetResolver, ($instanceOf($ExternalSubsetResolver, resolver)) ? $cast($ExternalSubsetResolver, resolver) : ($ExternalSubsetResolver*)nullptr);
	this->fReadingAttributes = false;
	this->fSupportExternalEntities = true;
	this->fReplaceEntityReferences = true;
	this->fIsCoalesce = false;
	setScannerState(XMLDocumentFragmentScannerImpl::SCANNER_STATE_CONTENT);
	setDriver(this->fContentDriver);
	$var($XMLSecurityPropertyManager, spm, $cast($XMLSecurityPropertyManager, componentManager->getProperty(XMLDocumentFragmentScannerImpl::XML_SECURITY_PROPERTY_MANAGER, nullptr)));
	$init($XMLSecurityPropertyManager$Property);
	$set(this, fAccessExternalDTD, $nc(spm)->getValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD));
	this->fStrictURI = componentManager->getFeature(XMLDocumentFragmentScannerImpl::STANDARD_URI_CONFORMANT, false);
	$init($JdkConstants);
	this->fChunkSize = $JdkXmlUtils::getValue($(componentManager->getProperty($JdkConstants::CDATA_CHUNK_SIZE)), $JdkConstants::CDATA_CHUNK_SIZE_DEFAULT);
	resetCommon();
}

void XMLDocumentFragmentScannerImpl::reset($PropertyManager* propertyManager) {
	$useLocalCurrentObjectStackCache();
	$XMLScanner::reset(propertyManager);
	$init($XMLInputFactory);
	this->fNamespaces = $nc(($cast($Boolean, $($nc(propertyManager)->getProperty($XMLInputFactory::IS_NAMESPACE_AWARE)))))->booleanValue();
	this->fNotifyBuiltInRefs = false;
	$var($Boolean, bo, $cast($Boolean, propertyManager->getProperty($XMLInputFactory::IS_REPLACING_ENTITY_REFERENCES)));
	this->fReplaceEntityReferences = $nc(bo)->booleanValue();
	$assign(bo, $cast($Boolean, propertyManager->getProperty($XMLInputFactory::IS_SUPPORTING_EXTERNAL_ENTITIES)));
	this->fSupportExternalEntities = bo->booleanValue();
	$init($Constants);
	$var($Boolean, cdata, $cast($Boolean, propertyManager->getProperty($$str({$Constants::ZEPHYR_PROPERTY_PREFIX, $Constants::STAX_REPORT_CDATA_EVENT}))));
	if (cdata != nullptr) {
		this->fReportCdataEvent = cdata->booleanValue();
	}
	$var($Boolean, coalesce, $cast($Boolean, propertyManager->getProperty($XMLInputFactory::IS_COALESCING)));
	if (coalesce != nullptr) {
		this->fIsCoalesce = coalesce->booleanValue();
	}
	this->fReportCdataEvent = this->fIsCoalesce ? false : (this->fReportCdataEvent && true);
	this->fReplaceEntityReferences = this->fIsCoalesce ? true : this->fReplaceEntityReferences;
	$var($XMLSecurityPropertyManager, spm, $cast($XMLSecurityPropertyManager, propertyManager->getProperty(XMLDocumentFragmentScannerImpl::XML_SECURITY_PROPERTY_MANAGER)));
	$init($XMLSecurityPropertyManager$Property);
	$set(this, fAccessExternalDTD, $nc(spm)->getValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD));
	$set(this, fSecurityManager, $cast($XMLSecurityManager, propertyManager->getProperty($Constants::SECURITY_MANAGER)));
	$init($JdkConstants);
	this->fChunkSize = $JdkXmlUtils::getValue($(propertyManager->getProperty($JdkConstants::CDATA_CHUNK_SIZE)), $JdkConstants::CDATA_CHUNK_SIZE_DEFAULT);
	resetCommon();
}

void XMLDocumentFragmentScannerImpl::resetCommon() {
	this->fMarkupDepth = 0;
	$set(this, fCurrentElement, nullptr);
	$nc(this->fElementStack)->clear();
	this->fHasExternalDTD = false;
	this->fStandaloneSet = false;
	this->fStandalone = false;
	this->fInScanContent = false;
	this->fShouldSkip = false;
	this->fAdd = false;
	this->fSkip = false;
	$set(this, fEntityStore, $nc(this->fEntityManager)->getEntityStore());
	$set(this, dtdGrammarUtil, nullptr);
	if (this->fSecurityManager != nullptr) {
		$init($XMLSecurityManager$Limit);
		this->fElementAttributeLimit = $nc(this->fSecurityManager)->getLimit($XMLSecurityManager$Limit::ELEMENT_ATTRIBUTE_LIMIT);
		this->fXMLNameLimit = $nc(this->fSecurityManager)->getLimit($XMLSecurityManager$Limit::MAX_NAME_LIMIT);
	} else {
		this->fElementAttributeLimit = 0;
		$init($XMLSecurityManager$Limit);
		this->fXMLNameLimit = $XMLSecurityManager$Limit::MAX_NAME_LIMIT->defaultValue();
	}
	$set(this, fLimitAnalyzer, $nc(this->fEntityManager)->fLimitAnalyzer);
}

$StringArray* XMLDocumentFragmentScannerImpl::getRecognizedFeatures() {
	return $cast($StringArray, $nc(XMLDocumentFragmentScannerImpl::RECOGNIZED_FEATURES)->clone());
}

void XMLDocumentFragmentScannerImpl::setFeature($String* featureId, bool state) {
	$XMLScanner::setFeature(featureId, state);
	$init($Constants);
	if ($nc(featureId)->startsWith($Constants::XERCES_FEATURE_PREFIX)) {
		$var($String, feature, featureId->substring($nc($Constants::XERCES_FEATURE_PREFIX)->length()));
		if (feature->equals($Constants::NOTIFY_BUILTIN_REFS_FEATURE)) {
			this->fNotifyBuiltInRefs = state;
		}
	}
}

$StringArray* XMLDocumentFragmentScannerImpl::getRecognizedProperties() {
	return $cast($StringArray, $nc(XMLDocumentFragmentScannerImpl::RECOGNIZED_PROPERTIES)->clone());
}

void XMLDocumentFragmentScannerImpl::setProperty($String* propertyId, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$XMLScanner::setProperty(propertyId, value);
	$init($Constants);
	if ($nc(propertyId)->startsWith($Constants::XERCES_PROPERTY_PREFIX)) {
		int32_t var$0 = propertyId->length();
		int32_t suffixLength = var$0 - $nc($Constants::XERCES_PROPERTY_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::ENTITY_MANAGER_PROPERTY)->length();
		if (var$1 && propertyId->endsWith($Constants::ENTITY_MANAGER_PROPERTY)) {
			$set(this, fEntityManager, $cast($XMLEntityManager, value));
			return;
		}
		bool var$2 = suffixLength == $nc($Constants::ENTITY_RESOLVER_PROPERTY)->length();
		if (var$2 && propertyId->endsWith($Constants::ENTITY_RESOLVER_PROPERTY)) {
			$set(this, fExternalSubsetResolver, ($instanceOf($ExternalSubsetResolver, value)) ? $cast($ExternalSubsetResolver, value) : ($ExternalSubsetResolver*)nullptr);
			return;
		}
	}
	if ($nc(propertyId)->startsWith($Constants::XERCES_PROPERTY_PREFIX)) {
		$var($String, property, propertyId->substring($nc($Constants::XERCES_PROPERTY_PREFIX)->length()));
		if (property->equals($Constants::ENTITY_MANAGER_PROPERTY)) {
			$set(this, fEntityManager, $cast($XMLEntityManager, value));
		}
		return;
	}
	if ($nc(propertyId)->equals(XMLDocumentFragmentScannerImpl::XML_SECURITY_PROPERTY_MANAGER)) {
		$var($XMLSecurityPropertyManager, spm, $cast($XMLSecurityPropertyManager, value));
		$init($XMLSecurityPropertyManager$Property);
		$set(this, fAccessExternalDTD, $nc(spm)->getValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD));
	}
}

$Boolean* XMLDocumentFragmentScannerImpl::getFeatureDefault($String* featureId) {
	for (int32_t i = 0; i < $nc(XMLDocumentFragmentScannerImpl::RECOGNIZED_FEATURES)->length; ++i) {
		if ($nc($nc(XMLDocumentFragmentScannerImpl::RECOGNIZED_FEATURES)->get(i))->equals(featureId)) {
			return $nc(XMLDocumentFragmentScannerImpl::FEATURE_DEFAULTS)->get(i);
		}
	}
	return nullptr;
}

$Object* XMLDocumentFragmentScannerImpl::getPropertyDefault($String* propertyId) {
	for (int32_t i = 0; i < $nc(XMLDocumentFragmentScannerImpl::RECOGNIZED_PROPERTIES)->length; ++i) {
		if ($nc($nc(XMLDocumentFragmentScannerImpl::RECOGNIZED_PROPERTIES)->get(i))->equals(propertyId)) {
			return $of($nc(XMLDocumentFragmentScannerImpl::PROPERTY_DEFAULTS)->get(i));
		}
	}
	return $of(nullptr);
}

void XMLDocumentFragmentScannerImpl::setDocumentHandler($XMLDocumentHandler* documentHandler) {
	$set(this, fDocumentHandler, documentHandler);
}

$XMLDocumentHandler* XMLDocumentFragmentScannerImpl::getDocumentHandler() {
	return this->fDocumentHandler;
}

void XMLDocumentFragmentScannerImpl::startEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (this->fEntityDepth == $nc(this->fEntityStack)->length) {
		$var($ints, entityarray, $new($ints, $nc(this->fEntityStack)->length * 2));
		$System::arraycopy(this->fEntityStack, 0, entityarray, 0, $nc(this->fEntityStack)->length);
		$set(this, fEntityStack, entityarray);
	}
	$nc(this->fEntityStack)->set(this->fEntityDepth, this->fMarkupDepth);
	$XMLScanner::startEntity(name, identifier, encoding, augs);
	if (this->fStandalone && $nc(this->fEntityStore)->isEntityDeclInExternalSubset(name)) {
		reportFatalError("MSG_REFERENCE_TO_EXTERNALLY_DECLARED_ENTITY_WHEN_STANDALONE"_s, $$new($ObjectArray, {$of(name)}));
	}
	if (this->fDocumentHandler != nullptr && !this->fScanningAttribute) {
		if (!$nc(name)->equals("[xml]"_s)) {
			$nc(this->fDocumentHandler)->startGeneralEntity(name, identifier, encoding, augs);
		}
	}
}

void XMLDocumentFragmentScannerImpl::endEntity($String* name, $Augmentations* augs) {
	$XMLScanner::endEntity(name, augs);
	if (this->fMarkupDepth != $nc(this->fEntityStack)->get(this->fEntityDepth)) {
		reportFatalError("MarkupEntityMismatch"_s, nullptr);
	}
	if (this->fDocumentHandler != nullptr && !this->fScanningAttribute) {
		if (!$nc(name)->equals("[xml]"_s)) {
			$nc(this->fDocumentHandler)->endGeneralEntity(name, augs);
		}
	}
}

$XMLDocumentFragmentScannerImpl$Driver* XMLDocumentFragmentScannerImpl::createContentDriver() {
	return $new($XMLDocumentFragmentScannerImpl$FragmentContentDriver, this);
}

void XMLDocumentFragmentScannerImpl::scanXMLDeclOrTextDecl(bool scanningTextDecl) {
	$useLocalCurrentObjectStackCache();
	$XMLScanner::scanXMLDeclOrTextDecl(scanningTextDecl, this->fStrings);
	--this->fMarkupDepth;
	$var($String, version, $nc(this->fStrings)->get(0));
	$var($String, encoding, $nc(this->fStrings)->get(1));
	$var($String, standalone, $nc(this->fStrings)->get(2));
	$set(this, fDeclaredEncoding, encoding);
	this->fStandaloneSet = standalone != nullptr;
	this->fStandalone = this->fStandaloneSet && standalone->equals("yes"_s);
	$nc(this->fEntityManager)->setStandalone(this->fStandalone);
	if (this->fDocumentHandler != nullptr) {
		if (scanningTextDecl) {
			$nc(this->fDocumentHandler)->textDecl(version, encoding, nullptr);
		} else {
			$nc(this->fDocumentHandler)->xmlDecl(version, encoding, standalone, nullptr);
		}
	}
	if (version != nullptr) {
		$nc(this->fEntityScanner)->setVersion(version);
		$nc(this->fEntityScanner)->setXMLVersion(version);
	}
	if (encoding != nullptr && !$nc($($nc(this->fEntityScanner)->getCurrentEntity()))->isEncodingExternallySpecified()) {
		$nc(this->fEntityScanner)->setEncoding(encoding);
	}
}

$String* XMLDocumentFragmentScannerImpl::getPITarget() {
	return this->fPITarget;
}

$XMLStringBuffer* XMLDocumentFragmentScannerImpl::getPIData() {
	return this->fContentBuffer;
}

$XMLString* XMLDocumentFragmentScannerImpl::getCharacterData() {
	if (this->fUsebuffer) {
		return this->fContentBuffer;
	} else {
		return this->fTempString;
	}
}

void XMLDocumentFragmentScannerImpl::scanPIData($String* target, $XMLStringBuffer* data) {
	$XMLScanner::scanPIData(target, data);
	$set(this, fPITarget, target);
	--this->fMarkupDepth;
}

void XMLDocumentFragmentScannerImpl::scanComment() {
	$nc(this->fContentBuffer)->clear();
	scanComment(this->fContentBuffer);
	this->fUsebuffer = true;
	--this->fMarkupDepth;
}

$String* XMLDocumentFragmentScannerImpl::getComment() {
	return $nc(this->fContentBuffer)->toString();
}

void XMLDocumentFragmentScannerImpl::addElement($String* rawname) {
	if (this->fElementPointer < XMLDocumentFragmentScannerImpl::ELEMENT_ARRAY_LENGTH) {
		$nc(this->fElementArray)->set(this->fElementPointer, rawname);
		if ($nc(this->fElementStack)->fDepth < XMLDocumentFragmentScannerImpl::MAX_DEPTH_LIMIT) {
			int16_t column = storePointerForADepth(this->fElementPointer);
			if (column > 0) {
				int16_t pointer = getElementPointer((int16_t)$nc(this->fElementStack)->fDepth, (int16_t)(column - 1));
				if (rawname == $nc(this->fElementArray)->get(pointer)) {
					this->fShouldSkip = true;
					this->fLastPointerLocation = pointer;
					resetPointer((int16_t)$nc(this->fElementStack)->fDepth, column);
					$nc(this->fElementArray)->set(this->fElementPointer, nullptr);
					return;
				} else {
					this->fShouldSkip = false;
				}
			}
		}
		++this->fElementPointer;
	}
}

void XMLDocumentFragmentScannerImpl::resetPointer(int16_t depth, int16_t column) {
	$nc($nc(this->fPointerInfo)->get(depth))->set(column, (int16_t)0);
}

int16_t XMLDocumentFragmentScannerImpl::storePointerForADepth(int16_t elementPointer) {
	int16_t depth = (int16_t)$nc(this->fElementStack)->fDepth;
	for (int16_t i = (int16_t)0; i < XMLDocumentFragmentScannerImpl::MAX_POINTER_AT_A_DEPTH; ++i) {
		if (canStore(depth, i)) {
			$nc($nc(this->fPointerInfo)->get(depth))->set(i, elementPointer);
			return i;
		}
	}
	return (int16_t)-1;
}

bool XMLDocumentFragmentScannerImpl::canStore(int16_t depth, int16_t column) {
	return $nc($nc(this->fPointerInfo)->get(depth))->get(column) == 0 ? true : false;
}

int16_t XMLDocumentFragmentScannerImpl::getElementPointer(int16_t depth, int16_t column) {
	return $nc($nc(this->fPointerInfo)->get(depth))->get(column);
}

bool XMLDocumentFragmentScannerImpl::skipFromTheBuffer($String* rawname) {
	if ($nc(this->fEntityScanner)->skipString(rawname)) {
		char16_t c = (char16_t)$nc(this->fEntityScanner)->peekChar();
		if (c == u' ' || c == u'/' || c == u'>') {
			$set(this, fElementRawname, rawname);
			return true;
		} else {
			return false;
		}
	} else {
		return false;
	}
}

bool XMLDocumentFragmentScannerImpl::skipQElement($String* rawname) {
	int32_t c = $nc(this->fEntityScanner)->getChar($nc(rawname)->length());
	if ($XMLChar::isName(c)) {
		return false;
	} else {
		return $nc(this->fEntityScanner)->skipString(rawname);
	}
}

bool XMLDocumentFragmentScannerImpl::skipElement() {
	if (!this->fShouldSkip) {
		return false;
	}
	if (this->fLastPointerLocation != 0) {
		$var($String, rawname, $nc(this->fElementArray)->get(this->fLastPointerLocation + 1));
		if (rawname != nullptr && skipFromTheBuffer(rawname)) {
			++this->fLastPointerLocation;
			return true;
		} else {
			this->fLastPointerLocation = (int16_t)0;
		}
	}
	return this->fShouldSkip && skipElement((int16_t)0);
}

bool XMLDocumentFragmentScannerImpl::skipElement(int16_t column) {
	int16_t depth = (int16_t)$nc(this->fElementStack)->fDepth;
	if (depth > XMLDocumentFragmentScannerImpl::MAX_DEPTH_LIMIT) {
		return this->fShouldSkip = false;
	}
	for (int16_t i = column; i < XMLDocumentFragmentScannerImpl::MAX_POINTER_AT_A_DEPTH; ++i) {
		int16_t pointer = getElementPointer(depth, i);
		if (pointer == 0) {
			return this->fShouldSkip = false;
		}
		if ($nc(this->fElementArray)->get(pointer) != nullptr && skipFromTheBuffer($nc(this->fElementArray)->get(pointer))) {
			this->fLastPointerLocation = pointer;
			return this->fShouldSkip = true;
		}
	}
	return this->fShouldSkip = false;
}

bool XMLDocumentFragmentScannerImpl::scanStartElement() {
	$useLocalCurrentObjectStackCache();
	if (this->fSkip && !this->fAdd) {
		$var($QName, name, $nc(this->fElementStack)->getNext());
		this->fSkip = $nc(this->fEntityScanner)->skipString($nc(name)->rawname);
		if (this->fSkip) {
			$nc(this->fElementStack)->push();
			$set(this, fElementQName, name);
		} else {
			$nc(this->fElementStack)->reposition();
		}
	}
	if (!this->fSkip || this->fAdd) {
		$set(this, fElementQName, $nc(this->fElementStack)->nextElement());
		if (this->fNamespaces) {
			$init($XMLScanner$NameType);
			$nc(this->fEntityScanner)->scanQName(this->fElementQName, $XMLScanner$NameType::ELEMENTSTART);
		} else {
			$init($XMLScanner$NameType);
			$var($String, name, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::ELEMENTSTART));
			$nc(this->fElementQName)->setValues(nullptr, name, name, nullptr);
		}
	}
	if (this->fAdd) {
		$nc(this->fElementStack)->matchElement(this->fElementQName);
	}
	$set(this, fCurrentElement, this->fElementQName);
	$var($String, rawname, $nc(this->fElementQName)->rawname);
	this->fEmptyElement = false;
	$nc(this->fAttributes)->removeAllAttributes();
	checkDepth(rawname);
	if (!seekCloseOfStartTag()) {
		this->fReadingAttributes = true;
		this->fAttributeCacheUsedCount = 0;
		this->fStringBufferIndex = 0;
		this->fAddDefaultAttr = true;
		do {
			scanAttribute(this->fAttributes);
			bool var$0 = this->fSecurityManager != nullptr && !$nc(this->fSecurityManager)->isNoLimit(this->fElementAttributeLimit);
			if (var$0 && $nc(this->fAttributes)->getLength() > this->fElementAttributeLimit) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "ElementAttributeLimit"_s, $$new($ObjectArray, {
					$of(rawname),
					$($of($Integer::valueOf(this->fElementAttributeLimit)))
				}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			}
		} while (!seekCloseOfStartTag());
		this->fReadingAttributes = false;
	}
	if (this->fEmptyElement) {
		--this->fMarkupDepth;
		if (this->fMarkupDepth < $nc(this->fEntityStack)->get(this->fEntityDepth - 1)) {
			reportFatalError("ElementEntityMismatch"_s, $$new($ObjectArray, {$of($nc(this->fCurrentElement)->rawname)}));
		}
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->emptyElement(this->fElementQName, this->fAttributes, nullptr);
		}
		$nc(this->fElementStack)->popElement();
	} else {
		if (this->dtdGrammarUtil != nullptr) {
			$nc(this->dtdGrammarUtil)->startElement(this->fElementQName, this->fAttributes);
		}
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->startElement(this->fElementQName, this->fAttributes, nullptr);
		}
	}
	return this->fEmptyElement;
}

bool XMLDocumentFragmentScannerImpl::seekCloseOfStartTag() {
	$useLocalCurrentObjectStackCache();
	bool sawSpace = $nc(this->fEntityScanner)->skipSpaces();
	int32_t c = $nc(this->fEntityScanner)->peekChar();
	if (c == u'>') {
		$nc(this->fEntityScanner)->scanChar(nullptr);
		return true;
	} else if (c == u'/') {
		$nc(this->fEntityScanner)->scanChar(nullptr);
		$init($XMLScanner$NameType);
		if (!$nc(this->fEntityScanner)->skipChar(u'>', $XMLScanner$NameType::ELEMENTEND)) {
			reportFatalError("ElementUnterminated"_s, $$new($ObjectArray, {$of($nc(this->fElementQName)->rawname)}));
		}
		this->fEmptyElement = true;
		return true;
	} else if (!isValidNameStartChar(c) || !sawSpace) {
		if (!isValidNameStartHighSurrogate(c) || !sawSpace) {
			reportFatalError("ElementUnterminated"_s, $$new($ObjectArray, {$of($nc(this->fElementQName)->rawname)}));
		}
	}
	return false;
}

bool XMLDocumentFragmentScannerImpl::hasAttributes() {
	return $nc(this->fAttributes)->getLength() > 0;
}

$XMLAttributesIteratorImpl* XMLDocumentFragmentScannerImpl::getAttributeIterator() {
	if (this->dtdGrammarUtil != nullptr && this->fAddDefaultAttr) {
		$nc(this->dtdGrammarUtil)->addDTDDefaultAttrs(this->fElementQName, this->fAttributes);
		this->fAddDefaultAttr = false;
	}
	return this->fAttributes;
}

bool XMLDocumentFragmentScannerImpl::standaloneSet() {
	return this->fStandaloneSet;
}

bool XMLDocumentFragmentScannerImpl::isStandAlone() {
	return this->fStandalone;
}

void XMLDocumentFragmentScannerImpl::scanAttribute($XMLAttributes* attributes) {
	$useLocalCurrentObjectStackCache();
	if (this->fNamespaces) {
		$init($XMLScanner$NameType);
		$nc(this->fEntityScanner)->scanQName(this->fAttributeQName, $XMLScanner$NameType::ATTRIBUTENAME);
	} else {
		$init($XMLScanner$NameType);
		$var($String, name, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::ATTRIBUTENAME));
		$nc(this->fAttributeQName)->setValues(nullptr, name, name, nullptr);
	}
	$nc(this->fEntityScanner)->skipSpaces();
	$init($XMLScanner$NameType);
	if (!$nc(this->fEntityScanner)->skipChar(u'=', $XMLScanner$NameType::ATTRIBUTE)) {
		reportFatalError("EqRequiredInAttribute"_s, $$new($ObjectArray, {
			$of($nc(this->fCurrentElement)->rawname),
			$of($nc(this->fAttributeQName)->rawname)
		}));
	}
	$nc(this->fEntityScanner)->skipSpaces();
	int32_t attIndex = 0;
	bool isVC = this->fHasExternalDTD && !this->fStandalone;
	$var($XMLString, tmpStr, getString());
	scanAttributeValue(tmpStr, this->fTempString2, $nc(this->fAttributeQName)->rawname, attributes, attIndex, isVC, $nc(this->fCurrentElement)->rawname, false);
	int32_t oldLen = $nc(attributes)->getLength();
	$init($XMLSymbols);
	attIndex = attributes->addAttribute(this->fAttributeQName, $XMLSymbols::fCDATASymbol, nullptr);
	if (oldLen == attributes->getLength()) {
		reportFatalError("AttributeNotUnique"_s, $$new($ObjectArray, {
			$of($nc(this->fCurrentElement)->rawname),
			$of($nc(this->fAttributeQName)->rawname)
		}));
	}
	attributes->setValue(attIndex, nullptr, tmpStr);
	attributes->setSpecified(attIndex, true);
}

int32_t XMLDocumentFragmentScannerImpl::scanContent($XMLStringBuffer* content) {
	$nc(this->fTempString)->length = 0;
	int32_t c = $nc(this->fEntityScanner)->scanContent(this->fTempString);
	$nc(content)->append(this->fTempString);
	$nc(this->fTempString)->length = 0;
	if (c == u'\r') {
		$nc(this->fEntityScanner)->scanChar(nullptr);
		content->append((char16_t)c);
		c = -1;
	} else if (c == u']') {
		content->append((char16_t)$nc(this->fEntityScanner)->scanChar(nullptr));
		this->fInScanContent = true;
		if ($nc(this->fEntityScanner)->skipChar(u']', nullptr)) {
			content->append(u']');
			while ($nc(this->fEntityScanner)->skipChar(u']', nullptr)) {
				content->append(u']');
			}
			if ($nc(this->fEntityScanner)->skipChar(u'>', nullptr)) {
				reportFatalError("CDEndInContent"_s, nullptr);
			}
		}
		this->fInScanContent = false;
		c = -1;
	}
	if (this->fDocumentHandler != nullptr && content->length > 0) {
	}
	return c;
}

bool XMLDocumentFragmentScannerImpl::scanCDATASection($XMLStringBuffer* contentBuffer, bool complete) {
	$useLocalCurrentObjectStackCache();
	if (this->fDocumentHandler != nullptr) {
	}
	while (true) {
		if (!$nc(this->fEntityScanner)->scanData("]]>"_s, contentBuffer, this->fChunkSize)) {
			this->fInCData = false;
			this->fCDataEnd = true;
			--this->fMarkupDepth;
			break;
		} else {
			int32_t c = $nc(this->fEntityScanner)->peekChar();
			if (c != -1 && isInvalidLiteral(c)) {
				if ($XMLChar::isHighSurrogate(c)) {
					scanSurrogates(contentBuffer);
				} else {
					reportFatalError("InvalidCharInCDSect"_s, $$new($ObjectArray, {$($of($Integer::toString(c, 16)))}));
					$nc(this->fEntityScanner)->scanChar(nullptr);
				}
			} else {
				this->fInCData = true;
				this->fCDataEnd = false;
				break;
			}
			if (this->fDocumentHandler != nullptr) {
			}
		}
	}
	return true;
}

int32_t XMLDocumentFragmentScannerImpl::scanEndElement() {
	$useLocalCurrentObjectStackCache();
	$var($QName, endElementName, $nc(this->fElementStack)->popElement());
	$var($String, rawname, $nc(endElementName)->rawname);
	if (!$nc(this->fEntityScanner)->skipString(endElementName->rawname)) {
		reportFatalError("ETagRequired"_s, $$new($ObjectArray, {$of(rawname)}));
	}
	$nc(this->fEntityScanner)->skipSpaces();
	$init($XMLScanner$NameType);
	if (!$nc(this->fEntityScanner)->skipChar(u'>', $XMLScanner$NameType::ELEMENTEND)) {
		reportFatalError("ETagUnterminated"_s, $$new($ObjectArray, {$of(rawname)}));
	}
	--this->fMarkupDepth;
	--this->fMarkupDepth;
	if (this->fMarkupDepth < $nc(this->fEntityStack)->get(this->fEntityDepth - 1)) {
		reportFatalError("ElementEntityMismatch"_s, $$new($ObjectArray, {$of(rawname)}));
	}
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->endElement(endElementName, nullptr);
	}
	if (this->dtdGrammarUtil != nullptr) {
		$nc(this->dtdGrammarUtil)->endElement(endElementName);
	}
	return this->fMarkupDepth;
}

void XMLDocumentFragmentScannerImpl::scanCharReference() {
	$nc(this->fStringBuffer2)->clear();
	int32_t ch = scanCharReferenceValue(this->fStringBuffer2, nullptr);
	--this->fMarkupDepth;
	if (ch != -1) {
		if (this->fDocumentHandler != nullptr) {
			if (this->fNotifyCharRefs) {
				$nc(this->fDocumentHandler)->startGeneralEntity(this->fCharRefLiteral, nullptr, nullptr, nullptr);
			}
			$var($Augmentations, augs, nullptr);
			if (this->fValidation && ch <= 32) {
				if (this->fTempAugmentations != nullptr) {
					$nc(this->fTempAugmentations)->removeAllItems();
				} else {
					$set(this, fTempAugmentations, $new($AugmentationsImpl));
				}
				$assign(augs, this->fTempAugmentations);
				$init($Constants);
				$init($Boolean);
				$nc(augs)->putItem($Constants::CHAR_REF_PROBABLE_WS, $Boolean::TRUE);
			}
			if (this->fNotifyCharRefs) {
				$nc(this->fDocumentHandler)->endGeneralEntity(this->fCharRefLiteral, nullptr);
			}
		}
	}
}

void XMLDocumentFragmentScannerImpl::scanEntityReference($XMLStringBuffer* content) {
	$useLocalCurrentObjectStackCache();
	$init($XMLScanner$NameType);
	$var($String, name, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::REFERENCE));
	if (name == nullptr) {
		reportFatalError("NameRequiredInReference"_s, nullptr);
		return;
	}
	if (!$nc(this->fEntityScanner)->skipChar(u';', $XMLScanner$NameType::REFERENCE)) {
		reportFatalError("SemicolonRequiredInReference"_s, $$new($ObjectArray, {$of(name)}));
	}
	if ($nc(this->fEntityStore)->isUnparsedEntity(name)) {
		reportFatalError("ReferenceToUnparsedEntity"_s, $$new($ObjectArray, {$of(name)}));
	}
	--this->fMarkupDepth;
	$set(this, fCurrentEntityName, name);
	$init($XMLScanner);
	if (name == $XMLScanner::fAmpSymbol) {
		handleCharacter(u'&', $XMLScanner::fAmpSymbol, content);
		this->fScannerState = XMLDocumentFragmentScannerImpl::SCANNER_STATE_BUILT_IN_REFS;
		return;
	} else {
		if (name == $XMLScanner::fLtSymbol) {
			handleCharacter(u'<', $XMLScanner::fLtSymbol, content);
			this->fScannerState = XMLDocumentFragmentScannerImpl::SCANNER_STATE_BUILT_IN_REFS;
			return;
		} else {
			if (name == $XMLScanner::fGtSymbol) {
				handleCharacter(u'>', $XMLScanner::fGtSymbol, content);
				this->fScannerState = XMLDocumentFragmentScannerImpl::SCANNER_STATE_BUILT_IN_REFS;
				return;
			} else {
				if (name == $XMLScanner::fQuotSymbol) {
					handleCharacter(u'\"', $XMLScanner::fQuotSymbol, content);
					this->fScannerState = XMLDocumentFragmentScannerImpl::SCANNER_STATE_BUILT_IN_REFS;
					return;
				} else {
					if (name == $XMLScanner::fAposSymbol) {
						handleCharacter(u'\'', $XMLScanner::fAposSymbol, content);
						this->fScannerState = XMLDocumentFragmentScannerImpl::SCANNER_STATE_BUILT_IN_REFS;
						return;
					}
				}
			}
		}
	}
	bool isEE = $nc(this->fEntityStore)->isExternalEntity(name);
	if ((isEE && !this->fSupportExternalEntities) || (!isEE && !this->fReplaceEntityReferences) || this->foundBuiltInRefs) {
		this->fScannerState = XMLDocumentFragmentScannerImpl::SCANNER_STATE_REFERENCE;
		return;
	}
	if (!$nc(this->fEntityStore)->isDeclaredEntity(name)) {
		if (!this->fSupportDTD && this->fReplaceEntityReferences) {
			reportFatalError("EntityNotDeclared"_s, $$new($ObjectArray, {$of(name)}));
			return;
		}
		if (this->fHasExternalDTD && !this->fStandalone) {
			if (this->fValidation) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError(static_cast<$XMLLocator*>(this->fEntityScanner), $XMLMessageFormatter::XML_DOMAIN, "EntityNotDeclared"_s, $$new($ObjectArray, {$of(name)}), $XMLErrorReporter::SEVERITY_ERROR);
			}
		} else {
			reportFatalError("EntityNotDeclared"_s, $$new($ObjectArray, {$of(name)}));
		}
	}
	if (this->fCreateEntityRefNodes) {
		$nc(this->fDocumentHandler)->startGeneralEntity(name, nullptr, nullptr, nullptr);
	} else {
		$nc(this->fEntityManager)->startEntity(true, name, false);
	}
}

void XMLDocumentFragmentScannerImpl::checkDepth($String* elementName) {
	$useLocalCurrentObjectStackCache();
	$init($XMLSecurityManager$Limit);
	$nc(this->fLimitAnalyzer)->addValue($XMLSecurityManager$Limit::MAX_ELEMENT_DEPTH_LIMIT, elementName, $nc(this->fElementStack)->fDepth);
	if ($nc(this->fSecurityManager)->isOverLimit($XMLSecurityManager$Limit::MAX_ELEMENT_DEPTH_LIMIT, this->fLimitAnalyzer)) {
		$nc(this->fSecurityManager)->debugPrint(this->fLimitAnalyzer);
		reportFatalError("MaxElementDepthLimit"_s, $$new($ObjectArray, {
			$of(elementName),
			$($of($Integer::valueOf($nc(this->fLimitAnalyzer)->getTotalValue($XMLSecurityManager$Limit::MAX_ELEMENT_DEPTH_LIMIT)))),
			$($of($Integer::valueOf($nc(this->fSecurityManager)->getLimit($XMLSecurityManager$Limit::MAX_ELEMENT_DEPTH_LIMIT)))),
			$of("maxElementDepth"_s)
		}));
	}
}

void XMLDocumentFragmentScannerImpl::handleCharacter(char16_t c, $String* entity, $XMLStringBuffer* content) {
	this->foundBuiltInRefs = true;
	checkEntityLimit(false, $nc($nc(this->fEntityScanner)->fCurrentEntity)->name, 1);
	$nc(content)->append(c);
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fSingleChar)->set(0, c);
		if (this->fNotifyBuiltInRefs) {
			$nc(this->fDocumentHandler)->startGeneralEntity(entity, nullptr, nullptr, nullptr);
		}
		$nc(this->fTempString)->setValues(this->fSingleChar, 0, 1);
		if (!this->fIsCoalesce) {
			$nc(this->fDocumentHandler)->characters(this->fTempString, nullptr);
			this->builtInRefCharacterHandled = true;
		}
		if (this->fNotifyBuiltInRefs) {
			$nc(this->fDocumentHandler)->endGeneralEntity(entity, nullptr);
		}
	}
}

void XMLDocumentFragmentScannerImpl::setScannerState(int32_t state) {
	this->fScannerState = state;
}

void XMLDocumentFragmentScannerImpl::setDriver($XMLDocumentFragmentScannerImpl$Driver* driver) {
	$set(this, fDriver, driver);
}

$String* XMLDocumentFragmentScannerImpl::getScannerStateName(int32_t state) {
	$useLocalCurrentObjectStackCache();
	switch (state) {
	case XMLDocumentFragmentScannerImpl::SCANNER_STATE_DOCTYPE:
		{
			return "SCANNER_STATE_DOCTYPE"_s;
		}
	case XMLDocumentFragmentScannerImpl::SCANNER_STATE_ROOT_ELEMENT:
		{
			return "SCANNER_STATE_ROOT_ELEMENT"_s;
		}
	case XMLDocumentFragmentScannerImpl::SCANNER_STATE_START_OF_MARKUP:
		{
			return "SCANNER_STATE_START_OF_MARKUP"_s;
		}
	case XMLDocumentFragmentScannerImpl::SCANNER_STATE_COMMENT:
		{
			return "SCANNER_STATE_COMMENT"_s;
		}
	case XMLDocumentFragmentScannerImpl::SCANNER_STATE_PI:
		{
			return "SCANNER_STATE_PI"_s;
		}
	case XMLDocumentFragmentScannerImpl::SCANNER_STATE_CONTENT:
		{
			return "SCANNER_STATE_CONTENT"_s;
		}
	case XMLDocumentFragmentScannerImpl::SCANNER_STATE_REFERENCE:
		{
			return "SCANNER_STATE_REFERENCE"_s;
		}
	case XMLDocumentFragmentScannerImpl::SCANNER_STATE_END_OF_INPUT:
		{
			return "SCANNER_STATE_END_OF_INPUT"_s;
		}
	case XMLDocumentFragmentScannerImpl::SCANNER_STATE_TERMINATED:
		{
			return "SCANNER_STATE_TERMINATED"_s;
		}
	case XMLDocumentFragmentScannerImpl::SCANNER_STATE_CDATA:
		{
			return "SCANNER_STATE_CDATA"_s;
		}
	case XMLDocumentFragmentScannerImpl::SCANNER_STATE_TEXT_DECL:
		{
			return "SCANNER_STATE_TEXT_DECL"_s;
		}
	case XMLDocumentFragmentScannerImpl::SCANNER_STATE_ATTRIBUTE:
		{
			return "SCANNER_STATE_ATTRIBUTE"_s;
		}
	case XMLDocumentFragmentScannerImpl::SCANNER_STATE_ATTRIBUTE_VALUE:
		{
			return "SCANNER_STATE_ATTRIBUTE_VALUE"_s;
		}
	case XMLDocumentFragmentScannerImpl::SCANNER_STATE_START_ELEMENT_TAG:
		{
			return "SCANNER_STATE_START_ELEMENT_TAG"_s;
		}
	case XMLDocumentFragmentScannerImpl::SCANNER_STATE_END_ELEMENT_TAG:
		{
			return "SCANNER_STATE_END_ELEMENT_TAG"_s;
		}
	case XMLDocumentFragmentScannerImpl::SCANNER_STATE_CHARACTER_DATA:
		{
			return "SCANNER_STATE_CHARACTER_DATA"_s;
		}
	}
	return $str({"??? ("_s, $$str(state), $$str(u')')});
}

$String* XMLDocumentFragmentScannerImpl::getEntityName() {
	return this->fCurrentEntityName;
}

$String* XMLDocumentFragmentScannerImpl::getDriverName($XMLDocumentFragmentScannerImpl$Driver* driver) {
	return "null"_s;
}

$String* XMLDocumentFragmentScannerImpl::checkAccess($String* systemId, $String* allowedProtocols) {
	$useLocalCurrentObjectStackCache();
	$var($String, baseSystemId, $nc(this->fEntityScanner)->getBaseSystemId());
	$var($String, expandedSystemId, $XMLEntityManager::expandSystemId(systemId, baseSystemId, this->fStrictURI));
	$init($JdkConstants);
	return $SecuritySupport::checkAccess(expandedSystemId, allowedProtocols, $JdkConstants::ACCESS_EXTERNAL_ALL);
}

void XMLDocumentFragmentScannerImpl::pr($String* str) {
	$init(XMLDocumentFragmentScannerImpl);
	$nc($System::out)->println(str);
}

$XMLString* XMLDocumentFragmentScannerImpl::getString() {
	if (this->fAttributeCacheUsedCount < this->initialCacheCount || this->fAttributeCacheUsedCount < $nc(this->attributeValueCache)->size()) {
		return $cast($XMLString, $nc(this->attributeValueCache)->get(this->fAttributeCacheUsedCount++));
	} else {
		$var($XMLString, str, $new($XMLString));
		++this->fAttributeCacheUsedCount;
		$nc(this->attributeValueCache)->add(str);
		return str;
	}
}

void XMLDocumentFragmentScannerImpl::refresh() {
	refresh(0);
}

void XMLDocumentFragmentScannerImpl::refresh(int32_t refreshPosition) {
	if (this->fReadingAttributes) {
		$nc(this->fAttributes)->refresh();
	}
	if (this->fScannerState == XMLDocumentFragmentScannerImpl::SCANNER_STATE_CHARACTER_DATA) {
		bufferContent();
	}
}

void XMLDocumentFragmentScannerImpl::bufferContent() {
	$nc(this->fContentBuffer)->append(this->fTempString);
	$nc(this->fTempString)->length = 0;
	this->fUsebuffer = true;
}

void clinit$XMLDocumentFragmentScannerImpl($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$assignStatic(XMLDocumentFragmentScannerImpl::NOTIFY_BUILTIN_REFS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NOTIFY_BUILTIN_REFS_FEATURE}));
	$assignStatic(XMLDocumentFragmentScannerImpl::ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_RESOLVER_PROPERTY}));
	$assignStatic(XMLDocumentFragmentScannerImpl::STANDARD_URI_CONFORMANT, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::STANDARD_URI_CONFORMANT_FEATURE}));
	$assignStatic(XMLDocumentFragmentScannerImpl::CREATE_ENTITY_REF_NODES, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::CREATE_ENTITY_REF_NODES_FEATURE}));
	$init($JdkConstants);
	$assignStatic(XMLDocumentFragmentScannerImpl::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
	$assignStatic(XMLDocumentFragmentScannerImpl::EXTERNAL_ACCESS_DEFAULT, $JdkConstants::EXTERNAL_ACCESS_DEFAULT);
	$init($XMLScanner);
	$init($Constants);
	$init($XMLConstants);
	$assignStatic(XMLDocumentFragmentScannerImpl::RECOGNIZED_FEATURES, $new($StringArray, {
		$XMLScanner::NAMESPACES,
		$XMLScanner::VALIDATION,
		XMLDocumentFragmentScannerImpl::NOTIFY_BUILTIN_REFS,
		$XMLScanner::NOTIFY_CHAR_REFS,
		$Constants::STAX_REPORT_CDATA_EVENT,
		$XMLConstants::USE_CATALOG
	}));
	$init($Boolean);
	$init($JdkXmlUtils);
	$assignStatic(XMLDocumentFragmentScannerImpl::FEATURE_DEFAULTS, $new($BooleanArray, {
		$Boolean::TRUE,
		($Boolean*)nullptr,
		$Boolean::FALSE,
		$Boolean::FALSE,
		$Boolean::TRUE,
		$($Boolean::valueOf($JdkXmlUtils::USE_CATALOG_DEFAULT))
	}));
	$init($JdkConstants);
	$assignStatic(XMLDocumentFragmentScannerImpl::RECOGNIZED_PROPERTIES, $new($StringArray, {
		$XMLScanner::SYMBOL_TABLE,
		$XMLScanner::ERROR_REPORTER,
		$XMLScanner::ENTITY_MANAGER,
		XMLDocumentFragmentScannerImpl::XML_SECURITY_PROPERTY_MANAGER,
		$JdkXmlUtils::CATALOG_DEFER,
		$JdkXmlUtils::CATALOG_FILES,
		$JdkXmlUtils::CATALOG_PREFER,
		$JdkXmlUtils::CATALOG_RESOLVE,
		$JdkConstants::CDATA_CHUNK_SIZE
	}));
	$assignStatic(XMLDocumentFragmentScannerImpl::PROPERTY_DEFAULTS, $new($ObjectArray, {
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		$($of($Integer::valueOf($JdkConstants::CDATA_CHUNK_SIZE_DEFAULT)))
	}));
	$assignStatic(XMLDocumentFragmentScannerImpl::CDATA, $new($chars, {
		u'[',
		u'C',
		u'D',
		u'A',
		u'T',
		u'A',
		u'['
	}));
	$assignStatic(XMLDocumentFragmentScannerImpl::XMLDECL, $new($chars, {
		u'<',
		u'?',
		u'x',
		u'm',
		u'l'
	}));
}

XMLDocumentFragmentScannerImpl::XMLDocumentFragmentScannerImpl() {
}

$Class* XMLDocumentFragmentScannerImpl::load$($String* name, bool initialize) {
	$loadClass(XMLDocumentFragmentScannerImpl, name, initialize, &_XMLDocumentFragmentScannerImpl_ClassInfo_, clinit$XMLDocumentFragmentScannerImpl, allocate$XMLDocumentFragmentScannerImpl);
	return class$;
}

$Class* XMLDocumentFragmentScannerImpl::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com