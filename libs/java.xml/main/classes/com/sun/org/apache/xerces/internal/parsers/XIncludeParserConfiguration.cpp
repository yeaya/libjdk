#include <com/sun/org/apache/xerces/internal/parsers/XIncludeParserConfiguration.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XML11DTDScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XML11DTDProcessor.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDLoader.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDProcessor.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeHandler.h>
#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeNamespaceSupport.h>
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
#undef SAX_FEATURE_PREFIX
#undef TRUE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
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
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XIncludeHandler = ::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler;
using $XIncludeNamespaceSupport = ::com::sun::org::apache::xerces::internal::xinclude::XIncludeNamespaceSupport;
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

$FieldInfo _XIncludeParserConfiguration_FieldInfo_[] = {
	{"fXIncludeHandler", "Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeHandler;", nullptr, $PRIVATE, $field(XIncludeParserConfiguration, fXIncludeHandler)},
	{"ALLOW_UE_AND_NOTATION_EVENTS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeParserConfiguration, ALLOW_UE_AND_NOTATION_EVENTS)},
	{"XINCLUDE_FIXUP_BASE_URIS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeParserConfiguration, XINCLUDE_FIXUP_BASE_URIS)},
	{"XINCLUDE_FIXUP_LANGUAGE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeParserConfiguration, XINCLUDE_FIXUP_LANGUAGE)},
	{"XINCLUDE_HANDLER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeParserConfiguration, XINCLUDE_HANDLER)},
	{"NAMESPACE_CONTEXT", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XIncludeParserConfiguration, NAMESPACE_CONTEXT)},
	{}
};

$MethodInfo _XIncludeParserConfiguration_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XIncludeParserConfiguration, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(XIncludeParserConfiguration, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(XIncludeParserConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $method(XIncludeParserConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*, $XMLComponentManager*)},
	{"configurePipeline", "()V", nullptr, $PROTECTED, $virtualMethod(XIncludeParserConfiguration, configurePipeline, void)},
	{"configureXML11Pipeline", "()V", nullptr, $PROTECTED, $virtualMethod(XIncludeParserConfiguration, configureXML11Pipeline, void)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeParserConfiguration, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{}
};

$ClassInfo _XIncludeParserConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.XIncludeParserConfiguration",
	"com.sun.org.apache.xerces.internal.parsers.XML11Configuration",
	nullptr,
	_XIncludeParserConfiguration_FieldInfo_,
	_XIncludeParserConfiguration_MethodInfo_
};

$Object* allocate$XIncludeParserConfiguration($Class* clazz) {
	return $of($alloc(XIncludeParserConfiguration));
}

$String* XIncludeParserConfiguration::ALLOW_UE_AND_NOTATION_EVENTS = nullptr;
$String* XIncludeParserConfiguration::XINCLUDE_FIXUP_BASE_URIS = nullptr;
$String* XIncludeParserConfiguration::XINCLUDE_FIXUP_LANGUAGE = nullptr;
$String* XIncludeParserConfiguration::XINCLUDE_HANDLER = nullptr;
$String* XIncludeParserConfiguration::NAMESPACE_CONTEXT = nullptr;

void XIncludeParserConfiguration::init$() {
	XIncludeParserConfiguration::init$(nullptr, nullptr, nullptr);
}

void XIncludeParserConfiguration::init$($SymbolTable* symbolTable) {
	XIncludeParserConfiguration::init$(symbolTable, nullptr, nullptr);
}

void XIncludeParserConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	XIncludeParserConfiguration::init$(symbolTable, grammarPool, nullptr);
}

void XIncludeParserConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool, $XMLComponentManager* parentSettings) {
	$useLocalCurrentObjectStackCache();
	$XML11Configuration::init$(symbolTable, grammarPool, parentSettings);
	$set(this, fXIncludeHandler, $new($XIncludeHandler));
	addCommonComponent(this->fXIncludeHandler);
	$var($StringArray, recognizedFeatures, $new($StringArray, {
		XIncludeParserConfiguration::ALLOW_UE_AND_NOTATION_EVENTS,
		XIncludeParserConfiguration::XINCLUDE_FIXUP_BASE_URIS,
		XIncludeParserConfiguration::XINCLUDE_FIXUP_LANGUAGE
	}));
	addRecognizedFeatures(recognizedFeatures);
	$var($StringArray, recognizedProperties, $new($StringArray, {
		XIncludeParserConfiguration::XINCLUDE_HANDLER,
		XIncludeParserConfiguration::NAMESPACE_CONTEXT
	}));
	addRecognizedProperties(recognizedProperties);
	setFeature(XIncludeParserConfiguration::ALLOW_UE_AND_NOTATION_EVENTS, true);
	setFeature(XIncludeParserConfiguration::XINCLUDE_FIXUP_BASE_URIS, true);
	setFeature(XIncludeParserConfiguration::XINCLUDE_FIXUP_LANGUAGE, true);
	setProperty(XIncludeParserConfiguration::XINCLUDE_HANDLER, this->fXIncludeHandler);
	setProperty(XIncludeParserConfiguration::NAMESPACE_CONTEXT, $$new($XIncludeNamespaceSupport));
}

void XIncludeParserConfiguration::configurePipeline() {
	$useLocalCurrentObjectStackCache();
	$XML11Configuration::configurePipeline();
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
	if (prev != nullptr) {
		$var($XMLDocumentHandler, next, prev->getDocumentHandler());
		prev->setDocumentHandler(this->fXIncludeHandler);
		$nc(this->fXIncludeHandler)->setDocumentSource(prev);
		if (next != nullptr) {
			$nc(this->fXIncludeHandler)->setDocumentHandler(next);
			next->setDocumentSource(this->fXIncludeHandler);
		}
	} else {
		setDocumentHandler(this->fXIncludeHandler);
	}
}

void XIncludeParserConfiguration::configureXML11Pipeline() {
	$useLocalCurrentObjectStackCache();
	$XML11Configuration::configureXML11Pipeline();
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
}

void XIncludeParserConfiguration::setProperty($String* propertyId, Object$* value) {
	if ($nc(propertyId)->equals(XIncludeParserConfiguration::XINCLUDE_HANDLER)) {
	}
	$XML11Configuration::setProperty(propertyId, value);
}

XIncludeParserConfiguration::XIncludeParserConfiguration() {
}

void clinit$XIncludeParserConfiguration($Class* class$) {
	$init($Constants);
	$assignStatic(XIncludeParserConfiguration::ALLOW_UE_AND_NOTATION_EVENTS, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::ALLOW_DTD_EVENTS_AFTER_ENDDTD_FEATURE}));
	$assignStatic(XIncludeParserConfiguration::XINCLUDE_FIXUP_BASE_URIS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::XINCLUDE_FIXUP_BASE_URIS_FEATURE}));
	$assignStatic(XIncludeParserConfiguration::XINCLUDE_FIXUP_LANGUAGE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::XINCLUDE_FIXUP_LANGUAGE_FEATURE}));
	$assignStatic(XIncludeParserConfiguration::XINCLUDE_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XINCLUDE_HANDLER_PROPERTY}));
	$assignStatic(XIncludeParserConfiguration::NAMESPACE_CONTEXT, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::NAMESPACE_CONTEXT_PROPERTY}));
}

$Class* XIncludeParserConfiguration::load$($String* name, bool initialize) {
	$loadClass(XIncludeParserConfiguration, name, initialize, &_XIncludeParserConfiguration_ClassInfo_, clinit$XIncludeParserConfiguration, allocate$XIncludeParserConfiguration);
	return class$;
}

$Class* XIncludeParserConfiguration::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com