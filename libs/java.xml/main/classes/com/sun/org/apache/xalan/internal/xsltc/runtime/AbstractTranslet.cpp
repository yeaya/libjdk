#include <com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOMCache.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOMEnhancedForDTM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/TransletException.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/MessageHandler.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/Parameter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/StringValueHandler.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/output/TransletOutputHandlerFactory.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Runtime.h>
#include <java/text/DecimalFormat.h>
#include <java/text/DecimalFormatSymbols.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/xml/parsers/DocumentBuilder.h>
#include <javax/xml/parsers/DocumentBuilderFactory.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/Templates.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/xml/sax/ContentHandler.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef CURRENT_TRANSLET_VERSION
#undef ELEMENT_NODE
#undef EMPTYSTRING
#undef EXTERNAL_ACCESS_DEFAULT
#undef FIRST_TRANSLET_VERSION
#undef ID_INDEX_NAME
#undef NAMESPACE_NODE
#undef STREAM
#undef UNKNOWN_TRANSLET_VERSION_ERR
#undef VER_SPLIT_NAMES_ARRAY

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $DOMCache = ::com::sun::org::apache::xalan::internal::xsltc::DOMCache;
using $DOMEnhancedForDTM = ::com::sun::org::apache::xalan::internal::xsltc::DOMEnhancedForDTM;
using $TransletException = ::com::sun::org::apache::xalan::internal::xsltc::TransletException;
using $DOMAdapter = ::com::sun::org::apache::xalan::internal::xsltc::dom::DOMAdapter;
using $KeyIndex = ::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $MessageHandler = ::com::sun::org::apache::xalan::internal::xsltc::runtime::MessageHandler;
using $Parameter = ::com::sun::org::apache::xalan::internal::xsltc::runtime::Parameter;
using $StringValueHandler = ::com::sun::org::apache::xalan::internal::xsltc::runtime::StringValueHandler;
using $TransletOutputHandlerFactory = ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::TransletOutputHandlerFactory;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;
using $DecimalFormat = ::java::text::DecimalFormat;
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $DocumentBuilder = ::javax::xml::parsers::DocumentBuilder;
using $DocumentBuilderFactory = ::javax::xml::parsers::DocumentBuilderFactory;
using $Templates = ::javax::xml::transform::Templates;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

$FieldInfo _AbstractTranslet_FieldInfo_[] = {
	{"_version", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AbstractTranslet, _version)},
	{"_method", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AbstractTranslet, _method)},
	{"_encoding", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AbstractTranslet, _encoding)},
	{"_omitHeader", "Z", nullptr, $PUBLIC, $field(AbstractTranslet, _omitHeader)},
	{"_standalone", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AbstractTranslet, _standalone)},
	{"_isStandalone", "Z", nullptr, $PUBLIC, $field(AbstractTranslet, _isStandalone)},
	{"_doctypePublic", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AbstractTranslet, _doctypePublic)},
	{"_doctypeSystem", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AbstractTranslet, _doctypeSystem)},
	{"_indent", "Z", nullptr, $PUBLIC, $field(AbstractTranslet, _indent)},
	{"_mediaType", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AbstractTranslet, _mediaType)},
	{"_cdata", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $field(AbstractTranslet, _cdata)},
	{"_indentamount", "I", nullptr, $PUBLIC, $field(AbstractTranslet, _indentamount)},
	{"FIRST_TRANSLET_VERSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AbstractTranslet, FIRST_TRANSLET_VERSION)},
	{"VER_SPLIT_NAMES_ARRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AbstractTranslet, VER_SPLIT_NAMES_ARRAY)},
	{"CURRENT_TRANSLET_VERSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AbstractTranslet, CURRENT_TRANSLET_VERSION)},
	{"transletVersion", "I", nullptr, $PROTECTED, $field(AbstractTranslet, transletVersion)},
	{"namesArray", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(AbstractTranslet, namesArray)},
	{"urisArray", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(AbstractTranslet, urisArray)},
	{"typesArray", "[I", nullptr, $PROTECTED, $field(AbstractTranslet, typesArray)},
	{"namespaceArray", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(AbstractTranslet, namespaceArray)},
	{"_templates", "Ljavax/xml/transform/Templates;", nullptr, $PROTECTED, $field(AbstractTranslet, _templates)},
	{"_hasIdCall", "Z", nullptr, $PROTECTED, $field(AbstractTranslet, _hasIdCall)},
	{"stringValueHandler", "Lcom/sun/org/apache/xalan/internal/xsltc/runtime/StringValueHandler;", nullptr, $PROTECTED, $field(AbstractTranslet, stringValueHandler)},
	{"EMPTYSTRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractTranslet, EMPTYSTRING)},
	{"ID_INDEX_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractTranslet, ID_INDEX_NAME)},
	{"_overrideDefaultParser", "Z", nullptr, $PRIVATE, $field(AbstractTranslet, _overrideDefaultParser)},
	{"output", "Ljava/io/FileOutputStream;", nullptr, $PRIVATE, $field(AbstractTranslet, output)},
	{"_accessExternalStylesheet", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AbstractTranslet, _accessExternalStylesheet)},
	{"pbase", "I", nullptr, $PROTECTED, $field(AbstractTranslet, pbase)},
	{"pframe", "I", nullptr, $PROTECTED, $field(AbstractTranslet, pframe)},
	{"paramsStack", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Object;>;", $PROTECTED, $field(AbstractTranslet, paramsStack)},
	{"_msgHandler", "Lcom/sun/org/apache/xalan/internal/xsltc/runtime/MessageHandler;", nullptr, $PRIVATE, $field(AbstractTranslet, _msgHandler)},
	{"_formatSymbols", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/text/DecimalFormat;>;", $PUBLIC, $field(AbstractTranslet, _formatSymbols)},
	{"_keyIndexes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex;>;", $PRIVATE, $field(AbstractTranslet, _keyIndexes)},
	{"_emptyKeyIndex", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex;", nullptr, $PRIVATE, $field(AbstractTranslet, _emptyKeyIndex)},
	{"_indexSize", "I", nullptr, $PRIVATE, $field(AbstractTranslet, _indexSize)},
	{"_currentRootForKeys", "I", nullptr, $PRIVATE, $field(AbstractTranslet, _currentRootForKeys)},
	{"_domCache", "Lcom/sun/org/apache/xalan/internal/xsltc/DOMCache;", nullptr, $PRIVATE, $field(AbstractTranslet, _domCache)},
	{"_auxClasses", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PRIVATE, $field(AbstractTranslet, _auxClasses)},
	{"_domImplementation", "Lorg/w3c/dom/DOMImplementation;", nullptr, $PROTECTED, $field(AbstractTranslet, _domImplementation)},
	{}
};

$MethodInfo _AbstractTranslet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AbstractTranslet, init$, void)},
	{"addAuxiliaryClass", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(AbstractTranslet, addAuxiliaryClass, void, $Class*)},
	{"addCdataElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, addCdataElement, void, $String*)},
	{"addDecimalFormat", "(Ljava/lang/String;Ljava/text/DecimalFormatSymbols;)V", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, addDecimalFormat, void, $String*, $DecimalFormatSymbols*)},
	{"addParameter", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractTranslet, addParameter, $Object*, $String*, Object$*)},
	{"addParameter", "(Ljava/lang/String;Ljava/lang/Object;Z)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(AbstractTranslet, addParameter, $Object*, $String*, Object$*, bool)},
	{"buildIDIndex", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)V", nullptr, $PRIVATE | $FINAL, $method(AbstractTranslet, buildIDIndex, void, $DOM*)},
	{"buildKeyIndex", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, buildKeyIndex, void, $String*, int32_t, $String*)},
	{"buildKeyIndex", "(Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)V", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, buildKeyIndex, void, $String*, $DOM*)},
	{"buildKeyIndexHelper", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex;", nullptr, $PRIVATE, $method(AbstractTranslet, buildKeyIndexHelper, $KeyIndex*, $String*)},
	{"buildKeys", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;I)V", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, buildKeys, void, $DOM*, $DTMAxisIterator*, $SerializationHandler*, int32_t), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"characters", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC | $FINAL, $method(AbstractTranslet, characters, void, $String*, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"clearParameters", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, clearParameters, void)},
	{"closeOutputHandler", "(Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, closeOutputHandler, void, $SerializationHandler*)},
	{"createKeyIndex", "()Lcom/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex;", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, createKeyIndex, $KeyIndex*)},
	{"displayMessage", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(AbstractTranslet, displayMessage, void, $String*)},
	{"getAllowedProtocols", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, getAllowedProtocols, $String*)},
	{"getAuxiliaryClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(AbstractTranslet, getAuxiliaryClass, $Class*, $String*)},
	{"getDOMCache", "()Lcom/sun/org/apache/xalan/internal/xsltc/DOMCache;", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, getDOMCache, $DOMCache*)},
	{"getDecimalFormat", "(Ljava/lang/String;)Ljava/text/DecimalFormat;", nullptr, $PUBLIC | $FINAL, $method(AbstractTranslet, getDecimalFormat, $DecimalFormat*, $String*)},
	{"getKeyIndex", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex;", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, getKeyIndex, $KeyIndex*, $String*)},
	{"getNamesArray", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, getNamesArray, $StringArray*)},
	{"getNamespaceArray", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, getNamespaceArray, $StringArray*)},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(AbstractTranslet, getParameter, $Object*, $String*)},
	{"getTemplates", "()Ljavax/xml/transform/Templates;", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, getTemplates, $Templates*)},
	{"getTypesArray", "()[I", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, getTypesArray, $ints*)},
	{"getUrisArray", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, getUrisArray, $StringArray*)},
	{"hasIdCall", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, hasIdCall, bool)},
	{"makeDOMAdapter", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)Lcom/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter;", nullptr, $PUBLIC | $FINAL, $method(AbstractTranslet, makeDOMAdapter, $DOMAdapter*, $DOM*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"newDocument", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, newDocument, $Document*, $String*, $String*), "javax.xml.parsers.ParserConfigurationException"},
	{"openOutputHandler", "(Ljava/lang/String;Z)Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, openOutputHandler, $SerializationHandler*, $String*, bool), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"openOutputHandler", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, openOutputHandler, $SerializationHandler*, $String*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"overrideDefaultParser", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, overrideDefaultParser, bool)},
	{"popParamFrame", "()V", nullptr, $PUBLIC | $FINAL, $method(AbstractTranslet, popParamFrame, void)},
	{"postInitialization", "()V", nullptr, $PUBLIC | $FINAL, $method(AbstractTranslet, postInitialization, void)},
	{"prepassDocument", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)V", nullptr, $PUBLIC | $FINAL, $method(AbstractTranslet, prepassDocument, void, $DOM*)},
	{"printInternalState", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, printInternalState, void)},
	{"pushParamFrame", "()V", nullptr, $PUBLIC | $FINAL, $method(AbstractTranslet, pushParamFrame, void)},
	{"setAllowedProtocols", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, setAllowedProtocols, void, $String*)},
	{"setAuxiliaryClasses", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)V", $PUBLIC, $virtualMethod(AbstractTranslet, setAuxiliaryClasses, void, $Map*)},
	{"setDOMCache", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOMCache;)V", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, setDOMCache, void, $DOMCache*)},
	{"setIndexSize", "(I)V", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, setIndexSize, void, int32_t)},
	{"setKeyIndexDom", "(Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)V", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, setKeyIndexDom, void, $String*, $DOM*)},
	{"setMessageHandler", "(Lcom/sun/org/apache/xalan/internal/xsltc/runtime/MessageHandler;)V", nullptr, $PUBLIC | $FINAL, $method(AbstractTranslet, setMessageHandler, void, $MessageHandler*)},
	{"setOverrideDefaultParser", "(Z)V", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, setOverrideDefaultParser, void, bool)},
	{"setRootForKeys", "(I)V", nullptr, $PRIVATE, $method(AbstractTranslet, setRootForKeys, void, int32_t)},
	{"setTemplates", "(Ljavax/xml/transform/Templates;)V", nullptr, $PUBLIC, $virtualMethod(AbstractTranslet, setTemplates, void, $Templates*)},
	{"transferOutputSettings", "(Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PROTECTED, $virtualMethod(AbstractTranslet, transferOutputSettings, void, $SerializationHandler*)},
	{"transform", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"transform", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractTranslet, transform, void, $DOM*, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{}
};

$ClassInfo _AbstractTranslet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.AbstractTranslet",
	"java.lang.Object",
	"com.sun.org.apache.xalan.internal.xsltc.Translet",
	_AbstractTranslet_FieldInfo_,
	_AbstractTranslet_MethodInfo_
};

$Object* allocate$AbstractTranslet($Class* clazz) {
	return $of($alloc(AbstractTranslet));
}

$String* AbstractTranslet::EMPTYSTRING = nullptr;
$String* AbstractTranslet::ID_INDEX_NAME = nullptr;

void AbstractTranslet::init$() {
	$set(this, _version, "1.0"_s);
	$set(this, _method, nullptr);
	$set(this, _encoding, "UTF-8"_s);
	this->_omitHeader = false;
	$set(this, _standalone, nullptr);
	this->_isStandalone = false;
	$set(this, _doctypePublic, nullptr);
	$set(this, _doctypeSystem, nullptr);
	this->_indent = false;
	$set(this, _mediaType, nullptr);
	$set(this, _cdata, nullptr);
	this->_indentamount = -1;
	this->transletVersion = AbstractTranslet::FIRST_TRANSLET_VERSION;
	$set(this, _templates, nullptr);
	this->_hasIdCall = false;
	$set(this, stringValueHandler, $new($StringValueHandler));
	$set(this, output, nullptr);
	$init($JdkConstants);
	$set(this, _accessExternalStylesheet, $JdkConstants::EXTERNAL_ACCESS_DEFAULT);
	this->pbase = 0;
	this->pframe = 0;
	$set(this, paramsStack, $new($ArrayList));
	$set(this, _msgHandler, nullptr);
	$set(this, _formatSymbols, nullptr);
	$set(this, _keyIndexes, nullptr);
	$set(this, _emptyKeyIndex, nullptr);
	this->_indexSize = 0;
	this->_currentRootForKeys = 0;
	$set(this, _domCache, nullptr);
	$set(this, _auxClasses, nullptr);
	$set(this, _domImplementation, nullptr);
}

void AbstractTranslet::printInternalState() {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("-------------------------------------"_s);
	$nc($System::out)->println($$str({"AbstractTranslet this = "_s, this}));
	$nc($System::out)->println($$str({"pbase = "_s, $$str(this->pbase)}));
	$nc($System::out)->println($$str({"vframe = "_s, $$str(this->pframe)}));
	$nc($System::out)->println($$str({"paramsStack.size() = "_s, $$str($nc(this->paramsStack)->size())}));
	$nc($System::out)->println($$str({"namesArray.size = "_s, $$str($nc(this->namesArray)->length)}));
	$nc($System::out)->println($$str({"namespaceArray.size = "_s, $$str($nc(this->namespaceArray)->length)}));
	$nc($System::out)->println(""_s);
	$nc($System::out)->println($$str({"Total memory = "_s, $$str($nc($($Runtime::getRuntime()))->totalMemory())}));
}

$DOMAdapter* AbstractTranslet::makeDOMAdapter($DOM* dom) {
	setRootForKeys($nc(dom)->getDocument());
	return $new($DOMAdapter, dom, this->namesArray, this->urisArray, this->typesArray, this->namespaceArray);
}

void AbstractTranslet::pushParamFrame() {
	$nc(this->paramsStack)->add(this->pframe, $($Integer::valueOf(this->pbase)));
	this->pbase = ++this->pframe;
}

void AbstractTranslet::popParamFrame() {
	if (this->pbase > 0) {
		int32_t oldpbase = $nc(($cast($Integer, $($nc(this->paramsStack)->get(--this->pbase)))))->intValue();
		for (int32_t i = this->pframe - 1; i >= this->pbase; --i) {
			$nc(this->paramsStack)->remove(i);
		}
		this->pframe = this->pbase;
		this->pbase = oldpbase;
	}
}

$Object* AbstractTranslet::addParameter($String* name$renamed, Object$* value) {
	$var($String, name, name$renamed);
	$assign(name, $BasisLibrary::mapQNameToJavaName(name));
	return $of(addParameter(name, value, false));
}

$Object* AbstractTranslet::addParameter($String* name, Object$* value, bool isDefault) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = this->pframe - 1; i >= this->pbase; --i) {
		$var($Parameter, param, $cast($Parameter, $nc(this->paramsStack)->get(i)));
		if ($nc($nc(param)->_name)->equals(name)) {
			if (param->_isDefault || !isDefault) {
				$set(param, _value, value);
				param->_isDefault = isDefault;
				return $of(value);
			}
			return $of(param->_value);
		}
	}
	$nc(this->paramsStack)->add(this->pframe++, $$new($Parameter, name, value, isDefault));
	return $of(value);
}

void AbstractTranslet::clearParameters() {
	this->pbase = (this->pframe = 0);
	$nc(this->paramsStack)->clear();
}

$Object* AbstractTranslet::getParameter($String* name$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	$assign(name, $BasisLibrary::mapQNameToJavaName(name));
	for (int32_t i = this->pframe - 1; i >= this->pbase; --i) {
		$var($Parameter, param, $cast($Parameter, $nc(this->paramsStack)->get(i)));
		if ($nc($nc(param)->_name)->equals(name)) {
			return $of(param->_value);
		}
	}
	return $of(nullptr);
}

void AbstractTranslet::setMessageHandler($MessageHandler* handler) {
	$set(this, _msgHandler, handler);
}

void AbstractTranslet::displayMessage($String* msg) {
	if (this->_msgHandler == nullptr) {
		$nc($System::err)->println(msg);
	} else {
		$nc(this->_msgHandler)->displayMessage(msg);
	}
}

void AbstractTranslet::addDecimalFormat($String* name$renamed, $DecimalFormatSymbols* symbols) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	if (this->_formatSymbols == nullptr) {
		$set(this, _formatSymbols, $new($HashMap));
	}
	if (name == nullptr) {
		$assign(name, AbstractTranslet::EMPTYSTRING);
	}
	$var($DecimalFormat, df, $new($DecimalFormat));
	if (symbols != nullptr) {
		df->setDecimalFormatSymbols(symbols);
	}
	$nc(this->_formatSymbols)->put(name, df);
}

$DecimalFormat* AbstractTranslet::getDecimalFormat($String* name$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	if (this->_formatSymbols != nullptr) {
		if (name == nullptr) {
			$assign(name, AbstractTranslet::EMPTYSTRING);
		}
		$var($DecimalFormat, df, $cast($DecimalFormat, $nc(this->_formatSymbols)->get(name)));
		if (df == nullptr) {
			$assign(df, $cast($DecimalFormat, $nc(this->_formatSymbols)->get(AbstractTranslet::EMPTYSTRING)));
		}
		return df;
	}
	return (nullptr);
}

void AbstractTranslet::prepassDocument($DOM* document) {
	setIndexSize($nc(document)->getSize());
	buildIDIndex(document);
}

void AbstractTranslet::buildIDIndex($DOM* document) {
	$useLocalCurrentObjectStackCache();
	setRootForKeys($nc(document)->getDocument());
	if ($instanceOf($DOMEnhancedForDTM, document)) {
		$var($DOMEnhancedForDTM, enhancedDOM, $cast($DOMEnhancedForDTM, document));
		if ($nc(enhancedDOM)->hasDOMSource()) {
			buildKeyIndex(AbstractTranslet::ID_INDEX_NAME, document);
			return;
		} else {
			$var($Map, elementsByID, enhancedDOM->getElementsWithIDs());
			if (elementsByID == nullptr) {
				return;
			}
			bool hasIDValues = false;
			{
				$var($Iterator, i$, $nc($($nc(elementsByID)->entrySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
					{
						int32_t element = $nc(document)->getNodeHandle($nc(($cast($Integer, $($nc(entry)->getValue()))))->intValue());
						buildKeyIndex(AbstractTranslet::ID_INDEX_NAME, element, $cast($String, $($nc(entry)->getKey())));
						hasIDValues = true;
					}
				}
			}
			if (hasIDValues) {
				setKeyIndexDom(AbstractTranslet::ID_INDEX_NAME, document);
			}
		}
	}
}

void AbstractTranslet::postInitialization() {
	$useLocalCurrentObjectStackCache();
	if (this->transletVersion < AbstractTranslet::VER_SPLIT_NAMES_ARRAY) {
		int32_t arraySize = $nc(this->namesArray)->length;
		$var($StringArray, newURIsArray, $new($StringArray, arraySize));
		$var($StringArray, newNamesArray, $new($StringArray, arraySize));
		$var($ints, newTypesArray, $new($ints, arraySize));
		for (int32_t i = 0; i < arraySize; ++i) {
			$var($String, name, $nc(this->namesArray)->get(i));
			int32_t colonIndex = $nc(name)->lastIndexOf((int32_t)u':');
			int32_t lNameStartIdx = colonIndex + 1;
			if (colonIndex > -1) {
				newURIsArray->set(i, $(name->substring(0, colonIndex)));
			}
			if (name->charAt(lNameStartIdx) == u'@') {
				++lNameStartIdx;
				newTypesArray->set(i, $DTM::ATTRIBUTE_NODE);
			} else if (name->charAt(lNameStartIdx) == u'?') {
				++lNameStartIdx;
				newTypesArray->set(i, $DTM::NAMESPACE_NODE);
			} else {
				newTypesArray->set(i, $DTM::ELEMENT_NODE);
			}
			newNamesArray->set(i, (lNameStartIdx == 0) ? name : $(name->substring(lNameStartIdx)));
		}
		$set(this, namesArray, newNamesArray);
		$set(this, urisArray, newURIsArray);
		$set(this, typesArray, newTypesArray);
	}
	if (this->transletVersion > AbstractTranslet::CURRENT_TRANSLET_VERSION) {
		$init($BasisLibrary);
		$BasisLibrary::runTimeError($BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR, $($of($of(this)->getClass()->getName())));
	}
}

void AbstractTranslet::setIndexSize(int32_t size) {
	if (size > this->_indexSize) {
		this->_indexSize = size;
	}
}

$KeyIndex* AbstractTranslet::createKeyIndex() {
	return ($new($KeyIndex, this->_indexSize));
}

void AbstractTranslet::buildKeyIndex($String* name, int32_t node, $String* value) {
	$var($KeyIndex, index, buildKeyIndexHelper(name));
	$nc(index)->add(value, node, this->_currentRootForKeys);
}

void AbstractTranslet::buildKeyIndex($String* name, $DOM* dom) {
	$var($KeyIndex, index, buildKeyIndexHelper(name));
	$nc(index)->setDom(dom, $nc(dom)->getDocument());
}

$KeyIndex* AbstractTranslet::buildKeyIndexHelper($String* name) {
	if (this->_keyIndexes == nullptr) {
		$set(this, _keyIndexes, $new($HashMap));
	}
	$var($KeyIndex, index, $cast($KeyIndex, $nc(this->_keyIndexes)->get(name)));
	if (index == nullptr) {
		$nc(this->_keyIndexes)->put(name, $assign(index, $new($KeyIndex, this->_indexSize)));
	}
	return index;
}

$KeyIndex* AbstractTranslet::getKeyIndex($String* name) {
	if (this->_keyIndexes == nullptr) {
		return (this->_emptyKeyIndex != nullptr) ? this->_emptyKeyIndex : ($set(this, _emptyKeyIndex, $new($KeyIndex, 1)));
	}
	$var($KeyIndex, index, $cast($KeyIndex, $nc(this->_keyIndexes)->get(name)));
	if (index == nullptr) {
		return (this->_emptyKeyIndex != nullptr) ? this->_emptyKeyIndex : ($set(this, _emptyKeyIndex, $new($KeyIndex, 1)));
	}
	return (index);
}

void AbstractTranslet::setRootForKeys(int32_t root) {
	this->_currentRootForKeys = root;
}

void AbstractTranslet::buildKeys($DOM* document, $DTMAxisIterator* iterator, $SerializationHandler* handler, int32_t root) {
}

void AbstractTranslet::setKeyIndexDom($String* name, $DOM* document) {
	$nc($(getKeyIndex(name)))->setDom(document, $nc(document)->getDocument());
}

void AbstractTranslet::setDOMCache($DOMCache* cache) {
	$set(this, _domCache, cache);
}

$DOMCache* AbstractTranslet::getDOMCache() {
	return (this->_domCache);
}

$SerializationHandler* AbstractTranslet::openOutputHandler($String* filename, bool append) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($TransletOutputHandlerFactory, factory, $TransletOutputHandlerFactory::newInstance(this->_overrideDefaultParser, $($nc(this->_msgHandler)->getErrorListener())));
		$var($String, dirStr, $$new($File, filename)->getParent());
		if ((nullptr != dirStr) && (dirStr->length() > 0)) {
			$var($File, dir, $new($File, dirStr));
			dir->mkdirs();
		}
		$set(this, output, $new($FileOutputStream, filename, append));
		$nc(factory)->setEncoding(this->_encoding);
		factory->setOutputMethod(this->_method);
		factory->setOutputStream($$new($BufferedOutputStream, this->output));
		factory->setOutputType($TransletOutputHandlerFactory::STREAM);
		$var($SerializationHandler, handler, factory->getSerializationHandler());
		transferOutputSettings(handler);
		$nc(handler)->startDocument();
		return handler;
	} catch ($Exception& e) {
		$throwNew($TransletException, $cast($Exception, e));
	}
	$shouldNotReachHere();
}

$SerializationHandler* AbstractTranslet::openOutputHandler($String* filename) {
	return openOutputHandler(filename, false);
}

void AbstractTranslet::closeOutputHandler($SerializationHandler* handler) {
	try {
		$nc(handler)->endDocument();
		handler->close();
		if (this->output != nullptr) {
			$nc(this->output)->close();
		}
	} catch ($Exception& e) {
	}
}

void AbstractTranslet::transform($DOM* document, $SerializationHandler* handler) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			transform(document, $($nc(document)->getIterator()), handler);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, _keyIndexes, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AbstractTranslet::characters($String* string, $SerializationHandler* handler) {
	if (string != nullptr) {
		try {
			$nc(handler)->characters(string);
		} catch ($Exception& e) {
			$throwNew($TransletException, $cast($Exception, e));
		}
	}
}

void AbstractTranslet::addCdataElement($String* name) {
	$useLocalCurrentObjectStackCache();
	if (this->_cdata == nullptr) {
		$set(this, _cdata, $new($ArrayList));
	}
	int32_t lastColon = $nc(name)->lastIndexOf((int32_t)u':');
	if (lastColon > 0) {
		$var($String, uri, name->substring(0, lastColon));
		$var($String, localName, name->substring(lastColon + 1));
		$nc(this->_cdata)->add(uri);
		$nc(this->_cdata)->add(localName);
	} else {
		$nc(this->_cdata)->add(nullptr);
		$nc(this->_cdata)->add(name);
	}
}

void AbstractTranslet::transferOutputSettings($SerializationHandler* handler) {
	if (this->_method != nullptr) {
		if ($nc(this->_method)->equals("xml"_s)) {
			if (this->_standalone != nullptr) {
				$nc(handler)->setStandalone(this->_standalone);
			}
			if (this->_omitHeader) {
				$nc(handler)->setOmitXMLDeclaration(true);
			}
			$nc(handler)->setCdataSectionElements(this->_cdata);
			if (this->_version != nullptr) {
				handler->setVersion(this->_version);
			}
			handler->setIndent(this->_indent);
			if (this->_indentamount >= 0) {
				handler->setIndentAmount(this->_indentamount);
			}
			if (this->_doctypeSystem != nullptr) {
				handler->setDoctype(this->_doctypeSystem, this->_doctypePublic);
			}
			handler->setIsStandalone(this->_isStandalone);
		} else if ($nc(this->_method)->equals("html"_s)) {
			$nc(handler)->setIndent(this->_indent);
			handler->setDoctype(this->_doctypeSystem, this->_doctypePublic);
			if (this->_mediaType != nullptr) {
				handler->setMediaType(this->_mediaType);
			}
		}
	} else {
		$nc(handler)->setCdataSectionElements(this->_cdata);
		if (this->_version != nullptr) {
			handler->setVersion(this->_version);
		}
		if (this->_standalone != nullptr) {
			handler->setStandalone(this->_standalone);
		}
		if (this->_omitHeader) {
			handler->setOmitXMLDeclaration(true);
		}
		handler->setIndent(this->_indent);
		handler->setDoctype(this->_doctypeSystem, this->_doctypePublic);
		handler->setIsStandalone(this->_isStandalone);
	}
}

void AbstractTranslet::addAuxiliaryClass($Class* auxClass) {
	if (this->_auxClasses == nullptr) {
		$set(this, _auxClasses, $new($HashMap));
	}
	$nc(this->_auxClasses)->put($($nc(auxClass)->getName()), auxClass);
}

void AbstractTranslet::setAuxiliaryClasses($Map* auxClasses) {
	$set(this, _auxClasses, auxClasses);
}

$Class* AbstractTranslet::getAuxiliaryClass($String* className) {
	if (this->_auxClasses == nullptr) {
		return nullptr;
	}
	return ($cast($Class, $nc(this->_auxClasses)->get(className)));
}

$StringArray* AbstractTranslet::getNamesArray() {
	return this->namesArray;
}

$StringArray* AbstractTranslet::getUrisArray() {
	return this->urisArray;
}

$ints* AbstractTranslet::getTypesArray() {
	return this->typesArray;
}

$StringArray* AbstractTranslet::getNamespaceArray() {
	return this->namespaceArray;
}

bool AbstractTranslet::hasIdCall() {
	return this->_hasIdCall;
}

$Templates* AbstractTranslet::getTemplates() {
	return this->_templates;
}

void AbstractTranslet::setTemplates($Templates* templates) {
	$set(this, _templates, templates);
}

bool AbstractTranslet::overrideDefaultParser() {
	return this->_overrideDefaultParser;
}

void AbstractTranslet::setOverrideDefaultParser(bool flag) {
	this->_overrideDefaultParser = flag;
}

$String* AbstractTranslet::getAllowedProtocols() {
	return this->_accessExternalStylesheet;
}

void AbstractTranslet::setAllowedProtocols($String* protocols) {
	$set(this, _accessExternalStylesheet, protocols);
}

$Document* AbstractTranslet::newDocument($String* uri, $String* qname) {
	$useLocalCurrentObjectStackCache();
	if (this->_domImplementation == nullptr) {
		$var($DocumentBuilderFactory, dbf, $JdkXmlUtils::getDOMFactory(this->_overrideDefaultParser));
		$set(this, _domImplementation, $nc($($nc(dbf)->newDocumentBuilder()))->getDOMImplementation());
	}
	return $nc(this->_domImplementation)->createDocument(uri, qname, nullptr);
}

AbstractTranslet::AbstractTranslet() {
}

void clinit$AbstractTranslet($Class* class$) {
	$assignStatic(AbstractTranslet::EMPTYSTRING, ""_s);
	$assignStatic(AbstractTranslet::ID_INDEX_NAME, "##id"_s);
}

$Class* AbstractTranslet::load$($String* name, bool initialize) {
	$loadClass(AbstractTranslet, name, initialize, &_AbstractTranslet_ClassInfo_, clinit$AbstractTranslet, allocate$AbstractTranslet);
	return class$;
}

$Class* AbstractTranslet::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com