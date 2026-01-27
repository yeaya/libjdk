#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser$1.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser$2.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser$AttributesProxy.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser$LocatorProxy.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractXMLDocumentParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/XML11Configurable.h>
#include <com/sun/org/apache/xerces/internal/parsers/XMLParser.h>
#include <com/sun/org/apache/xerces/internal/util/EntityResolver2Wrapper.h>
#include <com/sun/org/apache/xerces/internal/util/EntityResolverWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/SAXMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/Status.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolHash.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>
#include <java/io/CharConversionException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Locale.h>
#include <javax/xml/XMLConstants.h>
#include <org/xml/sax/AttributeList.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/DocumentHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/ext/Attributes2.h>
#include <org/xml/sax/ext/DeclHandler.h>
#include <org/xml/sax/ext/EntityResolver2.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <org/xml/sax/ext/Locator2.h>
#include <org/xml/sax/helpers/LocatorImpl.h>
#include <jcpp.h>

#undef ALLOW_DTD_EVENTS_AFTER_ENDDTD_FEATURE
#undef ALLOW_UE_AND_NOTATION_EVENTS
#undef ATTRIBUTE_PSVI
#undef BUFFER_SIZE
#undef DECLARATION_HANDLER
#undef DECLARATION_HANDLER_PROPERTY
#undef DOCUMENT_XML_VERSION_PROPERTY
#undef DOM_NODE
#undef DOM_NODE_PROPERTY
#undef ELEMENT_PSVI
#undef ENTITY_RESOLVER
#undef ENTITY_SKIPPED
#undef ERROR_HANDLER
#undef FEATURE_SECURE_PROCESSING
#undef IS_STANDALONE_FEATURE
#undef LEXICAL_HANDLER
#undef LEXICAL_HANDLER_PARAMETER_ENTITIES_FEATURE
#undef LEXICAL_HANDLER_PROPERTY
#undef NAMESPACES
#undef NAMESPACES_FEATURE
#undef NAMESPACE_PREFIXES
#undef NAMESPACE_PREFIXES_FEATURE
#undef NOT_RECOGNIZED
#undef PREFIX_XMLNS
#undef RECOGNIZED_FEATURES
#undef RECOGNIZED_PROPERTIES
#undef RESOLVE_DTD_URIS_FEATURE
#undef SAX_FEATURE_PREFIX
#undef SAX_PROPERTY_PREFIX
#undef SECURITY_MANAGER
#undef SECURITY_MANAGER_PROPERTY
#undef STRING_INTERNING
#undef STRING_INTERNING_FEATURE
#undef TRUE
#undef UNICODE_NORMALIZATION_CHECKING_FEATURE
#undef USE_ATTRIBUTES2_FEATURE
#undef USE_ENTITY_RESOLVER2_FEATURE
#undef USE_LOCATOR2_FEATURE
#undef XERCES_PROPERTY_PREFIX
#undef XMLNS_URIS_FEATURE
#undef XML_11_FEATURE

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $AbstractSAXParser$1 = ::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser$1;
using $AbstractSAXParser$2 = ::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser$2;
using $AbstractSAXParser$AttributesProxy = ::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser$AttributesProxy;
using $AbstractSAXParser$LocatorProxy = ::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser$LocatorProxy;
using $AbstractXMLDocumentParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser;
using $XML11Configurable = ::com::sun::org::apache::xerces::internal::parsers::XML11Configurable;
using $XMLParser = ::com::sun::org::apache::xerces::internal::parsers::XMLParser;
using $EntityResolver2Wrapper = ::com::sun::org::apache::xerces::internal::util::EntityResolver2Wrapper;
using $EntityResolverWrapper = ::com::sun::org::apache::xerces::internal::util::EntityResolverWrapper;
using $ErrorHandlerWrapper = ::com::sun::org::apache::xerces::internal::util::ErrorHandlerWrapper;
using $SAXMessageFormatter = ::com::sun::org::apache::xerces::internal::util::SAXMessageFormatter;
using $Status = ::com::sun::org::apache::xerces::internal::util::Status;
using $SymbolHash = ::com::sun::org::apache::xerces::internal::util::SymbolHash;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $AttributePSVI = ::com::sun::org::apache::xerces::internal::xs::AttributePSVI;
using $ElementPSVI = ::com::sun::org::apache::xerces::internal::xs::ElementPSVI;
using $CharConversionException = ::java::io::CharConversionException;
using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Locale = ::java::util::Locale;
using $XMLConstants = ::javax::xml::XMLConstants;
using $AttributeList = ::org::xml::sax::AttributeList;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $DocumentHandler = ::org::xml::sax::DocumentHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;
using $SAXParseException = ::org::xml::sax::SAXParseException;
using $Attributes2 = ::org::xml::sax::ext::Attributes2;
using $DeclHandler = ::org::xml::sax::ext::DeclHandler;
using $EntityResolver2 = ::org::xml::sax::ext::EntityResolver2;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;
using $Locator2 = ::org::xml::sax::ext::Locator2;
using $LocatorImpl = ::org::xml::sax::helpers::LocatorImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _AbstractSAXParser_FieldInfo_[] = {
	{"NAMESPACES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractSAXParser, NAMESPACES)},
	{"NAMESPACE_PREFIXES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractSAXParser, NAMESPACE_PREFIXES)},
	{"STRING_INTERNING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractSAXParser, STRING_INTERNING)},
	{"ALLOW_UE_AND_NOTATION_EVENTS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractSAXParser, ALLOW_UE_AND_NOTATION_EVENTS)},
	{"RECOGNIZED_FEATURES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractSAXParser, RECOGNIZED_FEATURES)},
	{"LEXICAL_HANDLER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractSAXParser, LEXICAL_HANDLER)},
	{"DECLARATION_HANDLER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractSAXParser, DECLARATION_HANDLER)},
	{"DOM_NODE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractSAXParser, DOM_NODE)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractSAXParser, SECURITY_MANAGER)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractSAXParser, RECOGNIZED_PROPERTIES)},
	{"fNamespaces", "Z", nullptr, $PROTECTED, $field(AbstractSAXParser, fNamespaces)},
	{"fNamespacePrefixes", "Z", nullptr, $PROTECTED, $field(AbstractSAXParser, fNamespacePrefixes)},
	{"fLexicalHandlerParameterEntities", "Z", nullptr, $PROTECTED, $field(AbstractSAXParser, fLexicalHandlerParameterEntities)},
	{"fStandalone", "Z", nullptr, $PROTECTED, $field(AbstractSAXParser, fStandalone)},
	{"fResolveDTDURIs", "Z", nullptr, $PROTECTED, $field(AbstractSAXParser, fResolveDTDURIs)},
	{"fUseEntityResolver2", "Z", nullptr, $PROTECTED, $field(AbstractSAXParser, fUseEntityResolver2)},
	{"fXMLNSURIs", "Z", nullptr, $PROTECTED, $field(AbstractSAXParser, fXMLNSURIs)},
	{"fContentHandler", "Lorg/xml/sax/ContentHandler;", nullptr, $PROTECTED, $field(AbstractSAXParser, fContentHandler)},
	{"fDocumentHandler", "Lorg/xml/sax/DocumentHandler;", nullptr, $PROTECTED, $field(AbstractSAXParser, fDocumentHandler)},
	{"fNamespaceContext", "Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, $PROTECTED, $field(AbstractSAXParser, fNamespaceContext)},
	{"fDTDHandler", "Lorg/xml/sax/DTDHandler;", nullptr, $PROTECTED, $field(AbstractSAXParser, fDTDHandler)},
	{"fDeclHandler", "Lorg/xml/sax/ext/DeclHandler;", nullptr, $PROTECTED, $field(AbstractSAXParser, fDeclHandler)},
	{"fLexicalHandler", "Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PROTECTED, $field(AbstractSAXParser, fLexicalHandler)},
	{"fQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PROTECTED, $field(AbstractSAXParser, fQName)},
	{"fParseInProgress", "Z", nullptr, $PROTECTED, $field(AbstractSAXParser, fParseInProgress)},
	{"fVersion", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AbstractSAXParser, fVersion)},
	{"fAttributesProxy", "Lcom/sun/org/apache/xerces/internal/parsers/AbstractSAXParser$AttributesProxy;", nullptr, $PRIVATE | $FINAL, $field(AbstractSAXParser, fAttributesProxy)},
	{"fAugmentations", "Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PRIVATE, $field(AbstractSAXParser, fAugmentations)},
	{"BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractSAXParser, BUFFER_SIZE)},
	{"fCharBuffer", "[C", nullptr, $PRIVATE, $field(AbstractSAXParser, fCharBuffer)},
	{"fDeclaredAttrs", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, $PROTECTED, $field(AbstractSAXParser, fDeclaredAttrs)},
	{}
};

$MethodInfo _AbstractSAXParser_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;)V", nullptr, $PROTECTED, $method(AbstractSAXParser, init$, void, $XMLParserConfiguration*)},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, attributeDecl, void, $String*, $String*, $String*, $StringArray*, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, characters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"doctypeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, doctypeDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, elementDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, endCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDTD", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, endDTD, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, endDocument, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, endElement, void, $QName*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, endExternalSubset, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, endGeneralEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endNamespaceMapping", "()V", nullptr, $PROTECTED | $FINAL, $method(AbstractSAXParser, endNamespaceMapping, void), "org.xml.sax.SAXException"},
	{"endParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, endParameterEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"externalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, externalEntityDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getAttributePSVI", "(I)Lcom/sun/org/apache/xerces/internal/xs/AttributePSVI;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, getAttributePSVI, $AttributePSVI*, int32_t)},
	{"getAttributePSVIByName", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/AttributePSVI;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, getAttributePSVIByName, $AttributePSVI*, $String*, $String*)},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, getContentHandler, $ContentHandler*)},
	{"getDTDHandler", "()Lorg/xml/sax/DTDHandler;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, getDTDHandler, $DTDHandler*)},
	{"getDeclHandler", "()Lorg/xml/sax/ext/DeclHandler;", nullptr, $PROTECTED, $virtualMethod(AbstractSAXParser, getDeclHandler, $DeclHandler*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getElementPSVI", "()Lcom/sun/org/apache/xerces/internal/xs/ElementPSVI;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, getElementPSVI, $ElementPSVI*)},
	{"getEntityResolver", "()Lorg/xml/sax/EntityResolver;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, getEntityResolver, $EntityResolver*)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, getErrorHandler, $ErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, getFeature, bool, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getLexicalHandler", "()Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PROTECTED, $virtualMethod(AbstractSAXParser, getLexicalHandler, $LexicalHandler*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, getProperty, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, ignorableWhitespace, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"internalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, internalEntityDecl, void, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"notationDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, notationDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, parse, void, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, parse, void, $InputSource*), "org.xml.sax.SAXException,java.io.IOException"},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, reset, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, setContentHandler, void, $ContentHandler*)},
	{"setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, setDTDHandler, void, $DTDHandler*)},
	{"setDeclHandler", "(Lorg/xml/sax/ext/DeclHandler;)V", nullptr, $PROTECTED, $virtualMethod(AbstractSAXParser, setDeclHandler, void, $DeclHandler*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setDocumentHandler", "(Lorg/xml/sax/DocumentHandler;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, setDocumentHandler, void, $DocumentHandler*)},
	{"setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, setEntityResolver, void, $EntityResolver*)},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, setErrorHandler, void, $ErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, setFeature, void, $String*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setLexicalHandler", "(Lorg/xml/sax/ext/LexicalHandler;)V", nullptr, $PROTECTED, $virtualMethod(AbstractSAXParser, setLexicalHandler, void, $LexicalHandler*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, setLocale, void, $Locale*), "org.xml.sax.SAXException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, startCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, startDocument, void, $XMLLocator*, $String*, $NamespaceContext*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, startElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, startExternalSubset, void, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, startGeneralEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startNamespaceMapping", "()V", nullptr, $PROTECTED | $FINAL, $method(AbstractSAXParser, startNamespaceMapping, void), "org.xml.sax.SAXException"},
	{"startParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, startParameterEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, unparsedEntityDecl, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"xmlDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser, xmlDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _AbstractSAXParser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$AttributesProxy", "com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser", "AttributesProxy", $PROTECTED | $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$LocatorProxy", "com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser", "LocatorProxy", $PROTECTED},
	{"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$2", nullptr, nullptr, 0},
	{"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractSAXParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser",
	"com.sun.org.apache.xerces.internal.parsers.AbstractXMLDocumentParser",
	"com.sun.org.apache.xerces.internal.xs.PSVIProvider,org.xml.sax.Parser,org.xml.sax.XMLReader",
	_AbstractSAXParser_FieldInfo_,
	_AbstractSAXParser_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractSAXParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$AttributesProxy,com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$LocatorProxy,com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$2,com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$1"
};

$Object* allocate$AbstractSAXParser($Class* clazz) {
	return $of($alloc(AbstractSAXParser));
}

int32_t AbstractSAXParser::hashCode() {
	 return this->$AbstractXMLDocumentParser::hashCode();
}

bool AbstractSAXParser::equals(Object$* arg0) {
	 return this->$AbstractXMLDocumentParser::equals(arg0);
}

$Object* AbstractSAXParser::clone() {
	 return this->$AbstractXMLDocumentParser::clone();
}

$String* AbstractSAXParser::toString() {
	 return this->$AbstractXMLDocumentParser::toString();
}

void AbstractSAXParser::finalize() {
	this->$AbstractXMLDocumentParser::finalize();
}

$String* AbstractSAXParser::NAMESPACES = nullptr;
$String* AbstractSAXParser::NAMESPACE_PREFIXES = nullptr;
$String* AbstractSAXParser::STRING_INTERNING = nullptr;
$String* AbstractSAXParser::ALLOW_UE_AND_NOTATION_EVENTS = nullptr;
$StringArray* AbstractSAXParser::RECOGNIZED_FEATURES = nullptr;
$String* AbstractSAXParser::LEXICAL_HANDLER = nullptr;
$String* AbstractSAXParser::DECLARATION_HANDLER = nullptr;
$String* AbstractSAXParser::DOM_NODE = nullptr;
$String* AbstractSAXParser::SECURITY_MANAGER = nullptr;
$StringArray* AbstractSAXParser::RECOGNIZED_PROPERTIES = nullptr;

void AbstractSAXParser::init$($XMLParserConfiguration* config) {
	$AbstractXMLDocumentParser::init$(config);
	this->fNamespacePrefixes = false;
	this->fLexicalHandlerParameterEntities = true;
	this->fResolveDTDURIs = true;
	this->fUseEntityResolver2 = true;
	this->fXMLNSURIs = false;
	$set(this, fQName, $new($QName));
	this->fParseInProgress = false;
	$set(this, fAttributesProxy, $new($AbstractSAXParser$AttributesProxy));
	$set(this, fAugmentations, nullptr);
	$set(this, fCharBuffer, $new($chars, AbstractSAXParser::BUFFER_SIZE));
	$set(this, fDeclaredAttrs, nullptr);
	$nc(config)->addRecognizedFeatures(AbstractSAXParser::RECOGNIZED_FEATURES);
	config->addRecognizedProperties(AbstractSAXParser::RECOGNIZED_PROPERTIES);
	try {
		config->setFeature(AbstractSAXParser::ALLOW_UE_AND_NOTATION_EVENTS, false);
	} catch ($XMLConfigurationException& e) {
	}
}

void AbstractSAXParser::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* namespaceContext, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$set(this, fNamespaceContext, namespaceContext);
	try {
		if (this->fDocumentHandler != nullptr) {
			if (locator != nullptr) {
				$nc(this->fDocumentHandler)->setDocumentLocator($$new($AbstractSAXParser$LocatorProxy, this, locator));
			}
			$nc(this->fDocumentHandler)->startDocument();
		}
		if (this->fContentHandler != nullptr) {
			if (locator != nullptr) {
				$nc(this->fContentHandler)->setDocumentLocator($$new($AbstractSAXParser$LocatorProxy, this, locator));
			}
			$nc(this->fContentHandler)->startDocument();
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::xmlDecl($String* version, $String* encoding, $String* standalone, $Augmentations* augs) {
	$set(this, fVersion, version);
	this->fStandalone = "yes"_s->equals(standalone);
	if (this->fContentHandler != nullptr) {
		try {
			$nc(this->fContentHandler)->declaration(version, encoding, standalone);
		} catch ($SAXException& e) {
			$throwNew($XNIException, static_cast<$Exception*>(e));
		}
	}
}

void AbstractSAXParser::doctypeDecl($String* rootElement, $String* publicId, $String* systemId, $Augmentations* augs) {
	this->fInDTD = true;
	try {
		if (this->fLexicalHandler != nullptr) {
			$nc(this->fLexicalHandler)->startDTD(rootElement, publicId, systemId);
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
	if (this->fDeclHandler != nullptr) {
		$set(this, fDeclaredAttrs, $new($SymbolHash));
	}
}

void AbstractSAXParser::startGeneralEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
	try {
		$init($Boolean);
		$init($Constants);
		if (augs != nullptr && $nc($Boolean::TRUE)->equals($(augs->getItem($Constants::ENTITY_SKIPPED)))) {
			if (this->fContentHandler != nullptr) {
				$nc(this->fContentHandler)->skippedEntity(name);
			}
		} else if (this->fLexicalHandler != nullptr) {
			$nc(this->fLexicalHandler)->startEntity(name);
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::endGeneralEntity($String* name, $Augmentations* augs) {
	try {
		$init($Boolean);
		$init($Constants);
		if (augs == nullptr || !$nc($Boolean::TRUE)->equals($($nc(augs)->getItem($Constants::ENTITY_SKIPPED)))) {
			if (this->fLexicalHandler != nullptr) {
				$nc(this->fLexicalHandler)->endEntity(name);
			}
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	try {
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fAttributesProxy)->setAttributes(attributes);
			$nc(this->fDocumentHandler)->startElement($nc(element)->rawname, this->fAttributesProxy);
		}
		if (this->fContentHandler != nullptr) {
			if (this->fNamespaces) {
				startNamespaceMapping();
				int32_t len = $nc(attributes)->getLength();
				if (!this->fNamespacePrefixes) {
					for (int32_t i = len - 1; i >= 0; --i) {
						attributes->getName(i, this->fQName);
						$init($XMLSymbols);
						if (($nc(this->fQName)->prefix == $XMLSymbols::PREFIX_XMLNS) || ($nc(this->fQName)->rawname == $XMLSymbols::PREFIX_XMLNS)) {
							attributes->removeAttributeAt(i);
						}
					}
				} else if (!this->fXMLNSURIs) {
					for (int32_t i = len - 1; i >= 0; --i) {
						attributes->getName(i, this->fQName);
						$init($XMLSymbols);
						if (($nc(this->fQName)->prefix == $XMLSymbols::PREFIX_XMLNS) || ($nc(this->fQName)->rawname == $XMLSymbols::PREFIX_XMLNS)) {
							$set($nc(this->fQName), prefix, ""_s);
							$set($nc(this->fQName), uri, ""_s);
							$set($nc(this->fQName), localpart, ""_s);
							attributes->setName(i, this->fQName);
						}
					}
				}
			}
			$set(this, fAugmentations, augs);
			$var($String, uri, $nc(element)->uri != nullptr ? $nc(element)->uri : ""_s);
			$var($String, localpart, this->fNamespaces ? element->localpart : ""_s);
			$nc(this->fAttributesProxy)->setAttributes(attributes);
			$nc(this->fContentHandler)->startElement(uri, localpart, element->rawname, this->fAttributesProxy);
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::characters($XMLString* text, $Augmentations* augs) {
	if ($nc(text)->length == 0) {
		return;
	}
	try {
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->characters($nc(text)->ch, text->offset, text->length);
		}
		if (this->fContentHandler != nullptr) {
			$nc(this->fContentHandler)->characters($nc(text)->ch, text->offset, text->length);
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	try {
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->ignorableWhitespace($nc(text)->ch, text->offset, text->length);
		}
		if (this->fContentHandler != nullptr) {
			$nc(this->fContentHandler)->ignorableWhitespace($nc(text)->ch, text->offset, text->length);
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::endElement($QName* element, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	try {
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->endElement($nc(element)->rawname);
		}
		if (this->fContentHandler != nullptr) {
			$set(this, fAugmentations, augs);
			$var($String, uri, $nc(element)->uri != nullptr ? $nc(element)->uri : ""_s);
			$var($String, localpart, this->fNamespaces ? element->localpart : ""_s);
			$nc(this->fContentHandler)->endElement(uri, localpart, element->rawname);
			if (this->fNamespaces) {
				endNamespaceMapping();
			}
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::startCDATA($Augmentations* augs) {
	try {
		if (this->fLexicalHandler != nullptr) {
			$nc(this->fLexicalHandler)->startCDATA();
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::endCDATA($Augmentations* augs) {
	try {
		if (this->fLexicalHandler != nullptr) {
			$nc(this->fLexicalHandler)->endCDATA();
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::comment($XMLString* text, $Augmentations* augs) {
	try {
		if (this->fLexicalHandler != nullptr) {
			$nc(this->fLexicalHandler)->comment($nc(text)->ch, 0, text->length);
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	try {
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->processingInstruction(target, $($nc(data)->toString()));
		}
		if (this->fContentHandler != nullptr) {
			$nc(this->fContentHandler)->processingInstruction(target, $($nc(data)->toString()));
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::endDocument($Augmentations* augs) {
	try {
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->endDocument();
		}
		if (this->fContentHandler != nullptr) {
			$nc(this->fContentHandler)->endDocument();
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::startExternalSubset($XMLResourceIdentifier* identifier, $Augmentations* augs) {
	startParameterEntity("[dtd]"_s, nullptr, nullptr, augs);
}

void AbstractSAXParser::endExternalSubset($Augmentations* augs) {
	endParameterEntity("[dtd]"_s, augs);
}

void AbstractSAXParser::startParameterEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
	try {
		$init($Boolean);
		$init($Constants);
		if (augs != nullptr && $nc($Boolean::TRUE)->equals($(augs->getItem($Constants::ENTITY_SKIPPED)))) {
			if (this->fContentHandler != nullptr) {
				$nc(this->fContentHandler)->skippedEntity(name);
			}
		} else if (this->fLexicalHandler != nullptr && this->fLexicalHandlerParameterEntities) {
			$nc(this->fLexicalHandler)->startEntity(name);
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::endParameterEntity($String* name, $Augmentations* augs) {
	try {
		$init($Boolean);
		$init($Constants);
		if (augs == nullptr || !$nc($Boolean::TRUE)->equals($($nc(augs)->getItem($Constants::ENTITY_SKIPPED)))) {
			if (this->fLexicalHandler != nullptr && this->fLexicalHandlerParameterEntities) {
				$nc(this->fLexicalHandler)->endEntity(name);
			}
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::elementDecl($String* name, $String* contentModel, $Augmentations* augs) {
	try {
		if (this->fDeclHandler != nullptr) {
			$nc(this->fDeclHandler)->elementDecl(name, contentModel);
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::attributeDecl($String* elementName, $String* attributeName, $String* type$renamed, $StringArray* enumeration, $String* defaultType, $XMLString* defaultValue, $XMLString* nonNormalizedDefaultValue, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$var($String, type, type$renamed);
	try {
		if (this->fDeclHandler != nullptr) {
			$var($String, elemAttr, $$new($StringBuffer, elementName)->append("<"_s)->append(attributeName)->toString());
			if ($nc(this->fDeclaredAttrs)->get(elemAttr) != nullptr) {
				return;
			}
			$init($Boolean);
			$nc(this->fDeclaredAttrs)->put(elemAttr, $Boolean::TRUE);
			bool var$0 = $nc(type)->equals("NOTATION"_s);
			if (var$0 || $nc(type)->equals("ENUMERATION"_s)) {
				$var($StringBuffer, str, $new($StringBuffer));
				if (type->equals("NOTATION"_s)) {
					str->append(type);
					str->append(" ("_s);
				} else {
					str->append("("_s);
				}
				for (int32_t i = 0; i < $nc(enumeration)->length; ++i) {
					str->append(enumeration->get(i));
					if (i < enumeration->length - 1) {
						str->append(u'|');
					}
				}
				str->append(u')');
				$assign(type, str->toString());
			}
			$var($String, value, (defaultValue == nullptr) ? ($String*)nullptr : $nc(defaultValue)->toString());
			$nc(this->fDeclHandler)->attributeDecl(elementName, attributeName, type, defaultType, value);
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::internalEntityDecl($String* name, $XMLString* text, $XMLString* nonNormalizedText, $Augmentations* augs) {
	try {
		if (this->fDeclHandler != nullptr) {
			$nc(this->fDeclHandler)->internalEntityDecl(name, $($nc(text)->toString()));
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::externalEntityDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	try {
		if (this->fDeclHandler != nullptr) {
			$var($String, publicId, $nc(identifier)->getPublicId());
			$var($String, systemId, this->fResolveDTDURIs ? identifier->getExpandedSystemId() : identifier->getLiteralSystemId());
			$nc(this->fDeclHandler)->externalEntityDecl(name, publicId, systemId);
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::unparsedEntityDecl($String* name, $XMLResourceIdentifier* identifier, $String* notation, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	try {
		if (this->fDTDHandler != nullptr) {
			$var($String, publicId, $nc(identifier)->getPublicId());
			$var($String, systemId, this->fResolveDTDURIs ? identifier->getExpandedSystemId() : identifier->getLiteralSystemId());
			$nc(this->fDTDHandler)->unparsedEntityDecl(name, publicId, systemId, notation);
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::notationDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	try {
		if (this->fDTDHandler != nullptr) {
			$var($String, publicId, $nc(identifier)->getPublicId());
			$var($String, systemId, this->fResolveDTDURIs ? identifier->getExpandedSystemId() : identifier->getLiteralSystemId());
			$nc(this->fDTDHandler)->notationDecl(name, publicId, systemId);
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void AbstractSAXParser::endDTD($Augmentations* augs) {
	this->fInDTD = false;
	try {
		if (this->fLexicalHandler != nullptr) {
			$nc(this->fLexicalHandler)->endDTD();
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
	if (this->fDeclaredAttrs != nullptr) {
		$nc(this->fDeclaredAttrs)->clear();
	}
}

void AbstractSAXParser::parse($String* systemId) {
	$useLocalCurrentObjectStackCache();
	$var($XMLInputSource, source, $new($XMLInputSource, nullptr, systemId, nullptr, false));
	try {
		parse(source);
	} catch ($XMLParseException& e) {
		$var($Exception, ex, e->getException());
		if (ex == nullptr || $instanceOf($CharConversionException, ex)) {
			$var($LocatorImpl, locatorImpl, $new($AbstractSAXParser$1, this));
			locatorImpl->setPublicId($(e->getPublicId()));
			locatorImpl->setSystemId($(e->getExpandedSystemId()));
			locatorImpl->setLineNumber(e->getLineNumber());
			locatorImpl->setColumnNumber(e->getColumnNumber());
			$throw((ex == nullptr) ? $$new($SAXParseException, $(e->getMessage()), locatorImpl) : $$new($SAXParseException, $(e->getMessage()), locatorImpl, ex));
		}
		if ($instanceOf($SAXException, ex)) {
			$throw($cast($SAXException, ex));
		}
		if ($instanceOf($IOException, ex)) {
			$throw($cast($IOException, ex));
		}
		$throwNew($SAXException, ex);
	} catch ($XNIException& e) {
		$var($Exception, ex, e->getException());
		if (ex == nullptr) {
			$throwNew($SAXException, $(e->getMessage()));
		}
		if ($instanceOf($SAXException, ex)) {
			$throw($cast($SAXException, ex));
		}
		if ($instanceOf($IOException, ex)) {
			$throw($cast($IOException, ex));
		}
		$throwNew($SAXException, ex);
	}
}

void AbstractSAXParser::parse($InputSource* inputSource) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, var$0, $nc(inputSource)->getPublicId());
		$var($XMLInputSource, xmlInputSource, $new($XMLInputSource, var$0, $(inputSource->getSystemId()), nullptr, false));
		xmlInputSource->setByteStream($($nc(inputSource)->getByteStream()));
		xmlInputSource->setCharacterStream($($nc(inputSource)->getCharacterStream()));
		xmlInputSource->setEncoding($($nc(inputSource)->getEncoding()));
		parse(xmlInputSource);
	} catch ($XMLParseException& e) {
		$var($Exception, ex, e->getException());
		if (ex == nullptr || $instanceOf($CharConversionException, ex)) {
			$var($LocatorImpl, locatorImpl, $new($AbstractSAXParser$2, this));
			locatorImpl->setPublicId($(e->getPublicId()));
			locatorImpl->setSystemId($(e->getExpandedSystemId()));
			locatorImpl->setLineNumber(e->getLineNumber());
			locatorImpl->setColumnNumber(e->getColumnNumber());
			$throw((ex == nullptr) ? $$new($SAXParseException, $(e->getMessage()), locatorImpl) : $$new($SAXParseException, $(e->getMessage()), locatorImpl, ex));
		}
		if ($instanceOf($SAXException, ex)) {
			$throw($cast($SAXException, ex));
		}
		if ($instanceOf($IOException, ex)) {
			$throw($cast($IOException, ex));
		}
		$throwNew($SAXException, ex);
	} catch ($XNIException& e) {
		$var($Exception, ex, e->getException());
		if (ex == nullptr) {
			$throwNew($SAXException, $(e->getMessage()));
		}
		if ($instanceOf($SAXException, ex)) {
			$throw($cast($SAXException, ex));
		}
		if ($instanceOf($IOException, ex)) {
			$throw($cast($IOException, ex));
		}
		$throwNew($SAXException, ex);
	}
}

void AbstractSAXParser::setEntityResolver($EntityResolver* resolver) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($XMLParser);
		$var($XMLEntityResolver, xer, $cast($XMLEntityResolver, $nc(this->fConfiguration)->getProperty($XMLParser::ENTITY_RESOLVER)));
		if (this->fUseEntityResolver2 && $instanceOf($EntityResolver2, resolver)) {
			if ($instanceOf($EntityResolver2Wrapper, xer)) {
				$var($EntityResolver2Wrapper, er2w, $cast($EntityResolver2Wrapper, xer));
				$nc(er2w)->setEntityResolver($cast($EntityResolver2, resolver));
			} else {
				$nc(this->fConfiguration)->setProperty($XMLParser::ENTITY_RESOLVER, $$new($EntityResolver2Wrapper, $cast($EntityResolver2, resolver)));
			}
		} else if ($instanceOf($EntityResolverWrapper, xer)) {
			$var($EntityResolverWrapper, erw, $cast($EntityResolverWrapper, xer));
			$nc(erw)->setEntityResolver(resolver);
		} else {
			$nc(this->fConfiguration)->setProperty($XMLParser::ENTITY_RESOLVER, $$new($EntityResolverWrapper, resolver));
		}
	} catch ($XMLConfigurationException& e) {
	}
}

$EntityResolver* AbstractSAXParser::getEntityResolver() {
	$useLocalCurrentObjectStackCache();
	$var($EntityResolver, entityResolver, nullptr);
	try {
		$init($XMLParser);
		$var($XMLEntityResolver, xmlEntityResolver, $cast($XMLEntityResolver, $nc(this->fConfiguration)->getProperty($XMLParser::ENTITY_RESOLVER)));
		if (xmlEntityResolver != nullptr) {
			if ($instanceOf($EntityResolverWrapper, xmlEntityResolver)) {
				$assign(entityResolver, $nc(($cast($EntityResolverWrapper, xmlEntityResolver)))->getEntityResolver());
			} else if ($instanceOf($EntityResolver2Wrapper, xmlEntityResolver)) {
				$assign(entityResolver, $nc(($cast($EntityResolver2Wrapper, xmlEntityResolver)))->getEntityResolver());
			}
		}
	} catch ($XMLConfigurationException& e) {
	}
	return entityResolver;
}

void AbstractSAXParser::setErrorHandler($ErrorHandler* errorHandler) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($XMLParser);
		$var($XMLErrorHandler, xeh, $cast($XMLErrorHandler, $nc(this->fConfiguration)->getProperty($XMLParser::ERROR_HANDLER)));
		if ($instanceOf($ErrorHandlerWrapper, xeh)) {
			$var($ErrorHandlerWrapper, ehw, $cast($ErrorHandlerWrapper, xeh));
			$nc(ehw)->setErrorHandler(errorHandler);
		} else {
			$nc(this->fConfiguration)->setProperty($XMLParser::ERROR_HANDLER, $$new($ErrorHandlerWrapper, errorHandler));
		}
	} catch ($XMLConfigurationException& e) {
	}
}

$ErrorHandler* AbstractSAXParser::getErrorHandler() {
	$useLocalCurrentObjectStackCache();
	$var($ErrorHandler, errorHandler, nullptr);
	try {
		$init($XMLParser);
		$var($XMLErrorHandler, xmlErrorHandler, $cast($XMLErrorHandler, $nc(this->fConfiguration)->getProperty($XMLParser::ERROR_HANDLER)));
		if (xmlErrorHandler != nullptr && $instanceOf($ErrorHandlerWrapper, xmlErrorHandler)) {
			$assign(errorHandler, $nc(($cast($ErrorHandlerWrapper, xmlErrorHandler)))->getErrorHandler());
		}
	} catch ($XMLConfigurationException& e) {
	}
	return errorHandler;
}

void AbstractSAXParser::setLocale($Locale* locale) {
	$nc(this->fConfiguration)->setLocale(locale);
}

void AbstractSAXParser::setDTDHandler($DTDHandler* dtdHandler) {
	$set(this, fDTDHandler, dtdHandler);
}

void AbstractSAXParser::setDocumentHandler($DocumentHandler* documentHandler) {
	$set(this, fDocumentHandler, documentHandler);
}

void AbstractSAXParser::setContentHandler($ContentHandler* contentHandler) {
	$set(this, fContentHandler, contentHandler);
}

$ContentHandler* AbstractSAXParser::getContentHandler() {
	return this->fContentHandler;
}

$DTDHandler* AbstractSAXParser::getDTDHandler() {
	return this->fDTDHandler;
}

void AbstractSAXParser::setFeature($String* featureId, bool state) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($Constants);
		if ($nc(featureId)->startsWith($Constants::SAX_FEATURE_PREFIX)) {
			int32_t var$0 = featureId->length();
			int32_t suffixLength = var$0 - $nc($Constants::SAX_FEATURE_PREFIX)->length();
			bool var$1 = suffixLength == $nc($Constants::NAMESPACES_FEATURE)->length();
			if (var$1 && featureId->endsWith($Constants::NAMESPACES_FEATURE)) {
				$nc(this->fConfiguration)->setFeature(featureId, state);
				this->fNamespaces = state;
				return;
			}
			bool var$2 = suffixLength == $nc($Constants::NAMESPACE_PREFIXES_FEATURE)->length();
			if (var$2 && featureId->endsWith($Constants::NAMESPACE_PREFIXES_FEATURE)) {
				$nc(this->fConfiguration)->setFeature(featureId, state);
				this->fNamespacePrefixes = state;
				return;
			}
			bool var$3 = suffixLength == $nc($Constants::STRING_INTERNING_FEATURE)->length();
			if (var$3 && featureId->endsWith($Constants::STRING_INTERNING_FEATURE)) {
				if (!state) {
					$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "false-not-supported"_s, $$new($ObjectArray, {$of(featureId)}))));
				}
				return;
			}
			bool var$4 = suffixLength == $nc($Constants::LEXICAL_HANDLER_PARAMETER_ENTITIES_FEATURE)->length();
			if (var$4 && featureId->endsWith($Constants::LEXICAL_HANDLER_PARAMETER_ENTITIES_FEATURE)) {
				this->fLexicalHandlerParameterEntities = state;
				return;
			}
			bool var$5 = suffixLength == $nc($Constants::RESOLVE_DTD_URIS_FEATURE)->length();
			if (var$5 && featureId->endsWith($Constants::RESOLVE_DTD_URIS_FEATURE)) {
				this->fResolveDTDURIs = state;
				return;
			}
			bool var$6 = suffixLength == $nc($Constants::UNICODE_NORMALIZATION_CHECKING_FEATURE)->length();
			if (var$6 && featureId->endsWith($Constants::UNICODE_NORMALIZATION_CHECKING_FEATURE)) {
				if (state) {
					$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "true-not-supported"_s, $$new($ObjectArray, {$of(featureId)}))));
				}
				return;
			}
			bool var$7 = suffixLength == $nc($Constants::XMLNS_URIS_FEATURE)->length();
			if (var$7 && featureId->endsWith($Constants::XMLNS_URIS_FEATURE)) {
				this->fXMLNSURIs = state;
				return;
			}
			bool var$8 = suffixLength == $nc($Constants::USE_ENTITY_RESOLVER2_FEATURE)->length();
			if (var$8 && featureId->endsWith($Constants::USE_ENTITY_RESOLVER2_FEATURE)) {
				if (state != this->fUseEntityResolver2) {
					this->fUseEntityResolver2 = state;
					setEntityResolver($(getEntityResolver()));
				}
				return;
			}
			bool var$12 = suffixLength == $nc($Constants::IS_STANDALONE_FEATURE)->length();
			bool var$11 = (var$12 && featureId->endsWith($Constants::IS_STANDALONE_FEATURE));
			if (!var$11) {
				bool var$13 = suffixLength == $nc($Constants::USE_ATTRIBUTES2_FEATURE)->length();
				var$11 = (var$13 && featureId->endsWith($Constants::USE_ATTRIBUTES2_FEATURE));
			}
			bool var$10 = var$11;
			if (!var$10) {
				bool var$14 = suffixLength == $nc($Constants::USE_LOCATOR2_FEATURE)->length();
				var$10 = (var$14 && featureId->endsWith($Constants::USE_LOCATOR2_FEATURE));
			}
			bool var$9 = var$10;
			if (!var$9) {
				bool var$15 = suffixLength == $nc($Constants::XML_11_FEATURE)->length();
				var$9 = (var$15 && featureId->endsWith($Constants::XML_11_FEATURE));
			}
			if (var$9) {
				$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "feature-read-only"_s, $$new($ObjectArray, {$of(featureId)}))));
			}
		} else {
			$init($XMLConstants);
			if (featureId->equals($XMLConstants::FEATURE_SECURE_PROCESSING)) {
				if (state) {
					if ($nc(this->fConfiguration)->getProperty(AbstractSAXParser::SECURITY_MANAGER) == nullptr) {
						$nc(this->fConfiguration)->setProperty(AbstractSAXParser::SECURITY_MANAGER, $$new($XMLSecurityManager));
					}
				}
			}
		}
		$nc(this->fConfiguration)->setFeature(featureId, state);
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		if (e->getType() == $Status::NOT_RECOGNIZED) {
			$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "feature-not-recognized"_s, $$new($ObjectArray, {$of(identifier)}))));
		} else {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "feature-not-supported"_s, $$new($ObjectArray, {$of(identifier)}))));
		}
	}
}

bool AbstractSAXParser::getFeature($String* featureId) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($Constants);
		if ($nc(featureId)->startsWith($Constants::SAX_FEATURE_PREFIX)) {
			int32_t var$0 = featureId->length();
			int32_t suffixLength = var$0 - $nc($Constants::SAX_FEATURE_PREFIX)->length();
			bool var$1 = suffixLength == $nc($Constants::NAMESPACE_PREFIXES_FEATURE)->length();
			if (var$1 && featureId->endsWith($Constants::NAMESPACE_PREFIXES_FEATURE)) {
				bool state = $nc(this->fConfiguration)->getFeature(featureId);
				return state;
			}
			bool var$2 = suffixLength == $nc($Constants::STRING_INTERNING_FEATURE)->length();
			if (var$2 && featureId->endsWith($Constants::STRING_INTERNING_FEATURE)) {
				return true;
			}
			bool var$3 = suffixLength == $nc($Constants::IS_STANDALONE_FEATURE)->length();
			if (var$3 && featureId->endsWith($Constants::IS_STANDALONE_FEATURE)) {
				return this->fStandalone;
			}
			bool var$4 = suffixLength == $nc($Constants::XML_11_FEATURE)->length();
			if (var$4 && featureId->endsWith($Constants::XML_11_FEATURE)) {
				return ($instanceOf($XML11Configurable, this->fConfiguration));
			}
			bool var$5 = suffixLength == $nc($Constants::LEXICAL_HANDLER_PARAMETER_ENTITIES_FEATURE)->length();
			if (var$5 && featureId->endsWith($Constants::LEXICAL_HANDLER_PARAMETER_ENTITIES_FEATURE)) {
				return this->fLexicalHandlerParameterEntities;
			}
			bool var$6 = suffixLength == $nc($Constants::RESOLVE_DTD_URIS_FEATURE)->length();
			if (var$6 && featureId->endsWith($Constants::RESOLVE_DTD_URIS_FEATURE)) {
				return this->fResolveDTDURIs;
			}
			bool var$7 = suffixLength == $nc($Constants::XMLNS_URIS_FEATURE)->length();
			if (var$7 && featureId->endsWith($Constants::XMLNS_URIS_FEATURE)) {
				return this->fXMLNSURIs;
			}
			bool var$8 = suffixLength == $nc($Constants::UNICODE_NORMALIZATION_CHECKING_FEATURE)->length();
			if (var$8 && featureId->endsWith($Constants::UNICODE_NORMALIZATION_CHECKING_FEATURE)) {
				return false;
			}
			bool var$9 = suffixLength == $nc($Constants::USE_ENTITY_RESOLVER2_FEATURE)->length();
			if (var$9 && featureId->endsWith($Constants::USE_ENTITY_RESOLVER2_FEATURE)) {
				return this->fUseEntityResolver2;
			}
			bool var$11 = suffixLength == $nc($Constants::USE_ATTRIBUTES2_FEATURE)->length();
			bool var$10 = (var$11 && featureId->endsWith($Constants::USE_ATTRIBUTES2_FEATURE));
			if (!var$10) {
				bool var$12 = suffixLength == $nc($Constants::USE_LOCATOR2_FEATURE)->length();
				var$10 = (var$12 && featureId->endsWith($Constants::USE_LOCATOR2_FEATURE));
			}
			if (var$10) {
				return true;
			}
		}
		return $nc(this->fConfiguration)->getFeature(featureId);
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		if (e->getType() == $Status::NOT_RECOGNIZED) {
			$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "feature-not-recognized"_s, $$new($ObjectArray, {$of(identifier)}))));
		} else {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "feature-not-supported"_s, $$new($ObjectArray, {$of(identifier)}))));
		}
	}
	$shouldNotReachHere();
}

void AbstractSAXParser::setProperty($String* propertyId, Object$* value) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($Constants);
		if ($nc(propertyId)->startsWith($Constants::SAX_PROPERTY_PREFIX)) {
			int32_t var$0 = propertyId->length();
			int32_t suffixLength = var$0 - $nc($Constants::SAX_PROPERTY_PREFIX)->length();
			bool var$1 = suffixLength == $nc($Constants::LEXICAL_HANDLER_PROPERTY)->length();
			if (var$1 && propertyId->endsWith($Constants::LEXICAL_HANDLER_PROPERTY)) {
				try {
					setLexicalHandler($cast($LexicalHandler, value));
				} catch ($ClassCastException& e) {
					$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "incompatible-class"_s, $$new($ObjectArray, {
						$of(propertyId),
						$of("org.xml.sax.ext.LexicalHandler"_s)
					}))));
				}
				return;
			}
			bool var$2 = suffixLength == $nc($Constants::DECLARATION_HANDLER_PROPERTY)->length();
			if (var$2 && propertyId->endsWith($Constants::DECLARATION_HANDLER_PROPERTY)) {
				try {
					setDeclHandler($cast($DeclHandler, value));
				} catch ($ClassCastException& e) {
					$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "incompatible-class"_s, $$new($ObjectArray, {
						$of(propertyId),
						$of("org.xml.sax.ext.DeclHandler"_s)
					}))));
				}
				return;
			}
			bool var$4 = suffixLength == $nc($Constants::DOM_NODE_PROPERTY)->length();
			bool var$3 = (var$4 && propertyId->endsWith($Constants::DOM_NODE_PROPERTY));
			if (!var$3) {
				bool var$5 = suffixLength == $nc($Constants::DOCUMENT_XML_VERSION_PROPERTY)->length();
				var$3 = (var$5 && propertyId->endsWith($Constants::DOCUMENT_XML_VERSION_PROPERTY));
			}
			if (var$3) {
				$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "property-read-only"_s, $$new($ObjectArray, {$of(propertyId)}))));
			}
		}
		$nc(this->fConfiguration)->setProperty(propertyId, value);
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		if (e->getType() == $Status::NOT_RECOGNIZED) {
			$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "property-not-recognized"_s, $$new($ObjectArray, {$of(identifier)}))));
		} else {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "property-not-supported"_s, $$new($ObjectArray, {$of(identifier)}))));
		}
	}
}

$Object* AbstractSAXParser::getProperty($String* propertyId) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($Constants);
		if ($nc(propertyId)->startsWith($Constants::SAX_PROPERTY_PREFIX)) {
			int32_t var$0 = propertyId->length();
			int32_t suffixLength = var$0 - $nc($Constants::SAX_PROPERTY_PREFIX)->length();
			bool var$1 = suffixLength == $nc($Constants::DOCUMENT_XML_VERSION_PROPERTY)->length();
			if (var$1 && propertyId->endsWith($Constants::DOCUMENT_XML_VERSION_PROPERTY)) {
				return $of(this->fVersion);
			}
			bool var$2 = suffixLength == $nc($Constants::LEXICAL_HANDLER_PROPERTY)->length();
			if (var$2 && propertyId->endsWith($Constants::LEXICAL_HANDLER_PROPERTY)) {
				return $of(getLexicalHandler());
			}
			bool var$3 = suffixLength == $nc($Constants::DECLARATION_HANDLER_PROPERTY)->length();
			if (var$3 && propertyId->endsWith($Constants::DECLARATION_HANDLER_PROPERTY)) {
				return $of(getDeclHandler());
			}
			bool var$4 = suffixLength == $nc($Constants::DOM_NODE_PROPERTY)->length();
			if (var$4 && propertyId->endsWith($Constants::DOM_NODE_PROPERTY)) {
				$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "dom-node-read-not-supported"_s, nullptr)));
			}
		}
		return $of($nc(this->fConfiguration)->getProperty(propertyId));
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		if (e->getType() == $Status::NOT_RECOGNIZED) {
			$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "property-not-recognized"_s, $$new($ObjectArray, {$of(identifier)}))));
		} else {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "property-not-supported"_s, $$new($ObjectArray, {$of(identifier)}))));
		}
	}
	$shouldNotReachHere();
}

void AbstractSAXParser::setDeclHandler($DeclHandler* handler) {
	$useLocalCurrentObjectStackCache();
	if (this->fParseInProgress) {
		$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "property-not-parsing-supported"_s, $$new($ObjectArray, {$of("http://xml.org/sax/properties/declaration-handler"_s)}))));
	}
	$set(this, fDeclHandler, handler);
}

$DeclHandler* AbstractSAXParser::getDeclHandler() {
	return this->fDeclHandler;
}

void AbstractSAXParser::setLexicalHandler($LexicalHandler* handler) {
	$useLocalCurrentObjectStackCache();
	if (this->fParseInProgress) {
		$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "property-not-parsing-supported"_s, $$new($ObjectArray, {$of("http://xml.org/sax/properties/lexical-handler"_s)}))));
	}
	$set(this, fLexicalHandler, handler);
}

$LexicalHandler* AbstractSAXParser::getLexicalHandler() {
	return this->fLexicalHandler;
}

void AbstractSAXParser::startNamespaceMapping() {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(this->fNamespaceContext)->getDeclaredPrefixCount();
	if (count > 0) {
		$var($String, prefix, nullptr);
		$var($String, uri, nullptr);
		for (int32_t i = 0; i < count; ++i) {
			$assign(prefix, $nc(this->fNamespaceContext)->getDeclaredPrefixAt(i));
			$assign(uri, $nc(this->fNamespaceContext)->getURI(prefix));
			$nc(this->fContentHandler)->startPrefixMapping(prefix, (uri == nullptr) ? ""_s : uri);
		}
	}
}

void AbstractSAXParser::endNamespaceMapping() {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(this->fNamespaceContext)->getDeclaredPrefixCount();
	if (count > 0) {
		for (int32_t i = 0; i < count; ++i) {
			$nc(this->fContentHandler)->endPrefixMapping($($nc(this->fNamespaceContext)->getDeclaredPrefixAt(i)));
		}
	}
}

void AbstractSAXParser::reset() {
	$AbstractXMLDocumentParser::reset();
	this->fInDTD = false;
	$set(this, fVersion, "1.0"_s);
	this->fStandalone = false;
	this->fNamespaces = $nc(this->fConfiguration)->getFeature(AbstractSAXParser::NAMESPACES);
	this->fNamespacePrefixes = $nc(this->fConfiguration)->getFeature(AbstractSAXParser::NAMESPACE_PREFIXES);
	$set(this, fAugmentations, nullptr);
	$set(this, fDeclaredAttrs, nullptr);
}

$ElementPSVI* AbstractSAXParser::getElementPSVI() {
	$init($Constants);
	return (this->fAugmentations != nullptr) ? $cast($ElementPSVI, $nc(this->fAugmentations)->getItem($Constants::ELEMENT_PSVI)) : ($ElementPSVI*)nullptr;
}

$AttributePSVI* AbstractSAXParser::getAttributePSVI(int32_t index) {
	$init($Constants);
	return $cast($AttributePSVI, $nc($($nc($nc(this->fAttributesProxy)->fAttributes)->getAugmentations(index)))->getItem($Constants::ATTRIBUTE_PSVI));
}

$AttributePSVI* AbstractSAXParser::getAttributePSVIByName($String* uri, $String* localname) {
	$init($Constants);
	return $cast($AttributePSVI, $nc($($nc($nc(this->fAttributesProxy)->fAttributes)->getAugmentations(uri, localname)))->getItem($Constants::ATTRIBUTE_PSVI));
}

void clinit$AbstractSAXParser($Class* class$) {
	$init($Constants);
	$assignStatic(AbstractSAXParser::NAMESPACES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
	$assignStatic(AbstractSAXParser::NAMESPACE_PREFIXES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACE_PREFIXES_FEATURE}));
	$assignStatic(AbstractSAXParser::STRING_INTERNING, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::STRING_INTERNING_FEATURE}));
	$assignStatic(AbstractSAXParser::ALLOW_UE_AND_NOTATION_EVENTS, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::ALLOW_DTD_EVENTS_AFTER_ENDDTD_FEATURE}));
	$assignStatic(AbstractSAXParser::LEXICAL_HANDLER, $str({$Constants::SAX_PROPERTY_PREFIX, $Constants::LEXICAL_HANDLER_PROPERTY}));
	$assignStatic(AbstractSAXParser::DECLARATION_HANDLER, $str({$Constants::SAX_PROPERTY_PREFIX, $Constants::DECLARATION_HANDLER_PROPERTY}));
	$assignStatic(AbstractSAXParser::DOM_NODE, $str({$Constants::SAX_PROPERTY_PREFIX, $Constants::DOM_NODE_PROPERTY}));
	$assignStatic(AbstractSAXParser::SECURITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SECURITY_MANAGER_PROPERTY}));
	$assignStatic(AbstractSAXParser::RECOGNIZED_FEATURES, $new($StringArray, {
		AbstractSAXParser::NAMESPACES,
		AbstractSAXParser::NAMESPACE_PREFIXES,
		AbstractSAXParser::STRING_INTERNING
	}));
	$assignStatic(AbstractSAXParser::RECOGNIZED_PROPERTIES, $new($StringArray, {
		AbstractSAXParser::LEXICAL_HANDLER,
		AbstractSAXParser::DECLARATION_HANDLER,
		AbstractSAXParser::DOM_NODE
	}));
}

AbstractSAXParser::AbstractSAXParser() {
}

$Class* AbstractSAXParser::load$($String* name, bool initialize) {
	$loadClass(AbstractSAXParser, name, initialize, &_AbstractSAXParser_ClassInfo_, clinit$AbstractSAXParser, allocate$AbstractSAXParser);
	return class$;
}

$Class* AbstractSAXParser::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com