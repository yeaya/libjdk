#include <com/sun/org/apache/xerces/internal/jaxp/validation/StreamValidatorHelper.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/RevalidationHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/JAXPValidationMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/Util.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaValidatorComponentManager.h>
#include <com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLPullParserConfiguration.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/ref/SoftReference.h>
#include <java/util/Locale.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/TransformerConfigurationException.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/transform/TransformerFactoryConfigurationError.h>
#include <javax/xml/transform/sax/SAXTransformerFactory.h>
#include <javax/xml/transform/sax/TransformerHandler.h>
#include <javax/xml/transform/stream/StreamResult.h>
#include <javax/xml/transform/stream/StreamSource.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

#undef CDATA_CHUNK_SIZE
#undef ENTITY_RESOLVER
#undef ENTITY_RESOLVER_PROPERTY
#undef ERROR_HANDLER
#undef ERROR_HANDLER_PROPERTY
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef FEATURE_SECURE_PROCESSING
#undef OVERRIDE_PARSER
#undef PARSER_SETTINGS
#undef SCHEMA_VALIDATOR
#undef SCHEMA_VALIDATOR_PROPERTY
#undef SECURITY_MANAGER
#undef SECURITY_MANAGER_PROPERTY
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef VALIDATION_MANAGER
#undef VALIDATION_MANAGER_PROPERTY
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLNS_DOMAIN
#undef XML_DOMAIN
#undef XML_SECURITY_PROPERTY_MANAGER

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $RevalidationHandler = ::com::sun::org::apache::xerces::internal::impl::RevalidationHandler;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $JAXPValidationMessageFormatter = ::com::sun::org::apache::xerces::internal::jaxp::validation::JAXPValidationMessageFormatter;
using $Util = ::com::sun::org::apache::xerces::internal::jaxp::validation::Util;
using $ValidatorHandlerImpl = ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl;
using $XMLSchemaValidatorComponentManager = ::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaValidatorComponentManager;
using $XML11Configuration = ::com::sun::org::apache::xerces::internal::parsers::XML11Configuration;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $ParserConfigurationSettings = ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLDTDContentModelHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler;
using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLDocumentFilter = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $XMLPullParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Locale = ::java::util::Locale;
using $XMLConstants = ::javax::xml::XMLConstants;
using $Result = ::javax::xml::transform::Result;
using $Source = ::javax::xml::transform::Source;
using $TransformerConfigurationException = ::javax::xml::transform::TransformerConfigurationException;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $TransformerFactoryConfigurationError = ::javax::xml::transform::TransformerFactoryConfigurationError;
using $SAXTransformerFactory = ::javax::xml::transform::sax::SAXTransformerFactory;
using $TransformerHandler = ::javax::xml::transform::sax::TransformerHandler;
using $StreamResult = ::javax::xml::transform::stream::StreamResult;
using $StreamSource = ::javax::xml::transform::stream::StreamSource;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $ContentHandler = ::org::xml::sax::ContentHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _StreamValidatorHelper_FieldInfo_[] = {
	{"PARSER_SETTINGS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StreamValidatorHelper, PARSER_SETTINGS)},
	{"ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StreamValidatorHelper, ENTITY_RESOLVER)},
	{"ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StreamValidatorHelper, ERROR_HANDLER)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StreamValidatorHelper, ERROR_REPORTER)},
	{"SCHEMA_VALIDATOR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StreamValidatorHelper, SCHEMA_VALIDATOR)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StreamValidatorHelper, SYMBOL_TABLE)},
	{"VALIDATION_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StreamValidatorHelper, VALIDATION_MANAGER)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StreamValidatorHelper, SECURITY_MANAGER)},
	{"fConfiguration", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;>;", $PRIVATE, $field(StreamValidatorHelper, fConfiguration)},
	{"fSchemaValidator", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;", nullptr, $PRIVATE, $field(StreamValidatorHelper, fSchemaValidator)},
	{"fComponentManager", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaValidatorComponentManager;", nullptr, $PRIVATE, $field(StreamValidatorHelper, fComponentManager)},
	{"handler", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl;", nullptr, $PRIVATE, $field(StreamValidatorHelper, handler)},
	{}
};

$MethodInfo _StreamValidatorHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaValidatorComponentManager;)V", nullptr, $PUBLIC, $method(StreamValidatorHelper, init$, void, $XMLSchemaValidatorComponentManager*)},
	{"initialize", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;", nullptr, $PRIVATE, $method(StreamValidatorHelper, initialize, $XMLParserConfiguration*)},
	{"validate", "(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V", nullptr, $PUBLIC, $virtualMethod(StreamValidatorHelper, validate, void, $Source*, $Result*), "org.xml.sax.SAXException,java.io.IOException"},
	{}
};

$ClassInfo _StreamValidatorHelper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.StreamValidatorHelper",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHelper",
	_StreamValidatorHelper_FieldInfo_,
	_StreamValidatorHelper_MethodInfo_
};

$Object* allocate$StreamValidatorHelper($Class* clazz) {
	return $of($alloc(StreamValidatorHelper));
}

$String* StreamValidatorHelper::PARSER_SETTINGS = nullptr;
$String* StreamValidatorHelper::ENTITY_RESOLVER = nullptr;
$String* StreamValidatorHelper::ERROR_HANDLER = nullptr;
$String* StreamValidatorHelper::ERROR_REPORTER = nullptr;
$String* StreamValidatorHelper::SCHEMA_VALIDATOR = nullptr;
$String* StreamValidatorHelper::SYMBOL_TABLE = nullptr;
$String* StreamValidatorHelper::VALIDATION_MANAGER = nullptr;
$String* StreamValidatorHelper::SECURITY_MANAGER = nullptr;

void StreamValidatorHelper::init$($XMLSchemaValidatorComponentManager* componentManager) {
	$set(this, fConfiguration, $new($SoftReference, nullptr));
	$set(this, handler, nullptr);
	$set(this, fComponentManager, componentManager);
	$set(this, fSchemaValidator, $cast($XMLSchemaValidator, $nc(this->fComponentManager)->getProperty(StreamValidatorHelper::SCHEMA_VALIDATOR)));
}

void StreamValidatorHelper::validate($Source* source, $Result* result) {
	$useLocalCurrentObjectStackCache();
	if (result == nullptr || $instanceOf($StreamResult, result)) {
		$var($StreamSource, streamSource, $cast($StreamSource, source));
		$var($TransformerHandler, identityTransformerHandler, nullptr);
		if (result != nullptr) {
			try {
				$init($JdkConstants);
				$var($SAXTransformerFactory, tf, $JdkXmlUtils::getSAXTransformFactory($nc(this->fComponentManager)->getFeature($JdkConstants::OVERRIDE_PARSER)));
				$assign(identityTransformerHandler, $nc(tf)->newTransformerHandler());
			} catch ($TransformerConfigurationException& e) {
				$throwNew($TransformerFactoryConfigurationError, static_cast<$Exception*>(e));
			}
			$set(this, handler, $new($ValidatorHandlerImpl, this->fComponentManager));
			$nc(this->handler)->setContentHandler(identityTransformerHandler);
			$nc(identityTransformerHandler)->setResult(result);
		}
		$var($String, var$0, $nc(streamSource)->getPublicId());
		$var($XMLInputSource, input, $new($XMLInputSource, var$0, $(streamSource->getSystemId()), nullptr, false));
		input->setByteStream($($nc(streamSource)->getInputStream()));
		input->setCharacterStream($($nc(streamSource)->getReader()));
		$var($XMLParserConfiguration, config, $cast($XMLParserConfiguration, $nc(this->fConfiguration)->get()));
		if (config == nullptr) {
			$assign(config, initialize());
		} else if ($nc(this->fComponentManager)->getFeature(StreamValidatorHelper::PARSER_SETTINGS)) {
			$nc(config)->setProperty(StreamValidatorHelper::ENTITY_RESOLVER, $($nc(this->fComponentManager)->getProperty(StreamValidatorHelper::ENTITY_RESOLVER)));
			config->setProperty(StreamValidatorHelper::ERROR_HANDLER, $($nc(this->fComponentManager)->getProperty(StreamValidatorHelper::ERROR_HANDLER)));
		}
		$nc(this->fComponentManager)->reset();
		$nc(this->fSchemaValidator)->setDocumentHandler(this->handler);
		try {
			$nc(config)->parse(input);
		} catch ($XMLParseException& e) {
			$throw($($Util::toSAXParseException(e)));
		} catch ($XNIException& e) {
			$throw($($Util::toSAXException(e)));
		}
		return;
	}
	$var($Locale, var$1, $nc(this->fComponentManager)->getLocale());
	$var($String, var$2, "SourceResultMismatch"_s);
	$throwNew($IllegalArgumentException, $($JAXPValidationMessageFormatter::formatMessage(var$1, var$2, $$new($ObjectArray, {
		$($of($nc($of(source))->getClass()->getName())),
		$($of($nc($of(result))->getClass()->getName()))
	}))));
}

$XMLParserConfiguration* StreamValidatorHelper::initialize() {
	$useLocalCurrentObjectStackCache();
	$var($XML11Configuration, config, $new($XML11Configuration));
	$init($XMLConstants);
	if ($nc(this->fComponentManager)->getFeature($XMLConstants::FEATURE_SECURE_PROCESSING)) {
		config->setProperty(StreamValidatorHelper::SECURITY_MANAGER, $$new($XMLSecurityManager));
	}
	config->setProperty(StreamValidatorHelper::ENTITY_RESOLVER, $($nc(this->fComponentManager)->getProperty(StreamValidatorHelper::ENTITY_RESOLVER)));
	config->setProperty(StreamValidatorHelper::ERROR_HANDLER, $($nc(this->fComponentManager)->getProperty(StreamValidatorHelper::ERROR_HANDLER)));
	$var($XMLErrorReporter, errorReporter, $cast($XMLErrorReporter, $nc(this->fComponentManager)->getProperty(StreamValidatorHelper::ERROR_REPORTER)));
	config->setProperty(StreamValidatorHelper::ERROR_REPORTER, errorReporter);
	$init($XMLMessageFormatter);
	if ($nc(errorReporter)->getMessageFormatter($XMLMessageFormatter::XML_DOMAIN) == nullptr) {
		$var($XMLMessageFormatter, xmft, $new($XMLMessageFormatter));
		errorReporter->putMessageFormatter($XMLMessageFormatter::XML_DOMAIN, xmft);
		errorReporter->putMessageFormatter($XMLMessageFormatter::XMLNS_DOMAIN, xmft);
	}
	config->setProperty(StreamValidatorHelper::SYMBOL_TABLE, $($nc(this->fComponentManager)->getProperty(StreamValidatorHelper::SYMBOL_TABLE)));
	config->setProperty(StreamValidatorHelper::VALIDATION_MANAGER, $($nc(this->fComponentManager)->getProperty(StreamValidatorHelper::VALIDATION_MANAGER)));
	config->setDocumentHandler(this->fSchemaValidator);
	config->setDTDHandler(nullptr);
	config->setDTDContentModelHandler(nullptr);
	$init($JdkConstants);
	config->setProperty($JdkConstants::XML_SECURITY_PROPERTY_MANAGER, $($nc(this->fComponentManager)->getProperty($JdkConstants::XML_SECURITY_PROPERTY_MANAGER)));
	$init($Constants);
	config->setProperty($Constants::SECURITY_MANAGER, $($nc(this->fComponentManager)->getProperty($Constants::SECURITY_MANAGER)));
	$JdkXmlUtils::catalogFeaturesConfig2Config(this->fComponentManager, config);
	config->setProperty($JdkConstants::CDATA_CHUNK_SIZE, $($nc(this->fComponentManager)->getProperty($JdkConstants::CDATA_CHUNK_SIZE)));
	$set(this, fConfiguration, $new($SoftReference, config));
	return config;
}

StreamValidatorHelper::StreamValidatorHelper() {
}

void clinit$StreamValidatorHelper($Class* class$) {
	$init($Constants);
	$assignStatic(StreamValidatorHelper::PARSER_SETTINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::PARSER_SETTINGS}));
	$assignStatic(StreamValidatorHelper::ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_RESOLVER_PROPERTY}));
	$assignStatic(StreamValidatorHelper::ERROR_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_HANDLER_PROPERTY}));
	$assignStatic(StreamValidatorHelper::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(StreamValidatorHelper::SCHEMA_VALIDATOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_VALIDATOR_PROPERTY}));
	$assignStatic(StreamValidatorHelper::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(StreamValidatorHelper::VALIDATION_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::VALIDATION_MANAGER_PROPERTY}));
	$assignStatic(StreamValidatorHelper::SECURITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SECURITY_MANAGER_PROPERTY}));
}

$Class* StreamValidatorHelper::load$($String* name, bool initialize) {
	$loadClass(StreamValidatorHelper, name, initialize, &_StreamValidatorHelper_ClassInfo_, clinit$StreamValidatorHelper, allocate$StreamValidatorHelper);
	return class$;
}

$Class* StreamValidatorHelper::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com