#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/PropertyManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner$1.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner$NameType.h>
#include <com/sun/org/apache/xerces/internal/impl/io/ASCIIReader.h>
#include <com/sun/org/apache/xerces/internal/impl/io/UCSReader.h>
#include <com/sun/org/apache/xerces/internal/impl/io/UTF8Reader.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/EncodingMap.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>
#include <com/sun/xml/internal/stream/XMLBufferListener.h>
#include <java/io/EOFException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/util/ArrayList.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ALLOW_JAVA_ENCODINGS
#undef ALLOW_JAVA_ENCODINGS_FEATURE
#undef ATTRIBUTENAME
#undef COMMENT
#undef DEBUG_BUFFER
#undef DEBUG_ENCODINGS
#undef DEBUG_SKIP_STRING
#undef DEFAULT_BUFFER_SIZE
#undef DEFAULT_XMLDECL_BUFFER_SIZE
#undef ELEMENTSTART
#undef ENCODING
#undef END_OF_DOCUMENT_ENTITY
#undef ENGLISH
#undef ENTITY_REPLACEMENT_LIMIT
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef GENERAL_ENTITY_SIZE_LIMIT
#undef MAX_NAME_LIMIT
#undef REFERENCE
#undef SEVERITY_FATAL_ERROR
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TOTAL_ENTITY_SIZE_LIMIT
#undef UCS2BE
#undef UCS2LE
#undef UCS4BE
#undef UCS4LE
#undef VALID_NAMES
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XML_DOMAIN

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $PropertyManager = ::com::sun::org::apache::xerces::internal::impl::PropertyManager;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLEntityScanner$1 = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner$1;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLScanner$NameType = ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType;
using $ASCIIReader = ::com::sun::org::apache::xerces::internal::impl::io::ASCIIReader;
using $UCSReader = ::com::sun::org::apache::xerces::internal::impl::io::UCSReader;
using $UTF8Reader = ::com::sun::org::apache::xerces::internal::impl::io::UTF8Reader;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $EncodingMap = ::com::sun::org::apache::xerces::internal::util::EncodingMap;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLStringBuffer = ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer;
using $XMLLimitAnalyzer = ::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityManager$Limit = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $Entity$ScannedEntity = ::com::sun::xml::internal::stream::Entity$ScannedEntity;
using $XMLBufferListener = ::com::sun::xml::internal::stream::XMLBufferListener;
using $EOFException = ::java::io::EOFException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLEntityScanner_FieldInfo_[] = {
	{"fCurrentEntity", "Lcom/sun/xml/internal/stream/Entity$ScannedEntity;", nullptr, $PROTECTED, $field(XMLEntityScanner, fCurrentEntity)},
	{"fBufferSize", "I", nullptr, $PROTECTED, $field(XMLEntityScanner, fBufferSize)},
	{"fEntityManager", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PROTECTED, $field(XMLEntityScanner, fEntityManager)},
	{"fSecurityManager", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager;", nullptr, $PROTECTED, $field(XMLEntityScanner, fSecurityManager)},
	{"fLimitAnalyzer", "Lcom/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer;", nullptr, $PROTECTED, $field(XMLEntityScanner, fLimitAnalyzer)},
	{"DEBUG_ENCODINGS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLEntityScanner, DEBUG_ENCODINGS)},
	{"listeners", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/xml/internal/stream/XMLBufferListener;>;", $PRIVATE, $field(XMLEntityScanner, listeners)},
	{"VALID_NAMES", "[Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLEntityScanner, VALID_NAMES)},
	{"DEBUG_BUFFER", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLEntityScanner, DEBUG_BUFFER)},
	{"DEBUG_SKIP_STRING", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLEntityScanner, DEBUG_SKIP_STRING)},
	{"END_OF_DOCUMENT_ENTITY", "Ljava/io/EOFException;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLEntityScanner, END_OF_DOCUMENT_ENTITY)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XMLEntityScanner, fSymbolTable)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(XMLEntityScanner, fErrorReporter)},
	{"whiteSpaceLookup", "[I", nullptr, 0, $field(XMLEntityScanner, whiteSpaceLookup)},
	{"whiteSpaceLen", "I", nullptr, 0, $field(XMLEntityScanner, whiteSpaceLen)},
	{"whiteSpaceInfoNeeded", "Z", nullptr, 0, $field(XMLEntityScanner, whiteSpaceInfoNeeded)},
	{"fAllowJavaEncodings", "Z", nullptr, $PROTECTED, $field(XMLEntityScanner, fAllowJavaEncodings)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityScanner, SYMBOL_TABLE)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityScanner, ERROR_REPORTER)},
	{"ALLOW_JAVA_ENCODINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityScanner, ALLOW_JAVA_ENCODINGS)},
	{"fPropertyManager", "Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;", nullptr, $PROTECTED, $field(XMLEntityScanner, fPropertyManager)},
	{"isExternal", "Z", nullptr, 0, $field(XMLEntityScanner, isExternal$)},
	{"xmlVersionSetExplicitly", "Z", nullptr, $PROTECTED, $field(XMLEntityScanner, xmlVersionSetExplicitly)},
	{"detectingVersion", "Z", nullptr, 0, $field(XMLEntityScanner, detectingVersion)},
	{}
};

$MethodInfo _XMLEntityScanner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLEntityScanner, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;)V", nullptr, $PUBLIC, $method(XMLEntityScanner, init$, void, $PropertyManager*, $XMLEntityManager*)},
	{"arrangeCapacity", "(I)Z", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, arrangeCapacity, bool, int32_t), "java.io.IOException"},
	{"arrangeCapacity", "(IZ)Z", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, arrangeCapacity, bool, int32_t, bool), "java.io.IOException"},
	{"checkBeforeLoad", "(Lcom/sun/xml/internal/stream/Entity$ScannedEntity;II)I", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, checkBeforeLoad, int32_t, $Entity$ScannedEntity*, int32_t, int32_t), "java.io.IOException"},
	{"checkEntityLimit", "(Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;Lcom/sun/xml/internal/stream/Entity$ScannedEntity;II)V", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, checkEntityLimit, void, $XMLScanner$NameType*, $Entity$ScannedEntity*, int32_t, int32_t)},
	{"checkLimit", "(Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;Lcom/sun/xml/internal/stream/Entity$ScannedEntity;II)V", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, checkLimit, void, $XMLSecurityManager$Limit*, $Entity$ScannedEntity*, int32_t, int32_t)},
	{"checkNodeCount", "(Lcom/sun/xml/internal/stream/Entity$ScannedEntity;)V", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, checkNodeCount, void, $Entity$ScannedEntity*)},
	{"createReader", "(Ljava/io/InputStream;Ljava/lang/String;Ljava/lang/Boolean;)Ljava/io/Reader;", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, createReader, $Reader*, $InputStream*, $String*, $Boolean*), "java.io.IOException"},
	{"getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLEntityScanner, getBaseSystemId, $String*)},
	{"getChar", "(I)I", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, getChar, int32_t, int32_t), "java.io.IOException"},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLEntityScanner, getCharacterOffset, int32_t)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLEntityScanner, getColumnNumber, int32_t)},
	{"getCurrentEntity", "()Lcom/sun/xml/internal/stream/Entity$ScannedEntity;", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, getCurrentEntity, $Entity$ScannedEntity*)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLEntityScanner, getEncoding, $String*)},
	{"getEncodingName", "([BI)[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, getEncodingName, $ObjectArray*, $bytes*, int32_t)},
	{"getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLEntityScanner, getExpandedSystemId, $String*)},
	{"getLineNumber", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLEntityScanner, getLineNumber, int32_t)},
	{"getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLEntityScanner, getLiteralSystemId, $String*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLEntityScanner, getPublicId, $String*)},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, getVersion, $String*)},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLEntityScanner, getXMLVersion, $String*)},
	{"invokeListeners", "(I)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, invokeListeners, void, int32_t)},
	{"isExternal", "()Z", nullptr, $PUBLIC | $FINAL, $method(XMLEntityScanner, isExternal, bool)},
	{"isSpace", "(C)Z", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, isSpace, bool, char16_t)},
	{"load", "(IZZ)Z", nullptr, $FINAL, $method(XMLEntityScanner, load, bool, int32_t, bool, bool), "java.io.IOException"},
	{"peekChar", "()I", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, peekChar, int32_t), "java.io.IOException"},
	{"print", "()V", nullptr, $FINAL, $method(XMLEntityScanner, print, void)},
	{"registerListener", "(Lcom/sun/xml/internal/stream/XMLBufferListener;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, registerListener, void, $XMLBufferListener*)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, reset, void, $PropertyManager*)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;)V", nullptr, $PUBLIC | $FINAL, $method(XMLEntityScanner, reset, void, $SymbolTable*, $XMLEntityManager*, $XMLErrorReporter*)},
	{"resetCommon", "()V", nullptr, $PRIVATE, $method(XMLEntityScanner, resetCommon, void)},
	{"scanChar", "(Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;)I", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, scanChar, int32_t, $XMLScanner$NameType*), "java.io.IOException"},
	{"scanContent", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)I", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, scanContent, int32_t, $XMLString*), "java.io.IOException"},
	{"scanData", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;I)Z", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, scanData, bool, $String*, $XMLStringBuffer*, int32_t), "java.io.IOException"},
	{"scanLiteral", "(ILcom/sun/org/apache/xerces/internal/xni/XMLString;Z)I", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, scanLiteral, int32_t, int32_t, $XMLString*, bool), "java.io.IOException"},
	{"scanName", "(Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, scanName, $String*, $XMLScanner$NameType*), "java.io.IOException"},
	{"scanNmtoken", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, scanNmtoken, $String*), "java.io.IOException"},
	{"scanQName", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;)Z", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, scanQName, bool, $QName*, $XMLScanner$NameType*), "java.io.IOException"},
	{"setBaseSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, setBaseSystemId, void, $String*)},
	{"setBufferSize", "(I)V", nullptr, $PUBLIC | $FINAL, $method(XMLEntityScanner, setBufferSize, void, int32_t)},
	{"setColumnNumber", "(I)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, setColumnNumber, void, int32_t)},
	{"setCurrentEntity", "(Lcom/sun/xml/internal/stream/Entity$ScannedEntity;)V", nullptr, $PUBLIC | $FINAL, $method(XMLEntityScanner, setCurrentEntity, void, $Entity$ScannedEntity*)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(XMLEntityScanner, setEncoding, void, $String*), "java.io.IOException"},
	{"setExpandedSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, setExpandedSystemId, void, $String*)},
	{"setLineNumber", "(I)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, setLineNumber, void, int32_t)},
	{"setLiteralSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, setLiteralSystemId, void, $String*)},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, setPublicId, void, $String*)},
	{"setVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner, setVersion, void, $String*)},
	{"setXMLVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(XMLEntityScanner, setXMLVersion, void, $String*)},
	{"skipChar", "(ILcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;)Z", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, skipChar, bool, int32_t, $XMLScanner$NameType*), "java.io.IOException"},
	{"skipDeclSpaces", "()Z", nullptr, $PROTECTED | $FINAL, $method(XMLEntityScanner, skipDeclSpaces, bool), "java.io.IOException"},
	{"skipSpaces", "()Z", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, skipSpaces, bool), "java.io.IOException"},
	{"skipString", "(Ljava/lang/String;)Z", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, skipString, bool, $String*), "java.io.IOException"},
	{"skipString", "([C)Z", nullptr, $PROTECTED, $virtualMethod(XMLEntityScanner, skipString, bool, $chars*), "java.io.IOException"},
	{"storeWhiteSpace", "(I)V", nullptr, $PRIVATE, $method(XMLEntityScanner, storeWhiteSpace, void, int32_t)},
	{}
};

$InnerClassInfo _XMLEntityScanner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLEntityScanner$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMLEntityScanner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLEntityScanner",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.XMLLocator",
	_XMLEntityScanner_FieldInfo_,
	_XMLEntityScanner_MethodInfo_,
	nullptr,
	nullptr,
	_XMLEntityScanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLEntityScanner$1"
};

$Object* allocate$XMLEntityScanner($Class* clazz) {
	return $of($alloc(XMLEntityScanner));
}

$booleans* XMLEntityScanner::VALID_NAMES = nullptr;
$EOFException* XMLEntityScanner::END_OF_DOCUMENT_ENTITY = nullptr;
$String* XMLEntityScanner::SYMBOL_TABLE = nullptr;
$String* XMLEntityScanner::ERROR_REPORTER = nullptr;
$String* XMLEntityScanner::ALLOW_JAVA_ENCODINGS = nullptr;

void XMLEntityScanner::init$() {
	$set(this, fCurrentEntity, nullptr);
	this->fBufferSize = $XMLEntityManager::DEFAULT_BUFFER_SIZE;
	$set(this, fSecurityManager, nullptr);
	$set(this, fLimitAnalyzer, nullptr);
	$set(this, listeners, $new($ArrayList));
	$set(this, fSymbolTable, nullptr);
	$set(this, fErrorReporter, nullptr);
	$set(this, whiteSpaceLookup, $new($ints, 100));
	this->whiteSpaceLen = 0;
	this->whiteSpaceInfoNeeded = true;
	$set(this, fPropertyManager, nullptr);
	this->isExternal$ = false;
	this->xmlVersionSetExplicitly = false;
	this->detectingVersion = false;
}

void XMLEntityScanner::init$($PropertyManager* propertyManager, $XMLEntityManager* entityManager) {
	$set(this, fCurrentEntity, nullptr);
	this->fBufferSize = $XMLEntityManager::DEFAULT_BUFFER_SIZE;
	$set(this, fSecurityManager, nullptr);
	$set(this, fLimitAnalyzer, nullptr);
	$set(this, listeners, $new($ArrayList));
	$set(this, fSymbolTable, nullptr);
	$set(this, fErrorReporter, nullptr);
	$set(this, whiteSpaceLookup, $new($ints, 100));
	this->whiteSpaceLen = 0;
	this->whiteSpaceInfoNeeded = true;
	$set(this, fPropertyManager, nullptr);
	this->isExternal$ = false;
	this->xmlVersionSetExplicitly = false;
	this->detectingVersion = false;
	$set(this, fEntityManager, entityManager);
	reset(propertyManager);
}

void XMLEntityScanner::setBufferSize(int32_t size) {
	this->fBufferSize = size;
}

void XMLEntityScanner::reset($PropertyManager* propertyManager) {
	$set(this, fSymbolTable, $cast($SymbolTable, $nc(propertyManager)->getProperty(XMLEntityScanner::SYMBOL_TABLE)));
	$set(this, fErrorReporter, $cast($XMLErrorReporter, propertyManager->getProperty(XMLEntityScanner::ERROR_REPORTER)));
	resetCommon();
}

void XMLEntityScanner::reset($XMLComponentManager* componentManager) {
	this->fAllowJavaEncodings = $nc(componentManager)->getFeature(XMLEntityScanner::ALLOW_JAVA_ENCODINGS, false);
	$set(this, fSymbolTable, $cast($SymbolTable, componentManager->getProperty(XMLEntityScanner::SYMBOL_TABLE)));
	$set(this, fErrorReporter, $cast($XMLErrorReporter, componentManager->getProperty(XMLEntityScanner::ERROR_REPORTER)));
	resetCommon();
}

void XMLEntityScanner::reset($SymbolTable* symbolTable, $XMLEntityManager* entityManager, $XMLErrorReporter* reporter) {
	$set(this, fCurrentEntity, nullptr);
	$set(this, fSymbolTable, symbolTable);
	$set(this, fEntityManager, entityManager);
	$set(this, fErrorReporter, reporter);
	$set(this, fLimitAnalyzer, $nc(this->fEntityManager)->fLimitAnalyzer);
	$set(this, fSecurityManager, $nc(this->fEntityManager)->fSecurityManager);
}

void XMLEntityScanner::resetCommon() {
	$set(this, fCurrentEntity, nullptr);
	this->whiteSpaceLen = 0;
	this->whiteSpaceInfoNeeded = true;
	$nc(this->listeners)->clear();
	$set(this, fLimitAnalyzer, $nc(this->fEntityManager)->fLimitAnalyzer);
	$set(this, fSecurityManager, $nc(this->fEntityManager)->fSecurityManager);
}

$String* XMLEntityScanner::getXMLVersion() {
	if (this->fCurrentEntity != nullptr) {
		return $nc(this->fCurrentEntity)->xmlVersion;
	}
	return nullptr;
}

void XMLEntityScanner::setXMLVersion($String* xmlVersion) {
	this->xmlVersionSetExplicitly = true;
	$set($nc(this->fCurrentEntity), xmlVersion, xmlVersion);
}

void XMLEntityScanner::setCurrentEntity($Entity$ScannedEntity* scannedEntity) {
	$set(this, fCurrentEntity, scannedEntity);
	if (this->fCurrentEntity != nullptr) {
		this->isExternal$ = $nc(this->fCurrentEntity)->isExternal();
	}
}

$Entity$ScannedEntity* XMLEntityScanner::getCurrentEntity() {
	return this->fCurrentEntity;
}

$String* XMLEntityScanner::getBaseSystemId() {
	return (this->fCurrentEntity != nullptr && $nc(this->fCurrentEntity)->entityLocation != nullptr) ? $nc($nc(this->fCurrentEntity)->entityLocation)->getExpandedSystemId() : ($String*)nullptr;
}

void XMLEntityScanner::setBaseSystemId($String* systemId) {
}

int32_t XMLEntityScanner::getLineNumber() {
	return this->fCurrentEntity != nullptr ? $nc(this->fCurrentEntity)->lineNumber : -1;
}

void XMLEntityScanner::setLineNumber(int32_t line) {
}

int32_t XMLEntityScanner::getColumnNumber() {
	return this->fCurrentEntity != nullptr ? $nc(this->fCurrentEntity)->columnNumber : -1;
}

void XMLEntityScanner::setColumnNumber(int32_t col) {
}

int32_t XMLEntityScanner::getCharacterOffset() {
	return this->fCurrentEntity != nullptr ? $nc(this->fCurrentEntity)->fTotalCountTillLastLoad + $nc(this->fCurrentEntity)->position : -1;
}

$String* XMLEntityScanner::getExpandedSystemId() {
	return (this->fCurrentEntity != nullptr && $nc(this->fCurrentEntity)->entityLocation != nullptr) ? $nc($nc(this->fCurrentEntity)->entityLocation)->getExpandedSystemId() : ($String*)nullptr;
}

void XMLEntityScanner::setExpandedSystemId($String* systemId) {
}

$String* XMLEntityScanner::getLiteralSystemId() {
	return (this->fCurrentEntity != nullptr && $nc(this->fCurrentEntity)->entityLocation != nullptr) ? $nc($nc(this->fCurrentEntity)->entityLocation)->getLiteralSystemId() : ($String*)nullptr;
}

void XMLEntityScanner::setLiteralSystemId($String* systemId) {
}

$String* XMLEntityScanner::getPublicId() {
	return (this->fCurrentEntity != nullptr && $nc(this->fCurrentEntity)->entityLocation != nullptr) ? $nc($nc(this->fCurrentEntity)->entityLocation)->getPublicId() : ($String*)nullptr;
}

void XMLEntityScanner::setPublicId($String* publicId) {
}

void XMLEntityScanner::setVersion($String* version) {
	$set($nc(this->fCurrentEntity), version, version);
}

$String* XMLEntityScanner::getVersion() {
	if (this->fCurrentEntity != nullptr) {
		return $nc(this->fCurrentEntity)->version;
	}
	return nullptr;
}

$String* XMLEntityScanner::getEncoding() {
	if (this->fCurrentEntity != nullptr) {
		return $nc(this->fCurrentEntity)->encoding;
	}
	return nullptr;
}

void XMLEntityScanner::setEncoding($String* encoding) {
	if ($nc(this->fCurrentEntity)->stream != nullptr) {
		if ($nc(this->fCurrentEntity)->encoding == nullptr || !$nc($nc(this->fCurrentEntity)->encoding)->equals(encoding)) {
			if ($nc(this->fCurrentEntity)->encoding != nullptr && $nc($nc(this->fCurrentEntity)->encoding)->startsWith("UTF-16"_s)) {
				$init($Locale);
				$var($String, ENCODING, $nc(encoding)->toUpperCase($Locale::ENGLISH));
				if (ENCODING->equals("UTF-16"_s)) {
					return;
				}
				if (ENCODING->equals("ISO-10646-UCS-4"_s)) {
					if ($nc($nc(this->fCurrentEntity)->encoding)->equals("UTF-16BE"_s)) {
						$set($nc(this->fCurrentEntity), reader, $new($UCSReader, $nc(this->fCurrentEntity)->stream, $UCSReader::UCS4BE));
					} else {
						$set($nc(this->fCurrentEntity), reader, $new($UCSReader, $nc(this->fCurrentEntity)->stream, $UCSReader::UCS4LE));
					}
					return;
				}
				if (ENCODING->equals("ISO-10646-UCS-2"_s)) {
					if ($nc($nc(this->fCurrentEntity)->encoding)->equals("UTF-16BE"_s)) {
						$set($nc(this->fCurrentEntity), reader, $new($UCSReader, $nc(this->fCurrentEntity)->stream, $UCSReader::UCS2BE));
					} else {
						$set($nc(this->fCurrentEntity), reader, $new($UCSReader, $nc(this->fCurrentEntity)->stream, $UCSReader::UCS2LE));
					}
					return;
				}
			}
			$set($nc(this->fCurrentEntity), reader, createReader($nc(this->fCurrentEntity)->stream, encoding, nullptr));
			$set($nc(this->fCurrentEntity), encoding, encoding);
		} else {
		}
	}
}

bool XMLEntityScanner::isExternal() {
	return $nc(this->fCurrentEntity)->isExternal();
}

int32_t XMLEntityScanner::getChar(int32_t relative) {
	if (arrangeCapacity(relative + 1, false)) {
		return $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position + relative);
	} else {
		return -1;
	}
}

int32_t XMLEntityScanner::peekChar() {
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	}
	int32_t c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
	if (this->isExternal$) {
		return c != u'\r' ? c : (int32_t)u'\n';
	} else {
		return c;
	}
}

int32_t XMLEntityScanner::scanChar($XMLScanner$NameType* nt) {
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	}
	int32_t offset = $nc(this->fCurrentEntity)->position;
	int32_t c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
	if (c == u'\n' || (c == u'\r' && this->isExternal$)) {
		++$nc(this->fCurrentEntity)->lineNumber;
		$nc(this->fCurrentEntity)->columnNumber = 1;
		if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
			invokeListeners(1);
			$nc($nc(this->fCurrentEntity)->ch)->set(0, (char16_t)c);
			load(1, false, false);
			offset = 0;
		}
		if (c == u'\r' && this->isExternal$) {
			if ($nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++) != u'\n') {
				--$nc(this->fCurrentEntity)->position;
			}
			c = u'\n';
		}
	}
	++$nc(this->fCurrentEntity)->columnNumber;
	if (!this->detectingVersion) {
		checkEntityLimit(nt, this->fCurrentEntity, offset, $nc(this->fCurrentEntity)->position - offset);
	}
	return c;
}

$String* XMLEntityScanner::scanNmtoken() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	}
	int32_t offset = $nc(this->fCurrentEntity)->position;
	bool vc = false;
	char16_t c = 0;
	while (true) {
		c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
		if (c < 127) {
			vc = $nc(XMLEntityScanner::VALID_NAMES)->get(c);
		} else {
			vc = $XMLChar::isName(c);
		}
		if (!vc) {
			break;
		}
		int32_t var$0 = ++$nc(this->fCurrentEntity)->position;
		if (var$0 == $nc(this->fCurrentEntity)->count) {
			int32_t length = $nc(this->fCurrentEntity)->position - offset;
			invokeListeners(length);
			if (length == $nc(this->fCurrentEntity)->fBufferSize) {
				$var($chars, tmp, $new($chars, $nc(this->fCurrentEntity)->fBufferSize * 2));
				$System::arraycopy($nc(this->fCurrentEntity)->ch, offset, tmp, 0, length);
				$set($nc(this->fCurrentEntity), ch, tmp);
				$nc(this->fCurrentEntity)->fBufferSize *= 2;
			} else {
				$System::arraycopy($nc(this->fCurrentEntity)->ch, offset, $nc(this->fCurrentEntity)->ch, 0, length);
			}
			offset = 0;
			if (load(length, false, false)) {
				break;
			}
		}
	}
	int32_t length = $nc(this->fCurrentEntity)->position - offset;
	$nc(this->fCurrentEntity)->columnNumber += length;
	$var($String, symbol, nullptr);
	if (length > 0) {
		$assign(symbol, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, offset, length));
	}
	return symbol;
}

$String* XMLEntityScanner::scanName($XMLScanner$NameType* nt) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	}
	int32_t offset = $nc(this->fCurrentEntity)->position;
	int32_t length = 0;
	if ($XMLChar::isNameStart($nc($nc(this->fCurrentEntity)->ch)->get(offset))) {
		int32_t var$0 = ++$nc(this->fCurrentEntity)->position;
		if (var$0 == $nc(this->fCurrentEntity)->count) {
			invokeListeners(1);
			$nc($nc(this->fCurrentEntity)->ch)->set(0, $nc($nc(this->fCurrentEntity)->ch)->get(offset));
			offset = 0;
			if (load(1, false, false)) {
				++$nc(this->fCurrentEntity)->columnNumber;
				$var($String, symbol, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, 0, 1));
				return symbol;
			}
		}
		bool vc = false;
		while (true) {
			char16_t c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
			if (c < 127) {
				vc = $nc(XMLEntityScanner::VALID_NAMES)->get(c);
			} else {
				vc = $XMLChar::isName(c);
			}
			if (!vc) {
				break;
			}
			if ((length = checkBeforeLoad(this->fCurrentEntity, offset, offset)) > 0) {
				offset = 0;
				if (load(length, false, false)) {
					break;
				}
			}
		}
	}
	length = $nc(this->fCurrentEntity)->position - offset;
	$nc(this->fCurrentEntity)->columnNumber += length;
	$var($String, symbol, nullptr);
	if (length > 0) {
		$init($XMLSecurityManager$Limit);
		checkLimit($XMLSecurityManager$Limit::MAX_NAME_LIMIT, this->fCurrentEntity, offset, length);
		checkEntityLimit(nt, this->fCurrentEntity, offset, length);
		$assign(symbol, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, offset, length));
	} else {
		$assign(symbol, nullptr);
	}
	return symbol;
}

bool XMLEntityScanner::scanQName($QName* qname, $XMLScanner$NameType* nt) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	}
	int32_t offset = $nc(this->fCurrentEntity)->position;
	if ($XMLChar::isNameStart($nc($nc(this->fCurrentEntity)->ch)->get(offset))) {
		int32_t var$0 = ++$nc(this->fCurrentEntity)->position;
		if (var$0 == $nc(this->fCurrentEntity)->count) {
			invokeListeners(1);
			$nc($nc(this->fCurrentEntity)->ch)->set(0, $nc($nc(this->fCurrentEntity)->ch)->get(offset));
			offset = 0;
			if (load(1, false, false)) {
				++$nc(this->fCurrentEntity)->columnNumber;
				$var($String, name, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, 0, 1));
				$nc(qname)->setValues(nullptr, name, name, nullptr);
				checkEntityLimit(nt, this->fCurrentEntity, 0, 1);
				return true;
			}
		}
		int32_t index = -1;
		bool vc = false;
		int32_t length = 0;
		while (true) {
			char16_t c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
			if (c < 127) {
				vc = $nc(XMLEntityScanner::VALID_NAMES)->get(c);
			} else {
				vc = $XMLChar::isName(c);
			}
			if (!vc) {
				break;
			}
			if (c == u':') {
				if (index != -1) {
					break;
				}
				index = $nc(this->fCurrentEntity)->position;
				$init($XMLSecurityManager$Limit);
				checkLimit($XMLSecurityManager$Limit::MAX_NAME_LIMIT, this->fCurrentEntity, offset, index - offset);
			}
			if ((length = checkBeforeLoad(this->fCurrentEntity, offset, index)) > 0) {
				if (index != -1) {
					index = index - offset;
				}
				offset = 0;
				if (load(length, false, false)) {
					break;
				}
			}
		}
		length = $nc(this->fCurrentEntity)->position - offset;
		$nc(this->fCurrentEntity)->columnNumber += length;
		if (length > 0) {
			$var($String, prefix, nullptr);
			$var($String, localpart, nullptr);
			$var($String, rawname, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, offset, length));
			if (index != -1) {
				int32_t prefixLength = index - offset;
				$init($XMLSecurityManager$Limit);
				checkLimit($XMLSecurityManager$Limit::MAX_NAME_LIMIT, this->fCurrentEntity, offset, prefixLength);
				$assign(prefix, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, offset, prefixLength));
				int32_t len = length - prefixLength - 1;
				int32_t startLocal = index + 1;
				if (!$XMLChar::isNCNameStart($nc($nc(this->fCurrentEntity)->ch)->get(startLocal))) {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "IllegalQName"_s, $$new($ObjectArray, {$of(rawname)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				}
				checkLimit($XMLSecurityManager$Limit::MAX_NAME_LIMIT, this->fCurrentEntity, index + 1, len);
				$assign(localpart, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, index + 1, len));
			} else {
				$assign(localpart, rawname);
				$init($XMLSecurityManager$Limit);
				checkLimit($XMLSecurityManager$Limit::MAX_NAME_LIMIT, this->fCurrentEntity, offset, length);
			}
			$nc(qname)->setValues(prefix, localpart, rawname, nullptr);
			checkEntityLimit(nt, this->fCurrentEntity, offset, length);
			return true;
		}
	}
	return false;
}

int32_t XMLEntityScanner::checkBeforeLoad($Entity$ScannedEntity* entity, int32_t offset, int32_t nameOffset) {
	int32_t length = 0;
	int32_t var$0 = ++$nc(entity)->position;
	if (var$0 == entity->count) {
		length = entity->position - offset;
		int32_t nameLength = length;
		if (nameOffset != -1) {
			nameOffset = nameOffset - offset;
			nameLength = length - nameOffset;
		} else {
			nameOffset = offset;
		}
		$init($XMLSecurityManager$Limit);
		checkLimit($XMLSecurityManager$Limit::MAX_NAME_LIMIT, entity, nameOffset, nameLength);
		invokeListeners(length);
		if (length == $nc(entity->ch)->length) {
			$var($chars, tmp, $new($chars, entity->fBufferSize * 2));
			$System::arraycopy(entity->ch, offset, tmp, 0, length);
			$set(entity, ch, tmp);
			entity->fBufferSize *= 2;
		} else {
			$System::arraycopy(entity->ch, offset, entity->ch, 0, length);
		}
	}
	return length;
}

void XMLEntityScanner::checkEntityLimit($XMLScanner$NameType* nt, $Entity$ScannedEntity* entity, int32_t offset, int32_t length) {
	if (entity == nullptr || !$nc(entity)->isGE) {
		return;
	}
	$init($XMLScanner$NameType);
	if (nt != $XMLScanner$NameType::REFERENCE) {
		$init($XMLSecurityManager$Limit);
		checkLimit($XMLSecurityManager$Limit::GENERAL_ENTITY_SIZE_LIMIT, entity, offset, length);
	}
	if (nt == $XMLScanner$NameType::ELEMENTSTART || nt == $XMLScanner$NameType::ATTRIBUTENAME) {
		checkNodeCount(entity);
	}
}

void XMLEntityScanner::checkNodeCount($Entity$ScannedEntity* entity) {
	if (entity != nullptr && entity->isGE) {
		$init($XMLSecurityManager$Limit);
		checkLimit($XMLSecurityManager$Limit::ENTITY_REPLACEMENT_LIMIT, entity, 0, 1);
	}
}

void XMLEntityScanner::checkLimit($XMLSecurityManager$Limit* limit, $Entity$ScannedEntity* entity, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fLimitAnalyzer)->addValue(limit, $nc(entity)->name, length);
	if ($nc(this->fSecurityManager)->isOverLimit(limit, this->fLimitAnalyzer)) {
		$nc(this->fSecurityManager)->debugPrint(this->fLimitAnalyzer);
		$init($XMLSecurityManager$Limit);
		$var($ObjectArray, e, (limit == $XMLSecurityManager$Limit::ENTITY_REPLACEMENT_LIMIT) ? $new($ObjectArray, {
			$($of($Integer::valueOf($nc(this->fLimitAnalyzer)->getValue(limit)))),
			$($of($Integer::valueOf($nc(this->fSecurityManager)->getLimit(limit)))),
			$($of($nc(this->fSecurityManager)->getStateLiteral(limit)))
		}) : $new($ObjectArray, {
			$of($nc(entity)->name),
			$($of($Integer::valueOf($nc(this->fLimitAnalyzer)->getValue(limit)))),
			$($of($Integer::valueOf($nc(this->fSecurityManager)->getLimit(limit)))),
			$($of($nc(this->fSecurityManager)->getStateLiteral(limit)))
		}));
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, $($nc(limit)->key()), e, $XMLErrorReporter::SEVERITY_FATAL_ERROR);
	}
	$init($XMLSecurityManager$Limit);
	if ($nc(this->fSecurityManager)->isOverLimit($XMLSecurityManager$Limit::TOTAL_ENTITY_SIZE_LIMIT, this->fLimitAnalyzer)) {
		$nc(this->fSecurityManager)->debugPrint(this->fLimitAnalyzer);
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "TotalEntitySizeLimit"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf($nc(this->fLimitAnalyzer)->getTotalValue($XMLSecurityManager$Limit::TOTAL_ENTITY_SIZE_LIMIT)))),
			$($of($Integer::valueOf($nc(this->fSecurityManager)->getLimit($XMLSecurityManager$Limit::TOTAL_ENTITY_SIZE_LIMIT)))),
			$($of($nc(this->fSecurityManager)->getStateLiteral($XMLSecurityManager$Limit::TOTAL_ENTITY_SIZE_LIMIT)))
		}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
	}
}

int32_t XMLEntityScanner::scanContent($XMLString* content) {
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	} else if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count - 1) {
		invokeListeners(1);
		$nc($nc(this->fCurrentEntity)->ch)->set(0, $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->count - 1));
		load(1, false, false);
		$nc(this->fCurrentEntity)->position = 0;
	}
	int32_t offset = $nc(this->fCurrentEntity)->position;
	int32_t c = $nc($nc(this->fCurrentEntity)->ch)->get(offset);
	int32_t newlines = 0;
	bool counted = false;
	if (c == u'\n' || (c == u'\r' && this->isExternal$)) {
		do {
			c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
			if (c == u'\r' && this->isExternal$) {
				++newlines;
				++$nc(this->fCurrentEntity)->lineNumber;
				$nc(this->fCurrentEntity)->columnNumber = 1;
				if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
					checkEntityLimit(nullptr, this->fCurrentEntity, offset, newlines);
					offset = 0;
					$nc(this->fCurrentEntity)->position = newlines;
					if (load(newlines, false, true)) {
						counted = true;
						break;
					}
				}
				if ($nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position) == u'\n') {
					++$nc(this->fCurrentEntity)->position;
					++offset;
				} else {
					++newlines;
				}
			} else if (c == u'\n') {
				++newlines;
				++$nc(this->fCurrentEntity)->lineNumber;
				$nc(this->fCurrentEntity)->columnNumber = 1;
				if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
					checkEntityLimit(nullptr, this->fCurrentEntity, offset, newlines);
					offset = 0;
					$nc(this->fCurrentEntity)->position = newlines;
					if (load(newlines, false, true)) {
						counted = true;
						break;
					}
				}
			} else {
				--$nc(this->fCurrentEntity)->position;
				break;
			}
		} while ($nc(this->fCurrentEntity)->position < $nc(this->fCurrentEntity)->count - 1);
		for (int32_t i = offset; i < $nc(this->fCurrentEntity)->position; ++i) {
			$nc($nc(this->fCurrentEntity)->ch)->set(i, u'\n');
		}
		int32_t length = $nc(this->fCurrentEntity)->position - offset;
		if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count - 1) {
			checkEntityLimit(nullptr, this->fCurrentEntity, offset, length);
			$nc(content)->setValues($nc(this->fCurrentEntity)->ch, offset, length);
			return -1;
		}
	}
	while ($nc(this->fCurrentEntity)->position < $nc(this->fCurrentEntity)->count) {
		c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
		if (!$XMLChar::isContent(c)) {
			--$nc(this->fCurrentEntity)->position;
			break;
		}
	}
	int32_t length = $nc(this->fCurrentEntity)->position - offset;
	$nc(this->fCurrentEntity)->columnNumber += length - newlines;
	if (!counted) {
		checkEntityLimit(nullptr, this->fCurrentEntity, offset, length);
	}
	$nc(content)->setValues($nc(this->fCurrentEntity)->ch, offset, length);
	if ($nc(this->fCurrentEntity)->position != $nc(this->fCurrentEntity)->count) {
		c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
		if (c == u'\r' && this->isExternal$) {
			c = u'\n';
		}
	} else {
		c = -1;
	}
	return c;
}

int32_t XMLEntityScanner::scanLiteral(int32_t quote, $XMLString* content, bool isNSURI) {
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	} else if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count - 1) {
		invokeListeners(1);
		$nc($nc(this->fCurrentEntity)->ch)->set(0, $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->count - 1));
		load(1, false, false);
		$nc(this->fCurrentEntity)->position = 0;
	}
	int32_t offset = $nc(this->fCurrentEntity)->position;
	int32_t c = $nc($nc(this->fCurrentEntity)->ch)->get(offset);
	int32_t newlines = 0;
	if (this->whiteSpaceInfoNeeded) {
		this->whiteSpaceLen = 0;
	}
	if (c == u'\n' || (c == u'\r' && this->isExternal$)) {
		do {
			c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
			if (c == u'\r' && this->isExternal$) {
				++newlines;
				++$nc(this->fCurrentEntity)->lineNumber;
				$nc(this->fCurrentEntity)->columnNumber = 1;
				if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
					offset = 0;
					$nc(this->fCurrentEntity)->position = newlines;
					if (load(newlines, false, true)) {
						break;
					}
				}
				if ($nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position) == u'\n') {
					++$nc(this->fCurrentEntity)->position;
					++offset;
				} else {
					++newlines;
				}
			} else if (c == u'\n') {
				++newlines;
				++$nc(this->fCurrentEntity)->lineNumber;
				$nc(this->fCurrentEntity)->columnNumber = 1;
				if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
					offset = 0;
					$nc(this->fCurrentEntity)->position = newlines;
					if (load(newlines, false, true)) {
						break;
					}
				}
			} else {
				--$nc(this->fCurrentEntity)->position;
				break;
			}
		} while ($nc(this->fCurrentEntity)->position < $nc(this->fCurrentEntity)->count - 1);
		int32_t i = 0;
		for (i = offset; i < $nc(this->fCurrentEntity)->position; ++i) {
			$nc($nc(this->fCurrentEntity)->ch)->set(i, u'\n');
			storeWhiteSpace(i);
		}
		int32_t length = $nc(this->fCurrentEntity)->position - offset;
		if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count - 1) {
			$nc(content)->setValues($nc(this->fCurrentEntity)->ch, offset, length);
			return -1;
		}
	}
	for (; $nc(this->fCurrentEntity)->position < $nc(this->fCurrentEntity)->count; ++$nc(this->fCurrentEntity)->position) {
		c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
		if ((c == quote && (!$nc(this->fCurrentEntity)->literal || this->isExternal$)) || c == u'%' || !$XMLChar::isContent(c)) {
			break;
		}
		if (this->whiteSpaceInfoNeeded && c == u'\t') {
			storeWhiteSpace($nc(this->fCurrentEntity)->position);
		}
	}
	int32_t length = $nc(this->fCurrentEntity)->position - offset;
	$nc(this->fCurrentEntity)->columnNumber += length - newlines;
	checkEntityLimit(nullptr, this->fCurrentEntity, offset, length);
	if (isNSURI) {
		$init($XMLSecurityManager$Limit);
		checkLimit($XMLSecurityManager$Limit::MAX_NAME_LIMIT, this->fCurrentEntity, offset, length);
	}
	$nc(content)->setValues($nc(this->fCurrentEntity)->ch, offset, length);
	if ($nc(this->fCurrentEntity)->position != $nc(this->fCurrentEntity)->count) {
		c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
		if (c == quote && $nc(this->fCurrentEntity)->literal) {
			c = -1;
		}
	} else {
		c = -1;
	}
	return c;
}

void XMLEntityScanner::storeWhiteSpace(int32_t whiteSpacePos) {
	if (this->whiteSpaceLen >= $nc(this->whiteSpaceLookup)->length) {
		$var($ints, tmp, $new($ints, $nc(this->whiteSpaceLookup)->length + 100));
		$System::arraycopy(this->whiteSpaceLookup, 0, tmp, 0, $nc(this->whiteSpaceLookup)->length);
		$set(this, whiteSpaceLookup, tmp);
	}
	$nc(this->whiteSpaceLookup)->set(this->whiteSpaceLen++, whiteSpacePos);
}

bool XMLEntityScanner::scanData($String* delimiter, $XMLStringBuffer* buffer, int32_t chunkLimit) {
	bool done = false;
	int32_t delimLen = $nc(delimiter)->length();
	char16_t charAt0 = delimiter->charAt(0);
	do {
		if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
			load(0, true, false);
		}
		bool bNextEntity = false;
		while (($nc(this->fCurrentEntity)->position > $nc(this->fCurrentEntity)->count - delimLen) && (!bNextEntity)) {
			$System::arraycopy($nc(this->fCurrentEntity)->ch, $nc(this->fCurrentEntity)->position, $nc(this->fCurrentEntity)->ch, 0, $nc(this->fCurrentEntity)->count - $nc(this->fCurrentEntity)->position);
			bNextEntity = load($nc(this->fCurrentEntity)->count - $nc(this->fCurrentEntity)->position, false, false);
			$nc(this->fCurrentEntity)->position = 0;
			$nc(this->fCurrentEntity)->startPosition = 0;
		}
		if ($nc(this->fCurrentEntity)->position > $nc(this->fCurrentEntity)->count - delimLen) {
			int32_t length = $nc(this->fCurrentEntity)->count - $nc(this->fCurrentEntity)->position;
			$init($XMLScanner$NameType);
			checkEntityLimit($XMLScanner$NameType::COMMENT, this->fCurrentEntity, $nc(this->fCurrentEntity)->position, length);
			$nc(buffer)->append($nc(this->fCurrentEntity)->ch, $nc(this->fCurrentEntity)->position, length);
			$nc(this->fCurrentEntity)->columnNumber += $nc(this->fCurrentEntity)->count;
			$nc(this->fCurrentEntity)->baseCharOffset += ($nc(this->fCurrentEntity)->position - $nc(this->fCurrentEntity)->startPosition);
			$nc(this->fCurrentEntity)->position = $nc(this->fCurrentEntity)->count;
			$nc(this->fCurrentEntity)->startPosition = $nc(this->fCurrentEntity)->count;
			load(0, true, false);
			return false;
		}
		int32_t offset = $nc(this->fCurrentEntity)->position;
		int32_t c = $nc($nc(this->fCurrentEntity)->ch)->get(offset);
		int32_t newlines = 0;
		if (c == u'\n' || (c == u'\r' && this->isExternal$)) {
			do {
				c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
				if (c == u'\r' && this->isExternal$) {
					++newlines;
					++$nc(this->fCurrentEntity)->lineNumber;
					$nc(this->fCurrentEntity)->columnNumber = 1;
					if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
						offset = 0;
						$nc(this->fCurrentEntity)->position = newlines;
						if (load(newlines, false, true)) {
							break;
						}
					}
					if ($nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position) == u'\n') {
						++$nc(this->fCurrentEntity)->position;
						++offset;
					} else {
						++newlines;
					}
				} else if (c == u'\n') {
					++newlines;
					++$nc(this->fCurrentEntity)->lineNumber;
					$nc(this->fCurrentEntity)->columnNumber = 1;
					if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
						offset = 0;
						$nc(this->fCurrentEntity)->position = newlines;
						$nc(this->fCurrentEntity)->count = newlines;
						if (load(newlines, false, true)) {
							break;
						}
					}
				} else {
					--$nc(this->fCurrentEntity)->position;
					break;
				}
			} while ($nc(this->fCurrentEntity)->position < $nc(this->fCurrentEntity)->count - 1);
			for (int32_t i = offset; i < $nc(this->fCurrentEntity)->position; ++i) {
				$nc($nc(this->fCurrentEntity)->ch)->set(i, u'\n');
			}
			int32_t length = $nc(this->fCurrentEntity)->position - offset;
			if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count - 1) {
				$init($XMLScanner$NameType);
				checkEntityLimit($XMLScanner$NameType::COMMENT, this->fCurrentEntity, offset, length);
				$nc(buffer)->append($nc(this->fCurrentEntity)->ch, offset, length);
				return true;
			}
		}
		bool OUTER$break = false;
		while ($nc(this->fCurrentEntity)->position < $nc(this->fCurrentEntity)->count) {
			c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
			if (c == charAt0) {
				int32_t delimOffset = $nc(this->fCurrentEntity)->position - 1;
				for (int32_t i = 1; i < delimLen; ++i) {
					if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
						$nc(this->fCurrentEntity)->position -= i;
						OUTER$break = true;
						break;
					}
					c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
					if (delimiter->charAt(i) != c) {
						$nc(this->fCurrentEntity)->position -= i;
						break;
					}
				}
				if (OUTER$break) {
					break;
				}
				if ($nc(this->fCurrentEntity)->position == delimOffset + delimLen) {
					done = true;
					break;
				}
			} else if (c == u'\n' || (this->isExternal$ && c == u'\r')) {
				--$nc(this->fCurrentEntity)->position;
				break;
			} else if ($XMLChar::isInvalid(c)) {
				--$nc(this->fCurrentEntity)->position;
				int32_t length = $nc(this->fCurrentEntity)->position - offset;
				$nc(this->fCurrentEntity)->columnNumber += length - newlines;
				$init($XMLScanner$NameType);
				checkEntityLimit($XMLScanner$NameType::COMMENT, this->fCurrentEntity, offset, length);
				$nc(buffer)->append($nc(this->fCurrentEntity)->ch, offset, length);
				return true;
			}
			if (chunkLimit > 0 && ($nc(buffer)->length + $nc(this->fCurrentEntity)->position - offset) >= chunkLimit) {
				break;
			}
		}
		int32_t length = $nc(this->fCurrentEntity)->position - offset;
		$nc(this->fCurrentEntity)->columnNumber += length - newlines;
		$init($XMLScanner$NameType);
		checkEntityLimit($XMLScanner$NameType::COMMENT, this->fCurrentEntity, offset, length);
		if (done) {
			length -= delimLen;
		}
		$nc(buffer)->append($nc(this->fCurrentEntity)->ch, offset, length);
		if (chunkLimit > 0 && buffer->length >= chunkLimit) {
			break;
		}
	} while (!done && chunkLimit == 0);
	return !done;
}

bool XMLEntityScanner::skipChar(int32_t c, $XMLScanner$NameType* nt) {
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	}
	int32_t offset = $nc(this->fCurrentEntity)->position;
	int32_t cc = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
	if (cc == c) {
		++$nc(this->fCurrentEntity)->position;
		if (c == u'\n') {
			++$nc(this->fCurrentEntity)->lineNumber;
			$nc(this->fCurrentEntity)->columnNumber = 1;
		} else {
			++$nc(this->fCurrentEntity)->columnNumber;
		}
		checkEntityLimit(nt, this->fCurrentEntity, offset, $nc(this->fCurrentEntity)->position - offset);
		return true;
	} else if (c == u'\n' && cc == u'\r' && this->isExternal$) {
		if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
			invokeListeners(1);
			$nc($nc(this->fCurrentEntity)->ch)->set(0, (char16_t)cc);
			load(1, false, false);
		}
		++$nc(this->fCurrentEntity)->position;
		if ($nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position) == u'\n') {
			++$nc(this->fCurrentEntity)->position;
		}
		++$nc(this->fCurrentEntity)->lineNumber;
		$nc(this->fCurrentEntity)->columnNumber = 1;
		checkEntityLimit(nt, this->fCurrentEntity, offset, $nc(this->fCurrentEntity)->position - offset);
		return true;
	}
	return false;
}

bool XMLEntityScanner::isSpace(char16_t ch) {
	return (ch == u' ') || (ch == u'\n') || (ch == u'\t') || (ch == u'\r');
}

bool XMLEntityScanner::skipSpaces() {
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	}
	if (this->fCurrentEntity == nullptr) {
		return false;
	}
	int32_t c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
	int32_t offset = $nc(this->fCurrentEntity)->position - 1;
	if ($XMLChar::isSpace(c)) {
		do {
			bool entityChanged = false;
			if (c == u'\n' || (this->isExternal$ && c == u'\r')) {
				++$nc(this->fCurrentEntity)->lineNumber;
				$nc(this->fCurrentEntity)->columnNumber = 1;
				if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count - 1) {
					invokeListeners(1);
					$nc($nc(this->fCurrentEntity)->ch)->set(0, (char16_t)c);
					entityChanged = load(1, true, false);
					if (!entityChanged) {
						$nc(this->fCurrentEntity)->position = 0;
					} else if (this->fCurrentEntity == nullptr) {
						return true;
					}
				}
				if (c == u'\r' && this->isExternal$) {
					if ($nc($nc(this->fCurrentEntity)->ch)->get(++$nc(this->fCurrentEntity)->position) != u'\n') {
						--$nc(this->fCurrentEntity)->position;
					}
				}
			} else {
				++$nc(this->fCurrentEntity)->columnNumber;
			}
			checkEntityLimit(nullptr, this->fCurrentEntity, offset, $nc(this->fCurrentEntity)->position - offset);
			offset = $nc(this->fCurrentEntity)->position;
			if (!entityChanged) {
				++$nc(this->fCurrentEntity)->position;
			}
			if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
				load(0, true, true);
				if (this->fCurrentEntity == nullptr) {
					return true;
				}
			}
		} while ($XMLChar::isSpace(c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position)));
		return true;
	}
	return false;
}

bool XMLEntityScanner::arrangeCapacity(int32_t length) {
	return arrangeCapacity(length, false);
}

bool XMLEntityScanner::arrangeCapacity(int32_t length, bool changeEntity) {
	if (($nc(this->fCurrentEntity)->count - $nc(this->fCurrentEntity)->position) >= length) {
		return true;
	}
	bool entityChanged = false;
	while (($nc(this->fCurrentEntity)->count - $nc(this->fCurrentEntity)->position) < length) {
		if (($nc($nc(this->fCurrentEntity)->ch)->length - $nc(this->fCurrentEntity)->position) < length) {
			invokeListeners(0);
			$System::arraycopy($nc(this->fCurrentEntity)->ch, $nc(this->fCurrentEntity)->position, $nc(this->fCurrentEntity)->ch, 0, $nc(this->fCurrentEntity)->count - $nc(this->fCurrentEntity)->position);
			$nc(this->fCurrentEntity)->count = $nc(this->fCurrentEntity)->count - $nc(this->fCurrentEntity)->position;
			$nc(this->fCurrentEntity)->position = 0;
		}
		if (($nc(this->fCurrentEntity)->count - $nc(this->fCurrentEntity)->position) < length) {
			int32_t pos = $nc(this->fCurrentEntity)->position;
			invokeListeners(pos);
			entityChanged = load($nc(this->fCurrentEntity)->count, changeEntity, false);
			$nc(this->fCurrentEntity)->position = pos;
			if (entityChanged) {
				break;
			}
		}
	}
	if (($nc(this->fCurrentEntity)->count - $nc(this->fCurrentEntity)->position) >= length) {
		return true;
	} else {
		return false;
	}
}

bool XMLEntityScanner::skipString($String* s) {
	int32_t length = $nc(s)->length();
	if (arrangeCapacity(length, false)) {
		int32_t beforeSkip = $nc(this->fCurrentEntity)->position;
		int32_t afterSkip = $nc(this->fCurrentEntity)->position + length - 1;
		int32_t i = length - 1;
		while (s->charAt(i--) == $nc($nc(this->fCurrentEntity)->ch)->get(afterSkip)) {
			if (afterSkip-- == beforeSkip) {
				$nc(this->fCurrentEntity)->position = $nc(this->fCurrentEntity)->position + length;
				$nc(this->fCurrentEntity)->columnNumber += length;
				if (!this->detectingVersion) {
					checkEntityLimit(nullptr, this->fCurrentEntity, beforeSkip, length);
				}
				return true;
			}
		}
	}
	return false;
}

bool XMLEntityScanner::skipString($chars* s) {
	int32_t length = $nc(s)->length;
	if (arrangeCapacity(length, false)) {
		int32_t beforeSkip = $nc(this->fCurrentEntity)->position;
		for (int32_t i = 0; i < length; ++i) {
			if (!($nc($nc(this->fCurrentEntity)->ch)->get(beforeSkip++) == s->get(i))) {
				return false;
			}
		}
		$nc(this->fCurrentEntity)->position = $nc(this->fCurrentEntity)->position + length;
		$nc(this->fCurrentEntity)->columnNumber += length;
		if (!this->detectingVersion) {
			checkEntityLimit(nullptr, this->fCurrentEntity, beforeSkip, length);
		}
		return true;
	}
	return false;
}

bool XMLEntityScanner::load(int32_t offset, bool changeEntity, bool notify) {
	if (notify) {
		invokeListeners(offset);
	}
	$nc(this->fCurrentEntity)->fTotalCountTillLastLoad = $nc(this->fCurrentEntity)->fTotalCountTillLastLoad + $nc(this->fCurrentEntity)->fLastCount;
	int32_t length = $nc($nc(this->fCurrentEntity)->ch)->length - offset;
	if (!$nc(this->fCurrentEntity)->mayReadChunks && length > $XMLEntityManager::DEFAULT_XMLDECL_BUFFER_SIZE) {
		length = $XMLEntityManager::DEFAULT_XMLDECL_BUFFER_SIZE;
	}
	int32_t count = $nc($nc(this->fCurrentEntity)->reader)->read($nc(this->fCurrentEntity)->ch, offset, length);
	bool entityChanged = false;
	if (count != -1) {
		if (count != 0) {
			$nc(this->fCurrentEntity)->fLastCount = count;
			$nc(this->fCurrentEntity)->count = count + offset;
			$nc(this->fCurrentEntity)->position = offset;
		}
	} else {
		$nc(this->fCurrentEntity)->count = offset;
		$nc(this->fCurrentEntity)->position = offset;
		entityChanged = true;
		if (changeEntity) {
			$nc(this->fEntityManager)->endEntity();
			if (this->fCurrentEntity == nullptr) {
				$throw(XMLEntityScanner::END_OF_DOCUMENT_ENTITY);
			}
			if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
				load(0, true, false);
			}
		}
	}
	return entityChanged;
}

$Reader* XMLEntityScanner::createReader($InputStream* inputStream, $String* encoding$renamed, $Boolean* isBigEndian) {
	$useLocalCurrentObjectStackCache();
	$var($String, encoding, encoding$renamed);
	if (encoding == nullptr) {
		$assign(encoding, "UTF-8"_s);
	}
	$init($Locale);
	$var($String, ENCODING, $nc(encoding)->toUpperCase($Locale::ENGLISH));
	if (ENCODING->equals("UTF-8"_s)) {
		$var($InputStream, var$0, inputStream);
		int32_t var$1 = $nc(this->fCurrentEntity)->fBufferSize;
		$init($XMLMessageFormatter);
		$var($MessageFormatter, var$2, $nc(this->fErrorReporter)->getMessageFormatter($XMLMessageFormatter::XML_DOMAIN));
		return $new($UTF8Reader, var$0, var$1, var$2, $($nc(this->fErrorReporter)->getLocale()));
	}
	if (ENCODING->equals("US-ASCII"_s)) {
		$var($InputStream, var$3, inputStream);
		int32_t var$4 = $nc(this->fCurrentEntity)->fBufferSize;
		$init($XMLMessageFormatter);
		$var($MessageFormatter, var$5, $nc(this->fErrorReporter)->getMessageFormatter($XMLMessageFormatter::XML_DOMAIN));
		return $new($ASCIIReader, var$3, var$4, var$5, $($nc(this->fErrorReporter)->getLocale()));
	}
	if (ENCODING->equals("ISO-10646-UCS-4"_s)) {
		if (isBigEndian != nullptr) {
			bool isBE = isBigEndian->booleanValue();
			if (isBE) {
				return $new($UCSReader, inputStream, $UCSReader::UCS4BE);
			} else {
				return $new($UCSReader, inputStream, $UCSReader::UCS4LE);
			}
		} else {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "EncodingByteOrderUnsupported"_s, $$new($ObjectArray, {$of(encoding)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
		}
	}
	if (ENCODING->equals("ISO-10646-UCS-2"_s)) {
		if (isBigEndian != nullptr) {
			bool isBE = isBigEndian->booleanValue();
			if (isBE) {
				return $new($UCSReader, inputStream, $UCSReader::UCS2BE);
			} else {
				return $new($UCSReader, inputStream, $UCSReader::UCS2LE);
			}
		} else {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "EncodingByteOrderUnsupported"_s, $$new($ObjectArray, {$of(encoding)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
		}
	}
	bool validIANA = $XMLChar::isValidIANAEncoding(encoding);
	bool validJava = $XMLChar::isValidJavaEncoding(encoding);
	if (!validIANA || (this->fAllowJavaEncodings && !validJava)) {
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "EncodingDeclInvalid"_s, $$new($ObjectArray, {$of(encoding)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
		$assign(encoding, "ISO-8859-1"_s);
	}
	$var($String, javaEncoding, $EncodingMap::getIANA2JavaMapping(ENCODING));
	if (javaEncoding == nullptr) {
		if (this->fAllowJavaEncodings) {
			$assign(javaEncoding, encoding);
		} else {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "EncodingDeclInvalid"_s, $$new($ObjectArray, {$of(encoding)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			$assign(javaEncoding, "ISO8859_1"_s);
		}
	} else if ($nc(javaEncoding)->equals("ASCII"_s)) {
		$var($InputStream, var$6, inputStream);
		int32_t var$7 = this->fBufferSize;
		$init($XMLMessageFormatter);
		$var($MessageFormatter, var$8, $nc(this->fErrorReporter)->getMessageFormatter($XMLMessageFormatter::XML_DOMAIN));
		return $new($ASCIIReader, var$6, var$7, var$8, $($nc(this->fErrorReporter)->getLocale()));
	}
	return $new($InputStreamReader, inputStream, javaEncoding);
}

$ObjectArray* XMLEntityScanner::getEncodingName($bytes* b4, int32_t count) {
	$useLocalCurrentObjectStackCache();
	if (count < 2) {
		return $new($ObjectArray, {
			$of("UTF-8"_s),
			($Object*)nullptr
		});
	}
	int32_t b0 = (int32_t)($nc(b4)->get(0) & (uint32_t)255);
	int32_t b1 = (int32_t)(b4->get(1) & (uint32_t)255);
	if (b0 == 254 && b1 == 255) {
		return $new($ObjectArray, {
			$of("UTF-16BE"_s),
			$($of($Boolean::valueOf(true)))
		});
	}
	if (b0 == 255 && b1 == 254) {
		return $new($ObjectArray, {
			$of("UTF-16LE"_s),
			$($of($Boolean::valueOf(false)))
		});
	}
	if (count < 3) {
		return $new($ObjectArray, {
			$of("UTF-8"_s),
			($Object*)nullptr
		});
	}
	int32_t b2 = (int32_t)(b4->get(2) & (uint32_t)255);
	if (b0 == 239 && b1 == 187 && b2 == 191) {
		return $new($ObjectArray, {
			$of("UTF-8"_s),
			($Object*)nullptr
		});
	}
	if (count < 4) {
		return $new($ObjectArray, {
			$of("UTF-8"_s),
			($Object*)nullptr
		});
	}
	int32_t b3 = (int32_t)(b4->get(3) & (uint32_t)255);
	if (b0 == 0 && b1 == 0 && b2 == 0 && b3 == 60) {
		return $new($ObjectArray, {
			$of("ISO-10646-UCS-4"_s),
			$($of($Boolean::valueOf(true)))
		});
	}
	if (b0 == 60 && b1 == 0 && b2 == 0 && b3 == 0) {
		return $new($ObjectArray, {
			$of("ISO-10646-UCS-4"_s),
			$($of($Boolean::valueOf(false)))
		});
	}
	if (b0 == 0 && b1 == 0 && b2 == 60 && b3 == 0) {
		return $new($ObjectArray, {
			$of("ISO-10646-UCS-4"_s),
			($Object*)nullptr
		});
	}
	if (b0 == 0 && b1 == 60 && b2 == 0 && b3 == 0) {
		return $new($ObjectArray, {
			$of("ISO-10646-UCS-4"_s),
			($Object*)nullptr
		});
	}
	if (b0 == 0 && b1 == 60 && b2 == 0 && b3 == 63) {
		return $new($ObjectArray, {
			$of("UTF-16BE"_s),
			$($of($Boolean::valueOf(true)))
		});
	}
	if (b0 == 60 && b1 == 0 && b2 == 63 && b3 == 0) {
		return $new($ObjectArray, {
			$of("UTF-16LE"_s),
			$($of($Boolean::valueOf(false)))
		});
	}
	if (b0 == 76 && b1 == 111 && b2 == 167 && b3 == 148) {
		return $new($ObjectArray, {
			$of("CP037"_s),
			($Object*)nullptr
		});
	}
	return $new($ObjectArray, {
		$of("UTF-8"_s),
		($Object*)nullptr
	});
}

void XMLEntityScanner::print() {
}

void XMLEntityScanner::registerListener($XMLBufferListener* listener) {
	if (!$nc(this->listeners)->contains(listener)) {
		$nc(this->listeners)->add(listener);
	}
}

void XMLEntityScanner::invokeListeners(int32_t loadPos) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->listeners)->size(); ++i) {
		$nc(($cast($XMLBufferListener, $($nc(this->listeners)->get(i)))))->refresh(loadPos);
	}
}

bool XMLEntityScanner::skipDeclSpaces() {
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, false);
	}
	int32_t c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
	if ($XMLChar::isSpace(c)) {
		bool external = $nc(this->fCurrentEntity)->isExternal();
		do {
			bool entityChanged = false;
			if (c == u'\n' || (external && c == u'\r')) {
				++$nc(this->fCurrentEntity)->lineNumber;
				$nc(this->fCurrentEntity)->columnNumber = 1;
				if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count - 1) {
					$nc($nc(this->fCurrentEntity)->ch)->set(0, (char16_t)c);
					entityChanged = load(1, true, false);
					if (!entityChanged) {
						$nc(this->fCurrentEntity)->position = 0;
					}
				}
				if (c == u'\r' && external) {
					if ($nc($nc(this->fCurrentEntity)->ch)->get(++$nc(this->fCurrentEntity)->position) != u'\n') {
						--$nc(this->fCurrentEntity)->position;
					}
				}
			} else {
				++$nc(this->fCurrentEntity)->columnNumber;
			}
			if (!entityChanged) {
				++$nc(this->fCurrentEntity)->position;
			}
			if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
				load(0, true, false);
			}
		} while ($XMLChar::isSpace(c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position)));
		return true;
	}
	return false;
}

void clinit$XMLEntityScanner($Class* class$) {
	$init($Constants);
	$assignStatic(XMLEntityScanner::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XMLEntityScanner::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XMLEntityScanner::ALLOW_JAVA_ENCODINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::ALLOW_JAVA_ENCODINGS_FEATURE}));
	$assignStatic(XMLEntityScanner::VALID_NAMES, $new($booleans, 127));
	$assignStatic(XMLEntityScanner::END_OF_DOCUMENT_ENTITY, $new($XMLEntityScanner$1));
	{
		for (int32_t i = 65; i <= 90; ++i) {
			$nc(XMLEntityScanner::VALID_NAMES)->set(i, true);
		}
		for (int32_t i = 97; i <= 122; ++i) {
			$nc(XMLEntityScanner::VALID_NAMES)->set(i, true);
		}
		for (int32_t i = 48; i <= 57; ++i) {
			$nc(XMLEntityScanner::VALID_NAMES)->set(i, true);
		}
		$nc(XMLEntityScanner::VALID_NAMES)->set(45, true);
		$nc(XMLEntityScanner::VALID_NAMES)->set(46, true);
		$nc(XMLEntityScanner::VALID_NAMES)->set(58, true);
		$nc(XMLEntityScanner::VALID_NAMES)->set(95, true);
	}
}

XMLEntityScanner::XMLEntityScanner() {
}

$Class* XMLEntityScanner::load$($String* name, bool initialize) {
	$loadClass(XMLEntityScanner, name, initialize, &_XMLEntityScanner_ClassInfo_, clinit$XMLEntityScanner, allocate$XMLEntityScanner);
	return class$;
}

$Class* XMLEntityScanner::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com