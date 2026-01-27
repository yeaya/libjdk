#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>

#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SourceLoader.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/net/URL.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Date.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Properties.h>
#include <java/util/jar/Attributes$Name.h>
#include <java/util/jar/Attributes.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarOutputStream.h>
#include <java/util/jar/Manifest.h>
#include <java/util/zip/DeflaterOutputStream.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipOutputStream.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlFeatures$XmlFeature.h>
#include <jdk/xml/internal/JdkXmlFeatures.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_DTD
#undef ACCESS_EXTERNAL_STYLESHEET
#undef BYTEARRAY_AND_FILE_OUTPUT
#undef BYTEARRAY_AND_JAR_OUTPUT
#undef BYTEARRAY_OUTPUT
#undef CATALOG_FEATURES
#undef CDATA_CHUNK_SIZE
#undef CLASSLOADER_OUTPUT
#undef EXTERNAL_ACCESS_DEFAULT
#undef FATAL
#undef JAR_EXT
#undef JAR_OUTPUT
#undef JAXP_COMPILE_ERR
#undef JDK_EXT_CLASSLOADER
#undef JDK_OVERRIDE_PARSER
#undef MANIFEST_VERSION
#undef NTYPES
#undef SECURITY_MANAGER
#undef XSLTC

using $byteArray2 = $Array<int8_t, 2>;
using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
using $XMLSecurityManager = ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SourceLoader = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SourceLoader;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Date = ::java::util::Date;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Properties = ::java::util::Properties;
using $Attributes = ::java::util::jar::Attributes;
using $Attributes$Name = ::java::util::jar::Attributes$Name;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarOutputStream = ::java::util::jar::JarOutputStream;
using $Manifest = ::java::util::jar::Manifest;
using $DeflaterOutputStream = ::java::util::zip::DeflaterOutputStream;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipOutputStream = ::java::util::zip::ZipOutputStream;
using $XMLConstants = ::javax::xml::XMLConstants;
using $CatalogFeatures = ::javax::xml::catalog::CatalogFeatures;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlFeatures = ::jdk::xml::internal::JdkXmlFeatures;
using $JdkXmlFeatures$XmlFeature = ::jdk::xml::internal::JdkXmlFeatures$XmlFeature;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $InputSource = ::org::xml::sax::InputSource;
using $XMLReader = ::org::xml::sax::XMLReader;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _XSLTC_FieldInfo_[] = {
	{"_parser", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;", nullptr, $PRIVATE, $field(XSLTC, _parser)},
	{"_reader", "Lorg/xml/sax/XMLReader;", nullptr, $PRIVATE, $field(XSLTC, _reader)},
	{"_loader", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SourceLoader;", nullptr, $PRIVATE, $field(XSLTC, _loader)},
	{"_stylesheet", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PRIVATE, $field(XSLTC, _stylesheet)},
	{"_modeSerial", "I", nullptr, $PRIVATE, $field(XSLTC, _modeSerial)},
	{"_stylesheetSerial", "I", nullptr, $PRIVATE, $field(XSLTC, _stylesheetSerial)},
	{"_stepPatternSerial", "I", nullptr, $PRIVATE, $field(XSLTC, _stepPatternSerial)},
	{"_helperClassSerial", "I", nullptr, $PRIVATE, $field(XSLTC, _helperClassSerial)},
	{"_attributeSetSerial", "I", nullptr, $PRIVATE, $field(XSLTC, _attributeSetSerial)},
	{"_numberFieldIndexes", "[I", nullptr, $PRIVATE, $field(XSLTC, _numberFieldIndexes)},
	{"_nextGType", "I", nullptr, $PRIVATE, $field(XSLTC, _nextGType)},
	{"_namesIndex", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(XSLTC, _namesIndex)},
	{"_elements", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE, $field(XSLTC, _elements)},
	{"_attributes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE, $field(XSLTC, _attributes)},
	{"_nextNSType", "I", nullptr, $PRIVATE, $field(XSLTC, _nextNSType)},
	{"_namespaceIndex", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(XSLTC, _namespaceIndex)},
	{"_namespaces", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE, $field(XSLTC, _namespaces)},
	{"_namespacePrefixes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE, $field(XSLTC, _namespacePrefixes)},
	{"m_characterData", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/StringBuilder;>;", $PRIVATE, $field(XSLTC, m_characterData)},
	{"JAR_OUTPUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSLTC, JAR_OUTPUT)},
	{"BYTEARRAY_OUTPUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSLTC, BYTEARRAY_OUTPUT)},
	{"CLASSLOADER_OUTPUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSLTC, CLASSLOADER_OUTPUT)},
	{"BYTEARRAY_AND_FILE_OUTPUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSLTC, BYTEARRAY_AND_FILE_OUTPUT)},
	{"BYTEARRAY_AND_JAR_OUTPUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSLTC, BYTEARRAY_AND_JAR_OUTPUT)},
	{"_debug", "Z", nullptr, $PRIVATE, $field(XSLTC, _debug)},
	{"_jarFileName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSLTC, _jarFileName)},
	{"_className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSLTC, _className)},
	{"_packageName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSLTC, _packageName)},
	{"_destDir", "Ljava/io/File;", nullptr, $PRIVATE, $field(XSLTC, _destDir)},
	{"_outputType", "I", nullptr, $PRIVATE, $field(XSLTC, _outputType)},
	{"_classes", "Ljava/util/List;", "Ljava/util/List<Ljava/io/ByteArrayOutputStream;>;", $PRIVATE, $field(XSLTC, _classes)},
	{"_bcelClasses", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;>;", $PRIVATE, $field(XSLTC, _bcelClasses)},
	{"_callsNodeset", "Z", nullptr, $PRIVATE, $field(XSLTC, _callsNodeset)},
	{"_multiDocument", "Z", nullptr, $PRIVATE, $field(XSLTC, _multiDocument)},
	{"_hasIdCall", "Z", nullptr, $PRIVATE, $field(XSLTC, _hasIdCall)},
	{"_templateInlining", "Z", nullptr, $PRIVATE, $field(XSLTC, _templateInlining)},
	{"_isSecureProcessing", "Z", nullptr, $PRIVATE, $field(XSLTC, _isSecureProcessing)},
	{"_overrideDefaultParser", "Z", nullptr, $PRIVATE, $field(XSLTC, _overrideDefaultParser)},
	{"_accessExternalStylesheet", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSLTC, _accessExternalStylesheet)},
	{"_accessExternalDTD", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSLTC, _accessExternalDTD)},
	{"_xmlSecurityManager", "Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityManager;", nullptr, $PRIVATE, $field(XSLTC, _xmlSecurityManager)},
	{"_xmlFeatures", "Ljdk/xml/internal/JdkXmlFeatures;", nullptr, $PRIVATE | $FINAL, $field(XSLTC, _xmlFeatures)},
	{"_extensionClassLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $field(XSLTC, _extensionClassLoader)},
	{"_externalExtensionFunctions", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PRIVATE | $FINAL, $field(XSLTC, _externalExtensionFunctions)},
	{"_catalogFeatures", "Ljavax/xml/catalog/CatalogFeatures;", nullptr, 0, $field(XSLTC, _catalogFeatures)},
	{"_cdataChunkSize", "I", nullptr, 0, $field(XSLTC, _cdataChunkSize)},
	{}
};

$MethodInfo _XSLTC_MethodInfo_[] = {
	{"<init>", "(Ljdk/xml/internal/JdkXmlFeatures;Z)V", nullptr, $PUBLIC, $method(XSLTC, init$, void, $JdkXmlFeatures*, bool)},
	{"addCharacterData", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $method(XSLTC, addCharacterData, int32_t, $String*)},
	{"callsNodeset", "()Z", nullptr, $PUBLIC, $method(XSLTC, callsNodeset, bool)},
	{"classFileName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(XSLTC, classFileName, $String*, $String*)},
	{"compile", "(Ljava/net/URL;)Z", nullptr, $PUBLIC, $method(XSLTC, compile, bool, $URL*)},
	{"compile", "(Ljava/net/URL;Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(XSLTC, compile, bool, $URL*, $String*)},
	{"compile", "(Ljava/io/InputStream;Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(XSLTC, compile, bool, $InputStream*, $String*)},
	{"compile", "(Lorg/xml/sax/InputSource;Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(XSLTC, compile, bool, $InputSource*, $String*)},
	{"compile", "(Ljava/util/List;)Z", "(Ljava/util/List<Ljava/net/URL;>;)Z", $PUBLIC, $method(XSLTC, compile, bool, $List*)},
	{"compile", "(Ljava/lang/String;Lorg/xml/sax/InputSource;I)[[B", nullptr, $PUBLIC, $method(XSLTC, compile, $byteArray2*, $String*, $InputSource*, int32_t)},
	{"compile", "(Ljava/lang/String;Lorg/xml/sax/InputSource;)[[B", nullptr, $PUBLIC, $method(XSLTC, compile, $byteArray2*, $String*, $InputSource*)},
	{"debug", "()Z", nullptr, $PUBLIC, $method(XSLTC, debug, bool)},
	{"dumpClass", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC, $method(XSLTC, dumpClass, void, $JavaClass*)},
	{"entryName", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE, $method(XSLTC, entryName, $String*, $File*), "java.io.IOException"},
	{"getBytecodes", "()[[B", nullptr, $PUBLIC, $method(XSLTC, getBytecodes, $byteArray2*)},
	{"getCharacterData", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $method(XSLTC, getCharacterData, $String*, int32_t)},
	{"getCharacterDataCount", "()I", nullptr, $PUBLIC, $method(XSLTC, getCharacterDataCount, int32_t)},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(XSLTC, getClassName, $String*)},
	{"getErrors", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg;>;", $PUBLIC, $method(XSLTC, getErrors, $List*)},
	{"getExternalExtensionFunctions", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PUBLIC, $method(XSLTC, getExternalExtensionFunctions, $Map*)},
	{"getFeature", "(Ljdk/xml/internal/JdkXmlFeatures$XmlFeature;)Z", nullptr, $PUBLIC, $method(XSLTC, getFeature, bool, $JdkXmlFeatures$XmlFeature*)},
	{"getHelperClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(XSLTC, getHelperClassName, $String*)},
	{"getJarFileName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(XSLTC, getJarFileName, $String*)},
	{"getNamesIndex", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $method(XSLTC, getNamesIndex, $List*)},
	{"getNamespaceIndex", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $method(XSLTC, getNamespaceIndex, $List*)},
	{"getNumberFieldIndexes", "()[I", nullptr, $PUBLIC, $method(XSLTC, getNumberFieldIndexes, $ints*)},
	{"getOutputFile", "(Ljava/lang/String;)Ljava/io/File;", nullptr, $PRIVATE, $method(XSLTC, getOutputFile, $File*, $String*)},
	{"getOutputProperties", "()Ljava/util/Properties;", nullptr, $PUBLIC, $method(XSLTC, getOutputProperties, $Properties*)},
	{"getParser", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;", nullptr, $PUBLIC, $method(XSLTC, getParser, $Parser*)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(XSLTC, getProperty, $Object*, $String*)},
	{"getStylesheet", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PUBLIC, $method(XSLTC, getStylesheet, $Stylesheet*)},
	{"getTemplateInlining", "()Z", nullptr, $PUBLIC, $method(XSLTC, getTemplateInlining, bool)},
	{"getWarnings", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg;>;", $PUBLIC, $method(XSLTC, getWarnings, $List*)},
	{"getXMLReader", "()Lorg/xml/sax/XMLReader;", nullptr, $PUBLIC, $method(XSLTC, getXMLReader, $XMLReader*)},
	{"hasIdCall", "()Z", nullptr, $PUBLIC, $method(XSLTC, hasIdCall, bool)},
	{"init", "()V", nullptr, $PUBLIC, $method(XSLTC, init, void)},
	{"isMultiDocument", "()Z", nullptr, $PUBLIC, $method(XSLTC, isMultiDocument, bool)},
	{"isSecureProcessing", "()Z", nullptr, $PUBLIC, $method(XSLTC, isSecureProcessing, bool)},
	{"loadExternalFunction", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", 0, $method(XSLTC, loadExternalFunction, $Class*, $String*), "java.lang.ClassNotFoundException"},
	{"nextAttributeSetSerial", "()I", nullptr, $PUBLIC, $method(XSLTC, nextAttributeSetSerial, int32_t)},
	{"nextHelperClassSerial", "()I", nullptr, $PUBLIC, $method(XSLTC, nextHelperClassSerial, int32_t)},
	{"nextModeSerial", "()I", nullptr, $PUBLIC, $method(XSLTC, nextModeSerial, int32_t)},
	{"nextStepPatternSerial", "()I", nullptr, $PUBLIC, $method(XSLTC, nextStepPatternSerial, int32_t)},
	{"nextStylesheetSerial", "()I", nullptr, $PUBLIC, $method(XSLTC, nextStylesheetSerial, int32_t)},
	{"outputToJar", "()V", nullptr, $PUBLIC, $method(XSLTC, outputToJar, void), "java.io.IOException"},
	{"printErrors", "()V", nullptr, $PUBLIC, $method(XSLTC, printErrors, void)},
	{"printWarnings", "()V", nullptr, $PUBLIC, $method(XSLTC, printWarnings, void)},
	{"registerAttribute", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)I", nullptr, $PUBLIC, $method(XSLTC, registerAttribute, int32_t, $QName*)},
	{"registerElement", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)I", nullptr, $PUBLIC, $method(XSLTC, registerElement, int32_t, $QName*)},
	{"registerNamespace", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $method(XSLTC, registerNamespace, int32_t, $String*)},
	{"registerNamespacePrefix", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)I", nullptr, $PUBLIC, $method(XSLTC, registerNamespacePrefix, int32_t, $QName*)},
	{"reset", "()V", nullptr, $PRIVATE, $method(XSLTC, reset, void)},
	{"setCallsNodeset", "(Z)V", nullptr, $PROTECTED, $method(XSLTC, setCallsNodeset, void, bool)},
	{"setClassName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XSLTC, setClassName, void, $String*)},
	{"setDebug", "(Z)V", nullptr, $PUBLIC, $method(XSLTC, setDebug, void, bool)},
	{"setDestDirectory", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(XSLTC, setDestDirectory, bool, $String*)},
	{"setExternalExtensionFunctions", "(Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/Class<*>;)V", $PRIVATE, $method(XSLTC, setExternalExtensionFunctions, void, $String*, $Class*)},
	{"setHasIdCall", "(Z)V", nullptr, $PROTECTED, $method(XSLTC, setHasIdCall, void, bool)},
	{"setJarFileName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XSLTC, setJarFileName, void, $String*)},
	{"setMultiDocument", "(Z)V", nullptr, $PROTECTED, $method(XSLTC, setMultiDocument, void, bool)},
	{"setOutputType", "(I)V", nullptr, $PUBLIC, $method(XSLTC, setOutputType, void, int32_t)},
	{"setPIParameters", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XSLTC, setPIParameters, void, $String*, $String*, $String*)},
	{"setPackageName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XSLTC, setPackageName, void, $String*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(XSLTC, setProperty, void, $String*, Object$*)},
	{"setSecureProcessing", "(Z)V", nullptr, $PUBLIC, $method(XSLTC, setSecureProcessing, void, bool)},
	{"setSourceLoader", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SourceLoader;)V", nullptr, $PUBLIC, $method(XSLTC, setSourceLoader, void, $SourceLoader*)},
	{"setStylesheet", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;)V", nullptr, $PUBLIC, $method(XSLTC, setStylesheet, void, $Stylesheet*)},
	{"setTemplateInlining", "(Z)V", nullptr, $PUBLIC, $method(XSLTC, setTemplateInlining, void, bool)},
	{"setXMLReader", "(Lorg/xml/sax/XMLReader;)V", nullptr, $PUBLIC, $method(XSLTC, setXMLReader, void, $XMLReader*)},
	{}
};

$ClassInfo _XSLTC_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.XSLTC",
	"java.lang.Object",
	nullptr,
	_XSLTC_FieldInfo_,
	_XSLTC_MethodInfo_
};

$Object* allocate$XSLTC($Class* clazz) {
	return $of($alloc(XSLTC));
}

void XSLTC::init$($JdkXmlFeatures* featureManager, bool hasListener) {
	$set(this, _reader, nullptr);
	$set(this, _loader, nullptr);
	this->_modeSerial = 1;
	this->_stylesheetSerial = 1;
	this->_stepPatternSerial = 1;
	this->_helperClassSerial = 0;
	this->_attributeSetSerial = 0;
	this->_debug = false;
	$set(this, _jarFileName, nullptr);
	$set(this, _className, nullptr);
	$set(this, _packageName, "die.verwandlung"_s);
	$set(this, _destDir, nullptr);
	this->_outputType = XSLTC::BYTEARRAY_OUTPUT;
	this->_callsNodeset = false;
	this->_multiDocument = false;
	this->_hasIdCall = false;
	this->_templateInlining = false;
	this->_isSecureProcessing = false;
	$init($JdkConstants);
	$set(this, _accessExternalStylesheet, $JdkConstants::EXTERNAL_ACCESS_DEFAULT);
	$set(this, _accessExternalDTD, $JdkConstants::EXTERNAL_ACCESS_DEFAULT);
	$init($JdkXmlFeatures$XmlFeature);
	this->_overrideDefaultParser = $nc(featureManager)->getFeature($JdkXmlFeatures$XmlFeature::JDK_OVERRIDE_PARSER);
	$set(this, _parser, $new($Parser, this, this->_overrideDefaultParser, hasListener));
	$set(this, _xmlFeatures, featureManager);
	$set(this, _extensionClassLoader, nullptr);
	$set(this, _externalExtensionFunctions, $new($HashMap));
}

void XSLTC::setSecureProcessing(bool flag) {
	this->_isSecureProcessing = flag;
}

bool XSLTC::isSecureProcessing() {
	return this->_isSecureProcessing;
}

bool XSLTC::getFeature($JdkXmlFeatures$XmlFeature* name) {
	return $nc(this->_xmlFeatures)->getFeature(name);
}

$Object* XSLTC::getProperty($String* name) {
	$init($XMLConstants);
	if ($nc(name)->equals($XMLConstants::ACCESS_EXTERNAL_STYLESHEET)) {
		return $of(this->_accessExternalStylesheet);
	} else {
		if (name->equals($XMLConstants::ACCESS_EXTERNAL_DTD)) {
			return $of(this->_accessExternalDTD);
		} else {
			$init($JdkConstants);
			if (name->equals($JdkConstants::SECURITY_MANAGER)) {
				return $of(this->_xmlSecurityManager);
			} else {
				if (name->equals($JdkConstants::JDK_EXT_CLASSLOADER)) {
					return $of(this->_extensionClassLoader);
				} else {
					$init($JdkXmlFeatures);
					if ($nc($JdkXmlFeatures::CATALOG_FEATURES)->equals(name)) {
						return $of(this->_catalogFeatures);
					} else {
						if ($nc($JdkConstants::CDATA_CHUNK_SIZE)->equals(name)) {
							return $of($Integer::valueOf(this->_cdataChunkSize));
						}
					}
				}
			}
		}
	}
	return $of(nullptr);
}

void XSLTC::setProperty($String* name, Object$* value) {
	$init($XMLConstants);
	if ($nc(name)->equals($XMLConstants::ACCESS_EXTERNAL_STYLESHEET)) {
		$set(this, _accessExternalStylesheet, $cast($String, value));
	} else {
		if (name->equals($XMLConstants::ACCESS_EXTERNAL_DTD)) {
			$set(this, _accessExternalDTD, $cast($String, value));
		} else {
			$init($JdkConstants);
			if (name->equals($JdkConstants::SECURITY_MANAGER)) {
				$set(this, _xmlSecurityManager, $cast($XMLSecurityManager, value));
			} else {
				if (name->equals($JdkConstants::JDK_EXT_CLASSLOADER)) {
					$set(this, _extensionClassLoader, $cast($ClassLoader, value));
					$nc(this->_externalExtensionFunctions)->clear();
				} else {
					$init($JdkXmlFeatures);
					if ($nc($JdkXmlFeatures::CATALOG_FEATURES)->equals(name)) {
						$set(this, _catalogFeatures, $cast($CatalogFeatures, value));
					} else {
						if ($nc($JdkConstants::CDATA_CHUNK_SIZE)->equals(name)) {
							this->_cdataChunkSize = $Integer::parseInt($cast($String, value));
						}
					}
				}
			}
		}
	}
}

$Parser* XSLTC::getParser() {
	return this->_parser;
}

void XSLTC::setOutputType(int32_t type) {
	this->_outputType = type;
}

$Properties* XSLTC::getOutputProperties() {
	return $nc(this->_parser)->getOutputProperties();
}

void XSLTC::init() {
	reset();
	$set(this, _reader, nullptr);
	$set(this, _classes, $new($ArrayList));
	$set(this, _bcelClasses, $new($ArrayList));
}

void XSLTC::setExternalExtensionFunctions($String* name, $Class* clazz) {
	if (this->_isSecureProcessing && clazz != nullptr && !$nc(this->_externalExtensionFunctions)->containsKey(name)) {
		$nc(this->_externalExtensionFunctions)->put(name, clazz);
	}
}

$Class* XSLTC::loadExternalFunction($String* name) {
	$beforeCallerSensitive();
	$Class* loaded = nullptr;
	if ($nc(this->_externalExtensionFunctions)->containsKey(name)) {
		loaded = $cast($Class, $nc(this->_externalExtensionFunctions)->get(name));
	} else if (this->_extensionClassLoader != nullptr) {
		loaded = $Class::forName(name, true, this->_extensionClassLoader);
		setExternalExtensionFunctions(name, loaded);
	}
	if (loaded == nullptr) {
		$throwNew($ClassNotFoundException, name);
	}
	return loaded;
}

$Map* XSLTC::getExternalExtensionFunctions() {
	return $Collections::unmodifiableMap(this->_externalExtensionFunctions);
}

void XSLTC::reset() {
	this->_nextGType = $DTM::NTYPES;
	$set(this, _elements, $new($HashMap));
	$set(this, _attributes, $new($HashMap));
	$set(this, _namespaces, $new($HashMap));
	$nc(this->_namespaces)->put(""_s, $($Integer::valueOf(this->_nextNSType)));
	$set(this, _namesIndex, $new($ArrayList, 128));
	$set(this, _namespaceIndex, $new($ArrayList, 32));
	$set(this, _namespacePrefixes, $new($HashMap));
	$set(this, _stylesheet, nullptr);
	$nc(this->_parser)->init();
	this->_modeSerial = 1;
	this->_stylesheetSerial = 1;
	this->_stepPatternSerial = 1;
	this->_helperClassSerial = 0;
	this->_attributeSetSerial = 0;
	this->_multiDocument = false;
	this->_hasIdCall = false;
	$set(this, _numberFieldIndexes, $new($ints, {
		-1,
		-1,
		-1
	}));
	$nc(this->_externalExtensionFunctions)->clear();
}

void XSLTC::setSourceLoader($SourceLoader* loader) {
	$set(this, _loader, loader);
}

void XSLTC::setTemplateInlining(bool templateInlining) {
	this->_templateInlining = templateInlining;
}

bool XSLTC::getTemplateInlining() {
	return this->_templateInlining;
}

void XSLTC::setPIParameters($String* media, $String* title, $String* charset) {
	$nc(this->_parser)->setPIParameters(media, title, charset);
}

bool XSLTC::compile($URL* url) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($InputStream, stream, $nc(url)->openStream());
		$var($InputSource, input, $new($InputSource, stream));
		input->setSystemId($(url->toString()));
		return compile(input, this->_className);
	} catch ($IOException& e) {
		$init($ErrorMsg);
		$nc(this->_parser)->reportError($Constants::FATAL, $$new($ErrorMsg, $ErrorMsg::JAXP_COMPILE_ERR, static_cast<$Throwable*>(e)));
		return false;
	}
	$shouldNotReachHere();
}

bool XSLTC::compile($URL* url, $String* name) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($InputStream, stream, $nc(url)->openStream());
		$var($InputSource, input, $new($InputSource, stream));
		input->setSystemId($(url->toString()));
		return compile(input, name);
	} catch ($IOException& e) {
		$init($ErrorMsg);
		$nc(this->_parser)->reportError($Constants::FATAL, $$new($ErrorMsg, $ErrorMsg::JAXP_COMPILE_ERR, static_cast<$Throwable*>(e)));
		return false;
	}
	$shouldNotReachHere();
}

bool XSLTC::compile($InputStream* stream, $String* name) {
	$var($InputSource, input, $new($InputSource, stream));
	input->setSystemId(name);
	return compile(input, name);
}

bool XSLTC::compile($InputSource* input, $String* name) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				reset();
				$var($String, systemId, nullptr);
				if (input != nullptr) {
					$assign(systemId, input->getSystemId());
				}
				if (this->_className == nullptr) {
					if (name != nullptr) {
						setClassName(name);
					} else if (systemId != nullptr && !systemId->equals(""_s)) {
						setClassName($($Util::baseName(systemId)));
					}
					if (this->_className == nullptr || $nc(this->_className)->length() == 0) {
						setClassName("GregorSamsa"_s);
					}
				}
				$var($SyntaxTreeNode, element, nullptr);
				if (this->_reader == nullptr) {
					$assign(element, $nc(this->_parser)->parse(input));
				} else {
					$assign(element, $nc(this->_parser)->parse(this->_reader, input));
				}
				if ((!$nc(this->_parser)->errorsFound()) && (element != nullptr)) {
					$set(this, _stylesheet, $nc(this->_parser)->makeStylesheet(element));
					$nc(this->_stylesheet)->setSourceLoader(this->_loader);
					$nc(this->_stylesheet)->setSystemId(systemId);
					$nc(this->_stylesheet)->setParentStylesheet(nullptr);
					$nc(this->_stylesheet)->setTemplateInlining(this->_templateInlining);
					$nc(this->_parser)->setCurrentStylesheet(this->_stylesheet);
					$nc(this->_parser)->createAST(this->_stylesheet);
				}
				if ((!$nc(this->_parser)->errorsFound()) && (this->_stylesheet != nullptr)) {
					$nc(this->_stylesheet)->setCallsNodeset(this->_callsNodeset);
					$nc(this->_stylesheet)->setMultiDocument(this->_multiDocument);
					$nc(this->_stylesheet)->setHasIdCall(this->_hasIdCall);
					$synchronized($of(this)->getClass()) {
						$nc(this->_stylesheet)->translate();
					}
				}
			} catch ($Exception& e) {
				e->printStackTrace();
				$init($ErrorMsg);
				$nc(this->_parser)->reportError($Constants::FATAL, $$new($ErrorMsg, $ErrorMsg::JAXP_COMPILE_ERR, static_cast<$Throwable*>(e)));
			} catch ($Error& e) {
				if (this->_debug) {
					e->printStackTrace();
				}
				$init($ErrorMsg);
				$nc(this->_parser)->reportError($Constants::FATAL, $$new($ErrorMsg, $ErrorMsg::JAXP_COMPILE_ERR, static_cast<$Throwable*>(e)));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, _reader, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return !$nc(this->_parser)->errorsFound();
}

bool XSLTC::compile($List* stylesheets) {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(stylesheets)->size();
	if (count == 0) {
		return true;
	}
	if (count == 1) {
		return compile($cast($URL, $(stylesheets->get(0))));
	} else {
		{
			$var($Iterator, i$, stylesheets->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($URL, url, $cast($URL, i$->next()));
				{
					$set(this, _className, nullptr);
					if (!compile(url)) {
						return false;
					}
				}
			}
		}
	}
	return true;
}

$byteArray2* XSLTC::getBytecodes() {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(this->_classes)->size();
	$var($byteArray2, result, $new($byteArray2, count, 1));
	for (int32_t i = 0; i < count; ++i) {
		result->set(i, $($nc(($cast($ByteArrayOutputStream, $($nc(this->_classes)->get(i)))))->toByteArray()));
	}
	return result;
}

$byteArray2* XSLTC::compile($String* name, $InputSource* input, int32_t outputType) {
	this->_outputType = outputType;
	if (compile(input, name)) {
		return getBytecodes();
	} else {
		return nullptr;
	}
}

$byteArray2* XSLTC::compile($String* name, $InputSource* input) {
	return compile(name, input, XSLTC::BYTEARRAY_OUTPUT);
}

void XSLTC::setXMLReader($XMLReader* reader) {
	$set(this, _reader, reader);
}

$XMLReader* XSLTC::getXMLReader() {
	return this->_reader;
}

$List* XSLTC::getErrors() {
	return $nc(this->_parser)->getErrors();
}

$List* XSLTC::getWarnings() {
	return $nc(this->_parser)->getWarnings();
}

void XSLTC::printErrors() {
	$nc(this->_parser)->printErrors();
}

void XSLTC::printWarnings() {
	$nc(this->_parser)->printWarnings();
}

void XSLTC::setMultiDocument(bool flag) {
	this->_multiDocument = flag;
}

bool XSLTC::isMultiDocument() {
	return this->_multiDocument;
}

void XSLTC::setCallsNodeset(bool flag) {
	if (flag) {
		setMultiDocument(flag);
	}
	this->_callsNodeset = flag;
}

bool XSLTC::callsNodeset() {
	return this->_callsNodeset;
}

void XSLTC::setHasIdCall(bool flag) {
	this->_hasIdCall = flag;
}

bool XSLTC::hasIdCall() {
	return this->_hasIdCall;
}

void XSLTC::setClassName($String* className) {
	$useLocalCurrentObjectStackCache();
	$var($String, base, $Util::baseName(className));
	$var($String, noext, $Util::noExtName(base));
	$var($String, name, $Util::toJavaName(noext));
	if (this->_packageName == nullptr) {
		$set(this, _className, name);
	} else {
		$set(this, _className, $str({this->_packageName, $$str(u'.'), name}));
	}
}

$String* XSLTC::getClassName() {
	return this->_className;
}

$String* XSLTC::classFileName($String* className) {
	$init($File);
	return $str({$($nc(className)->replace(u'.', $File::separatorChar)), ".class"_s});
}

$File* XSLTC::getOutputFile($String* className) {
	$useLocalCurrentObjectStackCache();
	if (this->_destDir != nullptr) {
		return $new($File, this->_destDir, $(classFileName(className)));
	} else {
		return $new($File, $(classFileName(className)));
	}
}

bool XSLTC::setDestDirectory($String* dstDirName) {
	$var($File, dir, $new($File, dstDirName));
	bool var$0 = $SecuritySupport::doesFileExist(dir);
	if (var$0 || dir->mkdirs()) {
		$set(this, _destDir, dir);
		return true;
	} else {
		$set(this, _destDir, nullptr);
		return false;
	}
}

void XSLTC::setPackageName($String* packageName) {
	$set(this, _packageName, $cast($String, $Objects::requireNonNull(packageName)));
	if (this->_className != nullptr) {
		setClassName(this->_className);
	}
}

void XSLTC::setJarFileName($String* jarFileName) {
	$var($String, JAR_EXT, ".jar"_s);
	if ($nc(jarFileName)->endsWith(JAR_EXT)) {
		$set(this, _jarFileName, jarFileName);
	} else {
		$set(this, _jarFileName, $str({jarFileName, JAR_EXT}));
	}
	this->_outputType = XSLTC::JAR_OUTPUT;
}

$String* XSLTC::getJarFileName() {
	return this->_jarFileName;
}

void XSLTC::setStylesheet($Stylesheet* stylesheet) {
	if (this->_stylesheet == nullptr) {
		$set(this, _stylesheet, stylesheet);
	}
}

$Stylesheet* XSLTC::getStylesheet() {
	return this->_stylesheet;
}

int32_t XSLTC::registerAttribute($QName* name) {
	$useLocalCurrentObjectStackCache();
	$var($Integer, code, $cast($Integer, $nc(this->_attributes)->get($($nc(name)->toString()))));
	if (code == nullptr) {
		$assign(code, $Integer::valueOf(this->_nextGType++));
		$nc(this->_attributes)->put($($nc(name)->toString()), code);
		$var($String, uri, $nc(name)->getNamespace());
		$var($String, local, $str({"@"_s, $(name->getLocalPart())}));
		if ((uri != nullptr) && (!uri->equals(""_s))) {
			$nc(this->_namesIndex)->add($$str({uri, ":"_s, local}));
		} else {
			$nc(this->_namesIndex)->add(local);
		}
		if ($nc($(name->getLocalPart()))->equals("*"_s)) {
			registerNamespace($(name->getNamespace()));
		}
	}
	return $nc(code)->intValue();
}

int32_t XSLTC::registerElement($QName* name) {
	$useLocalCurrentObjectStackCache();
	$var($Integer, code, $cast($Integer, $nc(this->_elements)->get($($nc(name)->toString()))));
	if (code == nullptr) {
		$var($Object, var$0, $of($nc(name)->toString()));
		$nc(this->_elements)->put(var$0, $assign(code, $Integer::valueOf(this->_nextGType++)));
		$nc(this->_namesIndex)->add($($nc(name)->toString()));
	}
	if ($nc($($nc(name)->getLocalPart()))->equals("*"_s)) {
		registerNamespace($(name->getNamespace()));
	}
	return $nc(code)->intValue();
}

int32_t XSLTC::registerNamespacePrefix($QName* name) {
	$useLocalCurrentObjectStackCache();
	$var($Integer, code, $cast($Integer, $nc(this->_namespacePrefixes)->get($($nc(name)->toString()))));
	if (code == nullptr) {
		$assign(code, $Integer::valueOf(this->_nextGType++));
		$nc(this->_namespacePrefixes)->put($($nc(name)->toString()), code);
		$var($String, uri, $nc(name)->getNamespace());
		if ((uri != nullptr) && (!uri->equals(""_s))) {
			$nc(this->_namesIndex)->add("?"_s);
		} else {
			$nc(this->_namesIndex)->add($$str({"?"_s, $(name->getLocalPart())}));
		}
	}
	return $nc(code)->intValue();
}

int32_t XSLTC::registerNamespace($String* namespaceURI) {
	$var($Integer, code, $cast($Integer, $nc(this->_namespaces)->get(namespaceURI)));
	if (code == nullptr) {
		$assign(code, $Integer::valueOf(this->_nextNSType++));
		$nc(this->_namespaces)->put(namespaceURI, code);
		$nc(this->_namespaceIndex)->add(namespaceURI);
	}
	return $nc(code)->intValue();
}

int32_t XSLTC::nextModeSerial() {
	return this->_modeSerial++;
}

int32_t XSLTC::nextStylesheetSerial() {
	return this->_stylesheetSerial++;
}

int32_t XSLTC::nextStepPatternSerial() {
	return this->_stepPatternSerial++;
}

$ints* XSLTC::getNumberFieldIndexes() {
	return this->_numberFieldIndexes;
}

int32_t XSLTC::nextHelperClassSerial() {
	return this->_helperClassSerial++;
}

int32_t XSLTC::nextAttributeSetSerial() {
	return this->_attributeSetSerial++;
}

$List* XSLTC::getNamesIndex() {
	return this->_namesIndex;
}

$List* XSLTC::getNamespaceIndex() {
	return this->_namespaceIndex;
}

$String* XSLTC::getHelperClassName() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$(getClassName()), $$str(u'$')}));
	return $concat(var$0, $$str(this->_helperClassSerial++));
}

void XSLTC::dumpClass($JavaClass* clazz) {
	$useLocalCurrentObjectStackCache();
	if (this->_outputType == XSLTC::BYTEARRAY_AND_FILE_OUTPUT) {
		$var($File, outFile, getOutputFile($($nc(clazz)->getClassName())));
		$var($String, parentDir, $nc(outFile)->getParent());
		if (parentDir != nullptr) {
			$var($File, parentFile, $new($File, parentDir));
			if (!$SecuritySupport::doesFileExist(parentFile)) {
				parentFile->mkdirs();
			}
		}
	}
	try {
		{
			$var($ByteArrayOutputStream, out, nullptr)
			switch (this->_outputType) {
			case XSLTC::JAR_OUTPUT:
				{
					$nc(this->_bcelClasses)->add(clazz);
					break;
				}
			case XSLTC::BYTEARRAY_OUTPUT:
				{}
			case XSLTC::BYTEARRAY_AND_FILE_OUTPUT:
				{}
			case XSLTC::BYTEARRAY_AND_JAR_OUTPUT:
				{}
			case XSLTC::CLASSLOADER_OUTPUT:
				{
					$assign(out, $new($ByteArrayOutputStream, 2048));
					$nc(clazz)->dump(static_cast<$OutputStream*>(out));
					$nc(this->_classes)->add(out);
					if (this->_outputType == XSLTC::BYTEARRAY_AND_FILE_OUTPUT) {
						$nc(clazz)->dump($(getOutputFile($(clazz->getClassName()))));
					} else if (this->_outputType == XSLTC::BYTEARRAY_AND_JAR_OUTPUT) {
						$nc(this->_bcelClasses)->add(clazz);
					}
					break;
				}
			}
		}
	} catch ($Exception& e) {
		e->printStackTrace();
	}
}

$String* XSLTC::entryName($File* f) {
	$init($File);
	return $nc($($nc(f)->getName()))->replace($File::separatorChar, u'/');
}

void XSLTC::outputToJar() {
	$useLocalCurrentObjectStackCache();
	$var($Manifest, manifest, $new($Manifest));
	$var($Attributes, atrs, manifest->getMainAttributes());
	$init($Attributes$Name);
	$nc(atrs)->put($Attributes$Name::MANIFEST_VERSION, "1.2"_s);
	$var($Map, map, manifest->getEntries());
	$var($String, now, ($$new($Date))->toString());
	$var($Attributes$Name, dateAttr, $new($Attributes$Name, "Date"_s));
	$var($File, jarFile, $new($File, this->_destDir, this->_jarFileName));
	$var($JarOutputStream, jos, $new($JarOutputStream, $$new($FileOutputStream, jarFile), manifest));
	{
		$var($Iterator, i$, $nc(this->_bcelClasses)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JavaClass, clazz, $cast($JavaClass, i$->next()));
			{
				$var($String, className, $nc($($nc(clazz)->getClassName()))->replace(u'.', u'/'));
				$var($Attributes, attr, $new($Attributes));
				attr->put(dateAttr, now);
				$nc(map)->put($$str({className, ".class"_s}), attr);
				jos->putNextEntry($$new($JarEntry, $$str({className, ".class"_s})));
				$var($ByteArrayOutputStream, out, $new($ByteArrayOutputStream, 2048));
				clazz->dump(static_cast<$OutputStream*>(out));
				out->writeTo(jos);
			}
		}
	}
	jos->close();
}

void XSLTC::setDebug(bool debug) {
	this->_debug = debug;
}

bool XSLTC::debug() {
	return this->_debug;
}

$String* XSLTC::getCharacterData(int32_t index) {
	return $nc(($cast($StringBuilder, $($nc(this->m_characterData)->get(index)))))->toString();
}

int32_t XSLTC::getCharacterDataCount() {
	return (this->m_characterData != nullptr) ? $nc(this->m_characterData)->size() : 0;
}

int32_t XSLTC::addCharacterData($String* newData) {
	$var($StringBuilder, currData, nullptr);
	if (this->m_characterData == nullptr) {
		$set(this, m_characterData, $new($ArrayList));
		$assign(currData, $new($StringBuilder));
		$nc(this->m_characterData)->add(currData);
	} else {
		$assign(currData, $cast($StringBuilder, $nc(this->m_characterData)->get($nc(this->m_characterData)->size() - 1)));
	}
	int32_t var$0 = $nc(newData)->length();
	if (var$0 + $nc(currData)->length() > 21845) {
		$assign(currData, $new($StringBuilder));
		$nc(this->m_characterData)->add(currData);
	}
	int32_t newDataOffset = $nc(currData)->length();
	currData->append(newData);
	return newDataOffset;
}

XSLTC::XSLTC() {
}

$Class* XSLTC::load$($String* name, bool initialize) {
	$loadClass(XSLTC, name, initialize, &_XSLTC_ClassInfo_, allocate$XSLTC);
	return class$;
}

$Class* XSLTC::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com