#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl.h>

#include <com/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State.h>
#include <com/sun/org/apache/xalan/internal/utils/ObjectFactory.h>
#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityPropertyManager$Property.h>
#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SourceLoader.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/DOM2SAX.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesHandlerImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TrAXFilter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl$1.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl$PIParamWrapper.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerHandlerImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/Util.h>
#include <com/sun/org/apache/xml/internal/utils/StopParseException.h>
#include <com/sun/org/apache/xml/internal/utils/StylesheetPIHandler.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FilenameFilter.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Enum.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/SecurityManager.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipFile.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/catalog/CatalogException.h>
#include <javax/xml/catalog/CatalogFeatures$Builder.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <javax/xml/catalog/CatalogManager.h>
#include <javax/xml/catalog/CatalogResolver.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/Templates.h>
#include <javax/xml/transform/Transformer.h>
#include <javax/xml/transform/TransformerConfigurationException.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/transform/URIResolver.h>
#include <javax/xml/transform/dom/DOMResult.h>
#include <javax/xml/transform/dom/DOMSource.h>
#include <javax/xml/transform/sax/SAXResult.h>
#include <javax/xml/transform/sax/SAXSource.h>
#include <javax/xml/transform/sax/SAXTransformerFactory.h>
#include <javax/xml/transform/sax/TemplatesHandler.h>
#include <javax/xml/transform/sax/TransformerHandler.h>
#include <javax/xml/transform/stax/StAXResult.h>
#include <javax/xml/transform/stax/StAXSource.h>
#include <javax/xml/transform/stream/StreamResult.h>
#include <javax/xml/transform/stream/StreamSource.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkProperty$ImplPropMap.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <jdk/xml/internal/JdkProperty.h>
#include <jdk/xml/internal/JdkXmlFeatures$XmlFeature.h>
#include <jdk/xml/internal/JdkXmlFeatures.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jdk/xml/internal/TransformErrorListener.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/XMLFilter.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <org/xml/sax/helpers/XMLFilterImpl.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_DTD
#undef ACCESS_EXTERNAL_STYLESHEET
#undef APIPROPERTY
#undef AUTO_TRANSLET
#undef BYTEARRAY_AND_FILE_OUTPUT
#undef BYTEARRAY_AND_JAR_OUTPUT
#undef BYTEARRAY_OUTPUT
#undef CATALOG_DEFER
#undef CATALOG_EXCEPTION
#undef CATALOG_FEATURES
#undef CATALOG_FILES
#undef CATALOG_PREFER
#undef CATALOG_RESOLVE
#undef CDATACHUNKSIZE
#undef CDATA_CHUNK_SIZE_DEFAULT
#undef CLASS_NOT_FOUND_ERR
#undef DEBUG
#undef DEFAULT
#undef DEFAULT_TRANSLATE_PACKAGE
#undef DEFAULT_TRANSLET_NAME
#undef DEFER
#undef DESTINATION_DIRECTORY
#undef ENABLE_EXTENSION_FUNCTION
#undef ENABLE_INLINING
#undef ERROR_LISTENER_NULL_ERR
#undef EXTCLSLOADER
#undef EXTERNAL_ACCESS_DEFAULT
#undef EXTERNAL_ACCESS_DEFAULT_FSP
#undef FALSE
#undef FATAL
#undef FEATURE
#undef FEATURE_SECURE_PROCESSING
#undef FEATURE_XMLFILTER
#undef FILES
#undef FSP
#undef GENERATE_TRANSLET
#undef INDENT_NUMBER
#undef INVALID_URI_ERR
#undef JAR_NAME
#undef JAXP_COMPILE_ERR
#undef JAXP_GET_FEATURE_NULL_NAME
#undef JAXP_INVALID_ATTR_ERR
#undef JAXP_INVALID_ATTR_VALUE_ERR
#undef JAXP_SECUREPROCESSING_FEATURE
#undef JAXP_SET_FEATURE_NULL_NAME
#undef JAXP_UNSUPPORTED_FEATURE
#undef JDK_EXT_CLASSLOADER
#undef JDK_OVERRIDE_PARSER
#undef ORACLE_FEATURE_SERVICE_MECHANISM
#undef OVERRIDEPARSER
#undef PACKAGE_NAME
#undef PREFER
#undef RESOLVE
#undef RUNTIME_ERROR_KEY
#undef SECURITY_MANAGER
#undef TRANSFORM_WITH_JAR_STR
#undef TRANSFORM_WITH_TRANSLET_STR
#undef TRANSLET_NAME
#undef TRUE
#undef USE_CATALOG
#undef USE_CLASSPATH

using $FileArray = $Array<::java::io::File>;
using $URIArray = $Array<::java::net::URI>;
using $byteArray2 = $Array<int8_t, 2>;
using $FeaturePropertyBase$State = ::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State;
using $ObjectFactory = ::com::sun::org::apache::xalan::internal::utils::ObjectFactory;
using $XMLSecurityManager = ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xalan::internal::utils::XMLSecurityPropertyManager;
using $XMLSecurityPropertyManager$Property = ::com::sun::org::apache::xalan::internal::utils::XMLSecurityPropertyManager$Property;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SourceLoader = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SourceLoader;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $XSLTCDTMManager = ::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager;
using $DOM2SAX = ::com::sun::org::apache::xalan::internal::xsltc::trax::DOM2SAX;
using $TemplatesHandlerImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesHandlerImpl;
using $TemplatesImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl;
using $TrAXFilter = ::com::sun::org::apache::xalan::internal::xsltc::trax::TrAXFilter;
using $TransformerFactoryImpl$1 = ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl$1;
using $TransformerFactoryImpl$PIParamWrapper = ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl$PIParamWrapper;
using $TransformerHandlerImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerHandlerImpl;
using $TransformerImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerImpl;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::trax::Util;
using $StopParseException = ::com::sun::org::apache::xml::internal::utils::StopParseException;
using $StylesheetPIHandler = ::com::sun::org::apache::xml::internal::utils::StylesheetPIHandler;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FilenameFilter = ::java::io::FilenameFilter;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Properties = ::java::util::Properties;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;
using $XMLConstants = ::javax::xml::XMLConstants;
using $CatalogException = ::javax::xml::catalog::CatalogException;
using $CatalogFeatures = ::javax::xml::catalog::CatalogFeatures;
using $CatalogFeatures$Builder = ::javax::xml::catalog::CatalogFeatures$Builder;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $CatalogManager = ::javax::xml::catalog::CatalogManager;
using $CatalogResolver = ::javax::xml::catalog::CatalogResolver;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $Source = ::javax::xml::transform::Source;
using $Templates = ::javax::xml::transform::Templates;
using $Transformer = ::javax::xml::transform::Transformer;
using $TransformerConfigurationException = ::javax::xml::transform::TransformerConfigurationException;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $URIResolver = ::javax::xml::transform::URIResolver;
using $DOMResult = ::javax::xml::transform::dom::DOMResult;
using $DOMSource = ::javax::xml::transform::dom::DOMSource;
using $SAXResult = ::javax::xml::transform::sax::SAXResult;
using $SAXSource = ::javax::xml::transform::sax::SAXSource;
using $SAXTransformerFactory = ::javax::xml::transform::sax::SAXTransformerFactory;
using $TemplatesHandler = ::javax::xml::transform::sax::TemplatesHandler;
using $TransformerHandler = ::javax::xml::transform::sax::TransformerHandler;
using $StAXResult = ::javax::xml::transform::stax::StAXResult;
using $StAXSource = ::javax::xml::transform::stax::StAXSource;
using $StreamResult = ::javax::xml::transform::stream::StreamResult;
using $StreamSource = ::javax::xml::transform::stream::StreamSource;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkProperty = ::jdk::xml::internal::JdkProperty;
using $JdkProperty$ImplPropMap = ::jdk::xml::internal::JdkProperty$ImplPropMap;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;
using $JdkXmlFeatures = ::jdk::xml::internal::JdkXmlFeatures;
using $JdkXmlFeatures$XmlFeature = ::jdk::xml::internal::JdkXmlFeatures$XmlFeature;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $TransformErrorListener = ::jdk::xml::internal::TransformErrorListener;
using $Node = ::org::w3c::dom::Node;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;
using $XMLFilter = ::org::xml::sax::XMLFilter;
using $XMLReader = ::org::xml::sax::XMLReader;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;
using $XMLFilterImpl = ::org::xml::sax::helpers::XMLFilterImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _TransformerFactoryImpl_FieldInfo_[] = {
	{"TRANSLET_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TransformerFactoryImpl, TRANSLET_NAME)},
	{"DESTINATION_DIRECTORY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TransformerFactoryImpl, DESTINATION_DIRECTORY)},
	{"PACKAGE_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TransformerFactoryImpl, PACKAGE_NAME)},
	{"JAR_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TransformerFactoryImpl, JAR_NAME)},
	{"GENERATE_TRANSLET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TransformerFactoryImpl, GENERATE_TRANSLET)},
	{"AUTO_TRANSLET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TransformerFactoryImpl, AUTO_TRANSLET)},
	{"USE_CLASSPATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TransformerFactoryImpl, USE_CLASSPATH)},
	{"DEBUG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TransformerFactoryImpl, DEBUG)},
	{"ENABLE_INLINING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TransformerFactoryImpl, ENABLE_INLINING)},
	{"INDENT_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TransformerFactoryImpl, INDENT_NUMBER)},
	{"_defaultListener", "Ljavax/xml/transform/ErrorListener;", nullptr, $PRIVATE | $FINAL, $field(TransformerFactoryImpl, _defaultListener)},
	{"_errorListener", "Ljavax/xml/transform/ErrorListener;", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _errorListener)},
	{"_hasUserErrListener", "Z", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _hasUserErrListener)},
	{"_uriResolver", "Ljavax/xml/transform/URIResolver;", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _uriResolver)},
	{"DEFAULT_TRANSLET_NAME", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TransformerFactoryImpl, DEFAULT_TRANSLET_NAME)},
	{"_transletName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _transletName)},
	{"_destinationDirectory", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _destinationDirectory)},
	{"DEFAULT_TRANSLATE_PACKAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TransformerFactoryImpl, DEFAULT_TRANSLATE_PACKAGE)},
	{"_packageName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _packageName)},
	{"_jarFileName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _jarFileName)},
	{"_piParams", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/xml/transform/Source;Lcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl$PIParamWrapper;>;", $PRIVATE, $field(TransformerFactoryImpl, _piParams)},
	{"_debug", "Z", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _debug)},
	{"_enableInlining", "Z", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _enableInlining)},
	{"_generateTranslet", "Z", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _generateTranslet)},
	{"_autoTranslet", "Z", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _autoTranslet)},
	{"_useClasspath", "Z", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _useClasspath)},
	{"_indentNumber", "I", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _indentNumber)},
	{"_isNotSecureProcessing", "Z", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _isNotSecureProcessing)},
	{"_isSecureMode", "Z", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _isSecureMode)},
	{"_overrideDefaultParser", "Z", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _overrideDefaultParser)},
	{"_accessExternalStylesheet", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _accessExternalStylesheet)},
	{"_accessExternalDTD", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _accessExternalDTD)},
	{"_xmlSecurityPropertyMgr", "Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityPropertyManager;", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _xmlSecurityPropertyMgr)},
	{"_xmlSecurityManager", "Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityManager;", nullptr, $PRIVATE, $field(TransformerFactoryImpl, _xmlSecurityManager)},
	{"_xmlFeatures", "Ljdk/xml/internal/JdkXmlFeatures;", nullptr, $PRIVATE | $FINAL, $field(TransformerFactoryImpl, _xmlFeatures)},
	{"_extensionClassLoader", "Ljdk/xml/internal/JdkProperty;", "Ljdk/xml/internal/JdkProperty<Ljava/lang/ClassLoader;>;", $PRIVATE, $field(TransformerFactoryImpl, _extensionClassLoader)},
	{"_xsltcExtensionFunctions", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PRIVATE, $field(TransformerFactoryImpl, _xsltcExtensionFunctions)},
	{"_catalogUriResolver", "Ljavax/xml/catalog/CatalogResolver;", nullptr, 0, $field(TransformerFactoryImpl, _catalogUriResolver)},
	{"_catalogFeatures", "Ljavax/xml/catalog/CatalogFeatures;", nullptr, 0, $field(TransformerFactoryImpl, _catalogFeatures)},
	{"cfBuilder", "Ljavax/xml/catalog/CatalogFeatures$Builder;", nullptr, 0, $field(TransformerFactoryImpl, cfBuilder)},
	{"_catalogFiles", "Ljava/lang/String;", nullptr, 0, $field(TransformerFactoryImpl, _catalogFiles)},
	{"_catalogDefer", "Ljava/lang/String;", nullptr, 0, $field(TransformerFactoryImpl, _catalogDefer)},
	{"_catalogPrefer", "Ljava/lang/String;", nullptr, 0, $field(TransformerFactoryImpl, _catalogPrefer)},
	{"_catalogResolve", "Ljava/lang/String;", nullptr, 0, $field(TransformerFactoryImpl, _catalogResolve)},
	{"_cdataChunkSize", "I", nullptr, 0, $field(TransformerFactoryImpl, _cdataChunkSize)},
	{}
};

$MethodInfo _TransformerFactoryImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(TransformerFactoryImpl, init$, void)},
	{"buildCatalogFeatures", "()Ljavax/xml/catalog/CatalogFeatures;", nullptr, $PRIVATE, $method(TransformerFactoryImpl, buildCatalogFeatures, $CatalogFeatures*)},
	{"createNewDTMManagerInstance", "()Lcom/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager;", nullptr, $PROTECTED | $FINAL, $method(TransformerFactoryImpl, createNewDTMManagerInstance, $XSLTCDTMManager*)},
	{"getAssociatedStylesheet", "(Ljavax/xml/transform/Source;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, getAssociatedStylesheet, $Source*, $Source*, $String*, $String*, $String*), "javax.xml.transform.TransformerConfigurationException"},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, getAttribute, $Object*, $String*), "java.lang.IllegalArgumentException"},
	{"getBytecodesFromClasses", "(Ljavax/xml/transform/Source;Ljava/lang/String;)[[B", nullptr, $PRIVATE, $method(TransformerFactoryImpl, getBytecodesFromClasses, $byteArray2*, $Source*, $String*)},
	{"getBytecodesFromJar", "(Ljavax/xml/transform/Source;Ljava/lang/String;)[[B", nullptr, $PRIVATE, $method(TransformerFactoryImpl, getBytecodesFromJar, $byteArray2*, $Source*, $String*)},
	{"getErrorListener", "()Ljavax/xml/transform/ErrorListener;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, getErrorListener, $ErrorListener*)},
	{"getExternalExtensionsMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PUBLIC, $virtualMethod(TransformerFactoryImpl, getExternalExtensionsMap, $Map*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, getFeature, bool, $String*)},
	{"getJdkXmlFeatures", "()Ljdk/xml/internal/JdkXmlFeatures;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, getJdkXmlFeatures, $JdkXmlFeatures*)},
	{"getPackageName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(TransformerFactoryImpl, getPackageName, $String*)},
	{"getStylesheetFileName", "(Ljavax/xml/transform/Source;)Ljava/lang/String;", nullptr, $PRIVATE, $method(TransformerFactoryImpl, getStylesheetFileName, $String*, $Source*)},
	{"getTransletBaseName", "(Ljavax/xml/transform/Source;)Ljava/lang/String;", nullptr, $PRIVATE, $method(TransformerFactoryImpl, getTransletBaseName, $String*, $Source*)},
	{"getURIResolver", "()Ljavax/xml/transform/URIResolver;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, getURIResolver, $URIResolver*)},
	{"loadSource", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, loadSource, $InputSource*, $String*, $String*, $XSLTC*)},
	{"newTemplates", "(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Templates;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, newTemplates, $Templates*, $Source*), "javax.xml.transform.TransformerConfigurationException"},
	{"newTemplatesHandler", "()Ljavax/xml/transform/sax/TemplatesHandler;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, newTemplatesHandler, $TemplatesHandler*), "javax.xml.transform.TransformerConfigurationException"},
	{"newTransformer", "()Ljavax/xml/transform/Transformer;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, newTransformer, $Transformer*), "javax.xml.transform.TransformerConfigurationException"},
	{"newTransformer", "(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Transformer;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, newTransformer, $Transformer*, $Source*), "javax.xml.transform.TransformerConfigurationException"},
	{"newTransformerHandler", "()Ljavax/xml/transform/sax/TransformerHandler;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, newTransformerHandler, $TransformerHandler*), "javax.xml.transform.TransformerConfigurationException"},
	{"newTransformerHandler", "(Ljavax/xml/transform/Source;)Ljavax/xml/transform/sax/TransformerHandler;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, newTransformerHandler, $TransformerHandler*, $Source*), "javax.xml.transform.TransformerConfigurationException"},
	{"newTransformerHandler", "(Ljavax/xml/transform/Templates;)Ljavax/xml/transform/sax/TransformerHandler;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, newTransformerHandler, $TransformerHandler*, $Templates*), "javax.xml.transform.TransformerConfigurationException"},
	{"newXMLFilter", "(Ljavax/xml/transform/Source;)Lorg/xml/sax/XMLFilter;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, newXMLFilter, $XMLFilter*, $Source*), "javax.xml.transform.TransformerConfigurationException"},
	{"newXMLFilter", "(Ljavax/xml/transform/Templates;)Lorg/xml/sax/XMLFilter;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, newXMLFilter, $XMLFilter*, $Templates*), "javax.xml.transform.TransformerConfigurationException"},
	{"overrideDefaultParser", "()Z", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, overrideDefaultParser, bool)},
	{"passErrorsToListener", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg;>;)V", $PRIVATE, $method(TransformerFactoryImpl, passErrorsToListener, void, $List*)},
	{"passWarningsToListener", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg;>;)V", $PRIVATE, $method(TransformerFactoryImpl, passWarningsToListener, void, $List*), "javax.xml.transform.TransformerException"},
	{"readFromInputStream", "([BLjava/io/InputStream;I)V", nullptr, $PRIVATE, $method(TransformerFactoryImpl, readFromInputStream, void, $bytes*, $InputStream*, int32_t), "java.io.IOException"},
	{"resetTransientAttributes", "()V", nullptr, $PRIVATE, $method(TransformerFactoryImpl, resetTransientAttributes, void)},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, setAttribute, void, $String*, Object$*), "java.lang.IllegalArgumentException"},
	{"setErrorListener", "(Ljavax/xml/transform/ErrorListener;)V", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, setErrorListener, void, $ErrorListener*), "java.lang.IllegalArgumentException"},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, setFeature, void, $String*, bool), "javax.xml.transform.TransformerConfigurationException"},
	{"setURIResolver", "(Ljavax/xml/transform/URIResolver;)V", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl, setURIResolver, void, $URIResolver*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransformerFactoryImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl$PIParamWrapper", "com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl", "PIParamWrapper", $PRIVATE | $STATIC},
	{"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TransformerFactoryImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl",
	"javax.xml.transform.sax.SAXTransformerFactory",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.SourceLoader",
	_TransformerFactoryImpl_FieldInfo_,
	_TransformerFactoryImpl_MethodInfo_,
	nullptr,
	nullptr,
	_TransformerFactoryImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl$PIParamWrapper,com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl$1"
};

$Object* allocate$TransformerFactoryImpl($Class* clazz) {
	return $of($alloc(TransformerFactoryImpl));
}

int32_t TransformerFactoryImpl::hashCode() {
	 return this->$SAXTransformerFactory::hashCode();
}

bool TransformerFactoryImpl::equals(Object$* arg0) {
	 return this->$SAXTransformerFactory::equals(arg0);
}

$Object* TransformerFactoryImpl::clone() {
	 return this->$SAXTransformerFactory::clone();
}

$String* TransformerFactoryImpl::toString() {
	 return this->$SAXTransformerFactory::toString();
}

void TransformerFactoryImpl::finalize() {
	this->$SAXTransformerFactory::finalize();
}

$String* TransformerFactoryImpl::TRANSLET_NAME = nullptr;
$String* TransformerFactoryImpl::DESTINATION_DIRECTORY = nullptr;
$String* TransformerFactoryImpl::PACKAGE_NAME = nullptr;
$String* TransformerFactoryImpl::JAR_NAME = nullptr;
$String* TransformerFactoryImpl::GENERATE_TRANSLET = nullptr;
$String* TransformerFactoryImpl::AUTO_TRANSLET = nullptr;
$String* TransformerFactoryImpl::USE_CLASSPATH = nullptr;
$String* TransformerFactoryImpl::DEBUG = nullptr;
$String* TransformerFactoryImpl::ENABLE_INLINING = nullptr;
$String* TransformerFactoryImpl::INDENT_NUMBER = nullptr;
$String* TransformerFactoryImpl::DEFAULT_TRANSLET_NAME = nullptr;
$String* TransformerFactoryImpl::DEFAULT_TRANSLATE_PACKAGE = nullptr;

void TransformerFactoryImpl::init$() {
	$SAXTransformerFactory::init$();
	$set(this, _defaultListener, $new($TransformErrorListener));
	$set(this, _errorListener, this->_defaultListener);
	$set(this, _uriResolver, nullptr);
	$set(this, _transletName, TransformerFactoryImpl::DEFAULT_TRANSLET_NAME);
	$set(this, _destinationDirectory, nullptr);
	$set(this, _packageName, TransformerFactoryImpl::DEFAULT_TRANSLATE_PACKAGE);
	$set(this, _jarFileName, nullptr);
	$set(this, _piParams, nullptr);
	this->_debug = false;
	this->_enableInlining = false;
	this->_generateTranslet = false;
	this->_autoTranslet = false;
	this->_useClasspath = false;
	this->_indentNumber = -1;
	this->_isNotSecureProcessing = true;
	this->_isSecureMode = false;
	$init($JdkConstants);
	$set(this, _accessExternalStylesheet, $JdkConstants::EXTERNAL_ACCESS_DEFAULT);
	$set(this, _accessExternalDTD, $JdkConstants::EXTERNAL_ACCESS_DEFAULT);
	$set(this, _extensionClassLoader, nullptr);
	$set(this, cfBuilder, $CatalogFeatures::builder());
	$set(this, _catalogFiles, nullptr);
	$set(this, _catalogDefer, nullptr);
	$set(this, _catalogPrefer, nullptr);
	$set(this, _catalogResolve, nullptr);
	this->_cdataChunkSize = $JdkConstants::CDATA_CHUNK_SIZE_DEFAULT;
	if ($System::getSecurityManager() != nullptr) {
		this->_isSecureMode = true;
		this->_isNotSecureProcessing = false;
	}
	$set(this, _xmlFeatures, $new($JdkXmlFeatures, !this->_isNotSecureProcessing));
	$init($JdkXmlFeatures$XmlFeature);
	this->_overrideDefaultParser = $nc(this->_xmlFeatures)->getFeature($JdkXmlFeatures$XmlFeature::JDK_OVERRIDE_PARSER);
	$set(this, _xmlSecurityPropertyMgr, $new($XMLSecurityPropertyManager));
	$init($XMLSecurityPropertyManager$Property);
	$set(this, _accessExternalDTD, $nc(this->_xmlSecurityPropertyMgr)->getValue(static_cast<$Enum*>($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD)));
	$set(this, _accessExternalStylesheet, $nc(this->_xmlSecurityPropertyMgr)->getValue(static_cast<$Enum*>($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_STYLESHEET)));
	$set(this, _xmlSecurityManager, $new($XMLSecurityManager, true));
	$set(this, _xsltcExtensionFunctions, nullptr);
	$init($JdkProperty$ImplPropMap);
	$init($JdkProperty$State);
	$set(this, _extensionClassLoader, $new($JdkProperty, $JdkProperty$ImplPropMap::EXTCLSLOADER, nullptr, $JdkProperty$State::DEFAULT));
}

$Map* TransformerFactoryImpl::getExternalExtensionsMap() {
	return this->_xsltcExtensionFunctions;
}

void TransformerFactoryImpl::setErrorListener($ErrorListener* listener) {
	$useLocalCurrentObjectStackCache();
	if (listener == nullptr) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::ERROR_LISTENER_NULL_ERR, $of("TransformerFactory"_s)));
		$throwNew($IllegalArgumentException, $(err->toString()));
	}
	this->_hasUserErrListener = true;
	$set(this, _errorListener, listener);
}

$ErrorListener* TransformerFactoryImpl::getErrorListener() {
	return this->_errorListener;
}

$String* TransformerFactoryImpl::getPackageName() {
	return this->_packageName;
}

$Object* TransformerFactoryImpl::getAttribute($String* name) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->equals(TransformerFactoryImpl::TRANSLET_NAME)) {
		return $of(this->_transletName);
	} else if (name->equals(TransformerFactoryImpl::GENERATE_TRANSLET)) {
		return $of($Boolean::valueOf(this->_generateTranslet));
	} else if (name->equals(TransformerFactoryImpl::AUTO_TRANSLET)) {
		return $of($Boolean::valueOf(this->_autoTranslet));
	} else if (name->equals(TransformerFactoryImpl::ENABLE_INLINING)) {
		if (this->_enableInlining) {
			$init($Boolean);
			return $of($Boolean::TRUE);
		} else {
			$init($Boolean);
			return $of($Boolean::FALSE);
		}
	} else {
		$init($JdkConstants);
		if (name->equals($JdkConstants::SECURITY_MANAGER)) {
			return $of(this->_xmlSecurityManager);
		} else {
			$init($JdkProperty$ImplPropMap);
			if ($JdkProperty$ImplPropMap::EXTCLSLOADER->is(name)) {
				return $of((this->_extensionClassLoader == nullptr) ? ($Object*)nullptr : $nc(this->_extensionClassLoader)->getValue());
			} else {
				$init($JdkXmlUtils);
				if ($nc($JdkXmlUtils::CATALOG_FILES)->equals(name)) {
					return $of(this->_catalogFiles);
				} else {
					if ($nc($JdkXmlUtils::CATALOG_DEFER)->equals(name)) {
						return $of(this->_catalogDefer);
					} else {
						if ($nc($JdkXmlUtils::CATALOG_PREFER)->equals(name)) {
							return $of(this->_catalogPrefer);
						} else {
							if ($nc($JdkXmlUtils::CATALOG_RESOLVE)->equals(name)) {
								return $of(this->_catalogResolve);
							} else {
								$init($JdkXmlFeatures);
								if ($nc($JdkXmlFeatures::CATALOG_FEATURES)->equals(name)) {
									return $of(buildCatalogFeatures());
								} else {
									if ($JdkProperty$ImplPropMap::CDATACHUNKSIZE->is(name)) {
										return $of($Integer::valueOf(this->_cdataChunkSize));
									}
								}
							}
						}
					}
				}
			}
		}
	}
	$var($String, propertyValue, (this->_xmlSecurityManager != nullptr) ? $nc(this->_xmlSecurityManager)->getLimitAsString(name) : ($String*)nullptr);
	if (propertyValue != nullptr) {
		return $of(propertyValue);
	} else {
		$assign(propertyValue, (this->_xmlSecurityPropertyMgr != nullptr) ? $nc(this->_xmlSecurityPropertyMgr)->getValue(name) : ($String*)nullptr);
		if (propertyValue != nullptr) {
			return $of(propertyValue);
		}
	}
	$init($ErrorMsg);
	$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_INVALID_ATTR_ERR, $of(name)));
	$throwNew($IllegalArgumentException, $(err->toString()));
}

void TransformerFactoryImpl::setAttribute($String* name, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->equals(TransformerFactoryImpl::TRANSLET_NAME) && $instanceOf($String, value)) {
		$set(this, _transletName, $cast($String, value));
		return;
	} else if (name->equals(TransformerFactoryImpl::DESTINATION_DIRECTORY) && $instanceOf($String, value)) {
		$set(this, _destinationDirectory, $cast($String, value));
		return;
	} else if (name->equals(TransformerFactoryImpl::PACKAGE_NAME) && $instanceOf($String, value)) {
		$set(this, _packageName, $cast($String, value));
		return;
	} else if (name->equals(TransformerFactoryImpl::JAR_NAME) && $instanceOf($String, value)) {
		$set(this, _jarFileName, $cast($String, value));
		return;
	} else if (name->equals(TransformerFactoryImpl::GENERATE_TRANSLET)) {
		if ($instanceOf($Boolean, value)) {
			this->_generateTranslet = $nc(($cast($Boolean, value)))->booleanValue();
			return;
		} else if ($instanceOf($String, value)) {
			this->_generateTranslet = $nc(($cast($String, value)))->equalsIgnoreCase("true"_s);
			return;
		}
	} else if (name->equals(TransformerFactoryImpl::AUTO_TRANSLET)) {
		if ($instanceOf($Boolean, value)) {
			this->_autoTranslet = $nc(($cast($Boolean, value)))->booleanValue();
			return;
		} else if ($instanceOf($String, value)) {
			this->_autoTranslet = $nc(($cast($String, value)))->equalsIgnoreCase("true"_s);
			return;
		}
	} else if (name->equals(TransformerFactoryImpl::USE_CLASSPATH)) {
		if ($instanceOf($Boolean, value)) {
			this->_useClasspath = $nc(($cast($Boolean, value)))->booleanValue();
			return;
		} else if ($instanceOf($String, value)) {
			this->_useClasspath = $nc(($cast($String, value)))->equalsIgnoreCase("true"_s);
			return;
		}
	} else if (name->equals(TransformerFactoryImpl::DEBUG)) {
		if ($instanceOf($Boolean, value)) {
			this->_debug = $nc(($cast($Boolean, value)))->booleanValue();
			return;
		} else if ($instanceOf($String, value)) {
			this->_debug = $nc(($cast($String, value)))->equalsIgnoreCase("true"_s);
			return;
		}
	} else if (name->equals(TransformerFactoryImpl::ENABLE_INLINING)) {
		if ($instanceOf($Boolean, value)) {
			this->_enableInlining = $nc(($cast($Boolean, value)))->booleanValue();
			return;
		} else if ($instanceOf($String, value)) {
			this->_enableInlining = $nc(($cast($String, value)))->equalsIgnoreCase("true"_s);
			return;
		}
	} else if (name->equals(TransformerFactoryImpl::INDENT_NUMBER)) {
		if ($instanceOf($String, value)) {
			try {
				this->_indentNumber = $Integer::parseInt($cast($String, value));
				return;
			} catch ($NumberFormatException& e) {
			}
		} else if ($instanceOf($Integer, value)) {
			this->_indentNumber = $nc(($cast($Integer, value)))->intValue();
			return;
		}
	} else {
		$init($JdkProperty$ImplPropMap);
		if ($JdkProperty$ImplPropMap::EXTCLSLOADER->is(name)) {
			if ($instanceOf($ClassLoader, value)) {
				$init($JdkProperty$State);
				$nc(this->_extensionClassLoader)->setValue(name, $cast($ClassLoader, value), $JdkProperty$State::APIPROPERTY);
				return;
			} else {
				$init($ErrorMsg);
				$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR, $of("Extension Functions ClassLoader"_s)));
				$throwNew($IllegalArgumentException, $(err->toString()));
			}
		} else {
			$init($JdkXmlUtils);
			if ($nc($JdkXmlUtils::CATALOG_FILES)->equals(name)) {
				$set(this, _catalogFiles, $cast($String, value));
				$init($CatalogFeatures$Feature);
				$set(this, cfBuilder, $nc($($CatalogFeatures::builder()))->with($CatalogFeatures$Feature::FILES, this->_catalogFiles));
				return;
			} else {
				if ($nc($JdkXmlUtils::CATALOG_DEFER)->equals(name)) {
					$set(this, _catalogDefer, $cast($String, value));
					$init($CatalogFeatures$Feature);
					$set(this, cfBuilder, $nc($($CatalogFeatures::builder()))->with($CatalogFeatures$Feature::DEFER, this->_catalogDefer));
					return;
				} else {
					if ($nc($JdkXmlUtils::CATALOG_PREFER)->equals(name)) {
						$set(this, _catalogPrefer, $cast($String, value));
						$init($CatalogFeatures$Feature);
						$set(this, cfBuilder, $nc($($CatalogFeatures::builder()))->with($CatalogFeatures$Feature::PREFER, this->_catalogPrefer));
						return;
					} else {
						if ($nc($JdkXmlUtils::CATALOG_RESOLVE)->equals(name)) {
							$set(this, _catalogResolve, $cast($String, value));
							$init($CatalogFeatures$Feature);
							$set(this, cfBuilder, $nc($($CatalogFeatures::builder()))->with($CatalogFeatures$Feature::RESOLVE, this->_catalogResolve));
							return;
						} else {
							if ($JdkProperty$ImplPropMap::CDATACHUNKSIZE->is(name)) {
								this->_cdataChunkSize = $JdkXmlUtils::getValue(value, this->_cdataChunkSize);
								return;
							}
						}
					}
				}
			}
		}
	}
	$init($JdkProperty$State);
	if (this->_xmlSecurityManager != nullptr && $nc(this->_xmlSecurityManager)->setLimit(name, $JdkProperty$State::APIPROPERTY, value)) {
		return;
	}
	$init($FeaturePropertyBase$State);
	if (this->_xmlSecurityPropertyMgr != nullptr && $nc(this->_xmlSecurityPropertyMgr)->setValue(name, $FeaturePropertyBase$State::APIPROPERTY, value)) {
		$init($XMLSecurityPropertyManager$Property);
		$set(this, _accessExternalDTD, $nc(this->_xmlSecurityPropertyMgr)->getValue(static_cast<$Enum*>($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD)));
		$set(this, _accessExternalStylesheet, $nc(this->_xmlSecurityPropertyMgr)->getValue(static_cast<$Enum*>($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_STYLESHEET)));
		return;
	}
	$init($ErrorMsg);
	$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_INVALID_ATTR_ERR, $of(name)));
	$throwNew($IllegalArgumentException, $(err->toString()));
}

void TransformerFactoryImpl::setFeature($String* name, bool value) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_SET_FEATURE_NULL_NAME));
		$throwNew($NullPointerException, $(err->toString()));
	} else {
		$init($XMLConstants);
		if ($nc(name)->equals($XMLConstants::FEATURE_SECURE_PROCESSING)) {
			if ((this->_isSecureMode) && (!value)) {
				$init($ErrorMsg);
				$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_SECUREPROCESSING_FEATURE));
				$throwNew($TransformerConfigurationException, $(err->toString()));
			}
			this->_isNotSecureProcessing = !value;
			$nc(this->_xmlSecurityManager)->setSecureProcessing(value);
			if (value) {
				$init($XMLSecurityPropertyManager$Property);
				$init($FeaturePropertyBase$State);
				$init($JdkConstants);
				$nc(this->_xmlSecurityPropertyMgr)->setValue(static_cast<$Enum*>($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD), $FeaturePropertyBase$State::FSP, $JdkConstants::EXTERNAL_ACCESS_DEFAULT_FSP);
				$nc(this->_xmlSecurityPropertyMgr)->setValue(static_cast<$Enum*>($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_STYLESHEET), $FeaturePropertyBase$State::FSP, $JdkConstants::EXTERNAL_ACCESS_DEFAULT_FSP);
				$set(this, _accessExternalDTD, $nc(this->_xmlSecurityPropertyMgr)->getValue(static_cast<$Enum*>($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD)));
				$set(this, _accessExternalStylesheet, $nc(this->_xmlSecurityPropertyMgr)->getValue(static_cast<$Enum*>($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_STYLESHEET)));
			}
			if (value && this->_xmlFeatures != nullptr) {
				$init($JdkXmlFeatures$XmlFeature);
				$init($JdkProperty$State);
				$nc(this->_xmlFeatures)->setFeature($JdkXmlFeatures$XmlFeature::ENABLE_EXTENSION_FUNCTION, $JdkProperty$State::FSP, false);
			}
		} else {
			$init($JdkConstants);
			if (name->equals($JdkConstants::ORACLE_FEATURE_SERVICE_MECHANISM)) {
				if (this->_isSecureMode) {
					return;
				}
			}
			$init($JdkProperty$State);
			if (this->_xmlFeatures != nullptr && $nc(this->_xmlFeatures)->setFeature(name, $JdkProperty$State::APIPROPERTY, $($of($Boolean::valueOf(value))))) {
				$init($JdkProperty$ImplPropMap);
				if ($JdkProperty$ImplPropMap::OVERRIDEPARSER->is(name)) {
					$init($JdkXmlFeatures$XmlFeature);
					this->_overrideDefaultParser = $nc(this->_xmlFeatures)->getFeature($JdkXmlFeatures$XmlFeature::JDK_OVERRIDE_PARSER);
				}
				return;
			}
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_UNSUPPORTED_FEATURE, $of(name)));
			$throwNew($TransformerConfigurationException, $(err->toString()));
		}
	}
}

bool TransformerFactoryImpl::getFeature($String* name) {
	$useLocalCurrentObjectStackCache();
	$init($DOMSource);
	$init($DOMResult);
	$init($SAXSource);
	$init($SAXResult);
	$init($StAXSource);
	$init($StAXResult);
	$init($StreamSource);
	$init($StreamResult);
	$init($SAXTransformerFactory);
	$init($JdkConstants);
	$var($StringArray, features, $new($StringArray, {
		$DOMSource::FEATURE,
		$DOMResult::FEATURE,
		$SAXSource::FEATURE,
		$SAXResult::FEATURE,
		$StAXSource::FEATURE,
		$StAXResult::FEATURE,
		$StreamSource::FEATURE,
		$StreamResult::FEATURE,
		$SAXTransformerFactory::FEATURE,
		$SAXTransformerFactory::FEATURE_XMLFILTER,
		$JdkConstants::ORACLE_FEATURE_SERVICE_MECHANISM
	}));
	if (name == nullptr) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_GET_FEATURE_NULL_NAME));
		$throwNew($NullPointerException, $(err->toString()));
	}
	for (int32_t i = 0; i < features->length; ++i) {
		if ($nc(name)->equals(features->get(i))) {
			return true;
		}
	}
	$init($XMLConstants);
	if ($nc(name)->equals($XMLConstants::FEATURE_SECURE_PROCESSING)) {
		return !this->_isNotSecureProcessing;
	}
	int32_t index = $nc(this->_xmlFeatures)->getIndex(name);
	if (index > -1) {
		return $nc(this->_xmlFeatures)->getFeature(index);
	}
	return false;
}

bool TransformerFactoryImpl::overrideDefaultParser() {
	return this->_overrideDefaultParser;
}

$JdkXmlFeatures* TransformerFactoryImpl::getJdkXmlFeatures() {
	return this->_xmlFeatures;
}

$URIResolver* TransformerFactoryImpl::getURIResolver() {
	return this->_uriResolver;
}

void TransformerFactoryImpl::setURIResolver($URIResolver* resolver) {
	$set(this, _uriResolver, resolver);
}

$Source* TransformerFactoryImpl::getAssociatedStylesheet($Source* source, $String* media, $String* title, $String* charset) {
	$useLocalCurrentObjectStackCache();
	$var($String, baseId, nullptr);
	$var($XMLReader, reader, nullptr);
	$var($InputSource, isource, nullptr);
	$var($StylesheetPIHandler, _stylesheetPIHandler, $new($StylesheetPIHandler, nullptr, media, title, charset));
	try {
		if ($instanceOf($DOMSource, source)) {
			$var($DOMSource, domsrc, $cast($DOMSource, source));
			$assign(baseId, $nc(domsrc)->getSystemId());
			$var($Node, node, domsrc->getNode());
			$var($DOM2SAX, dom2sax, $new($DOM2SAX, node));
			_stylesheetPIHandler->setBaseId(baseId);
			dom2sax->setContentHandler(_stylesheetPIHandler);
			dom2sax->parse();
		} else {
			if ($instanceOf($SAXSource, source)) {
				$assign(reader, $nc(($cast($SAXSource, source)))->getXMLReader());
			}
			$assign(isource, $SAXSource::sourceToInputSource(source));
			$assign(baseId, $nc(isource)->getSystemId());
			if (reader == nullptr) {
				$assign(reader, $JdkXmlUtils::getXMLReader(this->_overrideDefaultParser, !this->_isNotSecureProcessing));
			}
			_stylesheetPIHandler->setBaseId(baseId);
			$nc(reader)->setContentHandler(_stylesheetPIHandler);
			reader->parse(isource);
		}
		if (this->_uriResolver != nullptr) {
			_stylesheetPIHandler->setURIResolver(this->_uriResolver);
		}
	} catch ($StopParseException& e) {
	} catch ($SAXException& e) {
		$throwNew($TransformerConfigurationException, "getAssociatedStylesheets failed"_s, static_cast<$Throwable*>(e));
	} catch ($IOException& e) {
		$throwNew($TransformerConfigurationException, "getAssociatedStylesheets failed"_s, static_cast<$Throwable*>(e));
	}
	return _stylesheetPIHandler->getAssociatedStylesheet();
}

$Transformer* TransformerFactoryImpl::newTransformer() {
	$useLocalCurrentObjectStackCache();
	buildCatalogFeatures();
	$var($TransformerImpl, result, $new($TransformerImpl, $$new($Properties), this->_indentNumber, this));
	if (this->_uriResolver != nullptr) {
		result->setURIResolver(this->_uriResolver);
	}
	if (!this->_isNotSecureProcessing) {
		result->setSecureProcessing(true);
	}
	return result;
}

$Transformer* TransformerFactoryImpl::newTransformer($Source* source) {
	$useLocalCurrentObjectStackCache();
	$var($Templates, templates, newTemplates(source));
	$var($Transformer, transformer, $nc(templates)->newTransformer());
	if (this->_uriResolver != nullptr) {
		$nc(transformer)->setURIResolver(this->_uriResolver);
	}
	return (transformer);
}

void TransformerFactoryImpl::passWarningsToListener($List* messages) {
	$useLocalCurrentObjectStackCache();
	if (this->_errorListener == nullptr || messages == nullptr) {
		return;
	}
	int32_t count = $nc(messages)->size();
	for (int32_t pos = 0; pos < count; ++pos) {
		$var($ErrorMsg, msg, $cast($ErrorMsg, messages->get(pos)));
		if ($nc(msg)->isWarningError()) {
			$nc(this->_errorListener)->error($$new($TransformerConfigurationException, $(msg->toString())));
		} else {
			$nc(this->_errorListener)->warning($$new($TransformerConfigurationException, $(msg->toString())));
		}
	}
}

void TransformerFactoryImpl::passErrorsToListener($List* messages) {
	$useLocalCurrentObjectStackCache();
	try {
		if (this->_errorListener == nullptr || messages == nullptr) {
			return;
		}
		int32_t count = $nc(messages)->size();
		for (int32_t pos = 0; pos < count; ++pos) {
			$var($String, message, $nc(($cast($ErrorMsg, $(messages->get(pos)))))->toString());
			$nc(this->_errorListener)->error($$new($TransformerException, message));
		}
	} catch ($TransformerException& e) {
	}
}

$Templates* TransformerFactoryImpl::newTemplates($Source* source) {
	$useLocalCurrentObjectStackCache();
	$var($TemplatesImpl, templates, nullptr);
	if (this->_useClasspath) {
		$var($String, transletName, getTransletBaseName(source));
		if (this->_packageName != nullptr) {
			$assign(transletName, $str({this->_packageName, "."_s, transletName}));
		}
		try {
			$Class* clazz = $ObjectFactory::findProviderClass(transletName, true);
			resetTransientAttributes();
			$assign(templates, $new($TemplatesImpl, $$new($ClassArray, {clazz}), transletName, ($Properties*)nullptr, this->_indentNumber, this));
			if (this->_uriResolver != nullptr) {
				templates->setURIResolver(this->_uriResolver);
			}
			return templates;
		} catch ($ClassNotFoundException& cnfe) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::CLASS_NOT_FOUND_ERR, $of(transletName)));
			$throwNew($TransformerConfigurationException, $(err->toString()));
		} catch ($Exception& e) {
			$init($ErrorMsg);
			$var($String, var$0, $str($new($ErrorMsg, $ErrorMsg::RUNTIME_ERROR_KEY)));
			$var($ErrorMsg, err, $new($ErrorMsg, $$concat(var$0, $(e->getMessage()))));
			$throwNew($TransformerConfigurationException, $(err->toString()));
		}
	}
	if (this->_autoTranslet) {
		$var($byteArray2, bytecodes, nullptr);
		$var($String, transletClassName, getTransletBaseName(source));
		if (this->_packageName != nullptr) {
			$assign(transletClassName, $str({this->_packageName, "."_s, transletClassName}));
		}
		if (this->_jarFileName != nullptr) {
			$assign(bytecodes, getBytecodesFromJar(source, transletClassName));
		} else {
			$assign(bytecodes, getBytecodesFromClasses(source, transletClassName));
		}
		if (bytecodes != nullptr) {
			if (this->_debug) {
				if (this->_jarFileName != nullptr) {
					$init($ErrorMsg);
					$nc($System::err)->println($of($$new($ErrorMsg, $ErrorMsg::TRANSFORM_WITH_JAR_STR, $of(transletClassName), $of(this->_jarFileName))));
				} else {
					$init($ErrorMsg);
					$nc($System::err)->println($of($$new($ErrorMsg, $ErrorMsg::TRANSFORM_WITH_TRANSLET_STR, $of(transletClassName))));
				}
			}
			resetTransientAttributes();
			$assign(templates, $new($TemplatesImpl, bytecodes, transletClassName, ($Properties*)nullptr, this->_indentNumber, this));
			if (this->_uriResolver != nullptr) {
				templates->setURIResolver(this->_uriResolver);
			}
			return templates;
		}
	}
	$var($XSLTC, xsltc, $new($XSLTC, this->_xmlFeatures, this->_hasUserErrListener));
	if (this->_debug) {
		xsltc->setDebug(true);
	}
	if (this->_enableInlining) {
		xsltc->setTemplateInlining(true);
	} else {
		xsltc->setTemplateInlining(false);
	}
	if (!this->_isNotSecureProcessing) {
		xsltc->setSecureProcessing(true);
	}
	$init($XMLConstants);
	xsltc->setProperty($XMLConstants::ACCESS_EXTERNAL_STYLESHEET, this->_accessExternalStylesheet);
	xsltc->setProperty($XMLConstants::ACCESS_EXTERNAL_DTD, this->_accessExternalDTD);
	$init($JdkConstants);
	xsltc->setProperty($JdkConstants::SECURITY_MANAGER, this->_xmlSecurityManager);
	xsltc->setProperty($JdkConstants::JDK_EXT_CLASSLOADER, (this->_extensionClassLoader == nullptr) ? ($Object*)nullptr : $($nc(this->_extensionClassLoader)->getValue()));
	buildCatalogFeatures();
	$init($JdkXmlFeatures);
	xsltc->setProperty($JdkXmlFeatures::CATALOG_FEATURES, this->_catalogFeatures);
	xsltc->init();
	if (!this->_isNotSecureProcessing) {
		$set(this, _xsltcExtensionFunctions, xsltc->getExternalExtensionFunctions());
	}
	$init($JdkXmlFeatures$XmlFeature);
	if (this->_uriResolver != nullptr || (this->_catalogFiles != nullptr && $nc(this->_xmlFeatures)->getFeature($JdkXmlFeatures$XmlFeature::USE_CATALOG))) {
		xsltc->setSourceLoader(this);
	}
	if ((this->_piParams != nullptr) && ($nc(this->_piParams)->get(source) != nullptr)) {
		$var($TransformerFactoryImpl$PIParamWrapper, p, $cast($TransformerFactoryImpl$PIParamWrapper, $nc(this->_piParams)->get(source)));
		if (p != nullptr) {
			xsltc->setPIParameters(p->_media, p->_title, p->_charset);
		}
	}
	int32_t outputType = $XSLTC::BYTEARRAY_OUTPUT;
	if (this->_generateTranslet || this->_autoTranslet) {
		xsltc->setClassName($(getTransletBaseName(source)));
		if (this->_destinationDirectory != nullptr) {
			xsltc->setDestDirectory(this->_destinationDirectory);
		} else {
			$var($String, xslName, getStylesheetFileName(source));
			if (xslName != nullptr) {
				$var($File, xslFile, $new($File, xslName));
				$var($String, xslDir, xslFile->getParent());
				if (xslDir != nullptr) {
					xsltc->setDestDirectory(xslDir);
				}
			}
		}
		if (this->_packageName != nullptr) {
			xsltc->setPackageName(this->_packageName);
		}
		if (this->_jarFileName != nullptr) {
			xsltc->setJarFileName(this->_jarFileName);
			outputType = $XSLTC::BYTEARRAY_AND_JAR_OUTPUT;
		} else {
			outputType = $XSLTC::BYTEARRAY_AND_FILE_OUTPUT;
		}
	}
	$var($InputSource, input, $Util::getInputSource(xsltc, source));
	$var($byteArray2, bytecodes, xsltc->compile(nullptr, input, outputType));
	$var($String, transletName, xsltc->getClassName());
	if ((this->_generateTranslet || this->_autoTranslet) && bytecodes != nullptr && this->_jarFileName != nullptr) {
		try {
			xsltc->outputToJar();
		} catch ($IOException& e) {
		}
	}
	resetTransientAttributes();
	if (!$equals(this->_errorListener, this)) {
		try {
			passWarningsToListener($(xsltc->getWarnings()));
		} catch ($TransformerException& e) {
			$throwNew($TransformerConfigurationException, static_cast<$Throwable*>(e));
		}
	} else {
		xsltc->printWarnings();
	}
	if (bytecodes == nullptr) {
		$var($List, errs, xsltc->getErrors());
		$var($ErrorMsg, err, nullptr);
		if (errs != nullptr) {
			$assign(err, $cast($ErrorMsg, errs->get(errs->size() - 1)));
		} else {
			$init($ErrorMsg);
			$assign(err, $new($ErrorMsg, $ErrorMsg::JAXP_COMPILE_ERR));
		}
		$var($Throwable, cause, $nc(err)->getCause());
		$var($TransformerConfigurationException, exc, nullptr);
		if (cause != nullptr) {
			$assign(exc, $new($TransformerConfigurationException, $(cause->getMessage()), cause));
		} else {
			$assign(exc, $new($TransformerConfigurationException, $(err->toString())));
		}
		if (this->_errorListener != nullptr) {
			passErrorsToListener($(xsltc->getErrors()));
			try {
				$nc(this->_errorListener)->fatalError(exc);
			} catch ($TransformerException& te) {
			}
		} else {
			xsltc->printErrors();
		}
		$throw(exc);
	}
	$assign(templates, $new($TemplatesImpl, bytecodes, transletName, $(xsltc->getOutputProperties()), this->_indentNumber, this));
	if (this->_uriResolver != nullptr) {
		templates->setURIResolver(this->_uriResolver);
	}
	return templates;
}

$TemplatesHandler* TransformerFactoryImpl::newTemplatesHandler() {
	buildCatalogFeatures();
	$var($TemplatesHandlerImpl, handler, $new($TemplatesHandlerImpl, this->_indentNumber, this, this->_hasUserErrListener));
	if (this->_uriResolver != nullptr) {
		handler->setURIResolver(this->_uriResolver);
	}
	return handler;
}

$TransformerHandler* TransformerFactoryImpl::newTransformerHandler() {
	$var($Transformer, transformer, newTransformer());
	if (this->_uriResolver != nullptr) {
		$nc(transformer)->setURIResolver(this->_uriResolver);
	}
	return $new($TransformerHandlerImpl, $cast($TransformerImpl, transformer));
}

$TransformerHandler* TransformerFactoryImpl::newTransformerHandler($Source* src) {
	$var($Transformer, transformer, newTransformer(src));
	if (this->_uriResolver != nullptr) {
		$nc(transformer)->setURIResolver(this->_uriResolver);
	}
	return $new($TransformerHandlerImpl, $cast($TransformerImpl, transformer));
}

$TransformerHandler* TransformerFactoryImpl::newTransformerHandler($Templates* templates) {
	$useLocalCurrentObjectStackCache();
	$var($Transformer, transformer, $nc(templates)->newTransformer());
	$var($TransformerImpl, internal, $cast($TransformerImpl, transformer));
	return $new($TransformerHandlerImpl, internal);
}

$XMLFilter* TransformerFactoryImpl::newXMLFilter($Source* src) {
	$var($Templates, templates, newTemplates(src));
	if (templates == nullptr) {
		return nullptr;
	}
	return newXMLFilter(templates);
}

$XMLFilter* TransformerFactoryImpl::newXMLFilter($Templates* templates) {
	try {
		return $new($TrAXFilter, templates);
	} catch ($TransformerConfigurationException& e1) {
		if (this->_errorListener != nullptr) {
			try {
				$nc(this->_errorListener)->fatalError(e1);
				return nullptr;
			} catch ($TransformerException& e2) {
				$throwNew($TransformerConfigurationException, static_cast<$Throwable*>(e2));
			}
		}
		$throw(e1);
	}
	$shouldNotReachHere();
}

$InputSource* TransformerFactoryImpl::loadSource($String* href, $String* context, $XSLTC* xsltc) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Source, source, nullptr);
		if (this->_uriResolver != nullptr) {
			$assign(source, $nc(this->_uriResolver)->resolve(href, context));
		}
		$init($JdkXmlFeatures$XmlFeature);
		if (source == nullptr && this->_catalogFiles != nullptr && $nc(this->_xmlFeatures)->getFeature($JdkXmlFeatures$XmlFeature::USE_CATALOG)) {
			if (this->_catalogUriResolver == nullptr) {
				$set(this, _catalogUriResolver, $CatalogManager::catalogResolver(this->_catalogFeatures, $$new($URIArray, 0)));
			}
			$assign(source, $nc(this->_catalogUriResolver)->resolve(href, context));
		}
		if (source != nullptr) {
			return $Util::getInputSource(xsltc, source);
		}
	} catch ($TransformerException& e) {
		$init($ErrorMsg);
		$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::INVALID_URI_ERR, $of($$str({href, "\n"_s, $(e->getMessage())})), $of(this)));
		$nc($($nc(xsltc)->getParser()))->reportError($Constants::FATAL, msg);
	} catch ($CatalogException& e) {
		$init($ErrorMsg);
		$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::CATALOG_EXCEPTION, $of($$str({href, "\n"_s, $(e->getMessage())})), $of(this)));
		$nc($($nc(xsltc)->getParser()))->reportError($Constants::FATAL, msg);
	}
	return nullptr;
}

$CatalogFeatures* TransformerFactoryImpl::buildCatalogFeatures() {
	if (this->_catalogFeatures == nullptr) {
		$set(this, _catalogFeatures, $nc(this->cfBuilder)->build());
	}
	$init($CatalogFeatures$Feature);
	$set(this, _catalogFiles, $nc(this->_catalogFeatures)->get($CatalogFeatures$Feature::FILES));
	$set(this, _catalogDefer, $nc(this->_catalogFeatures)->get($CatalogFeatures$Feature::DEFER));
	$set(this, _catalogPrefer, $nc(this->_catalogFeatures)->get($CatalogFeatures$Feature::PREFER));
	$set(this, _catalogResolve, $nc(this->_catalogFeatures)->get($CatalogFeatures$Feature::RESOLVE));
	return this->_catalogFeatures;
}

void TransformerFactoryImpl::resetTransientAttributes() {
	$set(this, _transletName, TransformerFactoryImpl::DEFAULT_TRANSLET_NAME);
	$set(this, _destinationDirectory, nullptr);
	$set(this, _packageName, TransformerFactoryImpl::DEFAULT_TRANSLATE_PACKAGE);
	$set(this, _jarFileName, nullptr);
}

$byteArray2* TransformerFactoryImpl::getBytecodesFromClasses($Source* source, $String* fullClassName) {
	$useLocalCurrentObjectStackCache();
	if (fullClassName == nullptr) {
		return nullptr;
	}
	$var($String, xslFileName, getStylesheetFileName(source));
	$var($File, xslFile, nullptr);
	if (xslFileName != nullptr) {
		$assign(xslFile, $new($File, xslFileName));
	}
	$var($String, transletName, nullptr);
	int32_t lastDotIndex = $nc(fullClassName)->lastIndexOf((int32_t)u'.');
	if (lastDotIndex > 0) {
		$assign(transletName, fullClassName->substring(lastDotIndex + 1));
	} else {
		$assign(transletName, fullClassName);
	}
	$var($String, transletPath, fullClassName->replace(u'.', u'/'));
	if (this->_destinationDirectory != nullptr) {
		$assign(transletPath, $str({this->_destinationDirectory, "/"_s, transletPath, ".class"_s}));
	} else if (xslFile != nullptr && xslFile->getParent() != nullptr) {
		$assign(transletPath, $str({$(xslFile->getParent()), "/"_s, transletPath, ".class"_s}));
	} else {
		$assign(transletPath, $str({transletPath, ".class"_s}));
	}
	$var($File, transletFile, $new($File, transletPath));
	if (!transletFile->exists()) {
		return nullptr;
	}
	if (xslFile != nullptr && xslFile->exists()) {
		int64_t xslTimestamp = xslFile->lastModified();
		int64_t transletTimestamp = transletFile->lastModified();
		if (transletTimestamp < xslTimestamp) {
			return nullptr;
		}
	}
	$var($List, bytecodes, $new($ArrayList));
	int32_t fileLength = (int32_t)transletFile->length();
	if (fileLength > 0) {
		$var($FileInputStream, input, nullptr);
		try {
			$assign(input, $new($FileInputStream, transletFile));
		} catch ($FileNotFoundException& e) {
			return nullptr;
		}
		$var($bytes, bytes, $new($bytes, fileLength));
		try {
			readFromInputStream(bytes, input, fileLength);
			$nc(input)->close();
		} catch ($IOException& e) {
			return nullptr;
		}
		bytecodes->add(bytes);
	} else {
		return nullptr;
	}
	$var($String, transletParentDir, transletFile->getParent());
	if (transletParentDir == nullptr) {
		$assign(transletParentDir, $SecuritySupport::getSystemProperty("user.dir"_s));
	}
	$var($File, transletParentFile, $new($File, transletParentDir));
	$var($String, transletAuxPrefix, $str({transletName, "$"_s}));
	$var($FileArray, auxfiles, transletParentFile->listFiles(static_cast<$FilenameFilter*>($$new($TransformerFactoryImpl$1, this, transletAuxPrefix))));
	for (int32_t i = 0; i < $nc(auxfiles)->length; ++i) {
		$var($File, auxfile, auxfiles->get(i));
		int32_t auxlength = (int32_t)$nc(auxfile)->length();
		if (auxlength > 0) {
			$var($FileInputStream, auxinput, nullptr);
			try {
				$assign(auxinput, $new($FileInputStream, auxfile));
			} catch ($FileNotFoundException& e) {
				continue;
			}
			$var($bytes, bytes, $new($bytes, auxlength));
			try {
				readFromInputStream(bytes, auxinput, auxlength);
				$nc(auxinput)->close();
			} catch ($IOException& e) {
				continue;
			}
			bytecodes->add(bytes);
		}
	}
	int32_t count = bytecodes->size();
	if (count > 0) {
		$var($byteArray2, result, $new($byteArray2, count, 1));
		for (int32_t i = 0; i < count; ++i) {
			result->set(i, $cast($bytes, $(bytecodes->get(i))));
		}
		return result;
	} else {
		return nullptr;
	}
}

$byteArray2* TransformerFactoryImpl::getBytecodesFromJar($Source* source, $String* fullClassName) {
	$useLocalCurrentObjectStackCache();
	$var($String, xslFileName, getStylesheetFileName(source));
	$var($File, xslFile, nullptr);
	if (xslFileName != nullptr) {
		$assign(xslFile, $new($File, xslFileName));
	}
	$var($String, jarPath, nullptr);
	if (this->_destinationDirectory != nullptr) {
		$assign(jarPath, $str({this->_destinationDirectory, "/"_s, this->_jarFileName}));
	} else if (xslFile != nullptr && xslFile->getParent() != nullptr) {
		$assign(jarPath, $str({$(xslFile->getParent()), "/"_s, this->_jarFileName}));
	} else {
		$assign(jarPath, this->_jarFileName);
	}
	$var($File, file, $new($File, jarPath));
	if (!file->exists()) {
		return nullptr;
	}
	if (xslFile != nullptr && xslFile->exists()) {
		int64_t xslTimestamp = xslFile->lastModified();
		int64_t transletTimestamp = file->lastModified();
		if (transletTimestamp < xslTimestamp) {
			return nullptr;
		}
	}
	$var($ZipFile, jarFile, nullptr);
	try {
		$assign(jarFile, $new($ZipFile, file));
	} catch ($IOException& e) {
		return nullptr;
	}
	$var($String, transletPath, $nc(fullClassName)->replace(u'.', u'/'));
	$var($String, transletAuxPrefix, $str({transletPath, "$"_s}));
	$var($String, transletFullName, $str({transletPath, ".class"_s}));
	$var($List, bytecodes, $new($ArrayList));
	$var($Enumeration, entries, $nc(jarFile)->entries());
	while ($nc(entries)->hasMoreElements()) {
		$var($ZipEntry, entry, $cast($ZipEntry, entries->nextElement()));
		$var($String, entryName, $nc(entry)->getName());
		bool var$0 = entry->getSize() > 0;
		if (var$0) {
			bool var$1 = $nc(entryName)->equals(transletFullName);
			if (!var$1) {
				bool var$2 = $nc(entryName)->endsWith(".class"_s);
				var$1 = (var$2 && entryName->startsWith(transletAuxPrefix));
			}
			var$0 = (var$1);
		}
		if (var$0) {
			try {
				$var($InputStream, input, jarFile->getInputStream(entry));
				int32_t size = (int32_t)entry->getSize();
				$var($bytes, bytes, $new($bytes, size));
				readFromInputStream(bytes, input, size);
				$nc(input)->close();
				bytecodes->add(bytes);
			} catch ($IOException& e) {
				return nullptr;
			}
		}
	}
	int32_t count = bytecodes->size();
	if (count > 0) {
		$var($byteArray2, result, $new($byteArray2, count, 1));
		for (int32_t i = 0; i < count; ++i) {
			result->set(i, $cast($bytes, $(bytecodes->get(i))));
		}
		return result;
	} else {
		return nullptr;
	}
}

void TransformerFactoryImpl::readFromInputStream($bytes* bytes, $InputStream* input, int32_t size) {
	int32_t n = 0;
	int32_t offset = 0;
	int32_t length = size;
	while (length > 0 && (n = $nc(input)->read(bytes, offset, length)) > 0) {
		offset = offset + n;
		length = length - n;
	}
}

$String* TransformerFactoryImpl::getTransletBaseName($Source* source) {
	$useLocalCurrentObjectStackCache();
	$var($String, transletBaseName, nullptr);
	if (!$nc(this->_transletName)->equals(TransformerFactoryImpl::DEFAULT_TRANSLET_NAME)) {
		return this->_transletName;
	} else {
		$var($String, systemId, $nc(source)->getSystemId());
		if (systemId != nullptr) {
			$var($String, baseName, $Util::baseName(systemId));
			if (baseName != nullptr) {
				$assign(baseName, $Util::noExtName(baseName));
				$assign(transletBaseName, $Util::toJavaName(baseName));
			}
		}
	}
	return (transletBaseName != nullptr) ? transletBaseName : TransformerFactoryImpl::DEFAULT_TRANSLET_NAME;
}

$String* TransformerFactoryImpl::getStylesheetFileName($Source* source) {
	$useLocalCurrentObjectStackCache();
	$var($String, systemId, $nc(source)->getSystemId());
	if (systemId != nullptr) {
		$var($File, file, $new($File, systemId));
		if (file->exists()) {
			return systemId;
		} else {
			$var($URL, url, nullptr);
			try {
				$assign(url, $new($URL, systemId));
			} catch ($MalformedURLException& e) {
				return nullptr;
			}
			if ("file"_s->equals($($nc(url)->getProtocol()))) {
				return $nc(url)->getFile();
			} else {
				return nullptr;
			}
		}
	} else {
		return nullptr;
	}
}

$XSLTCDTMManager* TransformerFactoryImpl::createNewDTMManagerInstance() {
	return $XSLTCDTMManager::createNewDTMManagerInstance();
}

TransformerFactoryImpl::TransformerFactoryImpl() {
}

void clinit$TransformerFactoryImpl($Class* class$) {
	$assignStatic(TransformerFactoryImpl::TRANSLET_NAME, "translet-name"_s);
	$assignStatic(TransformerFactoryImpl::DESTINATION_DIRECTORY, "destination-directory"_s);
	$assignStatic(TransformerFactoryImpl::PACKAGE_NAME, "package-name"_s);
	$assignStatic(TransformerFactoryImpl::JAR_NAME, "jar-name"_s);
	$assignStatic(TransformerFactoryImpl::GENERATE_TRANSLET, "generate-translet"_s);
	$assignStatic(TransformerFactoryImpl::AUTO_TRANSLET, "auto-translet"_s);
	$assignStatic(TransformerFactoryImpl::USE_CLASSPATH, "use-classpath"_s);
	$assignStatic(TransformerFactoryImpl::DEBUG, "debug"_s);
	$assignStatic(TransformerFactoryImpl::ENABLE_INLINING, "enable-inlining"_s);
	$assignStatic(TransformerFactoryImpl::INDENT_NUMBER, "indent-number"_s);
	$assignStatic(TransformerFactoryImpl::DEFAULT_TRANSLET_NAME, "GregorSamsa"_s);
	$assignStatic(TransformerFactoryImpl::DEFAULT_TRANSLATE_PACKAGE, "die.verwandlung"_s);
}

$Class* TransformerFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(TransformerFactoryImpl, name, initialize, &_TransformerFactoryImpl_ClassInfo_, clinit$TransformerFactoryImpl, allocate$TransformerFactoryImpl);
	return class$;
}

$Class* TransformerFactoryImpl::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com