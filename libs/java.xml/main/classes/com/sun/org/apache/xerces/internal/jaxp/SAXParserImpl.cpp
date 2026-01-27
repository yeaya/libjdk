#include <com/sun/org/apache/xerces/internal/jaxp/SAXParserImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/jaxp/DefaultValidationErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent.h>
#include <com/sun/org/apache/xerces/internal/jaxp/SAXParserFactoryImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/SAXParserImpl$JAXPSAXParser.h>
#include <com/sun/org/apache/xerces/internal/jaxp/SchemaValidatorConfiguration.h>
#include <com/sun/org/apache/xerces/internal/jaxp/UnparsedEntityHandler.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractXMLDocumentParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/SAXParser.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$Property.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/PSVIProvider.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/parsers/SAXParser.h>
#include <javax/xml/validation/Schema.h>
#include <javax/xml/validation/ValidatorHandler.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/DocumentHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/HandlerBase.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Parser.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_DTD
#undef ACCESS_EXTERNAL_SCHEMA
#undef EXTERNAL_ACCESS_DEFAULT_FSP
#undef FEATURE_SECURE_PROCESSING
#undef FSP
#undef NAMESPACES_FEATURE
#undef NAMESPACE_PREFIXES_FEATURE
#undef SAX_FEATURE_PREFIX
#undef SCHEMA_VALIDATION_FEATURE
#undef SECURITY_MANAGER
#undef SECURITY_MANAGER_PROPERTY
#undef VALIDATION_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XINCLUDE_FEATURE
#undef XMLSCHEMA_VALIDATION_FEATURE
#undef XML_SECURITY_PROPERTY_MANAGER

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $DefaultValidationErrorHandler = ::com::sun::org::apache::xerces::internal::jaxp::DefaultValidationErrorHandler;
using $JAXPValidatorComponent = ::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent;
using $SAXParserFactoryImpl = ::com::sun::org::apache::xerces::internal::jaxp::SAXParserFactoryImpl;
using $SAXParserImpl$JAXPSAXParser = ::com::sun::org::apache::xerces::internal::jaxp::SAXParserImpl$JAXPSAXParser;
using $SchemaValidatorConfiguration = ::com::sun::org::apache::xerces::internal::jaxp::SchemaValidatorConfiguration;
using $UnparsedEntityHandler = ::com::sun::org::apache::xerces::internal::jaxp::UnparsedEntityHandler;
using $XSGrammarPoolContainer = ::com::sun::org::apache::xerces::internal::jaxp::validation::XSGrammarPoolContainer;
using $AbstractSAXParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser;
using $AbstractXMLDocumentParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser;
using $1SAXParser = ::com::sun::org::apache::xerces::internal::parsers::SAXParser;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $XMLSecurityPropertyManager$Property = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property;
using $XMLSecurityPropertyManager$State = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State;
using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLDTDFilter = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDFilter;
using $XMLDTDSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $AttributePSVI = ::com::sun::org::apache::xerces::internal::xs::AttributePSVI;
using $ElementPSVI = ::com::sun::org::apache::xerces::internal::xs::ElementPSVI;
using $PSVIProvider = ::com::sun::org::apache::xerces::internal::xs::PSVIProvider;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $XMLConstants = ::javax::xml::XMLConstants;
using $SAXParser = ::javax::xml::parsers::SAXParser;
using $Schema = ::javax::xml::validation::Schema;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $DocumentHandler = ::org::xml::sax::DocumentHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $HandlerBase = ::org::xml::sax::HandlerBase;
using $InputSource = ::org::xml::sax::InputSource;
using $Parser = ::org::xml::sax::Parser;
using $SAXException = ::org::xml::sax::SAXException;
using $XMLReader = ::org::xml::sax::XMLReader;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

$FieldInfo _SAXParserImpl_FieldInfo_[] = {
	{"NAMESPACES_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXParserImpl, NAMESPACES_FEATURE)},
	{"NAMESPACE_PREFIXES_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXParserImpl, NAMESPACE_PREFIXES_FEATURE)},
	{"VALIDATION_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXParserImpl, VALIDATION_FEATURE)},
	{"XMLSCHEMA_VALIDATION_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXParserImpl, XMLSCHEMA_VALIDATION_FEATURE)},
	{"XINCLUDE_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXParserImpl, XINCLUDE_FEATURE)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXParserImpl, SECURITY_MANAGER)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXParserImpl, XML_SECURITY_PROPERTY_MANAGER)},
	{"xmlReader", "Lcom/sun/org/apache/xerces/internal/jaxp/SAXParserImpl$JAXPSAXParser;", nullptr, $PRIVATE | $FINAL, $field(SAXParserImpl, xmlReader)},
	{"schemaLanguage", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SAXParserImpl, schemaLanguage)},
	{"grammar", "Ljavax/xml/validation/Schema;", nullptr, $PRIVATE | $FINAL, $field(SAXParserImpl, grammar)},
	{"fSchemaValidator", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;", nullptr, $PRIVATE | $FINAL, $field(SAXParserImpl, fSchemaValidator)},
	{"fSchemaValidatorComponentManager", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;", nullptr, $PRIVATE | $FINAL, $field(SAXParserImpl, fSchemaValidatorComponentManager)},
	{"fSchemaValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PRIVATE | $FINAL, $field(SAXParserImpl, fSchemaValidationManager)},
	{"fUnparsedEntityHandler", "Lcom/sun/org/apache/xerces/internal/jaxp/UnparsedEntityHandler;", nullptr, $PRIVATE | $FINAL, $field(SAXParserImpl, fUnparsedEntityHandler)},
	{"fInitErrorHandler", "Lorg/xml/sax/ErrorHandler;", nullptr, $PRIVATE | $FINAL, $field(SAXParserImpl, fInitErrorHandler)},
	{"fInitEntityResolver", "Lorg/xml/sax/EntityResolver;", nullptr, $PRIVATE | $FINAL, $field(SAXParserImpl, fInitEntityResolver)},
	{"fSecurityManager", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager;", nullptr, $PRIVATE | $FINAL, $field(SAXParserImpl, fSecurityManager)},
	{"fSecurityPropertyMgr", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager;", nullptr, $PRIVATE | $FINAL, $field(SAXParserImpl, fSecurityPropertyMgr)},
	{}
};

$MethodInfo _SAXParserImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/SAXParserFactoryImpl;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/jaxp/SAXParserFactoryImpl;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Boolean;>;)V", 0, $method(SAXParserImpl, init$, void, $SAXParserFactoryImpl*, $Map*), "org.xml.sax.SAXException"},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/SAXParserFactoryImpl;Ljava/util/Map;Z)V", "(Lcom/sun/org/apache/xerces/internal/jaxp/SAXParserFactoryImpl;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Boolean;>;Z)V", 0, $method(SAXParserImpl, init$, void, $SAXParserFactoryImpl*, $Map*, bool), "org.xml.sax.SAXException"},
	{"getAttributePSVI", "(I)Lcom/sun/org/apache/xerces/internal/xs/AttributePSVI;", nullptr, $PUBLIC, $virtualMethod(SAXParserImpl, getAttributePSVI, $AttributePSVI*, int32_t)},
	{"getAttributePSVIByName", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/AttributePSVI;", nullptr, $PUBLIC, $virtualMethod(SAXParserImpl, getAttributePSVIByName, $AttributePSVI*, $String*, $String*)},
	{"getElementPSVI", "()Lcom/sun/org/apache/xerces/internal/xs/ElementPSVI;", nullptr, $PUBLIC, $virtualMethod(SAXParserImpl, getElementPSVI, $ElementPSVI*)},
	{"getParser", "()Lorg/xml/sax/Parser;", nullptr, $PUBLIC, $virtualMethod(SAXParserImpl, getParser, $Parser*), "org.xml.sax.SAXException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SAXParserImpl, getProperty, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getSchema", "()Ljavax/xml/validation/Schema;", nullptr, $PUBLIC, $virtualMethod(SAXParserImpl, getSchema, $Schema*)},
	{"getXMLReader", "()Lorg/xml/sax/XMLReader;", nullptr, $PUBLIC, $virtualMethod(SAXParserImpl, getXMLReader, $XMLReader*)},
	{"isNamespaceAware", "()Z", nullptr, $PUBLIC, $virtualMethod(SAXParserImpl, isNamespaceAware, bool)},
	{"isValidating", "()Z", nullptr, $PUBLIC, $virtualMethod(SAXParserImpl, isValidating, bool)},
	{"isXIncludeAware", "()Z", nullptr, $PUBLIC, $virtualMethod(SAXParserImpl, isXIncludeAware, bool)},
	{"parse", "(Lorg/xml/sax/InputSource;Lorg/xml/sax/helpers/DefaultHandler;)V", nullptr, $PUBLIC, $virtualMethod(SAXParserImpl, parse, void, $InputSource*, $DefaultHandler*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Lorg/xml/sax/InputSource;Lorg/xml/sax/HandlerBase;)V", nullptr, $PUBLIC, $virtualMethod(SAXParserImpl, parse, void, $InputSource*, $HandlerBase*), "org.xml.sax.SAXException,java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(SAXParserImpl, reset, void)},
	{"setFeatures", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Boolean;>;)V", $PRIVATE, $method(SAXParserImpl, setFeatures, void, $Map*), "org.xml.sax.SAXNotSupportedException,org.xml.sax.SAXNotRecognizedException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(SAXParserImpl, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SAXParserImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.SAXParserImpl$JAXPSAXParser", "com.sun.org.apache.xerces.internal.jaxp.SAXParserImpl", "JAXPSAXParser", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SAXParserImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.SAXParserImpl",
	"javax.xml.parsers.SAXParser",
	"com.sun.org.apache.xerces.internal.jaxp.JAXPConstants,com.sun.org.apache.xerces.internal.xs.PSVIProvider",
	_SAXParserImpl_FieldInfo_,
	_SAXParserImpl_MethodInfo_,
	nullptr,
	nullptr,
	_SAXParserImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.SAXParserImpl$JAXPSAXParser"
};

$Object* allocate$SAXParserImpl($Class* clazz) {
	return $of($alloc(SAXParserImpl));
}

int32_t SAXParserImpl::hashCode() {
	 return this->$SAXParser::hashCode();
}

bool SAXParserImpl::equals(Object$* arg0) {
	 return this->$SAXParser::equals(arg0);
}

$Object* SAXParserImpl::clone() {
	 return this->$SAXParser::clone();
}

$String* SAXParserImpl::toString() {
	 return this->$SAXParser::toString();
}

void SAXParserImpl::finalize() {
	this->$SAXParser::finalize();
}

$String* SAXParserImpl::NAMESPACES_FEATURE = nullptr;
$String* SAXParserImpl::NAMESPACE_PREFIXES_FEATURE = nullptr;
$String* SAXParserImpl::VALIDATION_FEATURE = nullptr;
$String* SAXParserImpl::XMLSCHEMA_VALIDATION_FEATURE = nullptr;
$String* SAXParserImpl::XINCLUDE_FEATURE = nullptr;
$String* SAXParserImpl::SECURITY_MANAGER = nullptr;
$String* SAXParserImpl::XML_SECURITY_PROPERTY_MANAGER = nullptr;

void SAXParserImpl::init$($SAXParserFactoryImpl* spf, $Map* features) {
	SAXParserImpl::init$(spf, features, false);
}

void SAXParserImpl::init$($SAXParserFactoryImpl* spf, $Map* features, bool secureProcessing) {
	$useLocalCurrentObjectStackCache();
	$SAXParser::init$();
	$set(this, schemaLanguage, nullptr);
	$set(this, fSecurityManager, $new($XMLSecurityManager, secureProcessing));
	$set(this, fSecurityPropertyMgr, $new($XMLSecurityPropertyManager));
	$set(this, xmlReader, $new($SAXParserImpl$JAXPSAXParser, this, this->fSecurityPropertyMgr, this->fSecurityManager));
	$nc(this->xmlReader)->setFeature0(SAXParserImpl::NAMESPACES_FEATURE, $nc(spf)->isNamespaceAware());
	$nc(this->xmlReader)->setFeature0(SAXParserImpl::NAMESPACE_PREFIXES_FEATURE, !$nc(spf)->isNamespaceAware());
	if ($nc(spf)->isXIncludeAware()) {
		$nc(this->xmlReader)->setFeature0(SAXParserImpl::XINCLUDE_FEATURE, true);
	}
	$nc(this->xmlReader)->setProperty0(SAXParserImpl::XML_SECURITY_PROPERTY_MANAGER, this->fSecurityPropertyMgr);
	$nc(this->xmlReader)->setProperty0(SAXParserImpl::SECURITY_MANAGER, this->fSecurityManager);
	if (secureProcessing) {
		if (features != nullptr) {
			$init($XMLConstants);
			$var($Boolean, temp, $cast($Boolean, features->get($XMLConstants::FEATURE_SECURE_PROCESSING)));
			if (temp != nullptr && temp->booleanValue()) {
				$init($XMLSecurityPropertyManager$Property);
				$init($XMLSecurityPropertyManager$State);
				$init($JdkConstants);
				$nc(this->fSecurityPropertyMgr)->setValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD, $XMLSecurityPropertyManager$State::FSP, $JdkConstants::EXTERNAL_ACCESS_DEFAULT_FSP);
				$nc(this->fSecurityPropertyMgr)->setValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_SCHEMA, $XMLSecurityPropertyManager$State::FSP, $JdkConstants::EXTERNAL_ACCESS_DEFAULT_FSP);
			}
		}
	}
	setFeatures(features);
	if ($nc(spf)->isValidating()) {
		$set(this, fInitErrorHandler, $new($DefaultValidationErrorHandler, $($nc(this->xmlReader)->getLocale())));
		$nc(this->xmlReader)->setErrorHandler(this->fInitErrorHandler);
	} else {
		$set(this, fInitErrorHandler, $nc(this->xmlReader)->getErrorHandler());
	}
	$nc(this->xmlReader)->setFeature0(SAXParserImpl::VALIDATION_FEATURE, $nc(spf)->isValidating());
	$set(this, grammar, $nc(spf)->getSchema());
	if (this->grammar != nullptr) {
		$var($XMLParserConfiguration, config, $nc(this->xmlReader)->getXMLParserConfiguration());
		$var($XMLComponent, validatorComponent, nullptr);
		if ($instanceOf($XSGrammarPoolContainer, this->grammar)) {
			$assign(validatorComponent, $new($XMLSchemaValidator));
			$set(this, fSchemaValidationManager, $new($ValidationManager));
			$set(this, fUnparsedEntityHandler, $new($UnparsedEntityHandler, this->fSchemaValidationManager));
			$nc(config)->setDTDHandler(this->fUnparsedEntityHandler);
			$nc(this->fUnparsedEntityHandler)->setDTDHandler(this->xmlReader);
			$nc(this->xmlReader)->setDTDSource(this->fUnparsedEntityHandler);
			$set(this, fSchemaValidatorComponentManager, $new($SchemaValidatorConfiguration, config, $cast($XSGrammarPoolContainer, this->grammar), this->fSchemaValidationManager));
		} else {
			$assign(validatorComponent, $new($JAXPValidatorComponent, $($nc(this->grammar)->newValidatorHandler())));
			$set(this, fSchemaValidationManager, nullptr);
			$set(this, fUnparsedEntityHandler, nullptr);
			$set(this, fSchemaValidatorComponentManager, config);
		}
		$nc(config)->addRecognizedFeatures($($nc(validatorComponent)->getRecognizedFeatures()));
		config->addRecognizedProperties($($nc(validatorComponent)->getRecognizedProperties()));
		config->setDocumentHandler($cast($XMLDocumentHandler, validatorComponent));
		$nc(($cast($XMLDocumentSource, validatorComponent)))->setDocumentHandler(this->xmlReader);
		$nc(this->xmlReader)->setDocumentSource($cast($XMLDocumentSource, validatorComponent));
		$set(this, fSchemaValidator, validatorComponent);
	} else {
		$set(this, fSchemaValidationManager, nullptr);
		$set(this, fUnparsedEntityHandler, nullptr);
		$set(this, fSchemaValidatorComponentManager, nullptr);
		$set(this, fSchemaValidator, nullptr);
	}
	$set(this, fInitEntityResolver, $nc(this->xmlReader)->getEntityResolver());
}

void SAXParserImpl::setFeatures($Map* features) {
	$useLocalCurrentObjectStackCache();
	if (features != nullptr) {
		{
			$var($Iterator, i$, $nc($(features->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($String, var$0, $cast($String, $nc(entry)->getKey()));
					$nc(this->xmlReader)->setFeature0(var$0, $nc(($cast($Boolean, $(entry->getValue()))))->booleanValue());
				}
			}
		}
	}
}

$Parser* SAXParserImpl::getParser() {
	return static_cast<$Parser*>(this->xmlReader);
}

$XMLReader* SAXParserImpl::getXMLReader() {
	return this->xmlReader;
}

bool SAXParserImpl::isNamespaceAware() {
	try {
		return $nc(this->xmlReader)->getFeature(SAXParserImpl::NAMESPACES_FEATURE);
	} catch ($SAXException& x) {
		$throwNew($IllegalStateException, $(x->getMessage()));
	}
	$shouldNotReachHere();
}

bool SAXParserImpl::isValidating() {
	try {
		return $nc(this->xmlReader)->getFeature(SAXParserImpl::VALIDATION_FEATURE);
	} catch ($SAXException& x) {
		$throwNew($IllegalStateException, $(x->getMessage()));
	}
	$shouldNotReachHere();
}

bool SAXParserImpl::isXIncludeAware() {
	try {
		return $nc(this->xmlReader)->getFeature(SAXParserImpl::XINCLUDE_FEATURE);
	} catch ($SAXException& exc) {
		return false;
	}
	$shouldNotReachHere();
}

void SAXParserImpl::setProperty($String* name, Object$* value) {
	$nc(this->xmlReader)->setProperty(name, value);
}

$Object* SAXParserImpl::getProperty($String* name) {
	return $of($nc(this->xmlReader)->getProperty(name));
}

void SAXParserImpl::parse($InputSource* is, $DefaultHandler* dh) {
	if (is == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	if (dh != nullptr) {
		$nc(this->xmlReader)->setContentHandler(dh);
		$nc(this->xmlReader)->setEntityResolver(dh);
		$nc(this->xmlReader)->setErrorHandler(dh);
		$nc(this->xmlReader)->setDTDHandler(dh);
		$nc(this->xmlReader)->setDocumentHandler(nullptr);
	}
	$nc(this->xmlReader)->parse(is);
}

void SAXParserImpl::parse($InputSource* is, $HandlerBase* hb) {
	if (is == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	if (hb != nullptr) {
		$nc(this->xmlReader)->setDocumentHandler(hb);
		$nc(this->xmlReader)->setEntityResolver(hb);
		$nc(this->xmlReader)->setErrorHandler(hb);
		$nc(this->xmlReader)->setDTDHandler(hb);
		$nc(this->xmlReader)->setContentHandler(nullptr);
	}
	$nc(this->xmlReader)->parse(is);
}

$Schema* SAXParserImpl::getSchema() {
	return this->grammar;
}

void SAXParserImpl::reset() {
	try {
		$nc(this->xmlReader)->restoreInitState();
	} catch ($SAXException& exc) {
	}
	$nc(this->xmlReader)->setContentHandler(nullptr);
	$nc(this->xmlReader)->setDTDHandler(nullptr);
	if ($nc(this->xmlReader)->getErrorHandler() != this->fInitErrorHandler) {
		$nc(this->xmlReader)->setErrorHandler(this->fInitErrorHandler);
	}
	if ($nc(this->xmlReader)->getEntityResolver() != this->fInitEntityResolver) {
		$nc(this->xmlReader)->setEntityResolver(this->fInitEntityResolver);
	}
}

$ElementPSVI* SAXParserImpl::getElementPSVI() {
	return $nc((static_cast<$PSVIProvider*>(this->xmlReader)))->getElementPSVI();
}

$AttributePSVI* SAXParserImpl::getAttributePSVI(int32_t index) {
	return $nc((static_cast<$PSVIProvider*>(this->xmlReader)))->getAttributePSVI(index);
}

$AttributePSVI* SAXParserImpl::getAttributePSVIByName($String* uri, $String* localname) {
	return $nc((static_cast<$PSVIProvider*>(this->xmlReader)))->getAttributePSVIByName(uri, localname);
}

SAXParserImpl::SAXParserImpl() {
}

void clinit$SAXParserImpl($Class* class$) {
	$init($Constants);
	$assignStatic(SAXParserImpl::NAMESPACES_FEATURE, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
	$assignStatic(SAXParserImpl::NAMESPACE_PREFIXES_FEATURE, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACE_PREFIXES_FEATURE}));
	$assignStatic(SAXParserImpl::VALIDATION_FEATURE, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(SAXParserImpl::XMLSCHEMA_VALIDATION_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_VALIDATION_FEATURE}));
	$assignStatic(SAXParserImpl::XINCLUDE_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::XINCLUDE_FEATURE}));
	$assignStatic(SAXParserImpl::SECURITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SECURITY_MANAGER_PROPERTY}));
	$init($JdkConstants);
	$assignStatic(SAXParserImpl::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
}

$Class* SAXParserImpl::load$($String* name, bool initialize) {
	$loadClass(SAXParserImpl, name, initialize, &_SAXParserImpl_ClassInfo_, clinit$SAXParserImpl, allocate$SAXParserImpl);
	return class$;
}

$Class* SAXParserImpl::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com