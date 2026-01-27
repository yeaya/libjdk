#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaFactory.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/AbstractXMLSchema.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/DraconianErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/EmptyXMLSchema.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/JAXPValidationMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/ReadOnlyGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/SimpleXMLSchema.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/Util.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/WeakReferenceXMLSchema.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchema.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaFactory$XMLGrammarPoolImplExtension.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaFactory$XMLGrammarPoolWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/DOMEntityResolverWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/DOMInputSource.h>
#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/SAXInputSource.h>
#include <com/sun/org/apache/xerces/internal/util/SAXMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/StAXInputSource.h>
#include <com/sun/org/apache/xerces/internal/util/Status.h>
#include <com/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$Property.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/SecurityManager.h>
#include <java/util/Locale.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/dom/DOMSource.h>
#include <javax/xml/transform/sax/SAXSource.h>
#include <javax/xml/transform/stax/StAXSource.h>
#include <javax/xml/transform/stream/StreamSource.h>
#include <javax/xml/validation/Schema.h>
#include <javax/xml/validation/SchemaFactory.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkProperty$ImplPropMap.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <jdk/xml/internal/JdkXmlFeatures$XmlFeature.h>
#include <jdk/xml/internal/JdkXmlFeatures.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ls/LSResourceResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_DTD
#undef ACCESS_EXTERNAL_SCHEMA
#undef APIPROPERTY
#undef CDATA_CHUNK_SIZE
#undef CDATA_CHUNK_SIZE_DEFAULT
#undef EXTERNAL_ACCESS_DEFAULT_FSP
#undef FEATURE
#undef FEATURE_SECURE_PROCESSING
#undef FSP
#undef JAXP_SOURCE_FEATURE_PREFIX
#undef JDK_OVERRIDE_PARSER
#undef NOT_RECOGNIZED
#undef ORACLE_FEATURE_SERVICE_MECHANISM
#undef OVERRIDEPARSER
#undef OVERRIDE_PARSER
#undef SCHEMA_FULL_CHECKING
#undef SECURITY_MANAGER
#undef SECURITY_MANAGER_PROPERTY
#undef USE_CATALOG
#undef USE_CATALOG_DEFAULT
#undef USE_GRAMMAR_POOL_ONLY
#undef USE_GRAMMAR_POOL_ONLY_FEATURE
#undef W3C_XML_SCHEMA10_NS_URI
#undef W3C_XML_SCHEMA_NS_URI
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLGRAMMAR_POOL
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XML_SCHEMA
#undef XML_SECURITY_PROPERTY_MANAGER

using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $XMLInputSourceArray = $Array<::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource>;
using $CatalogFeatures$FeatureArray = $Array<::javax::xml::catalog::CatalogFeatures$Feature>;
using $SourceArray = $Array<::javax::xml::transform::Source>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLSchemaLoader = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaLoader;
using $AbstractXMLSchema = ::com::sun::org::apache::xerces::internal::jaxp::validation::AbstractXMLSchema;
using $DraconianErrorHandler = ::com::sun::org::apache::xerces::internal::jaxp::validation::DraconianErrorHandler;
using $EmptyXMLSchema = ::com::sun::org::apache::xerces::internal::jaxp::validation::EmptyXMLSchema;
using $JAXPValidationMessageFormatter = ::com::sun::org::apache::xerces::internal::jaxp::validation::JAXPValidationMessageFormatter;
using $ReadOnlyGrammarPool = ::com::sun::org::apache::xerces::internal::jaxp::validation::ReadOnlyGrammarPool;
using $SimpleXMLSchema = ::com::sun::org::apache::xerces::internal::jaxp::validation::SimpleXMLSchema;
using $Util = ::com::sun::org::apache::xerces::internal::jaxp::validation::Util;
using $WeakReferenceXMLSchema = ::com::sun::org::apache::xerces::internal::jaxp::validation::WeakReferenceXMLSchema;
using $XMLSchema = ::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchema;
using $XMLSchemaFactory$XMLGrammarPoolImplExtension = ::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaFactory$XMLGrammarPoolImplExtension;
using $XMLSchemaFactory$XMLGrammarPoolWrapper = ::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaFactory$XMLGrammarPoolWrapper;
using $DOMEntityResolverWrapper = ::com::sun::org::apache::xerces::internal::util::DOMEntityResolverWrapper;
using $DOMInputSource = ::com::sun::org::apache::xerces::internal::util::DOMInputSource;
using $ErrorHandlerWrapper = ::com::sun::org::apache::xerces::internal::util::ErrorHandlerWrapper;
using $SAXInputSource = ::com::sun::org::apache::xerces::internal::util::SAXInputSource;
using $SAXMessageFormatter = ::com::sun::org::apache::xerces::internal::util::SAXMessageFormatter;
using $StAXInputSource = ::com::sun::org::apache::xerces::internal::util::StAXInputSource;
using $Status = ::com::sun::org::apache::xerces::internal::util::Status;
using $XMLGrammarPoolImpl = ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $XMLSecurityPropertyManager$Property = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property;
using $XMLSecurityPropertyManager$State = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Locale = ::java::util::Locale;
using $XMLConstants = ::javax::xml::XMLConstants;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $Source = ::javax::xml::transform::Source;
using $DOMSource = ::javax::xml::transform::dom::DOMSource;
using $SAXSource = ::javax::xml::transform::sax::SAXSource;
using $StAXSource = ::javax::xml::transform::stax::StAXSource;
using $StreamSource = ::javax::xml::transform::stream::StreamSource;
using $Schema = ::javax::xml::validation::Schema;
using $SchemaFactory = ::javax::xml::validation::SchemaFactory;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkProperty$ImplPropMap = ::jdk::xml::internal::JdkProperty$ImplPropMap;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;
using $JdkXmlFeatures = ::jdk::xml::internal::JdkXmlFeatures;
using $JdkXmlFeatures$XmlFeature = ::jdk::xml::internal::JdkXmlFeatures$XmlFeature;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $Node = ::org::w3c::dom::Node;
using $LSResourceResolver = ::org::w3c::dom::ls::LSResourceResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _XMLSchemaFactory_FieldInfo_[] = {
	{"JAXP_SOURCE_FEATURE_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaFactory, JAXP_SOURCE_FEATURE_PREFIX)},
	{"SCHEMA_FULL_CHECKING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaFactory, SCHEMA_FULL_CHECKING)},
	{"USE_GRAMMAR_POOL_ONLY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaFactory, USE_GRAMMAR_POOL_ONLY)},
	{"XMLGRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaFactory, XMLGRAMMAR_POOL)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaFactory, SECURITY_MANAGER)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaFactory, XML_SECURITY_PROPERTY_MANAGER)},
	{"fXMLSchemaLoader", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaFactory, fXMLSchemaLoader)},
	{"fErrorHandler", "Lorg/xml/sax/ErrorHandler;", nullptr, $PRIVATE, $field(XMLSchemaFactory, fErrorHandler)},
	{"fLSResourceResolver", "Lorg/w3c/dom/ls/LSResourceResolver;", nullptr, $PRIVATE, $field(XMLSchemaFactory, fLSResourceResolver)},
	{"fDOMEntityResolverWrapper", "Lcom/sun/org/apache/xerces/internal/util/DOMEntityResolverWrapper;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaFactory, fDOMEntityResolverWrapper)},
	{"fErrorHandlerWrapper", "Lcom/sun/org/apache/xerces/internal/util/ErrorHandlerWrapper;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaFactory, fErrorHandlerWrapper)},
	{"fSecurityManager", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager;", nullptr, $PRIVATE, $field(XMLSchemaFactory, fSecurityManager)},
	{"fSecurityPropertyMgr", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager;", nullptr, $PRIVATE, $field(XMLSchemaFactory, fSecurityPropertyMgr)},
	{"fXMLGrammarPoolWrapper", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaFactory$XMLGrammarPoolWrapper;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaFactory, fXMLGrammarPoolWrapper)},
	{"fUseGrammarPoolOnly", "Z", nullptr, $PRIVATE, $field(XMLSchemaFactory, fUseGrammarPoolOnly)},
	{"fXmlFeatures", "Ljdk/xml/internal/JdkXmlFeatures;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaFactory, fXmlFeatures)},
	{"fOverrideDefaultParser", "Z", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaFactory, fOverrideDefaultParser)},
	{}
};

$MethodInfo _XMLSchemaFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLSchemaFactory, init$, void)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory, getErrorHandler, $ErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory, getFeature, bool, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory, getProperty, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getResourceResolver", "()Lorg/w3c/dom/ls/LSResourceResolver;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory, getResourceResolver, $LSResourceResolver*)},
	{"isSchemaLanguageSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory, isSchemaLanguageSupported, bool, $String*)},
	{"newSchema", "([Ljavax/xml/transform/Source;)Ljavax/xml/validation/Schema;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory, newSchema, $Schema*, $SourceArray*), "org.xml.sax.SAXException"},
	{"newSchema", "()Ljavax/xml/validation/Schema;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory, newSchema, $Schema*), "org.xml.sax.SAXException"},
	{"newSchema", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)Ljavax/xml/validation/Schema;", nullptr, $PUBLIC, $method(XMLSchemaFactory, newSchema, $Schema*, $XMLGrammarPool*), "org.xml.sax.SAXException"},
	{"propagateFeatures", "(Lcom/sun/org/apache/xerces/internal/jaxp/validation/AbstractXMLSchema;)V", nullptr, $PRIVATE, $method(XMLSchemaFactory, propagateFeatures, void, $AbstractXMLSchema*)},
	{"propagateProperties", "(Lcom/sun/org/apache/xerces/internal/jaxp/validation/AbstractXMLSchema;)V", nullptr, $PRIVATE, $method(XMLSchemaFactory, propagateProperties, void, $AbstractXMLSchema*)},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory, setErrorHandler, void, $ErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory, setFeature, void, $String*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setResourceResolver", "(Lorg/w3c/dom/ls/LSResourceResolver;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory, setResourceResolver, void, $LSResourceResolver*)},
	{}
};

$InnerClassInfo _XMLSchemaFactory_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory$XMLGrammarPoolWrapper", "com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory", "XMLGrammarPoolWrapper", $STATIC},
	{"com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory$XMLGrammarPoolImplExtension", "com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory", "XMLGrammarPoolImplExtension", $STATIC},
	{}
};

$ClassInfo _XMLSchemaFactory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory",
	"javax.xml.validation.SchemaFactory",
	nullptr,
	_XMLSchemaFactory_FieldInfo_,
	_XMLSchemaFactory_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSchemaFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory$XMLGrammarPoolWrapper,com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory$XMLGrammarPoolImplExtension"
};

$Object* allocate$XMLSchemaFactory($Class* clazz) {
	return $of($alloc(XMLSchemaFactory));
}

$String* XMLSchemaFactory::JAXP_SOURCE_FEATURE_PREFIX = nullptr;
$String* XMLSchemaFactory::SCHEMA_FULL_CHECKING = nullptr;
$String* XMLSchemaFactory::USE_GRAMMAR_POOL_ONLY = nullptr;
$String* XMLSchemaFactory::XMLGRAMMAR_POOL = nullptr;
$String* XMLSchemaFactory::SECURITY_MANAGER = nullptr;
$String* XMLSchemaFactory::XML_SECURITY_PROPERTY_MANAGER = nullptr;

void XMLSchemaFactory::init$() {
	$useLocalCurrentObjectStackCache();
	$SchemaFactory::init$();
	$set(this, fXMLSchemaLoader, $new($XMLSchemaLoader));
	$set(this, fErrorHandlerWrapper, $new($ErrorHandlerWrapper, $($DraconianErrorHandler::getInstance())));
	$set(this, fDOMEntityResolverWrapper, $new($DOMEntityResolverWrapper));
	$set(this, fXMLGrammarPoolWrapper, $new($XMLSchemaFactory$XMLGrammarPoolWrapper));
	$nc(this->fXMLSchemaLoader)->setFeature(XMLSchemaFactory::SCHEMA_FULL_CHECKING, true);
	$nc(this->fXMLSchemaLoader)->setProperty(XMLSchemaFactory::XMLGRAMMAR_POOL, this->fXMLGrammarPoolWrapper);
	$nc(this->fXMLSchemaLoader)->setEntityResolver(this->fDOMEntityResolverWrapper);
	$nc(this->fXMLSchemaLoader)->setErrorHandler(this->fErrorHandlerWrapper);
	this->fUseGrammarPoolOnly = true;
	$set(this, fSecurityManager, $new($XMLSecurityManager, true));
	$nc(this->fXMLSchemaLoader)->setProperty(XMLSchemaFactory::SECURITY_MANAGER, this->fSecurityManager);
	$set(this, fSecurityPropertyMgr, $new($XMLSecurityPropertyManager));
	$nc(this->fXMLSchemaLoader)->setProperty(XMLSchemaFactory::XML_SECURITY_PROPERTY_MANAGER, this->fSecurityPropertyMgr);
	$init($XMLConstants);
	$init($JdkXmlUtils);
	$nc(this->fXMLSchemaLoader)->setFeature($XMLConstants::USE_CATALOG, $JdkXmlUtils::USE_CATALOG_DEFAULT);
	{
		$var($CatalogFeatures$FeatureArray, arr$, $CatalogFeatures$Feature::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$CatalogFeatures$Feature* f = arr$->get(i$);
			{
				$nc(this->fXMLSchemaLoader)->setProperty($($nc(f)->getPropertyName()), nullptr);
			}
		}
	}
	$init($JdkConstants);
	$nc(this->fXMLSchemaLoader)->setProperty($JdkConstants::CDATA_CHUNK_SIZE, $($Integer::valueOf($JdkConstants::CDATA_CHUNK_SIZE_DEFAULT)));
	$set(this, fXmlFeatures, $new($JdkXmlFeatures, $nc(this->fSecurityManager)->isSecureProcessing()));
	$init($JdkXmlFeatures$XmlFeature);
	this->fOverrideDefaultParser = $nc(this->fXmlFeatures)->getFeature($JdkXmlFeatures$XmlFeature::JDK_OVERRIDE_PARSER);
	$nc(this->fXMLSchemaLoader)->setFeature($JdkConstants::OVERRIDE_PARSER, this->fOverrideDefaultParser);
}

bool XMLSchemaFactory::isSchemaLanguageSupported($String* schemaLanguage) {
	$useLocalCurrentObjectStackCache();
	if (schemaLanguage == nullptr) {
		$throwNew($NullPointerException, $($JAXPValidationMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "SchemaLanguageNull"_s, nullptr)));
	}
	if ($nc(schemaLanguage)->length() == 0) {
		$throwNew($IllegalArgumentException, $($JAXPValidationMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "SchemaLanguageLengthZero"_s, nullptr)));
	}
	$init($XMLConstants);
	bool var$0 = $nc(schemaLanguage)->equals($XMLConstants::W3C_XML_SCHEMA_NS_URI);
	$init($Constants);
	return var$0 || $nc(schemaLanguage)->equals($Constants::W3C_XML_SCHEMA10_NS_URI);
}

$LSResourceResolver* XMLSchemaFactory::getResourceResolver() {
	return this->fLSResourceResolver;
}

void XMLSchemaFactory::setResourceResolver($LSResourceResolver* resourceResolver) {
	$set(this, fLSResourceResolver, resourceResolver);
	$nc(this->fDOMEntityResolverWrapper)->setEntityResolver(resourceResolver);
	$nc(this->fXMLSchemaLoader)->setEntityResolver(this->fDOMEntityResolverWrapper);
}

$ErrorHandler* XMLSchemaFactory::getErrorHandler() {
	return this->fErrorHandler;
}

void XMLSchemaFactory::setErrorHandler($ErrorHandler* errorHandler) {
	$set(this, fErrorHandler, errorHandler);
	$nc(this->fErrorHandlerWrapper)->setErrorHandler(errorHandler != nullptr ? errorHandler : $(static_cast<$ErrorHandler*>($DraconianErrorHandler::getInstance())));
	$nc(this->fXMLSchemaLoader)->setErrorHandler(this->fErrorHandlerWrapper);
}

$Schema* XMLSchemaFactory::newSchema($SourceArray* schemas) {
	$useLocalCurrentObjectStackCache();
	$var($XMLSchemaFactory$XMLGrammarPoolImplExtension, pool, $new($XMLSchemaFactory$XMLGrammarPoolImplExtension));
	$nc(this->fXMLGrammarPoolWrapper)->setGrammarPool(pool);
	$var($XMLInputSourceArray, xmlInputSources, $new($XMLInputSourceArray, $nc(schemas)->length));
	$var($InputStream, inputStream, nullptr);
	$var($Reader, reader, nullptr);
	for (int32_t i = 0; i < schemas->length; ++i) {
		$var($Source, source, schemas->get(i));
		if ($instanceOf($StreamSource, source)) {
			$var($StreamSource, streamSource, $cast($StreamSource, source));
			$var($String, publicId, $nc(streamSource)->getPublicId());
			$var($String, systemId, streamSource->getSystemId());
			$assign(inputStream, streamSource->getInputStream());
			$assign(reader, streamSource->getReader());
			$var($XMLInputSource, xmlInputSource, $new($XMLInputSource, publicId, systemId, nullptr, false));
			xmlInputSource->setByteStream(inputStream);
			xmlInputSource->setCharacterStream(reader);
			xmlInputSources->set(i, xmlInputSource);
		} else if ($instanceOf($SAXSource, source)) {
			$var($SAXSource, saxSource, $cast($SAXSource, source));
			$var($InputSource, inputSource, $nc(saxSource)->getInputSource());
			if (inputSource == nullptr) {
				$throwNew($SAXException, $($JAXPValidationMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "SAXSourceNullInputSource"_s, nullptr)));
			}
			xmlInputSources->set(i, $$new($SAXInputSource, $(saxSource->getXMLReader()), inputSource));
		} else if ($instanceOf($DOMSource, source)) {
			$var($DOMSource, domSource, $cast($DOMSource, source));
			$var($Node, node, $nc(domSource)->getNode());
			$var($String, systemID, domSource->getSystemId());
			xmlInputSources->set(i, $$new($DOMInputSource, node, systemID));
		} else if ($instanceOf($StAXSource, source)) {
			$var($StAXSource, staxSource, $cast($StAXSource, source));
			$var($XMLEventReader, eventReader, $nc(staxSource)->getXMLEventReader());
			if (eventReader != nullptr) {
				xmlInputSources->set(i, $$new($StAXInputSource, eventReader));
			} else {
				xmlInputSources->set(i, $$new($StAXInputSource, $(staxSource->getXMLStreamReader())));
			}
		} else if (source == nullptr) {
			$throwNew($NullPointerException, $($JAXPValidationMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "SchemaSourceArrayMemberNull"_s, nullptr)));
		} else {
			$var($Locale, var$0, $nc(this->fXMLSchemaLoader)->getLocale());
			$var($String, var$1, "SchemaFactorySourceUnrecognized"_s);
			$throwNew($IllegalArgumentException, $($JAXPValidationMessageFormatter::formatMessage(var$0, var$1, $$new($ObjectArray, {$($of($nc($of(source))->getClass()->getName()))}))));
		}
	}
	try {
		$nc(this->fXMLSchemaLoader)->loadGrammar(xmlInputSources);
	} catch ($XNIException& e) {
		$throw($($Util::toSAXException(e)));
	} catch ($IOException& e) {
		$var($SAXParseException, se, $new($SAXParseException, $(e->getMessage()), nullptr, e));
		if (this->fErrorHandler != nullptr) {
			$nc(this->fErrorHandler)->error(se);
		}
		$throw(se);
	}
	$nc(this->fXMLGrammarPoolWrapper)->setGrammarPool(nullptr);
	int32_t grammarCount = pool->getGrammarCount();
	$var($AbstractXMLSchema, schema, nullptr);
	if (this->fUseGrammarPoolOnly) {
		if (grammarCount > 1) {
			$assign(schema, $new($XMLSchema, $$new($ReadOnlyGrammarPool, pool)));
		} else if (grammarCount == 1) {
			$init($XMLGrammarDescription);
			$var($GrammarArray, grammars, pool->retrieveInitialGrammarSet($XMLGrammarDescription::XML_SCHEMA));
			$assign(schema, $new($SimpleXMLSchema, $nc(grammars)->get(0)));
		} else {
			$assign(schema, $new($EmptyXMLSchema));
		}
	} else {
		$assign(schema, $new($XMLSchema, $$new($ReadOnlyGrammarPool, pool), false));
	}
	propagateFeatures(schema);
	propagateProperties(schema);
	return schema;
}

$Schema* XMLSchemaFactory::newSchema() {
	$var($AbstractXMLSchema, schema, $new($WeakReferenceXMLSchema));
	propagateFeatures(schema);
	propagateProperties(schema);
	return schema;
}

$Schema* XMLSchemaFactory::newSchema($XMLGrammarPool* pool) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractXMLSchema, schema, (this->fUseGrammarPoolOnly) ? static_cast<$AbstractXMLSchema*>($new($XMLSchema, $$new($ReadOnlyGrammarPool, pool))) : static_cast<$AbstractXMLSchema*>($new($XMLSchema, pool, false)));
	propagateFeatures(schema);
	return schema;
}

bool XMLSchemaFactory::getFeature($String* name) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException, $($JAXPValidationMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "FeatureNameNull"_s, nullptr)));
	}
	if ($nc(name)->startsWith(XMLSchemaFactory::JAXP_SOURCE_FEATURE_PREFIX)) {
		$init($StreamSource);
		bool var$2 = name->equals($StreamSource::FEATURE);
		$init($SAXSource);
		bool var$1 = var$2 || name->equals($SAXSource::FEATURE);
		$init($DOMSource);
		bool var$0 = var$1 || name->equals($DOMSource::FEATURE);
		$init($StAXSource);
		if (var$0 || name->equals($StAXSource::FEATURE)) {
			return true;
		}
	}
	$init($XMLConstants);
	if ($nc(name)->equals($XMLConstants::FEATURE_SECURE_PROCESSING)) {
		return (this->fSecurityManager != nullptr && $nc(this->fSecurityManager)->isSecureProcessing());
	} else if (name->equals(XMLSchemaFactory::USE_GRAMMAR_POOL_ONLY)) {
		return this->fUseGrammarPoolOnly;
	}
	int32_t index = $nc(this->fXmlFeatures)->getIndex(name);
	if (index > -1) {
		return $nc(this->fXmlFeatures)->getFeature(index);
	}
	try {
		return $nc(this->fXMLSchemaLoader)->getFeature(name);
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		if (e->getType() == $Status::NOT_RECOGNIZED) {
			$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "feature-not-recognized"_s, $$new($ObjectArray, {$of(identifier)}))));
		} else {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "feature-not-supported"_s, $$new($ObjectArray, {$of(identifier)}))));
		}
	}
	$shouldNotReachHere();
}

$Object* XMLSchemaFactory::getProperty($String* name) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException, $($JAXPValidationMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "ProperyNameNull"_s, nullptr)));
	}
	if ($nc(name)->equals(XMLSchemaFactory::SECURITY_MANAGER)) {
		return $of(this->fSecurityManager);
	} else if (name->equals(XMLSchemaFactory::XMLGRAMMAR_POOL)) {
		$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "property-not-supported"_s, $$new($ObjectArray, {$of(name)}))));
	}
	try {
		$var($String, propertyValue, (this->fSecurityManager != nullptr) ? $nc(this->fSecurityManager)->getLimitAsString(name) : ($String*)nullptr);
		return $of(propertyValue != nullptr ? $of(propertyValue) : $nc(this->fXMLSchemaLoader)->getProperty(name));
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		if (e->getType() == $Status::NOT_RECOGNIZED) {
			$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "property-not-recognized"_s, $$new($ObjectArray, {$of(identifier)}))));
		} else {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "property-not-supported"_s, $$new($ObjectArray, {$of(identifier)}))));
		}
	}
	$shouldNotReachHere();
}

void XMLSchemaFactory::setFeature($String* name, bool value) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException, $($JAXPValidationMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "FeatureNameNull"_s, nullptr)));
	}
	if ($nc(name)->startsWith(XMLSchemaFactory::JAXP_SOURCE_FEATURE_PREFIX)) {
		$init($StreamSource);
		bool var$2 = name->equals($StreamSource::FEATURE);
		$init($SAXSource);
		bool var$1 = var$2 || name->equals($SAXSource::FEATURE);
		$init($DOMSource);
		bool var$0 = var$1 || name->equals($DOMSource::FEATURE);
		$init($StAXSource);
		if (var$0 || name->equals($StAXSource::FEATURE)) {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "feature-read-only"_s, $$new($ObjectArray, {$of(name)}))));
		}
	}
	$init($XMLConstants);
	if ($nc(name)->equals($XMLConstants::FEATURE_SECURE_PROCESSING)) {
		if ($System::getSecurityManager() != nullptr && (!value)) {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage(nullptr, "jaxp-secureprocessing-feature"_s, nullptr)));
		}
		$nc(this->fSecurityManager)->setSecureProcessing(value);
		if (value) {
			$init($XMLSecurityPropertyManager$Property);
			$init($XMLSecurityPropertyManager$State);
			$init($JdkConstants);
			$nc(this->fSecurityPropertyMgr)->setValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD, $XMLSecurityPropertyManager$State::FSP, $JdkConstants::EXTERNAL_ACCESS_DEFAULT_FSP);
			$nc(this->fSecurityPropertyMgr)->setValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_SCHEMA, $XMLSecurityPropertyManager$State::FSP, $JdkConstants::EXTERNAL_ACCESS_DEFAULT_FSP);
		}
		$nc(this->fXMLSchemaLoader)->setProperty(XMLSchemaFactory::SECURITY_MANAGER, this->fSecurityManager);
		return;
	} else if (name->equals(XMLSchemaFactory::USE_GRAMMAR_POOL_ONLY)) {
		this->fUseGrammarPoolOnly = value;
		return;
	} else {
		$init($JdkConstants);
		if (name->equals($JdkConstants::ORACLE_FEATURE_SERVICE_MECHANISM)) {
			if ($System::getSecurityManager() != nullptr) {
				return;
			}
		}
	}
	$init($JdkProperty$State);
	if ((this->fXmlFeatures != nullptr) && $nc(this->fXmlFeatures)->setFeature(name, $JdkProperty$State::APIPROPERTY, $($of($Boolean::valueOf(value))))) {
		$init($JdkProperty$ImplPropMap);
		bool var$3 = ($JdkProperty$ImplPropMap::OVERRIDEPARSER->is(name));
		$init($JdkXmlUtils);
		if (var$3 || $nc(name)->equals($JdkXmlUtils::USE_CATALOG)) {
			$nc(this->fXMLSchemaLoader)->setFeature(name, value);
		}
		return;
	}
	try {
		$nc(this->fXMLSchemaLoader)->setFeature(name, value);
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		if (e->getType() == $Status::NOT_RECOGNIZED) {
			$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "feature-not-recognized"_s, $$new($ObjectArray, {$of(identifier)}))));
		} else {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "feature-not-supported"_s, $$new($ObjectArray, {$of(identifier)}))));
		}
	}
}

void XMLSchemaFactory::setProperty($String* name, Object$* object) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException, $($JAXPValidationMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "ProperyNameNull"_s, nullptr)));
	}
	if ($nc(name)->equals(XMLSchemaFactory::SECURITY_MANAGER)) {
		$set(this, fSecurityManager, $XMLSecurityManager::convert(object, this->fSecurityManager));
		$nc(this->fXMLSchemaLoader)->setProperty(XMLSchemaFactory::SECURITY_MANAGER, this->fSecurityManager);
		return;
	} else {
		$init($JdkConstants);
		if (name->equals($JdkConstants::XML_SECURITY_PROPERTY_MANAGER)) {
			if (object == nullptr) {
				$set(this, fSecurityPropertyMgr, $new($XMLSecurityPropertyManager));
			} else {
				$set(this, fSecurityPropertyMgr, $cast($XMLSecurityPropertyManager, object));
			}
			$nc(this->fXMLSchemaLoader)->setProperty($JdkConstants::XML_SECURITY_PROPERTY_MANAGER, this->fSecurityPropertyMgr);
			return;
		} else if (name->equals(XMLSchemaFactory::XMLGRAMMAR_POOL)) {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "property-not-supported"_s, $$new($ObjectArray, {$of(name)}))));
		}
	}
	try {
		$init($JdkProperty$State);
		if (this->fSecurityManager == nullptr || !$nc(this->fSecurityManager)->setLimit(name, $JdkProperty$State::APIPROPERTY, object)) {
			$init($XMLSecurityPropertyManager$State);
			if (this->fSecurityPropertyMgr == nullptr || !$nc(this->fSecurityPropertyMgr)->setValue(name, $XMLSecurityPropertyManager$State::APIPROPERTY, object)) {
				$nc(this->fXMLSchemaLoader)->setProperty(name, object);
			}
		}
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		if (e->getType() == $Status::NOT_RECOGNIZED) {
			$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "property-not-recognized"_s, $$new($ObjectArray, {$of(identifier)}))));
		} else {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fXMLSchemaLoader)->getLocale()), "property-not-supported"_s, $$new($ObjectArray, {$of(identifier)}))));
		}
	}
}

void XMLSchemaFactory::propagateFeatures($AbstractXMLSchema* schema) {
	$init($XMLConstants);
	$nc(schema)->setFeature($XMLConstants::FEATURE_SECURE_PROCESSING, (this->fSecurityManager != nullptr && $nc(this->fSecurityManager)->isSecureProcessing()));
	$init($JdkConstants);
	schema->setFeature($JdkConstants::OVERRIDE_PARSER, this->fOverrideDefaultParser);
	$var($StringArray, features, $nc(this->fXMLSchemaLoader)->getRecognizedFeatures());
	for (int32_t i = 0; i < $nc(features)->length; ++i) {
		bool state = $nc(this->fXMLSchemaLoader)->getFeature(features->get(i));
		schema->setFeature(features->get(i), state);
	}
}

void XMLSchemaFactory::propagateProperties($AbstractXMLSchema* schema) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, properties, $nc(this->fXMLSchemaLoader)->getRecognizedProperties());
	for (int32_t i = 0; i < $nc(properties)->length; ++i) {
		$var($Object, state, $nc(this->fXMLSchemaLoader)->getProperty(properties->get(i)));
		$nc(schema)->setProperty(properties->get(i), state);
	}
}

XMLSchemaFactory::XMLSchemaFactory() {
}

void clinit$XMLSchemaFactory($Class* class$) {
	$assignStatic(XMLSchemaFactory::JAXP_SOURCE_FEATURE_PREFIX, "http://javax.xml.transform"_s);
	$init($Constants);
	$assignStatic(XMLSchemaFactory::SCHEMA_FULL_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_FULL_CHECKING}));
	$assignStatic(XMLSchemaFactory::USE_GRAMMAR_POOL_ONLY, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::USE_GRAMMAR_POOL_ONLY_FEATURE}));
	$assignStatic(XMLSchemaFactory::XMLGRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	$assignStatic(XMLSchemaFactory::SECURITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SECURITY_MANAGER_PROPERTY}));
	$init($JdkConstants);
	$assignStatic(XMLSchemaFactory::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
}

$Class* XMLSchemaFactory::load$($String* name, bool initialize) {
	$loadClass(XMLSchemaFactory, name, initialize, &_XMLSchemaFactory_ClassInfo_, clinit$XMLSchemaFactory, allocate$XMLSchemaFactory);
	return class$;
}

$Class* XMLSchemaFactory::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com