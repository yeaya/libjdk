#include <com/sun/org/apache/xerces/internal/jaxp/DocumentBuilderImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/jaxp/DefaultValidationErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/jaxp/DocumentBuilderFactoryImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPConstants.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent.h>
#include <com/sun/org/apache/xerces/internal/jaxp/SchemaValidatorConfiguration.h>
#include <com/sun/org/apache/xerces/internal/jaxp/UnparsedEntityHandler.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractXMLDocumentParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/DOMParser.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$Property.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/parsers/DocumentBuilder.h>
#include <javax/xml/validation/Schema.h>
#include <javax/xml/validation/ValidatorHandler.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/Document.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_DTD
#undef ACCESS_EXTERNAL_SCHEMA
#undef APIPROPERTY
#undef CREATE_CDATA_NODES_FEATURE
#undef CREATE_ENTITY_REF_NODES_FEATURE
#undef DOM_DOMAIN
#undef EXTERNAL_ACCESS_DEFAULT_FSP
#undef FEATURE_SECURE_PROCESSING
#undef FSP
#undef INCLUDE_COMMENTS_FEATURE
#undef INCLUDE_IGNORABLE_WHITESPACE
#undef JAXP_SCHEMA_LANGUAGE
#undef JAXP_SCHEMA_SOURCE
#undef NAMESPACES_FEATURE
#undef SAX_FEATURE_PREFIX
#undef SCHEMA_VALIDATION_FEATURE
#undef SECURITY_MANAGER
#undef SECURITY_MANAGER_PROPERTY
#undef VALIDATION_FEATURE
#undef W3C_XML_SCHEMA
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XINCLUDE_FEATURE
#undef XMLSCHEMA_VALIDATION_FEATURE
#undef XML_SECURITY_PROPERTY_MANAGER

using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $DefaultValidationErrorHandler = ::com::sun::org::apache::xerces::internal::jaxp::DefaultValidationErrorHandler;
using $DocumentBuilderFactoryImpl = ::com::sun::org::apache::xerces::internal::jaxp::DocumentBuilderFactoryImpl;
using $JAXPConstants = ::com::sun::org::apache::xerces::internal::jaxp::JAXPConstants;
using $JAXPValidatorComponent = ::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent;
using $SchemaValidatorConfiguration = ::com::sun::org::apache::xerces::internal::jaxp::SchemaValidatorConfiguration;
using $UnparsedEntityHandler = ::com::sun::org::apache::xerces::internal::jaxp::UnparsedEntityHandler;
using $XSGrammarPoolContainer = ::com::sun::org::apache::xerces::internal::jaxp::validation::XSGrammarPoolContainer;
using $AbstractDOMParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser;
using $AbstractXMLDocumentParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser;
using $DOMParser = ::com::sun::org::apache::xerces::internal::parsers::DOMParser;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $XMLSecurityPropertyManager$Property = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property;
using $XMLSecurityPropertyManager$State = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State;
using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $XMLDTDFilter = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDFilter;
using $XMLDTDSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $XMLConstants = ::javax::xml::XMLConstants;
using $DocumentBuilder = ::javax::xml::parsers::DocumentBuilder;
using $Schema = ::javax::xml::validation::Schema;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $Document = ::org::w3c::dom::Document;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

$FieldInfo _DocumentBuilderImpl_FieldInfo_[] = {
	{"NAMESPACES_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DocumentBuilderImpl, NAMESPACES_FEATURE)},
	{"INCLUDE_IGNORABLE_WHITESPACE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DocumentBuilderImpl, INCLUDE_IGNORABLE_WHITESPACE)},
	{"CREATE_ENTITY_REF_NODES_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DocumentBuilderImpl, CREATE_ENTITY_REF_NODES_FEATURE)},
	{"INCLUDE_COMMENTS_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DocumentBuilderImpl, INCLUDE_COMMENTS_FEATURE)},
	{"CREATE_CDATA_NODES_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DocumentBuilderImpl, CREATE_CDATA_NODES_FEATURE)},
	{"XINCLUDE_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DocumentBuilderImpl, XINCLUDE_FEATURE)},
	{"XMLSCHEMA_VALIDATION_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DocumentBuilderImpl, XMLSCHEMA_VALIDATION_FEATURE)},
	{"VALIDATION_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DocumentBuilderImpl, VALIDATION_FEATURE)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DocumentBuilderImpl, SECURITY_MANAGER)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DocumentBuilderImpl, XML_SECURITY_PROPERTY_MANAGER)},
	{"ACCESS_EXTERNAL_DTD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocumentBuilderImpl, ACCESS_EXTERNAL_DTD)},
	{"ACCESS_EXTERNAL_SCHEMA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocumentBuilderImpl, ACCESS_EXTERNAL_SCHEMA)},
	{"domParser", "Lcom/sun/org/apache/xerces/internal/parsers/DOMParser;", nullptr, $PRIVATE | $FINAL, $field(DocumentBuilderImpl, domParser)},
	{"grammar", "Ljavax/xml/validation/Schema;", nullptr, $PRIVATE | $FINAL, $field(DocumentBuilderImpl, grammar)},
	{"fSchemaValidator", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;", nullptr, $PRIVATE | $FINAL, $field(DocumentBuilderImpl, fSchemaValidator)},
	{"fSchemaValidatorComponentManager", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;", nullptr, $PRIVATE | $FINAL, $field(DocumentBuilderImpl, fSchemaValidatorComponentManager)},
	{"fSchemaValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PRIVATE | $FINAL, $field(DocumentBuilderImpl, fSchemaValidationManager)},
	{"fUnparsedEntityHandler", "Lcom/sun/org/apache/xerces/internal/jaxp/UnparsedEntityHandler;", nullptr, $PRIVATE | $FINAL, $field(DocumentBuilderImpl, fUnparsedEntityHandler)},
	{"fInitErrorHandler", "Lorg/xml/sax/ErrorHandler;", nullptr, $PRIVATE | $FINAL, $field(DocumentBuilderImpl, fInitErrorHandler)},
	{"fInitEntityResolver", "Lorg/xml/sax/EntityResolver;", nullptr, $PRIVATE | $FINAL, $field(DocumentBuilderImpl, fInitEntityResolver)},
	{"fSecurityManager", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager;", nullptr, $PRIVATE, $field(DocumentBuilderImpl, fSecurityManager)},
	{"fSecurityPropertyMgr", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager;", nullptr, $PRIVATE, $field(DocumentBuilderImpl, fSecurityPropertyMgr)},
	{}
};

$MethodInfo _DocumentBuilderImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/DocumentBuilderFactoryImpl;Ljava/util/Map;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/jaxp/DocumentBuilderFactoryImpl;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Boolean;>;)V", 0, $method(DocumentBuilderImpl, init$, void, $DocumentBuilderFactoryImpl*, $Map*, $Map*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/DocumentBuilderFactoryImpl;Ljava/util/Map;Ljava/util/Map;Z)V", "(Lcom/sun/org/apache/xerces/internal/jaxp/DocumentBuilderFactoryImpl;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Boolean;>;Z)V", 0, $method(DocumentBuilderImpl, init$, void, $DocumentBuilderFactoryImpl*, $Map*, $Map*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getDOMImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderImpl, getDOMImplementation, $DOMImplementation*)},
	{"getDOMParser", "()Lcom/sun/org/apache/xerces/internal/parsers/DOMParser;", nullptr, 0, $virtualMethod(DocumentBuilderImpl, getDOMParser, $DOMParser*)},
	{"getSchema", "()Ljavax/xml/validation/Schema;", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderImpl, getSchema, $Schema*)},
	{"isNamespaceAware", "()Z", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderImpl, isNamespaceAware, bool)},
	{"isValidating", "()Z", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderImpl, isValidating, bool)},
	{"isXIncludeAware", "()Z", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderImpl, isXIncludeAware, bool)},
	{"newDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderImpl, newDocument, $Document*)},
	{"parse", "(Lorg/xml/sax/InputSource;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderImpl, parse, $Document*, $InputSource*), "org.xml.sax.SAXException,java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderImpl, reset, void)},
	{"resetSchemaValidator", "()V", nullptr, $PRIVATE, $method(DocumentBuilderImpl, resetSchemaValidator, void), "org.xml.sax.SAXException"},
	{"setDocumentBuilderFactoryAttributes", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)V", $PRIVATE, $method(DocumentBuilderImpl, setDocumentBuilderFactoryAttributes, void, $Map*), "org.xml.sax.SAXNotSupportedException,org.xml.sax.SAXNotRecognizedException"},
	{"setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderImpl, setEntityResolver, void, $EntityResolver*)},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderImpl, setErrorHandler, void, $ErrorHandler*)},
	{"setFeatures", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Boolean;>;)V", $PRIVATE, $method(DocumentBuilderImpl, setFeatures, void, $Map*), "org.xml.sax.SAXNotSupportedException,org.xml.sax.SAXNotRecognizedException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DocumentBuilderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.DocumentBuilderImpl",
	"javax.xml.parsers.DocumentBuilder",
	"com.sun.org.apache.xerces.internal.jaxp.JAXPConstants",
	_DocumentBuilderImpl_FieldInfo_,
	_DocumentBuilderImpl_MethodInfo_
};

$Object* allocate$DocumentBuilderImpl($Class* clazz) {
	return $of($alloc(DocumentBuilderImpl));
}

int32_t DocumentBuilderImpl::hashCode() {
	 return this->$DocumentBuilder::hashCode();
}

bool DocumentBuilderImpl::equals(Object$* arg0) {
	 return this->$DocumentBuilder::equals(arg0);
}

$Object* DocumentBuilderImpl::clone() {
	 return this->$DocumentBuilder::clone();
}

$String* DocumentBuilderImpl::toString() {
	 return this->$DocumentBuilder::toString();
}

void DocumentBuilderImpl::finalize() {
	this->$DocumentBuilder::finalize();
}

$String* DocumentBuilderImpl::NAMESPACES_FEATURE = nullptr;
$String* DocumentBuilderImpl::INCLUDE_IGNORABLE_WHITESPACE = nullptr;
$String* DocumentBuilderImpl::CREATE_ENTITY_REF_NODES_FEATURE = nullptr;
$String* DocumentBuilderImpl::INCLUDE_COMMENTS_FEATURE = nullptr;
$String* DocumentBuilderImpl::CREATE_CDATA_NODES_FEATURE = nullptr;
$String* DocumentBuilderImpl::XINCLUDE_FEATURE = nullptr;
$String* DocumentBuilderImpl::XMLSCHEMA_VALIDATION_FEATURE = nullptr;
$String* DocumentBuilderImpl::VALIDATION_FEATURE = nullptr;
$String* DocumentBuilderImpl::SECURITY_MANAGER = nullptr;
$String* DocumentBuilderImpl::XML_SECURITY_PROPERTY_MANAGER = nullptr;
$String* DocumentBuilderImpl::ACCESS_EXTERNAL_DTD = nullptr;
$String* DocumentBuilderImpl::ACCESS_EXTERNAL_SCHEMA = nullptr;

void DocumentBuilderImpl::init$($DocumentBuilderFactoryImpl* dbf, $Map* dbfAttrs, $Map* features) {
	DocumentBuilderImpl::init$(dbf, dbfAttrs, features, false);
}

void DocumentBuilderImpl::init$($DocumentBuilderFactoryImpl* dbf, $Map* dbfAttrs, $Map* features, bool secureProcessing) {
	$useLocalCurrentObjectStackCache();
	$DocumentBuilder::init$();
	$set(this, domParser, $new($DOMParser));
	if ($nc(dbf)->isValidating()) {
		$set(this, fInitErrorHandler, $new($DefaultValidationErrorHandler, $($nc($($nc(this->domParser)->getXMLParserConfiguration()))->getLocale())));
		setErrorHandler(this->fInitErrorHandler);
	} else {
		$set(this, fInitErrorHandler, $nc(this->domParser)->getErrorHandler());
	}
	$nc(this->domParser)->setFeature(DocumentBuilderImpl::VALIDATION_FEATURE, $nc(dbf)->isValidating());
	$nc(this->domParser)->setFeature(DocumentBuilderImpl::NAMESPACES_FEATURE, $nc(dbf)->isNamespaceAware());
	$nc(this->domParser)->setFeature(DocumentBuilderImpl::INCLUDE_IGNORABLE_WHITESPACE, !$nc(dbf)->isIgnoringElementContentWhitespace());
	$nc(this->domParser)->setFeature(DocumentBuilderImpl::CREATE_ENTITY_REF_NODES_FEATURE, !$nc(dbf)->isExpandEntityReferences());
	$nc(this->domParser)->setFeature(DocumentBuilderImpl::INCLUDE_COMMENTS_FEATURE, !$nc(dbf)->isIgnoringComments());
	$nc(this->domParser)->setFeature(DocumentBuilderImpl::CREATE_CDATA_NODES_FEATURE, !$nc(dbf)->isCoalescing());
	if ($nc(dbf)->isXIncludeAware()) {
		$nc(this->domParser)->setFeature(DocumentBuilderImpl::XINCLUDE_FEATURE, true);
	}
	$set(this, fSecurityPropertyMgr, $new($XMLSecurityPropertyManager));
	$nc(this->domParser)->setProperty(DocumentBuilderImpl::XML_SECURITY_PROPERTY_MANAGER, this->fSecurityPropertyMgr);
	$set(this, fSecurityManager, $new($XMLSecurityManager, secureProcessing));
	$nc(this->domParser)->setProperty(DocumentBuilderImpl::SECURITY_MANAGER, this->fSecurityManager);
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
	$set(this, grammar, $nc(dbf)->getSchema());
	if (this->grammar != nullptr) {
		$var($XMLParserConfiguration, config, $nc(this->domParser)->getXMLParserConfiguration());
		$var($XMLComponent, validatorComponent, nullptr);
		if ($instanceOf($XSGrammarPoolContainer, this->grammar)) {
			$assign(validatorComponent, $new($XMLSchemaValidator));
			$set(this, fSchemaValidationManager, $new($ValidationManager));
			$set(this, fUnparsedEntityHandler, $new($UnparsedEntityHandler, this->fSchemaValidationManager));
			$nc(config)->setDTDHandler(this->fUnparsedEntityHandler);
			$nc(this->fUnparsedEntityHandler)->setDTDHandler(this->domParser);
			$nc(this->domParser)->setDTDSource(this->fUnparsedEntityHandler);
			$set(this, fSchemaValidatorComponentManager, $new($SchemaValidatorConfiguration, config, $cast($XSGrammarPoolContainer, this->grammar), this->fSchemaValidationManager));
		} else {
			$assign(validatorComponent, $new($JAXPValidatorComponent, $($nc(this->grammar)->newValidatorHandler())));
			$set(this, fSchemaValidationManager, nullptr);
			$set(this, fUnparsedEntityHandler, nullptr);
			$set(this, fSchemaValidatorComponentManager, config);
		}
		$nc(config)->addRecognizedFeatures($($nc(validatorComponent)->getRecognizedFeatures()));
		config->addRecognizedProperties($($nc(validatorComponent)->getRecognizedProperties()));
		setFeatures(features);
		config->setDocumentHandler($cast($XMLDocumentHandler, validatorComponent));
		$nc(($cast($XMLDocumentSource, validatorComponent)))->setDocumentHandler(this->domParser);
		$nc(this->domParser)->setDocumentSource($cast($XMLDocumentSource, validatorComponent));
		$set(this, fSchemaValidator, validatorComponent);
	} else {
		$set(this, fSchemaValidationManager, nullptr);
		$set(this, fUnparsedEntityHandler, nullptr);
		$set(this, fSchemaValidatorComponentManager, nullptr);
		$set(this, fSchemaValidator, nullptr);
		setFeatures(features);
	}
	setDocumentBuilderFactoryAttributes(dbfAttrs);
	$set(this, fInitEntityResolver, $nc(this->domParser)->getEntityResolver());
}

void DocumentBuilderImpl::setFeatures($Map* features) {
	$useLocalCurrentObjectStackCache();
	if (features != nullptr) {
		{
			$var($Iterator, i$, $nc($(features->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($String, var$0, $cast($String, $nc(entry)->getKey()));
					$nc(this->domParser)->setFeature(var$0, $nc(($cast($Boolean, $(entry->getValue()))))->booleanValue());
				}
			}
		}
	}
}

void DocumentBuilderImpl::setDocumentBuilderFactoryAttributes($Map* dbfAttrs) {
	$useLocalCurrentObjectStackCache();
	if (dbfAttrs == nullptr) {
		return;
	}
	{
		$var($Iterator, i$, $nc($($nc(dbfAttrs)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($String, name, $cast($String, $nc(entry)->getKey()));
				$var($Object, val, entry->getValue());
				if ($instanceOf($Boolean, val)) {
					$nc(this->domParser)->setFeature(name, $nc(($cast($Boolean, val)))->booleanValue());
				} else {
					$init($JAXPConstants);
					if ($nc($JAXPConstants::JAXP_SCHEMA_LANGUAGE)->equals(name)) {
						if ($nc($JAXPConstants::W3C_XML_SCHEMA)->equals(val)) {
							if (isValidating()) {
								$nc(this->domParser)->setFeature(DocumentBuilderImpl::XMLSCHEMA_VALIDATION_FEATURE, true);
								$nc(this->domParser)->setProperty($JAXPConstants::JAXP_SCHEMA_LANGUAGE, $JAXPConstants::W3C_XML_SCHEMA);
							}
						}
					} else {
						if ($nc($JAXPConstants::JAXP_SCHEMA_SOURCE)->equals(name)) {
							if (isValidating()) {
								$var($String, value, $cast($String, dbfAttrs->get($JAXPConstants::JAXP_SCHEMA_LANGUAGE)));
								if (value != nullptr && $nc($JAXPConstants::W3C_XML_SCHEMA)->equals(value)) {
									$nc(this->domParser)->setProperty(name, val);
								} else {
									$init($DOMMessageFormatter);
									$throwNew($IllegalArgumentException, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "jaxp-order-not-supported"_s, $$new($ObjectArray, {
										$of($JAXPConstants::JAXP_SCHEMA_LANGUAGE),
										$of($JAXPConstants::JAXP_SCHEMA_SOURCE)
									}))));
								}
							}
						} else {
							$init($JdkProperty$State);
							if (this->fSecurityManager == nullptr || !$nc(this->fSecurityManager)->setLimit(name, $JdkProperty$State::APIPROPERTY, val)) {
								$init($XMLSecurityPropertyManager$State);
								if (this->fSecurityPropertyMgr == nullptr || !$nc(this->fSecurityPropertyMgr)->setValue(name, $XMLSecurityPropertyManager$State::APIPROPERTY, val)) {
									$nc(this->domParser)->setProperty(name, val);
								}
							}
						}
					}
				}
			}
		}
	}
}

$Document* DocumentBuilderImpl::newDocument() {
	return $new($DocumentImpl);
}

$DOMImplementation* DocumentBuilderImpl::getDOMImplementation() {
	return $DOMImplementationImpl::getDOMImplementation();
}

$Document* DocumentBuilderImpl::parse($InputSource* is) {
	$useLocalCurrentObjectStackCache();
	if (is == nullptr) {
		$init($DOMMessageFormatter);
		$throwNew($IllegalArgumentException, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "jaxp-null-input-source"_s, nullptr)));
	}
	if (this->fSchemaValidator != nullptr) {
		if (this->fSchemaValidationManager != nullptr) {
			$nc(this->fSchemaValidationManager)->reset();
			$nc(this->fUnparsedEntityHandler)->reset();
		}
		resetSchemaValidator();
	}
	$nc(this->domParser)->parse(is);
	$var($Document, doc, $nc(this->domParser)->getDocument());
	$nc(this->domParser)->dropDocumentReferences();
	return doc;
}

bool DocumentBuilderImpl::isNamespaceAware() {
	try {
		return $nc(this->domParser)->getFeature(DocumentBuilderImpl::NAMESPACES_FEATURE);
	} catch ($SAXException& x) {
		$throwNew($IllegalStateException, $(x->getMessage()));
	}
	$shouldNotReachHere();
}

bool DocumentBuilderImpl::isValidating() {
	try {
		return $nc(this->domParser)->getFeature(DocumentBuilderImpl::VALIDATION_FEATURE);
	} catch ($SAXException& x) {
		$throwNew($IllegalStateException, $(x->getMessage()));
	}
	$shouldNotReachHere();
}

bool DocumentBuilderImpl::isXIncludeAware() {
	try {
		return $nc(this->domParser)->getFeature(DocumentBuilderImpl::XINCLUDE_FEATURE);
	} catch ($SAXException& exc) {
		return false;
	}
	$shouldNotReachHere();
}

void DocumentBuilderImpl::setEntityResolver($EntityResolver* er) {
	$nc(this->domParser)->setEntityResolver(er);
}

void DocumentBuilderImpl::setErrorHandler($ErrorHandler* eh) {
	$nc(this->domParser)->setErrorHandler(eh);
}

$Schema* DocumentBuilderImpl::getSchema() {
	return this->grammar;
}

void DocumentBuilderImpl::reset() {
	if ($nc(this->domParser)->getErrorHandler() != this->fInitErrorHandler) {
		$nc(this->domParser)->setErrorHandler(this->fInitErrorHandler);
	}
	if ($nc(this->domParser)->getEntityResolver() != this->fInitEntityResolver) {
		$nc(this->domParser)->setEntityResolver(this->fInitEntityResolver);
	}
}

$DOMParser* DocumentBuilderImpl::getDOMParser() {
	return this->domParser;
}

void DocumentBuilderImpl::resetSchemaValidator() {
	try {
		$nc(this->fSchemaValidator)->reset(this->fSchemaValidatorComponentManager);
	} catch ($XMLConfigurationException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

DocumentBuilderImpl::DocumentBuilderImpl() {
}

void clinit$DocumentBuilderImpl($Class* class$) {
	$init($Constants);
	$assignStatic(DocumentBuilderImpl::NAMESPACES_FEATURE, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
	$assignStatic(DocumentBuilderImpl::INCLUDE_IGNORABLE_WHITESPACE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::INCLUDE_IGNORABLE_WHITESPACE}));
	$assignStatic(DocumentBuilderImpl::CREATE_ENTITY_REF_NODES_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::CREATE_ENTITY_REF_NODES_FEATURE}));
	$assignStatic(DocumentBuilderImpl::INCLUDE_COMMENTS_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::INCLUDE_COMMENTS_FEATURE}));
	$assignStatic(DocumentBuilderImpl::CREATE_CDATA_NODES_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::CREATE_CDATA_NODES_FEATURE}));
	$assignStatic(DocumentBuilderImpl::XINCLUDE_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::XINCLUDE_FEATURE}));
	$assignStatic(DocumentBuilderImpl::XMLSCHEMA_VALIDATION_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_VALIDATION_FEATURE}));
	$assignStatic(DocumentBuilderImpl::VALIDATION_FEATURE, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(DocumentBuilderImpl::SECURITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SECURITY_MANAGER_PROPERTY}));
	$init($JdkConstants);
	$assignStatic(DocumentBuilderImpl::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
	$init($XMLConstants);
	$assignStatic(DocumentBuilderImpl::ACCESS_EXTERNAL_DTD, $XMLConstants::ACCESS_EXTERNAL_DTD);
	$assignStatic(DocumentBuilderImpl::ACCESS_EXTERNAL_SCHEMA, $XMLConstants::ACCESS_EXTERNAL_SCHEMA);
}

$Class* DocumentBuilderImpl::load$($String* name, bool initialize) {
	$loadClass(DocumentBuilderImpl, name, initialize, &_DocumentBuilderImpl_ClassInfo_, clinit$DocumentBuilderImpl, allocate$DocumentBuilderImpl);
	return class$;
}

$Class* DocumentBuilderImpl::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com