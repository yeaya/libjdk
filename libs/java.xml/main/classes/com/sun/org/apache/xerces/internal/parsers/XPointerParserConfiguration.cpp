#include <com/sun/org/apache/xerces/internal/parsers/XPointerParserConfiguration.h>

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
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerHandler.h>
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
#undef XPOINTER_HANDLER
#undef XPOINTER_HANDLER_PROPERTY

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
using $XPointerHandler = ::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler;
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

$FieldInfo _XPointerParserConfiguration_FieldInfo_[] = {
	{"fXPointerHandler", "Lcom/sun/org/apache/xerces/internal/xpointer/XPointerHandler;", nullptr, $PRIVATE, $field(XPointerParserConfiguration, fXPointerHandler)},
	{"fXIncludeHandler", "Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeHandler;", nullptr, $PRIVATE, $field(XPointerParserConfiguration, fXIncludeHandler)},
	{"ALLOW_UE_AND_NOTATION_EVENTS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XPointerParserConfiguration, ALLOW_UE_AND_NOTATION_EVENTS)},
	{"XINCLUDE_FIXUP_BASE_URIS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XPointerParserConfiguration, XINCLUDE_FIXUP_BASE_URIS)},
	{"XINCLUDE_FIXUP_LANGUAGE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XPointerParserConfiguration, XINCLUDE_FIXUP_LANGUAGE)},
	{"XPOINTER_HANDLER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XPointerParserConfiguration, XPOINTER_HANDLER)},
	{"XINCLUDE_HANDLER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XPointerParserConfiguration, XINCLUDE_HANDLER)},
	{"NAMESPACE_CONTEXT", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XPointerParserConfiguration, NAMESPACE_CONTEXT)},
	{}
};

$MethodInfo _XPointerParserConfiguration_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XPointerParserConfiguration, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(XPointerParserConfiguration, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(XPointerParserConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $method(XPointerParserConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*, $XMLComponentManager*)},
	{"configurePipeline", "()V", nullptr, $PROTECTED, $virtualMethod(XPointerParserConfiguration, configurePipeline, void)},
	{"configureXML11Pipeline", "()V", nullptr, $PROTECTED, $virtualMethod(XPointerParserConfiguration, configureXML11Pipeline, void)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XPointerParserConfiguration, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{}
};

$ClassInfo _XPointerParserConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.XPointerParserConfiguration",
	"com.sun.org.apache.xerces.internal.parsers.XML11Configuration",
	nullptr,
	_XPointerParserConfiguration_FieldInfo_,
	_XPointerParserConfiguration_MethodInfo_
};

$Object* allocate$XPointerParserConfiguration($Class* clazz) {
	return $of($alloc(XPointerParserConfiguration));
}

$String* XPointerParserConfiguration::ALLOW_UE_AND_NOTATION_EVENTS = nullptr;
$String* XPointerParserConfiguration::XINCLUDE_FIXUP_BASE_URIS = nullptr;
$String* XPointerParserConfiguration::XINCLUDE_FIXUP_LANGUAGE = nullptr;
$String* XPointerParserConfiguration::XPOINTER_HANDLER = nullptr;
$String* XPointerParserConfiguration::XINCLUDE_HANDLER = nullptr;
$String* XPointerParserConfiguration::NAMESPACE_CONTEXT = nullptr;

void XPointerParserConfiguration::init$() {
	XPointerParserConfiguration::init$(nullptr, nullptr, nullptr);
}

void XPointerParserConfiguration::init$($SymbolTable* symbolTable) {
	XPointerParserConfiguration::init$(symbolTable, nullptr, nullptr);
}

void XPointerParserConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	XPointerParserConfiguration::init$(symbolTable, grammarPool, nullptr);
}

void XPointerParserConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool, $XMLComponentManager* parentSettings) {
	$useLocalCurrentObjectStackCache();
	$XML11Configuration::init$(symbolTable, grammarPool, parentSettings);
	$set(this, fXIncludeHandler, $new($XIncludeHandler));
	addCommonComponent(this->fXIncludeHandler);
	$set(this, fXPointerHandler, $new($XPointerHandler));
	addCommonComponent(this->fXPointerHandler);
	$var($StringArray, recognizedFeatures, $new($StringArray, {
		XPointerParserConfiguration::ALLOW_UE_AND_NOTATION_EVENTS,
		XPointerParserConfiguration::XINCLUDE_FIXUP_BASE_URIS,
		XPointerParserConfiguration::XINCLUDE_FIXUP_LANGUAGE
	}));
	addRecognizedFeatures(recognizedFeatures);
	$var($StringArray, recognizedProperties, $new($StringArray, {
		XPointerParserConfiguration::XINCLUDE_HANDLER,
		XPointerParserConfiguration::XPOINTER_HANDLER,
		XPointerParserConfiguration::NAMESPACE_CONTEXT
	}));
	addRecognizedProperties(recognizedProperties);
	setFeature(XPointerParserConfiguration::ALLOW_UE_AND_NOTATION_EVENTS, true);
	setFeature(XPointerParserConfiguration::XINCLUDE_FIXUP_BASE_URIS, true);
	setFeature(XPointerParserConfiguration::XINCLUDE_FIXUP_LANGUAGE, true);
	setProperty(XPointerParserConfiguration::XINCLUDE_HANDLER, this->fXIncludeHandler);
	setProperty(XPointerParserConfiguration::XPOINTER_HANDLER, this->fXPointerHandler);
	setProperty(XPointerParserConfiguration::NAMESPACE_CONTEXT, $$new($XIncludeNamespaceSupport));
}

void XPointerParserConfiguration::configurePipeline() {
	$useLocalCurrentObjectStackCache();
	$XML11Configuration::configurePipeline();
	$nc(this->fDTDScanner)->setDTDHandler(this->fDTDProcessor);
	$nc(this->fDTDProcessor)->setDTDSource(this->fDTDScanner);
	$nc(this->fDTDProcessor)->setDTDHandler(this->fXIncludeHandler);
	$nc(this->fXIncludeHandler)->setDTDSource(this->fDTDProcessor);
	$nc(this->fXIncludeHandler)->setDTDHandler(this->fXPointerHandler);
	$nc(this->fXPointerHandler)->setDTDSource(this->fXIncludeHandler);
	$nc(this->fXPointerHandler)->setDTDHandler(this->fDTDHandler);
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->setDTDSource(this->fXPointerHandler);
	}
	$var($XMLDocumentSource, prev, nullptr);
	$init($Boolean);
	if ($equals($nc(this->fFeatures)->get($XML11Configuration::XMLSCHEMA_VALIDATION), $Boolean::TRUE)) {
		$assign(prev, $nc(this->fSchemaValidator)->getDocumentSource());
	} else {
		$assign(prev, this->fLastComponent);
		$set(this, fLastComponent, this->fXPointerHandler);
	}
	$var($XMLDocumentHandler, next, $nc(prev)->getDocumentHandler());
	prev->setDocumentHandler(this->fXIncludeHandler);
	$nc(this->fXIncludeHandler)->setDocumentSource(prev);
	if (next != nullptr) {
		$nc(this->fXIncludeHandler)->setDocumentHandler(next);
		next->setDocumentSource(this->fXIncludeHandler);
	}
	$nc(this->fXIncludeHandler)->setDocumentHandler(this->fXPointerHandler);
	$nc(this->fXPointerHandler)->setDocumentSource(this->fXIncludeHandler);
}

void XPointerParserConfiguration::configureXML11Pipeline() {
	$useLocalCurrentObjectStackCache();
	$XML11Configuration::configureXML11Pipeline();
	$nc(this->fXML11DTDScanner)->setDTDHandler(this->fXML11DTDProcessor);
	$nc(this->fXML11DTDProcessor)->setDTDSource(this->fXML11DTDScanner);
	$nc(this->fDTDProcessor)->setDTDHandler(this->fXIncludeHandler);
	$nc(this->fXIncludeHandler)->setDTDSource(this->fXML11DTDProcessor);
	$nc(this->fXIncludeHandler)->setDTDHandler(this->fXPointerHandler);
	$nc(this->fXPointerHandler)->setDTDSource(this->fXIncludeHandler);
	$nc(this->fXPointerHandler)->setDTDHandler(this->fDTDHandler);
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->setDTDSource(this->fXPointerHandler);
	}
	$var($XMLDocumentSource, prev, nullptr);
	$init($Boolean);
	if ($equals($nc(this->fFeatures)->get($XML11Configuration::XMLSCHEMA_VALIDATION), $Boolean::TRUE)) {
		$assign(prev, $nc(this->fSchemaValidator)->getDocumentSource());
	} else {
		$assign(prev, this->fLastComponent);
		$set(this, fLastComponent, this->fXPointerHandler);
	}
	$var($XMLDocumentHandler, next, $nc(prev)->getDocumentHandler());
	prev->setDocumentHandler(this->fXIncludeHandler);
	$nc(this->fXIncludeHandler)->setDocumentSource(prev);
	if (next != nullptr) {
		$nc(this->fXIncludeHandler)->setDocumentHandler(next);
		next->setDocumentSource(this->fXIncludeHandler);
	}
	$nc(this->fXIncludeHandler)->setDocumentHandler(this->fXPointerHandler);
	$nc(this->fXPointerHandler)->setDocumentSource(this->fXIncludeHandler);
}

void XPointerParserConfiguration::setProperty($String* propertyId, Object$* value) {
	$XML11Configuration::setProperty(propertyId, value);
}

XPointerParserConfiguration::XPointerParserConfiguration() {
}

void clinit$XPointerParserConfiguration($Class* class$) {
	$init($Constants);
	$assignStatic(XPointerParserConfiguration::ALLOW_UE_AND_NOTATION_EVENTS, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::ALLOW_DTD_EVENTS_AFTER_ENDDTD_FEATURE}));
	$assignStatic(XPointerParserConfiguration::XINCLUDE_FIXUP_BASE_URIS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::XINCLUDE_FIXUP_BASE_URIS_FEATURE}));
	$assignStatic(XPointerParserConfiguration::XINCLUDE_FIXUP_LANGUAGE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::XINCLUDE_FIXUP_LANGUAGE_FEATURE}));
	$assignStatic(XPointerParserConfiguration::XPOINTER_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XPOINTER_HANDLER_PROPERTY}));
	$assignStatic(XPointerParserConfiguration::XINCLUDE_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XINCLUDE_HANDLER_PROPERTY}));
	$assignStatic(XPointerParserConfiguration::NAMESPACE_CONTEXT, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::NAMESPACE_CONTEXT_PROPERTY}));
}

$Class* XPointerParserConfiguration::load$($String* name, bool initialize) {
	$loadClass(XPointerParserConfiguration, name, initialize, &_XPointerParserConfiguration_ClassInfo_, clinit$XPointerParserConfiguration, allocate$XPointerParserConfiguration);
	return class$;
}

$Class* XPointerParserConfiguration::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com