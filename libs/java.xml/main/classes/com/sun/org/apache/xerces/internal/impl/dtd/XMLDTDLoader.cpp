#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDLoader.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/BalancedDTDGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammarBucket.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDDescription.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDProcessor.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/DefaultErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/Status.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/io/EOFException.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef BALANCE_SYNTAX_TREES
#undef DTD_VALIDATOR
#undef ENTITY_RESOLVER
#undef ENTITY_RESOLVER_PROPERTY
#undef ERROR_HANDLER
#undef ERROR_HANDLER_PROPERTY
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef GRAMMAR_POOL
#undef LOADER_RECOGNIZED_FEATURES
#undef LOADER_RECOGNIZED_PROPERTIES
#undef LOCALE
#undef LOCALE_PROPERTY
#undef NOTIFY_CHAR_REFS
#undef NOT_RECOGNIZED
#undef STANDARD_URI_CONFORMANT_FEATURE
#undef SYMBOL_TABLE
#undef VALIDATION
#undef WARN_ON_DUPLICATE_ATTDEF
#undef WARN_ON_UNDECLARED_ELEMDEF
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLNS_DOMAIN
#undef XML_DOMAIN
#undef XML_DTD
#undef XML_VERSION_1_0

using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLDTDScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $BalancedDTDGrammar = ::com::sun::org::apache::xerces::internal::impl::dtd::BalancedDTDGrammar;
using $DTDGrammar = ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar;
using $DTDGrammarBucket = ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammarBucket;
using $XMLDTDDescription = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDDescription;
using $XMLDTDProcessor = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDProcessor;
using $XMLDTDValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $DefaultErrorHandler = ::com::sun::org::apache::xerces::internal::util::DefaultErrorHandler;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $Status = ::com::sun::org::apache::xerces::internal::util::Status;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLResourceIdentifierImpl = ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl;
using $XMLDTDContentModelHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler;
using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $XMLDTDContentModelFilter = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelFilter;
using $XMLDTDFilter = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDFilter;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $EOFException = ::java::io::EOFException;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$FieldInfo _XMLDTDLoader_FieldInfo_[] = {
	{"STANDARD_URI_CONFORMANT_FEATURE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDLoader, STANDARD_URI_CONFORMANT_FEATURE)},
	{"BALANCE_SYNTAX_TREES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDLoader, BALANCE_SYNTAX_TREES)},
	{"LOADER_RECOGNIZED_FEATURES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDTDLoader, LOADER_RECOGNIZED_FEATURES)},
	{"ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDLoader, ERROR_HANDLER)},
	{"ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLDTDLoader, ENTITY_RESOLVER)},
	{"LOCALE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLDTDLoader, LOCALE)},
	{"LOADER_RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDTDLoader, LOADER_RECOGNIZED_PROPERTIES)},
	{"fStrictURI", "Z", nullptr, $PRIVATE, $field(XMLDTDLoader, fStrictURI)},
	{"fBalanceSyntaxTrees", "Z", nullptr, $PRIVATE, $field(XMLDTDLoader, fBalanceSyntaxTrees)},
	{"fEntityResolver", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PROTECTED, $field(XMLDTDLoader, fEntityResolver)},
	{"fDTDScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl;", nullptr, $PROTECTED, $field(XMLDTDLoader, fDTDScanner)},
	{"fEntityManager", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PROTECTED, $field(XMLDTDLoader, fEntityManager)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PROTECTED, $field(XMLDTDLoader, fLocale)},
	{}
};

$MethodInfo _XMLDTDLoader_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLDTDLoader, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(XMLDTDLoader, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(XMLDTDLoader, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, 0, $method(XMLDTDLoader, init$, void, $SymbolTable*, $XMLGrammarPool*, $XMLErrorReporter*, $XMLEntityResolver*)},
	{"createDTDScanner", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;)Lcom/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl;", nullptr, $PROTECTED, $virtualMethod(XMLDTDLoader, createDTDScanner, $XMLDTDScannerImpl*, $SymbolTable*, $XMLErrorReporter*, $XMLEntityManager*)},
	{"getEntityResolver", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PUBLIC, $virtualMethod(XMLDTDLoader, getEntityResolver, $XMLEntityResolver*)},
	{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PUBLIC, $virtualMethod(XMLDTDLoader, getErrorHandler, $XMLErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XMLDTDLoader, getFeature, bool, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(XMLDTDLoader, getLocale, $Locale*)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLDTDLoader, getProperty, $Object*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getRecognizedFeatures", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDTDLoader, getRecognizedFeatures, $StringArray*)},
	{"getRecognizedProperties", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDTDLoader, getRecognizedProperties, $StringArray*)},
	{"getScannerVersion", "()S", nullptr, $PROTECTED, $virtualMethod(XMLDTDLoader, getScannerVersion, int16_t)},
	{"loadGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(XMLDTDLoader, loadGrammar, $Grammar*, $XMLInputSource*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"loadGrammarWithContext", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDLoader, loadGrammarWithContext, void, $XMLDTDValidator*, $String*, $String*, $String*, $String*, $String*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "()V", nullptr, $PROTECTED, $virtualMethod(XMLDTDLoader, reset, void)},
	{"setEntityResolver", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDLoader, setEntityResolver, void, $XMLEntityResolver*)},
	{"setErrorHandler", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDLoader, setErrorHandler, void, $XMLErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDLoader, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDLoader, setLocale, void, $Locale*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDLoader, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLDTDLoader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDLoader",
	"com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDProcessor",
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarLoader",
	_XMLDTDLoader_FieldInfo_,
	_XMLDTDLoader_MethodInfo_
};

$Object* allocate$XMLDTDLoader($Class* clazz) {
	return $of($alloc(XMLDTDLoader));
}

int32_t XMLDTDLoader::hashCode() {
	 return this->$XMLDTDProcessor::hashCode();
}

bool XMLDTDLoader::equals(Object$* arg0) {
	 return this->$XMLDTDProcessor::equals(arg0);
}

$Object* XMLDTDLoader::clone() {
	 return this->$XMLDTDProcessor::clone();
}

$String* XMLDTDLoader::toString() {
	 return this->$XMLDTDProcessor::toString();
}

void XMLDTDLoader::finalize() {
	this->$XMLDTDProcessor::finalize();
}

$String* XMLDTDLoader::STANDARD_URI_CONFORMANT_FEATURE = nullptr;
$String* XMLDTDLoader::BALANCE_SYNTAX_TREES = nullptr;
$StringArray* XMLDTDLoader::LOADER_RECOGNIZED_FEATURES = nullptr;
$String* XMLDTDLoader::ERROR_HANDLER = nullptr;
$String* XMLDTDLoader::ENTITY_RESOLVER = nullptr;
$String* XMLDTDLoader::LOCALE = nullptr;
$StringArray* XMLDTDLoader::LOADER_RECOGNIZED_PROPERTIES = nullptr;

void XMLDTDLoader::init$() {
	XMLDTDLoader::init$($$new($SymbolTable));
}

void XMLDTDLoader::init$($SymbolTable* symbolTable) {
	XMLDTDLoader::init$(symbolTable, nullptr);
}

void XMLDTDLoader::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	XMLDTDLoader::init$(symbolTable, grammarPool, nullptr, $$new($XMLEntityManager));
}

void XMLDTDLoader::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool, $XMLErrorReporter* errorReporter$renamed, $XMLEntityResolver* entityResolver) {
	$useLocalCurrentObjectStackCache();
	$var($XMLErrorReporter, errorReporter, errorReporter$renamed);
	$XMLDTDProcessor::init$();
	this->fStrictURI = false;
	this->fBalanceSyntaxTrees = false;
	$set(this, fSymbolTable, symbolTable);
	$set(this, fGrammarPool, grammarPool);
	if (errorReporter == nullptr) {
		$assign(errorReporter, $new($XMLErrorReporter));
		errorReporter->setProperty(XMLDTDLoader::ERROR_HANDLER, $$new($DefaultErrorHandler));
	}
	$set(this, fErrorReporter, errorReporter);
	$init($XMLMessageFormatter);
	if ($nc(this->fErrorReporter)->getMessageFormatter($XMLMessageFormatter::XML_DOMAIN) == nullptr) {
		$var($XMLMessageFormatter, xmft, $new($XMLMessageFormatter));
		$nc(this->fErrorReporter)->putMessageFormatter($XMLMessageFormatter::XML_DOMAIN, xmft);
		$nc(this->fErrorReporter)->putMessageFormatter($XMLMessageFormatter::XMLNS_DOMAIN, xmft);
	}
	$set(this, fEntityResolver, entityResolver);
	if ($instanceOf($XMLEntityManager, this->fEntityResolver)) {
		$set(this, fEntityManager, $cast($XMLEntityManager, this->fEntityResolver));
	} else {
		$set(this, fEntityManager, $new($XMLEntityManager));
	}
	$init($Constants);
	$nc(this->fEntityManager)->setProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}), errorReporter);
	$set(this, fDTDScanner, createDTDScanner(this->fSymbolTable, this->fErrorReporter, this->fEntityManager));
	$nc(this->fDTDScanner)->setDTDHandler(this);
	$nc(this->fDTDScanner)->setDTDContentModelHandler(this);
	reset();
}

$StringArray* XMLDTDLoader::getRecognizedFeatures() {
	return $cast($StringArray, $nc(XMLDTDLoader::LOADER_RECOGNIZED_FEATURES)->clone());
}

void XMLDTDLoader::setFeature($String* featureId, bool state) {
	$init($XMLDTDProcessor);
	if ($nc(featureId)->equals($XMLDTDProcessor::VALIDATION)) {
		this->fValidation = state;
	} else {
		if (featureId->equals($XMLDTDProcessor::WARN_ON_DUPLICATE_ATTDEF)) {
			this->fWarnDuplicateAttdef = state;
		} else {
			if (featureId->equals($XMLDTDProcessor::WARN_ON_UNDECLARED_ELEMDEF)) {
				this->fWarnOnUndeclaredElemdef = state;
			} else {
				if (featureId->equals($XMLDTDProcessor::NOTIFY_CHAR_REFS)) {
					$nc(this->fDTDScanner)->setFeature(featureId, state);
				} else if (featureId->equals(XMLDTDLoader::STANDARD_URI_CONFORMANT_FEATURE)) {
					this->fStrictURI = state;
				} else if (featureId->equals(XMLDTDLoader::BALANCE_SYNTAX_TREES)) {
					this->fBalanceSyntaxTrees = state;
				} else {
					$init($Status);
					$throwNew($XMLConfigurationException, $Status::NOT_RECOGNIZED, featureId);
				}
			}
		}
	}
}

$StringArray* XMLDTDLoader::getRecognizedProperties() {
	return $cast($StringArray, $nc(XMLDTDLoader::LOADER_RECOGNIZED_PROPERTIES)->clone());
}

$Object* XMLDTDLoader::getProperty($String* propertyId) {
	$init($XMLDTDProcessor);
	if ($nc(propertyId)->equals($XMLDTDProcessor::SYMBOL_TABLE)) {
		return $of(this->fSymbolTable);
	} else {
		if (propertyId->equals($XMLDTDProcessor::ERROR_REPORTER)) {
			return $of(this->fErrorReporter);
		} else if (propertyId->equals(XMLDTDLoader::ERROR_HANDLER)) {
			return $of($nc(this->fErrorReporter)->getErrorHandler());
		} else if (propertyId->equals(XMLDTDLoader::ENTITY_RESOLVER)) {
			return $of(this->fEntityResolver);
		} else if (propertyId->equals(XMLDTDLoader::LOCALE)) {
			return $of(getLocale());
		} else {
			if (propertyId->equals($XMLDTDProcessor::GRAMMAR_POOL)) {
				return $of(this->fGrammarPool);
			} else {
				if (propertyId->equals($XMLDTDProcessor::DTD_VALIDATOR)) {
					return $of(this->fValidator);
				}
			}
		}
	}
	$init($Status);
	$throwNew($XMLConfigurationException, $Status::NOT_RECOGNIZED, propertyId);
}

void XMLDTDLoader::setProperty($String* propertyId, Object$* value) {
	$init($XMLDTDProcessor);
	if ($nc(propertyId)->equals($XMLDTDProcessor::SYMBOL_TABLE)) {
		$set(this, fSymbolTable, $cast($SymbolTable, value));
		$nc(this->fDTDScanner)->setProperty(propertyId, value);
		$nc(this->fEntityManager)->setProperty(propertyId, value);
	} else {
		if (propertyId->equals($XMLDTDProcessor::ERROR_REPORTER)) {
			$set(this, fErrorReporter, $cast($XMLErrorReporter, value));
			$init($XMLMessageFormatter);
			if ($nc(this->fErrorReporter)->getMessageFormatter($XMLMessageFormatter::XML_DOMAIN) == nullptr) {
				$var($XMLMessageFormatter, xmft, $new($XMLMessageFormatter));
				$nc(this->fErrorReporter)->putMessageFormatter($XMLMessageFormatter::XML_DOMAIN, xmft);
				$nc(this->fErrorReporter)->putMessageFormatter($XMLMessageFormatter::XMLNS_DOMAIN, xmft);
			}
			$nc(this->fDTDScanner)->setProperty(propertyId, value);
			$nc(this->fEntityManager)->setProperty(propertyId, value);
		} else if (propertyId->equals(XMLDTDLoader::ERROR_HANDLER)) {
			$nc(this->fErrorReporter)->setProperty(propertyId, value);
		} else if (propertyId->equals(XMLDTDLoader::ENTITY_RESOLVER)) {
			$set(this, fEntityResolver, $cast($XMLEntityResolver, value));
			$nc(this->fEntityManager)->setProperty(propertyId, value);
		} else if (propertyId->equals(XMLDTDLoader::LOCALE)) {
			setLocale($cast($Locale, value));
		} else {
			if (propertyId->equals($XMLDTDProcessor::GRAMMAR_POOL)) {
				$set(this, fGrammarPool, $cast($XMLGrammarPool, value));
			} else {
				$init($Status);
				$throwNew($XMLConfigurationException, $Status::NOT_RECOGNIZED, propertyId);
			}
		}
	}
}

bool XMLDTDLoader::getFeature($String* featureId) {
	$init($XMLDTDProcessor);
	if ($nc(featureId)->equals($XMLDTDProcessor::VALIDATION)) {
		return this->fValidation;
	} else {
		if (featureId->equals($XMLDTDProcessor::WARN_ON_DUPLICATE_ATTDEF)) {
			return this->fWarnDuplicateAttdef;
		} else {
			if (featureId->equals($XMLDTDProcessor::WARN_ON_UNDECLARED_ELEMDEF)) {
				return this->fWarnOnUndeclaredElemdef;
			} else {
				if (featureId->equals($XMLDTDProcessor::NOTIFY_CHAR_REFS)) {
					return $nc(this->fDTDScanner)->getFeature(featureId);
				} else if (featureId->equals(XMLDTDLoader::STANDARD_URI_CONFORMANT_FEATURE)) {
					return this->fStrictURI;
				} else if (featureId->equals(XMLDTDLoader::BALANCE_SYNTAX_TREES)) {
					return this->fBalanceSyntaxTrees;
				}
			}
		}
	}
	$init($Status);
	$throwNew($XMLConfigurationException, $Status::NOT_RECOGNIZED, featureId);
}

void XMLDTDLoader::setLocale($Locale* locale) {
	$set(this, fLocale, locale);
	$nc(this->fErrorReporter)->setLocale(locale);
}

$Locale* XMLDTDLoader::getLocale() {
	return this->fLocale;
}

void XMLDTDLoader::setErrorHandler($XMLErrorHandler* errorHandler) {
	$nc(this->fErrorReporter)->setProperty(XMLDTDLoader::ERROR_HANDLER, errorHandler);
}

$XMLErrorHandler* XMLDTDLoader::getErrorHandler() {
	return $nc(this->fErrorReporter)->getErrorHandler();
}

void XMLDTDLoader::setEntityResolver($XMLEntityResolver* entityResolver) {
	$set(this, fEntityResolver, entityResolver);
	$nc(this->fEntityManager)->setProperty(XMLDTDLoader::ENTITY_RESOLVER, entityResolver);
}

$XMLEntityResolver* XMLDTDLoader::getEntityResolver() {
	return this->fEntityResolver;
}

$Grammar* XMLDTDLoader::loadGrammar($XMLInputSource* source) {
	$useLocalCurrentObjectStackCache();
	reset();
	$var($String, var$0, $nc(source)->getSystemId());
	$var($String, eid, $XMLEntityManager::expandSystemId(var$0, $(source->getBaseSystemId()), this->fStrictURI));
	$var($String, var$1, $nc(source)->getPublicId());
	$var($String, var$2, source->getSystemId());
	$var($XMLDTDDescription, desc, $new($XMLDTDDescription, var$1, var$2, $(source->getBaseSystemId()), eid, nullptr));
	if (!this->fBalanceSyntaxTrees) {
		$set(this, fDTDGrammar, $new($DTDGrammar, this->fSymbolTable, desc));
	} else {
		$set(this, fDTDGrammar, $new($BalancedDTDGrammar, this->fSymbolTable, desc));
	}
	$set(this, fGrammarBucket, $new($DTDGrammarBucket));
	$nc(this->fGrammarBucket)->setStandalone(false);
	$nc(this->fGrammarBucket)->setActiveGrammar(this->fDTDGrammar);
	{
		$var($Throwable, var$3, nullptr);
		try {
			try {
				$nc(this->fDTDScanner)->setInputSource(source);
				$nc(this->fDTDScanner)->scanDTDExternalSubset(true);
			} catch ($EOFException& e) {
			}
		} catch ($Throwable& var$4) {
			$assign(var$3, var$4);
		} /*finally*/ {
			$nc(this->fEntityManager)->closeReaders();
		}
		if (var$3 != nullptr) {
			$throw(var$3);
		}
	}
	if (this->fDTDGrammar != nullptr && this->fGrammarPool != nullptr) {
		$init($XMLDTDDescription);
		$nc(this->fGrammarPool)->cacheGrammars($XMLDTDDescription::XML_DTD, $$new($GrammarArray, {static_cast<$Grammar*>(this->fDTDGrammar)}));
	}
	return this->fDTDGrammar;
}

void XMLDTDLoader::loadGrammarWithContext($XMLDTDValidator* validator, $String* rootName, $String* publicId, $String* systemId, $String* baseSystemId, $String* internalSubset) {
	$useLocalCurrentObjectStackCache();
	$var($DTDGrammarBucket, grammarBucket, $nc(validator)->getGrammarBucket());
	$var($DTDGrammar, activeGrammar, $nc(grammarBucket)->getActiveGrammar());
	if (activeGrammar != nullptr && !activeGrammar->isImmutable()) {
		$set(this, fGrammarBucket, grammarBucket);
		$nc(this->fEntityManager)->setScannerVersion(getScannerVersion());
		reset();
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					if (internalSubset != nullptr) {
						$var($StringBuffer, buffer, $new($StringBuffer, internalSubset->length() + 2));
						buffer->append(internalSubset)->append("]>"_s);
						$var($XMLInputSource, is, $new($XMLInputSource, ($String*)nullptr, baseSystemId, ($String*)nullptr, static_cast<$Reader*>($$new($StringReader, $(buffer->toString()))), ($String*)nullptr));
						$nc(this->fEntityManager)->startDocumentEntity(is);
						$nc(this->fDTDScanner)->scanDTDInternalSubset(true, false, systemId != nullptr);
					}
					if (systemId != nullptr) {
						$var($XMLDTDDescription, desc, $new($XMLDTDDescription, publicId, systemId, baseSystemId, nullptr, rootName));
						$var($XMLInputSource, source, $nc(this->fEntityManager)->resolveEntity(static_cast<$XMLResourceIdentifier*>(static_cast<$XMLResourceIdentifierImpl*>(desc))));
						$nc(this->fDTDScanner)->setInputSource(source);
						$nc(this->fDTDScanner)->scanDTDExternalSubset(true);
					}
				} catch ($EOFException& e) {
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(this->fEntityManager)->closeReaders();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void XMLDTDLoader::reset() {
	$XMLDTDProcessor::reset();
	$nc(this->fDTDScanner)->reset();
	$nc(this->fEntityManager)->reset();
	$nc(this->fErrorReporter)->setDocumentLocator($($nc(this->fEntityManager)->getEntityScanner()));
}

$XMLDTDScannerImpl* XMLDTDLoader::createDTDScanner($SymbolTable* symbolTable, $XMLErrorReporter* errorReporter, $XMLEntityManager* entityManager) {
	return $new($XMLDTDScannerImpl, symbolTable, errorReporter, entityManager);
}

int16_t XMLDTDLoader::getScannerVersion() {
	return $Constants::XML_VERSION_1_0;
}

void clinit$XMLDTDLoader($Class* class$) {
	$init($Constants);
	$assignStatic(XMLDTDLoader::STANDARD_URI_CONFORMANT_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::STANDARD_URI_CONFORMANT_FEATURE}));
	$assignStatic(XMLDTDLoader::BALANCE_SYNTAX_TREES, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::BALANCE_SYNTAX_TREES}));
	$assignStatic(XMLDTDLoader::ERROR_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_HANDLER_PROPERTY}));
	$assignStatic(XMLDTDLoader::ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_RESOLVER_PROPERTY}));
	$assignStatic(XMLDTDLoader::LOCALE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::LOCALE_PROPERTY}));
	$init($XMLDTDProcessor);
	$assignStatic(XMLDTDLoader::LOADER_RECOGNIZED_FEATURES, $new($StringArray, {
		$XMLDTDProcessor::VALIDATION,
		$XMLDTDProcessor::WARN_ON_DUPLICATE_ATTDEF,
		$XMLDTDProcessor::WARN_ON_UNDECLARED_ELEMDEF,
		$XMLDTDProcessor::NOTIFY_CHAR_REFS,
		XMLDTDLoader::STANDARD_URI_CONFORMANT_FEATURE,
		XMLDTDLoader::BALANCE_SYNTAX_TREES
	}));
	$assignStatic(XMLDTDLoader::LOADER_RECOGNIZED_PROPERTIES, $new($StringArray, {
		$XMLDTDProcessor::SYMBOL_TABLE,
		$XMLDTDProcessor::ERROR_REPORTER,
		XMLDTDLoader::ERROR_HANDLER,
		XMLDTDLoader::ENTITY_RESOLVER,
		$XMLDTDProcessor::GRAMMAR_POOL,
		$XMLDTDProcessor::DTD_VALIDATOR,
		XMLDTDLoader::LOCALE
	}));
}

XMLDTDLoader::XMLDTDLoader() {
}

$Class* XMLDTDLoader::load$($String* name, bool initialize) {
	$loadClass(XMLDTDLoader, name, initialize, &_XMLDTDLoader_ClassInfo_, clinit$XMLDTDLoader, allocate$XMLDTDLoader);
	return class$;
}

$Class* XMLDTDLoader::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com