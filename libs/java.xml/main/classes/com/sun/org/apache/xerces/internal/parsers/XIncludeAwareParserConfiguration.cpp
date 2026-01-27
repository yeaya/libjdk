#include <com/sun/org/apache/xerces/internal/parsers/XIncludeAwareParserConfiguration.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XML11DTDScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XML11DTDProcessor.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDLoader.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDProcessor.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>
#include <com/sun/org/apache/xerces/internal/util/FeatureState.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xinclude/MultipleScopeNamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeHandler.h>
#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeNamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef ALLOW_DTD_EVENTS_AFTER_ENDDTD_FEATURE
#undef ALLOW_UE_AND_NOTATION_EVENTS
#undef NAMESPACE_CONTEXT
#undef NAMESPACE_CONTEXT_PROPERTY
#undef PARSER_SETTINGS
#undef SAX_FEATURE_PREFIX
#undef TRUE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XINCLUDE_FEATURE
#undef XINCLUDE_FIXUP_BASE_URIS
#undef XINCLUDE_FIXUP_BASE_URIS_FEATURE
#undef XINCLUDE_FIXUP_LANGUAGE
#undef XINCLUDE_FIXUP_LANGUAGE_FEATURE
#undef XINCLUDE_HANDLER
#undef XINCLUDE_HANDLER_PROPERTY
#undef XMLSCHEMA_VALIDATION

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XML11DTDScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XML11DTDScannerImpl;
using $XMLDTDScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl;
using $XML11DTDProcessor = ::com::sun::org::apache::xerces::internal::impl::dtd::XML11DTDProcessor;
using $XMLDTDLoader = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDLoader;
using $XMLDTDProcessor = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDProcessor;
using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $XML11Configuration = ::com::sun::org::apache::xerces::internal::parsers::XML11Configuration;
using $FeatureState = ::com::sun::org::apache::xerces::internal::util::FeatureState;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $ParserConfigurationSettings = ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $MultipleScopeNamespaceSupport = ::com::sun::org::apache::xerces::internal::xinclude::MultipleScopeNamespaceSupport;
using $XIncludeHandler = ::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler;
using $XIncludeNamespaceSupport = ::com::sun::org::apache::xerces::internal::xinclude::XIncludeNamespaceSupport;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLDTDFilter = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDFilter;
using $XMLDTDScanner = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner;
using $XMLDTDSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource;
using $XMLDocumentFilter = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _XIncludeAwareParserConfiguration_FieldInfo_[] = {
	{"ALLOW_UE_AND_NOTATION_EVENTS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeAwareParserConfiguration, ALLOW_UE_AND_NOTATION_EVENTS)},
	{"XINCLUDE_FIXUP_BASE_URIS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeAwareParserConfiguration, XINCLUDE_FIXUP_BASE_URIS)},
	{"XINCLUDE_FIXUP_LANGUAGE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeAwareParserConfiguration, XINCLUDE_FIXUP_LANGUAGE)},
	{"XINCLUDE_FEATURE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeAwareParserConfiguration, XINCLUDE_FEATURE)},
	{"XINCLUDE_HANDLER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeAwareParserConfiguration, XINCLUDE_HANDLER)},
	{"NAMESPACE_CONTEXT", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeAwareParserConfiguration, NAMESPACE_CONTEXT)},
	{"fXIncludeHandler", "Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeHandler;", nullptr, $PROTECTED, $field(XIncludeAwareParserConfiguration, fXIncludeHandler)},
	{"fNonXIncludeNSContext", "Lcom/sun/org/apache/xerces/internal/util/NamespaceSupport;", nullptr, $PROTECTED, $field(XIncludeAwareParserConfiguration, fNonXIncludeNSContext)},
	{"fXIncludeNSContext", "Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeNamespaceSupport;", nullptr, $PROTECTED, $field(XIncludeAwareParserConfiguration, fXIncludeNSContext)},
	{"fCurrentNSContext", "Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, $PROTECTED, $field(XIncludeAwareParserConfiguration, fCurrentNSContext)},
	{"fXIncludeEnabled", "Z", nullptr, $PROTECTED, $field(XIncludeAwareParserConfiguration, fXIncludeEnabled)},
	{}
};

$MethodInfo _XIncludeAwareParserConfiguration_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XIncludeAwareParserConfiguration, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(XIncludeAwareParserConfiguration, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(XIncludeAwareParserConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $method(XIncludeAwareParserConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*, $XMLComponentManager*)},
	{"configurePipeline", "()V", nullptr, $PROTECTED, $virtualMethod(XIncludeAwareParserConfiguration, configurePipeline, void)},
	{"configureXML11Pipeline", "()V", nullptr, $PROTECTED, $virtualMethod(XIncludeAwareParserConfiguration, configureXML11Pipeline, void)},
	{"getFeatureState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC, $virtualMethod(XIncludeAwareParserConfiguration, getFeatureState, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XIncludeAwareParserConfiguration, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{}
};

$ClassInfo _XIncludeAwareParserConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.XIncludeAwareParserConfiguration",
	"com.sun.org.apache.xerces.internal.parsers.XML11Configuration",
	nullptr,
	_XIncludeAwareParserConfiguration_FieldInfo_,
	_XIncludeAwareParserConfiguration_MethodInfo_
};

$Object* allocate$XIncludeAwareParserConfiguration($Class* clazz) {
	return $of($alloc(XIncludeAwareParserConfiguration));
}

$String* XIncludeAwareParserConfiguration::ALLOW_UE_AND_NOTATION_EVENTS = nullptr;
$String* XIncludeAwareParserConfiguration::XINCLUDE_FIXUP_BASE_URIS = nullptr;
$String* XIncludeAwareParserConfiguration::XINCLUDE_FIXUP_LANGUAGE = nullptr;
$String* XIncludeAwareParserConfiguration::XINCLUDE_FEATURE = nullptr;
$String* XIncludeAwareParserConfiguration::XINCLUDE_HANDLER = nullptr;
$String* XIncludeAwareParserConfiguration::NAMESPACE_CONTEXT = nullptr;

void XIncludeAwareParserConfiguration::init$() {
	XIncludeAwareParserConfiguration::init$(nullptr, nullptr, nullptr);
}

void XIncludeAwareParserConfiguration::init$($SymbolTable* symbolTable) {
	XIncludeAwareParserConfiguration::init$(symbolTable, nullptr, nullptr);
}

void XIncludeAwareParserConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	XIncludeAwareParserConfiguration::init$(symbolTable, grammarPool, nullptr);
}

void XIncludeAwareParserConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool, $XMLComponentManager* parentSettings) {
	$useLocalCurrentObjectStackCache();
	$XML11Configuration::init$(symbolTable, grammarPool, parentSettings);
	this->fXIncludeEnabled = false;
	$var($StringArray, recognizedFeatures, $new($StringArray, {
		XIncludeAwareParserConfiguration::ALLOW_UE_AND_NOTATION_EVENTS,
		XIncludeAwareParserConfiguration::XINCLUDE_FIXUP_BASE_URIS,
		XIncludeAwareParserConfiguration::XINCLUDE_FIXUP_LANGUAGE
	}));
	addRecognizedFeatures(recognizedFeatures);
	$var($StringArray, recognizedProperties, $new($StringArray, {
		XIncludeAwareParserConfiguration::XINCLUDE_HANDLER,
		XIncludeAwareParserConfiguration::NAMESPACE_CONTEXT
	}));
	addRecognizedProperties(recognizedProperties);
	setFeature(XIncludeAwareParserConfiguration::ALLOW_UE_AND_NOTATION_EVENTS, true);
	setFeature(XIncludeAwareParserConfiguration::XINCLUDE_FIXUP_BASE_URIS, true);
	setFeature(XIncludeAwareParserConfiguration::XINCLUDE_FIXUP_LANGUAGE, true);
	$set(this, fNonXIncludeNSContext, $new($NamespaceSupport));
	$set(this, fCurrentNSContext, this->fNonXIncludeNSContext);
	setProperty(XIncludeAwareParserConfiguration::NAMESPACE_CONTEXT, this->fNonXIncludeNSContext);
}

void XIncludeAwareParserConfiguration::configurePipeline() {
	$useLocalCurrentObjectStackCache();
	$XML11Configuration::configurePipeline();
	if (this->fXIncludeEnabled) {
		if (this->fXIncludeHandler == nullptr) {
			$set(this, fXIncludeHandler, $new($XIncludeHandler));
			setProperty(XIncludeAwareParserConfiguration::XINCLUDE_HANDLER, this->fXIncludeHandler);
			addCommonComponent(this->fXIncludeHandler);
			$nc(this->fXIncludeHandler)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(static_cast<$XML11Configuration*>(this))));
		}
		if (!$equals(this->fCurrentNSContext, this->fXIncludeNSContext)) {
			if (this->fXIncludeNSContext == nullptr) {
				$set(this, fXIncludeNSContext, $new($XIncludeNamespaceSupport));
			}
			$set(this, fCurrentNSContext, this->fXIncludeNSContext);
			setProperty(XIncludeAwareParserConfiguration::NAMESPACE_CONTEXT, this->fXIncludeNSContext);
		}
		$nc(this->fDTDScanner)->setDTDHandler(this->fDTDProcessor);
		$nc(this->fDTDProcessor)->setDTDSource(this->fDTDScanner);
		$nc(this->fDTDProcessor)->setDTDHandler(this->fXIncludeHandler);
		$nc(this->fXIncludeHandler)->setDTDSource(this->fDTDProcessor);
		$nc(this->fXIncludeHandler)->setDTDHandler(this->fDTDHandler);
		if (this->fDTDHandler != nullptr) {
			$nc(this->fDTDHandler)->setDTDSource(this->fXIncludeHandler);
		}
		$var($XMLDocumentSource, prev, nullptr);
		$init($Boolean);
		if ($equals($nc(this->fFeatures)->get($XML11Configuration::XMLSCHEMA_VALIDATION), $Boolean::TRUE)) {
			$assign(prev, $nc(this->fSchemaValidator)->getDocumentSource());
		} else {
			$assign(prev, this->fLastComponent);
			$set(this, fLastComponent, this->fXIncludeHandler);
		}
		$var($XMLDocumentHandler, next, $nc(prev)->getDocumentHandler());
		prev->setDocumentHandler(this->fXIncludeHandler);
		$nc(this->fXIncludeHandler)->setDocumentSource(prev);
		if (next != nullptr) {
			$nc(this->fXIncludeHandler)->setDocumentHandler(next);
			next->setDocumentSource(this->fXIncludeHandler);
		}
	} else if (!$equals(this->fCurrentNSContext, this->fNonXIncludeNSContext)) {
		$set(this, fCurrentNSContext, this->fNonXIncludeNSContext);
		setProperty(XIncludeAwareParserConfiguration::NAMESPACE_CONTEXT, this->fNonXIncludeNSContext);
	}
}

void XIncludeAwareParserConfiguration::configureXML11Pipeline() {
	$useLocalCurrentObjectStackCache();
	$XML11Configuration::configureXML11Pipeline();
	if (this->fXIncludeEnabled) {
		if (this->fXIncludeHandler == nullptr) {
			$set(this, fXIncludeHandler, $new($XIncludeHandler));
			setProperty(XIncludeAwareParserConfiguration::XINCLUDE_HANDLER, this->fXIncludeHandler);
			addCommonComponent(this->fXIncludeHandler);
			$nc(this->fXIncludeHandler)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(static_cast<$XML11Configuration*>(this))));
		}
		if (!$equals(this->fCurrentNSContext, this->fXIncludeNSContext)) {
			if (this->fXIncludeNSContext == nullptr) {
				$set(this, fXIncludeNSContext, $new($XIncludeNamespaceSupport));
			}
			$set(this, fCurrentNSContext, this->fXIncludeNSContext);
			setProperty(XIncludeAwareParserConfiguration::NAMESPACE_CONTEXT, this->fXIncludeNSContext);
		}
		$nc(this->fXML11DTDScanner)->setDTDHandler(this->fXML11DTDProcessor);
		$nc(this->fXML11DTDProcessor)->setDTDSource(this->fXML11DTDScanner);
		$nc(this->fXML11DTDProcessor)->setDTDHandler(this->fXIncludeHandler);
		$nc(this->fXIncludeHandler)->setDTDSource(this->fXML11DTDProcessor);
		$nc(this->fXIncludeHandler)->setDTDHandler(this->fDTDHandler);
		if (this->fDTDHandler != nullptr) {
			$nc(this->fDTDHandler)->setDTDSource(this->fXIncludeHandler);
		}
		$var($XMLDocumentSource, prev, nullptr);
		$init($Boolean);
		if ($equals($nc(this->fFeatures)->get($XML11Configuration::XMLSCHEMA_VALIDATION), $Boolean::TRUE)) {
			$assign(prev, $nc(this->fSchemaValidator)->getDocumentSource());
		} else {
			$assign(prev, this->fLastComponent);
			$set(this, fLastComponent, this->fXIncludeHandler);
		}
		$var($XMLDocumentHandler, next, $nc(prev)->getDocumentHandler());
		prev->setDocumentHandler(this->fXIncludeHandler);
		$nc(this->fXIncludeHandler)->setDocumentSource(prev);
		if (next != nullptr) {
			$nc(this->fXIncludeHandler)->setDocumentHandler(next);
			next->setDocumentSource(this->fXIncludeHandler);
		}
	} else if (!$equals(this->fCurrentNSContext, this->fNonXIncludeNSContext)) {
		$set(this, fCurrentNSContext, this->fNonXIncludeNSContext);
		setProperty(XIncludeAwareParserConfiguration::NAMESPACE_CONTEXT, this->fNonXIncludeNSContext);
	}
}

$FeatureState* XIncludeAwareParserConfiguration::getFeatureState($String* featureId) {
	$init($ParserConfigurationSettings);
	if ($nc(featureId)->equals($ParserConfigurationSettings::PARSER_SETTINGS)) {
		return $FeatureState::is(this->fConfigUpdated);
	} else if (featureId->equals(XIncludeAwareParserConfiguration::XINCLUDE_FEATURE)) {
		return $FeatureState::is(this->fXIncludeEnabled);
	}
	return $XML11Configuration::getFeatureState0(featureId);
}

void XIncludeAwareParserConfiguration::setFeature($String* featureId, bool state) {
	if ($nc(featureId)->equals(XIncludeAwareParserConfiguration::XINCLUDE_FEATURE)) {
		this->fXIncludeEnabled = state;
		this->fConfigUpdated = true;
		return;
	}
	$XML11Configuration::setFeature(featureId, state);
}

XIncludeAwareParserConfiguration::XIncludeAwareParserConfiguration() {
}

void clinit$XIncludeAwareParserConfiguration($Class* class$) {
	$init($Constants);
	$assignStatic(XIncludeAwareParserConfiguration::ALLOW_UE_AND_NOTATION_EVENTS, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::ALLOW_DTD_EVENTS_AFTER_ENDDTD_FEATURE}));
	$assignStatic(XIncludeAwareParserConfiguration::XINCLUDE_FIXUP_BASE_URIS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::XINCLUDE_FIXUP_BASE_URIS_FEATURE}));
	$assignStatic(XIncludeAwareParserConfiguration::XINCLUDE_FIXUP_LANGUAGE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::XINCLUDE_FIXUP_LANGUAGE_FEATURE}));
	$assignStatic(XIncludeAwareParserConfiguration::XINCLUDE_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::XINCLUDE_FEATURE}));
	$assignStatic(XIncludeAwareParserConfiguration::XINCLUDE_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XINCLUDE_HANDLER_PROPERTY}));
	$assignStatic(XIncludeAwareParserConfiguration::NAMESPACE_CONTEXT, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::NAMESPACE_CONTEXT_PROPERTY}));
}

$Class* XIncludeAwareParserConfiguration::load$($String* name, bool initialize) {
	$loadClass(XIncludeAwareParserConfiguration, name, initialize, &_XIncludeAwareParserConfiguration_ClassInfo_, clinit$XIncludeAwareParserConfiguration, allocate$XIncludeAwareParserConfiguration);
	return class$;
}

$Class* XIncludeAwareParserConfiguration::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com