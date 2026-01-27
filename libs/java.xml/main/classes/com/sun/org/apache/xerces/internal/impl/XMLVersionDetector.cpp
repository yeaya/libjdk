#include <com/sun/org/apache/xerces/internal/impl/XMLVersionDetector.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner$NameType.h>
#include <com/sun/org/apache/xerces/internal/impl/io/MalformedByteSequenceException.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>
#include <java/io/CharConversionException.h>
#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

#undef ENTITY_MANAGER
#undef ENTITY_MANAGER_PROPERTY
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef SEVERITY_FATAL_ERROR
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef XERCES_PROPERTY_PREFIX
#undef XML11_VERSION
#undef XML_DOMAIN
#undef XML_VERSION_1_0
#undef XML_VERSION_1_1

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLEntityHandler = ::com::sun::org::apache::xerces::internal::impl::XMLEntityHandler;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLScanner$NameType = ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType;
using $MalformedByteSequenceException = ::com::sun::org::apache::xerces::internal::impl::io::MalformedByteSequenceException;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $Entity$ScannedEntity = ::com::sun::xml::internal::stream::Entity$ScannedEntity;
using $CharConversionException = ::java::io::CharConversionException;
using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLVersionDetector_FieldInfo_[] = {
	{"XML11_VERSION", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLVersionDetector, XML11_VERSION)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLVersionDetector, SYMBOL_TABLE)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLVersionDetector, ERROR_REPORTER)},
	{"ENTITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLVersionDetector, ENTITY_MANAGER)},
	{"fVersionSymbol", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLVersionDetector, fVersionSymbol)},
	{"fXMLSymbol", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLVersionDetector, fXMLSymbol)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XMLVersionDetector, fSymbolTable)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(XMLVersionDetector, fErrorReporter)},
	{"fEntityManager", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PROTECTED, $field(XMLVersionDetector, fEntityManager)},
	{"fEncoding", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLVersionDetector, fEncoding)},
	{"fVersionNum", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PRIVATE, $field(XMLVersionDetector, fVersionNum)},
	{"fExpectedVersionString", "[C", nullptr, $PRIVATE | $FINAL, $field(XMLVersionDetector, fExpectedVersionString)},
	{}
};

$MethodInfo _XMLVersionDetector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLVersionDetector, init$, void)},
	{"determineDocVersion", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)S", nullptr, $PUBLIC, $virtualMethod(XMLVersionDetector, determineDocVersion, int16_t, $XMLInputSource*), "java.io.IOException"},
	{"fixupCurrentEntity", "(Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;[CI)V", nullptr, $PRIVATE, $method(XMLVersionDetector, fixupCurrentEntity, void, $XMLEntityManager*, $chars*, int32_t)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLVersionDetector, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"startDocumentParsing", "(Lcom/sun/org/apache/xerces/internal/impl/XMLEntityHandler;S)V", nullptr, $PUBLIC, $virtualMethod(XMLVersionDetector, startDocumentParsing, void, $XMLEntityHandler*, int16_t)},
	{}
};

$ClassInfo _XMLVersionDetector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLVersionDetector",
	"java.lang.Object",
	nullptr,
	_XMLVersionDetector_FieldInfo_,
	_XMLVersionDetector_MethodInfo_
};

$Object* allocate$XMLVersionDetector($Class* clazz) {
	return $of($alloc(XMLVersionDetector));
}

$chars* XMLVersionDetector::XML11_VERSION = nullptr;
$String* XMLVersionDetector::SYMBOL_TABLE = nullptr;
$String* XMLVersionDetector::ERROR_REPORTER = nullptr;
$String* XMLVersionDetector::ENTITY_MANAGER = nullptr;
$String* XMLVersionDetector::fVersionSymbol = nullptr;
$String* XMLVersionDetector::fXMLSymbol = nullptr;

void XMLVersionDetector::init$() {
	$set(this, fEncoding, nullptr);
	$set(this, fVersionNum, $new($XMLString));
	$set(this, fExpectedVersionString, $new($chars, {
		u'<',
		u'?',
		u'x',
		u'm',
		u'l',
		u' ',
		u'v',
		u'e',
		u'r',
		u's',
		u'i',
		u'o',
		u'n',
		u'=',
		u' ',
		u' ',
		u' ',
		u' ',
		u' '
	}));
}

void XMLVersionDetector::reset($XMLComponentManager* componentManager) {
	$set(this, fSymbolTable, $cast($SymbolTable, $nc(componentManager)->getProperty(XMLVersionDetector::SYMBOL_TABLE)));
	$set(this, fErrorReporter, $cast($XMLErrorReporter, componentManager->getProperty(XMLVersionDetector::ERROR_REPORTER)));
	$set(this, fEntityManager, $cast($XMLEntityManager, componentManager->getProperty(XMLVersionDetector::ENTITY_MANAGER)));
	for (int32_t i = 14; i < $nc(this->fExpectedVersionString)->length; ++i) {
		$nc(this->fExpectedVersionString)->set(i, u' ');
	}
}

void XMLVersionDetector::startDocumentParsing($XMLEntityHandler* scanner, int16_t version) {
	$useLocalCurrentObjectStackCache();
	if (version == $Constants::XML_VERSION_1_0) {
		$nc(this->fEntityManager)->setScannerVersion($Constants::XML_VERSION_1_0);
	} else {
		$nc(this->fEntityManager)->setScannerVersion($Constants::XML_VERSION_1_1);
	}
	$nc(this->fErrorReporter)->setDocumentLocator($($nc(this->fEntityManager)->getEntityScanner()));
	$nc(this->fEntityManager)->setEntityHandler(scanner);
	$nc(scanner)->startEntity(XMLVersionDetector::fXMLSymbol, $($nc(this->fEntityManager)->getCurrentResourceIdentifier()), this->fEncoding, nullptr);
}

int16_t XMLVersionDetector::determineDocVersion($XMLInputSource* inputSource) {
	$useLocalCurrentObjectStackCache();
	$set(this, fEncoding, $nc(this->fEntityManager)->setupCurrentEntity(false, XMLVersionDetector::fXMLSymbol, inputSource, false, true));
	$nc(this->fEntityManager)->setScannerVersion($Constants::XML_VERSION_1_0);
	$var($XMLEntityScanner, scanner, $nc(this->fEntityManager)->getEntityScanner());
	$nc(scanner)->detectingVersion = true;
	try {
		if (!scanner->skipString("<?xml"_s)) {
			scanner->detectingVersion = false;
			return $Constants::XML_VERSION_1_0;
		}
		if (!scanner->skipDeclSpaces()) {
			fixupCurrentEntity(this->fEntityManager, this->fExpectedVersionString, 5);
			scanner->detectingVersion = false;
			return $Constants::XML_VERSION_1_0;
		}
		if (!scanner->skipString("version"_s)) {
			fixupCurrentEntity(this->fEntityManager, this->fExpectedVersionString, 6);
			scanner->detectingVersion = false;
			return $Constants::XML_VERSION_1_0;
		}
		scanner->skipDeclSpaces();
		if (scanner->peekChar() != u'=') {
			fixupCurrentEntity(this->fEntityManager, this->fExpectedVersionString, 13);
			scanner->detectingVersion = false;
			return $Constants::XML_VERSION_1_0;
		}
		scanner->scanChar(nullptr);
		scanner->skipDeclSpaces();
		int32_t quoteChar = scanner->scanChar(nullptr);
		$nc(this->fExpectedVersionString)->set(14, (char16_t)quoteChar);
		for (int32_t versionPos = 0; versionPos < $nc(XMLVersionDetector::XML11_VERSION)->length; ++versionPos) {
			$nc(this->fExpectedVersionString)->set(15 + versionPos, (char16_t)scanner->scanChar(nullptr));
		}
		$nc(this->fExpectedVersionString)->set(18, (char16_t)scanner->scanChar(nullptr));
		fixupCurrentEntity(this->fEntityManager, this->fExpectedVersionString, 19);
		int32_t matched = 0;
		for (; matched < $nc(XMLVersionDetector::XML11_VERSION)->length; ++matched) {
			if ($nc(this->fExpectedVersionString)->get(15 + matched) != $nc(XMLVersionDetector::XML11_VERSION)->get(matched)) {
				break;
			}
		}
		scanner->detectingVersion = false;
		if (matched == $nc(XMLVersionDetector::XML11_VERSION)->length) {
			return $Constants::XML_VERSION_1_1;
		}
		return $Constants::XML_VERSION_1_0;
	} catch ($MalformedByteSequenceException& e) {
		$var($String, var$0, e->getDomain());
		$var($String, var$1, e->getKey());
		$nc(this->fErrorReporter)->reportError(var$0, var$1, $(e->getArguments()), $XMLErrorReporter::SEVERITY_FATAL_ERROR, static_cast<$Exception*>(e));
		scanner->detectingVersion = false;
		return $Constants::XML_VERSION_1_0;
	} catch ($CharConversionException& e) {
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "CharConversionFailure"_s, ($ObjectArray*)nullptr, $XMLErrorReporter::SEVERITY_FATAL_ERROR, static_cast<$Exception*>(e));
		scanner->detectingVersion = false;
		return $Constants::XML_VERSION_1_0;
	} catch ($EOFException& e) {
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "PrematureEOF"_s, nullptr, $XMLErrorReporter::SEVERITY_FATAL_ERROR);
		scanner->detectingVersion = false;
		return $Constants::XML_VERSION_1_0;
	}
	$shouldNotReachHere();
}

void XMLVersionDetector::fixupCurrentEntity($XMLEntityManager* manager, $chars* scannedChars, int32_t length) {
	$useLocalCurrentObjectStackCache();
	$var($Entity$ScannedEntity, currentEntity, $nc(manager)->getCurrentEntity());
	if ($nc(currentEntity)->count - currentEntity->position + length > $nc(currentEntity->ch)->length) {
		$var($chars, tempCh, currentEntity->ch);
		$set(currentEntity, ch, $new($chars, length + currentEntity->count - currentEntity->position + 1));
		$System::arraycopy(tempCh, 0, currentEntity->ch, 0, $nc(tempCh)->length);
	}
	if ($nc(currentEntity)->position < length) {
		$System::arraycopy(currentEntity->ch, currentEntity->position, currentEntity->ch, length, currentEntity->count - currentEntity->position);
		currentEntity->count += length - currentEntity->position;
	} else {
		for (int32_t i = length; i < currentEntity->position; ++i) {
			$nc(currentEntity->ch)->set(i, u' ');
		}
	}
	$System::arraycopy(scannedChars, 0, $nc(currentEntity)->ch, 0, length);
	$nc(currentEntity)->position = 0;
	currentEntity->baseCharOffset = 0;
	currentEntity->startPosition = 0;
	currentEntity->columnNumber = (currentEntity->lineNumber = 1);
}

void clinit$XMLVersionDetector($Class* class$) {
	$init($Constants);
	$assignStatic(XMLVersionDetector::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XMLVersionDetector::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XMLVersionDetector::ENTITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_MANAGER_PROPERTY}));
	$assignStatic(XMLVersionDetector::XML11_VERSION, $new($chars, {
		u'1',
		u'.',
		u'1'
	}));
	$assignStatic(XMLVersionDetector::fVersionSymbol, "version"_s->intern());
	$assignStatic(XMLVersionDetector::fXMLSymbol, "[xml]"_s->intern());
}

XMLVersionDetector::XMLVersionDetector() {
}

$Class* XMLVersionDetector::load$($String* name, bool initialize) {
	$loadClass(XMLVersionDetector, name, initialize, &_XMLVersionDetector_ClassInfo_, clinit$XMLVersionDetector, allocate$XMLVersionDetector);
	return class$;
}

$Class* XMLVersionDetector::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com