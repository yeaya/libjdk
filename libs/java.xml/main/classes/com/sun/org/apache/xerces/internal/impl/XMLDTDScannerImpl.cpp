#include <com/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/PropertyManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner$NameType.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>
#include <com/sun/xml/internal/stream/Entity.h>
#include <com/sun/xml/internal/stream/XMLEntityStorage.h>
#include <com/sun/xml/internal/stream/dtd/nonvalidating/DTDGrammar.h>
#include <java/io/EOFException.h>
#include <jcpp.h>

#undef ATTRIBUTENAME
#undef CONDITIONAL_IGNORE
#undef CONDITIONAL_INCLUDE
#undef DEBUG_SCANNER_STATE
#undef ELEMENTSTART
#undef ENTITY
#undef ENTITY_MANAGER
#undef ERROR_REPORTER
#undef FALSE
#undef FEATURE_DEFAULTS
#undef GENERAL_ENTITY_SIZE_LIMIT
#undef LAST_ENTITY
#undef NOTATION
#undef NOTIFY_CHAR_REFS
#undef OCCURS_ONE_OR_MORE
#undef OCCURS_ZERO_OR_MORE
#undef OCCURS_ZERO_OR_ONE
#undef PARAMETER_ENTITY_SIZE_LIMIT
#undef PROPERTY_DEFAULTS
#undef RECOGNIZED_FEATURES
#undef RECOGNIZED_PROPERTIES
#undef REFERENCE
#undef SCANNER_STATE_END_OF_INPUT
#undef SCANNER_STATE_MARKUP_DECL
#undef SCANNER_STATE_TEXT_DECL
#undef SEPARATOR_CHOICE
#undef SEPARATOR_SEQUENCE
#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef SYMBOL_TABLE
#undef TOTAL_ENTITY_SIZE_LIMIT
#undef TRUE
#undef VALIDATION
#undef XML_DOMAIN

using $BooleanArray = $Array<::java::lang::Boolean>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $PropertyManager = ::com::sun::org::apache::xerces::internal::impl::PropertyManager;
using $XMLEntityHandler = ::com::sun::org::apache::xerces::internal::impl::XMLEntityHandler;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLScanner = ::com::sun::org::apache::xerces::internal::impl::XMLScanner;
using $XMLScanner$NameType = ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLAttributesImpl = ::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLResourceIdentifierImpl = ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl;
using $XMLStringBuffer = ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer;
using $XMLLimitAnalyzer = ::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer;
using $XMLSecurityManager$Limit = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDTDContentModelHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler;
using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $XMLEntityStorage = ::com::sun::xml::internal::stream::XMLEntityStorage;
using $DTDGrammar = ::com::sun::xml::internal::stream::dtd::nonvalidating::DTDGrammar;
using $EOFException = ::java::io::EOFException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLDTDScannerImpl_FieldInfo_[] = {
	{"SCANNER_STATE_END_OF_INPUT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDTDScannerImpl, SCANNER_STATE_END_OF_INPUT)},
	{"SCANNER_STATE_TEXT_DECL", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDTDScannerImpl, SCANNER_STATE_TEXT_DECL)},
	{"SCANNER_STATE_MARKUP_DECL", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDTDScannerImpl, SCANNER_STATE_MARKUP_DECL)},
	{"RECOGNIZED_FEATURES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDTDScannerImpl, RECOGNIZED_FEATURES)},
	{"FEATURE_DEFAULTS", "[Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDTDScannerImpl, FEATURE_DEFAULTS)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDTDScannerImpl, RECOGNIZED_PROPERTIES)},
	{"PROPERTY_DEFAULTS", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDTDScannerImpl, PROPERTY_DEFAULTS)},
	{"DEBUG_SCANNER_STATE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLDTDScannerImpl, DEBUG_SCANNER_STATE)},
	{"fDTDHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PUBLIC, $field(XMLDTDScannerImpl, fDTDHandler)},
	{"fDTDContentModelHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;", nullptr, $PROTECTED, $field(XMLDTDScannerImpl, fDTDContentModelHandler)},
	{"fScannerState", "I", nullptr, $PROTECTED, $field(XMLDTDScannerImpl, fScannerState)},
	{"fStandalone", "Z", nullptr, $PROTECTED, $field(XMLDTDScannerImpl, fStandalone)},
	{"fSeenExternalDTD", "Z", nullptr, $PROTECTED, $field(XMLDTDScannerImpl, fSeenExternalDTD)},
	{"fSeenExternalPE", "Z", nullptr, $PROTECTED, $field(XMLDTDScannerImpl, fSeenExternalPE)},
	{"fStartDTDCalled", "Z", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fStartDTDCalled)},
	{"fAttributes", "Lcom/sun/org/apache/xerces/internal/util/XMLAttributesImpl;", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fAttributes)},
	{"fContentStack", "[I", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fContentStack)},
	{"fContentDepth", "I", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fContentDepth)},
	{"fPEStack", "[I", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fPEStack)},
	{"fPEReport", "[Z", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fPEReport)},
	{"fPEDepth", "I", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fPEDepth)},
	{"fMarkUpDepth", "I", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fMarkUpDepth)},
	{"fExtEntityDepth", "I", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fExtEntityDepth)},
	{"fIncludeSectDepth", "I", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fIncludeSectDepth)},
	{"fStrings", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fStrings)},
	{"fString", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fString)},
	{"fStringBuffer", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fStringBuffer)},
	{"fStringBuffer2", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fStringBuffer2)},
	{"fLiteral", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fLiteral)},
	{"fLiteral2", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fLiteral2)},
	{"fEnumeration", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fEnumeration)},
	{"fEnumerationCount", "I", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fEnumerationCount)},
	{"fIgnoreConditionalBuffer", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PRIVATE, $field(XMLDTDScannerImpl, fIgnoreConditionalBuffer)},
	{"nvGrammarInfo", "Lcom/sun/xml/internal/stream/dtd/nonvalidating/DTDGrammar;", nullptr, 0, $field(XMLDTDScannerImpl, nvGrammarInfo)},
	{"nonValidatingMode", "Z", nullptr, 0, $field(XMLDTDScannerImpl, nonValidatingMode)},
	{}
};

$MethodInfo _XMLDTDScannerImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLDTDScannerImpl, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;)V", nullptr, $PUBLIC, $method(XMLDTDScannerImpl, init$, void, $SymbolTable*, $XMLErrorReporter*, $XMLEntityManager*)},
	{"endEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, endEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"ensureEnumerationSize", "(I)V", nullptr, $PRIVATE | $FINAL, $method(XMLDTDScannerImpl, ensureEnumerationSize, void, int32_t)},
	{"getDTDContentModelHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, getDTDContentModelHandler, $XMLDTDContentModelHandler*)},
	{"getDTDHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, getDTDHandler, $XMLDTDHandler*)},
	{"getFeatureDefault", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, getFeatureDefault, $Boolean*, $String*)},
	{"getGrammar", "()Lcom/sun/xml/internal/stream/dtd/nonvalidating/DTDGrammar;", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, getGrammar, $DTDGrammar*)},
	{"getPropertyDefault", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, getPropertyDefault, $Object*, $String*)},
	{"getRecognizedFeatures", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, getRecognizedFeatures, $StringArray*)},
	{"getRecognizedProperties", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, getRecognizedProperties, $StringArray*)},
	{"getScannerStateName", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(XMLDTDScannerImpl, getScannerStateName, $String*, int32_t)},
	{"init", "()V", nullptr, $PRIVATE, $method(XMLDTDScannerImpl, init, void)},
	{"peekReportEntity", "()Z", nullptr, $PRIVATE | $FINAL, $method(XMLDTDScannerImpl, peekReportEntity, bool)},
	{"popContentStack", "()I", nullptr, $PRIVATE | $FINAL, $method(XMLDTDScannerImpl, popContentStack, int32_t)},
	{"popPEStack", "()I", nullptr, $PRIVATE | $FINAL, $method(XMLDTDScannerImpl, popPEStack, int32_t)},
	{"pushContentStack", "(I)V", nullptr, $PRIVATE | $FINAL, $method(XMLDTDScannerImpl, pushContentStack, void, int32_t)},
	{"pushPEStack", "(IZ)V", nullptr, $PRIVATE | $FINAL, $method(XMLDTDScannerImpl, pushPEStack, void, int32_t, bool)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, reset, void)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, reset, void, $PropertyManager*)},
	{"scanAttDefaultDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;)Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $method(XMLDTDScannerImpl, scanAttDefaultDecl, $String*, $String*, $String*, $String*, $XMLString*, $XMLString*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanAttType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(XMLDTDScannerImpl, scanAttType, $String*, $String*, $String*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanAttlistDecl", "()V", nullptr, $PROTECTED | $FINAL, $method(XMLDTDScannerImpl, scanAttlistDecl, void), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanChildren", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $FINAL, $method(XMLDTDScannerImpl, scanChildren, void, $String*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanComment", "()V", nullptr, $PROTECTED | $FINAL, $method(XMLDTDScannerImpl, scanComment, void), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanConditionalSect", "(I)V", nullptr, $PRIVATE | $FINAL, $method(XMLDTDScannerImpl, scanConditionalSect, void, int32_t), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanDTDExternalSubset", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, scanDTDExternalSubset, bool, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanDTDInternalSubset", "(ZZZ)Z", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, scanDTDInternalSubset, bool, bool, bool, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanDecls", "(Z)Z", nullptr, $PROTECTED | $FINAL, $method(XMLDTDScannerImpl, scanDecls, bool, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanElementDecl", "()V", nullptr, $PROTECTED | $FINAL, $method(XMLDTDScannerImpl, scanElementDecl, void), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanEntityDecl", "()V", nullptr, $PRIVATE | $FINAL, $method(XMLDTDScannerImpl, scanEntityDecl, void), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanEntityValue", "(Ljava/lang/String;ZLcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, $PROTECTED | $FINAL, $method(XMLDTDScannerImpl, scanEntityValue, void, $String*, bool, $XMLString*, $XMLString*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanMixed", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $FINAL, $method(XMLDTDScannerImpl, scanMixed, void, $String*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanNotationDecl", "()V", nullptr, $PRIVATE | $FINAL, $method(XMLDTDScannerImpl, scanNotationDecl, void), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanPIData", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, $PROTECTED | $FINAL, $method(XMLDTDScannerImpl, scanPIData, void, $String*, $XMLString*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanTextDecl", "()Z", nullptr, $PROTECTED | $FINAL, $method(XMLDTDScannerImpl, scanTextDecl, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanningInternalSubset", "()Z", nullptr, $PROTECTED | $FINAL, $method(XMLDTDScannerImpl, scanningInternalSubset, bool)},
	{"setDTDContentModelHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, setDTDContentModelHandler, void, $XMLDTDContentModelHandler*)},
	{"setDTDHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, setDTDHandler, void, $XMLDTDHandler*)},
	{"setInputSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, setInputSource, void, $XMLInputSource*), "java.io.IOException"},
	{"setLimitAnalyzer", "(Lcom/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, setLimitAnalyzer, void, $XMLLimitAnalyzer*)},
	{"setScannerState", "(I)V", nullptr, $PROTECTED | $FINAL, $method(XMLDTDScannerImpl, setScannerState, void, int32_t)},
	{"skipDTD", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, skipDTD, bool, bool), "java.io.IOException"},
	{"skipSeparator", "(ZZ)Z", nullptr, $PRIVATE, $method(XMLDTDScannerImpl, skipSeparator, bool, bool, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDScannerImpl, startEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startPE", "(Ljava/lang/String;Z)V", nullptr, $PROTECTED, $virtualMethod(XMLDTDScannerImpl, startPE, void, $String*, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLDTDScannerImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLDTDScannerImpl",
	"com.sun.org.apache.xerces.internal.impl.XMLScanner",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLDTDScanner,com.sun.org.apache.xerces.internal.impl.XMLEntityHandler",
	_XMLDTDScannerImpl_FieldInfo_,
	_XMLDTDScannerImpl_MethodInfo_
};

$Object* allocate$XMLDTDScannerImpl($Class* clazz) {
	return $of($alloc(XMLDTDScannerImpl));
}

int32_t XMLDTDScannerImpl::hashCode() {
	 return this->$XMLScanner::hashCode();
}

bool XMLDTDScannerImpl::equals(Object$* arg0) {
	 return this->$XMLScanner::equals(arg0);
}

$Object* XMLDTDScannerImpl::clone() {
	 return this->$XMLScanner::clone();
}

$String* XMLDTDScannerImpl::toString() {
	 return this->$XMLScanner::toString();
}

void XMLDTDScannerImpl::finalize() {
	this->$XMLScanner::finalize();
}

$StringArray* XMLDTDScannerImpl::RECOGNIZED_FEATURES = nullptr;
$BooleanArray* XMLDTDScannerImpl::FEATURE_DEFAULTS = nullptr;
$StringArray* XMLDTDScannerImpl::RECOGNIZED_PROPERTIES = nullptr;
$ObjectArray* XMLDTDScannerImpl::PROPERTY_DEFAULTS = nullptr;

void XMLDTDScannerImpl::init$() {
	$XMLScanner::init$();
	$set(this, fDTDHandler, nullptr);
	$set(this, fAttributes, $new($XMLAttributesImpl));
	$set(this, fContentStack, $new($ints, 5));
	$set(this, fPEStack, $new($ints, 5));
	$set(this, fPEReport, $new($booleans, 5));
	$set(this, fStrings, $new($StringArray, 3));
	$set(this, fString, $new($XMLString));
	$set(this, fStringBuffer, $new($XMLStringBuffer));
	$set(this, fStringBuffer2, $new($XMLStringBuffer));
	$set(this, fLiteral, $new($XMLString));
	$set(this, fLiteral2, $new($XMLString));
	$set(this, fEnumeration, $new($StringArray, 5));
	$set(this, fIgnoreConditionalBuffer, $new($XMLStringBuffer, 128));
	$set(this, nvGrammarInfo, nullptr);
	this->nonValidatingMode = false;
}

void XMLDTDScannerImpl::init$($SymbolTable* symbolTable, $XMLErrorReporter* errorReporter, $XMLEntityManager* entityManager) {
	$XMLScanner::init$();
	$set(this, fDTDHandler, nullptr);
	$set(this, fAttributes, $new($XMLAttributesImpl));
	$set(this, fContentStack, $new($ints, 5));
	$set(this, fPEStack, $new($ints, 5));
	$set(this, fPEReport, $new($booleans, 5));
	$set(this, fStrings, $new($StringArray, 3));
	$set(this, fString, $new($XMLString));
	$set(this, fStringBuffer, $new($XMLStringBuffer));
	$set(this, fStringBuffer2, $new($XMLStringBuffer));
	$set(this, fLiteral, $new($XMLString));
	$set(this, fLiteral2, $new($XMLString));
	$set(this, fEnumeration, $new($StringArray, 5));
	$set(this, fIgnoreConditionalBuffer, $new($XMLStringBuffer, 128));
	$set(this, nvGrammarInfo, nullptr);
	this->nonValidatingMode = false;
	$set(this, fSymbolTable, symbolTable);
	$set(this, fErrorReporter, errorReporter);
	$set(this, fEntityManager, entityManager);
	$init($XMLScanner);
	$nc(entityManager)->setProperty($XMLScanner::SYMBOL_TABLE, this->fSymbolTable);
}

void XMLDTDScannerImpl::setInputSource($XMLInputSource* inputSource) {
	if (inputSource == nullptr) {
		if (this->fDTDHandler != nullptr) {
			$nc(this->fDTDHandler)->startDTD(nullptr, nullptr);
			$nc(this->fDTDHandler)->endDTD(nullptr);
		}
		if (this->nonValidatingMode) {
			$nc(this->nvGrammarInfo)->startDTD(nullptr, nullptr);
			$nc(this->nvGrammarInfo)->endDTD(nullptr);
		}
		return;
	}
	$nc(this->fEntityManager)->setEntityHandler(this);
	$nc(this->fEntityManager)->startDTDEntity(inputSource);
}

void XMLDTDScannerImpl::setLimitAnalyzer($XMLLimitAnalyzer* limitAnalyzer) {
	$set(this, fLimitAnalyzer, limitAnalyzer);
}

bool XMLDTDScannerImpl::scanDTDExternalSubset(bool complete) {
	$nc(this->fEntityManager)->setEntityHandler(this);
	if (this->fScannerState == XMLDTDScannerImpl::SCANNER_STATE_TEXT_DECL) {
		this->fSeenExternalDTD = true;
		bool textDecl = scanTextDecl();
		if (this->fScannerState == XMLDTDScannerImpl::SCANNER_STATE_END_OF_INPUT) {
			return false;
		} else {
			setScannerState(XMLDTDScannerImpl::SCANNER_STATE_MARKUP_DECL);
			if (textDecl && !complete) {
				return true;
			}
		}
	}
	do {
		if (!scanDecls(complete)) {
			return false;
		}
	} while (complete);
	return true;
}

bool XMLDTDScannerImpl::scanDTDInternalSubset(bool complete, bool standalone, bool hasExternalSubset) {
	$set(this, fEntityScanner, $nc(this->fEntityManager)->getEntityScanner());
	$nc(this->fEntityManager)->setEntityHandler(this);
	this->fStandalone = standalone;
	if (this->fScannerState == XMLDTDScannerImpl::SCANNER_STATE_TEXT_DECL) {
		if (this->fDTDHandler != nullptr) {
			$nc(this->fDTDHandler)->startDTD(this->fEntityScanner, nullptr);
			this->fStartDTDCalled = true;
		}
		if (this->nonValidatingMode) {
			this->fStartDTDCalled = true;
			$nc(this->nvGrammarInfo)->startDTD(this->fEntityScanner, nullptr);
		}
		setScannerState(XMLDTDScannerImpl::SCANNER_STATE_MARKUP_DECL);
	}
	do {
		if (!scanDecls(complete)) {
			if (this->fDTDHandler != nullptr && hasExternalSubset == false) {
				$nc(this->fDTDHandler)->endDTD(nullptr);
			}
			if (this->nonValidatingMode && hasExternalSubset == false) {
				$nc(this->nvGrammarInfo)->endDTD(nullptr);
			}
			setScannerState(XMLDTDScannerImpl::SCANNER_STATE_TEXT_DECL);
			$init($XMLSecurityManager$Limit);
			$nc(this->fLimitAnalyzer)->reset($XMLSecurityManager$Limit::GENERAL_ENTITY_SIZE_LIMIT);
			$nc(this->fLimitAnalyzer)->reset($XMLSecurityManager$Limit::TOTAL_ENTITY_SIZE_LIMIT);
			return false;
		}
	} while (complete);
	return true;
}

bool XMLDTDScannerImpl::skipDTD(bool supportDTD) {
	$useLocalCurrentObjectStackCache();
	if (supportDTD) {
		return false;
	}
	$nc(this->fStringBuffer)->clear();
	while ($nc(this->fEntityScanner)->scanData("]"_s, this->fStringBuffer, 0)) {
		int32_t c = $nc(this->fEntityScanner)->peekChar();
		if (c != -1) {
			if ($XMLChar::isHighSurrogate(c)) {
				scanSurrogates(this->fStringBuffer);
			}
			if (isInvalidLiteral(c)) {
				reportFatalError("InvalidCharInDTD"_s, $$new($ObjectArray, {$($of($Integer::toHexString(c)))}));
				$nc(this->fEntityScanner)->scanChar(nullptr);
			}
		}
	}
	--$nc($nc(this->fEntityScanner)->fCurrentEntity)->position;
	return true;
}

void XMLDTDScannerImpl::reset($XMLComponentManager* componentManager) {
	$XMLScanner::reset(componentManager);
	init();
}

void XMLDTDScannerImpl::reset() {
	$XMLScanner::reset();
	init();
}

void XMLDTDScannerImpl::reset($PropertyManager* props) {
	setPropertyManager(props);
	$XMLScanner::reset(props);
	init();
	this->nonValidatingMode = true;
	$set(this, nvGrammarInfo, $new($DTDGrammar, this->fSymbolTable));
}

$StringArray* XMLDTDScannerImpl::getRecognizedFeatures() {
	return $cast($StringArray, $nc(XMLDTDScannerImpl::RECOGNIZED_FEATURES)->clone());
}

$StringArray* XMLDTDScannerImpl::getRecognizedProperties() {
	return $cast($StringArray, $nc(XMLDTDScannerImpl::RECOGNIZED_PROPERTIES)->clone());
}

$Boolean* XMLDTDScannerImpl::getFeatureDefault($String* featureId) {
	for (int32_t i = 0; i < $nc(XMLDTDScannerImpl::RECOGNIZED_FEATURES)->length; ++i) {
		if ($nc($nc(XMLDTDScannerImpl::RECOGNIZED_FEATURES)->get(i))->equals(featureId)) {
			return $nc(XMLDTDScannerImpl::FEATURE_DEFAULTS)->get(i);
		}
	}
	return nullptr;
}

$Object* XMLDTDScannerImpl::getPropertyDefault($String* propertyId) {
	for (int32_t i = 0; i < $nc(XMLDTDScannerImpl::RECOGNIZED_PROPERTIES)->length; ++i) {
		if ($nc($nc(XMLDTDScannerImpl::RECOGNIZED_PROPERTIES)->get(i))->equals(propertyId)) {
			return $of($nc(XMLDTDScannerImpl::PROPERTY_DEFAULTS)->get(i));
		}
	}
	return $of(nullptr);
}

void XMLDTDScannerImpl::setDTDHandler($XMLDTDHandler* dtdHandler) {
	$set(this, fDTDHandler, dtdHandler);
}

$XMLDTDHandler* XMLDTDScannerImpl::getDTDHandler() {
	return this->fDTDHandler;
}

void XMLDTDScannerImpl::setDTDContentModelHandler($XMLDTDContentModelHandler* dtdContentModelHandler) {
	$set(this, fDTDContentModelHandler, dtdContentModelHandler);
}

$XMLDTDContentModelHandler* XMLDTDScannerImpl::getDTDContentModelHandler() {
	return this->fDTDContentModelHandler;
}

void XMLDTDScannerImpl::startEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
	$XMLScanner::startEntity(name, identifier, encoding, augs);
	bool dtdEntity = $nc(name)->equals("[dtd]"_s);
	if (dtdEntity) {
		if (this->fDTDHandler != nullptr && !this->fStartDTDCalled) {
			$nc(this->fDTDHandler)->startDTD(this->fEntityScanner, nullptr);
		}
		if (this->fDTDHandler != nullptr) {
			$nc(this->fDTDHandler)->startExternalSubset(identifier, nullptr);
		}
		$nc(this->fEntityManager)->startExternalSubset();
		$nc(this->fEntityStore)->startExternalSubset();
		++this->fExtEntityDepth;
	} else if (name->charAt(0) == u'%') {
		pushPEStack(this->fMarkUpDepth, this->fReportEntity);
		if ($nc(this->fEntityScanner)->isExternal()) {
			++this->fExtEntityDepth;
		}
	}
	if (this->fDTDHandler != nullptr && !dtdEntity && this->fReportEntity) {
		$nc(this->fDTDHandler)->startParameterEntity(name, identifier, encoding, nullptr);
	}
}

void XMLDTDScannerImpl::endEntity($String* name, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$XMLScanner::endEntity(name, augs);
	if (this->fScannerState == XMLDTDScannerImpl::SCANNER_STATE_END_OF_INPUT) {
		return;
	}
	bool dtdEntity = $nc(name)->equals("[dtd]"_s);
	bool reportEntity = this->fReportEntity;
	if (name->startsWith("%"_s)) {
		reportEntity = peekReportEntity();
		int32_t startMarkUpDepth = popPEStack();
		if (startMarkUpDepth == 0 && startMarkUpDepth < this->fMarkUpDepth) {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "ILL_FORMED_PARAMETER_ENTITY_WHEN_USED_IN_DECL"_s, $$new($ObjectArray, {$of($nc($nc(this->fEntityManager)->fCurrentEntity)->name)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
		}
		if (startMarkUpDepth != this->fMarkUpDepth) {
			reportEntity = false;
			if (this->fValidation) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "ImproperDeclarationNesting"_s, $$new($ObjectArray, {$of(name)}), $XMLErrorReporter::SEVERITY_ERROR);
			}
		}
		if ($nc(this->fEntityScanner)->isExternal()) {
			--this->fExtEntityDepth;
		}
		if (this->fDTDHandler != nullptr && reportEntity) {
			$nc(this->fDTDHandler)->endParameterEntity(name, nullptr);
		}
	}
	if (dtdEntity) {
		if (this->fIncludeSectDepth != 0) {
			reportFatalError("IncludeSectUnterminated"_s, nullptr);
		}
		this->fScannerState = XMLDTDScannerImpl::SCANNER_STATE_END_OF_INPUT;
		$nc(this->fEntityManager)->endExternalSubset();
		$nc(this->fEntityStore)->endExternalSubset();
		if (this->fDTDHandler != nullptr) {
			$nc(this->fDTDHandler)->endExternalSubset(nullptr);
			$nc(this->fDTDHandler)->endDTD(nullptr);
		}
		--this->fExtEntityDepth;
	}
	$init($Boolean);
	$init($Constants);
	if (augs != nullptr && $nc($Boolean::TRUE)->equals($(augs->getItem($Constants::LAST_ENTITY))) && (this->fMarkUpDepth != 0 || this->fExtEntityDepth != 0 || this->fIncludeSectDepth != 0)) {
		$throwNew($EOFException);
	}
}

void XMLDTDScannerImpl::setScannerState(int32_t state) {
	this->fScannerState = state;
}

$String* XMLDTDScannerImpl::getScannerStateName(int32_t state) {
	$init(XMLDTDScannerImpl);
	$useLocalCurrentObjectStackCache();
	return $str({"??? ("_s, $$str(state), $$str(u')')});
}

bool XMLDTDScannerImpl::scanningInternalSubset() {
	return this->fExtEntityDepth == 0;
}

void XMLDTDScannerImpl::startPE($String* name, bool literal) {
	$useLocalCurrentObjectStackCache();
	int32_t depth = this->fPEDepth;
	$var($String, pName, $str({"%"_s, name}));
	if (this->fValidation && !$nc(this->fEntityStore)->isDeclaredEntity(pName)) {
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "EntityNotDeclared"_s, $$new($ObjectArray, {$of(name)}), $XMLErrorReporter::SEVERITY_ERROR);
	}
	$nc(this->fEntityManager)->startEntity(false, $($nc(this->fSymbolTable)->addSymbol(pName)), literal);
	if (depth != this->fPEDepth && $nc(this->fEntityScanner)->isExternal()) {
		scanTextDecl();
	}
}

bool XMLDTDScannerImpl::scanTextDecl() {
	$useLocalCurrentObjectStackCache();
	bool textDecl = false;
	if ($nc(this->fEntityScanner)->skipString("<?xml"_s)) {
		++this->fMarkUpDepth;
		if (isValidNameChar($nc(this->fEntityScanner)->peekChar())) {
			$nc(this->fStringBuffer)->clear();
			$nc(this->fStringBuffer)->append("xml"_s);
			while (isValidNameChar($nc(this->fEntityScanner)->peekChar())) {
				$nc(this->fStringBuffer)->append((char16_t)$nc(this->fEntityScanner)->scanChar(nullptr));
			}
			$var($String, target, $nc(this->fSymbolTable)->addSymbol($nc(this->fStringBuffer)->ch, $nc(this->fStringBuffer)->offset, $nc(this->fStringBuffer)->length));
			scanPIData(target, this->fString);
		} else {
			$var($String, version, nullptr);
			$var($String, encoding, nullptr);
			scanXMLDeclOrTextDecl(true, this->fStrings);
			textDecl = true;
			--this->fMarkUpDepth;
			$assign(version, $nc(this->fStrings)->get(0));
			$assign(encoding, $nc(this->fStrings)->get(1));
			$nc(this->fEntityScanner)->setEncoding(encoding);
			if (this->fDTDHandler != nullptr) {
				$nc(this->fDTDHandler)->textDecl(version, encoding, nullptr);
			}
		}
	}
	$nc($nc(this->fEntityManager)->fCurrentEntity)->mayReadChunks = true;
	return textDecl;
}

void XMLDTDScannerImpl::scanPIData($String* target, $XMLString* data) {
	--this->fMarkUpDepth;
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->processingInstruction(target, data, nullptr);
	}
}

void XMLDTDScannerImpl::scanComment() {
	this->fReportEntity = false;
	scanComment(this->fStringBuffer);
	--this->fMarkUpDepth;
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->comment(this->fStringBuffer, nullptr);
	}
	this->fReportEntity = true;
}

void XMLDTDScannerImpl::scanElementDecl() {
	$useLocalCurrentObjectStackCache();
	this->fReportEntity = false;
	if (!skipSeparator(true, !scanningInternalSubset())) {
		reportFatalError("MSG_SPACE_REQUIRED_BEFORE_ELEMENT_TYPE_IN_ELEMENTDECL"_s, nullptr);
	}
	$init($XMLScanner$NameType);
	$var($String, name, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::ELEMENTSTART));
	if (name == nullptr) {
		reportFatalError("MSG_ELEMENT_TYPE_REQUIRED_IN_ELEMENTDECL"_s, nullptr);
	}
	if (!skipSeparator(true, !scanningInternalSubset())) {
		reportFatalError("MSG_SPACE_REQUIRED_BEFORE_CONTENTSPEC_IN_ELEMENTDECL"_s, $$new($ObjectArray, {$of(name)}));
	}
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->startContentModel(name, nullptr);
	}
	$var($String, contentModel, nullptr);
	this->fReportEntity = true;
	if ($nc(this->fEntityScanner)->skipString("EMPTY"_s)) {
		$assign(contentModel, "EMPTY"_s);
		if (this->fDTDContentModelHandler != nullptr) {
			$nc(this->fDTDContentModelHandler)->empty(nullptr);
		}
	} else if ($nc(this->fEntityScanner)->skipString("ANY"_s)) {
		$assign(contentModel, "ANY"_s);
		if (this->fDTDContentModelHandler != nullptr) {
			$nc(this->fDTDContentModelHandler)->any(nullptr);
		}
	} else {
		if (!$nc(this->fEntityScanner)->skipChar(u'(', nullptr)) {
			reportFatalError("MSG_OPEN_PAREN_OR_ELEMENT_TYPE_REQUIRED_IN_CHILDREN"_s, $$new($ObjectArray, {$of(name)}));
		}
		if (this->fDTDContentModelHandler != nullptr) {
			$nc(this->fDTDContentModelHandler)->startGroup(nullptr);
		}
		$nc(this->fStringBuffer)->clear();
		$nc(this->fStringBuffer)->append(u'(');
		++this->fMarkUpDepth;
		skipSeparator(false, !scanningInternalSubset());
		if ($nc(this->fEntityScanner)->skipString("#PCDATA"_s)) {
			scanMixed(name);
		} else {
			scanChildren(name);
		}
		$assign(contentModel, $nc(this->fStringBuffer)->toString());
	}
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->endContentModel(nullptr);
	}
	this->fReportEntity = false;
	skipSeparator(false, !scanningInternalSubset());
	if (!$nc(this->fEntityScanner)->skipChar(u'>', nullptr)) {
		reportFatalError("ElementDeclUnterminated"_s, $$new($ObjectArray, {$of(name)}));
	}
	this->fReportEntity = true;
	--this->fMarkUpDepth;
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->elementDecl(name, contentModel, nullptr);
	}
	if (this->nonValidatingMode) {
		$nc(this->nvGrammarInfo)->elementDecl(name, contentModel, nullptr);
	}
}

void XMLDTDScannerImpl::scanMixed($String* elName) {
	$useLocalCurrentObjectStackCache();
	$var($String, childName, nullptr);
	$nc(this->fStringBuffer)->append("#PCDATA"_s);
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->pcdata(nullptr);
	}
	skipSeparator(false, !scanningInternalSubset());
	while ($nc(this->fEntityScanner)->skipChar(u'|', nullptr)) {
		$nc(this->fStringBuffer)->append(u'|');
		if (this->fDTDContentModelHandler != nullptr) {
			$nc(this->fDTDContentModelHandler)->separator($XMLDTDContentModelHandler::SEPARATOR_CHOICE, nullptr);
		}
		skipSeparator(false, !scanningInternalSubset());
		$init($XMLScanner$NameType);
		$assign(childName, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::ENTITY));
		if (childName == nullptr) {
			reportFatalError("MSG_ELEMENT_TYPE_REQUIRED_IN_MIXED_CONTENT"_s, $$new($ObjectArray, {$of(elName)}));
		}
		$nc(this->fStringBuffer)->append(childName);
		if (this->fDTDContentModelHandler != nullptr) {
			$nc(this->fDTDContentModelHandler)->element(childName, nullptr);
		}
		skipSeparator(false, !scanningInternalSubset());
	}
	if ($nc(this->fEntityScanner)->skipString(")*"_s)) {
		$nc(this->fStringBuffer)->append(")*"_s);
		if (this->fDTDContentModelHandler != nullptr) {
			$nc(this->fDTDContentModelHandler)->endGroup(nullptr);
			$nc(this->fDTDContentModelHandler)->occurrence($XMLDTDContentModelHandler::OCCURS_ZERO_OR_MORE, nullptr);
		}
	} else if (childName != nullptr) {
		reportFatalError("MixedContentUnterminated"_s, $$new($ObjectArray, {$of(elName)}));
	} else if ($nc(this->fEntityScanner)->skipChar(u')', nullptr)) {
		$nc(this->fStringBuffer)->append(u')');
		if (this->fDTDContentModelHandler != nullptr) {
			$nc(this->fDTDContentModelHandler)->endGroup(nullptr);
		}
	} else {
		reportFatalError("MSG_CLOSE_PAREN_REQUIRED_IN_CHILDREN"_s, $$new($ObjectArray, {$of(elName)}));
	}
	--this->fMarkUpDepth;
}

void XMLDTDScannerImpl::scanChildren($String* elName) {
	$useLocalCurrentObjectStackCache();
	this->fContentDepth = 0;
	pushContentStack(0);
	int32_t currentOp = 0;
	int32_t c = 0;
	while (true) {
		if ($nc(this->fEntityScanner)->skipChar(u'(', nullptr)) {
			++this->fMarkUpDepth;
			$nc(this->fStringBuffer)->append(u'(');
			if (this->fDTDContentModelHandler != nullptr) {
				$nc(this->fDTDContentModelHandler)->startGroup(nullptr);
			}
			pushContentStack(currentOp);
			currentOp = 0;
			skipSeparator(false, !scanningInternalSubset());
			continue;
		}
		skipSeparator(false, !scanningInternalSubset());
		$init($XMLScanner$NameType);
		$var($String, childName, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::ELEMENTSTART));
		if (childName == nullptr) {
			reportFatalError("MSG_OPEN_PAREN_OR_ELEMENT_TYPE_REQUIRED_IN_CHILDREN"_s, $$new($ObjectArray, {$of(elName)}));
			return;
		}
		if (this->fDTDContentModelHandler != nullptr) {
			$nc(this->fDTDContentModelHandler)->element(childName, nullptr);
		}
		$nc(this->fStringBuffer)->append(childName);
		c = $nc(this->fEntityScanner)->peekChar();
		if (c == u'?' || c == u'*' || c == u'+') {
			if (this->fDTDContentModelHandler != nullptr) {
				int16_t oc = 0;
				if (c == u'?') {
					oc = $XMLDTDContentModelHandler::OCCURS_ZERO_OR_ONE;
				} else if (c == u'*') {
					oc = $XMLDTDContentModelHandler::OCCURS_ZERO_OR_MORE;
				} else {
					oc = $XMLDTDContentModelHandler::OCCURS_ONE_OR_MORE;
				}
				$nc(this->fDTDContentModelHandler)->occurrence(oc, nullptr);
			}
			$nc(this->fEntityScanner)->scanChar(nullptr);
			$nc(this->fStringBuffer)->append((char16_t)c);
		}
		while (true) {
			skipSeparator(false, !scanningInternalSubset());
			c = $nc(this->fEntityScanner)->peekChar();
			if (c == u',' && currentOp != u'|') {
				currentOp = c;
				if (this->fDTDContentModelHandler != nullptr) {
					$nc(this->fDTDContentModelHandler)->separator($XMLDTDContentModelHandler::SEPARATOR_SEQUENCE, nullptr);
				}
				$nc(this->fEntityScanner)->scanChar(nullptr);
				$nc(this->fStringBuffer)->append(u',');
				break;
			} else if (c == u'|' && currentOp != u',') {
				currentOp = c;
				if (this->fDTDContentModelHandler != nullptr) {
					$nc(this->fDTDContentModelHandler)->separator($XMLDTDContentModelHandler::SEPARATOR_CHOICE, nullptr);
				}
				$nc(this->fEntityScanner)->scanChar(nullptr);
				$nc(this->fStringBuffer)->append(u'|');
				break;
			} else if (c != u')') {
				reportFatalError("MSG_CLOSE_PAREN_REQUIRED_IN_CHILDREN"_s, $$new($ObjectArray, {$of(elName)}));
			}
			if (this->fDTDContentModelHandler != nullptr) {
				$nc(this->fDTDContentModelHandler)->endGroup(nullptr);
			}
			currentOp = popContentStack();
			int16_t oc = 0;
			if ($nc(this->fEntityScanner)->skipString(")?"_s)) {
				$nc(this->fStringBuffer)->append(")?"_s);
				if (this->fDTDContentModelHandler != nullptr) {
					oc = $XMLDTDContentModelHandler::OCCURS_ZERO_OR_ONE;
					$nc(this->fDTDContentModelHandler)->occurrence(oc, nullptr);
				}
			} else if ($nc(this->fEntityScanner)->skipString(")+"_s)) {
				$nc(this->fStringBuffer)->append(")+"_s);
				if (this->fDTDContentModelHandler != nullptr) {
					oc = $XMLDTDContentModelHandler::OCCURS_ONE_OR_MORE;
					$nc(this->fDTDContentModelHandler)->occurrence(oc, nullptr);
				}
			} else if ($nc(this->fEntityScanner)->skipString(")*"_s)) {
				$nc(this->fStringBuffer)->append(")*"_s);
				if (this->fDTDContentModelHandler != nullptr) {
					oc = $XMLDTDContentModelHandler::OCCURS_ZERO_OR_MORE;
					$nc(this->fDTDContentModelHandler)->occurrence(oc, nullptr);
				}
			} else {
				$nc(this->fEntityScanner)->scanChar(nullptr);
				$nc(this->fStringBuffer)->append(u')');
			}
			--this->fMarkUpDepth;
			if (this->fContentDepth == 0) {
				return;
			}
		}
		skipSeparator(false, !scanningInternalSubset());
	}
}

void XMLDTDScannerImpl::scanAttlistDecl() {
	$useLocalCurrentObjectStackCache();
	this->fReportEntity = false;
	if (!skipSeparator(true, !scanningInternalSubset())) {
		reportFatalError("MSG_SPACE_REQUIRED_BEFORE_ELEMENT_TYPE_IN_ATTLISTDECL"_s, nullptr);
	}
	$init($XMLScanner$NameType);
	$var($String, elName, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::ELEMENTSTART));
	if (elName == nullptr) {
		reportFatalError("MSG_ELEMENT_TYPE_REQUIRED_IN_ATTLISTDECL"_s, nullptr);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->startAttlist(elName, nullptr);
	}
	if (!skipSeparator(true, !scanningInternalSubset())) {
		if ($nc(this->fEntityScanner)->skipChar(u'>', nullptr)) {
			if (this->fDTDHandler != nullptr) {
				$nc(this->fDTDHandler)->endAttlist(nullptr);
			}
			--this->fMarkUpDepth;
			return;
		} else {
			reportFatalError("MSG_SPACE_REQUIRED_BEFORE_ATTRIBUTE_NAME_IN_ATTDEF"_s, $$new($ObjectArray, {$of(elName)}));
		}
	}
	while (!$nc(this->fEntityScanner)->skipChar(u'>', nullptr)) {
		$var($String, name, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::ATTRIBUTENAME));
		if (name == nullptr) {
			reportFatalError("AttNameRequiredInAttDef"_s, $$new($ObjectArray, {$of(elName)}));
		}
		if (!skipSeparator(true, !scanningInternalSubset())) {
			reportFatalError("MSG_SPACE_REQUIRED_BEFORE_ATTTYPE_IN_ATTDEF"_s, $$new($ObjectArray, {
				$of(elName),
				$of(name)
			}));
		}
		$var($String, type, scanAttType(elName, name));
		if (!skipSeparator(true, !scanningInternalSubset())) {
			reportFatalError("MSG_SPACE_REQUIRED_BEFORE_DEFAULTDECL_IN_ATTDEF"_s, $$new($ObjectArray, {
				$of(elName),
				$of(name)
			}));
		}
		$var($String, defaultType, scanAttDefaultDecl(elName, name, type, this->fLiteral, this->fLiteral2));
		$var($StringArray, enumr, nullptr);
		if (this->fDTDHandler != nullptr || this->nonValidatingMode) {
			if (this->fEnumerationCount != 0) {
				$assign(enumr, $new($StringArray, this->fEnumerationCount));
				$System::arraycopy(this->fEnumeration, 0, enumr, 0, this->fEnumerationCount);
			}
		}
		bool var$0 = defaultType != nullptr;
		if (var$0) {
			bool var$1 = defaultType->equals("#REQUIRED"_s);
			var$0 = (var$1 || defaultType->equals("#IMPLIED"_s));
		}
		if (var$0) {
			if (this->fDTDHandler != nullptr) {
				$nc(this->fDTDHandler)->attributeDecl(elName, name, type, enumr, defaultType, nullptr, nullptr, nullptr);
			}
			if (this->nonValidatingMode) {
				$nc(this->nvGrammarInfo)->attributeDecl(elName, name, type, enumr, defaultType, nullptr, nullptr, nullptr);
			}
		} else {
			if (this->fDTDHandler != nullptr) {
				$nc(this->fDTDHandler)->attributeDecl(elName, name, type, enumr, defaultType, this->fLiteral, this->fLiteral2, nullptr);
			}
			if (this->nonValidatingMode) {
				$nc(this->nvGrammarInfo)->attributeDecl(elName, name, type, enumr, defaultType, this->fLiteral, this->fLiteral2, nullptr);
			}
		}
		skipSeparator(false, !scanningInternalSubset());
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->endAttlist(nullptr);
	}
	--this->fMarkUpDepth;
	this->fReportEntity = true;
}

$String* XMLDTDScannerImpl::scanAttType($String* elName, $String* atName) {
	$useLocalCurrentObjectStackCache();
	$var($String, type, nullptr);
	this->fEnumerationCount = 0;
	if ($nc(this->fEntityScanner)->skipString("CDATA"_s)) {
		$assign(type, "CDATA"_s);
	} else if ($nc(this->fEntityScanner)->skipString("IDREFS"_s)) {
		$assign(type, "IDREFS"_s);
	} else if ($nc(this->fEntityScanner)->skipString("IDREF"_s)) {
		$assign(type, "IDREF"_s);
	} else if ($nc(this->fEntityScanner)->skipString("ID"_s)) {
		$assign(type, "ID"_s);
	} else if ($nc(this->fEntityScanner)->skipString("ENTITY"_s)) {
		$assign(type, "ENTITY"_s);
	} else if ($nc(this->fEntityScanner)->skipString("ENTITIES"_s)) {
		$assign(type, "ENTITIES"_s);
	} else if ($nc(this->fEntityScanner)->skipString("NMTOKENS"_s)) {
		$assign(type, "NMTOKENS"_s);
	} else if ($nc(this->fEntityScanner)->skipString("NMTOKEN"_s)) {
		$assign(type, "NMTOKEN"_s);
	} else if ($nc(this->fEntityScanner)->skipString("NOTATION"_s)) {
		$assign(type, "NOTATION"_s);
		if (!skipSeparator(true, !scanningInternalSubset())) {
			reportFatalError("MSG_SPACE_REQUIRED_AFTER_NOTATION_IN_NOTATIONTYPE"_s, $$new($ObjectArray, {
				$of(elName),
				$of(atName)
			}));
		}
		int32_t c = $nc(this->fEntityScanner)->scanChar(nullptr);
		if (c != u'(') {
			reportFatalError("MSG_OPEN_PAREN_REQUIRED_IN_NOTATIONTYPE"_s, $$new($ObjectArray, {
				$of(elName),
				$of(atName)
			}));
		}
		++this->fMarkUpDepth;
		do {
			skipSeparator(false, !scanningInternalSubset());
			$init($XMLScanner$NameType);
			$var($String, aName, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::ATTRIBUTENAME));
			if (aName == nullptr) {
				reportFatalError("MSG_NAME_REQUIRED_IN_NOTATIONTYPE"_s, $$new($ObjectArray, {
					$of(elName),
					$of(atName)
				}));
			}
			ensureEnumerationSize(this->fEnumerationCount + 1);
			$nc(this->fEnumeration)->set(this->fEnumerationCount++, aName);
			skipSeparator(false, !scanningInternalSubset());
			c = $nc(this->fEntityScanner)->scanChar(nullptr);
		} while (c == u'|');
		if (c != u')') {
			reportFatalError("NotationTypeUnterminated"_s, $$new($ObjectArray, {
				$of(elName),
				$of(atName)
			}));
		}
		--this->fMarkUpDepth;
	} else {
		$assign(type, "ENUMERATION"_s);
		int32_t c = $nc(this->fEntityScanner)->scanChar(nullptr);
		if (c != u'(') {
			reportFatalError("AttTypeRequiredInAttDef"_s, $$new($ObjectArray, {
				$of(elName),
				$of(atName)
			}));
		}
		++this->fMarkUpDepth;
		do {
			skipSeparator(false, !scanningInternalSubset());
			$var($String, token, $nc(this->fEntityScanner)->scanNmtoken());
			if (token == nullptr) {
				reportFatalError("MSG_NMTOKEN_REQUIRED_IN_ENUMERATION"_s, $$new($ObjectArray, {
					$of(elName),
					$of(atName)
				}));
			}
			ensureEnumerationSize(this->fEnumerationCount + 1);
			$nc(this->fEnumeration)->set(this->fEnumerationCount++, token);
			skipSeparator(false, !scanningInternalSubset());
			c = $nc(this->fEntityScanner)->scanChar(nullptr);
		} while (c == u'|');
		if (c != u')') {
			reportFatalError("EnumerationUnterminated"_s, $$new($ObjectArray, {
				$of(elName),
				$of(atName)
			}));
		}
		--this->fMarkUpDepth;
	}
	return type;
}

$String* XMLDTDScannerImpl::scanAttDefaultDecl($String* elName, $String* atName, $String* type, $XMLString* defaultVal, $XMLString* nonNormalizedDefaultVal) {
	$useLocalCurrentObjectStackCache();
	$var($String, defaultType, nullptr);
	$nc(this->fString)->clear();
	$nc(defaultVal)->clear();
	if ($nc(this->fEntityScanner)->skipString("#REQUIRED"_s)) {
		$assign(defaultType, "#REQUIRED"_s);
	} else if ($nc(this->fEntityScanner)->skipString("#IMPLIED"_s)) {
		$assign(defaultType, "#IMPLIED"_s);
	} else {
		if ($nc(this->fEntityScanner)->skipString("#FIXED"_s)) {
			$assign(defaultType, "#FIXED"_s);
			if (!skipSeparator(true, !scanningInternalSubset())) {
				reportFatalError("MSG_SPACE_REQUIRED_AFTER_FIXED_IN_DEFAULTDECL"_s, $$new($ObjectArray, {
					$of(elName),
					$of(atName)
				}));
			}
		}
		bool isVC = !this->fStandalone && (this->fSeenExternalDTD || this->fSeenExternalPE);
		scanAttributeValue(defaultVal, nonNormalizedDefaultVal, atName, this->fAttributes, 0, isVC, elName, false);
	}
	return defaultType;
}

void XMLDTDScannerImpl::scanEntityDecl() {
	$useLocalCurrentObjectStackCache();
	bool isPEDecl = false;
	bool sawPERef = false;
	this->fReportEntity = false;
	if ($nc(this->fEntityScanner)->skipSpaces()) {
		$init($XMLScanner$NameType);
		if (!$nc(this->fEntityScanner)->skipChar(u'%', $XMLScanner$NameType::REFERENCE)) {
			isPEDecl = false;
		} else if (skipSeparator(true, !scanningInternalSubset())) {
			isPEDecl = true;
		} else if (scanningInternalSubset()) {
			reportFatalError("MSG_SPACE_REQUIRED_BEFORE_ENTITY_NAME_IN_ENTITYDECL"_s, nullptr);
			isPEDecl = true;
		} else if ($nc(this->fEntityScanner)->peekChar() == u'%') {
			skipSeparator(false, !scanningInternalSubset());
			isPEDecl = true;
		} else {
			sawPERef = true;
		}
	} else {
		bool var$1 = scanningInternalSubset();
		$init($XMLScanner$NameType);
		if (var$1 || !$nc(this->fEntityScanner)->skipChar(u'%', $XMLScanner$NameType::REFERENCE)) {
			reportFatalError("MSG_SPACE_REQUIRED_BEFORE_ENTITY_NAME_IN_ENTITYDECL"_s, nullptr);
			isPEDecl = false;
		} else if ($nc(this->fEntityScanner)->skipSpaces()) {
			reportFatalError("MSG_SPACE_REQUIRED_BEFORE_PERCENT_IN_PEDECL"_s, nullptr);
			isPEDecl = false;
		} else {
			sawPERef = true;
		}
	}
	if (sawPERef) {
		while (true) {
			$init($XMLScanner$NameType);
			$var($String, peName, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::REFERENCE));
			if (peName == nullptr) {
				reportFatalError("NameRequiredInPEReference"_s, nullptr);
			} else {
				if (!$nc(this->fEntityScanner)->skipChar(u';', $XMLScanner$NameType::REFERENCE)) {
					reportFatalError("SemicolonRequiredInPEReference"_s, $$new($ObjectArray, {$of(peName)}));
				} else {
					startPE(peName, false);
				}
			}
			$nc(this->fEntityScanner)->skipSpaces();
			if (!$nc(this->fEntityScanner)->skipChar(u'%', $XMLScanner$NameType::REFERENCE)) {
				break;
			}
			if (!isPEDecl) {
				if (skipSeparator(true, !scanningInternalSubset())) {
					isPEDecl = true;
					break;
				}
				isPEDecl = $nc(this->fEntityScanner)->skipChar(u'%', $XMLScanner$NameType::REFERENCE);
			}
		}
	}
	$init($XMLScanner$NameType);
	$var($String, name, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::ENTITY));
	if (name == nullptr) {
		reportFatalError("MSG_ENTITY_NAME_REQUIRED_IN_ENTITYDECL"_s, nullptr);
	}
	if (!skipSeparator(true, !scanningInternalSubset())) {
		reportFatalError("MSG_SPACE_REQUIRED_AFTER_ENTITY_NAME_IN_ENTITYDECL"_s, $$new($ObjectArray, {$of(name)}));
	}
	scanExternalID(this->fStrings, false);
	$var($String, systemId, $nc(this->fStrings)->get(0));
	$var($String, publicId, $nc(this->fStrings)->get(1));
	if (isPEDecl && systemId != nullptr) {
		this->fSeenExternalPE = true;
	}
	$var($String, notation, nullptr);
	bool sawSpace = skipSeparator(true, !scanningInternalSubset());
	if (!isPEDecl && $nc(this->fEntityScanner)->skipString("NDATA"_s)) {
		if (!sawSpace) {
			reportFatalError("MSG_SPACE_REQUIRED_BEFORE_NDATA_IN_UNPARSED_ENTITYDECL"_s, $$new($ObjectArray, {$of(name)}));
		}
		if (!skipSeparator(true, !scanningInternalSubset())) {
			reportFatalError("MSG_SPACE_REQUIRED_BEFORE_NOTATION_NAME_IN_UNPARSED_ENTITYDECL"_s, $$new($ObjectArray, {$of(name)}));
		}
		$assign(notation, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::NOTATION));
		if (notation == nullptr) {
			reportFatalError("MSG_NOTATION_NAME_REQUIRED_FOR_UNPARSED_ENTITYDECL"_s, $$new($ObjectArray, {$of(name)}));
		}
	}
	if (systemId == nullptr) {
		scanEntityValue(name, isPEDecl, this->fLiteral, this->fLiteral2);
		$nc(this->fStringBuffer)->clear();
		$nc(this->fStringBuffer2)->clear();
		$nc(this->fStringBuffer)->append($nc(this->fLiteral)->ch, $nc(this->fLiteral)->offset, $nc(this->fLiteral)->length);
		$nc(this->fStringBuffer2)->append($nc(this->fLiteral2)->ch, $nc(this->fLiteral2)->offset, $nc(this->fLiteral2)->length);
	}
	skipSeparator(false, !scanningInternalSubset());
	if (!$nc(this->fEntityScanner)->skipChar(u'>', nullptr)) {
		reportFatalError("EntityDeclUnterminated"_s, $$new($ObjectArray, {$of(name)}));
	}
	--this->fMarkUpDepth;
	if (isPEDecl) {
		$assign(name, $str({"%"_s, name}));
	}
	if (systemId != nullptr) {
		$var($String, baseSystemId, $nc(this->fEntityScanner)->getBaseSystemId());
		if (notation != nullptr) {
			$nc(this->fEntityStore)->addUnparsedEntity(name, publicId, systemId, baseSystemId, notation);
		} else {
			$nc(this->fEntityStore)->addExternalEntity(name, publicId, systemId, baseSystemId);
		}
		if (this->fDTDHandler != nullptr) {
			$nc(this->fResourceIdentifier)->setValues(publicId, systemId, baseSystemId, $($XMLEntityManager::expandSystemId(systemId, baseSystemId)));
			if (notation != nullptr) {
				$nc(this->fDTDHandler)->unparsedEntityDecl(name, this->fResourceIdentifier, notation, nullptr);
			} else {
				$nc(this->fDTDHandler)->externalEntityDecl(name, this->fResourceIdentifier, nullptr);
			}
		}
	} else {
		$nc(this->fEntityStore)->addInternalEntity(name, $($nc(this->fStringBuffer)->toString()));
		if (this->fDTDHandler != nullptr) {
			$nc(this->fDTDHandler)->internalEntityDecl(name, this->fStringBuffer, this->fStringBuffer2, nullptr);
		}
	}
	this->fReportEntity = true;
}

void XMLDTDScannerImpl::scanEntityValue($String* entityName, bool isPEDecl, $XMLString* value, $XMLString* nonNormalizedValue) {
	$useLocalCurrentObjectStackCache();
	int32_t quote = $nc(this->fEntityScanner)->scanChar(nullptr);
	if (quote != u'\'' && quote != u'\"') {
		reportFatalError("OpenQuoteMissingInDecl"_s, nullptr);
	}
	int32_t entityDepth = this->fEntityDepth;
	$var($XMLString, literal, this->fString);
	$var($XMLString, literal2, this->fString);
	int32_t countChar = 0;
	if (this->fLimitAnalyzer == nullptr) {
		$set(this, fLimitAnalyzer, $nc(this->fEntityManager)->fLimitAnalyzer);
	}
	$nc(this->fLimitAnalyzer)->startEntity(entityName);
	if ($nc(this->fEntityScanner)->scanLiteral(quote, this->fString, false) != quote) {
		$nc(this->fStringBuffer)->clear();
		$nc(this->fStringBuffer2)->clear();
		int32_t offset = 0;
		do {
			countChar = 0;
			offset = $nc(this->fStringBuffer)->length;
			$nc(this->fStringBuffer)->append(this->fString);
			$nc(this->fStringBuffer2)->append(this->fString);
			$init($XMLScanner$NameType);
			if ($nc(this->fEntityScanner)->skipChar(u'&', $XMLScanner$NameType::REFERENCE)) {
				if ($nc(this->fEntityScanner)->skipChar(u'#', $XMLScanner$NameType::REFERENCE)) {
					$nc(this->fStringBuffer2)->append("&#"_s);
					scanCharReferenceValue(this->fStringBuffer, this->fStringBuffer2);
				} else {
					$nc(this->fStringBuffer)->append(u'&');
					$nc(this->fStringBuffer2)->append(u'&');
					$var($String, eName, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::REFERENCE));
					if (eName == nullptr) {
						reportFatalError("NameRequiredInReference"_s, nullptr);
					} else {
						$nc(this->fStringBuffer)->append(eName);
						$nc(this->fStringBuffer2)->append(eName);
					}
					if (!$nc(this->fEntityScanner)->skipChar(u';', $XMLScanner$NameType::REFERENCE)) {
						reportFatalError("SemicolonRequiredInReference"_s, $$new($ObjectArray, {$of(eName)}));
					} else {
						$nc(this->fStringBuffer)->append(u';');
						$nc(this->fStringBuffer2)->append(u';');
					}
				}
			} else {
				if ($nc(this->fEntityScanner)->skipChar(u'%', $XMLScanner$NameType::REFERENCE)) {
					while (true) {
						$nc(this->fStringBuffer2)->append(u'%');
						$var($String, peName, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::REFERENCE));
						if (peName == nullptr) {
							reportFatalError("NameRequiredInPEReference"_s, nullptr);
						} else {
							if (!$nc(this->fEntityScanner)->skipChar(u';', $XMLScanner$NameType::REFERENCE)) {
								reportFatalError("SemicolonRequiredInPEReference"_s, $$new($ObjectArray, {$of(peName)}));
							} else {
								if (scanningInternalSubset()) {
									reportFatalError("PEReferenceWithinMarkup"_s, $$new($ObjectArray, {$of(peName)}));
								}
								$nc(this->fStringBuffer2)->append(peName);
								$nc(this->fStringBuffer2)->append(u';');
							}
						}
						startPE(peName, true);
						$nc(this->fEntityScanner)->skipSpaces();
						if (!$nc(this->fEntityScanner)->skipChar(u'%', $XMLScanner$NameType::REFERENCE)) {
							break;
						}
					}
				} else {
					int32_t c = $nc(this->fEntityScanner)->peekChar();
					if ($XMLChar::isHighSurrogate(c)) {
						++countChar;
						scanSurrogates(this->fStringBuffer2);
					} else if (isInvalidLiteral(c)) {
						reportFatalError("InvalidCharInLiteral"_s, $$new($ObjectArray, {$($of($Integer::toHexString(c)))}));
						$nc(this->fEntityScanner)->scanChar(nullptr);
					} else if (c != quote || entityDepth != this->fEntityDepth) {
						$nc(this->fStringBuffer)->append((char16_t)c);
						$nc(this->fStringBuffer2)->append((char16_t)c);
						$nc(this->fEntityScanner)->scanChar(nullptr);
					}
				}
			}
			checkEntityLimit(isPEDecl, entityName, $nc(this->fStringBuffer)->length - offset + countChar);
		} while ($nc(this->fEntityScanner)->scanLiteral(quote, this->fString, false) != quote);
		checkEntityLimit(isPEDecl, entityName, $nc(this->fString)->length);
		$nc(this->fStringBuffer)->append(this->fString);
		$nc(this->fStringBuffer2)->append(this->fString);
		$assign(literal, this->fStringBuffer);
		$assign(literal2, this->fStringBuffer2);
	} else {
		checkEntityLimit(isPEDecl, entityName, literal);
	}
	$nc(value)->setValues(literal);
	$nc(nonNormalizedValue)->setValues(literal2);
	if (this->fLimitAnalyzer != nullptr) {
		if (isPEDecl) {
			$init($XMLSecurityManager$Limit);
			$nc(this->fLimitAnalyzer)->endEntity($XMLSecurityManager$Limit::PARAMETER_ENTITY_SIZE_LIMIT, entityName);
		} else {
			$init($XMLSecurityManager$Limit);
			$nc(this->fLimitAnalyzer)->endEntity($XMLSecurityManager$Limit::GENERAL_ENTITY_SIZE_LIMIT, entityName);
		}
	}
	if (!$nc(this->fEntityScanner)->skipChar(quote, nullptr)) {
		reportFatalError("CloseQuoteMissingInDecl"_s, nullptr);
	}
}

void XMLDTDScannerImpl::scanNotationDecl() {
	$useLocalCurrentObjectStackCache();
	this->fReportEntity = false;
	if (!skipSeparator(true, !scanningInternalSubset())) {
		reportFatalError("MSG_SPACE_REQUIRED_BEFORE_NOTATION_NAME_IN_NOTATIONDECL"_s, nullptr);
	}
	$init($XMLScanner$NameType);
	$var($String, name, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::NOTATION));
	if (name == nullptr) {
		reportFatalError("MSG_NOTATION_NAME_REQUIRED_IN_NOTATIONDECL"_s, nullptr);
	}
	if (!skipSeparator(true, !scanningInternalSubset())) {
		reportFatalError("MSG_SPACE_REQUIRED_AFTER_NOTATION_NAME_IN_NOTATIONDECL"_s, $$new($ObjectArray, {$of(name)}));
	}
	scanExternalID(this->fStrings, true);
	$var($String, systemId, $nc(this->fStrings)->get(0));
	$var($String, publicId, $nc(this->fStrings)->get(1));
	$var($String, baseSystemId, $nc(this->fEntityScanner)->getBaseSystemId());
	if (systemId == nullptr && publicId == nullptr) {
		reportFatalError("ExternalIDorPublicIDRequired"_s, $$new($ObjectArray, {$of(name)}));
	}
	skipSeparator(false, !scanningInternalSubset());
	if (!$nc(this->fEntityScanner)->skipChar(u'>', nullptr)) {
		reportFatalError("NotationDeclUnterminated"_s, $$new($ObjectArray, {$of(name)}));
	}
	--this->fMarkUpDepth;
	$nc(this->fResourceIdentifier)->setValues(publicId, systemId, baseSystemId, $($XMLEntityManager::expandSystemId(systemId, baseSystemId)));
	if (this->nonValidatingMode) {
		$nc(this->nvGrammarInfo)->notationDecl(name, this->fResourceIdentifier, nullptr);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->notationDecl(name, this->fResourceIdentifier, nullptr);
	}
	this->fReportEntity = true;
}

void XMLDTDScannerImpl::scanConditionalSect(int32_t currPEDepth) {
	$useLocalCurrentObjectStackCache();
	this->fReportEntity = false;
	skipSeparator(false, !scanningInternalSubset());
	if ($nc(this->fEntityScanner)->skipString("INCLUDE"_s)) {
		skipSeparator(false, !scanningInternalSubset());
		if (currPEDepth != this->fPEDepth && this->fValidation) {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "INVALID_PE_IN_CONDITIONAL"_s, $$new($ObjectArray, {$of($nc($nc(this->fEntityManager)->fCurrentEntity)->name)}), $XMLErrorReporter::SEVERITY_ERROR);
		}
		if (!$nc(this->fEntityScanner)->skipChar(u'[', nullptr)) {
			reportFatalError("MSG_MARKUP_NOT_RECOGNIZED_IN_DTD"_s, nullptr);
		}
		if (this->fDTDHandler != nullptr) {
			$nc(this->fDTDHandler)->startConditional($XMLDTDHandler::CONDITIONAL_INCLUDE, nullptr);
		}
		++this->fIncludeSectDepth;
		this->fReportEntity = true;
	} else if ($nc(this->fEntityScanner)->skipString("IGNORE"_s)) {
		skipSeparator(false, !scanningInternalSubset());
		if (currPEDepth != this->fPEDepth && this->fValidation) {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "INVALID_PE_IN_CONDITIONAL"_s, $$new($ObjectArray, {$of($nc($nc(this->fEntityManager)->fCurrentEntity)->name)}), $XMLErrorReporter::SEVERITY_ERROR);
		}
		if (this->fDTDHandler != nullptr) {
			$nc(this->fDTDHandler)->startConditional($XMLDTDHandler::CONDITIONAL_IGNORE, nullptr);
		}
		if (!$nc(this->fEntityScanner)->skipChar(u'[', nullptr)) {
			reportFatalError("MSG_MARKUP_NOT_RECOGNIZED_IN_DTD"_s, nullptr);
		}
		this->fReportEntity = true;
		int32_t initialDepth = ++this->fIncludeSectDepth;
		if (this->fDTDHandler != nullptr) {
			$nc(this->fIgnoreConditionalBuffer)->clear();
		}
		while (true) {
			if ($nc(this->fEntityScanner)->skipChar(u'<', nullptr)) {
				if (this->fDTDHandler != nullptr) {
					$nc(this->fIgnoreConditionalBuffer)->append(u'<');
				}
				if ($nc(this->fEntityScanner)->skipChar(u'!', nullptr)) {
					if ($nc(this->fEntityScanner)->skipChar(u'[', nullptr)) {
						if (this->fDTDHandler != nullptr) {
							$nc(this->fIgnoreConditionalBuffer)->append("!["_s);
						}
						++this->fIncludeSectDepth;
					} else if (this->fDTDHandler != nullptr) {
						$nc(this->fIgnoreConditionalBuffer)->append("!"_s);
					}
				}
			} else if ($nc(this->fEntityScanner)->skipChar(u']', nullptr)) {
				if (this->fDTDHandler != nullptr) {
					$nc(this->fIgnoreConditionalBuffer)->append(u']');
				}
				if ($nc(this->fEntityScanner)->skipChar(u']', nullptr)) {
					if (this->fDTDHandler != nullptr) {
						$nc(this->fIgnoreConditionalBuffer)->append(u']');
					}
					while ($nc(this->fEntityScanner)->skipChar(u']', nullptr)) {
						if (this->fDTDHandler != nullptr) {
							$nc(this->fIgnoreConditionalBuffer)->append(u']');
						}
					}
					if ($nc(this->fEntityScanner)->skipChar(u'>', nullptr)) {
						if (this->fIncludeSectDepth-- == initialDepth) {
							--this->fMarkUpDepth;
							if (this->fDTDHandler != nullptr) {
								$nc(this->fLiteral)->setValues($nc(this->fIgnoreConditionalBuffer)->ch, 0, $nc(this->fIgnoreConditionalBuffer)->length - 2);
								$nc(this->fDTDHandler)->ignoredCharacters(this->fLiteral, nullptr);
								$nc(this->fDTDHandler)->endConditional(nullptr);
							}
							return;
						} else if (this->fDTDHandler != nullptr) {
							$nc(this->fIgnoreConditionalBuffer)->append(u'>');
						}
					}
				}
			} else {
				int32_t c = $nc(this->fEntityScanner)->scanChar(nullptr);
				if (this->fScannerState == XMLDTDScannerImpl::SCANNER_STATE_END_OF_INPUT) {
					reportFatalError("IgnoreSectUnterminated"_s, nullptr);
					return;
				}
				if (this->fDTDHandler != nullptr) {
					$nc(this->fIgnoreConditionalBuffer)->append((char16_t)c);
				}
			}
		}
	} else {
		reportFatalError("MSG_MARKUP_NOT_RECOGNIZED_IN_DTD"_s, nullptr);
	}
}

bool XMLDTDScannerImpl::scanDecls(bool complete) {
	skipSeparator(false, true);
	bool again = true;
	while (again && this->fScannerState == XMLDTDScannerImpl::SCANNER_STATE_MARKUP_DECL) {
		again = complete;
		if ($nc(this->fEntityScanner)->skipChar(u'<', nullptr)) {
			++this->fMarkUpDepth;
			if ($nc(this->fEntityScanner)->skipChar(u'?', nullptr)) {
				$nc(this->fStringBuffer)->clear();
				scanPI(this->fStringBuffer);
				--this->fMarkUpDepth;
			} else if ($nc(this->fEntityScanner)->skipChar(u'!', nullptr)) {
				if ($nc(this->fEntityScanner)->skipChar(u'-', nullptr)) {
					if (!$nc(this->fEntityScanner)->skipChar(u'-', nullptr)) {
						reportFatalError("MSG_MARKUP_NOT_RECOGNIZED_IN_DTD"_s, nullptr);
					} else {
						scanComment();
					}
				} else if ($nc(this->fEntityScanner)->skipString("ELEMENT"_s)) {
					scanElementDecl();
				} else if ($nc(this->fEntityScanner)->skipString("ATTLIST"_s)) {
					scanAttlistDecl();
				} else if ($nc(this->fEntityScanner)->skipString("ENTITY"_s)) {
					scanEntityDecl();
				} else if ($nc(this->fEntityScanner)->skipString("NOTATION"_s)) {
					scanNotationDecl();
				} else {
					bool var$1 = $nc(this->fEntityScanner)->skipChar(u'[', nullptr);
					if (var$1 && !scanningInternalSubset()) {
						scanConditionalSect(this->fPEDepth);
					} else {
						--this->fMarkUpDepth;
						reportFatalError("MSG_MARKUP_NOT_RECOGNIZED_IN_DTD"_s, nullptr);
					}
				}
			} else {
				--this->fMarkUpDepth;
				reportFatalError("MSG_MARKUP_NOT_RECOGNIZED_IN_DTD"_s, nullptr);
			}
		} else if (this->fIncludeSectDepth > 0 && $nc(this->fEntityScanner)->skipChar(u']', nullptr)) {
			bool var$2 = !$nc(this->fEntityScanner)->skipChar(u']', nullptr);
			if (var$2 || !$nc(this->fEntityScanner)->skipChar(u'>', nullptr)) {
				reportFatalError("IncludeSectUnterminated"_s, nullptr);
			}
			if (this->fDTDHandler != nullptr) {
				$nc(this->fDTDHandler)->endConditional(nullptr);
			}
			--this->fIncludeSectDepth;
			--this->fMarkUpDepth;
		} else {
			bool var$4 = scanningInternalSubset();
			if (var$4 && $nc(this->fEntityScanner)->peekChar() == u']') {
				return false;
			} else if ($nc(this->fEntityScanner)->skipSpaces()) {
			} else {
				reportFatalError("MSG_MARKUP_NOT_RECOGNIZED_IN_DTD"_s, nullptr);
			}
		}
		skipSeparator(false, true);
	}
	return this->fScannerState != XMLDTDScannerImpl::SCANNER_STATE_END_OF_INPUT;
}

bool XMLDTDScannerImpl::skipSeparator(bool spaceRequired, bool lookForPERefs) {
	$useLocalCurrentObjectStackCache();
	int32_t depth = this->fPEDepth;
	bool sawSpace = $nc(this->fEntityScanner)->skipSpaces();
	$init($XMLScanner$NameType);
	if (!lookForPERefs || !$nc(this->fEntityScanner)->skipChar(u'%', $XMLScanner$NameType::REFERENCE)) {
		return !spaceRequired || sawSpace || (depth != this->fPEDepth);
	}
	while (true) {
		$var($String, name, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::ENTITY));
		if (name == nullptr) {
			reportFatalError("NameRequiredInPEReference"_s, nullptr);
		} else {
			if (!$nc(this->fEntityScanner)->skipChar(u';', $XMLScanner$NameType::REFERENCE)) {
				reportFatalError("SemicolonRequiredInPEReference"_s, $$new($ObjectArray, {$of(name)}));
			}
		}
		startPE(name, false);
		$nc(this->fEntityScanner)->skipSpaces();
		if (!$nc(this->fEntityScanner)->skipChar(u'%', $XMLScanner$NameType::REFERENCE)) {
			return true;
		}
	}
}

void XMLDTDScannerImpl::pushContentStack(int32_t c) {
	if ($nc(this->fContentStack)->length == this->fContentDepth) {
		$var($ints, newStack, $new($ints, this->fContentDepth * 2));
		$System::arraycopy(this->fContentStack, 0, newStack, 0, this->fContentDepth);
		$set(this, fContentStack, newStack);
	}
	$nc(this->fContentStack)->set(this->fContentDepth++, c);
}

int32_t XMLDTDScannerImpl::popContentStack() {
	return $nc(this->fContentStack)->get(--this->fContentDepth);
}

void XMLDTDScannerImpl::pushPEStack(int32_t depth, bool report) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fPEStack)->length == this->fPEDepth) {
		$var($ints, newIntStack, $new($ints, this->fPEDepth * 2));
		$System::arraycopy(this->fPEStack, 0, newIntStack, 0, this->fPEDepth);
		$set(this, fPEStack, newIntStack);
		$var($booleans, newBooleanStack, $new($booleans, this->fPEDepth * 2));
		$System::arraycopy(this->fPEReport, 0, newBooleanStack, 0, this->fPEDepth);
		$set(this, fPEReport, newBooleanStack);
	}
	$nc(this->fPEReport)->set(this->fPEDepth, report);
	$nc(this->fPEStack)->set(this->fPEDepth++, depth);
}

int32_t XMLDTDScannerImpl::popPEStack() {
	return $nc(this->fPEStack)->get(--this->fPEDepth);
}

bool XMLDTDScannerImpl::peekReportEntity() {
	return $nc(this->fPEReport)->get(this->fPEDepth - 1);
}

void XMLDTDScannerImpl::ensureEnumerationSize(int32_t size) {
	if ($nc(this->fEnumeration)->length == size) {
		$var($StringArray, newEnum, $new($StringArray, size * 2));
		$System::arraycopy(this->fEnumeration, 0, newEnum, 0, size);
		$set(this, fEnumeration, newEnum);
	}
}

void XMLDTDScannerImpl::init() {
	this->fStartDTDCalled = false;
	this->fExtEntityDepth = 0;
	this->fIncludeSectDepth = 0;
	this->fMarkUpDepth = 0;
	this->fPEDepth = 0;
	this->fStandalone = false;
	this->fSeenExternalDTD = false;
	this->fSeenExternalPE = false;
	setScannerState(XMLDTDScannerImpl::SCANNER_STATE_TEXT_DECL);
	$set(this, fLimitAnalyzer, $nc(this->fEntityManager)->fLimitAnalyzer);
	$set(this, fSecurityManager, $nc(this->fEntityManager)->fSecurityManager);
}

$DTDGrammar* XMLDTDScannerImpl::getGrammar() {
	return this->nvGrammarInfo;
}

void clinit$XMLDTDScannerImpl($Class* class$) {
	$init($XMLScanner);
	$assignStatic(XMLDTDScannerImpl::RECOGNIZED_FEATURES, $new($StringArray, {
		$XMLScanner::VALIDATION,
		$XMLScanner::NOTIFY_CHAR_REFS
	}));
	$init($Boolean);
	$assignStatic(XMLDTDScannerImpl::FEATURE_DEFAULTS, $new($BooleanArray, {
		($Boolean*)nullptr,
		$Boolean::FALSE
	}));
	$assignStatic(XMLDTDScannerImpl::RECOGNIZED_PROPERTIES, $new($StringArray, {
		$XMLScanner::SYMBOL_TABLE,
		$XMLScanner::ERROR_REPORTER,
		$XMLScanner::ENTITY_MANAGER
	}));
	$assignStatic(XMLDTDScannerImpl::PROPERTY_DEFAULTS, $new($ObjectArray, {
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr
	}));
}

XMLDTDScannerImpl::XMLDTDScannerImpl() {
}

$Class* XMLDTDScannerImpl::load$($String* name, bool initialize) {
	$loadClass(XMLDTDScannerImpl, name, initialize, &_XMLDTDScannerImpl_ClassInfo_, clinit$XMLDTDScannerImpl, allocate$XMLDTDScannerImpl);
	return class$;
}

$Class* XMLDTDScannerImpl::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com