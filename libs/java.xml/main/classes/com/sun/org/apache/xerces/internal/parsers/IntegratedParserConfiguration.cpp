#include <com/sun/org/apache/xerces/internal/parsers/IntegratedParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLNSDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLNamespaceBinder.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLNSDTDValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/parsers/BasicParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/parsers/DTDConfiguration.h>
#include <com/sun/org/apache/xerces/internal/parsers/StandardParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentScanner.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef DATATYPE_VALIDATOR_FACTORY
#undef DOCUMENT_SCANNER
#undef DTD_VALIDATOR
#undef NAMESPACES
#undef NAMESPACE_BINDER
#undef SCHEMA_DOMAIN
#undef SCHEMA_VALIDATOR
#undef TRUE
#undef XMLSCHEMA_VALIDATION

using $XMLDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl;
using $XMLNSDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLNSDocumentScannerImpl;
using $XMLDTDValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator;
using $XMLDTDValidatorFilter = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidatorFilter;
using $XMLNSDTDValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLNSDTDValidator;
using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $XSMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::xs::XSMessageFormatter;
using $BasicParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::BasicParserConfiguration;
using $DTDConfiguration = ::com::sun::org::apache::xerces::internal::parsers::DTDConfiguration;
using $StandardParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::StandardParserConfiguration;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLDocumentScanner = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentScanner;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

void IntegratedParserConfiguration::init$() {
	IntegratedParserConfiguration::init$(nullptr, nullptr, nullptr);
}

void IntegratedParserConfiguration::init$($SymbolTable* symbolTable) {
	IntegratedParserConfiguration::init$(symbolTable, nullptr, nullptr);
}

void IntegratedParserConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	IntegratedParserConfiguration::init$(symbolTable, grammarPool, nullptr);
}

void IntegratedParserConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool, $XMLComponentManager* parentSettings) {
	$StandardParserConfiguration::init$(symbolTable, grammarPool, parentSettings);
	$set(this, fNonNSScanner, $new($XMLDocumentScannerImpl));
	$set(this, fNonNSDTDValidator, $new($XMLDTDValidator));
	addComponent($cast($XMLComponent, this->fNonNSScanner));
	addComponent($cast($XMLComponent, this->fNonNSDTDValidator));
}

void IntegratedParserConfiguration::configurePipeline() {
	$init($DTDConfiguration);
	setProperty($DTDConfiguration::DATATYPE_VALIDATOR_FACTORY, this->fDatatypeValidatorFactory);
	configureDTDPipeline();
	$init($BasicParserConfiguration);
	if ($equals($nc(this->fFeatures)->get($BasicParserConfiguration::NAMESPACES), $Boolean::TRUE)) {
		$nc(this->fProperties)->put($DTDConfiguration::NAMESPACE_BINDER, this->fNamespaceBinder);
		$set(this, fScanner, this->fNamespaceScanner);
		this->fProperties->put($DTDConfiguration::DOCUMENT_SCANNER, this->fNamespaceScanner);
		if (this->fDTDValidator != nullptr) {
			this->fProperties->put($DTDConfiguration::DTD_VALIDATOR, this->fDTDValidator);
			$nc(this->fNamespaceScanner)->setDTDValidator(this->fDTDValidator);
			$nc(this->fNamespaceScanner)->setDocumentHandler($cast($XMLDTDValidatorFilter, this->fDTDValidator));
			$nc(this->fDTDValidator)->setDocumentSource(this->fNamespaceScanner);
			$nc(this->fDTDValidator)->setDocumentHandler(this->fDocumentHandler);
			if (this->fDocumentHandler != nullptr) {
				this->fDocumentHandler->setDocumentSource($cast($XMLDTDValidatorFilter, this->fDTDValidator));
			}
			$set(this, fLastComponent, $cast($XMLDTDValidatorFilter, this->fDTDValidator));
		} else {
			$nc(this->fNamespaceScanner)->setDocumentHandler(this->fDocumentHandler);
			$nc(this->fNamespaceScanner)->setDTDValidator(nullptr);
			if (this->fDocumentHandler != nullptr) {
				this->fDocumentHandler->setDocumentSource(this->fNamespaceScanner);
			}
			$set(this, fLastComponent, this->fNamespaceScanner);
		}
	} else {
		$set(this, fScanner, this->fNonNSScanner);
		$nc(this->fProperties)->put($DTDConfiguration::DOCUMENT_SCANNER, this->fNonNSScanner);
		if (this->fNonNSDTDValidator != nullptr) {
			this->fProperties->put($DTDConfiguration::DTD_VALIDATOR, this->fNonNSDTDValidator);
			$nc(this->fNonNSScanner)->setDocumentHandler($cast($XMLDTDValidatorFilter, this->fNonNSDTDValidator));
			$nc(this->fNonNSDTDValidator)->setDocumentSource(this->fNonNSScanner);
			$nc(this->fNonNSDTDValidator)->setDocumentHandler(this->fDocumentHandler);
			if (this->fDocumentHandler != nullptr) {
				this->fDocumentHandler->setDocumentSource($cast($XMLDTDValidatorFilter, this->fNonNSDTDValidator));
			}
			$set(this, fLastComponent, $cast($XMLDTDValidatorFilter, this->fNonNSDTDValidator));
		} else {
			$nc(this->fScanner)->setDocumentHandler(this->fDocumentHandler);
			if (this->fDocumentHandler != nullptr) {
				this->fDocumentHandler->setDocumentSource(this->fScanner);
			}
			$set(this, fLastComponent, this->fScanner);
		}
	}
	$init($StandardParserConfiguration);
	if ($equals($nc(this->fFeatures)->get($StandardParserConfiguration::XMLSCHEMA_VALIDATION), $Boolean::TRUE)) {
		if (this->fSchemaValidator == nullptr) {
			$set(this, fSchemaValidator, $new($XMLSchemaValidator));
			$nc(this->fProperties)->put($StandardParserConfiguration::SCHEMA_VALIDATOR, this->fSchemaValidator);
			addComponent(this->fSchemaValidator);
			$init($XSMessageFormatter);
			if ($nc(this->fErrorReporter)->getMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN) == nullptr) {
				$var($XSMessageFormatter, xmft, $new($XSMessageFormatter));
				$nc(this->fErrorReporter)->putMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN, xmft);
			}
		}
		$nc(this->fLastComponent)->setDocumentHandler(this->fSchemaValidator);
		$nc(this->fSchemaValidator)->setDocumentSource(this->fLastComponent);
		$nc(this->fSchemaValidator)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			this->fDocumentHandler->setDocumentSource(this->fSchemaValidator);
		}
		$set(this, fLastComponent, this->fSchemaValidator);
	}
}

$XMLDocumentScanner* IntegratedParserConfiguration::createDocumentScanner() {
	$set(this, fNamespaceScanner, $new($XMLNSDocumentScannerImpl));
	return this->fNamespaceScanner;
}

$XMLDTDValidator* IntegratedParserConfiguration::createDTDValidator() {
	return $new($XMLNSDTDValidator);
}

IntegratedParserConfiguration::IntegratedParserConfiguration() {
}

$Class* IntegratedParserConfiguration::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fNamespaceScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLNSDocumentScannerImpl;", nullptr, $PROTECTED, $field(IntegratedParserConfiguration, fNamespaceScanner)},
		{"fNonNSScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;", nullptr, $PROTECTED, $field(IntegratedParserConfiguration, fNonNSScanner)},
		{"fNonNSDTDValidator", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator;", nullptr, $PROTECTED, $field(IntegratedParserConfiguration, fNonNSDTDValidator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IntegratedParserConfiguration, init$, void)},
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(IntegratedParserConfiguration, init$, void, $SymbolTable*)},
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(IntegratedParserConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*)},
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $method(IntegratedParserConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*, $XMLComponentManager*)},
		{"configurePipeline", "()V", nullptr, $PROTECTED, $virtualMethod(IntegratedParserConfiguration, configurePipeline, void)},
		{"createDTDValidator", "()Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator;", nullptr, $PROTECTED, $virtualMethod(IntegratedParserConfiguration, createDTDValidator, $XMLDTDValidator*)},
		{"createDocumentScanner", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentScanner;", nullptr, $PROTECTED, $virtualMethod(IntegratedParserConfiguration, createDocumentScanner, $XMLDocumentScanner*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.parsers.IntegratedParserConfiguration",
		"com.sun.org.apache.xerces.internal.parsers.StandardParserConfiguration",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntegratedParserConfiguration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(IntegratedParserConfiguration));
	});
	return class$;
}

$Class* IntegratedParserConfiguration::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com