#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/PropertyManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner$NameType.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/Status.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>
#include <com/sun/xml/internal/stream/XMLEntityStorage.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/StringBuffer.h>
#include <java/util/ArrayList.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef COMMENT
#undef DEBUG_ATTR_NORMALIZATION
#undef ENTITY
#undef ENTITY_MANAGER
#undef ENTITY_MANAGER_PROPERTY
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef GENERAL_ENTITY_SIZE_LIMIT
#undef NAMESPACES
#undef NAMESPACES_FEATURE
#undef NOTIFY_CHAR_REFS
#undef NOTIFY_CHAR_REFS_FEATURE
#undef NOT_RECOGNIZED
#undef PARAMETER_ENTITY_SIZE_LIMIT
#undef PARSER_SETTINGS
#undef PI
#undef REFERENCE
#undef SAX_FEATURE_PREFIX
#undef SECURITY_MANAGER
#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef STATE_DONE
#undef STATE_ENCODING
#undef STATE_STANDALONE
#undef STATE_VERSION
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TOTAL_ENTITY_SIZE_LIMIT
#undef VALIDATION
#undef VALIDATION_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XML_DOMAIN
#undef XML_VERSION_1_1

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $PropertyManager = ::com::sun::org::apache::xerces::internal::impl::PropertyManager;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLScanner$NameType = ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $Status = ::com::sun::org::apache::xerces::internal::util::Status;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLResourceIdentifierImpl = ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl;
using $XMLStringBuffer = ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer;
using $XMLLimitAnalyzer = ::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityManager$Limit = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $Entity$ScannedEntity = ::com::sun::xml::internal::stream::Entity$ScannedEntity;
using $XMLEntityStorage = ::com::sun::xml::internal::stream::XMLEntityStorage;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $StringBuffer = ::java::lang::StringBuffer;
using $ArrayList = ::java::util::ArrayList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLScanner_FieldInfo_[] = {
	{"NAMESPACES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLScanner, NAMESPACES)},
	{"VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLScanner, VALIDATION)},
	{"NOTIFY_CHAR_REFS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLScanner, NOTIFY_CHAR_REFS)},
	{"PARSER_SETTINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLScanner, PARSER_SETTINGS)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLScanner, SYMBOL_TABLE)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLScanner, ERROR_REPORTER)},
	{"ENTITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLScanner, ENTITY_MANAGER)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLScanner, SECURITY_MANAGER)},
	{"DEBUG_ATTR_NORMALIZATION", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLScanner, DEBUG_ATTR_NORMALIZATION)},
	{"fNeedNonNormalizedValue", "Z", nullptr, $PRIVATE, $field(XMLScanner, fNeedNonNormalizedValue)},
	{"attributeValueCache", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/org/apache/xerces/internal/xni/XMLString;>;", $PROTECTED, $field(XMLScanner, attributeValueCache)},
	{"stringBufferCache", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;>;", $PROTECTED, $field(XMLScanner, stringBufferCache)},
	{"fStringBufferIndex", "I", nullptr, $PROTECTED, $field(XMLScanner, fStringBufferIndex)},
	{"fAttributeCacheInitDone", "Z", nullptr, $PROTECTED, $field(XMLScanner, fAttributeCacheInitDone)},
	{"fAttributeCacheUsedCount", "I", nullptr, $PROTECTED, $field(XMLScanner, fAttributeCacheUsedCount)},
	{"fValidation", "Z", nullptr, $PROTECTED, $field(XMLScanner, fValidation)},
	{"fNamespaces", "Z", nullptr, $PROTECTED, $field(XMLScanner, fNamespaces)},
	{"fNotifyCharRefs", "Z", nullptr, $PROTECTED, $field(XMLScanner, fNotifyCharRefs)},
	{"fParserSettings", "Z", nullptr, $PROTECTED, $field(XMLScanner, fParserSettings)},
	{"fPropertyManager", "Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;", nullptr, $PROTECTED, $field(XMLScanner, fPropertyManager)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XMLScanner, fSymbolTable)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(XMLScanner, fErrorReporter)},
	{"fEntityManager", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PROTECTED, $field(XMLScanner, fEntityManager)},
	{"fEntityStore", "Lcom/sun/xml/internal/stream/XMLEntityStorage;", nullptr, $PROTECTED, $field(XMLScanner, fEntityStore)},
	{"fSecurityManager", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager;", nullptr, $PROTECTED, $field(XMLScanner, fSecurityManager)},
	{"fLimitAnalyzer", "Lcom/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer;", nullptr, $PROTECTED, $field(XMLScanner, fLimitAnalyzer)},
	{"fEvent", "Ljavax/xml/stream/events/XMLEvent;", nullptr, $PROTECTED, $field(XMLScanner, fEvent)},
	{"fEntityScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityScanner;", nullptr, $PROTECTED, $field(XMLScanner, fEntityScanner)},
	{"fEntityDepth", "I", nullptr, $PROTECTED, $field(XMLScanner, fEntityDepth)},
	{"fCharRefLiteral", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLScanner, fCharRefLiteral)},
	{"fScanningAttribute", "Z", nullptr, $PROTECTED, $field(XMLScanner, fScanningAttribute)},
	{"fReportEntity", "Z", nullptr, $PROTECTED, $field(XMLScanner, fReportEntity)},
	{"fVersionSymbol", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLScanner, fVersionSymbol)},
	{"fEncodingSymbol", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLScanner, fEncodingSymbol)},
	{"fStandaloneSymbol", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLScanner, fStandaloneSymbol)},
	{"fAmpSymbol", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLScanner, fAmpSymbol)},
	{"fLtSymbol", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLScanner, fLtSymbol)},
	{"fGtSymbol", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLScanner, fGtSymbol)},
	{"fQuotSymbol", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLScanner, fQuotSymbol)},
	{"fAposSymbol", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLScanner, fAposSymbol)},
	{"fString", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PRIVATE, $field(XMLScanner, fString)},
	{"fStringBuffer", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PRIVATE, $field(XMLScanner, fStringBuffer)},
	{"fStringBuffer2", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PRIVATE, $field(XMLScanner, fStringBuffer2)},
	{"fStringBuffer3", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PRIVATE, $field(XMLScanner, fStringBuffer3)},
	{"fResourceIdentifier", "Lcom/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl;", nullptr, $PROTECTED, $field(XMLScanner, fResourceIdentifier)},
	{"initialCacheCount", "I", nullptr, 0, $field(XMLScanner, initialCacheCount)},
	{}
};

$MethodInfo _XMLScanner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLScanner, init$, void)},
	{"checkEntityLimit", "(ZLjava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, 0, $virtualMethod(XMLScanner, checkEntityLimit, void, bool, $String*, $XMLString*)},
	{"checkEntityLimit", "(ZLjava/lang/String;I)V", nullptr, 0, $virtualMethod(XMLScanner, checkEntityLimit, void, bool, $String*, int32_t)},
	{"endEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLScanner, endEntity, void, $String*, $Augmentations*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XMLScanner, getFeature, bool, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getStringBuffer", "()Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, 0, $virtualMethod(XMLScanner, getStringBuffer, $XMLStringBuffer*)},
	{"init", "()V", nullptr, $PRIVATE, $method(XMLScanner, init, void)},
	{"isInvalid", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XMLScanner, isInvalid, bool, int32_t)},
	{"isInvalidLiteral", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XMLScanner, isInvalidLiteral, bool, int32_t)},
	{"isValidNCName", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XMLScanner, isValidNCName, bool, int32_t)},
	{"isValidNameChar", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XMLScanner, isValidNameChar, bool, int32_t)},
	{"isValidNameStartChar", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XMLScanner, isValidNameStartChar, bool, int32_t)},
	{"isValidNameStartHighSurrogate", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XMLScanner, isValidNameStartHighSurrogate, bool, int32_t)},
	{"normalizeWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, $PROTECTED, $virtualMethod(XMLScanner, normalizeWhitespace, void, $XMLString*)},
	{"reportFatalError", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(XMLScanner, reportFatalError, void, $String*, $ObjectArray*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLScanner, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"reset", "()V", nullptr, $PROTECTED, $virtualMethod(XMLScanner, reset, void)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLScanner, reset, void, $PropertyManager*)},
	{"resolveCharacter", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;)Z", nullptr, $PROTECTED, $virtualMethod(XMLScanner, resolveCharacter, bool, $String*, $XMLStringBuffer*)},
	{"scanAttributeValue", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;IZLjava/lang/String;Z)V", nullptr, $PROTECTED, $virtualMethod(XMLScanner, scanAttributeValue, void, $XMLString*, $XMLString*, $String*, $XMLAttributes*, int32_t, bool, $String*, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanCharReferenceValue", "(Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;)I", nullptr, $PROTECTED, $virtualMethod(XMLScanner, scanCharReferenceValue, int32_t, $XMLStringBuffer*, $XMLStringBuffer*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanComment", "(Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;)V", nullptr, $PROTECTED, $virtualMethod(XMLScanner, scanComment, void, $XMLStringBuffer*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanExternalID", "([Ljava/lang/String;Z)V", nullptr, $PROTECTED, $virtualMethod(XMLScanner, scanExternalID, void, $StringArray*, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanPI", "(Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;)V", nullptr, $PROTECTED, $virtualMethod(XMLScanner, scanPI, void, $XMLStringBuffer*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanPIData", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;)V", nullptr, $PROTECTED, $virtualMethod(XMLScanner, scanPIData, void, $String*, $XMLStringBuffer*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanPseudoAttribute", "(ZLcom/sun/org/apache/xerces/internal/xni/XMLString;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XMLScanner, scanPseudoAttribute, $String*, bool, $XMLString*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanPseudoAttributeName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(XMLScanner, scanPseudoAttributeName, $String*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanPubidLiteral", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)Z", nullptr, $PROTECTED, $virtualMethod(XMLScanner, scanPubidLiteral, bool, $XMLString*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanSurrogates", "(Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;)Z", nullptr, $PROTECTED, $virtualMethod(XMLScanner, scanSurrogates, bool, $XMLStringBuffer*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanXMLDeclOrTextDecl", "(Z[Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(XMLScanner, scanXMLDeclOrTextDecl, void, bool, $StringArray*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLScanner, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLScanner, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setPropertyManager", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PROTECTED, $virtualMethod(XMLScanner, setPropertyManager, void, $PropertyManager*)},
	{"startEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLScanner, startEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"versionSupported", "(Ljava/lang/String;)Z", nullptr, $PROTECTED, $virtualMethod(XMLScanner, versionSupported, bool, $String*)},
	{}
};

$InnerClassInfo _XMLScanner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLScanner$NameType", "com.sun.org.apache.xerces.internal.impl.XMLScanner", "NameType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _XMLScanner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.XMLScanner",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLComponent",
	_XMLScanner_FieldInfo_,
	_XMLScanner_MethodInfo_,
	nullptr,
	nullptr,
	_XMLScanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLScanner$NameType"
};

$Object* allocate$XMLScanner($Class* clazz) {
	return $of($alloc(XMLScanner));
}

$String* XMLScanner::NAMESPACES = nullptr;
$String* XMLScanner::VALIDATION = nullptr;
$String* XMLScanner::NOTIFY_CHAR_REFS = nullptr;
$String* XMLScanner::PARSER_SETTINGS = nullptr;
$String* XMLScanner::SYMBOL_TABLE = nullptr;
$String* XMLScanner::ERROR_REPORTER = nullptr;
$String* XMLScanner::ENTITY_MANAGER = nullptr;
$String* XMLScanner::SECURITY_MANAGER = nullptr;
$String* XMLScanner::fVersionSymbol = nullptr;
$String* XMLScanner::fEncodingSymbol = nullptr;
$String* XMLScanner::fStandaloneSymbol = nullptr;
$String* XMLScanner::fAmpSymbol = nullptr;
$String* XMLScanner::fLtSymbol = nullptr;
$String* XMLScanner::fGtSymbol = nullptr;
$String* XMLScanner::fQuotSymbol = nullptr;
$String* XMLScanner::fAposSymbol = nullptr;

void XMLScanner::init$() {
	this->fNeedNonNormalizedValue = false;
	$set(this, attributeValueCache, $new($ArrayList));
	$set(this, stringBufferCache, $new($ArrayList));
	this->fStringBufferIndex = 0;
	this->fAttributeCacheInitDone = false;
	this->fAttributeCacheUsedCount = 0;
	this->fValidation = false;
	this->fNotifyCharRefs = false;
	this->fParserSettings = true;
	$set(this, fPropertyManager, nullptr);
	$set(this, fEntityManager, nullptr);
	$set(this, fEntityStore, nullptr);
	$set(this, fSecurityManager, nullptr);
	$set(this, fLimitAnalyzer, nullptr);
	$set(this, fEntityScanner, nullptr);
	$set(this, fCharRefLiteral, nullptr);
	$set(this, fString, $new($XMLString));
	$set(this, fStringBuffer, $new($XMLStringBuffer));
	$set(this, fStringBuffer2, $new($XMLStringBuffer));
	$set(this, fStringBuffer3, $new($XMLStringBuffer));
	$set(this, fResourceIdentifier, $new($XMLResourceIdentifierImpl));
	this->initialCacheCount = 6;
}

void XMLScanner::reset($XMLComponentManager* componentManager) {
	this->fParserSettings = $nc(componentManager)->getFeature(XMLScanner::PARSER_SETTINGS, true);
	if (!this->fParserSettings) {
		init();
		return;
	}
	$set(this, fSymbolTable, $cast($SymbolTable, componentManager->getProperty(XMLScanner::SYMBOL_TABLE)));
	$set(this, fErrorReporter, $cast($XMLErrorReporter, componentManager->getProperty(XMLScanner::ERROR_REPORTER)));
	$set(this, fEntityManager, $cast($XMLEntityManager, componentManager->getProperty(XMLScanner::ENTITY_MANAGER)));
	$set(this, fSecurityManager, $cast($XMLSecurityManager, componentManager->getProperty(XMLScanner::SECURITY_MANAGER)));
	$set(this, fEntityStore, $nc(this->fEntityManager)->getEntityStore());
	this->fValidation = componentManager->getFeature(XMLScanner::VALIDATION, false);
	this->fNamespaces = componentManager->getFeature(XMLScanner::NAMESPACES, true);
	this->fNotifyCharRefs = componentManager->getFeature(XMLScanner::NOTIFY_CHAR_REFS, false);
	init();
}

void XMLScanner::setPropertyManager($PropertyManager* propertyManager) {
	$set(this, fPropertyManager, propertyManager);
}

void XMLScanner::setProperty($String* propertyId, Object$* value) {
	$init($Constants);
	if ($nc(propertyId)->startsWith($Constants::XERCES_PROPERTY_PREFIX)) {
		$var($String, property, propertyId->substring($nc($Constants::XERCES_PROPERTY_PREFIX)->length()));
		if (property->equals($Constants::SYMBOL_TABLE_PROPERTY)) {
			$set(this, fSymbolTable, $cast($SymbolTable, value));
		} else {
			if (property->equals($Constants::ERROR_REPORTER_PROPERTY)) {
				$set(this, fErrorReporter, $cast($XMLErrorReporter, value));
			} else {
				if (property->equals($Constants::ENTITY_MANAGER_PROPERTY)) {
					$set(this, fEntityManager, $cast($XMLEntityManager, value));
				}
			}
		}
	}
	if ($nc(propertyId)->equals(XMLScanner::SECURITY_MANAGER)) {
		$set(this, fSecurityManager, $cast($XMLSecurityManager, value));
	}
}

void XMLScanner::setFeature($String* featureId, bool value) {
	if ($nc(XMLScanner::VALIDATION)->equals(featureId)) {
		this->fValidation = value;
	} else if ($nc(XMLScanner::NOTIFY_CHAR_REFS)->equals(featureId)) {
		this->fNotifyCharRefs = value;
	}
}

bool XMLScanner::getFeature($String* featureId) {
	if ($nc(XMLScanner::VALIDATION)->equals(featureId)) {
		return this->fValidation;
	} else if ($nc(XMLScanner::NOTIFY_CHAR_REFS)->equals(featureId)) {
		return this->fNotifyCharRefs;
	}
	$init($Status);
	$throwNew($XMLConfigurationException, $Status::NOT_RECOGNIZED, featureId);
}

void XMLScanner::reset() {
	init();
	this->fValidation = true;
	this->fNotifyCharRefs = false;
}

void XMLScanner::reset($PropertyManager* propertyManager) {
	$useLocalCurrentObjectStackCache();
	init();
	$init($Constants);
	$set(this, fSymbolTable, $cast($SymbolTable, $nc(propertyManager)->getProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}))));
	$set(this, fErrorReporter, $cast($XMLErrorReporter, propertyManager->getProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}))));
	$set(this, fEntityManager, $cast($XMLEntityManager, propertyManager->getProperty(XMLScanner::ENTITY_MANAGER)));
	$set(this, fEntityStore, $nc(this->fEntityManager)->getEntityStore());
	$set(this, fEntityScanner, $nc(this->fEntityManager)->getEntityScanner());
	$set(this, fSecurityManager, $cast($XMLSecurityManager, propertyManager->getProperty(XMLScanner::SECURITY_MANAGER)));
	this->fValidation = false;
	this->fNotifyCharRefs = false;
}

void XMLScanner::scanXMLDeclOrTextDecl(bool scanningTextDecl, $StringArray* pseudoAttributeValues) {
	$useLocalCurrentObjectStackCache();
	$var($String, version, nullptr);
	$var($String, encoding, nullptr);
	$var($String, standalone, nullptr);
	int32_t STATE_VERSION = 0;
	int32_t STATE_ENCODING = 1;
	int32_t STATE_STANDALONE = 2;
	int32_t STATE_DONE = 3;
	int32_t state = STATE_VERSION;
	bool dataFoundForTarget = false;
	bool sawSpace = $nc(this->fEntityScanner)->skipSpaces();
	$var($Entity$ScannedEntity, currEnt, $nc(this->fEntityManager)->getCurrentEntity());
	bool currLiteral = $nc(currEnt)->literal;
	currEnt->literal = false;
	while ($nc(this->fEntityScanner)->peekChar() != u'?') {
		dataFoundForTarget = true;
		$var($String, name, scanPseudoAttribute(scanningTextDecl, this->fString));
		do {
			if (state == STATE_VERSION) {
				goto case$0;
			}
			if (state == STATE_ENCODING) {
				goto case$1;
			}
			if (state == STATE_STANDALONE) {
				goto case$2;
			}
			goto case$3;
case$0:
			// STATE_VERSION
			{
				{
					if ($nc(name)->equals(XMLScanner::fVersionSymbol)) {
						if (!sawSpace) {
							reportFatalError(scanningTextDecl ? "SpaceRequiredBeforeVersionInTextDecl"_s : "SpaceRequiredBeforeVersionInXMLDecl"_s, nullptr);
						}
						$assign(version, $nc(this->fString)->toString());
						state = STATE_ENCODING;
						if (!versionSupported(version)) {
							reportFatalError("VersionNotSupported"_s, $$new($ObjectArray, {$of(version)}));
						}
						if ($nc(version)->equals("1.1"_s)) {
							$var($Entity$ScannedEntity, top, $nc(this->fEntityManager)->getTopLevelEntity());
							if (top != nullptr && (top->version == nullptr || $nc($nc(top)->version)->equals("1.0"_s))) {
								reportFatalError("VersionMismatch"_s, nullptr);
							}
							$nc(this->fEntityManager)->setScannerVersion($Constants::XML_VERSION_1_1);
						}
					} else if (name->equals(XMLScanner::fEncodingSymbol)) {
						if (!scanningTextDecl) {
							reportFatalError("VersionInfoRequired"_s, nullptr);
						}
						if (!sawSpace) {
							reportFatalError(scanningTextDecl ? "SpaceRequiredBeforeEncodingInTextDecl"_s : "SpaceRequiredBeforeEncodingInXMLDecl"_s, nullptr);
						}
						$assign(encoding, $nc(this->fString)->toString());
						state = scanningTextDecl ? STATE_DONE : STATE_STANDALONE;
					} else if (scanningTextDecl) {
						reportFatalError("EncodingDeclRequired"_s, nullptr);
					} else {
						reportFatalError("VersionInfoRequired"_s, nullptr);
					}
					break;
				}
			}
case$1:
			// STATE_ENCODING
			{
				{
					if ($nc(name)->equals(XMLScanner::fEncodingSymbol)) {
						if (!sawSpace) {
							reportFatalError(scanningTextDecl ? "SpaceRequiredBeforeEncodingInTextDecl"_s : "SpaceRequiredBeforeEncodingInXMLDecl"_s, nullptr);
						}
						$assign(encoding, $nc(this->fString)->toString());
						state = scanningTextDecl ? STATE_DONE : STATE_STANDALONE;
					} else if (!scanningTextDecl && name->equals(XMLScanner::fStandaloneSymbol)) {
						if (!sawSpace) {
							reportFatalError("SpaceRequiredBeforeStandalone"_s, nullptr);
						}
						$assign(standalone, $nc(this->fString)->toString());
						state = STATE_DONE;
						bool var$0 = !$nc(standalone)->equals("yes"_s);
						if (var$0 && !standalone->equals("no"_s)) {
							reportFatalError("SDDeclInvalid"_s, $$new($ObjectArray, {$of(standalone)}));
						}
					} else {
						reportFatalError("EncodingDeclRequired"_s, nullptr);
					}
					break;
				}
			}
case$2:
			// STATE_STANDALONE
			{
				{
					if ($nc(name)->equals(XMLScanner::fStandaloneSymbol)) {
						if (!sawSpace) {
							reportFatalError("SpaceRequiredBeforeStandalone"_s, nullptr);
						}
						$assign(standalone, $nc(this->fString)->toString());
						state = STATE_DONE;
						bool var$1 = !$nc(standalone)->equals("yes"_s);
						if (var$1 && !standalone->equals("no"_s)) {
							reportFatalError("SDDeclInvalid"_s, $$new($ObjectArray, {$of(standalone)}));
						}
					} else {
						reportFatalError("SDDeclNameInvalid"_s, nullptr);
					}
					break;
				}
			}
case$3:
			// default
			{
				{
					reportFatalError("NoMorePseudoAttributes"_s, nullptr);
				}
			}
		} while (false);
		sawSpace = $nc(this->fEntityScanner)->skipSpaces();
	}
	if (currLiteral) {
		currEnt->literal = true;
	}
	if (scanningTextDecl && state != STATE_DONE) {
		reportFatalError("MorePseudoAttributes"_s, nullptr);
	}
	if (scanningTextDecl) {
		if (!dataFoundForTarget && encoding == nullptr) {
			reportFatalError("EncodingDeclRequired"_s, nullptr);
		}
	} else if (!dataFoundForTarget && version == nullptr) {
		reportFatalError("VersionInfoRequired"_s, nullptr);
	}
	if (!$nc(this->fEntityScanner)->skipChar(u'?', nullptr)) {
		reportFatalError("XMLDeclUnterminated"_s, nullptr);
	}
	if (!$nc(this->fEntityScanner)->skipChar(u'>', nullptr)) {
		reportFatalError("XMLDeclUnterminated"_s, nullptr);
	}
	$nc(pseudoAttributeValues)->set(0, version);
	pseudoAttributeValues->set(1, encoding);
	pseudoAttributeValues->set(2, standalone);
}

$String* XMLScanner::scanPseudoAttribute(bool scanningTextDecl, $XMLString* value) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, scanPseudoAttributeName());
	if (name == nullptr) {
		reportFatalError("PseudoAttrNameExpected"_s, nullptr);
	}
	$nc(this->fEntityScanner)->skipSpaces();
	if (!$nc(this->fEntityScanner)->skipChar(u'=', nullptr)) {
		reportFatalError(scanningTextDecl ? "EqRequiredInTextDecl"_s : "EqRequiredInXMLDecl"_s, $$new($ObjectArray, {$of(name)}));
	}
	$nc(this->fEntityScanner)->skipSpaces();
	int32_t quote = $nc(this->fEntityScanner)->peekChar();
	if (quote != u'\'' && quote != u'\"') {
		reportFatalError(scanningTextDecl ? "QuoteRequiredInTextDecl"_s : "QuoteRequiredInXMLDecl"_s, $$new($ObjectArray, {$of(name)}));
	}
	$init($XMLScanner$NameType);
	$nc(this->fEntityScanner)->scanChar($XMLScanner$NameType::ATTRIBUTE);
	int32_t c = $nc(this->fEntityScanner)->scanLiteral(quote, value, false);
	if (c != quote) {
		$nc(this->fStringBuffer2)->clear();
		do {
			$nc(this->fStringBuffer2)->append(value);
			if (c != -1) {
				if (c == u'&' || c == u'%' || c == u'<' || c == u']') {
					$nc(this->fStringBuffer2)->append((char16_t)$nc(this->fEntityScanner)->scanChar($XMLScanner$NameType::ATTRIBUTE));
				} else if ($XMLChar::isHighSurrogate(c)) {
					scanSurrogates(this->fStringBuffer2);
				} else if (isInvalidLiteral(c)) {
					$var($String, key, scanningTextDecl ? "InvalidCharInTextDecl"_s : "InvalidCharInXMLDecl"_s);
					reportFatalError(key, $$new($ObjectArray, {$($of($Integer::toString(c, 16)))}));
					$nc(this->fEntityScanner)->scanChar(nullptr);
				}
			}
			c = $nc(this->fEntityScanner)->scanLiteral(quote, value, false);
		} while (c != quote);
		$nc(this->fStringBuffer2)->append(value);
		$nc(value)->setValues(this->fStringBuffer2);
	}
	if (!$nc(this->fEntityScanner)->skipChar(quote, nullptr)) {
		reportFatalError(scanningTextDecl ? "CloseQuoteMissingInTextDecl"_s : "CloseQuoteMissingInXMLDecl"_s, $$new($ObjectArray, {$of(name)}));
	}
	return name;
}

$String* XMLScanner::scanPseudoAttributeName() {
	int32_t ch = $nc(this->fEntityScanner)->peekChar();
	switch (ch) {
	case u'v':
		{
			if ($nc(this->fEntityScanner)->skipString(XMLScanner::fVersionSymbol)) {
				return XMLScanner::fVersionSymbol;
			}
			break;
		}
	case u'e':
		{
			if ($nc(this->fEntityScanner)->skipString(XMLScanner::fEncodingSymbol)) {
				return XMLScanner::fEncodingSymbol;
			}
			break;
		}
	case u's':
		{
			if ($nc(this->fEntityScanner)->skipString(XMLScanner::fStandaloneSymbol)) {
				return XMLScanner::fStandaloneSymbol;
			}
			break;
		}
	}
	return nullptr;
}

void XMLScanner::scanPI($XMLStringBuffer* data) {
	this->fReportEntity = false;
	$init($XMLScanner$NameType);
	$var($String, target, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::PI));
	if (target == nullptr) {
		reportFatalError("PITargetRequired"_s, nullptr);
	}
	scanPIData(target, data);
	this->fReportEntity = true;
}

void XMLScanner::scanPIData($String* target, $XMLStringBuffer* data) {
	$useLocalCurrentObjectStackCache();
	if ($nc(target)->length() == 3) {
		char16_t c0 = $Character::toLowerCase(target->charAt(0));
		char16_t c1 = $Character::toLowerCase(target->charAt(1));
		char16_t c2 = $Character::toLowerCase(target->charAt(2));
		if (c0 == u'x' && c1 == u'm' && c2 == u'l') {
			reportFatalError("ReservedPITarget"_s, nullptr);
		}
	}
	if (!$nc(this->fEntityScanner)->skipSpaces()) {
		if ($nc(this->fEntityScanner)->skipString("?>"_s)) {
			return;
		} else {
			reportFatalError("SpaceRequiredInPI"_s, nullptr);
		}
	}
	if ($nc(this->fEntityScanner)->scanData("?>"_s, data, 0)) {
		do {
			int32_t c = $nc(this->fEntityScanner)->peekChar();
			if (c != -1) {
				if ($XMLChar::isHighSurrogate(c)) {
					scanSurrogates(data);
				} else if (isInvalidLiteral(c)) {
					reportFatalError("InvalidCharInPI"_s, $$new($ObjectArray, {$($of($Integer::toHexString(c)))}));
					$nc(this->fEntityScanner)->scanChar(nullptr);
				}
			}
		} while ($nc(this->fEntityScanner)->scanData("?>"_s, data, 0));
	}
}

void XMLScanner::scanComment($XMLStringBuffer* text) {
	$useLocalCurrentObjectStackCache();
	$nc(text)->clear();
	while ($nc(this->fEntityScanner)->scanData("--"_s, text, 0)) {
		int32_t c = $nc(this->fEntityScanner)->peekChar();
		if (c != -1) {
			if ($XMLChar::isHighSurrogate(c)) {
				scanSurrogates(text);
			} else if (isInvalidLiteral(c)) {
				reportFatalError("InvalidCharInComment"_s, $$new($ObjectArray, {$($of($Integer::toHexString(c)))}));
				$init($XMLScanner$NameType);
				$nc(this->fEntityScanner)->scanChar($XMLScanner$NameType::COMMENT);
			}
		}
	}
	$init($XMLScanner$NameType);
	if (!$nc(this->fEntityScanner)->skipChar(u'>', $XMLScanner$NameType::COMMENT)) {
		reportFatalError("DashDashInComment"_s, nullptr);
	}
}

void XMLScanner::scanAttributeValue($XMLString* value, $XMLString* nonNormalizedValue, $String* atName, $XMLAttributes* attributes, int32_t attrIndex, bool checkEntities, $String* eleName, bool isNSURI) {
	$useLocalCurrentObjectStackCache();
	$var($XMLStringBuffer, stringBuffer, nullptr);
	int32_t quote = $nc(this->fEntityScanner)->peekChar();
	if (quote != u'\'' && quote != u'\"') {
		reportFatalError("OpenQuoteExpected"_s, $$new($ObjectArray, {
			$of(eleName),
			$of(atName)
		}));
	}
	$init($XMLScanner$NameType);
	$nc(this->fEntityScanner)->scanChar($XMLScanner$NameType::ATTRIBUTE);
	int32_t entityDepth = this->fEntityDepth;
	int32_t c = $nc(this->fEntityScanner)->scanLiteral(quote, value, isNSURI);
	if (this->fNeedNonNormalizedValue) {
		$nc(this->fStringBuffer2)->clear();
		$nc(this->fStringBuffer2)->append(value);
	}
	if ($nc(this->fEntityScanner)->whiteSpaceLen > 0) {
		normalizeWhitespace(value);
	}
	if (c != quote) {
		this->fScanningAttribute = true;
		$assign(stringBuffer, getStringBuffer());
		$nc(stringBuffer)->clear();
		do {
			stringBuffer->append(value);
			if (c == u'&') {
				$nc(this->fEntityScanner)->skipChar(u'&', $XMLScanner$NameType::REFERENCE);
				if (entityDepth == this->fEntityDepth && this->fNeedNonNormalizedValue) {
					$nc(this->fStringBuffer2)->append(u'&');
				}
				if ($nc(this->fEntityScanner)->skipChar(u'#', $XMLScanner$NameType::REFERENCE)) {
					if (entityDepth == this->fEntityDepth && this->fNeedNonNormalizedValue) {
						$nc(this->fStringBuffer2)->append(u'#');
					}
					int32_t ch = 0;
					if (this->fNeedNonNormalizedValue) {
						ch = scanCharReferenceValue(stringBuffer, this->fStringBuffer2);
					} else {
						ch = scanCharReferenceValue(stringBuffer, nullptr);
					}
					if (ch != -1) {
					}
				} else {
					$var($String, entityName, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::ENTITY));
					if (entityName == nullptr) {
						reportFatalError("NameRequiredInReference"_s, nullptr);
					} else if (entityDepth == this->fEntityDepth && this->fNeedNonNormalizedValue) {
						$nc(this->fStringBuffer2)->append(entityName);
					}
					if (!$nc(this->fEntityScanner)->skipChar(u';', $XMLScanner$NameType::REFERENCE)) {
						reportFatalError("SemicolonRequiredInReference"_s, $$new($ObjectArray, {$of(entityName)}));
					} else if (entityDepth == this->fEntityDepth && this->fNeedNonNormalizedValue) {
						$nc(this->fStringBuffer2)->append(u';');
					}
					if (resolveCharacter(entityName, stringBuffer)) {
						checkEntityLimit(false, $nc($nc(this->fEntityScanner)->fCurrentEntity)->name, 1);
					} else if ($nc(this->fEntityStore)->isExternalEntity(entityName)) {
						reportFatalError("ReferenceToExternalEntity"_s, $$new($ObjectArray, {$of(entityName)}));
					} else {
						if (!$nc(this->fEntityStore)->isDeclaredEntity(entityName)) {
							if (checkEntities) {
								if (this->fValidation) {
									$init($XMLMessageFormatter);
									$nc(this->fErrorReporter)->reportError(static_cast<$XMLLocator*>(this->fEntityScanner), $XMLMessageFormatter::XML_DOMAIN, "EntityNotDeclared"_s, $$new($ObjectArray, {$of(entityName)}), $XMLErrorReporter::SEVERITY_ERROR);
								}
							} else {
								reportFatalError("EntityNotDeclared"_s, $$new($ObjectArray, {$of(entityName)}));
							}
						}
						$nc(this->fEntityManager)->startEntity(true, entityName, true);
					}
				}
			} else if (c == u'<') {
				reportFatalError("LessthanInAttValue"_s, $$new($ObjectArray, {
					$of(eleName),
					$of(atName)
				}));
				$nc(this->fEntityScanner)->scanChar(nullptr);
				if (entityDepth == this->fEntityDepth && this->fNeedNonNormalizedValue) {
					$nc(this->fStringBuffer2)->append((char16_t)c);
				}
			} else if (c == u'%' || c == u']') {
				$nc(this->fEntityScanner)->scanChar(nullptr);
				stringBuffer->append((char16_t)c);
				if (entityDepth == this->fEntityDepth && this->fNeedNonNormalizedValue) {
					$nc(this->fStringBuffer2)->append((char16_t)c);
				}
			} else if (c == u'\n' || c == u'\r') {
				$nc(this->fEntityScanner)->scanChar(nullptr);
				stringBuffer->append(u' ');
				if (entityDepth == this->fEntityDepth && this->fNeedNonNormalizedValue) {
					$nc(this->fStringBuffer2)->append(u'\n');
				}
			} else if (c != -1 && $XMLChar::isHighSurrogate(c)) {
				$nc(this->fStringBuffer3)->clear();
				if (scanSurrogates(this->fStringBuffer3)) {
					stringBuffer->append(static_cast<$XMLString*>(this->fStringBuffer3));
					if (entityDepth == this->fEntityDepth && this->fNeedNonNormalizedValue) {
						$nc(this->fStringBuffer2)->append(static_cast<$XMLString*>(this->fStringBuffer3));
					}
				}
			} else if (c != -1 && isInvalidLiteral(c)) {
				reportFatalError("InvalidCharInAttValue"_s, $$new($ObjectArray, {
					$of(eleName),
					$of(atName),
					$($of($Integer::toString(c, 16)))
				}));
				$nc(this->fEntityScanner)->scanChar(nullptr);
				if (entityDepth == this->fEntityDepth && this->fNeedNonNormalizedValue) {
					$nc(this->fStringBuffer2)->append((char16_t)c);
				}
			}
			c = $nc(this->fEntityScanner)->scanLiteral(quote, value, isNSURI);
			if (entityDepth == this->fEntityDepth && this->fNeedNonNormalizedValue) {
				$nc(this->fStringBuffer2)->append(value);
			}
			if ($nc(this->fEntityScanner)->whiteSpaceLen > 0) {
				normalizeWhitespace(value);
			}
		} while (c != quote || entityDepth != this->fEntityDepth);
		stringBuffer->append(value);
		$nc(value)->setValues(stringBuffer);
		this->fScanningAttribute = false;
	}
	if (this->fNeedNonNormalizedValue) {
		$nc(nonNormalizedValue)->setValues(this->fStringBuffer2);
	}
	int32_t cquote = $nc(this->fEntityScanner)->scanChar($XMLScanner$NameType::ATTRIBUTE);
	if (cquote != quote) {
		reportFatalError("CloseQuoteExpected"_s, $$new($ObjectArray, {
			$of(eleName),
			$of(atName)
		}));
	}
}

bool XMLScanner::resolveCharacter($String* entityName, $XMLStringBuffer* stringBuffer) {
	if (entityName == XMLScanner::fAmpSymbol) {
		$nc(stringBuffer)->append(u'&');
		return true;
	} else if (entityName == XMLScanner::fAposSymbol) {
		$nc(stringBuffer)->append(u'\'');
		return true;
	} else if (entityName == XMLScanner::fLtSymbol) {
		$nc(stringBuffer)->append(u'<');
		return true;
	} else if (entityName == XMLScanner::fGtSymbol) {
		checkEntityLimit(false, $nc($nc(this->fEntityScanner)->fCurrentEntity)->name, 1);
		$nc(stringBuffer)->append(u'>');
		return true;
	} else if (entityName == XMLScanner::fQuotSymbol) {
		checkEntityLimit(false, $nc($nc(this->fEntityScanner)->fCurrentEntity)->name, 1);
		$nc(stringBuffer)->append(u'\"');
		return true;
	}
	return false;
}

void XMLScanner::scanExternalID($StringArray* identifiers, bool optionalSystemId) {
	$useLocalCurrentObjectStackCache();
	$var($String, systemId, nullptr);
	$var($String, publicId, nullptr);
	if ($nc(this->fEntityScanner)->skipString("PUBLIC"_s)) {
		if (!$nc(this->fEntityScanner)->skipSpaces()) {
			reportFatalError("SpaceRequiredAfterPUBLIC"_s, nullptr);
		}
		scanPubidLiteral(this->fString);
		$assign(publicId, $nc(this->fString)->toString());
		if (!$nc(this->fEntityScanner)->skipSpaces() && !optionalSystemId) {
			reportFatalError("SpaceRequiredBetweenPublicAndSystem"_s, nullptr);
		}
	}
	if (publicId != nullptr || $nc(this->fEntityScanner)->skipString("SYSTEM"_s)) {
		if (publicId == nullptr && !$nc(this->fEntityScanner)->skipSpaces()) {
			reportFatalError("SpaceRequiredAfterSYSTEM"_s, nullptr);
		}
		int32_t quote = $nc(this->fEntityScanner)->peekChar();
		if (quote != u'\'' && quote != u'\"') {
			if (publicId != nullptr && optionalSystemId) {
				$nc(identifiers)->set(0, nullptr);
				identifiers->set(1, publicId);
				return;
			}
			reportFatalError("QuoteRequiredInSystemID"_s, nullptr);
		}
		$nc(this->fEntityScanner)->scanChar(nullptr);
		$var($XMLString, ident, this->fString);
		if ($nc(this->fEntityScanner)->scanLiteral(quote, ident, false) != quote) {
			$nc(this->fStringBuffer)->clear();
			do {
				$nc(this->fStringBuffer)->append(ident);
				int32_t c = $nc(this->fEntityScanner)->peekChar();
				if ($XMLChar::isMarkup(c) || c == u']') {
					$nc(this->fStringBuffer)->append((char16_t)$nc(this->fEntityScanner)->scanChar(nullptr));
				} else if (c != -1 && isInvalidLiteral(c)) {
					reportFatalError("InvalidCharInSystemID"_s, $$new($ObjectArray, {$($of($Integer::toString(c, 16)))}));
				}
			} while ($nc(this->fEntityScanner)->scanLiteral(quote, ident, false) != quote);
			$nc(this->fStringBuffer)->append(ident);
			$assign(ident, this->fStringBuffer);
		}
		$assign(systemId, $nc(ident)->toString());
		if (!$nc(this->fEntityScanner)->skipChar(quote, nullptr)) {
			reportFatalError("SystemIDUnterminated"_s, nullptr);
		}
	}
	$nc(identifiers)->set(0, systemId);
	identifiers->set(1, publicId);
}

bool XMLScanner::scanPubidLiteral($XMLString* literal) {
	$useLocalCurrentObjectStackCache();
	int32_t quote = $nc(this->fEntityScanner)->scanChar(nullptr);
	if (quote != u'\'' && quote != u'\"') {
		reportFatalError("QuoteRequiredInPublicID"_s, nullptr);
		return false;
	}
	$nc(this->fStringBuffer)->clear();
	bool skipSpace = true;
	bool dataok = true;
	while (true) {
		int32_t c = $nc(this->fEntityScanner)->scanChar(nullptr);
		if (c == u' ' || c == u'\n' || c == u'\r') {
			if (!skipSpace) {
				$nc(this->fStringBuffer)->append(u' ');
				skipSpace = true;
			}
		} else if (c == quote) {
			if (skipSpace) {
				--$nc(this->fStringBuffer)->length;
			}
			$nc(literal)->setValues(this->fStringBuffer);
			break;
		} else if ($XMLChar::isPubid(c)) {
			$nc(this->fStringBuffer)->append((char16_t)c);
			skipSpace = false;
		} else if (c == -1) {
			reportFatalError("PublicIDUnterminated"_s, nullptr);
			return false;
		} else {
			dataok = false;
			reportFatalError("InvalidCharInPublicID"_s, $$new($ObjectArray, {$($of($Integer::toHexString(c)))}));
		}
	}
	return dataok;
}

void XMLScanner::normalizeWhitespace($XMLString* value) {
	int32_t i = 0;
	int32_t j = 0;
	$var($ints, buff, $nc(this->fEntityScanner)->whiteSpaceLookup);
	int32_t buffLen = $nc(this->fEntityScanner)->whiteSpaceLen;
	int32_t end = $nc(value)->offset + value->length;
	while (i < buffLen) {
		j = $nc(buff)->get(i);
		if (j < end) {
			$nc(value->ch)->set(j, u' ');
		}
		++i;
	}
}

void XMLScanner::startEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
	++this->fEntityDepth;
	$set(this, fEntityScanner, $nc(this->fEntityManager)->getEntityScanner());
	$set(this, fEntityStore, $nc(this->fEntityManager)->getEntityStore());
}

void XMLScanner::endEntity($String* name, $Augmentations* augs) {
	if (this->fEntityDepth > 0) {
		--this->fEntityDepth;
	}
}

int32_t XMLScanner::scanCharReferenceValue($XMLStringBuffer* buf, $XMLStringBuffer* buf2) {
	$useLocalCurrentObjectStackCache();
	int32_t initLen = $nc(buf)->length;
	bool hex = false;
	$init($XMLScanner$NameType);
	if ($nc(this->fEntityScanner)->skipChar(u'x', $XMLScanner$NameType::REFERENCE)) {
		if (buf2 != nullptr) {
			buf2->append(u'x');
		}
		hex = true;
		$nc(this->fStringBuffer3)->clear();
		bool digit = true;
		int32_t c = $nc(this->fEntityScanner)->peekChar();
		digit = (c >= u'0' && c <= u'9') || (c >= u'a' && c <= u'f') || (c >= u'A' && c <= u'F');
		if (digit) {
			if (buf2 != nullptr) {
				buf2->append((char16_t)c);
			}
			$nc(this->fEntityScanner)->scanChar($XMLScanner$NameType::REFERENCE);
			$nc(this->fStringBuffer3)->append((char16_t)c);
			do {
				c = $nc(this->fEntityScanner)->peekChar();
				digit = (c >= u'0' && c <= u'9') || (c >= u'a' && c <= u'f') || (c >= u'A' && c <= u'F');
				if (digit) {
					if (buf2 != nullptr) {
						buf2->append((char16_t)c);
					}
					$nc(this->fEntityScanner)->scanChar($XMLScanner$NameType::REFERENCE);
					$nc(this->fStringBuffer3)->append((char16_t)c);
				}
			} while (digit);
		} else {
			reportFatalError("HexdigitRequiredInCharRef"_s, nullptr);
		}
	} else {
		$nc(this->fStringBuffer3)->clear();
		bool digit = true;
		int32_t c = $nc(this->fEntityScanner)->peekChar();
		digit = c >= u'0' && c <= u'9';
		if (digit) {
			if (buf2 != nullptr) {
				buf2->append((char16_t)c);
			}
			$nc(this->fEntityScanner)->scanChar($XMLScanner$NameType::REFERENCE);
			$nc(this->fStringBuffer3)->append((char16_t)c);
			do {
				c = $nc(this->fEntityScanner)->peekChar();
				digit = c >= u'0' && c <= u'9';
				if (digit) {
					if (buf2 != nullptr) {
						buf2->append((char16_t)c);
					}
					$nc(this->fEntityScanner)->scanChar($XMLScanner$NameType::REFERENCE);
					$nc(this->fStringBuffer3)->append((char16_t)c);
				}
			} while (digit);
		} else {
			reportFatalError("DigitRequiredInCharRef"_s, nullptr);
		}
	}
	if (!$nc(this->fEntityScanner)->skipChar(u';', $XMLScanner$NameType::REFERENCE)) {
		reportFatalError("SemicolonRequiredInCharRef"_s, nullptr);
	}
	if (buf2 != nullptr) {
		buf2->append(u';');
	}
	int32_t value = -1;
	try {
		value = $Integer::parseInt($($nc(this->fStringBuffer3)->toString()), hex ? 16 : 10);
		if (isInvalid(value)) {
			$var($StringBuffer, errorBuf, $new($StringBuffer, $nc(this->fStringBuffer3)->length + 1));
			if (hex) {
				errorBuf->append(u'x');
			}
			errorBuf->append($nc(this->fStringBuffer3)->ch, $nc(this->fStringBuffer3)->offset, $nc(this->fStringBuffer3)->length);
			reportFatalError("InvalidCharRef"_s, $$new($ObjectArray, {$($of(errorBuf->toString()))}));
		}
	} catch ($NumberFormatException& e) {
		$var($StringBuffer, errorBuf, $new($StringBuffer, $nc(this->fStringBuffer3)->length + 1));
		if (hex) {
			errorBuf->append(u'x');
		}
		errorBuf->append($nc(this->fStringBuffer3)->ch, $nc(this->fStringBuffer3)->offset, $nc(this->fStringBuffer3)->length);
		reportFatalError("InvalidCharRef"_s, $$new($ObjectArray, {$($of(errorBuf->toString()))}));
	}
	if (!$XMLChar::isSupplemental(value)) {
		buf->append((char16_t)value);
	} else {
		buf->append($XMLChar::highSurrogate(value));
		buf->append($XMLChar::lowSurrogate(value));
	}
	if (this->fNotifyCharRefs && value != -1) {
		$var($String, literal, $str({"#"_s, (hex ? "x"_s : ""_s), $($nc(this->fStringBuffer3)->toString())}));
		if (!this->fScanningAttribute) {
			$set(this, fCharRefLiteral, literal);
		}
	}
	if ($nc($nc(this->fEntityScanner)->fCurrentEntity)->isGE) {
		checkEntityLimit(false, $nc($nc(this->fEntityScanner)->fCurrentEntity)->name, buf->length - initLen);
	}
	return value;
}

bool XMLScanner::isInvalid(int32_t value) {
	return ($XMLChar::isInvalid(value));
}

bool XMLScanner::isInvalidLiteral(int32_t value) {
	return ($XMLChar::isInvalid(value));
}

bool XMLScanner::isValidNameChar(int32_t value) {
	return ($XMLChar::isName(value));
}

bool XMLScanner::isValidNCName(int32_t value) {
	return ($XMLChar::isNCName(value));
}

bool XMLScanner::isValidNameStartChar(int32_t value) {
	return ($XMLChar::isNameStart(value));
}

bool XMLScanner::isValidNameStartHighSurrogate(int32_t value) {
	return false;
}

bool XMLScanner::versionSupported($String* version) {
	bool var$0 = $nc(version)->equals("1.0"_s);
	return var$0 || $nc(version)->equals("1.1"_s);
}

bool XMLScanner::scanSurrogates($XMLStringBuffer* buf) {
	$useLocalCurrentObjectStackCache();
	int32_t high = $nc(this->fEntityScanner)->scanChar(nullptr);
	int32_t low = $nc(this->fEntityScanner)->peekChar();
	if (!$XMLChar::isLowSurrogate(low)) {
		reportFatalError("InvalidCharInContent"_s, $$new($ObjectArray, {$($of($Integer::toString(high, 16)))}));
		return false;
	}
	$nc(this->fEntityScanner)->scanChar(nullptr);
	int32_t c = $XMLChar::supplemental((char16_t)high, (char16_t)low);
	if (isInvalid(c)) {
		reportFatalError("InvalidCharInContent"_s, $$new($ObjectArray, {$($of($Integer::toString(c, 16)))}));
		return false;
	}
	$nc(buf)->append((char16_t)high);
	buf->append((char16_t)low);
	return true;
}

void XMLScanner::reportFatalError($String* msgId, $ObjectArray* args) {
	$init($XMLMessageFormatter);
	$nc(this->fErrorReporter)->reportError(static_cast<$XMLLocator*>(this->fEntityScanner), $XMLMessageFormatter::XML_DOMAIN, msgId, args, $XMLErrorReporter::SEVERITY_FATAL_ERROR);
}

void XMLScanner::init() {
	$useLocalCurrentObjectStackCache();
	$set(this, fEntityScanner, nullptr);
	this->fEntityDepth = 0;
	this->fReportEntity = true;
	$nc(this->fResourceIdentifier)->clear();
	if (!this->fAttributeCacheInitDone) {
		for (int32_t i = 0; i < this->initialCacheCount; ++i) {
			$nc(this->attributeValueCache)->add($$new($XMLString));
			$nc(this->stringBufferCache)->add($$new($XMLStringBuffer));
		}
		this->fAttributeCacheInitDone = true;
	}
	this->fStringBufferIndex = 0;
	this->fAttributeCacheUsedCount = 0;
}

$XMLStringBuffer* XMLScanner::getStringBuffer() {
	if ((this->fStringBufferIndex < this->initialCacheCount) || (this->fStringBufferIndex < $nc(this->stringBufferCache)->size())) {
		return $cast($XMLStringBuffer, $nc(this->stringBufferCache)->get(this->fStringBufferIndex++));
	} else {
		$var($XMLStringBuffer, tmpObj, $new($XMLStringBuffer));
		++this->fStringBufferIndex;
		$nc(this->stringBufferCache)->add(tmpObj);
		return tmpObj;
	}
}

void XMLScanner::checkEntityLimit(bool isPEDecl, $String* entityName, $XMLString* buffer) {
	checkEntityLimit(isPEDecl, entityName, $nc(buffer)->length);
}

void XMLScanner::checkEntityLimit(bool isPEDecl, $String* entityName, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (this->fLimitAnalyzer == nullptr) {
		$set(this, fLimitAnalyzer, $nc(this->fEntityManager)->fLimitAnalyzer);
	}
	if (isPEDecl) {
		$init($XMLSecurityManager$Limit);
		$nc(this->fLimitAnalyzer)->addValue($XMLSecurityManager$Limit::PARAMETER_ENTITY_SIZE_LIMIT, $$str({"%"_s, entityName}), len);
		if ($nc(this->fSecurityManager)->isOverLimit($XMLSecurityManager$Limit::PARAMETER_ENTITY_SIZE_LIMIT, this->fLimitAnalyzer)) {
			$nc(this->fSecurityManager)->debugPrint(this->fLimitAnalyzer);
			reportFatalError("MaxEntitySizeLimit"_s, $$new($ObjectArray, {
				$of($$str({"%"_s, entityName})),
				$($of($Integer::valueOf($nc(this->fLimitAnalyzer)->getValue($XMLSecurityManager$Limit::PARAMETER_ENTITY_SIZE_LIMIT)))),
				$($of($Integer::valueOf($nc(this->fSecurityManager)->getLimit($XMLSecurityManager$Limit::PARAMETER_ENTITY_SIZE_LIMIT)))),
				$($of($nc(this->fSecurityManager)->getStateLiteral($XMLSecurityManager$Limit::PARAMETER_ENTITY_SIZE_LIMIT)))
			}));
		}
	} else {
		$init($XMLSecurityManager$Limit);
		$nc(this->fLimitAnalyzer)->addValue($XMLSecurityManager$Limit::GENERAL_ENTITY_SIZE_LIMIT, entityName, len);
		if ($nc(this->fSecurityManager)->isOverLimit($XMLSecurityManager$Limit::GENERAL_ENTITY_SIZE_LIMIT, this->fLimitAnalyzer)) {
			$nc(this->fSecurityManager)->debugPrint(this->fLimitAnalyzer);
			reportFatalError("MaxEntitySizeLimit"_s, $$new($ObjectArray, {
				$of(entityName),
				$($of($Integer::valueOf($nc(this->fLimitAnalyzer)->getValue($XMLSecurityManager$Limit::GENERAL_ENTITY_SIZE_LIMIT)))),
				$($of($Integer::valueOf($nc(this->fSecurityManager)->getLimit($XMLSecurityManager$Limit::GENERAL_ENTITY_SIZE_LIMIT)))),
				$($of($nc(this->fSecurityManager)->getStateLiteral($XMLSecurityManager$Limit::GENERAL_ENTITY_SIZE_LIMIT)))
			}));
		}
	}
	$init($XMLSecurityManager$Limit);
	if ($nc(this->fSecurityManager)->isOverLimit($XMLSecurityManager$Limit::TOTAL_ENTITY_SIZE_LIMIT, this->fLimitAnalyzer)) {
		$nc(this->fSecurityManager)->debugPrint(this->fLimitAnalyzer);
		reportFatalError("TotalEntitySizeLimit"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf($nc(this->fLimitAnalyzer)->getTotalValue($XMLSecurityManager$Limit::TOTAL_ENTITY_SIZE_LIMIT)))),
			$($of($Integer::valueOf($nc(this->fSecurityManager)->getLimit($XMLSecurityManager$Limit::TOTAL_ENTITY_SIZE_LIMIT)))),
			$($of($nc(this->fSecurityManager)->getStateLiteral($XMLSecurityManager$Limit::TOTAL_ENTITY_SIZE_LIMIT)))
		}));
	}
}

void clinit$XMLScanner($Class* class$) {
	$init($Constants);
	$assignStatic(XMLScanner::NAMESPACES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
	$assignStatic(XMLScanner::VALIDATION, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(XMLScanner::NOTIFY_CHAR_REFS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NOTIFY_CHAR_REFS_FEATURE}));
	$assignStatic(XMLScanner::PARSER_SETTINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::PARSER_SETTINGS}));
	$assignStatic(XMLScanner::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XMLScanner::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XMLScanner::ENTITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_MANAGER_PROPERTY}));
	$assignStatic(XMLScanner::SECURITY_MANAGER, $Constants::SECURITY_MANAGER);
	$assignStatic(XMLScanner::fVersionSymbol, "version"_s->intern());
	$assignStatic(XMLScanner::fEncodingSymbol, "encoding"_s->intern());
	$assignStatic(XMLScanner::fStandaloneSymbol, "standalone"_s->intern());
	$assignStatic(XMLScanner::fAmpSymbol, "amp"_s->intern());
	$assignStatic(XMLScanner::fLtSymbol, "lt"_s->intern());
	$assignStatic(XMLScanner::fGtSymbol, "gt"_s->intern());
	$assignStatic(XMLScanner::fQuotSymbol, "quot"_s->intern());
	$assignStatic(XMLScanner::fAposSymbol, "apos"_s->intern());
}

XMLScanner::XMLScanner() {
}

$Class* XMLScanner::load$($String* name, bool initialize) {
	$loadClass(XMLScanner, name, initialize, &_XMLScanner_ClassInfo_, clinit$XMLScanner, allocate$XMLScanner);
	return class$;
}

$Class* XMLScanner::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com