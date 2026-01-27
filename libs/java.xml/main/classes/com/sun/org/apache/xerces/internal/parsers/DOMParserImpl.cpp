#include <com/sun/org/apache/xerces/internal/parsers/DOMParserImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/DOMErrorImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMStringListImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser$Abort.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractXMLDocumentParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/DOMParserImpl$AbortHandler.h>
#include <com/sun/org/apache/xerces/internal/parsers/XIncludeAwareParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XMLParser.h>
#include <com/sun/org/apache/xerces/internal/util/DOMEntityResolverWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/DOMErrorHandlerWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLPullParserConfiguration.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Stack.h>
#include <java/util/StringTokenizer.h>
#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/DOMError.h>
#include <org/w3c/dom/DOMErrorHandler.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/DOMStringList.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ls/LSException.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <org/w3c/dom/ls/LSParserFilter.h>
#include <org/w3c/dom/ls/LSResourceResolver.h>
#include <jcpp.h>

#undef CREATE_CDATA_NODES_FEATURE
#undef CREATE_ENTITY_REF_NODES
#undef DEBUG
#undef DEFER_NODE_EXPANSION
#undef DISALLOW_DOCTYPE_DECL_FEATURE
#undef DOCUMENT_CLASS_NAME
#undef DOM_CANONICAL_FORM
#undef DOM_CDATA_SECTIONS
#undef DOM_CERTIFIED
#undef DOM_CHARSET_OVERRIDES_XML_ENCODING
#undef DOM_CHECK_CHAR_NORMALIZATION
#undef DOM_COMMENTS
#undef DOM_DATATYPE_NORMALIZATION
#undef DOM_DISALLOW_DOCTYPE
#undef DOM_DOMAIN
#undef DOM_ELEMENT_CONTENT_WHITESPACE
#undef DOM_ENTITIES
#undef DOM_ERROR_HANDLER
#undef DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS
#undef DOM_INFOSET
#undef DOM_NAMESPACES
#undef DOM_NAMESPACE_DECLARATIONS
#undef DOM_NORMALIZE_CHARACTERS
#undef DOM_PSVI
#undef DOM_RESOURCE_RESOLVER
#undef DOM_SCHEMA_LOCATION
#undef DOM_SCHEMA_TYPE
#undef DOM_SPLIT_CDATA
#undef DOM_SUPPORTED_MEDIATYPES_ONLY
#undef DOM_VALIDATE
#undef DOM_VALIDATE_IF_SCHEMA
#undef DOM_WELLFORMED
#undef DOM_XMLDECL
#undef DYNAMIC_VALIDATION
#undef DYNAMIC_VALIDATION_FEATURE
#undef ENGLISH
#undef ENTITY_RESOLVER
#undef ERROR_HANDLER
#undef FALSE
#undef INCLUDE_COMMENTS_FEATURE
#undef INCLUDE_IGNORABLE_WHITESPACE
#undef INSTANCE
#undef INVALID_STATE_ERR
#undef JAXP_PROPERTY_PREFIX
#undef NAMESPACES
#undef NAMESPACES_FEATURE
#undef NAMESPACE_GROWTH
#undef NAMESPACE_GROWTH_FEATURE
#undef NORMALIZE_DATA
#undef NOT_FOUND_ERR
#undef NOT_SUPPORTED_ERR
#undef NS_DTD
#undef NS_XMLSCHEMA
#undef PARSE_ERR
#undef PREFIX_XMLNS
#undef PSVI_AUGMENT
#undef SAX_FEATURE_PREFIX
#undef SCHEMA_AUGMENT_PSVI
#undef SCHEMA_FULL_CHECKING
#undef SCHEMA_LANGUAGE
#undef SCHEMA_NORMALIZED_VALUE
#undef SCHEMA_SOURCE
#undef SCHEMA_VALIDATION_FEATURE
#undef SEVERITY_FATAL_ERROR
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TOLERATE_DUPLICATES
#undef TOLERATE_DUPLICATES_FEATURE
#undef TRUE
#undef TYPE_MISMATCH_ERR
#undef VALIDATION_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XMLSCHEMA
#undef XMLSCHEMA_FULL_CHECKING

using $DOMErrorImpl = ::com::sun::org::apache::xerces::internal::dom::DOMErrorImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $DOMStringListImpl = ::com::sun::org::apache::xerces::internal::dom::DOMStringListImpl;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $AbstractDOMParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser;
using $AbstractDOMParser$Abort = ::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser$Abort;
using $AbstractXMLDocumentParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser;
using $DOMParserImpl$AbortHandler = ::com::sun::org::apache::xerces::internal::parsers::DOMParserImpl$AbortHandler;
using $XIncludeAwareParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::XIncludeAwareParserConfiguration;
using $XML11Configuration = ::com::sun::org::apache::xerces::internal::parsers::XML11Configuration;
using $XMLParser = ::com::sun::org::apache::xerces::internal::parsers::XMLParser;
using $DOMEntityResolverWrapper = ::com::sun::org::apache::xerces::internal::util::DOMEntityResolverWrapper;
using $DOMErrorHandlerWrapper = ::com::sun::org::apache::xerces::internal::util::DOMErrorHandlerWrapper;
using $DOMUtil = ::com::sun::org::apache::xerces::internal::util::DOMUtil;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDTDContentModelHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler;
using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $XMLPullParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Stack = ::java::util::Stack;
using $StringTokenizer = ::java::util::StringTokenizer;
using $DOMConfiguration = ::org::w3c::dom::DOMConfiguration;
using $DOMError = ::org::w3c::dom::DOMError;
using $DOMErrorHandler = ::org::w3c::dom::DOMErrorHandler;
using $DOMException = ::org::w3c::dom::DOMException;
using $DOMStringList = ::org::w3c::dom::DOMStringList;
using $Document = ::org::w3c::dom::Document;
using $Node = ::org::w3c::dom::Node;
using $LSException = ::org::w3c::dom::ls::LSException;
using $LSInput = ::org::w3c::dom::ls::LSInput;
using $LSParserFilter = ::org::w3c::dom::ls::LSParserFilter;
using $LSResourceResolver = ::org::w3c::dom::ls::LSResourceResolver;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _DOMParserImpl_FieldInfo_[] = {
	{"NAMESPACES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMParserImpl, NAMESPACES)},
	{"VALIDATION_FEATURE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMParserImpl, VALIDATION_FEATURE)},
	{"XMLSCHEMA", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMParserImpl, XMLSCHEMA)},
	{"XMLSCHEMA_FULL_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMParserImpl, XMLSCHEMA_FULL_CHECKING)},
	{"DYNAMIC_VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMParserImpl, DYNAMIC_VALIDATION)},
	{"NORMALIZE_DATA", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMParserImpl, NORMALIZE_DATA)},
	{"DISALLOW_DOCTYPE_DECL_FEATURE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMParserImpl, DISALLOW_DOCTYPE_DECL_FEATURE)},
	{"NAMESPACE_GROWTH", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMParserImpl, NAMESPACE_GROWTH)},
	{"TOLERATE_DUPLICATES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMParserImpl, TOLERATE_DUPLICATES)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMParserImpl, SYMBOL_TABLE)},
	{"PSVI_AUGMENT", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMParserImpl, PSVI_AUGMENT)},
	{"fNamespaceDeclarations", "Z", nullptr, $PROTECTED, $field(DOMParserImpl, fNamespaceDeclarations)},
	{"fSchemaType", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DOMParserImpl, fSchemaType)},
	{"fBusy", "Z", nullptr, $PROTECTED, $field(DOMParserImpl, fBusy)},
	{"abortNow", "Z", nullptr, $PRIVATE, $field(DOMParserImpl, abortNow)},
	{"currentThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(DOMParserImpl, currentThread)},
	{"DEBUG", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMParserImpl, DEBUG)},
	{"fSchemaLocation", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMParserImpl, fSchemaLocation)},
	{"fRecognizedParameters", "Lorg/w3c/dom/DOMStringList;", nullptr, $PRIVATE, $field(DOMParserImpl, fRecognizedParameters)},
	{"abortHandler", "Lcom/sun/org/apache/xerces/internal/parsers/DOMParserImpl$AbortHandler;", nullptr, $PRIVATE, $field(DOMParserImpl, abortHandler)},
	{}
};

$MethodInfo _DOMParserImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DOMParserImpl, init$, void, $XMLParserConfiguration*, $String*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;)V", nullptr, $PUBLIC, $method(DOMParserImpl, init$, void, $XMLParserConfiguration*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(DOMParserImpl, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(DOMParserImpl, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"abort", "()V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl, abort, void)},
	{"canSetParameter", "(Ljava/lang/String;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl, canSetParameter, bool, $String*, Object$*)},
	{"dom2xmlInputSource", "(Lorg/w3c/dom/ls/LSInput;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, 0, $virtualMethod(DOMParserImpl, dom2xmlInputSource, $XMLInputSource*, $LSInput*)},
	{"getAsync", "()Z", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl, getAsync, bool)},
	{"getBusy", "()Z", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl, getBusy, bool)},
	{"getDomConfig", "()Lorg/w3c/dom/DOMConfiguration;", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl, getDomConfig, $DOMConfiguration*)},
	{"getFilter", "()Lorg/w3c/dom/ls/LSParserFilter;", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl, getFilter, $LSParserFilter*)},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl, getParameter, $Object*, $String*), "org.w3c.dom.DOMException"},
	{"getParameterNames", "()Lorg/w3c/dom/DOMStringList;", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl, getParameterNames, $DOMStringList*)},
	{"newFeatureNotFoundError", "(Ljava/lang/String;)Lorg/w3c/dom/DOMException;", nullptr, $PRIVATE | $STATIC, $staticMethod(DOMParserImpl, newFeatureNotFoundError, $DOMException*, $String*)},
	{"newTypeMismatchError", "(Ljava/lang/String;)Lorg/w3c/dom/DOMException;", nullptr, $PRIVATE | $STATIC, $staticMethod(DOMParserImpl, newTypeMismatchError, $DOMException*, $String*)},
	{"parse", "(Lorg/w3c/dom/ls/LSInput;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl, parse, $Document*, $LSInput*), "org.w3c.dom.ls.LSException"},
	{"parseURI", "(Ljava/lang/String;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl, parseURI, $Document*, $String*), "org.w3c.dom.ls.LSException"},
	{"parseWithContext", "(Lorg/w3c/dom/ls/LSInput;Lorg/w3c/dom/Node;S)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl, parseWithContext, $Node*, $LSInput*, $Node*, int16_t), "org.w3c.dom.DOMException,org.w3c.dom.ls.LSException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl, reset, void)},
	{"restoreHandlers", "()V", nullptr, $PRIVATE, $method(DOMParserImpl, restoreHandlers, void)},
	{"setFilter", "(Lorg/w3c/dom/ls/LSParserFilter;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl, setFilter, void, $LSParserFilter*)},
	{"setParameter", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl, setParameter, void, $String*, Object$*), "org.w3c.dom.DOMException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl, startElement, void, $QName*, $XMLAttributes*, $Augmentations*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DOMParserImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.parsers.DOMParserImpl$AbortHandler", "com.sun.org.apache.xerces.internal.parsers.DOMParserImpl", "AbortHandler", $PRIVATE},
	{}
};

$ClassInfo _DOMParserImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.DOMParserImpl",
	"com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser",
	"org.w3c.dom.ls.LSParser,org.w3c.dom.DOMConfiguration",
	_DOMParserImpl_FieldInfo_,
	_DOMParserImpl_MethodInfo_,
	nullptr,
	nullptr,
	_DOMParserImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.parsers.DOMParserImpl$AbortHandler"
};

$Object* allocate$DOMParserImpl($Class* clazz) {
	return $of($alloc(DOMParserImpl));
}

int32_t DOMParserImpl::hashCode() {
	 return this->$AbstractDOMParser::hashCode();
}

bool DOMParserImpl::equals(Object$* arg0) {
	 return this->$AbstractDOMParser::equals(arg0);
}

$Object* DOMParserImpl::clone() {
	 return this->$AbstractDOMParser::clone();
}

$String* DOMParserImpl::toString() {
	 return this->$AbstractDOMParser::toString();
}

void DOMParserImpl::finalize() {
	this->$AbstractDOMParser::finalize();
}

$String* DOMParserImpl::NAMESPACES = nullptr;
$String* DOMParserImpl::VALIDATION_FEATURE = nullptr;
$String* DOMParserImpl::XMLSCHEMA = nullptr;
$String* DOMParserImpl::XMLSCHEMA_FULL_CHECKING = nullptr;
$String* DOMParserImpl::DYNAMIC_VALIDATION = nullptr;
$String* DOMParserImpl::NORMALIZE_DATA = nullptr;
$String* DOMParserImpl::DISALLOW_DOCTYPE_DECL_FEATURE = nullptr;
$String* DOMParserImpl::NAMESPACE_GROWTH = nullptr;
$String* DOMParserImpl::TOLERATE_DUPLICATES = nullptr;
$String* DOMParserImpl::SYMBOL_TABLE = nullptr;
$String* DOMParserImpl::PSVI_AUGMENT = nullptr;

void DOMParserImpl::init$($XMLParserConfiguration* config, $String* schemaType) {
	$useLocalCurrentObjectStackCache();
	DOMParserImpl::init$(config);
	if (schemaType != nullptr) {
		$init($Constants);
		if (schemaType->equals($Constants::NS_DTD)) {
			$nc(this->fConfiguration)->setProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE}), $Constants::NS_DTD);
			$set(this, fSchemaType, $Constants::NS_DTD);
		} else {
			if (schemaType->equals($Constants::NS_XMLSCHEMA)) {
				$nc(this->fConfiguration)->setProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE}), $Constants::NS_XMLSCHEMA);
			}
		}
	}
}

void DOMParserImpl::init$($XMLParserConfiguration* config) {
	$AbstractDOMParser::init$(config);
	this->fNamespaceDeclarations = true;
	$set(this, fSchemaType, nullptr);
	this->fBusy = false;
	this->abortNow = false;
	$set(this, fSchemaLocation, nullptr);
	$set(this, abortHandler, nullptr);
	$init($Constants);
	$var($StringArray, domRecognizedFeatures, $new($StringArray, {
		$Constants::DOM_CANONICAL_FORM,
		$Constants::DOM_CDATA_SECTIONS,
		$Constants::DOM_CHARSET_OVERRIDES_XML_ENCODING,
		$Constants::DOM_INFOSET,
		$Constants::DOM_NAMESPACE_DECLARATIONS,
		$Constants::DOM_SPLIT_CDATA,
		$Constants::DOM_SUPPORTED_MEDIATYPES_ONLY,
		$Constants::DOM_CERTIFIED,
		$Constants::DOM_WELLFORMED,
		$Constants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS
	}));
	$nc(this->fConfiguration)->addRecognizedFeatures(domRecognizedFeatures);
	$init($AbstractDOMParser);
	$nc(this->fConfiguration)->setFeature($AbstractDOMParser::DEFER_NODE_EXPANSION, false);
	$nc(this->fConfiguration)->setFeature($Constants::DOM_NAMESPACE_DECLARATIONS, true);
	$nc(this->fConfiguration)->setFeature($Constants::DOM_WELLFORMED, true);
	$nc(this->fConfiguration)->setFeature($AbstractDOMParser::INCLUDE_COMMENTS_FEATURE, true);
	$nc(this->fConfiguration)->setFeature($AbstractDOMParser::INCLUDE_IGNORABLE_WHITESPACE, true);
	$nc(this->fConfiguration)->setFeature(DOMParserImpl::NAMESPACES, true);
	$nc(this->fConfiguration)->setFeature(DOMParserImpl::DYNAMIC_VALIDATION, false);
	$nc(this->fConfiguration)->setFeature($AbstractDOMParser::CREATE_ENTITY_REF_NODES, false);
	$nc(this->fConfiguration)->setFeature($AbstractDOMParser::CREATE_CDATA_NODES_FEATURE, false);
	$nc(this->fConfiguration)->setFeature($Constants::DOM_CANONICAL_FORM, false);
	$nc(this->fConfiguration)->setFeature($Constants::DOM_CHARSET_OVERRIDES_XML_ENCODING, true);
	$nc(this->fConfiguration)->setFeature($Constants::DOM_SPLIT_CDATA, true);
	$nc(this->fConfiguration)->setFeature($Constants::DOM_SUPPORTED_MEDIATYPES_ONLY, false);
	$nc(this->fConfiguration)->setFeature($Constants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS, true);
	$nc(this->fConfiguration)->setFeature($Constants::DOM_CERTIFIED, true);
	try {
		$nc(this->fConfiguration)->setFeature(DOMParserImpl::NORMALIZE_DATA, false);
	} catch ($XMLConfigurationException& exc) {
	}
}

void DOMParserImpl::init$($SymbolTable* symbolTable) {
	$useLocalCurrentObjectStackCache();
	DOMParserImpl::init$(static_cast<$XMLParserConfiguration*>($$new($XIncludeAwareParserConfiguration)));
	$init($Constants);
	$nc(this->fConfiguration)->setProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}), symbolTable);
}

void DOMParserImpl::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	$useLocalCurrentObjectStackCache();
	DOMParserImpl::init$(static_cast<$XMLParserConfiguration*>($$new($XIncludeAwareParserConfiguration)));
	$init($Constants);
	$nc(this->fConfiguration)->setProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}), symbolTable);
	$nc(this->fConfiguration)->setProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}), grammarPool);
}

void DOMParserImpl::reset() {
	$AbstractDOMParser::reset();
	$init($Constants);
	this->fNamespaceDeclarations = $nc(this->fConfiguration)->getFeature($Constants::DOM_NAMESPACE_DECLARATIONS);
	if (this->fSkippedElemStack != nullptr) {
		$nc(this->fSkippedElemStack)->removeAllElements();
	}
	this->fRejectedElementDepth = 0;
	this->fFilterReject = false;
	$set(this, fSchemaType, nullptr);
}

$DOMConfiguration* DOMParserImpl::getDomConfig() {
	return this;
}

$LSParserFilter* DOMParserImpl::getFilter() {
	return this->fDOMFilter;
}

void DOMParserImpl::setFilter($LSParserFilter* filter) {
	$set(this, fDOMFilter, filter);
	if (this->fSkippedElemStack == nullptr) {
		$set(this, fSkippedElemStack, $new($Stack));
	}
}

void DOMParserImpl::setParameter($String* name, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Boolean, value)) {
		bool state = $nc(($cast($Boolean, value)))->booleanValue();
		try {
			$init($Constants);
			if ($nc(name)->equalsIgnoreCase($Constants::DOM_COMMENTS)) {
				$init($AbstractDOMParser);
				$nc(this->fConfiguration)->setFeature($AbstractDOMParser::INCLUDE_COMMENTS_FEATURE, state);
			} else {
				if (name->equalsIgnoreCase($Constants::DOM_DATATYPE_NORMALIZATION)) {
					$nc(this->fConfiguration)->setFeature(DOMParserImpl::NORMALIZE_DATA, state);
				} else {
					if (name->equalsIgnoreCase($Constants::DOM_ENTITIES)) {
						$init($AbstractDOMParser);
						$nc(this->fConfiguration)->setFeature($AbstractDOMParser::CREATE_ENTITY_REF_NODES, state);
					} else {
						if (name->equalsIgnoreCase($Constants::DOM_DISALLOW_DOCTYPE)) {
							$nc(this->fConfiguration)->setFeature(DOMParserImpl::DISALLOW_DOCTYPE_DECL_FEATURE, state);
						} else {
							bool var$5 = name->equalsIgnoreCase($Constants::DOM_SUPPORTED_MEDIATYPES_ONLY);
							bool var$4 = var$5 || name->equalsIgnoreCase($Constants::DOM_NORMALIZE_CHARACTERS);
							bool var$3 = var$4 || name->equalsIgnoreCase($Constants::DOM_CHECK_CHAR_NORMALIZATION);
							if (var$3 || name->equalsIgnoreCase($Constants::DOM_CANONICAL_FORM)) {
								if (state) {
									$init($DOMMessageFormatter);
									$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_SUPPORTED"_s, $$new($ObjectArray, {$of(name)})));
									$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
								}
							} else {
								if (name->equalsIgnoreCase($Constants::DOM_NAMESPACES)) {
									$nc(this->fConfiguration)->setFeature(DOMParserImpl::NAMESPACES, state);
								} else {
									if (name->equalsIgnoreCase($Constants::DOM_INFOSET)) {
										if (state) {
											$nc(this->fConfiguration)->setFeature(DOMParserImpl::NAMESPACES, true);
											$nc(this->fConfiguration)->setFeature($Constants::DOM_NAMESPACE_DECLARATIONS, true);
											$init($AbstractDOMParser);
											$nc(this->fConfiguration)->setFeature($AbstractDOMParser::INCLUDE_COMMENTS_FEATURE, true);
											$nc(this->fConfiguration)->setFeature($AbstractDOMParser::INCLUDE_IGNORABLE_WHITESPACE, true);
											$nc(this->fConfiguration)->setFeature(DOMParserImpl::DYNAMIC_VALIDATION, false);
											$nc(this->fConfiguration)->setFeature($AbstractDOMParser::CREATE_ENTITY_REF_NODES, false);
											$nc(this->fConfiguration)->setFeature(DOMParserImpl::NORMALIZE_DATA, false);
											$nc(this->fConfiguration)->setFeature($AbstractDOMParser::CREATE_CDATA_NODES_FEATURE, false);
										}
									} else {
										if (name->equalsIgnoreCase($Constants::DOM_CDATA_SECTIONS)) {
											$init($AbstractDOMParser);
											$nc(this->fConfiguration)->setFeature($AbstractDOMParser::CREATE_CDATA_NODES_FEATURE, state);
										} else {
											if (name->equalsIgnoreCase($Constants::DOM_NAMESPACE_DECLARATIONS)) {
												$nc(this->fConfiguration)->setFeature($Constants::DOM_NAMESPACE_DECLARATIONS, state);
											} else {
												bool var$7 = name->equalsIgnoreCase($Constants::DOM_WELLFORMED);
												if (var$7 || name->equalsIgnoreCase($Constants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS)) {
													if (!state) {
														$init($DOMMessageFormatter);
														$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_SUPPORTED"_s, $$new($ObjectArray, {$of(name)})));
														$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
													}
												} else {
													if (name->equalsIgnoreCase($Constants::DOM_VALIDATE)) {
														$nc(this->fConfiguration)->setFeature(DOMParserImpl::VALIDATION_FEATURE, state);
														if (this->fSchemaType != $Constants::NS_DTD) {
															$nc(this->fConfiguration)->setFeature(DOMParserImpl::XMLSCHEMA, state);
															$nc(this->fConfiguration)->setFeature(DOMParserImpl::XMLSCHEMA_FULL_CHECKING, state);
														}
														if (state) {
															$nc(this->fConfiguration)->setFeature(DOMParserImpl::DYNAMIC_VALIDATION, false);
														}
													} else {
														if (name->equalsIgnoreCase($Constants::DOM_VALIDATE_IF_SCHEMA)) {
															$nc(this->fConfiguration)->setFeature(DOMParserImpl::DYNAMIC_VALIDATION, state);
															if (state) {
																$nc(this->fConfiguration)->setFeature(DOMParserImpl::VALIDATION_FEATURE, false);
															}
														} else {
															if (name->equalsIgnoreCase($Constants::DOM_ELEMENT_CONTENT_WHITESPACE)) {
																$init($AbstractDOMParser);
																$nc(this->fConfiguration)->setFeature($AbstractDOMParser::INCLUDE_IGNORABLE_WHITESPACE, state);
															} else {
																if (name->equalsIgnoreCase($Constants::DOM_PSVI)) {
																	$nc(this->fConfiguration)->setFeature(DOMParserImpl::PSVI_AUGMENT, true);
																	$init($AbstractDOMParser);
																	$nc(this->fConfiguration)->setProperty($AbstractDOMParser::DOCUMENT_CLASS_NAME, "com.sun.org.apache.xerces.internal.dom.PSVIDocumentImpl"_s);
																} else {
																	$var($String, normalizedName, nullptr);
																	if (name->equals(DOMParserImpl::NAMESPACE_GROWTH)) {
																		$assign(normalizedName, DOMParserImpl::NAMESPACE_GROWTH);
																	} else if (name->equals(DOMParserImpl::TOLERATE_DUPLICATES)) {
																		$assign(normalizedName, DOMParserImpl::TOLERATE_DUPLICATES);
																	} else {
																		$init($Locale);
																		$assign(normalizedName, name->toLowerCase($Locale::ENGLISH));
																	}
																	$nc(this->fConfiguration)->setFeature(normalizedName, state);
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
		} catch ($XMLConfigurationException& e) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_FOUND"_s, $$new($ObjectArray, {$of(name)})));
			$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
		}
	} else {
		$init($Constants);
		if ($nc(name)->equalsIgnoreCase($Constants::DOM_ERROR_HANDLER)) {
			if ($instanceOf($DOMErrorHandler, value) || value == nullptr) {
				try {
					$set(this, fErrorHandler, $new($DOMErrorHandlerWrapper, $cast($DOMErrorHandler, value)));
					$init($XMLParser);
					$nc(this->fConfiguration)->setProperty($XMLParser::ERROR_HANDLER, this->fErrorHandler);
				} catch ($XMLConfigurationException& e) {
				}
			} else {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "TYPE_MISMATCH_ERR"_s, $$new($ObjectArray, {$of(name)})));
				$throwNew($DOMException, $DOMException::TYPE_MISMATCH_ERR, msg);
			}
		} else {
			if (name->equalsIgnoreCase($Constants::DOM_RESOURCE_RESOLVER)) {
				if ($instanceOf($LSResourceResolver, value) || value == nullptr) {
					try {
						$init($XMLParser);
						$nc(this->fConfiguration)->setProperty($XMLParser::ENTITY_RESOLVER, $$new($DOMEntityResolverWrapper, $cast($LSResourceResolver, value)));
					} catch ($XMLConfigurationException& e) {
					}
				} else {
					$init($DOMMessageFormatter);
					$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "TYPE_MISMATCH_ERR"_s, $$new($ObjectArray, {$of(name)})));
					$throwNew($DOMException, $DOMException::TYPE_MISMATCH_ERR, msg);
				}
			} else {
				if (name->equalsIgnoreCase($Constants::DOM_SCHEMA_LOCATION)) {
					if ($instanceOf($String, value) || value == nullptr) {
						try {
							if (value == nullptr) {
								$set(this, fSchemaLocation, nullptr);
								$nc(this->fConfiguration)->setProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_SOURCE}), nullptr);
							} else {
								$set(this, fSchemaLocation, $cast($String, value));
								$var($StringTokenizer, t, $new($StringTokenizer, this->fSchemaLocation, " \n\t\r"_s));
								if (t->hasMoreTokens()) {
									$var($List, locations, $new($ArrayList));
									locations->add($(t->nextToken()));
									while (t->hasMoreTokens()) {
										locations->add($(t->nextToken()));
									}
									$nc(this->fConfiguration)->setProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_SOURCE}), $(locations->toArray()));
								} else {
									$nc(this->fConfiguration)->setProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_SOURCE}), value);
								}
							}
						} catch ($XMLConfigurationException& e) {
						}
					} else {
						$init($DOMMessageFormatter);
						$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "TYPE_MISMATCH_ERR"_s, $$new($ObjectArray, {$of(name)})));
						$throwNew($DOMException, $DOMException::TYPE_MISMATCH_ERR, msg);
					}
				} else {
					if (name->equalsIgnoreCase($Constants::DOM_SCHEMA_TYPE)) {
						if ($instanceOf($String, value) || value == nullptr) {
							try {
								if (value == nullptr) {
									$nc(this->fConfiguration)->setFeature(DOMParserImpl::XMLSCHEMA, false);
									$nc(this->fConfiguration)->setFeature(DOMParserImpl::XMLSCHEMA_FULL_CHECKING, false);
									$nc(this->fConfiguration)->setProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE}), nullptr);
									$set(this, fSchemaType, nullptr);
								} else {
									if ($nc($of(value))->equals($Constants::NS_XMLSCHEMA)) {
										$nc(this->fConfiguration)->setFeature(DOMParserImpl::XMLSCHEMA, true);
										$nc(this->fConfiguration)->setFeature(DOMParserImpl::XMLSCHEMA_FULL_CHECKING, true);
										$nc(this->fConfiguration)->setProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE}), $Constants::NS_XMLSCHEMA);
										$set(this, fSchemaType, $Constants::NS_XMLSCHEMA);
									} else {
										if ($of(value)->equals($Constants::NS_DTD)) {
											$nc(this->fConfiguration)->setFeature(DOMParserImpl::XMLSCHEMA, false);
											$nc(this->fConfiguration)->setFeature(DOMParserImpl::XMLSCHEMA_FULL_CHECKING, false);
											$nc(this->fConfiguration)->setProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE}), $Constants::NS_DTD);
											$set(this, fSchemaType, $Constants::NS_DTD);
										}
									}
								}
							} catch ($XMLConfigurationException& e) {
							}
						} else {
							$init($DOMMessageFormatter);
							$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "TYPE_MISMATCH_ERR"_s, $$new($ObjectArray, {$of(name)})));
							$throwNew($DOMException, $DOMException::TYPE_MISMATCH_ERR, msg);
						}
					} else {
						$init($AbstractDOMParser);
						if (name->equalsIgnoreCase($AbstractDOMParser::DOCUMENT_CLASS_NAME)) {
							$nc(this->fConfiguration)->setProperty($AbstractDOMParser::DOCUMENT_CLASS_NAME, value);
						} else {
							$init($Locale);
							$var($String, normalizedName, name->toLowerCase($Locale::ENGLISH));
							try {
								$nc(this->fConfiguration)->setProperty(normalizedName, value);
								return;
							} catch ($XMLConfigurationException& e) {
							}
							try {
								if (name->equals(DOMParserImpl::NAMESPACE_GROWTH)) {
									$assign(normalizedName, DOMParserImpl::NAMESPACE_GROWTH);
								} else if (name->equals(DOMParserImpl::TOLERATE_DUPLICATES)) {
									$assign(normalizedName, DOMParserImpl::TOLERATE_DUPLICATES);
								}
								$nc(this->fConfiguration)->getFeature(normalizedName);
								$throw($(newTypeMismatchError(name)));
							} catch ($XMLConfigurationException& e) {
							}
							$throw($(newFeatureNotFoundError(name)));
						}
					}
				}
			}
		}
	}
}

$Object* DOMParserImpl::getParameter($String* name) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	if ($nc(name)->equalsIgnoreCase($Constants::DOM_COMMENTS)) {
		$init($AbstractDOMParser);
		$init($Boolean);
		return $of(($nc(this->fConfiguration)->getFeature($AbstractDOMParser::INCLUDE_COMMENTS_FEATURE)) ? $Boolean::TRUE : $Boolean::FALSE);
	} else {
		if (name->equalsIgnoreCase($Constants::DOM_DATATYPE_NORMALIZATION)) {
			$init($Boolean);
			return $of(($nc(this->fConfiguration)->getFeature(DOMParserImpl::NORMALIZE_DATA)) ? $Boolean::TRUE : $Boolean::FALSE);
		} else {
			if (name->equalsIgnoreCase($Constants::DOM_ENTITIES)) {
				$init($AbstractDOMParser);
				$init($Boolean);
				return $of(($nc(this->fConfiguration)->getFeature($AbstractDOMParser::CREATE_ENTITY_REF_NODES)) ? $Boolean::TRUE : $Boolean::FALSE);
			} else {
				if (name->equalsIgnoreCase($Constants::DOM_NAMESPACES)) {
					$init($Boolean);
					return $of(($nc(this->fConfiguration)->getFeature(DOMParserImpl::NAMESPACES)) ? $Boolean::TRUE : $Boolean::FALSE);
				} else {
					if (name->equalsIgnoreCase($Constants::DOM_VALIDATE)) {
						$init($Boolean);
						return $of(($nc(this->fConfiguration)->getFeature(DOMParserImpl::VALIDATION_FEATURE)) ? $Boolean::TRUE : $Boolean::FALSE);
					} else {
						if (name->equalsIgnoreCase($Constants::DOM_VALIDATE_IF_SCHEMA)) {
							$init($Boolean);
							return $of(($nc(this->fConfiguration)->getFeature(DOMParserImpl::DYNAMIC_VALIDATION)) ? $Boolean::TRUE : $Boolean::FALSE);
						} else {
							if (name->equalsIgnoreCase($Constants::DOM_ELEMENT_CONTENT_WHITESPACE)) {
								$init($AbstractDOMParser);
								$init($Boolean);
								return $of(($nc(this->fConfiguration)->getFeature($AbstractDOMParser::INCLUDE_IGNORABLE_WHITESPACE)) ? $Boolean::TRUE : $Boolean::FALSE);
							} else {
								if (name->equalsIgnoreCase($Constants::DOM_DISALLOW_DOCTYPE)) {
									$init($Boolean);
									return $of(($nc(this->fConfiguration)->getFeature(DOMParserImpl::DISALLOW_DOCTYPE_DECL_FEATURE)) ? $Boolean::TRUE : $Boolean::FALSE);
								} else {
									if (name->equalsIgnoreCase($Constants::DOM_INFOSET)) {
										bool var$6 = $nc(this->fConfiguration)->getFeature(DOMParserImpl::NAMESPACES);
										bool var$5 = var$6 && $nc(this->fConfiguration)->getFeature($Constants::DOM_NAMESPACE_DECLARATIONS);
										$init($AbstractDOMParser);
										bool var$4 = var$5 && $nc(this->fConfiguration)->getFeature($AbstractDOMParser::INCLUDE_COMMENTS_FEATURE);
										bool var$3 = var$4 && $nc(this->fConfiguration)->getFeature($AbstractDOMParser::INCLUDE_IGNORABLE_WHITESPACE);
										bool var$2 = var$3 && !$nc(this->fConfiguration)->getFeature(DOMParserImpl::DYNAMIC_VALIDATION);
										bool var$1 = var$2 && !$nc(this->fConfiguration)->getFeature($AbstractDOMParser::CREATE_ENTITY_REF_NODES);
										bool var$0 = var$1 && !$nc(this->fConfiguration)->getFeature(DOMParserImpl::NORMALIZE_DATA);
										bool infoset = var$0 && !$nc(this->fConfiguration)->getFeature($AbstractDOMParser::CREATE_CDATA_NODES_FEATURE);
										$init($Boolean);
										return $of((infoset) ? $Boolean::TRUE : $Boolean::FALSE);
									} else {
										if (name->equalsIgnoreCase($Constants::DOM_CDATA_SECTIONS)) {
											$init($AbstractDOMParser);
											$init($Boolean);
											return $of(($nc(this->fConfiguration)->getFeature($AbstractDOMParser::CREATE_CDATA_NODES_FEATURE)) ? $Boolean::TRUE : $Boolean::FALSE);
										} else {
											bool var$8 = name->equalsIgnoreCase($Constants::DOM_CHECK_CHAR_NORMALIZATION);
											if (var$8 || name->equalsIgnoreCase($Constants::DOM_NORMALIZE_CHARACTERS)) {
												$init($Boolean);
												return $of($Boolean::FALSE);
											} else {
												bool var$20 = name->equalsIgnoreCase($Constants::DOM_NAMESPACE_DECLARATIONS);
												bool var$19 = var$20 || name->equalsIgnoreCase($Constants::DOM_WELLFORMED);
												bool var$18 = var$19 || name->equalsIgnoreCase($Constants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS);
												bool var$17 = var$18 || name->equalsIgnoreCase($Constants::DOM_CANONICAL_FORM);
												bool var$16 = var$17 || name->equalsIgnoreCase($Constants::DOM_SUPPORTED_MEDIATYPES_ONLY);
												bool var$15 = var$16 || name->equalsIgnoreCase($Constants::DOM_SPLIT_CDATA);
												if (var$15 || name->equalsIgnoreCase($Constants::DOM_CHARSET_OVERRIDES_XML_ENCODING)) {
													$init($Locale);
													$init($Boolean);
													return $of(($nc(this->fConfiguration)->getFeature($(name->toLowerCase($Locale::ENGLISH)))) ? $Boolean::TRUE : $Boolean::FALSE);
												} else {
													if (name->equalsIgnoreCase($Constants::DOM_ERROR_HANDLER)) {
														if (this->fErrorHandler != nullptr) {
															return $of($nc(this->fErrorHandler)->getErrorHandler());
														}
														return $of(nullptr);
													} else {
														if (name->equalsIgnoreCase($Constants::DOM_RESOURCE_RESOLVER)) {
															try {
																$init($XMLParser);
																$var($XMLEntityResolver, entityResolver, $cast($XMLEntityResolver, $nc(this->fConfiguration)->getProperty($XMLParser::ENTITY_RESOLVER)));
																if (entityResolver != nullptr && $instanceOf($DOMEntityResolverWrapper, entityResolver)) {
																	return $of($nc(($cast($DOMEntityResolverWrapper, entityResolver)))->getEntityResolver());
																}
																return $of(nullptr);
															} catch ($XMLConfigurationException& e) {
															}
														} else {
															if (name->equalsIgnoreCase($Constants::DOM_SCHEMA_TYPE)) {
																return $of($nc(this->fConfiguration)->getProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE})));
															} else {
																if (name->equalsIgnoreCase($Constants::DOM_SCHEMA_LOCATION)) {
																	return $of(this->fSchemaLocation);
																} else if (name->equalsIgnoreCase(DOMParserImpl::SYMBOL_TABLE)) {
																	return $of($nc(this->fConfiguration)->getProperty(DOMParserImpl::SYMBOL_TABLE));
																} else {
																	$init($AbstractDOMParser);
																	if (name->equalsIgnoreCase($AbstractDOMParser::DOCUMENT_CLASS_NAME)) {
																		return $of($nc(this->fConfiguration)->getProperty($AbstractDOMParser::DOCUMENT_CLASS_NAME));
																	} else {
																		$var($String, normalizedName, nullptr);
																		if (name->equals(DOMParserImpl::NAMESPACE_GROWTH)) {
																			$assign(normalizedName, DOMParserImpl::NAMESPACE_GROWTH);
																		} else if (name->equals(DOMParserImpl::TOLERATE_DUPLICATES)) {
																			$assign(normalizedName, DOMParserImpl::TOLERATE_DUPLICATES);
																		} else {
																			$init($Locale);
																			$assign(normalizedName, name->toLowerCase($Locale::ENGLISH));
																		}
																		try {
																			$init($Boolean);
																			return $of($nc(this->fConfiguration)->getFeature(normalizedName) ? $Boolean::TRUE : $Boolean::FALSE);
																		} catch ($XMLConfigurationException& e) {
																		}
																		try {
																			return $of($nc(this->fConfiguration)->getProperty(normalizedName));
																		} catch ($XMLConfigurationException& e) {
																		}
																		$throw($(newFeatureNotFoundError(name)));
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
		}
	}
	return $of(nullptr);
}

bool DOMParserImpl::canSetParameter($String* name, Object$* value) {
	if (value == nullptr) {
		return true;
	}
	if ($instanceOf($Boolean, value)) {
		bool state = $nc(($cast($Boolean, value)))->booleanValue();
		$init($Constants);
		bool var$2 = $nc(name)->equalsIgnoreCase($Constants::DOM_SUPPORTED_MEDIATYPES_ONLY);
		bool var$1 = var$2 || $nc(name)->equalsIgnoreCase($Constants::DOM_NORMALIZE_CHARACTERS);
		bool var$0 = var$1 || $nc(name)->equalsIgnoreCase($Constants::DOM_CHECK_CHAR_NORMALIZATION);
		if (var$0 || $nc(name)->equalsIgnoreCase($Constants::DOM_CANONICAL_FORM)) {
			return (state) ? false : true;
		} else {
			bool var$4 = name->equalsIgnoreCase($Constants::DOM_WELLFORMED);
			if (var$4 || name->equalsIgnoreCase($Constants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS)) {
				return (state) ? true : false;
			} else {
				bool var$28 = name->equalsIgnoreCase($Constants::DOM_CDATA_SECTIONS);
				bool var$27 = var$28 || name->equalsIgnoreCase($Constants::DOM_CHARSET_OVERRIDES_XML_ENCODING);
				bool var$26 = var$27 || name->equalsIgnoreCase($Constants::DOM_COMMENTS);
				bool var$25 = var$26 || name->equalsIgnoreCase($Constants::DOM_DATATYPE_NORMALIZATION);
				bool var$24 = var$25 || name->equalsIgnoreCase($Constants::DOM_DISALLOW_DOCTYPE);
				bool var$23 = var$24 || name->equalsIgnoreCase($Constants::DOM_ENTITIES);
				bool var$22 = var$23 || name->equalsIgnoreCase($Constants::DOM_INFOSET);
				bool var$21 = var$22 || name->equalsIgnoreCase($Constants::DOM_NAMESPACES);
				bool var$20 = var$21 || name->equalsIgnoreCase($Constants::DOM_NAMESPACE_DECLARATIONS);
				bool var$19 = var$20 || name->equalsIgnoreCase($Constants::DOM_VALIDATE);
				bool var$18 = var$19 || name->equalsIgnoreCase($Constants::DOM_VALIDATE_IF_SCHEMA);
				bool var$17 = var$18 || name->equalsIgnoreCase($Constants::DOM_ELEMENT_CONTENT_WHITESPACE);
				if (var$17 || name->equalsIgnoreCase($Constants::DOM_XMLDECL)) {
					return true;
				}
			}
		}
		try {
			$var($String, normalizedName, nullptr);
			if ($nc(name)->equalsIgnoreCase(DOMParserImpl::NAMESPACE_GROWTH)) {
				$assign(normalizedName, DOMParserImpl::NAMESPACE_GROWTH);
			} else if (name->equalsIgnoreCase(DOMParserImpl::TOLERATE_DUPLICATES)) {
				$assign(normalizedName, DOMParserImpl::TOLERATE_DUPLICATES);
			} else {
				$init($Locale);
				$assign(normalizedName, name->toLowerCase($Locale::ENGLISH));
			}
			$nc(this->fConfiguration)->getFeature(normalizedName);
			return true;
		} catch ($XMLConfigurationException& e) {
			return false;
		}
	} else {
		$init($Constants);
		if ($nc(name)->equalsIgnoreCase($Constants::DOM_ERROR_HANDLER)) {
			if ($instanceOf($DOMErrorHandler, value) || value == nullptr) {
				return true;
			}
			return false;
		} else {
			if (name->equalsIgnoreCase($Constants::DOM_RESOURCE_RESOLVER)) {
				if ($instanceOf($LSResourceResolver, value) || value == nullptr) {
					return true;
				}
				return false;
			} else {
				if (name->equalsIgnoreCase($Constants::DOM_SCHEMA_TYPE)) {
					bool var$29 = $instanceOf($String, value);
					if (var$29) {
						bool var$30 = $nc($of(value))->equals($Constants::NS_XMLSCHEMA);
						var$29 = (var$30 || $nc($of(value))->equals($Constants::NS_DTD));
					}
					if ((var$29) || value == nullptr) {
						return true;
					}
					return false;
				} else {
					if (name->equalsIgnoreCase($Constants::DOM_SCHEMA_LOCATION)) {
						if ($instanceOf($String, value) || value == nullptr) {
							return true;
						}
						return false;
					} else {
						$init($AbstractDOMParser);
						if (name->equalsIgnoreCase($AbstractDOMParser::DOCUMENT_CLASS_NAME)) {
							return true;
						}
					}
				}
			}
		}
		return false;
	}
}

$DOMStringList* DOMParserImpl::getParameterNames() {
	if (this->fRecognizedParameters == nullptr) {
		$var($List, parameters, $new($ArrayList));
		$init($Constants);
		parameters->add($Constants::DOM_NAMESPACES);
		parameters->add($Constants::DOM_CDATA_SECTIONS);
		parameters->add($Constants::DOM_CANONICAL_FORM);
		parameters->add($Constants::DOM_NAMESPACE_DECLARATIONS);
		parameters->add($Constants::DOM_SPLIT_CDATA);
		parameters->add($Constants::DOM_ENTITIES);
		parameters->add($Constants::DOM_VALIDATE_IF_SCHEMA);
		parameters->add($Constants::DOM_VALIDATE);
		parameters->add($Constants::DOM_DATATYPE_NORMALIZATION);
		parameters->add($Constants::DOM_CHARSET_OVERRIDES_XML_ENCODING);
		parameters->add($Constants::DOM_CHECK_CHAR_NORMALIZATION);
		parameters->add($Constants::DOM_SUPPORTED_MEDIATYPES_ONLY);
		parameters->add($Constants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS);
		parameters->add($Constants::DOM_NORMALIZE_CHARACTERS);
		parameters->add($Constants::DOM_WELLFORMED);
		parameters->add($Constants::DOM_INFOSET);
		parameters->add($Constants::DOM_DISALLOW_DOCTYPE);
		parameters->add($Constants::DOM_ELEMENT_CONTENT_WHITESPACE);
		parameters->add($Constants::DOM_COMMENTS);
		parameters->add($Constants::DOM_ERROR_HANDLER);
		parameters->add($Constants::DOM_RESOURCE_RESOLVER);
		parameters->add($Constants::DOM_SCHEMA_LOCATION);
		parameters->add($Constants::DOM_SCHEMA_TYPE);
		$set(this, fRecognizedParameters, $new($DOMStringListImpl, parameters));
	}
	return this->fRecognizedParameters;
}

$Document* DOMParserImpl::parseURI($String* uri) {
	$useLocalCurrentObjectStackCache();
	if (this->fBusy) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, msg);
	}
	$var($XMLInputSource, source, $new($XMLInputSource, nullptr, uri, nullptr, false));
	try {
		$set(this, currentThread, $Thread::currentThread());
		this->fBusy = true;
		parse(source);
		this->fBusy = false;
		if (this->abortNow && $nc(this->currentThread)->isInterrupted()) {
			this->abortNow = false;
			$Thread::interrupted();
		}
	} catch ($Exception& e) {
		this->fBusy = false;
		if (this->abortNow && $nc(this->currentThread)->isInterrupted()) {
			$Thread::interrupted();
		}
		if (this->abortNow) {
			this->abortNow = false;
			restoreHandlers();
			return nullptr;
		}
		$init($AbstractDOMParser$Abort);
		if (!$equals(e, $AbstractDOMParser$Abort::INSTANCE)) {
			if (!($instanceOf($XMLParseException, e)) && this->fErrorHandler != nullptr) {
				$var($DOMErrorImpl, error, $new($DOMErrorImpl));
				$set(error, fException, e);
				$set(error, fMessage, e->getMessage());
				error->fSeverity = $DOMError::SEVERITY_FATAL_ERROR;
				$nc($($nc(this->fErrorHandler)->getErrorHandler()))->handleError(error);
			}
			$throw($cast($LSException, $($nc($($DOMUtil::createLSException($LSException::PARSE_ERR, e)))->fillInStackTrace())));
		}
	}
	$var($Document, doc, getDocument());
	dropDocumentReferences();
	return doc;
}

$Document* DOMParserImpl::parse($LSInput* is) {
	$useLocalCurrentObjectStackCache();
	$var($XMLInputSource, xmlInputSource, dom2xmlInputSource(is));
	if (this->fBusy) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, msg);
	}
	try {
		$set(this, currentThread, $Thread::currentThread());
		this->fBusy = true;
		parse(xmlInputSource);
		this->fBusy = false;
		if (this->abortNow && $nc(this->currentThread)->isInterrupted()) {
			this->abortNow = false;
			$Thread::interrupted();
		}
	} catch ($Exception& e) {
		this->fBusy = false;
		if (this->abortNow && $nc(this->currentThread)->isInterrupted()) {
			$Thread::interrupted();
		}
		if (this->abortNow) {
			this->abortNow = false;
			restoreHandlers();
			return nullptr;
		}
		$init($AbstractDOMParser$Abort);
		if (!$equals(e, $AbstractDOMParser$Abort::INSTANCE)) {
			if (!($instanceOf($XMLParseException, e)) && this->fErrorHandler != nullptr) {
				$var($DOMErrorImpl, error, $new($DOMErrorImpl));
				$set(error, fException, e);
				$set(error, fMessage, e->getMessage());
				error->fSeverity = $DOMError::SEVERITY_FATAL_ERROR;
				$nc($($nc(this->fErrorHandler)->getErrorHandler()))->handleError(error);
			}
			$throw($cast($LSException, $($nc($($DOMUtil::createLSException($LSException::PARSE_ERR, e)))->fillInStackTrace())));
		}
	}
	$var($Document, doc, getDocument());
	dropDocumentReferences();
	return doc;
}

void DOMParserImpl::restoreHandlers() {
	$nc(this->fConfiguration)->setDocumentHandler(this);
	$nc(this->fConfiguration)->setDTDHandler(this);
	$nc(this->fConfiguration)->setDTDContentModelHandler(this);
}

$Node* DOMParserImpl::parseWithContext($LSInput* is, $Node* cnode, int16_t action) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Not supported"_s);
	$shouldNotReachHere();
}

$XMLInputSource* DOMParserImpl::dom2xmlInputSource($LSInput* is) {
	$useLocalCurrentObjectStackCache();
	$var($XMLInputSource, xis, nullptr);
	if ($nc(is)->getCharacterStream() != nullptr) {
		$var($String, var$0, is->getPublicId());
		$var($String, var$1, is->getSystemId());
		$var($String, var$2, is->getBaseURI());
		$assign(xis, $new($XMLInputSource, var$0, var$1, var$2, $(is->getCharacterStream()), "UTF-16"_s));
	} else if (is->getByteStream() != nullptr) {
		$var($String, var$3, is->getPublicId());
		$var($String, var$4, is->getSystemId());
		$var($String, var$5, is->getBaseURI());
		$var($InputStream, var$6, is->getByteStream());
		$assign(xis, $new($XMLInputSource, var$3, var$4, var$5, var$6, $(is->getEncoding())));
	} else {
		bool var$8 = is->getStringData() != nullptr;
		if (var$8 && $nc($(is->getStringData()))->length() > 0) {
			$var($String, var$9, is->getPublicId());
			$var($String, var$10, is->getSystemId());
			$var($String, var$11, is->getBaseURI());
			$assign(xis, $new($XMLInputSource, var$9, var$10, var$11, static_cast<$Reader*>($$new($StringReader, $(is->getStringData()))), "UTF-16"_s));
		} else {
			bool var$16 = is->getSystemId() != nullptr;
			bool var$15 = (var$16 && $nc($(is->getSystemId()))->length() > 0);
			if (!var$15) {
				bool var$17 = is->getPublicId() != nullptr;
				var$15 = (var$17 && $nc($(is->getPublicId()))->length() > 0);
			}
			if (var$15) {
				$var($String, var$18, is->getPublicId());
				$var($String, var$19, is->getSystemId());
				$assign(xis, $new($XMLInputSource, var$18, var$19, $(is->getBaseURI()), false));
			} else {
				if (this->fErrorHandler != nullptr) {
					$var($DOMErrorImpl, error, $new($DOMErrorImpl));
					$set(error, fType, "no-input-specified"_s);
					$set(error, fMessage, "no-input-specified"_s);
					error->fSeverity = $DOMError::SEVERITY_FATAL_ERROR;
					$nc($($nc(this->fErrorHandler)->getErrorHandler()))->handleError(error);
				}
				$throwNew($LSException, $LSException::PARSE_ERR, "no-input-specified"_s);
			}
		}
	}
	return xis;
}

bool DOMParserImpl::getAsync() {
	return false;
}

bool DOMParserImpl::getBusy() {
	return this->fBusy;
}

void DOMParserImpl::abort() {
	if (this->fBusy) {
		this->fBusy = false;
		if (this->currentThread != nullptr) {
			this->abortNow = true;
			if (this->abortHandler == nullptr) {
				$set(this, abortHandler, $new($DOMParserImpl$AbortHandler, this));
			}
			$nc(this->fConfiguration)->setDocumentHandler(this->abortHandler);
			$nc(this->fConfiguration)->setDTDHandler(this->abortHandler);
			$nc(this->fConfiguration)->setDTDContentModelHandler(this->abortHandler);
			if (this->currentThread == $Thread::currentThread()) {
				$init($AbstractDOMParser$Abort);
				$throw($AbstractDOMParser$Abort::INSTANCE);
			}
			$nc(this->currentThread)->interrupt();
		}
	}
	return;
}

void DOMParserImpl::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	if (!this->fNamespaceDeclarations && this->fNamespaceAware) {
		int32_t len = $nc(attributes)->getLength();
		for (int32_t i = len - 1; i >= 0; --i) {
			$init($XMLSymbols);
			bool var$0 = $XMLSymbols::PREFIX_XMLNS == attributes->getPrefix(i);
			if (var$0 || $XMLSymbols::PREFIX_XMLNS == attributes->getQName(i)) {
				attributes->removeAttributeAt(i);
			}
		}
	}
	$AbstractDOMParser::startElement(element, attributes, augs);
}

$DOMException* DOMParserImpl::newFeatureNotFoundError($String* name) {
	$init(DOMParserImpl);
	$useLocalCurrentObjectStackCache();
	$init($DOMMessageFormatter);
	$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_FOUND"_s, $$new($ObjectArray, {$of(name)})));
	return $new($DOMException, $DOMException::NOT_FOUND_ERR, msg);
}

$DOMException* DOMParserImpl::newTypeMismatchError($String* name) {
	$init(DOMParserImpl);
	$useLocalCurrentObjectStackCache();
	$init($DOMMessageFormatter);
	$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "TYPE_MISMATCH_ERR"_s, $$new($ObjectArray, {$of(name)})));
	return $new($DOMException, $DOMException::TYPE_MISMATCH_ERR, msg);
}

DOMParserImpl::DOMParserImpl() {
}

void clinit$DOMParserImpl($Class* class$) {
	$init($Constants);
	$assignStatic(DOMParserImpl::NAMESPACES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
	$assignStatic(DOMParserImpl::VALIDATION_FEATURE, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(DOMParserImpl::XMLSCHEMA, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_VALIDATION_FEATURE}));
	$assignStatic(DOMParserImpl::XMLSCHEMA_FULL_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_FULL_CHECKING}));
	$assignStatic(DOMParserImpl::DYNAMIC_VALIDATION, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::DYNAMIC_VALIDATION_FEATURE}));
	$assignStatic(DOMParserImpl::NORMALIZE_DATA, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_NORMALIZED_VALUE}));
	$assignStatic(DOMParserImpl::DISALLOW_DOCTYPE_DECL_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::DISALLOW_DOCTYPE_DECL_FEATURE}));
	$assignStatic(DOMParserImpl::NAMESPACE_GROWTH, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NAMESPACE_GROWTH_FEATURE}));
	$assignStatic(DOMParserImpl::TOLERATE_DUPLICATES, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::TOLERATE_DUPLICATES_FEATURE}));
	$assignStatic(DOMParserImpl::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(DOMParserImpl::PSVI_AUGMENT, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_AUGMENT_PSVI}));
}

$Class* DOMParserImpl::load$($String* name, bool initialize) {
	$loadClass(DOMParserImpl, name, initialize, &_DOMParserImpl_ClassInfo_, clinit$DOMParserImpl, allocate$DOMParserImpl);
	return class$;
}

$Class* DOMParserImpl::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com