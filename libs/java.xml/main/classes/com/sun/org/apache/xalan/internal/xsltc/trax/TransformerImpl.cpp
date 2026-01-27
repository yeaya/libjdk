#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerImpl.h>

#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOMCache.h>
#include <com/sun/org/apache/xalan/internal/xsltc/StripFilter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/Translet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/TransletException.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/DOMWSFilter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/MessageHandler.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/output/TransletOutputHandlerFactory.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/DOM2TO.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/StAXEvent2SAX.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/StAXStream2SAX.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerImpl$MessageHandler.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/XSLTCSource.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/serializer/ExtendedContentHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/OutputPropertiesFactory.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/utils/SystemIDResolver.h>
#include <com/sun/org/apache/xml/internal/utils/XMLReaderManager.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/UnknownServiceException.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Enumeration.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <java/util/StringTokenizer.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/catalog/CatalogException.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <javax/xml/catalog/CatalogManager.h>
#include <javax/xml/catalog/CatalogResolver.h>
#include <javax/xml/parsers/DocumentBuilder.h>
#include <javax/xml/parsers/DocumentBuilderFactory.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLEventWriter.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <javax/xml/stream/XMLStreamWriter.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/OutputKeys.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/Transformer.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/transform/URIResolver.h>
#include <javax/xml/transform/dom/DOMResult.h>
#include <javax/xml/transform/dom/DOMSource.h>
#include <javax/xml/transform/sax/SAXResult.h>
#include <javax/xml/transform/sax/SAXSource.h>
#include <javax/xml/transform/stax/StAXResult.h>
#include <javax/xml/transform/stax/StAXSource.h>
#include <javax/xml/transform/stream/StreamResult.h>
#include <javax/xml/transform/stream/StreamSource.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkProperty$ImplPropMap.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <jdk/xml/internal/JdkProperty.h>
#include <jdk/xml/internal/JdkXmlFeatures.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jdk/xml/internal/TransformErrorListener.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_DTD
#undef APIPROPERTY
#undef CATALOG_FEATURES
#undef CATALOG_FILES
#undef CDATA_CHUNK_SIZE
#undef CDATA_CHUNK_SIZE_DEFAULT
#undef CDATA_SECTION_ELEMENTS
#undef DEFAULT
#undef DEFER
#undef DOCTYPE_PUBLIC
#undef DOCTYPE_SYSTEM
#undef DOM
#undef ENCODING
#undef ERROR_LISTENER_NULL_ERR
#undef EXTERNAL_ACCESS_DEFAULT
#undef FEATURE_SECURE_PROCESSING
#undef FILES
#undef INDENT
#undef JAXP_INVALID_SET_PARAM_VALUE
#undef JAXP_NO_HANDLER_ERR
#undef JAXP_NO_RESULT_ERR
#undef JAXP_NO_SOURCE_ERR
#undef JAXP_NO_TRANSLET_ERR
#undef JAXP_UNKNOWN_PROP_ERR
#undef LEXICAL_HANDLER_PROPERTY
#undef MEDIA_TYPE
#undef METHOD
#undef NAMESPACE_PREFIXES_FEATURE
#undef OMIT_XML_DECLARATION
#undef SAX
#undef SECURITY_MANAGER
#undef STANDALONE
#undef STAX
#undef STREAM
#undef S_BUILTIN_EXTENSIONS_UNIVERSAL
#undef S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL
#undef USE_CATALOG
#undef VERSION
#undef XSLTCISSTANDALONE

using $URIArray = $Array<::java::net::URI>;
using $CatalogFeatures$FeatureArray = $Array<::javax::xml::catalog::CatalogFeatures$Feature>;
using $XMLSecurityManager = ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager;
using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $DOMCache = ::com::sun::org::apache::xalan::internal::xsltc::DOMCache;
using $StripFilter = ::com::sun::org::apache::xalan::internal::xsltc::StripFilter;
using $Translet = ::com::sun::org::apache::xalan::internal::xsltc::Translet;
using $TransletException = ::com::sun::org::apache::xalan::internal::xsltc::TransletException;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $DOMWSFilter = ::com::sun::org::apache::xalan::internal::xsltc::dom::DOMWSFilter;
using $SAXImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl;
using $XSLTCDTMManager = ::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager;
using $AbstractTranslet = ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet;
using $MessageHandler = ::com::sun::org::apache::xalan::internal::xsltc::runtime::MessageHandler;
using $TransletOutputHandlerFactory = ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::TransletOutputHandlerFactory;
using $DOM2TO = ::com::sun::org::apache::xalan::internal::xsltc::trax::DOM2TO;
using $StAXEvent2SAX = ::com::sun::org::apache::xalan::internal::xsltc::trax::StAXEvent2SAX;
using $StAXStream2SAX = ::com::sun::org::apache::xalan::internal::xsltc::trax::StAXStream2SAX;
using $TransformerFactoryImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl;
using $TransformerImpl$MessageHandler = ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerImpl$MessageHandler;
using $XSLTCSource = ::com::sun::org::apache::xalan::internal::xsltc::trax::XSLTCSource;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $ExtendedContentHandler = ::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler;
using $OutputPropertiesFactory = ::com::sun::org::apache::xml::internal::serializer::OutputPropertiesFactory;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $SystemIDResolver = ::com::sun::org::apache::xml::internal::utils::SystemIDResolver;
using $XMLReaderManager = ::com::sun::org::apache::xml::internal::utils::XMLReaderManager;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $UnknownServiceException = ::java::net::UnknownServiceException;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Enumeration = ::java::util::Enumeration;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Properties = ::java::util::Properties;
using $StringTokenizer = ::java::util::StringTokenizer;
using $XMLConstants = ::javax::xml::XMLConstants;
using $CatalogException = ::javax::xml::catalog::CatalogException;
using $CatalogFeatures = ::javax::xml::catalog::CatalogFeatures;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $CatalogManager = ::javax::xml::catalog::CatalogManager;
using $CatalogResolver = ::javax::xml::catalog::CatalogResolver;
using $DocumentBuilder = ::javax::xml::parsers::DocumentBuilder;
using $DocumentBuilderFactory = ::javax::xml::parsers::DocumentBuilderFactory;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLEventWriter = ::javax::xml::stream::XMLEventWriter;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;
using $XMLStreamWriter = ::javax::xml::stream::XMLStreamWriter;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $OutputKeys = ::javax::xml::transform::OutputKeys;
using $Result = ::javax::xml::transform::Result;
using $Source = ::javax::xml::transform::Source;
using $Transformer = ::javax::xml::transform::Transformer;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $URIResolver = ::javax::xml::transform::URIResolver;
using $DOMResult = ::javax::xml::transform::dom::DOMResult;
using $DOMSource = ::javax::xml::transform::dom::DOMSource;
using $SAXResult = ::javax::xml::transform::sax::SAXResult;
using $SAXSource = ::javax::xml::transform::sax::SAXSource;
using $StAXResult = ::javax::xml::transform::stax::StAXResult;
using $StAXSource = ::javax::xml::transform::stax::StAXSource;
using $StreamResult = ::javax::xml::transform::stream::StreamResult;
using $StreamSource = ::javax::xml::transform::stream::StreamSource;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkProperty = ::jdk::xml::internal::JdkProperty;
using $JdkProperty$ImplPropMap = ::jdk::xml::internal::JdkProperty$ImplPropMap;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;
using $JdkXmlFeatures = ::jdk::xml::internal::JdkXmlFeatures;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $TransformErrorListener = ::jdk::xml::internal::TransformErrorListener;
using $Node = ::org::w3c::dom::Node;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;
using $XMLReader = ::org::xml::sax::XMLReader;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _TransformerImpl_FieldInfo_[] = {
	{"LEXICAL_HANDLER_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TransformerImpl, LEXICAL_HANDLER_PROPERTY)},
	{"NAMESPACE_PREFIXES_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TransformerImpl, NAMESPACE_PREFIXES_FEATURE)},
	{"_translet", "Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;", nullptr, $PRIVATE, $field(TransformerImpl, _translet)},
	{"_method", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TransformerImpl, _method)},
	{"_encoding", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TransformerImpl, _encoding)},
	{"_sourceSystemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TransformerImpl, _sourceSystemId)},
	{"_defaultListener", "Ljavax/xml/transform/ErrorListener;", nullptr, $PRIVATE | $FINAL, $field(TransformerImpl, _defaultListener)},
	{"_errorListener", "Ljavax/xml/transform/ErrorListener;", nullptr, $PRIVATE, $field(TransformerImpl, _errorListener)},
	{"_uriResolver", "Ljavax/xml/transform/URIResolver;", nullptr, $PRIVATE, $field(TransformerImpl, _uriResolver)},
	{"_properties", "Ljava/util/Properties;", nullptr, $PRIVATE, $field(TransformerImpl, _properties)},
	{"_propertiesClone", "Ljava/util/Properties;", nullptr, $PRIVATE, $field(TransformerImpl, _propertiesClone)},
	{"_tohFactory", "Lcom/sun/org/apache/xalan/internal/xsltc/runtime/output/TransletOutputHandlerFactory;", nullptr, $PRIVATE, $field(TransformerImpl, _tohFactory)},
	{"_dom", "Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PRIVATE, $field(TransformerImpl, _dom)},
	{"_indentNumber", "I", nullptr, $PRIVATE, $field(TransformerImpl, _indentNumber)},
	{"_tfactory", "Lcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl;", nullptr, $PRIVATE, $field(TransformerImpl, _tfactory)},
	{"_ostream", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(TransformerImpl, _ostream)},
	{"_dtmManager", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager;", nullptr, $PRIVATE, $field(TransformerImpl, _dtmManager)},
	{"_readerManager", "Lcom/sun/org/apache/xml/internal/utils/XMLReaderManager;", nullptr, $PRIVATE, $field(TransformerImpl, _readerManager)},
	{"_isIdentity", "Z", nullptr, $PRIVATE, $field(TransformerImpl, _isIdentity)},
	{"_isSecureProcessing", "Z", nullptr, $PRIVATE, $field(TransformerImpl, _isSecureProcessing)},
	{"_overrideDefaultParser", "Z", nullptr, $PRIVATE, $field(TransformerImpl, _overrideDefaultParser)},
	{"_accessExternalDTD", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TransformerImpl, _accessExternalDTD)},
	{"_securityManager", "Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityManager;", nullptr, $PRIVATE, $field(TransformerImpl, _securityManager)},
	{"_parameters", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(TransformerImpl, _parameters)},
	{"_catalogFeatures", "Ljavax/xml/catalog/CatalogFeatures;", nullptr, 0, $field(TransformerImpl, _catalogFeatures)},
	{"_catalogUriResolver", "Ljavax/xml/catalog/CatalogResolver;", nullptr, 0, $field(TransformerImpl, _catalogUriResolver)},
	{"_useCatalog", "Z", nullptr, 0, $field(TransformerImpl, _useCatalog)},
	{"_cdataChunkSize", "I", nullptr, 0, $field(TransformerImpl, _cdataChunkSize)},
	{"_xsltcIsStandalone", "Ljdk/xml/internal/JdkProperty;", "Ljdk/xml/internal/JdkProperty<Ljava/lang/String;>;", 0, $field(TransformerImpl, _xsltcIsStandalone)},
	{}
};

$MethodInfo _TransformerImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Properties;ILcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl;)V", nullptr, $PROTECTED, $method(TransformerImpl, init$, void, $Properties*, int32_t, $TransformerFactoryImpl*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Ljava/util/Properties;ILcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl;)V", nullptr, $PROTECTED, $method(TransformerImpl, init$, void, $Translet*, $Properties*, int32_t, $TransformerFactoryImpl*)},
	{"clearParameters", "()V", nullptr, $PUBLIC, $virtualMethod(TransformerImpl, clearParameters, void)},
	{"createOutputProperties", "(Ljava/util/Properties;)Ljava/util/Properties;", nullptr, $PRIVATE, $method(TransformerImpl, createOutputProperties, $Properties*, $Properties*)},
	{"getDOM", "(Ljavax/xml/transform/Source;)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PRIVATE, $method(TransformerImpl, getDOM, $DOM*, $Source*), "javax.xml.transform.TransformerException"},
	{"getErrorListener", "()Ljavax/xml/transform/ErrorListener;", nullptr, $PUBLIC, $virtualMethod(TransformerImpl, getErrorListener, $ErrorListener*)},
	{"getOutputHandler", "(Ljavax/xml/transform/Result;)Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;", nullptr, $PUBLIC, $method(TransformerImpl, getOutputHandler, $SerializationHandler*, $Result*), "javax.xml.transform.TransformerException"},
	{"getOutputProperties", "()Ljava/util/Properties;", nullptr, $PUBLIC, $virtualMethod(TransformerImpl, getOutputProperties, $Properties*)},
	{"getOutputProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TransformerImpl, getOutputProperty, $String*, $String*), "java.lang.IllegalArgumentException"},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $virtualMethod(TransformerImpl, getParameter, $Object*, $String*)},
	{"getTransformerFactory", "()Lcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl;", nullptr, $PROTECTED, $method(TransformerImpl, getTransformerFactory, $TransformerFactoryImpl*)},
	{"getTranslet", "()Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;", nullptr, $PROTECTED, $method(TransformerImpl, getTranslet, $AbstractTranslet*)},
	{"getTransletOutputHandlerFactory", "()Lcom/sun/org/apache/xalan/internal/xsltc/runtime/output/TransletOutputHandlerFactory;", nullptr, $PROTECTED, $method(TransformerImpl, getTransletOutputHandlerFactory, $TransletOutputHandlerFactory*)},
	{"getURIResolver", "()Ljavax/xml/transform/URIResolver;", nullptr, $PUBLIC, $virtualMethod(TransformerImpl, getURIResolver, $URIResolver*)},
	{"isDefaultProperty", "(Ljava/lang/String;Ljava/util/Properties;)Z", nullptr, $PRIVATE, $method(TransformerImpl, isDefaultProperty, bool, $String*, $Properties*)},
	{"isIdentity", "()Z", nullptr, $PUBLIC, $method(TransformerImpl, isIdentity, bool)},
	{"isSecureProcessing", "()Z", nullptr, $PUBLIC, $method(TransformerImpl, isSecureProcessing, bool)},
	{"overrideDefaultParser", "()Z", nullptr, $PUBLIC, $method(TransformerImpl, overrideDefaultParser, bool)},
	{"postErrorToListener", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(TransformerImpl, postErrorToListener, void, $String*)},
	{"postWarningToListener", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(TransformerImpl, postWarningToListener, void, $String*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(TransformerImpl, reset, void)},
	{"retrieveDocument", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/Translet;)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC, $virtualMethod(TransformerImpl, retrieveDocument, $DOM*, $String*, $String*, $Translet*)},
	{"setDOM", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)V", nullptr, $PROTECTED, $method(TransformerImpl, setDOM, void, $DOM*)},
	{"setDefaults", "(Ljava/util/Properties;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(TransformerImpl, setDefaults, void, $Properties*, $String*)},
	{"setErrorListener", "(Ljavax/xml/transform/ErrorListener;)V", nullptr, $PUBLIC, $virtualMethod(TransformerImpl, setErrorListener, void, $ErrorListener*), "java.lang.IllegalArgumentException"},
	{"setOutputProperties", "(Ljava/util/Properties;)V", nullptr, $PUBLIC, $virtualMethod(TransformerImpl, setOutputProperties, void, $Properties*), "java.lang.IllegalArgumentException"},
	{"setOutputProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerImpl, setOutputProperty, void, $String*, $String*), "java.lang.IllegalArgumentException"},
	{"setOverrideDefaultParser", "(Z)V", nullptr, $PUBLIC, $method(TransformerImpl, setOverrideDefaultParser, void, bool)},
	{"setParameter", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(TransformerImpl, setParameter, void, $String*, Object$*)},
	{"setSecureProcessing", "(Z)V", nullptr, $PUBLIC, $method(TransformerImpl, setSecureProcessing, void, bool)},
	{"setURIResolver", "(Ljavax/xml/transform/URIResolver;)V", nullptr, $PUBLIC, $virtualMethod(TransformerImpl, setURIResolver, void, $URIResolver*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transferOutputProperties", "(Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;)V", nullptr, $PRIVATE, $method(TransformerImpl, transferOutputProperties, void, $AbstractTranslet*)},
	{"transferOutputProperties", "(Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, $method(TransformerImpl, transferOutputProperties, void, $SerializationHandler*)},
	{"transform", "(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V", nullptr, $PUBLIC, $virtualMethod(TransformerImpl, transform, void, $Source*, $Result*), "javax.xml.transform.TransformerException"},
	{"transform", "(Ljavax/xml/transform/Source;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(TransformerImpl, transform, void, $Source*, $SerializationHandler*, $String*), "javax.xml.transform.TransformerException"},
	{"transformIdentity", "(Ljavax/xml/transform/Source;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PRIVATE, $method(TransformerImpl, transformIdentity, void, $Source*, $SerializationHandler*), "java.lang.Exception"},
	{"validOutputProperty", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(TransformerImpl, validOutputProperty, bool, $String*)},
	{}
};

$InnerClassInfo _TransformerImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerImpl$MessageHandler", "com.sun.org.apache.xalan.internal.xsltc.trax.TransformerImpl", "MessageHandler", $STATIC},
	{}
};

$ClassInfo _TransformerImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerImpl",
	"javax.xml.transform.Transformer",
	"com.sun.org.apache.xalan.internal.xsltc.DOMCache",
	_TransformerImpl_FieldInfo_,
	_TransformerImpl_MethodInfo_,
	nullptr,
	nullptr,
	_TransformerImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerImpl$MessageHandler"
};

$Object* allocate$TransformerImpl($Class* clazz) {
	return $of($alloc(TransformerImpl));
}

int32_t TransformerImpl::hashCode() {
	 return this->$Transformer::hashCode();
}

bool TransformerImpl::equals(Object$* arg0) {
	 return this->$Transformer::equals(arg0);
}

$Object* TransformerImpl::clone() {
	 return this->$Transformer::clone();
}

$String* TransformerImpl::toString() {
	 return this->$Transformer::toString();
}

void TransformerImpl::finalize() {
	this->$Transformer::finalize();
}

$String* TransformerImpl::LEXICAL_HANDLER_PROPERTY = nullptr;
$String* TransformerImpl::NAMESPACE_PREFIXES_FEATURE = nullptr;

void TransformerImpl::init$($Properties* outputProperties, int32_t indentNumber, $TransformerFactoryImpl* tfactory) {
	TransformerImpl::init$(nullptr, outputProperties, indentNumber, tfactory);
	this->_isIdentity = true;
}

void TransformerImpl::init$($Translet* translet, $Properties* outputProperties, int32_t indentNumber, $TransformerFactoryImpl* tfactory) {
	$useLocalCurrentObjectStackCache();
	$Transformer::init$();
	$set(this, _translet, nullptr);
	$set(this, _method, nullptr);
	$set(this, _encoding, nullptr);
	$set(this, _sourceSystemId, nullptr);
	$set(this, _defaultListener, $new($TransformErrorListener));
	$set(this, _errorListener, this->_defaultListener);
	$set(this, _uriResolver, nullptr);
	$set(this, _tohFactory, nullptr);
	$set(this, _dom, nullptr);
	this->_indentNumber = -1;
	$set(this, _tfactory, nullptr);
	$set(this, _ostream, nullptr);
	$set(this, _dtmManager, nullptr);
	this->_isIdentity = false;
	this->_isSecureProcessing = false;
	$init($JdkConstants);
	$set(this, _accessExternalDTD, $JdkConstants::EXTERNAL_ACCESS_DEFAULT);
	$set(this, _parameters, nullptr);
	this->_useCatalog = true;
	this->_cdataChunkSize = $JdkConstants::CDATA_CHUNK_SIZE_DEFAULT;
	$set(this, _translet, $cast($AbstractTranslet, translet));
	if (this->_translet != nullptr) {
		$nc(this->_translet)->setMessageHandler($$new($TransformerImpl$MessageHandler, this->_errorListener));
	}
	$set(this, _properties, createOutputProperties(outputProperties));
	$var($String, isStandalone, $cast($String, $SecuritySupport::getJAXPSystemProperty($String::class$, "jdk.xml.xsltcIsStandalone"_s, "no"_s)));
	$init($JdkProperty$ImplPropMap);
	$init($JdkProperty$State);
	$set(this, _xsltcIsStandalone, $new($JdkProperty, $JdkProperty$ImplPropMap::XSLTCISSTANDALONE, isStandalone, $JdkProperty$State::DEFAULT));
	$set(this, _propertiesClone, $cast($Properties, $nc(this->_properties)->clone()));
	this->_indentNumber = indentNumber;
	$set(this, _tfactory, tfactory);
	this->_overrideDefaultParser = $nc(this->_tfactory)->overrideDefaultParser();
	$init($XMLConstants);
	$set(this, _accessExternalDTD, $cast($String, $nc(this->_tfactory)->getAttribute($XMLConstants::ACCESS_EXTERNAL_DTD)));
	$set(this, _securityManager, $cast($XMLSecurityManager, $nc(this->_tfactory)->getAttribute($JdkConstants::SECURITY_MANAGER)));
	$set(this, _readerManager, $XMLReaderManager::getInstance(this->_overrideDefaultParser));
	$nc(this->_readerManager)->setProperty($XMLConstants::ACCESS_EXTERNAL_DTD, this->_accessExternalDTD);
	$nc(this->_readerManager)->setFeature($XMLConstants::FEATURE_SECURE_PROCESSING, this->_isSecureProcessing);
	$nc(this->_readerManager)->setProperty($JdkConstants::SECURITY_MANAGER, this->_securityManager);
	this->_cdataChunkSize = $JdkXmlUtils::getValue($($nc(this->_tfactory)->getAttribute($JdkConstants::CDATA_CHUNK_SIZE)), $JdkConstants::CDATA_CHUNK_SIZE_DEFAULT);
	$nc(this->_readerManager)->setProperty($JdkConstants::CDATA_CHUNK_SIZE, $($Integer::valueOf(this->_cdataChunkSize)));
	this->_useCatalog = $nc(this->_tfactory)->getFeature($XMLConstants::USE_CATALOG);
	if (this->_useCatalog) {
		$init($JdkXmlFeatures);
		$set(this, _catalogFeatures, $cast($CatalogFeatures, $nc(this->_tfactory)->getAttribute($JdkXmlFeatures::CATALOG_FEATURES)));
		$init($CatalogFeatures$Feature);
		$var($String, catalogFiles, $nc(this->_catalogFeatures)->get($CatalogFeatures$Feature::DEFER));
		if (catalogFiles != nullptr) {
			$nc(this->_readerManager)->setFeature($XMLConstants::USE_CATALOG, this->_useCatalog);
			$nc(this->_readerManager)->setProperty($JdkXmlFeatures::CATALOG_FEATURES, this->_catalogFeatures);
		}
	}
}

bool TransformerImpl::isSecureProcessing() {
	return this->_isSecureProcessing;
}

void TransformerImpl::setSecureProcessing(bool flag) {
	this->_isSecureProcessing = flag;
	$init($XMLConstants);
	$nc(this->_readerManager)->setFeature($XMLConstants::FEATURE_SECURE_PROCESSING, this->_isSecureProcessing);
}

bool TransformerImpl::overrideDefaultParser() {
	return this->_overrideDefaultParser;
}

void TransformerImpl::setOverrideDefaultParser(bool flag) {
	this->_overrideDefaultParser = flag;
}

$AbstractTranslet* TransformerImpl::getTranslet() {
	return this->_translet;
}

bool TransformerImpl::isIdentity() {
	return this->_isIdentity;
}

void TransformerImpl::transform($Source* source, $Result* result) {
	$useLocalCurrentObjectStackCache();
	if (!this->_isIdentity) {
		if (this->_translet == nullptr) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_NO_TRANSLET_ERR));
			$throwNew($TransformerException, $(err->toString()));
		}
		transferOutputProperties(this->_translet);
	}
	$var($SerializationHandler, toHandler, getOutputHandler(result));
	if (toHandler == nullptr) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_NO_HANDLER_ERR));
		$throwNew($TransformerException, $(err->toString()));
	}
	bool var$0 = !this->_isIdentity;
	if (var$0) {
		bool var$1 = this->_uriResolver != nullptr;
		if (!var$1) {
			$init($XMLConstants);
			bool var$2 = $nc(this->_tfactory)->getFeature($XMLConstants::USE_CATALOG);
			$init($JdkXmlUtils);
			var$1 = (var$2 && $nc(this->_tfactory)->getAttribute($JdkXmlUtils::CATALOG_FILES) != nullptr);
		}
		var$0 = (var$1);
	}
	if (var$0) {
		$nc(this->_translet)->setDOMCache(this);
	}
	if (this->_isIdentity) {
		transferOutputProperties(toHandler);
	}
	transform(source, toHandler, this->_encoding);
	try {
		if ($instanceOf($DOMResult, result)) {
			$nc(($cast($DOMResult, result)))->setNode($($nc(this->_tohFactory)->getNode()));
		} else if ($instanceOf($StAXResult, result)) {
			if ($nc(($cast($StAXResult, result)))->getXMLEventWriter() != nullptr) {
				$nc(($($nc(this->_tohFactory)->getXMLEventWriter())))->flush();
			} else if (($cast($StAXResult, result))->getXMLStreamWriter() != nullptr) {
				$nc(($($nc(this->_tohFactory)->getXMLStreamWriter())))->flush();
			}
		}
	} catch ($Exception& e) {
		$nc($System::out)->println("Result writing error"_s);
	}
}

$SerializationHandler* TransformerImpl::getOutputHandler($Result* result) {
	$useLocalCurrentObjectStackCache();
	$init($OutputKeys);
	$set(this, _method, $cast($String, $nc(this->_properties)->get($OutputKeys::METHOD)));
	$set(this, _encoding, $nc(this->_properties)->getProperty($OutputKeys::ENCODING));
	$set(this, _tohFactory, $TransletOutputHandlerFactory::newInstance(this->_overrideDefaultParser, this->_errorListener));
	$nc(this->_tohFactory)->setEncoding(this->_encoding);
	if (this->_method != nullptr) {
		$nc(this->_tohFactory)->setOutputMethod(this->_method);
	}
	if (this->_indentNumber >= 0) {
		$nc(this->_tohFactory)->setIndentNumber(this->_indentNumber);
	}
	try {
		if ($instanceOf($SAXResult, result)) {
			$var($SAXResult, target, $cast($SAXResult, result));
			$var($ContentHandler, handler, $nc(target)->getHandler());
			$nc(this->_tohFactory)->setHandler(handler);
			$var($LexicalHandler, lexicalHandler, target->getLexicalHandler());
			if (lexicalHandler != nullptr) {
				$nc(this->_tohFactory)->setLexicalHandler(lexicalHandler);
			}
			$nc(this->_tohFactory)->setOutputType($TransletOutputHandlerFactory::SAX);
			return $nc(this->_tohFactory)->getSerializationHandler();
		} else if ($instanceOf($StAXResult, result)) {
			if ($nc(($cast($StAXResult, result)))->getXMLEventWriter() != nullptr) {
				$nc(this->_tohFactory)->setXMLEventWriter($(($cast($StAXResult, result))->getXMLEventWriter()));
			} else if (($cast($StAXResult, result))->getXMLStreamWriter() != nullptr) {
				$nc(this->_tohFactory)->setXMLStreamWriter($(($cast($StAXResult, result))->getXMLStreamWriter()));
			}
			$nc(this->_tohFactory)->setOutputType($TransletOutputHandlerFactory::STAX);
			return $nc(this->_tohFactory)->getSerializationHandler();
		} else if ($instanceOf($DOMResult, result)) {
			$nc(this->_tohFactory)->setNode($($nc(($cast($DOMResult, result)))->getNode()));
			$nc(this->_tohFactory)->setNextSibling($($nc(($cast($DOMResult, result)))->getNextSibling()));
			$nc(this->_tohFactory)->setOutputType($TransletOutputHandlerFactory::DOM);
			return $nc(this->_tohFactory)->getSerializationHandler();
		} else if ($instanceOf($StreamResult, result)) {
			$var($StreamResult, target, $cast($StreamResult, result));
			$nc(this->_tohFactory)->setOutputType($TransletOutputHandlerFactory::STREAM);
			$var($Writer, writer, $nc(target)->getWriter());
			if (writer != nullptr) {
				$nc(this->_tohFactory)->setWriter(writer);
				return $nc(this->_tohFactory)->getSerializationHandler();
			}
			$var($OutputStream, ostream, target->getOutputStream());
			if (ostream != nullptr) {
				$nc(this->_tohFactory)->setOutputStream(ostream);
				return $nc(this->_tohFactory)->getSerializationHandler();
			}
			$var($String, systemId, $nc(result)->getSystemId());
			if (systemId == nullptr) {
				$init($ErrorMsg);
				$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_NO_RESULT_ERR));
				$throwNew($TransformerException, $(err->toString()));
			}
			$var($URL, url, nullptr);
			if ($nc(systemId)->startsWith("file:"_s)) {
				try {
					$var($Path, p, $Paths::get($$new($URI, systemId)));
					$set(this, _ostream, $new($FileOutputStream, $($nc(p)->toFile())));
					$nc(this->_tohFactory)->setOutputStream(this->_ostream);
					return $nc(this->_tohFactory)->getSerializationHandler();
				} catch ($Exception& e) {
					$throwNew($TransformerException, static_cast<$Throwable*>(e));
				}
			} else if (systemId->startsWith("http:"_s)) {
				$assign(url, $new($URL, systemId));
				$var($URLConnection, connection, url->openConnection());
				$nc(this->_tohFactory)->setOutputStream($set(this, _ostream, $nc(connection)->getOutputStream()));
				return $nc(this->_tohFactory)->getSerializationHandler();
			} else {
				$nc(this->_tohFactory)->setOutputStream($set(this, _ostream, $new($FileOutputStream, $$new($File, systemId))));
				return $nc(this->_tohFactory)->getSerializationHandler();
			}
		}
	} catch ($UnknownServiceException& e) {
		$throwNew($TransformerException, static_cast<$Throwable*>(e));
	} catch ($ParserConfigurationException& e) {
		$throwNew($TransformerException, static_cast<$Throwable*>(e));
	} catch ($IOException& e) {
		$throwNew($TransformerException, static_cast<$Throwable*>(e));
	}
	return nullptr;
}

void TransformerImpl::setDOM($DOM* dom) {
	$set(this, _dom, dom);
}

$DOM* TransformerImpl::getDOM($Source* source) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($DOM, dom, nullptr);
		if (source != nullptr) {
			$var($DTMWSFilter, wsfilter, nullptr);
			if (this->_translet != nullptr && $instanceOf($StripFilter, this->_translet)) {
				$assign(wsfilter, $new($DOMWSFilter, this->_translet));
			} else {
				$assign(wsfilter, nullptr);
			}
			bool hasIdCall = (this->_translet != nullptr) ? $nc(this->_translet)->hasIdCall() : false;
			if (this->_dtmManager == nullptr) {
				$set(this, _dtmManager, $nc(this->_tfactory)->createNewDTMManagerInstance());
				$nc(this->_dtmManager)->setOverrideDefaultParser(this->_overrideDefaultParser);
			}
			$assign(dom, $cast($DOM, $nc(this->_dtmManager)->getDTM(source, false, wsfilter, true, false, false, 0, hasIdCall)));
		} else if (this->_dom != nullptr) {
			$assign(dom, this->_dom);
			$set(this, _dom, nullptr);
		} else {
			return nullptr;
		}
		if (!this->_isIdentity) {
			$nc(this->_translet)->prepassDocument(dom);
		}
		return dom;
	} catch ($Exception& e) {
		if (this->_errorListener != nullptr) {
			postErrorToListener($(e->getMessage()));
		}
		$throwNew($TransformerException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$TransformerFactoryImpl* TransformerImpl::getTransformerFactory() {
	return this->_tfactory;
}

$TransletOutputHandlerFactory* TransformerImpl::getTransletOutputHandlerFactory() {
	return this->_tohFactory;
}

void TransformerImpl::transformIdentity($Source* source, $SerializationHandler* handler) {
	$useLocalCurrentObjectStackCache();
	if (source != nullptr) {
		$set(this, _sourceSystemId, source->getSystemId());
	}
	if ($instanceOf($StreamSource, source)) {
		$var($StreamSource, stream, $cast($StreamSource, source));
		$var($InputStream, streamInput, $nc(stream)->getInputStream());
		$var($Reader, streamReader, stream->getReader());
		$var($XMLReader, reader, $nc(this->_readerManager)->getXMLReader());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(reader)->setProperty(TransformerImpl::LEXICAL_HANDLER_PROPERTY, handler);
					reader->setFeature(TransformerImpl::NAMESPACE_PREFIXES_FEATURE, true);
				} catch ($SAXException& e) {
				}
				$nc(reader)->setContentHandler(handler);
				$var($InputSource, input, nullptr);
				if (streamInput != nullptr) {
					$assign(input, $new($InputSource, streamInput));
					input->setSystemId(this->_sourceSystemId);
				} else if (streamReader != nullptr) {
					$assign(input, $new($InputSource, streamReader));
					input->setSystemId(this->_sourceSystemId);
				} else if (this->_sourceSystemId != nullptr) {
					$assign(input, $new($InputSource, this->_sourceSystemId));
				} else {
					$init($ErrorMsg);
					$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_NO_SOURCE_ERR));
					$throwNew($TransformerException, $(err->toString()));
				}
				reader->parse(input);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(this->_readerManager)->releaseXMLReader(reader);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else if ($instanceOf($SAXSource, source)) {
		$var($SAXSource, sax, $cast($SAXSource, source));
		$var($XMLReader, reader, $nc(sax)->getXMLReader());
		$var($InputSource, input, sax->getInputSource());
		bool userReader = true;
		{
			$var($Throwable, var$2, nullptr);
			try {
				if (reader == nullptr) {
					$assign(reader, $nc(this->_readerManager)->getXMLReader());
					userReader = false;
				}
				try {
					$nc(reader)->setProperty(TransformerImpl::LEXICAL_HANDLER_PROPERTY, handler);
					reader->setFeature(TransformerImpl::NAMESPACE_PREFIXES_FEATURE, true);
				} catch ($SAXException& e) {
				}
				$nc(reader)->setContentHandler(handler);
				reader->parse(input);
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				if (!userReader) {
					$nc(this->_readerManager)->releaseXMLReader(reader);
				}
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	} else if ($instanceOf($StAXSource, source)) {
		$var($StAXSource, staxSource, $cast($StAXSource, source));
		$var($StAXEvent2SAX, staxevent2sax, nullptr);
		$var($StAXStream2SAX, staxStream2SAX, nullptr);
		if ($nc(staxSource)->getXMLEventReader() != nullptr) {
			$var($XMLEventReader, xmlEventReader, staxSource->getXMLEventReader());
			$assign(staxevent2sax, $new($StAXEvent2SAX, xmlEventReader));
			staxevent2sax->setContentHandler(handler);
			staxevent2sax->parse();
			$nc(handler)->flushPending();
		} else if (staxSource->getXMLStreamReader() != nullptr) {
			$var($XMLStreamReader, xmlStreamReader, staxSource->getXMLStreamReader());
			$assign(staxStream2SAX, $new($StAXStream2SAX, xmlStreamReader));
			staxStream2SAX->setContentHandler(handler);
			staxStream2SAX->parse();
			$nc(handler)->flushPending();
		}
	} else if ($instanceOf($DOMSource, source)) {
		$var($DOMSource, domsrc, $cast($DOMSource, source));
		$$new($DOM2TO, $($nc(domsrc)->getNode()), handler)->parse();
	} else if ($instanceOf($XSLTCSource, source)) {
		$var($DOM, dom, $nc(($cast($XSLTCSource, source)))->getDOM(nullptr, this->_translet));
		$nc(($cast($SAXImpl, dom)))->copy(handler);
	} else {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_NO_SOURCE_ERR));
		$throwNew($TransformerException, $(err->toString()));
	}
}

void TransformerImpl::transform($Source* source$renamed, $SerializationHandler* handler, $String* encoding) {
	$useLocalCurrentObjectStackCache();
	$var($Source, source, source$renamed);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				bool var$4 = $instanceOf($StreamSource, source) && $nc(source)->getSystemId() == nullptr;
				bool var$3 = var$4 && $nc(($cast($StreamSource, source)))->getInputStream() == nullptr;
				bool var$2 = (var$3 && ($cast($StreamSource, source))->getReader() == nullptr);
				if (!var$2) {
					bool var$5 = $instanceOf($SAXSource, source) && $nc(($cast($SAXSource, source)))->getInputSource() == nullptr;
					var$2 = (var$5 && ($cast($SAXSource, source))->getXMLReader() == nullptr);
				}
				bool var$1 = var$2;
				if (var$1 || ($instanceOf($DOMSource, source) && $nc(($cast($DOMSource, source)))->getNode() == nullptr)) {
					bool supportCatalog = true;
					$var($DocumentBuilderFactory, builderF, $JdkXmlUtils::getDOMFactory(this->_overrideDefaultParser));
					try {
						$init($XMLConstants);
						$nc(builderF)->setFeature($XMLConstants::USE_CATALOG, this->_useCatalog);
					} catch ($ParserConfigurationException& e) {
						supportCatalog = false;
					}
					if (supportCatalog && this->_useCatalog) {
						$init($JdkXmlFeatures);
						$var($CatalogFeatures, cf, $cast($CatalogFeatures, $nc(this->_tfactory)->getAttribute($JdkXmlFeatures::CATALOG_FEATURES)));
						if (cf != nullptr) {
							{
								$var($CatalogFeatures$FeatureArray, arr$, $CatalogFeatures$Feature::values());
								int32_t len$ = $nc(arr$)->length;
								int32_t i$ = 0;
								for (; i$ < len$; ++i$) {
									$CatalogFeatures$Feature* f = arr$->get(i$);
									{
										$var($String, var$6, $nc(f)->getPropertyName());
										$nc(builderF)->setAttribute(var$6, $(cf->get(f)));
									}
								}
							}
						}
					}
					$var($DocumentBuilder, builder, $nc(builderF)->newDocumentBuilder());
					$var($String, systemID, $nc(source)->getSystemId());
					$assign(source, $new($DOMSource, $($nc(builder)->newDocument())));
					if (systemID != nullptr) {
						source->setSystemId(systemID);
					}
				}
				if (this->_isIdentity) {
					transformIdentity(source, handler);
				} else {
					$nc(this->_translet)->transform($(getDOM(source)), handler);
				}
			} catch ($TransletException& e) {
				if (this->_errorListener != nullptr) {
					postErrorToListener($(e->getMessage()));
				}
				$throwNew($TransformerException, static_cast<$Throwable*>(e));
			} catch ($RuntimeException& e) {
				if (this->_errorListener != nullptr) {
					postErrorToListener($(e->getMessage()));
				}
				$throwNew($TransformerException, static_cast<$Throwable*>(e));
			} catch ($Exception& e) {
				if (this->_errorListener != nullptr) {
					postErrorToListener($(e->getMessage()));
				}
				$throwNew($TransformerException, static_cast<$Throwable*>(e));
			}
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} /*finally*/ {
			$set(this, _dtmManager, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (this->_ostream != nullptr) {
		try {
			$nc(this->_ostream)->close();
		} catch ($IOException& e) {
		}
		$set(this, _ostream, nullptr);
	}
}

$ErrorListener* TransformerImpl::getErrorListener() {
	return this->_errorListener;
}

void TransformerImpl::setErrorListener($ErrorListener* listener) {
	$useLocalCurrentObjectStackCache();
	if (listener == nullptr) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::ERROR_LISTENER_NULL_ERR, $of("Transformer"_s)));
		$throwNew($IllegalArgumentException, $(err->toString()));
	}
	$set(this, _errorListener, listener);
	if (this->_translet != nullptr) {
		$nc(this->_translet)->setMessageHandler($$new($TransformerImpl$MessageHandler, this->_errorListener));
	}
}

void TransformerImpl::postErrorToListener($String* message) {
	try {
		$nc(this->_errorListener)->error($$new($TransformerException, message));
	} catch ($TransformerException& e) {
	}
}

void TransformerImpl::postWarningToListener($String* message) {
	try {
		$nc(this->_errorListener)->warning($$new($TransformerException, message));
	} catch ($TransformerException& e) {
	}
}

$Properties* TransformerImpl::getOutputProperties() {
	return $cast($Properties, $nc(this->_properties)->clone());
}

$String* TransformerImpl::getOutputProperty($String* name) {
	$useLocalCurrentObjectStackCache();
	$init($JdkProperty$ImplPropMap);
	if ($JdkProperty$ImplPropMap::XSLTCISSTANDALONE->is(name)) {
		return $cast($String, $nc(this->_xsltcIsStandalone)->getValue());
	}
	if (!validOutputProperty(name)) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_UNKNOWN_PROP_ERR, $of(name)));
		$throwNew($IllegalArgumentException, $(err->toString()));
	}
	return $nc(this->_properties)->getProperty(name);
}

void TransformerImpl::setOutputProperties($Properties* properties) {
	$useLocalCurrentObjectStackCache();
	if (properties != nullptr) {
		$var($Enumeration, names, properties->propertyNames());
		while ($nc(names)->hasMoreElements()) {
			$var($String, name, $cast($String, names->nextElement()));
			if (isDefaultProperty(name, properties)) {
				continue;
			}
			if (validOutputProperty(name)) {
				$nc(this->_properties)->setProperty(name, $(properties->getProperty(name)));
			} else {
				$init($ErrorMsg);
				$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_UNKNOWN_PROP_ERR, $of(name)));
				$throwNew($IllegalArgumentException, $(err->toString()));
			}
		}
	} else {
		$set(this, _properties, $cast($Properties, $nc(this->_propertiesClone)->clone()));
	}
}

void TransformerImpl::setOutputProperty($String* name, $String* value) {
	$useLocalCurrentObjectStackCache();
	if (!validOutputProperty(name)) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_UNKNOWN_PROP_ERR, $of(name)));
		$throwNew($IllegalArgumentException, $(err->toString()));
	}
	$init($JdkProperty$ImplPropMap);
	if ($JdkProperty$ImplPropMap::XSLTCISSTANDALONE->is(name)) {
		$init($JdkProperty$State);
		$nc(this->_xsltcIsStandalone)->setValue(name, value, $JdkProperty$State::APIPROPERTY);
	} else {
		$nc(this->_properties)->setProperty(name, value);
	}
}

void TransformerImpl::transferOutputProperties($AbstractTranslet* translet) {
	$useLocalCurrentObjectStackCache();
	if (this->_properties == nullptr) {
		return;
	}
	$var($Enumeration, names, $nc(this->_properties)->propertyNames());
	while ($nc(names)->hasMoreElements()) {
		$var($String, name, $cast($String, names->nextElement()));
		$var($String, value, $cast($String, $nc(this->_properties)->get(name)));
		if (value == nullptr) {
			continue;
		}
		$init($OutputKeys);
		if ($nc(name)->equals($OutputKeys::ENCODING)) {
			$set($nc(translet), _encoding, value);
		} else {
			if (name->equals($OutputKeys::METHOD)) {
				$set($nc(translet), _method, value);
			} else {
				if (name->equals($OutputKeys::DOCTYPE_PUBLIC)) {
					$set($nc(translet), _doctypePublic, value);
				} else {
					if (name->equals($OutputKeys::DOCTYPE_SYSTEM)) {
						$set($nc(translet), _doctypeSystem, value);
					} else {
						if (name->equals($OutputKeys::MEDIA_TYPE)) {
							$set($nc(translet), _mediaType, value);
						} else {
							if (name->equals($OutputKeys::STANDALONE)) {
								$set($nc(translet), _standalone, value);
							} else {
								if (name->equals($OutputKeys::VERSION)) {
									$set($nc(translet), _version, value);
								} else {
									if (name->equals($OutputKeys::OMIT_XML_DECLARATION)) {
										$nc(translet)->_omitHeader = (value != nullptr && $(value->toLowerCase())->equals("yes"_s));
									} else {
										if (name->equals($OutputKeys::INDENT)) {
											$nc(translet)->_indent = (value != nullptr && $(value->toLowerCase())->equals("yes"_s));
										} else {
											$init($OutputPropertiesFactory);
											if (name->equals($$str({$OutputPropertiesFactory::S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL, "indent-amount"_s}))) {
												if (value != nullptr) {
													$nc(translet)->_indentamount = $Integer::parseInt(value);
												}
											} else {
												if (name->equals($$str({$OutputPropertiesFactory::S_BUILTIN_EXTENSIONS_UNIVERSAL, "indent-amount"_s}))) {
													if (value != nullptr) {
														$nc(translet)->_indentamount = $Integer::parseInt(value);
													}
												} else {
													if (name->equals($OutputKeys::CDATA_SECTION_ELEMENTS)) {
														if (value != nullptr) {
															$set($nc(translet), _cdata, nullptr);
															$var($StringTokenizer, e, $new($StringTokenizer, value));
															while (e->hasMoreTokens()) {
																translet->addCdataElement($(e->nextToken()));
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if ($nc(($cast($String, $($nc(this->_xsltcIsStandalone)->getValue()))))->equals("yes"_s)) {
		$nc(translet)->_isStandalone = true;
	}
}

void TransformerImpl::transferOutputProperties($SerializationHandler* handler) {
	$useLocalCurrentObjectStackCache();
	if (this->_properties == nullptr) {
		return;
	}
	$var($String, doctypePublic, nullptr);
	$var($String, doctypeSystem, nullptr);
	$var($Enumeration, names, $nc(this->_properties)->propertyNames());
	while ($nc(names)->hasMoreElements()) {
		$var($String, name, $cast($String, names->nextElement()));
		$var($String, value, $cast($String, $nc(this->_properties)->get(name)));
		if (value == nullptr) {
			continue;
		}
		$init($OutputKeys);
		if ($nc(name)->equals($OutputKeys::DOCTYPE_PUBLIC)) {
			$assign(doctypePublic, value);
		} else {
			if (name->equals($OutputKeys::DOCTYPE_SYSTEM)) {
				$assign(doctypeSystem, value);
			} else {
				if (name->equals($OutputKeys::MEDIA_TYPE)) {
					$nc(handler)->setMediaType(value);
				} else {
					if (name->equals($OutputKeys::STANDALONE)) {
						$nc(handler)->setStandalone(value);
					} else {
						if (name->equals($OutputKeys::VERSION)) {
							$nc(handler)->setVersion(value);
						} else {
							if (name->equals($OutputKeys::OMIT_XML_DECLARATION)) {
								$nc(handler)->setOmitXMLDeclaration(value != nullptr && $(value->toLowerCase())->equals("yes"_s));
							} else {
								if (name->equals($OutputKeys::INDENT)) {
									$nc(handler)->setIndent(value != nullptr && $(value->toLowerCase())->equals("yes"_s));
								} else {
									$init($OutputPropertiesFactory);
									if (name->equals($$str({$OutputPropertiesFactory::S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL, "indent-amount"_s}))) {
										if (value != nullptr) {
											$nc(handler)->setIndentAmount($Integer::parseInt(value));
										}
									} else {
										if (name->equals($$str({$OutputPropertiesFactory::S_BUILTIN_EXTENSIONS_UNIVERSAL, "indent-amount"_s}))) {
											if (value != nullptr) {
												$nc(handler)->setIndentAmount($Integer::parseInt(value));
											}
										} else {
											if (name->equals($OutputKeys::CDATA_SECTION_ELEMENTS)) {
												if (value != nullptr) {
													$var($StringTokenizer, e, $new($StringTokenizer, value));
													$var($List, uriAndLocalNames, nullptr);
													while (e->hasMoreTokens()) {
														$var($String, token, e->nextToken());
														int32_t lastcolon = $nc(token)->lastIndexOf((int32_t)u':');
														$var($String, uri, nullptr);
														$var($String, localName, nullptr);
														if (lastcolon > 0) {
															$assign(uri, token->substring(0, lastcolon));
															$assign(localName, token->substring(lastcolon + 1));
														} else {
															$assign(uri, nullptr);
															$assign(localName, token);
														}
														if (uriAndLocalNames == nullptr) {
															$assign(uriAndLocalNames, $new($ArrayList));
														}
														$nc(uriAndLocalNames)->add(uri);
														uriAndLocalNames->add(localName);
													}
													$nc(handler)->setCdataSectionElements(uriAndLocalNames);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (doctypePublic != nullptr || doctypeSystem != nullptr) {
		$nc(handler)->setDoctype(doctypeSystem, doctypePublic);
	}
	if ($nc(($cast($String, $($nc(this->_xsltcIsStandalone)->getValue()))))->equals("yes"_s)) {
		$nc(handler)->setIsStandalone(true);
	}
}

$Properties* TransformerImpl::createOutputProperties($Properties* outputProperties) {
	$useLocalCurrentObjectStackCache();
	$var($Properties, defaults, $new($Properties));
	setDefaults(defaults, "xml"_s);
	$var($Properties, base, $new($Properties, defaults));
	if (outputProperties != nullptr) {
		$var($Enumeration, names, outputProperties->propertyNames());
		while ($nc(names)->hasMoreElements()) {
			$var($String, name, $cast($String, names->nextElement()));
			base->setProperty(name, $(outputProperties->getProperty(name)));
		}
	} else {
		$init($OutputKeys);
		base->setProperty($OutputKeys::ENCODING, $nc(this->_translet)->_encoding);
		if ($nc(this->_translet)->_method != nullptr) {
			base->setProperty($OutputKeys::METHOD, $nc(this->_translet)->_method);
		}
	}
	$init($OutputKeys);
	$var($String, method, base->getProperty($OutputKeys::METHOD));
	if (method != nullptr) {
		if (method->equals("html"_s)) {
			setDefaults(defaults, "html"_s);
		} else if (method->equals("text"_s)) {
			setDefaults(defaults, "text"_s);
		}
	}
	return base;
}

void TransformerImpl::setDefaults($Properties* props, $String* method) {
	$useLocalCurrentObjectStackCache();
	$var($Properties, method_props, $OutputPropertiesFactory::getDefaultMethodProperties(method));
	{
		$var($Enumeration, names, $nc(method_props)->propertyNames());
		while ($nc(names)->hasMoreElements()) {
			$var($String, name, $cast($String, names->nextElement()));
			$nc(props)->setProperty(name, $(method_props->getProperty(name)));
		}
	}
}

bool TransformerImpl::validOutputProperty($String* name) {
	$init($OutputKeys);
	bool var$10 = $nc(name)->equals($OutputKeys::ENCODING);
	bool var$9 = var$10 || $nc(name)->equals($OutputKeys::METHOD);
	bool var$8 = var$9 || $nc(name)->equals($OutputKeys::INDENT);
	bool var$7 = var$8 || $nc(name)->equals($OutputKeys::DOCTYPE_PUBLIC);
	bool var$6 = var$7 || $nc(name)->equals($OutputKeys::DOCTYPE_SYSTEM);
	bool var$5 = var$6 || $nc(name)->equals($OutputKeys::CDATA_SECTION_ELEMENTS);
	bool var$4 = var$5 || $nc(name)->equals($OutputKeys::MEDIA_TYPE);
	bool var$3 = var$4 || $nc(name)->equals($OutputKeys::OMIT_XML_DECLARATION);
	bool var$2 = var$3 || $nc(name)->equals($OutputKeys::STANDALONE);
	bool var$1 = var$2 || $nc(name)->equals($OutputKeys::VERSION);
	$init($JdkProperty$ImplPropMap);
	bool var$0 = var$1 || $JdkProperty$ImplPropMap::XSLTCISSTANDALONE->is(name);
	return (var$0 || $nc(name)->charAt(0) == u'{');
}

bool TransformerImpl::isDefaultProperty($String* name, $Properties* properties) {
	return ($nc(properties)->get(name) == nullptr);
}

void TransformerImpl::setParameter($String* name, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if (value == nullptr) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE, $of(name)));
		$throwNew($IllegalArgumentException, $(err->toString()));
	}
	if (this->_isIdentity) {
		if (this->_parameters == nullptr) {
			$set(this, _parameters, $new($HashMap));
		}
		$nc(this->_parameters)->put(name, value);
	} else {
		$nc(this->_translet)->addParameter(name, value);
	}
}

void TransformerImpl::clearParameters() {
	if (this->_isIdentity && this->_parameters != nullptr) {
		$nc(this->_parameters)->clear();
	} else {
		$nc(this->_translet)->clearParameters();
	}
}

$Object* TransformerImpl::getParameter($String* name) {
	if (this->_isIdentity) {
		return $of((this->_parameters != nullptr) ? $nc(this->_parameters)->get(name) : ($Object*)nullptr);
	} else {
		return $of($nc(this->_translet)->getParameter(name));
	}
}

$URIResolver* TransformerImpl::getURIResolver() {
	return this->_uriResolver;
}

void TransformerImpl::setURIResolver($URIResolver* resolver) {
	$set(this, _uriResolver, resolver);
}

$DOM* TransformerImpl::retrieveDocument($String* baseURI, $String* href$renamed, $Translet* translet) {
	$useLocalCurrentObjectStackCache();
	$var($String, href, href$renamed);
	try {
		if ($nc(href)->length() == 0) {
			$assign(href, baseURI);
		}
		$var($Source, resolvedSource, nullptr);
		if (this->_uriResolver != nullptr) {
			$assign(resolvedSource, $nc(this->_uriResolver)->resolve(href, baseURI));
		}
		$init($CatalogFeatures$Feature);
		if (resolvedSource == nullptr && this->_useCatalog && $nc(this->_catalogFeatures)->get($CatalogFeatures$Feature::FILES) != nullptr) {
			if (this->_catalogUriResolver == nullptr) {
				$set(this, _catalogUriResolver, $CatalogManager::catalogResolver(this->_catalogFeatures, $$new($URIArray, 0)));
			}
			$assign(resolvedSource, $nc(this->_catalogUriResolver)->resolve(href, baseURI));
		}
		if (resolvedSource == nullptr) {
			$var($StreamSource, streamSource, $new($StreamSource, $($SystemIDResolver::getAbsoluteURI(href, baseURI))));
			return getDOM(streamSource);
		}
		return getDOM(resolvedSource);
	} catch ($TransformerException& e) {
		if (this->_errorListener != nullptr) {
			postErrorToListener($$str({"File not found: "_s, $(e->getMessage())}));
		}
		return (nullptr);
	} catch ($CatalogException& e) {
		if (this->_errorListener != nullptr) {
			postErrorToListener($$str({"File not found: "_s, $(e->getMessage())}));
		}
		return (nullptr);
	}
	$shouldNotReachHere();
}

void TransformerImpl::reset() {
	$set(this, _method, nullptr);
	$set(this, _encoding, nullptr);
	$set(this, _sourceSystemId, nullptr);
	$set(this, _errorListener, this->_defaultListener);
	$set(this, _uriResolver, nullptr);
	$set(this, _dom, nullptr);
	$set(this, _parameters, nullptr);
	this->_indentNumber = -1;
	setOutputProperties(nullptr);
	$set(this, _tohFactory, nullptr);
	$set(this, _ostream, nullptr);
}

TransformerImpl::TransformerImpl() {
}

void clinit$TransformerImpl($Class* class$) {
	$assignStatic(TransformerImpl::LEXICAL_HANDLER_PROPERTY, "http://xml.org/sax/properties/lexical-handler"_s);
	$assignStatic(TransformerImpl::NAMESPACE_PREFIXES_FEATURE, "http://xml.org/sax/features/namespace-prefixes"_s);
}

$Class* TransformerImpl::load$($String* name, bool initialize) {
	$loadClass(TransformerImpl, name, initialize, &_TransformerImpl_ClassInfo_, clinit$TransformerImpl, allocate$TransformerImpl);
	return class$;
}

$Class* TransformerImpl::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com