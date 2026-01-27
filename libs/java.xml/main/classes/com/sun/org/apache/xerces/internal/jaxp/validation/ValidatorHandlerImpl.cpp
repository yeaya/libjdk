#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/RevalidationHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/EntityState.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/DraconianErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/JAXPValidationMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/Util.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl$ResolutionForwarder.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl$XMLSchemaTypeInfoProvider.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaValidatorComponentManager.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer.h>
#include <com/sun/org/apache/xerces/internal/parsers/SAXParser.h>
#include <com/sun/org/apache/xerces/internal/util/AttributesProxy.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/util/SAXLocatorWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/SAXMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/Status.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$Property.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/parsers/FactoryConfigurationError.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/sax/SAXResult.h>
#include <javax/xml/transform/sax/SAXSource.h>
#include <javax/xml/validation/TypeInfoProvider.h>
#include <javax/xml/validation/ValidatorHandler.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/w3c/dom/ls/LSResourceResolver.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/ext/Attributes2.h>
#include <org/xml/sax/ext/EntityResolver2.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_DTD
#undef ATTRIBUTE_DECLARED
#undef EMPTY_STRING
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef FEATURE_SECURE_PROCESSING
#undef NAMESPACE_CONTEXT
#undef NAMESPACE_CONTEXT_PROPERTY
#undef NAMESPACE_PREFIXES
#undef NAMESPACE_PREFIXES_FEATURE
#undef NOT_ALLOWED
#undef NOT_RECOGNIZED
#undef OVERRIDE_PARSER
#undef SAX_FEATURE_PREFIX
#undef SCHEMA_VALIDATOR
#undef SCHEMA_VALIDATOR_PROPERTY
#undef SECURITY_MANAGER
#undef SECURITY_MANAGER_PROPERTY
#undef STRING_INTERNING
#undef STRING_INTERNING_FEATURE
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TRUE
#undef VALIDATION_MANAGER
#undef VALIDATION_MANAGER_PROPERTY
#undef XERCES_PROPERTY_PREFIX
#undef XML_SECURITY_PROPERTY_MANAGER

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $RevalidationHandler = ::com::sun::org::apache::xerces::internal::impl::RevalidationHandler;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $EntityState = ::com::sun::org::apache::xerces::internal::impl::validation::EntityState;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $DraconianErrorHandler = ::com::sun::org::apache::xerces::internal::jaxp::validation::DraconianErrorHandler;
using $JAXPValidationMessageFormatter = ::com::sun::org::apache::xerces::internal::jaxp::validation::JAXPValidationMessageFormatter;
using $Util = ::com::sun::org::apache::xerces::internal::jaxp::validation::Util;
using $ValidatorHandlerImpl$ResolutionForwarder = ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl$ResolutionForwarder;
using $ValidatorHandlerImpl$XMLSchemaTypeInfoProvider = ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl$XMLSchemaTypeInfoProvider;
using $XMLSchemaValidatorComponentManager = ::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaValidatorComponentManager;
using $XSGrammarPoolContainer = ::com::sun::org::apache::xerces::internal::jaxp::validation::XSGrammarPoolContainer;
using $SAXParser = ::com::sun::org::apache::xerces::internal::parsers::SAXParser;
using $AttributesProxy = ::com::sun::org::apache::xerces::internal::util::AttributesProxy;
using $ParserConfigurationSettings = ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings;
using $SAXLocatorWrapper = ::com::sun::org::apache::xerces::internal::util::SAXLocatorWrapper;
using $SAXMessageFormatter = ::com::sun::org::apache::xerces::internal::util::SAXMessageFormatter;
using $Status = ::com::sun::org::apache::xerces::internal::util::Status;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLAttributesImpl = ::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $XMLSecurityPropertyManager$Property = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $XMLDocumentFilter = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $AttributePSVI = ::com::sun::org::apache::xerces::internal::xs::AttributePSVI;
using $ElementPSVI = ::com::sun::org::apache::xerces::internal::xs::ElementPSVI;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $XMLConstants = ::javax::xml::XMLConstants;
using $FactoryConfigurationError = ::javax::xml::parsers::FactoryConfigurationError;
using $Result = ::javax::xml::transform::Result;
using $Source = ::javax::xml::transform::Source;
using $SAXResult = ::javax::xml::transform::sax::SAXResult;
using $SAXSource = ::javax::xml::transform::sax::SAXSource;
using $TypeInfoProvider = ::javax::xml::validation::TypeInfoProvider;
using $ValidatorHandler = ::javax::xml::validation::ValidatorHandler;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $LSResourceResolver = ::org::w3c::dom::ls::LSResourceResolver;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;
using $XMLReader = ::org::xml::sax::XMLReader;
using $Attributes2 = ::org::xml::sax::ext::Attributes2;
using $EntityResolver2 = ::org::xml::sax::ext::EntityResolver2;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _ValidatorHandlerImpl_FieldInfo_[] = {
	{"NAMESPACE_PREFIXES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValidatorHandlerImpl, NAMESPACE_PREFIXES)},
	{"STRING_INTERNING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(ValidatorHandlerImpl, STRING_INTERNING)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValidatorHandlerImpl, ERROR_REPORTER)},
	{"NAMESPACE_CONTEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValidatorHandlerImpl, NAMESPACE_CONTEXT)},
	{"SCHEMA_VALIDATOR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValidatorHandlerImpl, SCHEMA_VALIDATOR)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValidatorHandlerImpl, SECURITY_MANAGER)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValidatorHandlerImpl, SYMBOL_TABLE)},
	{"VALIDATION_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValidatorHandlerImpl, VALIDATION_MANAGER)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValidatorHandlerImpl, XML_SECURITY_PROPERTY_MANAGER)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PRIVATE, $field(ValidatorHandlerImpl, fErrorReporter)},
	{"fNamespaceContext", "Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, $PRIVATE, $field(ValidatorHandlerImpl, fNamespaceContext)},
	{"fSchemaValidator", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;", nullptr, $PRIVATE, $field(ValidatorHandlerImpl, fSchemaValidator)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(ValidatorHandlerImpl, fSymbolTable)},
	{"fValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PRIVATE, $field(ValidatorHandlerImpl, fValidationManager)},
	{"fComponentManager", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaValidatorComponentManager;", nullptr, $PRIVATE, $field(ValidatorHandlerImpl, fComponentManager)},
	{"fSAXLocatorWrapper", "Lcom/sun/org/apache/xerces/internal/util/SAXLocatorWrapper;", nullptr, $PRIVATE | $FINAL, $field(ValidatorHandlerImpl, fSAXLocatorWrapper)},
	{"fNeedPushNSContext", "Z", nullptr, $PRIVATE, $field(ValidatorHandlerImpl, fNeedPushNSContext)},
	{"fUnparsedEntities", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(ValidatorHandlerImpl, fUnparsedEntities)},
	{"fStringsInternalized", "Z", nullptr, $PRIVATE, $field(ValidatorHandlerImpl, fStringsInternalized)},
	{"fElementQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(ValidatorHandlerImpl, fElementQName)},
	{"fAttributeQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(ValidatorHandlerImpl, fAttributeQName)},
	{"fAttributes", "Lcom/sun/org/apache/xerces/internal/util/XMLAttributesImpl;", nullptr, $PRIVATE | $FINAL, $field(ValidatorHandlerImpl, fAttributes)},
	{"fAttrAdapter", "Lcom/sun/org/apache/xerces/internal/util/AttributesProxy;", nullptr, $PRIVATE | $FINAL, $field(ValidatorHandlerImpl, fAttrAdapter)},
	{"fTempString", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PRIVATE | $FINAL, $field(ValidatorHandlerImpl, fTempString)},
	{"fContentHandler", "Lorg/xml/sax/ContentHandler;", nullptr, $PRIVATE, $field(ValidatorHandlerImpl, fContentHandler)},
	{"fTypeInfoProvider", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl$XMLSchemaTypeInfoProvider;", nullptr, $PRIVATE | $FINAL, $field(ValidatorHandlerImpl, fTypeInfoProvider)},
	{"fResolutionForwarder", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl$ResolutionForwarder;", nullptr, $PRIVATE | $FINAL, $field(ValidatorHandlerImpl, fResolutionForwarder)},
	{}
};

$MethodInfo _ValidatorHandlerImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer;)V", nullptr, $PUBLIC, $method(ValidatorHandlerImpl, init$, void, $XSGrammarPoolContainer*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaValidatorComponentManager;)V", nullptr, $PUBLIC, $method(ValidatorHandlerImpl, init$, void, $XMLSchemaValidatorComponentManager*)},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, characters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"doctypeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, doctypeDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, emptyElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, endCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, endDocument, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, endElement, void, $QName*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, endGeneralEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, endPrefixMapping, void, $String*), "org.xml.sax.SAXException"},
	{"fillQName", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(ValidatorHandlerImpl, fillQName, void, $QName*, $String*, $String*, $String*)},
	{"fillXMLAttribute", "(Lorg/xml/sax/Attributes;I)V", nullptr, $PRIVATE, $method(ValidatorHandlerImpl, fillXMLAttribute, void, $Attributes*, int32_t)},
	{"fillXMLAttributes", "(Lorg/xml/sax/Attributes;)V", nullptr, $PRIVATE, $method(ValidatorHandlerImpl, fillXMLAttributes, void, $Attributes*)},
	{"fillXMLAttributes2", "(Lorg/xml/sax/ext/Attributes2;)V", nullptr, $PRIVATE, $method(ValidatorHandlerImpl, fillXMLAttributes2, void, $Attributes2*)},
	{"getAttributePSVI", "(I)Lcom/sun/org/apache/xerces/internal/xs/AttributePSVI;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, getAttributePSVI, $AttributePSVI*, int32_t)},
	{"getAttributePSVIByName", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/AttributePSVI;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, getAttributePSVIByName, $AttributePSVI*, $String*, $String*)},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, getContentHandler, $ContentHandler*)},
	{"getDocumentSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, getDocumentSource, $XMLDocumentSource*)},
	{"getElementPSVI", "()Lcom/sun/org/apache/xerces/internal/xs/ElementPSVI;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, getElementPSVI, $ElementPSVI*)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, getErrorHandler, $ErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, getFeature, bool, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, getProperty, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getResourceResolver", "()Lorg/w3c/dom/ls/LSResourceResolver;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, getResourceResolver, $LSResourceResolver*)},
	{"getTypeInfoProvider", "()Ljavax/xml/validation/TypeInfoProvider;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, getTypeInfoProvider, $TypeInfoProvider*)},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, ignorableWhitespace, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"isEntityDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, isEntityDeclared, bool, $String*)},
	{"isEntityUnparsed", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, isEntityUnparsed, bool, $String*)},
	{"notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, notationDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, setContentHandler, void, $ContentHandler*)},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, setDocumentLocator, void, $Locator*)},
	{"setDocumentSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, setDocumentSource, void, $XMLDocumentSource*)},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, setErrorHandler, void, $ErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, setFeature, void, $String*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setResourceResolver", "(Lorg/w3c/dom/ls/LSResourceResolver;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, setResourceResolver, void, $LSResourceResolver*)},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, skippedEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, startCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, startDocument, void, $XMLLocator*, $String*, $NamespaceContext*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, startElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, startGeneralEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, startPrefixMapping, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, textDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, unparsedEntityDecl, void, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"validate", "(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, validate, void, $Source*, $Result*), "org.xml.sax.SAXException,java.io.IOException"},
	{"xmlDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl, xmlDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _ValidatorHandlerImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl$ResolutionForwarder", "com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl", "ResolutionForwarder", $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl$XMLSchemaTypeInfoProvider", "com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl", "XMLSchemaTypeInfoProvider", $PRIVATE},
	{}
};

$ClassInfo _ValidatorHandlerImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl",
	"javax.xml.validation.ValidatorHandler",
	"org.xml.sax.DTDHandler,com.sun.org.apache.xerces.internal.impl.validation.EntityState,com.sun.org.apache.xerces.internal.xs.PSVIProvider,com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHelper,com.sun.org.apache.xerces.internal.xni.XMLDocumentHandler",
	_ValidatorHandlerImpl_FieldInfo_,
	_ValidatorHandlerImpl_MethodInfo_,
	nullptr,
	nullptr,
	_ValidatorHandlerImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl$ResolutionForwarder,com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl$XMLSchemaTypeInfoProvider"
};

$Object* allocate$ValidatorHandlerImpl($Class* clazz) {
	return $of($alloc(ValidatorHandlerImpl));
}

int32_t ValidatorHandlerImpl::hashCode() {
	 return this->$ValidatorHandler::hashCode();
}

bool ValidatorHandlerImpl::equals(Object$* arg0) {
	 return this->$ValidatorHandler::equals(arg0);
}

$Object* ValidatorHandlerImpl::clone() {
	 return this->$ValidatorHandler::clone();
}

$String* ValidatorHandlerImpl::toString() {
	 return this->$ValidatorHandler::toString();
}

void ValidatorHandlerImpl::finalize() {
	this->$ValidatorHandler::finalize();
}

$String* ValidatorHandlerImpl::NAMESPACE_PREFIXES = nullptr;
$String* ValidatorHandlerImpl::STRING_INTERNING = nullptr;
$String* ValidatorHandlerImpl::ERROR_REPORTER = nullptr;
$String* ValidatorHandlerImpl::NAMESPACE_CONTEXT = nullptr;
$String* ValidatorHandlerImpl::SCHEMA_VALIDATOR = nullptr;
$String* ValidatorHandlerImpl::SECURITY_MANAGER = nullptr;
$String* ValidatorHandlerImpl::SYMBOL_TABLE = nullptr;
$String* ValidatorHandlerImpl::VALIDATION_MANAGER = nullptr;
$String* ValidatorHandlerImpl::XML_SECURITY_PROPERTY_MANAGER = nullptr;

void ValidatorHandlerImpl::init$($XSGrammarPoolContainer* grammarContainer) {
	$useLocalCurrentObjectStackCache();
	ValidatorHandlerImpl::init$($$new($XMLSchemaValidatorComponentManager, grammarContainer));
	$nc(this->fComponentManager)->addRecognizedFeatures($$new($StringArray, {ValidatorHandlerImpl::NAMESPACE_PREFIXES}));
	$nc(this->fComponentManager)->setFeature(ValidatorHandlerImpl::NAMESPACE_PREFIXES, false);
	setErrorHandler(nullptr);
	setResourceResolver(nullptr);
}

void ValidatorHandlerImpl::init$($XMLSchemaValidatorComponentManager* componentManager) {
	$ValidatorHandler::init$();
	$set(this, fSAXLocatorWrapper, $new($SAXLocatorWrapper));
	this->fNeedPushNSContext = true;
	$set(this, fUnparsedEntities, nullptr);
	this->fStringsInternalized = false;
	$set(this, fElementQName, $new($QName));
	$set(this, fAttributeQName, $new($QName));
	$set(this, fAttributes, $new($XMLAttributesImpl));
	$set(this, fAttrAdapter, $new($AttributesProxy, this->fAttributes));
	$set(this, fTempString, $new($XMLString));
	$set(this, fContentHandler, nullptr);
	$set(this, fTypeInfoProvider, $new($ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, this));
	$set(this, fResolutionForwarder, $new($ValidatorHandlerImpl$ResolutionForwarder, nullptr));
	$set(this, fComponentManager, componentManager);
	$set(this, fErrorReporter, $cast($XMLErrorReporter, $nc(this->fComponentManager)->getProperty(ValidatorHandlerImpl::ERROR_REPORTER)));
	$set(this, fNamespaceContext, $cast($NamespaceContext, $nc(this->fComponentManager)->getProperty(ValidatorHandlerImpl::NAMESPACE_CONTEXT)));
	$set(this, fSchemaValidator, $cast($XMLSchemaValidator, $nc(this->fComponentManager)->getProperty(ValidatorHandlerImpl::SCHEMA_VALIDATOR)));
	$set(this, fSymbolTable, $cast($SymbolTable, $nc(this->fComponentManager)->getProperty(ValidatorHandlerImpl::SYMBOL_TABLE)));
	$set(this, fValidationManager, $cast($ValidationManager, $nc(this->fComponentManager)->getProperty(ValidatorHandlerImpl::VALIDATION_MANAGER)));
}

void ValidatorHandlerImpl::setContentHandler($ContentHandler* receiver) {
	$set(this, fContentHandler, receiver);
}

$ContentHandler* ValidatorHandlerImpl::getContentHandler() {
	return this->fContentHandler;
}

void ValidatorHandlerImpl::setErrorHandler($ErrorHandler* errorHandler) {
	$nc(this->fComponentManager)->setErrorHandler(errorHandler);
}

$ErrorHandler* ValidatorHandlerImpl::getErrorHandler() {
	return $nc(this->fComponentManager)->getErrorHandler();
}

void ValidatorHandlerImpl::setResourceResolver($LSResourceResolver* resourceResolver) {
	$nc(this->fComponentManager)->setResourceResolver(resourceResolver);
}

$LSResourceResolver* ValidatorHandlerImpl::getResourceResolver() {
	return $nc(this->fComponentManager)->getResourceResolver();
}

$TypeInfoProvider* ValidatorHandlerImpl::getTypeInfoProvider() {
	return this->fTypeInfoProvider;
}

bool ValidatorHandlerImpl::getFeature($String* name) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	try {
		return $nc(this->fComponentManager)->getFeature(name);
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		$var($String, key, e->getType() == $Status::NOT_RECOGNIZED ? "feature-not-recognized"_s : "feature-not-supported"_s);
		$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fComponentManager)->getLocale()), key, $$new($ObjectArray, {$of(identifier)}))));
	}
	$shouldNotReachHere();
}

void ValidatorHandlerImpl::setFeature($String* name, bool value) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	try {
		$nc(this->fComponentManager)->setFeature(name, value);
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$var($String, key, nullptr);
		$init($Status);
		if (e->getType() == $Status::NOT_ALLOWED) {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fComponentManager)->getLocale()), "jaxp-secureprocessing-feature"_s, nullptr)));
		} else {
			if (e->getType() == $Status::NOT_RECOGNIZED) {
				$assign(key, "feature-not-recognized"_s);
			} else {
				$assign(key, "feature-not-supported"_s);
			}
		}
		$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fComponentManager)->getLocale()), key, $$new($ObjectArray, {$of(identifier)}))));
	}
}

$Object* ValidatorHandlerImpl::getProperty($String* name) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	try {
		return $of($nc(this->fComponentManager)->getProperty(name));
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		$var($String, key, e->getType() == $Status::NOT_RECOGNIZED ? "property-not-recognized"_s : "property-not-supported"_s);
		$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fComponentManager)->getLocale()), key, $$new($ObjectArray, {$of(identifier)}))));
	}
	$shouldNotReachHere();
}

void ValidatorHandlerImpl::setProperty($String* name, Object$* object) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	try {
		$nc(this->fComponentManager)->setProperty(name, object);
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		$var($String, key, e->getType() == $Status::NOT_RECOGNIZED ? "property-not-recognized"_s : "property-not-supported"_s);
		$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fComponentManager)->getLocale()), key, $$new($ObjectArray, {$of(identifier)}))));
	}
}

bool ValidatorHandlerImpl::isEntityDeclared($String* name) {
	return false;
}

bool ValidatorHandlerImpl::isEntityUnparsed($String* name) {
	if (this->fUnparsedEntities != nullptr) {
		return $nc(this->fUnparsedEntities)->containsKey(name);
	}
	return false;
}

void ValidatorHandlerImpl::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* namespaceContext, $Augmentations* augs) {
	if (this->fContentHandler != nullptr) {
		try {
			$nc(this->fContentHandler)->startDocument();
		} catch ($SAXException& e) {
			$throwNew($XNIException, static_cast<$Exception*>(e));
		}
	}
}

void ValidatorHandlerImpl::xmlDecl($String* version, $String* encoding, $String* standalone, $Augmentations* augs) {
}

void ValidatorHandlerImpl::doctypeDecl($String* rootElement, $String* publicId, $String* systemId, $Augmentations* augs) {
}

void ValidatorHandlerImpl::comment($XMLString* text, $Augmentations* augs) {
}

void ValidatorHandlerImpl::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
	if (this->fContentHandler != nullptr) {
		try {
			$nc(this->fContentHandler)->processingInstruction(target, $($nc(data)->toString()));
		} catch ($SAXException& e) {
			$throwNew($XNIException, static_cast<$Exception*>(e));
		}
	}
}

void ValidatorHandlerImpl::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	if (this->fContentHandler != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(this->fTypeInfoProvider)->beginStartElement(augs, attributes);
					$init($XMLSymbols);
					$nc(this->fContentHandler)->startElement(($nc(element)->uri != nullptr) ? $nc(element)->uri : $XMLSymbols::EMPTY_STRING, element->localpart, element->rawname, this->fAttrAdapter);
				} catch ($SAXException& e) {
					$throwNew($XNIException, static_cast<$Exception*>(e));
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(this->fTypeInfoProvider)->finishStartElement();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void ValidatorHandlerImpl::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	startElement(element, attributes, augs);
	endElement(element, augs);
}

void ValidatorHandlerImpl::startGeneralEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
}

void ValidatorHandlerImpl::textDecl($String* version, $String* encoding, $Augmentations* augs) {
}

void ValidatorHandlerImpl::endGeneralEntity($String* name, $Augmentations* augs) {
}

void ValidatorHandlerImpl::characters($XMLString* text, $Augmentations* augs) {
	if (this->fContentHandler != nullptr) {
		if ($nc(text)->length == 0) {
			return;
		}
		try {
			$nc(this->fContentHandler)->characters($nc(text)->ch, text->offset, text->length);
		} catch ($SAXException& e) {
			$throwNew($XNIException, static_cast<$Exception*>(e));
		}
	}
}

void ValidatorHandlerImpl::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	if (this->fContentHandler != nullptr) {
		try {
			$nc(this->fContentHandler)->ignorableWhitespace($nc(text)->ch, text->offset, text->length);
		} catch ($SAXException& e) {
			$throwNew($XNIException, static_cast<$Exception*>(e));
		}
	}
}

void ValidatorHandlerImpl::endElement($QName* element, $Augmentations* augs) {
	if (this->fContentHandler != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(this->fTypeInfoProvider)->beginEndElement(augs);
					$init($XMLSymbols);
					$nc(this->fContentHandler)->endElement(($nc(element)->uri != nullptr) ? $nc(element)->uri : $XMLSymbols::EMPTY_STRING, element->localpart, element->rawname);
				} catch ($SAXException& e) {
					$throwNew($XNIException, static_cast<$Exception*>(e));
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(this->fTypeInfoProvider)->finishEndElement();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void ValidatorHandlerImpl::startCDATA($Augmentations* augs) {
}

void ValidatorHandlerImpl::endCDATA($Augmentations* augs) {
}

void ValidatorHandlerImpl::endDocument($Augmentations* augs) {
	if (this->fContentHandler != nullptr) {
		try {
			$nc(this->fContentHandler)->endDocument();
		} catch ($SAXException& e) {
			$throwNew($XNIException, static_cast<$Exception*>(e));
		}
	}
}

void ValidatorHandlerImpl::setDocumentSource($XMLDocumentSource* source) {
}

$XMLDocumentSource* ValidatorHandlerImpl::getDocumentSource() {
	return this->fSchemaValidator;
}

void ValidatorHandlerImpl::setDocumentLocator($Locator* locator) {
	$nc(this->fSAXLocatorWrapper)->setLocator(locator);
	if (this->fContentHandler != nullptr) {
		$nc(this->fContentHandler)->setDocumentLocator(locator);
	}
}

void ValidatorHandlerImpl::startDocument() {
	$useLocalCurrentObjectStackCache();
	$nc(this->fComponentManager)->reset();
	$nc(this->fSchemaValidator)->setDocumentHandler(this);
	$nc(this->fValidationManager)->setEntityState(this);
	$nc(this->fTypeInfoProvider)->finishStartElement();
	this->fNeedPushNSContext = true;
	if (this->fUnparsedEntities != nullptr && !$nc(this->fUnparsedEntities)->isEmpty()) {
		$nc(this->fUnparsedEntities)->clear();
	}
	$nc(this->fErrorReporter)->setDocumentLocator(this->fSAXLocatorWrapper);
	try {
		$nc(this->fSchemaValidator)->startDocument(this->fSAXLocatorWrapper, $($nc(this->fSAXLocatorWrapper)->getEncoding()), this->fNamespaceContext, nullptr);
	} catch ($XMLParseException& e) {
		$throw($($Util::toSAXParseException(e)));
	} catch ($XNIException& e) {
		$throw($($Util::toSAXException(e)));
	}
}

void ValidatorHandlerImpl::endDocument() {
	$useLocalCurrentObjectStackCache();
	$nc(this->fSAXLocatorWrapper)->setLocator(nullptr);
	try {
		$nc(this->fSchemaValidator)->endDocument(nullptr);
	} catch ($XMLParseException& e) {
		$throw($($Util::toSAXParseException(e)));
	} catch ($XNIException& e) {
		$throw($($Util::toSAXException(e)));
	}
}

void ValidatorHandlerImpl::startPrefixMapping($String* prefix, $String* uri) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefixSymbol, nullptr);
	$var($String, uriSymbol, nullptr);
	if (!this->fStringsInternalized) {
		$init($XMLSymbols);
		$assign(prefixSymbol, (prefix != nullptr) ? $nc(this->fSymbolTable)->addSymbol(prefix) : $XMLSymbols::EMPTY_STRING);
		$assign(uriSymbol, (uri != nullptr && uri->length() > 0) ? $nc(this->fSymbolTable)->addSymbol(uri) : ($String*)nullptr);
	} else {
		$init($XMLSymbols);
		$assign(prefixSymbol, (prefix != nullptr) ? prefix : $XMLSymbols::EMPTY_STRING);
		$assign(uriSymbol, (uri != nullptr && uri->length() > 0) ? uri : ($String*)nullptr);
	}
	if (this->fNeedPushNSContext) {
		this->fNeedPushNSContext = false;
		$nc(this->fNamespaceContext)->pushContext();
	}
	$nc(this->fNamespaceContext)->declarePrefix(prefixSymbol, uriSymbol);
	if (this->fContentHandler != nullptr) {
		$nc(this->fContentHandler)->startPrefixMapping(prefix, uri);
	}
}

void ValidatorHandlerImpl::endPrefixMapping($String* prefix) {
	if (this->fContentHandler != nullptr) {
		$nc(this->fContentHandler)->endPrefixMapping(prefix);
	}
}

void ValidatorHandlerImpl::startElement($String* uri, $String* localName, $String* qName, $Attributes* atts) {
	$useLocalCurrentObjectStackCache();
	if (this->fNeedPushNSContext) {
		$nc(this->fNamespaceContext)->pushContext();
	}
	this->fNeedPushNSContext = true;
	fillQName(this->fElementQName, uri, localName, qName);
	if ($instanceOf($Attributes2, atts)) {
		fillXMLAttributes2($cast($Attributes2, atts));
	} else {
		fillXMLAttributes(atts);
	}
	try {
		$nc(this->fSchemaValidator)->startElement(this->fElementQName, this->fAttributes, nullptr);
	} catch ($XMLParseException& e) {
		$throw($($Util::toSAXParseException(e)));
	} catch ($XNIException& e) {
		$throw($($Util::toSAXException(e)));
	}
}

void ValidatorHandlerImpl::endElement($String* uri, $String* localName, $String* qName) {
	$useLocalCurrentObjectStackCache();
	fillQName(this->fElementQName, uri, localName, qName);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->fSchemaValidator)->endElement(this->fElementQName, nullptr);
			} catch ($XMLParseException& e) {
				$throw($($Util::toSAXParseException(e)));
			} catch ($XNIException& e) {
				$throw($($Util::toSAXException(e)));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->fNamespaceContext)->popContext();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ValidatorHandlerImpl::characters($chars* ch, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->fTempString)->setValues(ch, start, length);
		$nc(this->fSchemaValidator)->characters(this->fTempString, nullptr);
	} catch ($XMLParseException& e) {
		$throw($($Util::toSAXParseException(e)));
	} catch ($XNIException& e) {
		$throw($($Util::toSAXException(e)));
	}
}

void ValidatorHandlerImpl::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->fTempString)->setValues(ch, start, length);
		$nc(this->fSchemaValidator)->ignorableWhitespace(this->fTempString, nullptr);
	} catch ($XMLParseException& e) {
		$throw($($Util::toSAXParseException(e)));
	} catch ($XNIException& e) {
		$throw($($Util::toSAXException(e)));
	}
}

void ValidatorHandlerImpl::processingInstruction($String* target, $String* data) {
	if (this->fContentHandler != nullptr) {
		$nc(this->fContentHandler)->processingInstruction(target, data);
	}
}

void ValidatorHandlerImpl::skippedEntity($String* name) {
	if (this->fContentHandler != nullptr) {
		$nc(this->fContentHandler)->skippedEntity(name);
	}
}

void ValidatorHandlerImpl::notationDecl($String* name, $String* publicId, $String* systemId) {
}

void ValidatorHandlerImpl::unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) {
	if (this->fUnparsedEntities == nullptr) {
		$set(this, fUnparsedEntities, $new($HashMap));
	}
	$nc(this->fUnparsedEntities)->put(name, name);
}

void ValidatorHandlerImpl::validate($Source* source, $Result* result) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($SAXResult, result) || result == nullptr) {
		$var($SAXSource, saxSource, $cast($SAXSource, source));
		$var($SAXResult, saxResult, $cast($SAXResult, result));
		if (result != nullptr) {
			setContentHandler($($nc(saxResult)->getHandler()));
		}
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($XMLReader, reader, $nc(saxSource)->getXMLReader());
				if (reader == nullptr) {
					$init($JdkConstants);
					bool var$1 = $nc(this->fComponentManager)->getFeature($JdkConstants::OVERRIDE_PARSER);
					$init($XMLConstants);
					$assign(reader, $JdkXmlUtils::getXMLReader(var$1, $nc(this->fComponentManager)->getFeature($XMLConstants::FEATURE_SECURE_PROCESSING)));
					try {
						if ($instanceOf($SAXParser, reader)) {
							$var($XMLSecurityManager, securityManager, $cast($XMLSecurityManager, $nc(this->fComponentManager)->getProperty(ValidatorHandlerImpl::SECURITY_MANAGER)));
							if (securityManager != nullptr) {
								try {
									$nc(reader)->setProperty(ValidatorHandlerImpl::SECURITY_MANAGER, securityManager);
								} catch ($SAXException& exc) {
								}
							}
							try {
								$var($XMLSecurityPropertyManager, spm, $cast($XMLSecurityPropertyManager, $nc(this->fComponentManager)->getProperty(ValidatorHandlerImpl::XML_SECURITY_PROPERTY_MANAGER)));
								$init($XMLSecurityPropertyManager$Property);
								$nc(reader)->setProperty($XMLConstants::ACCESS_EXTERNAL_DTD, $($nc(spm)->getValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD)));
							} catch ($SAXException& exc) {
								$XMLSecurityManager::printWarning($($nc($of(reader))->getClass()->getName()), $XMLConstants::ACCESS_EXTERNAL_DTD, exc);
							}
						}
						$JdkXmlUtils::catalogFeaturesConfig2Reader(this->fComponentManager, reader);
					} catch ($Exception& e) {
						$throwNew($FactoryConfigurationError, $cast($Exception, e));
					}
				}
				try {
					this->fStringsInternalized = $nc(reader)->getFeature(ValidatorHandlerImpl::STRING_INTERNING);
				} catch ($SAXException& exc) {
					this->fStringsInternalized = false;
				}
				$var($ErrorHandler, errorHandler, $nc(this->fComponentManager)->getErrorHandler());
				$nc(reader)->setErrorHandler(errorHandler != nullptr ? errorHandler : $(static_cast<$ErrorHandler*>($DraconianErrorHandler::getInstance())));
				reader->setEntityResolver(this->fResolutionForwarder);
				$nc(this->fResolutionForwarder)->setEntityResolver($($nc(this->fComponentManager)->getResourceResolver()));
				reader->setContentHandler(this);
				reader->setDTDHandler(this);
				$var($InputSource, is, saxSource->getInputSource());
				reader->parse(is);
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} /*finally*/ {
				setContentHandler(nullptr);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		return;
	}
	$var($Locale, var$3, $nc(this->fComponentManager)->getLocale());
	$var($String, var$4, "SourceResultMismatch"_s);
	$throwNew($IllegalArgumentException, $($JAXPValidationMessageFormatter::formatMessage(var$3, var$4, $$new($ObjectArray, {
		$($of($nc($of(source))->getClass()->getName())),
		$($of($nc($of(result))->getClass()->getName()))
	}))));
}

$ElementPSVI* ValidatorHandlerImpl::getElementPSVI() {
	return $nc(this->fTypeInfoProvider)->getElementPSVI();
}

$AttributePSVI* ValidatorHandlerImpl::getAttributePSVI(int32_t index) {
	return $nc(this->fTypeInfoProvider)->getAttributePSVI(index);
}

$AttributePSVI* ValidatorHandlerImpl::getAttributePSVIByName($String* uri, $String* localname) {
	return $nc(this->fTypeInfoProvider)->getAttributePSVIByName(uri, localname);
}

void ValidatorHandlerImpl::fillQName($QName* toFill, $String* uri$renamed, $String* localpart$renamed, $String* raw$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, localpart, localpart$renamed);
	$var($String, raw, raw$renamed);
	$var($String, uri, uri$renamed);
	if (!this->fStringsInternalized) {
		$assign(uri, (uri != nullptr && uri->length() > 0) ? $nc(this->fSymbolTable)->addSymbol(uri) : ($String*)nullptr);
		$init($XMLSymbols);
		$assign(localpart, (localpart != nullptr) ? $nc(this->fSymbolTable)->addSymbol(localpart) : $XMLSymbols::EMPTY_STRING);
		$assign(raw, (raw != nullptr) ? $nc(this->fSymbolTable)->addSymbol(raw) : $XMLSymbols::EMPTY_STRING);
	} else {
		if (uri != nullptr && uri->length() == 0) {
			$assign(uri, nullptr);
		}
		if (localpart == nullptr) {
			$init($XMLSymbols);
			$assign(localpart, $XMLSymbols::EMPTY_STRING);
		}
		if (raw == nullptr) {
			$init($XMLSymbols);
			$assign(raw, $XMLSymbols::EMPTY_STRING);
		}
	}
	$init($XMLSymbols);
	$var($String, prefix, $XMLSymbols::EMPTY_STRING);
	int32_t prefixIdx = $nc(raw)->indexOf((int32_t)u':');
	if (prefixIdx != -1) {
		$assign(prefix, $nc(this->fSymbolTable)->addSymbol($(raw->substring(0, prefixIdx))));
	}
	$nc(toFill)->setValues(prefix, localpart, raw, uri);
}

void ValidatorHandlerImpl::fillXMLAttributes($Attributes* att) {
	$nc(this->fAttributes)->removeAllAttributes();
	int32_t len = $nc(att)->getLength();
	for (int32_t i = 0; i < len; ++i) {
		fillXMLAttribute(att, i);
		$nc(this->fAttributes)->setSpecified(i, true);
	}
}

void ValidatorHandlerImpl::fillXMLAttributes2($Attributes2* att) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fAttributes)->removeAllAttributes();
	int32_t len = $nc(att)->getLength();
	for (int32_t i = 0; i < len; ++i) {
		fillXMLAttribute(att, i);
		$nc(this->fAttributes)->setSpecified(i, att->isSpecified(i));
		if (att->isDeclared(i)) {
			$init($Constants);
			$init($Boolean);
			$nc($($nc(this->fAttributes)->getAugmentations(i)))->putItem($Constants::ATTRIBUTE_DECLARED, $Boolean::TRUE);
		}
	}
}

void ValidatorHandlerImpl::fillXMLAttribute($Attributes* att, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($QName, var$0, this->fAttributeQName);
	$var($String, var$1, $nc(att)->getURI(index));
	$var($String, var$2, att->getLocalName(index));
	fillQName(var$0, var$1, var$2, $(att->getQName(index)));
	$var($String, type, $nc(att)->getType(index));
	$init($XMLSymbols);
	$nc(this->fAttributes)->addAttributeNS(this->fAttributeQName, (type != nullptr) ? type : $XMLSymbols::fCDATASymbol, $(att->getValue(index)));
}

ValidatorHandlerImpl::ValidatorHandlerImpl() {
}

void clinit$ValidatorHandlerImpl($Class* class$) {
	$init($Constants);
	$assignStatic(ValidatorHandlerImpl::NAMESPACE_PREFIXES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACE_PREFIXES_FEATURE}));
	$assignStatic(ValidatorHandlerImpl::STRING_INTERNING, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::STRING_INTERNING_FEATURE}));
	$assignStatic(ValidatorHandlerImpl::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(ValidatorHandlerImpl::NAMESPACE_CONTEXT, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::NAMESPACE_CONTEXT_PROPERTY}));
	$assignStatic(ValidatorHandlerImpl::SCHEMA_VALIDATOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_VALIDATOR_PROPERTY}));
	$assignStatic(ValidatorHandlerImpl::SECURITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SECURITY_MANAGER_PROPERTY}));
	$assignStatic(ValidatorHandlerImpl::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(ValidatorHandlerImpl::VALIDATION_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::VALIDATION_MANAGER_PROPERTY}));
	$init($JdkConstants);
	$assignStatic(ValidatorHandlerImpl::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
}

$Class* ValidatorHandlerImpl::load$($String* name, bool initialize) {
	$loadClass(ValidatorHandlerImpl, name, initialize, &_ValidatorHandlerImpl_ClassInfo_, clinit$ValidatorHandlerImpl, allocate$ValidatorHandlerImpl);
	return class$;
}

$Class* ValidatorHandlerImpl::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com