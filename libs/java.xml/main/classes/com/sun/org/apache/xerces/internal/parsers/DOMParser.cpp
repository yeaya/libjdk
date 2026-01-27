#include <com/sun/org/apache/xerces/internal/parsers/DOMParser.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/XIncludeAwareParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XMLParser.h>
#include <com/sun/org/apache/xerces/internal/util/EntityResolver2Wrapper.h>
#include <com/sun/org/apache/xerces/internal/util/EntityResolverWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/SAXMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/Status.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLPullParserConfiguration.h>
#include <java/io/CharConversionException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/util/Locale.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/ext/EntityResolver2.h>
#include <org/xml/sax/helpers/LocatorImpl.h>
#include <jcpp.h>

#undef APIPROPERTY
#undef CURRENT_ELEMENT_NODE
#undef DEFER_NODE_EXPANSION
#undef ELEMENT_NODE
#undef ENTITY_RESOLVER
#undef ERROR_HANDLER
#undef NOT_RECOGNIZED
#undef RECOGNIZED_FEATURES
#undef RECOGNIZED_PROPERTIES
#undef REPORT_WHITESPACE
#undef SAX_FEATURE_PREFIX
#undef SECURITY_MANAGER
#undef SUN_REPORT_IGNORED_ELEMENT_CONTENT_WHITESPACE
#undef SUN_SCHEMA_FEATURE_PREFIX
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef USE_ENTITY_RESOLVER2
#undef USE_ENTITY_RESOLVER2_FEATURE
#undef XERCES_PROPERTY_PREFIX
#undef XMLGRAMMAR_POOL
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XML_SECURITY_PROPERTY_MANAGER

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $AbstractDOMParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser;
using $XIncludeAwareParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::XIncludeAwareParserConfiguration;
using $XML11Configuration = ::com::sun::org::apache::xerces::internal::parsers::XML11Configuration;
using $XMLParser = ::com::sun::org::apache::xerces::internal::parsers::XMLParser;
using $EntityResolver2Wrapper = ::com::sun::org::apache::xerces::internal::util::EntityResolver2Wrapper;
using $EntityResolverWrapper = ::com::sun::org::apache::xerces::internal::util::EntityResolverWrapper;
using $ErrorHandlerWrapper = ::com::sun::org::apache::xerces::internal::util::ErrorHandlerWrapper;
using $SAXMessageFormatter = ::com::sun::org::apache::xerces::internal::util::SAXMessageFormatter;
using $Status = ::com::sun::org::apache::xerces::internal::util::Status;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $XMLSecurityPropertyManager$State = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $XMLPullParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration;
using $CharConversionException = ::java::io::CharConversionException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;
using $Node = ::org::w3c::dom::Node;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;
using $SAXParseException = ::org::xml::sax::SAXParseException;
using $EntityResolver2 = ::org::xml::sax::ext::EntityResolver2;
using $LocatorImpl = ::org::xml::sax::helpers::LocatorImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _DOMParser_FieldInfo_[] = {
	{"USE_ENTITY_RESOLVER2", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMParser, USE_ENTITY_RESOLVER2)},
	{"REPORT_WHITESPACE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMParser, REPORT_WHITESPACE)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMParser, XML_SECURITY_PROPERTY_MANAGER)},
	{"RECOGNIZED_FEATURES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMParser, RECOGNIZED_FEATURES)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMParser, SYMBOL_TABLE)},
	{"XMLGRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMParser, XMLGRAMMAR_POOL)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMParser, RECOGNIZED_PROPERTIES)},
	{"fUseEntityResolver2", "Z", nullptr, $PROTECTED, $field(DOMParser, fUseEntityResolver2)},
	{}
};

$MethodInfo _DOMParser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;)V", nullptr, $PUBLIC, $method(DOMParser, init$, void, $XMLParserConfiguration*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DOMParser, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(DOMParser, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(DOMParser, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"getEntityResolver", "()Lorg/xml/sax/EntityResolver;", nullptr, $PUBLIC, $virtualMethod(DOMParser, getEntityResolver, $EntityResolver*)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC, $virtualMethod(DOMParser, getErrorHandler, $ErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DOMParser, getFeature, bool, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DOMParser, getProperty, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getXMLParserConfiguration", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;", nullptr, $PUBLIC, $virtualMethod(DOMParser, getXMLParserConfiguration, $XMLParserConfiguration*)},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMParser, parse, void, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $virtualMethod(DOMParser, parse, void, $InputSource*), "org.xml.sax.SAXException,java.io.IOException"},
	{"setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(DOMParser, setEntityResolver, void, $EntityResolver*)},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOMParser, setErrorHandler, void, $ErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(DOMParser, setFeature, void, $String*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DOMParser, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setProperty0", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DOMParser, setProperty0, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{}
};

$ClassInfo _DOMParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.DOMParser",
	"com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser",
	nullptr,
	_DOMParser_FieldInfo_,
	_DOMParser_MethodInfo_
};

$Object* allocate$DOMParser($Class* clazz) {
	return $of($alloc(DOMParser));
}

$String* DOMParser::USE_ENTITY_RESOLVER2 = nullptr;
$String* DOMParser::REPORT_WHITESPACE = nullptr;
$String* DOMParser::XML_SECURITY_PROPERTY_MANAGER = nullptr;
$StringArray* DOMParser::RECOGNIZED_FEATURES = nullptr;
$String* DOMParser::SYMBOL_TABLE = nullptr;
$String* DOMParser::XMLGRAMMAR_POOL = nullptr;
$StringArray* DOMParser::RECOGNIZED_PROPERTIES = nullptr;

void DOMParser::init$($XMLParserConfiguration* config) {
	$AbstractDOMParser::init$(config);
	this->fUseEntityResolver2 = true;
}

void DOMParser::init$() {
	DOMParser::init$(nullptr, nullptr);
}

void DOMParser::init$($SymbolTable* symbolTable) {
	DOMParser::init$(symbolTable, nullptr);
}

void DOMParser::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	$AbstractDOMParser::init$($$new($XIncludeAwareParserConfiguration));
	this->fUseEntityResolver2 = true;
	$nc(this->fConfiguration)->addRecognizedProperties(DOMParser::RECOGNIZED_PROPERTIES);
	if (symbolTable != nullptr) {
		$nc(this->fConfiguration)->setProperty(DOMParser::SYMBOL_TABLE, symbolTable);
	}
	if (grammarPool != nullptr) {
		$nc(this->fConfiguration)->setProperty(DOMParser::XMLGRAMMAR_POOL, grammarPool);
	}
	$nc(this->fConfiguration)->addRecognizedFeatures(DOMParser::RECOGNIZED_FEATURES);
}

void DOMParser::parse($String* systemId) {
	$useLocalCurrentObjectStackCache();
	$var($XMLInputSource, source, $new($XMLInputSource, nullptr, systemId, nullptr, false));
	try {
		parse(source);
	} catch ($XMLParseException& e) {
		$var($Exception, ex, e->getException());
		if (ex == nullptr || $instanceOf($CharConversionException, ex)) {
			$var($LocatorImpl, locatorImpl, $new($LocatorImpl));
			locatorImpl->setPublicId($(e->getPublicId()));
			locatorImpl->setSystemId($(e->getExpandedSystemId()));
			locatorImpl->setLineNumber(e->getLineNumber());
			locatorImpl->setColumnNumber(e->getColumnNumber());
			$throw((ex == nullptr) ? $$new($SAXParseException, $(e->getMessage()), locatorImpl) : $$new($SAXParseException, $(e->getMessage()), locatorImpl, ex));
		}
		if ($instanceOf($SAXException, ex)) {
			$throw($cast($SAXException, ex));
		}
		if ($instanceOf($IOException, ex)) {
			$throw($cast($IOException, ex));
		}
		$throwNew($SAXException, ex);
	} catch ($XNIException& e) {
		e->printStackTrace();
		$var($Exception, ex, e->getException());
		if (ex == nullptr) {
			$throwNew($SAXException, $(e->getMessage()));
		}
		if ($instanceOf($SAXException, ex)) {
			$throw($cast($SAXException, ex));
		}
		if ($instanceOf($IOException, ex)) {
			$throw($cast($IOException, ex));
		}
		$throwNew($SAXException, ex);
	}
}

void DOMParser::parse($InputSource* inputSource) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, var$0, $nc(inputSource)->getPublicId());
		$var($XMLInputSource, xmlInputSource, $new($XMLInputSource, var$0, $(inputSource->getSystemId()), nullptr, false));
		xmlInputSource->setByteStream($($nc(inputSource)->getByteStream()));
		xmlInputSource->setCharacterStream($($nc(inputSource)->getCharacterStream()));
		xmlInputSource->setEncoding($($nc(inputSource)->getEncoding()));
		parse(xmlInputSource);
	} catch ($XMLParseException& e) {
		$var($Exception, ex, e->getException());
		if (ex == nullptr || $instanceOf($CharConversionException, ex)) {
			$var($LocatorImpl, locatorImpl, $new($LocatorImpl));
			locatorImpl->setPublicId($(e->getPublicId()));
			locatorImpl->setSystemId($(e->getExpandedSystemId()));
			locatorImpl->setLineNumber(e->getLineNumber());
			locatorImpl->setColumnNumber(e->getColumnNumber());
			$throw((ex == nullptr) ? $$new($SAXParseException, $(e->getMessage()), locatorImpl) : $$new($SAXParseException, $(e->getMessage()), locatorImpl, ex));
		}
		if ($instanceOf($SAXException, ex)) {
			$throw($cast($SAXException, ex));
		}
		if ($instanceOf($IOException, ex)) {
			$throw($cast($IOException, ex));
		}
		$throwNew($SAXException, ex);
	} catch ($XNIException& e) {
		$var($Exception, ex, e->getException());
		if (ex == nullptr) {
			$throwNew($SAXException, $(e->getMessage()));
		}
		if ($instanceOf($SAXException, ex)) {
			$throw($cast($SAXException, ex));
		}
		if ($instanceOf($IOException, ex)) {
			$throw($cast($IOException, ex));
		}
		$throwNew($SAXException, ex);
	}
}

void DOMParser::setEntityResolver($EntityResolver* resolver) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($XMLParser);
		$var($XMLEntityResolver, xer, $cast($XMLEntityResolver, $nc(this->fConfiguration)->getProperty($XMLParser::ENTITY_RESOLVER)));
		if (this->fUseEntityResolver2 && $instanceOf($EntityResolver2, resolver)) {
			if ($instanceOf($EntityResolver2Wrapper, xer)) {
				$var($EntityResolver2Wrapper, er2w, $cast($EntityResolver2Wrapper, xer));
				$nc(er2w)->setEntityResolver($cast($EntityResolver2, resolver));
			} else {
				$nc(this->fConfiguration)->setProperty($XMLParser::ENTITY_RESOLVER, $$new($EntityResolver2Wrapper, $cast($EntityResolver2, resolver)));
			}
		} else if ($instanceOf($EntityResolverWrapper, xer)) {
			$var($EntityResolverWrapper, erw, $cast($EntityResolverWrapper, xer));
			$nc(erw)->setEntityResolver(resolver);
		} else {
			$nc(this->fConfiguration)->setProperty($XMLParser::ENTITY_RESOLVER, $$new($EntityResolverWrapper, resolver));
		}
	} catch ($XMLConfigurationException& e) {
	}
}

$EntityResolver* DOMParser::getEntityResolver() {
	$useLocalCurrentObjectStackCache();
	$var($EntityResolver, entityResolver, nullptr);
	try {
		$init($XMLParser);
		$var($XMLEntityResolver, xmlEntityResolver, $cast($XMLEntityResolver, $nc(this->fConfiguration)->getProperty($XMLParser::ENTITY_RESOLVER)));
		if (xmlEntityResolver != nullptr) {
			if ($instanceOf($EntityResolverWrapper, xmlEntityResolver)) {
				$assign(entityResolver, $nc(($cast($EntityResolverWrapper, xmlEntityResolver)))->getEntityResolver());
			} else if ($instanceOf($EntityResolver2Wrapper, xmlEntityResolver)) {
				$assign(entityResolver, $nc(($cast($EntityResolver2Wrapper, xmlEntityResolver)))->getEntityResolver());
			}
		}
	} catch ($XMLConfigurationException& e) {
	}
	return entityResolver;
}

void DOMParser::setErrorHandler($ErrorHandler* errorHandler) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($XMLParser);
		$var($XMLErrorHandler, xeh, $cast($XMLErrorHandler, $nc(this->fConfiguration)->getProperty($XMLParser::ERROR_HANDLER)));
		if ($instanceOf($ErrorHandlerWrapper, xeh)) {
			$var($ErrorHandlerWrapper, ehw, $cast($ErrorHandlerWrapper, xeh));
			$nc(ehw)->setErrorHandler(errorHandler);
		} else {
			$nc(this->fConfiguration)->setProperty($XMLParser::ERROR_HANDLER, $$new($ErrorHandlerWrapper, errorHandler));
		}
	} catch ($XMLConfigurationException& e) {
	}
}

$ErrorHandler* DOMParser::getErrorHandler() {
	$useLocalCurrentObjectStackCache();
	$var($ErrorHandler, errorHandler, nullptr);
	try {
		$init($XMLParser);
		$var($XMLErrorHandler, xmlErrorHandler, $cast($XMLErrorHandler, $nc(this->fConfiguration)->getProperty($XMLParser::ERROR_HANDLER)));
		if (xmlErrorHandler != nullptr && $instanceOf($ErrorHandlerWrapper, xmlErrorHandler)) {
			$assign(errorHandler, $nc(($cast($ErrorHandlerWrapper, xmlErrorHandler)))->getErrorHandler());
		}
	} catch ($XMLConfigurationException& e) {
	}
	return errorHandler;
}

void DOMParser::setFeature($String* featureId, bool state) {
	$useLocalCurrentObjectStackCache();
	try {
		if ($nc(featureId)->equals(DOMParser::USE_ENTITY_RESOLVER2)) {
			if (state != this->fUseEntityResolver2) {
				this->fUseEntityResolver2 = state;
				setEntityResolver($(getEntityResolver()));
			}
			return;
		}
		$nc(this->fConfiguration)->setFeature(featureId, state);
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		if (e->getType() == $Status::NOT_RECOGNIZED) {
			$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "feature-not-recognized"_s, $$new($ObjectArray, {$of(identifier)}))));
		} else {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "feature-not-supported"_s, $$new($ObjectArray, {$of(identifier)}))));
		}
	}
}

bool DOMParser::getFeature($String* featureId) {
	$useLocalCurrentObjectStackCache();
	try {
		if ($nc(featureId)->equals(DOMParser::USE_ENTITY_RESOLVER2)) {
			return this->fUseEntityResolver2;
		}
		return $nc(this->fConfiguration)->getFeature(featureId);
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		if (e->getType() == $Status::NOT_RECOGNIZED) {
			$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "feature-not-recognized"_s, $$new($ObjectArray, {$of(identifier)}))));
		} else {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "feature-not-supported"_s, $$new($ObjectArray, {$of(identifier)}))));
		}
	}
	$shouldNotReachHere();
}

void DOMParser::setProperty($String* propertyId, Object$* value) {
	$init($Constants);
	if ($nc(propertyId)->equals($Constants::SECURITY_MANAGER)) {
		$set(this, securityManager, $XMLSecurityManager::convert(value, this->securityManager));
		setProperty0($Constants::SECURITY_MANAGER, this->securityManager);
		return;
	}
	$init($JdkConstants);
	if ($nc(propertyId)->equals($JdkConstants::XML_SECURITY_PROPERTY_MANAGER)) {
		if (value == nullptr) {
			$set(this, securityPropertyManager, $new($XMLSecurityPropertyManager));
		} else {
			$set(this, securityPropertyManager, $cast($XMLSecurityPropertyManager, value));
		}
		setProperty0($JdkConstants::XML_SECURITY_PROPERTY_MANAGER, this->securityPropertyManager);
		return;
	}
	if (this->securityManager == nullptr) {
		$set(this, securityManager, $new($XMLSecurityManager, true));
		setProperty0($Constants::SECURITY_MANAGER, this->securityManager);
	}
	if (this->securityPropertyManager == nullptr) {
		$set(this, securityPropertyManager, $new($XMLSecurityPropertyManager));
		setProperty0($JdkConstants::XML_SECURITY_PROPERTY_MANAGER, this->securityPropertyManager);
	}
	int32_t index = $nc(this->securityPropertyManager)->getIndex(propertyId);
	if (index > -1) {
		$init($XMLSecurityPropertyManager$State);
		$nc(this->securityPropertyManager)->setValue(index, $XMLSecurityPropertyManager$State::APIPROPERTY, $cast($String, value));
	} else {
		$init($JdkProperty$State);
		if (!$nc(this->securityManager)->setLimit(propertyId, $JdkProperty$State::APIPROPERTY, value)) {
			setProperty0(propertyId, value);
		}
	}
}

void DOMParser::setProperty0($String* propertyId, Object$* value) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->fConfiguration)->setProperty(propertyId, value);
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		if (e->getType() == $Status::NOT_RECOGNIZED) {
			$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "property-not-recognized"_s, $$new($ObjectArray, {$of(identifier)}))));
		} else {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "property-not-supported"_s, $$new($ObjectArray, {$of(identifier)}))));
		}
	}
}

$Object* DOMParser::getProperty($String* propertyId) {
	$useLocalCurrentObjectStackCache();
	$init($AbstractDOMParser);
	if ($nc(propertyId)->equals($AbstractDOMParser::CURRENT_ELEMENT_NODE)) {
		bool deferred = false;
		try {
			deferred = getFeature($AbstractDOMParser::DEFER_NODE_EXPANSION);
		} catch ($XMLConfigurationException& e) {
		}
		if (deferred) {
			$throwNew($SAXNotSupportedException, "Current element node cannot be queried when node expansion is deferred."_s);
		}
		return $of((this->fCurrentNode != nullptr && $nc(this->fCurrentNode)->getNodeType() == $Node::ELEMENT_NODE) ? $of(this->fCurrentNode) : ($Object*)nullptr);
	}
	try {
		$var($XMLSecurityPropertyManager, spm, $cast($XMLSecurityPropertyManager, $nc(this->fConfiguration)->getProperty(DOMParser::XML_SECURITY_PROPERTY_MANAGER)));
		int32_t index = $nc(spm)->getIndex(propertyId);
		if (index > -1) {
			return $of(spm->getValueByIndex(index));
		}
		return $of($nc(this->fConfiguration)->getProperty(propertyId));
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		if (e->getType() == $Status::NOT_RECOGNIZED) {
			$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "property-not-recognized"_s, $$new($ObjectArray, {$of(identifier)}))));
		} else {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "property-not-supported"_s, $$new($ObjectArray, {$of(identifier)}))));
		}
	}
	$shouldNotReachHere();
}

$XMLParserConfiguration* DOMParser::getXMLParserConfiguration() {
	return this->fConfiguration;
}

void clinit$DOMParser($Class* class$) {
	$init($Constants);
	$assignStatic(DOMParser::USE_ENTITY_RESOLVER2, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::USE_ENTITY_RESOLVER2_FEATURE}));
	$assignStatic(DOMParser::REPORT_WHITESPACE, $str({$Constants::SUN_SCHEMA_FEATURE_PREFIX, $Constants::SUN_REPORT_IGNORED_ELEMENT_CONTENT_WHITESPACE}));
	$init($JdkConstants);
	$assignStatic(DOMParser::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
	$assignStatic(DOMParser::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(DOMParser::XMLGRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	$assignStatic(DOMParser::RECOGNIZED_FEATURES, $new($StringArray, {DOMParser::REPORT_WHITESPACE}));
	$assignStatic(DOMParser::RECOGNIZED_PROPERTIES, $new($StringArray, {
		DOMParser::SYMBOL_TABLE,
		DOMParser::XMLGRAMMAR_POOL
	}));
}

DOMParser::DOMParser() {
}

$Class* DOMParser::load$($String* name, bool initialize) {
	$loadClass(DOMParser, name, initialize, &_DOMParser_ClassInfo_, clinit$DOMParser, allocate$DOMParser);
	return class$;
}

$Class* DOMParser::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com