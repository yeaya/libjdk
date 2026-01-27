#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/Translet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/AbsoluteIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/ArrayNodeListIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SingletonIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/StepIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary$1.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary$2.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary$3.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary$4.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/InternalRuntimeError.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/Node.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/Operators.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeProxy.h>
#include <com/sun/org/apache/xml/internal/serializer/NamespaceMappings.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/utils/XML11Char.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/ThreadLocal.h>
#include <java/text/DecimalFormat.h>
#include <java/text/DecimalFormatSymbols.h>
#include <java/text/FieldPosition.h>
#include <java/text/MessageFormat.h>
#include <java/text/NumberFormat.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/dom/DOMSource.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef ATTRIBUTE_NODE
#undef AXIS_SUPPORT_ERR
#undef CANT_RESOLVE_RELATIVE_URI_ERR
#undef CDATA_SECTION_NODE
#undef CHILD
#undef COMMENT_NODE
#undef DATA_CONVERSION_ERR
#undef DOM_ADAPTER_INIT_ERR
#undef DOUBLE_FRACTION_DIGITS
#undef ELEMENT_NODE
#undef EMPTYSTRING
#undef END
#undef ENTITY_REFERENCE_NODE
#undef EQ
#undef EQUALITY_EXPR_ERR
#undef ERROR_MESSAGES_KEY
#undef EXTERNAL_FUNC_ERR
#undef FORMAT_NUMBER_ERR
#undef GE
#undef GT
#undef INVALID_ARGUMENT_ERR
#undef INVALID_NCNAME_ERR
#undef INVALID_QNAME_ERR
#undef ITERATOR_CLONE_ERR
#undef LE
#undef LT
#undef MAX_VALUE
#undef NAMESPACES_SUPPORT_ERR
#undef NAMESPACE_PREFIX_ERR
#undef NE
#undef NULL
#undef PARSER_DTD_SUPPORT_ERR
#undef PROCESSING_INSTRUCTION_NODE
#undef ROOTNODE
#undef RUN_TIME_COPY_ERR
#undef RUN_TIME_INTERNAL_ERR
#undef STRAY_ATTRIBUTE_ERR
#undef STRAY_NAMESPACE_ERR
#undef TEXT_NODE
#undef TYPE
#undef TYPED_AXIS_SUPPORT_ERR
#undef UNALLOWED_EXTENSION_ELEMENT_ERR
#undef UNALLOWED_EXTENSION_FUNCTION_ERR
#undef UNKNOWN_TRANSLET_VERSION_ERR
#undef UNSUPPORTED_EXT_ERR
#undef UNSUPPORTED_XSL_ERR
#undef US
#undef XMLNS_PREFIX

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $Translet = ::com::sun::org::apache::xalan::internal::xsltc::Translet;
using $AbsoluteIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::AbsoluteIterator;
using $ArrayNodeListIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::ArrayNodeListIterator;
using $DOMAdapter = ::com::sun::org::apache::xalan::internal::xsltc::dom::DOMAdapter;
using $MultiDOM = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiDOM;
using $SingletonIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::SingletonIterator;
using $StepIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::StepIterator;
using $AbstractTranslet = ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet;
using $BasisLibrary$1 = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary$1;
using $BasisLibrary$2 = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary$2;
using $BasisLibrary$3 = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary$3;
using $BasisLibrary$4 = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary$4;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::runtime::Constants;
using $InternalRuntimeError = ::com::sun::org::apache::xalan::internal::xsltc::runtime::InternalRuntimeError;
using $1Node = ::com::sun::org::apache::xalan::internal::xsltc::runtime::Node;
using $Operators = ::com::sun::org::apache::xalan::internal::xsltc::runtime::Operators;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMNodeProxy = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeProxy;
using $NamespaceMappings = ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $XML11Char = ::com::sun::org::apache::xml::internal::utils::XML11Char;
using $PrintStream = ::java::io::PrintStream;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $DecimalFormat = ::java::text::DecimalFormat;
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $FieldPosition = ::java::text::FieldPosition;
using $MessageFormat = ::java::text::MessageFormat;
using $NumberFormat = ::java::text::NumberFormat;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $Source = ::javax::xml::transform::Source;
using $DOMSource = ::javax::xml::transform::dom::DOMSource;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

$CompoundAttribute _BasisLibrary_MethodAnnotations_positionF35[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _BasisLibrary_FieldInfo_[] = {
	{"EMPTYSTRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasisLibrary, EMPTYSTRING)},
	{"threadLocalStringBuilder", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/lang/StringBuilder;>;", $PRIVATE | $STATIC | $FINAL, $staticField(BasisLibrary, threadLocalStringBuilder)},
	{"threadLocalStringBuffer", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/lang/StringBuffer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(BasisLibrary, threadLocalStringBuffer)},
	{"DOUBLE_FRACTION_DIGITS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasisLibrary, DOUBLE_FRACTION_DIGITS)},
	{"lowerBounds", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasisLibrary, lowerBounds)},
	{"upperBounds", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasisLibrary, upperBounds)},
	{"defaultFormatter", "Ljava/text/DecimalFormat;", nullptr, $PRIVATE | $STATIC, $staticField(BasisLibrary, defaultFormatter)},
	{"xpathFormatter", "Ljava/text/DecimalFormat;", nullptr, $PRIVATE | $STATIC, $staticField(BasisLibrary, xpathFormatter)},
	{"defaultPattern", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasisLibrary, defaultPattern)},
	{"_fieldPosition", "Ljava/text/FieldPosition;", nullptr, $PRIVATE | $STATIC, $staticField(BasisLibrary, _fieldPosition)},
	{"_characterArray", "[C", nullptr, $PRIVATE | $STATIC, $staticField(BasisLibrary, _characterArray)},
	{"threadLocalPrefixIndex", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/util/concurrent/atomic/AtomicInteger;>;", $PRIVATE | $STATIC | $FINAL, $staticField(BasisLibrary, threadLocalPrefixIndex)},
	{"RUN_TIME_INTERNAL_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, RUN_TIME_INTERNAL_ERR)},
	{"RUN_TIME_COPY_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, RUN_TIME_COPY_ERR)},
	{"DATA_CONVERSION_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, DATA_CONVERSION_ERR)},
	{"EXTERNAL_FUNC_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, EXTERNAL_FUNC_ERR)},
	{"EQUALITY_EXPR_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, EQUALITY_EXPR_ERR)},
	{"INVALID_ARGUMENT_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, INVALID_ARGUMENT_ERR)},
	{"FORMAT_NUMBER_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, FORMAT_NUMBER_ERR)},
	{"ITERATOR_CLONE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, ITERATOR_CLONE_ERR)},
	{"AXIS_SUPPORT_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, AXIS_SUPPORT_ERR)},
	{"TYPED_AXIS_SUPPORT_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, TYPED_AXIS_SUPPORT_ERR)},
	{"STRAY_ATTRIBUTE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, STRAY_ATTRIBUTE_ERR)},
	{"STRAY_NAMESPACE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, STRAY_NAMESPACE_ERR)},
	{"NAMESPACE_PREFIX_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, NAMESPACE_PREFIX_ERR)},
	{"DOM_ADAPTER_INIT_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, DOM_ADAPTER_INIT_ERR)},
	{"PARSER_DTD_SUPPORT_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, PARSER_DTD_SUPPORT_ERR)},
	{"NAMESPACES_SUPPORT_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, NAMESPACES_SUPPORT_ERR)},
	{"CANT_RESOLVE_RELATIVE_URI_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, CANT_RESOLVE_RELATIVE_URI_ERR)},
	{"UNSUPPORTED_XSL_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, UNSUPPORTED_XSL_ERR)},
	{"UNSUPPORTED_EXT_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, UNSUPPORTED_EXT_ERR)},
	{"UNKNOWN_TRANSLET_VERSION_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, UNKNOWN_TRANSLET_VERSION_ERR)},
	{"INVALID_QNAME_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, INVALID_QNAME_ERR)},
	{"INVALID_NCNAME_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, INVALID_NCNAME_ERR)},
	{"UNALLOWED_EXTENSION_FUNCTION_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, UNALLOWED_EXTENSION_FUNCTION_ERR)},
	{"UNALLOWED_EXTENSION_ELEMENT_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, UNALLOWED_EXTENSION_ELEMENT_ERR)},
	{"m_bundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(BasisLibrary, m_bundle)},
	{"ERROR_MESSAGES_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasisLibrary, ERROR_MESSAGES_KEY)},
	{}
};

$MethodInfo _BasisLibrary_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BasisLibrary, init$, void)},
	{"booleanF", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, booleanF, bool, Object$*)},
	{"checkAttribQName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, checkAttribQName, void, $String*)},
	{"checkNCName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, checkNCName, void, $String*)},
	{"checkQName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, checkQName, void, $String*)},
	{"compare", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;ILcom/sun/org/apache/xalan/internal/xsltc/DOM;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, compare, bool, $DTMAxisIterator*, $DTMAxisIterator*, int32_t, $DOM*)},
	{"compare", "(ILcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;ILcom/sun/org/apache/xalan/internal/xsltc/DOM;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, compare, bool, int32_t, $DTMAxisIterator*, int32_t, $DOM*)},
	{"compare", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;DILcom/sun/org/apache/xalan/internal/xsltc/DOM;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, compare, bool, $DTMAxisIterator*, double, int32_t, $DOM*)},
	{"compare", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Ljava/lang/String;ILcom/sun/org/apache/xalan/internal/xsltc/DOM;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, compare, bool, $DTMAxisIterator*, $String*, int32_t, $DOM*)},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;ILcom/sun/org/apache/xalan/internal/xsltc/DOM;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, compare, bool, Object$*, Object$*, int32_t, $DOM*)},
	{"compareStrings", "(Ljava/lang/String;Ljava/lang/String;ILcom/sun/org/apache/xalan/internal/xsltc/DOM;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(BasisLibrary, compareStrings, bool, $String*, $String*, int32_t, $DOM*)},
	{"consoleOutput", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, consoleOutput, void, $String*)},
	{"copy", "(Ljava/lang/Object;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;ILcom/sun/org/apache/xalan/internal/xsltc/DOM;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, copy, void, Object$*, $SerializationHandler*, int32_t, $DOM*)},
	{"countF", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, countF, int32_t, $DTMAxisIterator*)},
	{"formatNumber", "(DLjava/lang/String;Ljava/text/DecimalFormat;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, formatNumber, $String*, double, $String*, $DecimalFormat*)},
	{"generatePrefix", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, generatePrefix, $String*)},
	{"generate_idF", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, generate_idF, $String*, int32_t)},
	{"getLocalName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, getLocalName, $String*, $String*)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, getPrefix, $String*, $String*)},
	{"getSingleNode", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, getSingleNode, $DTMAxisIterator*, $DTMAxisIterator*)},
	{"getStringLength", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, getStringLength, int32_t, $String*)},
	{"hasSimpleType", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(BasisLibrary, hasSimpleType, bool, Object$*)},
	{"isWhiteSpace", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(BasisLibrary, isWhiteSpace, bool, char16_t)},
	{"mapQNameToJavaName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, mapQNameToJavaName, $String*, $String*)},
	{"namespace_uriF", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, namespace_uriF, $String*, $DTMAxisIterator*, $DOM*)},
	{"namespace_uriF", "(ILcom/sun/org/apache/xalan/internal/xsltc/DOM;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, namespace_uriF, $String*, int32_t, $DOM*)},
	{"node2Iterator", "(Lorg/w3c/dom/Node;Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, node2Iterator, $DTMAxisIterator*, $Node*, $Translet*, $DOM*)},
	{"nodeList2Iterator", "(Lorg/w3c/dom/NodeList;Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, nodeList2Iterator, $DTMAxisIterator*, $NodeList*, $Translet*, $DOM*)},
	{"nodeList2IteratorUsingHandleFromNode", "(Lorg/w3c/dom/NodeList;Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE | $STATIC, $staticMethod(BasisLibrary, nodeList2IteratorUsingHandleFromNode, $DTMAxisIterator*, $NodeList*, $Translet*, $DOM*)},
	{"nodesetF", "(Ljava/lang/Object;)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, nodesetF, $DTMAxisIterator*, Object$*)},
	{"normalize_spaceF", "(ILcom/sun/org/apache/xalan/internal/xsltc/DOM;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, normalize_spaceF, $String*, int32_t, $DOM*)},
	{"normalize_spaceF", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, normalize_spaceF, $String*, $String*)},
	{"numberF", "(ILcom/sun/org/apache/xalan/internal/xsltc/DOM;)D", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, numberF, double, int32_t, $DOM*)},
	{"numberF", "(Ljava/lang/Object;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)D", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, numberF, double, Object$*, $DOM*)},
	{"objectTypeF", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, objectTypeF, $String*, Object$*)},
	{"positionF", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)I", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(BasisLibrary, positionF, int32_t, $DTMAxisIterator*), nullptr, nullptr, _BasisLibrary_MethodAnnotations_positionF35},
	{"realToInt", "(D)I", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, realToInt, int32_t, double)},
	{"realToString", "(D)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, realToString, $String*, double)},
	{"referenceToBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, referenceToBoolean, bool, Object$*)},
	{"referenceToDouble", "(Ljava/lang/Object;)D", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, referenceToDouble, double, Object$*)},
	{"referenceToLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, referenceToLong, int64_t, Object$*)},
	{"referenceToNode", "(Ljava/lang/Object;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, referenceToNode, $Node*, Object$*, $DOM*)},
	{"referenceToNodeList", "(Ljava/lang/Object;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, referenceToNodeList, $NodeList*, Object$*, $DOM*)},
	{"referenceToNodeSet", "(Ljava/lang/Object;)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, referenceToNodeSet, $DTMAxisIterator*, Object$*)},
	{"referenceToResultTree", "(Ljava/lang/Object;)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, referenceToResultTree, $DOM*, Object$*)},
	{"referenceToString", "(Ljava/lang/Object;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, referenceToString, $String*, Object$*, $DOM*)},
	{"replace", "(Ljava/lang/String;CLjava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, replace, $String*, $String*, char16_t, $String*)},
	{"replace", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, replace, $String*, $String*, $String*, $StringArray*)},
	{"resetPrefixIndex", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, resetPrefixIndex, void)},
	{"roundF", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, roundF, double, double)},
	{"runTimeError", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, runTimeError, void, $String*)},
	{"runTimeError", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, runTimeError, void, $String*, $ObjectArray*)},
	{"runTimeError", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, runTimeError, void, $String*, Object$*)},
	{"runTimeError", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, runTimeError, void, $String*, Object$*, Object$*)},
	{"startXslElement", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, startXslElement, $String*, $String*, $String*, $SerializationHandler*, $DOM*, int32_t)},
	{"stringF", "(ILcom/sun/org/apache/xalan/internal/xsltc/DOM;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, stringF, $String*, int32_t, $DOM*)},
	{"stringF", "(Ljava/lang/Object;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, stringF, $String*, Object$*, $DOM*)},
	{"stringF", "(Ljava/lang/Object;ILcom/sun/org/apache/xalan/internal/xsltc/DOM;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, stringF, $String*, Object$*, int32_t, $DOM*)},
	{"stringToInt", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, stringToInt, int32_t, $String*)},
	{"stringToReal", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, stringToReal, double, $String*)},
	{"substringF", "(Ljava/lang/String;D)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, substringF, $String*, $String*, double)},
	{"substringF", "(Ljava/lang/String;DD)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, substringF, $String*, $String*, double, double)},
	{"substring_afterF", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, substring_afterF, $String*, $String*, $String*)},
	{"substring_beforeF", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, substring_beforeF, $String*, $String*, $String*)},
	{"sumF", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)D", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, sumF, double, $DTMAxisIterator*, $DOM*)},
	{"system_propertyF", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, system_propertyF, $String*, $String*)},
	{"testLanguage", "(Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, testLanguage, bool, $String*, $DOM*, int32_t)},
	{"translateF", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, translateF, $String*, $String*, $String*, $String*)},
	{"unallowed_extension_elementF", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, unallowed_extension_elementF, void, $String*)},
	{"unallowed_extension_functionF", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, unallowed_extension_functionF, void, $String*)},
	{"unresolved_externalF", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, unresolved_externalF, void, $String*)},
	{"unsupported_ElementF", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasisLibrary, unsupported_ElementF, void, $String*, bool)},
	{}
};

$InnerClassInfo _BasisLibrary_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$4", nullptr, nullptr, 0},
	{"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$3", nullptr, nullptr, 0},
	{"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$2", nullptr, nullptr, 0},
	{"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasisLibrary_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary",
	"java.lang.Object",
	nullptr,
	_BasisLibrary_FieldInfo_,
	_BasisLibrary_MethodInfo_,
	nullptr,
	nullptr,
	_BasisLibrary_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$4,com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$3,com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$2,com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$1"
};

$Object* allocate$BasisLibrary($Class* clazz) {
	return $of($alloc(BasisLibrary));
}

$String* BasisLibrary::EMPTYSTRING = nullptr;
$ThreadLocal* BasisLibrary::threadLocalStringBuilder = nullptr;
$ThreadLocal* BasisLibrary::threadLocalStringBuffer = nullptr;
double BasisLibrary::lowerBounds = 0.0;
double BasisLibrary::upperBounds = 0.0;
$DecimalFormat* BasisLibrary::defaultFormatter = nullptr;
$DecimalFormat* BasisLibrary::xpathFormatter = nullptr;
$String* BasisLibrary::defaultPattern = nullptr;
$FieldPosition* BasisLibrary::_fieldPosition = nullptr;
$chars* BasisLibrary::_characterArray = nullptr;
$ThreadLocal* BasisLibrary::threadLocalPrefixIndex = nullptr;
$String* BasisLibrary::RUN_TIME_INTERNAL_ERR = nullptr;
$String* BasisLibrary::RUN_TIME_COPY_ERR = nullptr;
$String* BasisLibrary::DATA_CONVERSION_ERR = nullptr;
$String* BasisLibrary::EXTERNAL_FUNC_ERR = nullptr;
$String* BasisLibrary::EQUALITY_EXPR_ERR = nullptr;
$String* BasisLibrary::INVALID_ARGUMENT_ERR = nullptr;
$String* BasisLibrary::FORMAT_NUMBER_ERR = nullptr;
$String* BasisLibrary::ITERATOR_CLONE_ERR = nullptr;
$String* BasisLibrary::AXIS_SUPPORT_ERR = nullptr;
$String* BasisLibrary::TYPED_AXIS_SUPPORT_ERR = nullptr;
$String* BasisLibrary::STRAY_ATTRIBUTE_ERR = nullptr;
$String* BasisLibrary::STRAY_NAMESPACE_ERR = nullptr;
$String* BasisLibrary::NAMESPACE_PREFIX_ERR = nullptr;
$String* BasisLibrary::DOM_ADAPTER_INIT_ERR = nullptr;
$String* BasisLibrary::PARSER_DTD_SUPPORT_ERR = nullptr;
$String* BasisLibrary::NAMESPACES_SUPPORT_ERR = nullptr;
$String* BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR = nullptr;
$String* BasisLibrary::UNSUPPORTED_XSL_ERR = nullptr;
$String* BasisLibrary::UNSUPPORTED_EXT_ERR = nullptr;
$String* BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR = nullptr;
$String* BasisLibrary::INVALID_QNAME_ERR = nullptr;
$String* BasisLibrary::INVALID_NCNAME_ERR = nullptr;
$String* BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR = nullptr;
$String* BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR = nullptr;
$ResourceBundle* BasisLibrary::m_bundle = nullptr;
$String* BasisLibrary::ERROR_MESSAGES_KEY = nullptr;

void BasisLibrary::init$() {
}

int32_t BasisLibrary::countF($DTMAxisIterator* iterator) {
	$init(BasisLibrary);
	return ($nc(iterator)->getLast());
}

int32_t BasisLibrary::positionF($DTMAxisIterator* iterator) {
	$init(BasisLibrary);
	int32_t var$0 = 0;
	if ($nc(iterator)->isReverse()) {
		int32_t var$1 = $nc(iterator)->getLast();
		var$0 = var$1 - iterator->getPosition() + 1;
	} else {
		var$0 = iterator->getPosition();
	}
	return var$0;
}

double BasisLibrary::sumF($DTMAxisIterator* iterator, $DOM* dom) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	try {
		double result = 0.0;
		int32_t node = 0;
		while ((node = $nc(iterator)->next()) != $DTMAxisIterator::END) {
			result += $Double::parseDouble($($nc(dom)->getStringValueX(node)));
		}
		return result;
	} catch ($NumberFormatException& e) {
		$init($Double);
		return $Double::NaN;
	}
	$shouldNotReachHere();
}

$String* BasisLibrary::stringF(int32_t node, $DOM* dom) {
	$init(BasisLibrary);
	return $nc(dom)->getStringValueX(node);
}

$String* BasisLibrary::stringF(Object$* obj, $DOM* dom) {
	$init(BasisLibrary);
	if ($instanceOf($DTMAxisIterator, obj)) {
		return $nc(dom)->getStringValueX($nc($($nc(($cast($DTMAxisIterator, obj)))->reset()))->next());
	} else if ($instanceOf($1Node, obj)) {
		return $nc(dom)->getStringValueX($nc(($cast($1Node, obj)))->node);
	} else if ($instanceOf($DOM, obj)) {
		return $nc(($cast($DOM, obj)))->getStringValue();
	} else {
		return $nc($of(obj))->toString();
	}
}

$String* BasisLibrary::stringF(Object$* obj, int32_t node, $DOM* dom) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($DTMAxisIterator, obj)) {
		return $nc(dom)->getStringValueX($nc($($nc(($cast($DTMAxisIterator, obj)))->reset()))->next());
	} else if ($instanceOf($1Node, obj)) {
		return $nc(dom)->getStringValueX($nc(($cast($1Node, obj)))->node);
	} else if ($instanceOf($DOM, obj)) {
		return $nc(($cast($DOM, obj)))->getStringValue();
	} else if ($instanceOf($Double, obj)) {
		$var($Double, d, $cast($Double, obj));
		$var($String, result, $nc(d)->toString());
		int32_t length = $nc(result)->length();
		bool var$0 = (result->charAt(length - 2) == u'.');
		if (var$0 && (result->charAt(length - 1) == u'0')) {
			return result->substring(0, length - 2);
		} else {
			return result;
		}
	} else {
		return obj != nullptr ? $nc($of(obj))->toString() : ""_s;
	}
}

double BasisLibrary::numberF(int32_t node, $DOM* dom) {
	$init(BasisLibrary);
	return stringToReal($($nc(dom)->getStringValueX(node)));
}

double BasisLibrary::numberF(Object$* obj, $DOM* dom) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Double, obj)) {
		return $nc(($cast($Double, obj)))->doubleValue();
	} else if ($instanceOf($Integer, obj)) {
		return $nc(($cast($Integer, obj)))->doubleValue();
	} else if ($instanceOf($Boolean, obj)) {
		return $nc(($cast($Boolean, obj)))->booleanValue() ? 1.0 : 0.0;
	} else if ($instanceOf($String, obj)) {
		return stringToReal($cast($String, obj));
	} else if ($instanceOf($DTMAxisIterator, obj)) {
		$var($DTMAxisIterator, iter, $cast($DTMAxisIterator, obj));
		return stringToReal($($nc(dom)->getStringValueX($nc($($nc(iter)->reset()))->next())));
	} else if ($instanceOf($1Node, obj)) {
		return stringToReal($($nc(dom)->getStringValueX($nc(($cast($1Node, obj)))->node)));
	} else if ($instanceOf($DOM, obj)) {
		return stringToReal($($nc(($cast($DOM, obj)))->getStringValue()));
	} else {
		$var($String, className, $nc($of(obj))->getClass()->getName());
		runTimeError(BasisLibrary::INVALID_ARGUMENT_ERR, className, "number()"_s);
		return 0.0;
	}
}

double BasisLibrary::roundF(double d) {
	$init(BasisLibrary);
	$init($Double);
	return (d < -0.5 || d > 0.0) ? $Math::floor(d + 0.5) : ((d == 0.0) ? d : ($Double::isNaN(d) ? $Double::NaN : -0.0));
}

bool BasisLibrary::booleanF(Object$* obj) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Double, obj)) {
		double temp = $nc(($cast($Double, obj)))->doubleValue();
		return temp != 0.0 && !$Double::isNaN(temp);
	} else if ($instanceOf($Integer, obj)) {
		return $nc(($cast($Integer, obj)))->doubleValue() != 0;
	} else if ($instanceOf($Boolean, obj)) {
		return $nc(($cast($Boolean, obj)))->booleanValue();
	} else if ($instanceOf($String, obj)) {
		return !$nc(($cast($String, obj)))->equals(BasisLibrary::EMPTYSTRING);
	} else if ($instanceOf($DTMAxisIterator, obj)) {
		$var($DTMAxisIterator, iter, $cast($DTMAxisIterator, obj));
		return $nc($($nc(iter)->reset()))->next() != $DTMAxisIterator::END;
	} else if ($instanceOf($1Node, obj)) {
		return true;
	} else if ($instanceOf($DOM, obj)) {
		$var($String, temp, $nc(($cast($DOM, obj)))->getStringValue());
		return !$nc(temp)->equals(BasisLibrary::EMPTYSTRING);
	} else {
		$var($String, className, $nc($of(obj))->getClass()->getName());
		runTimeError(BasisLibrary::INVALID_ARGUMENT_ERR, className, "boolean()"_s);
	}
	return false;
}

$String* BasisLibrary::substringF($String* value, double start) {
	$init(BasisLibrary);
	if ($Double::isNaN(start)) {
		return (BasisLibrary::EMPTYSTRING);
	}
	int32_t strlen = getStringLength(value);
	int32_t istart = (int32_t)$Math::round(start) - 1;
	if (istart > strlen) {
		return (BasisLibrary::EMPTYSTRING);
	}
	if (istart < 1) {
		istart = 0;
	}
	try {
		istart = $nc(value)->offsetByCodePoints(0, istart);
		return value->substring(istart);
	} catch ($IndexOutOfBoundsException& e) {
		runTimeError(BasisLibrary::RUN_TIME_INTERNAL_ERR, $of("substring()"_s));
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* BasisLibrary::substringF($String* value, double start, double length) {
	$init(BasisLibrary);
	bool var$1 = $Double::isInfinite(start);
	bool var$0 = var$1 || $Double::isNaN(start);
	if (var$0 || $Double::isNaN(length) || length < 0) {
		return (BasisLibrary::EMPTYSTRING);
	}
	int32_t istart = (int32_t)$Math::round(start) - 1;
	int32_t ilength = (int32_t)$Math::round(length);
	int32_t isum = 0;
	if ($Double::isInfinite(length)) {
		isum = $Integer::MAX_VALUE;
	} else {
		isum = istart + ilength;
	}
	int32_t strlen = getStringLength(value);
	if (isum < 0 || istart > strlen) {
		return (BasisLibrary::EMPTYSTRING);
	}
	if (istart < 0) {
		ilength += istart;
		istart = 0;
	}
	try {
		istart = $nc(value)->offsetByCodePoints(0, istart);
		if (isum > strlen) {
			return value->substring(istart);
		} else {
			int32_t offset = value->offsetByCodePoints(istart, ilength);
			return value->substring(istart, offset);
		}
	} catch ($IndexOutOfBoundsException& e) {
		runTimeError(BasisLibrary::RUN_TIME_INTERNAL_ERR, $of("substring()"_s));
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* BasisLibrary::substring_afterF($String* value, $String* substring) {
	$init(BasisLibrary);
	int32_t index = $nc(value)->indexOf(substring);
	if (index >= 0) {
		return value->substring(index + $nc(substring)->length());
	} else {
		return BasisLibrary::EMPTYSTRING;
	}
}

$String* BasisLibrary::substring_beforeF($String* value, $String* substring) {
	$init(BasisLibrary);
	int32_t index = $nc(value)->indexOf(substring);
	if (index >= 0) {
		return value->substring(0, index);
	} else {
		return BasisLibrary::EMPTYSTRING;
	}
}

$String* BasisLibrary::translateF($String* value, $String* from, $String* to) {
	$init(BasisLibrary);
	int32_t tol = $nc(to)->length();
	int32_t froml = $nc(from)->length();
	int32_t valuel = $nc(value)->length();
	$var($StringBuilder, result, $cast($StringBuilder, $nc(BasisLibrary::threadLocalStringBuilder)->get()));
	$nc(result)->setLength(0);
	{
		int32_t j = 0;
		int32_t i = 0;
		for (; i < valuel; ++i) {
			char16_t ch = value->charAt(i);
			for (j = 0; j < froml; ++j) {
				if (ch == from->charAt(j)) {
					if (j < tol) {
						result->append(to->charAt(j));
					}
					break;
				}
			}
			if (j == froml) {
				result->append(ch);
			}
		}
	}
	return result->toString();
}

$String* BasisLibrary::normalize_spaceF(int32_t node, $DOM* dom) {
	$init(BasisLibrary);
	return normalize_spaceF($($nc(dom)->getStringValueX(node)));
}

$String* BasisLibrary::normalize_spaceF($String* value) {
	$init(BasisLibrary);
	int32_t i = 0;
	int32_t n = $nc(value)->length();
	$var($StringBuilder, result, $cast($StringBuilder, $nc(BasisLibrary::threadLocalStringBuilder)->get()));
	$nc(result)->setLength(0);
	while (i < n && isWhiteSpace(value->charAt(i))) {
		++i;
	}
	while (true) {
		while (i < n && !isWhiteSpace(value->charAt(i))) {
			result->append(value->charAt(i++));
		}
		if (i == n) {
			break;
		}
		while (i < n && isWhiteSpace(value->charAt(i))) {
			++i;
		}
		if (i < n) {
			result->append(u' ');
		}
	}
	return result->toString();
}

$String* BasisLibrary::generate_idF(int32_t node) {
	$init(BasisLibrary);
	if (node > 0) {
		return $str({"N"_s, $$str(node)});
	} else {
		return BasisLibrary::EMPTYSTRING;
	}
}

$String* BasisLibrary::getLocalName($String* value$renamed) {
	$init(BasisLibrary);
	$var($String, value, value$renamed);
	int32_t idx = $nc(value)->lastIndexOf((int32_t)u':');
	if (idx >= 0) {
		$assign(value, value->substring(idx + 1));
	}
	idx = value->lastIndexOf((int32_t)u'@');
	if (idx >= 0) {
		$assign(value, value->substring(idx + 1));
	}
	return (value);
}

void BasisLibrary::unresolved_externalF($String* name) {
	$init(BasisLibrary);
	runTimeError(BasisLibrary::EXTERNAL_FUNC_ERR, $of(name));
}

void BasisLibrary::unallowed_extension_functionF($String* name) {
	$init(BasisLibrary);
	runTimeError(BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR, $of(name));
}

void BasisLibrary::unallowed_extension_elementF($String* name) {
	$init(BasisLibrary);
	runTimeError(BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR, $of(name));
}

void BasisLibrary::unsupported_ElementF($String* qname, bool isExtension) {
	$init(BasisLibrary);
	if (isExtension) {
		runTimeError(BasisLibrary::UNSUPPORTED_EXT_ERR, $of(qname));
	} else {
		runTimeError(BasisLibrary::UNSUPPORTED_XSL_ERR, $of(qname));
	}
}

$String* BasisLibrary::namespace_uriF($DTMAxisIterator* iter, $DOM* dom) {
	$init(BasisLibrary);
	return namespace_uriF($nc(iter)->next(), dom);
}

$String* BasisLibrary::system_propertyF($String* name) {
	$init(BasisLibrary);
	if ($nc(name)->equals("xsl:version"_s)) {
		return ("1.0"_s);
	}
	if ($nc(name)->equals("xsl:vendor"_s)) {
		return ("Apache Software Foundation (Xalan XSLTC)"_s);
	}
	if ($nc(name)->equals("xsl:vendor-url"_s)) {
		return ("http://xml.apache.org/xalan-j"_s);
	}
	runTimeError(BasisLibrary::INVALID_ARGUMENT_ERR, name, "system-property()"_s);
	return (BasisLibrary::EMPTYSTRING);
}

$String* BasisLibrary::namespace_uriF(int32_t node, $DOM* dom) {
	$init(BasisLibrary);
	$var($String, value, $nc(dom)->getNodeName(node));
	int32_t colon = $nc(value)->lastIndexOf((int32_t)u':');
	if (colon >= 0) {
		return value->substring(0, colon);
	} else {
		return BasisLibrary::EMPTYSTRING;
	}
}

$String* BasisLibrary::objectTypeF(Object$* obj) {
	$init(BasisLibrary);
	if ($instanceOf($String, obj)) {
		return "string"_s;
	} else if ($instanceOf($Boolean, obj)) {
		return "boolean"_s;
	} else if ($instanceOf($Number, obj)) {
		return "number"_s;
	} else if ($instanceOf($DOM, obj)) {
		return "RTF"_s;
	} else if ($instanceOf($DTMAxisIterator, obj)) {
		return "node-set"_s;
	} else {
		return "unknown"_s;
	}
}

$DTMAxisIterator* BasisLibrary::nodesetF(Object$* obj) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($DOM, obj)) {
		$var($DOM, dom, $cast($DOM, obj));
		return $new($SingletonIterator, $nc(dom)->getDocument(), true);
	} else if ($instanceOf($DTMAxisIterator, obj)) {
		return $cast($DTMAxisIterator, obj);
	} else {
		$var($String, className, $nc($of(obj))->getClass()->getName());
		runTimeError(BasisLibrary::DATA_CONVERSION_ERR, "node-set"_s, className);
		return nullptr;
	}
}

bool BasisLibrary::isWhiteSpace(char16_t ch) {
	$init(BasisLibrary);
	return ch == u' ' || ch == u'\t' || ch == u'\n' || ch == u'\r';
}

bool BasisLibrary::compareStrings($String* lstring, $String* rstring, int32_t op, $DOM* dom) {
	$init(BasisLibrary);
	switch (op) {
	case $Operators::EQ:
		{
			return $nc(lstring)->equals(rstring);
		}
	case $Operators::NE:
		{
			return !$nc(lstring)->equals(rstring);
		}
	case $Operators::GT:
		{
			double var$0 = numberF($of(lstring), dom);
			return var$0 > numberF($of(rstring), dom);
		}
	case $Operators::LT:
		{
			double var$1 = numberF($of(lstring), dom);
			return var$1 < numberF($of(rstring), dom);
		}
	case $Operators::GE:
		{
			double var$2 = numberF($of(lstring), dom);
			return var$2 >= numberF($of(rstring), dom);
		}
	case $Operators::LE:
		{
			double var$3 = numberF($of(lstring), dom);
			return var$3 <= numberF($of(rstring), dom);
		}
	default:
		{
			runTimeError(BasisLibrary::RUN_TIME_INTERNAL_ERR, $of("compare()"_s));
			return false;
		}
	}
}

bool BasisLibrary::compare($DTMAxisIterator* left, $DTMAxisIterator* right, int32_t op, $DOM* dom) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	int32_t lnode = 0;
	$nc(left)->reset();
	while ((lnode = left->next()) != $DTMAxisIterator::END) {
		$var($String, lvalue, $nc(dom)->getStringValueX(lnode));
		int32_t rnode = 0;
		$nc(right)->reset();
		while ((rnode = right->next()) != $DTMAxisIterator::END) {
			if (lnode == rnode) {
				if (op == $Operators::EQ) {
					return true;
				} else if (op == $Operators::NE) {
					continue;
				}
			}
			if (compareStrings(lvalue, $(dom->getStringValueX(rnode)), op, dom)) {
				return true;
			}
		}
	}
	return false;
}

bool BasisLibrary::compare(int32_t node, $DTMAxisIterator* iterator, int32_t op, $DOM* dom) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	int32_t rnode = 0;
	$var($String, value, nullptr);
	switch (op) {
	case $Operators::EQ:
		{
			rnode = $nc(iterator)->next();
			if (rnode != $DTMAxisIterator::END) {
				$assign(value, $nc(dom)->getStringValueX(node));
				do {
					if (node == rnode || $nc(value)->equals($(dom->getStringValueX(rnode)))) {
						return true;
					}
				} while ((rnode = $nc(iterator)->next()) != $DTMAxisIterator::END);
			}
			break;
		}
	case $Operators::NE:
		{
			rnode = $nc(iterator)->next();
			if (rnode != $DTMAxisIterator::END) {
				$assign(value, $nc(dom)->getStringValueX(node));
				do {
					if (node != rnode && !$nc(value)->equals($(dom->getStringValueX(rnode)))) {
						return true;
					}
				} while ((rnode = $nc(iterator)->next()) != $DTMAxisIterator::END);
			}
			break;
		}
	case $Operators::LT:
		{
			while ((rnode = $nc(iterator)->next()) != $DTMAxisIterator::END) {
				if (rnode > node) {
					return true;
				}
			}
			break;
		}
	case $Operators::GT:
		{
			while ((rnode = $nc(iterator)->next()) != $DTMAxisIterator::END) {
				if (rnode < node) {
					return true;
				}
			}
			break;
		}
	}
	return (false);
}

bool BasisLibrary::compare($DTMAxisIterator* left, double rnumber, int32_t op, $DOM* dom) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	int32_t node = 0;
	switch (op) {
	case $Operators::EQ:
		{
			while ((node = $nc(left)->next()) != $DTMAxisIterator::END) {
				if (numberF($($of($nc(dom)->getStringValueX(node))), dom) == rnumber) {
					return true;
				}
			}
			break;
		}
	case $Operators::NE:
		{
			while ((node = $nc(left)->next()) != $DTMAxisIterator::END) {
				if (numberF($($of($nc(dom)->getStringValueX(node))), dom) != rnumber) {
					return true;
				}
			}
			break;
		}
	case $Operators::GT:
		{
			while ((node = $nc(left)->next()) != $DTMAxisIterator::END) {
				if (numberF($($of($nc(dom)->getStringValueX(node))), dom) > rnumber) {
					return true;
				}
			}
			break;
		}
	case $Operators::LT:
		{
			while ((node = $nc(left)->next()) != $DTMAxisIterator::END) {
				if (numberF($($of($nc(dom)->getStringValueX(node))), dom) < rnumber) {
					return true;
				}
			}
			break;
		}
	case $Operators::GE:
		{
			while ((node = $nc(left)->next()) != $DTMAxisIterator::END) {
				if (numberF($($of($nc(dom)->getStringValueX(node))), dom) >= rnumber) {
					return true;
				}
			}
			break;
		}
	case $Operators::LE:
		{
			while ((node = $nc(left)->next()) != $DTMAxisIterator::END) {
				if (numberF($($of($nc(dom)->getStringValueX(node))), dom) <= rnumber) {
					return true;
				}
			}
			break;
		}
	default:
		{
			runTimeError(BasisLibrary::RUN_TIME_INTERNAL_ERR, $of("compare()"_s));
		}
	}
	return false;
}

bool BasisLibrary::compare($DTMAxisIterator* left, $String* rstring, int32_t op, $DOM* dom) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	int32_t node = 0;
	while ((node = $nc(left)->next()) != $DTMAxisIterator::END) {
		if (compareStrings($($nc(dom)->getStringValueX(node)), rstring, op, dom)) {
			return true;
		}
	}
	return false;
}

bool BasisLibrary::compare(Object$* left$renamed, Object$* right$renamed, int32_t op, $DOM* dom) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	$var($Object, left, left$renamed);
	$var($Object, right, right$renamed);
	bool result = false;
	bool var$0 = hasSimpleType(left);
	bool hasSimpleArgs = var$0 && hasSimpleType(right);
	if (op != $Operators::EQ && op != $Operators::NE) {
		if ($instanceOf($1Node, left) || $instanceOf($1Node, right)) {
			if ($instanceOf($Boolean, left)) {
				$assign(right, $Boolean::valueOf(booleanF(right)));
				hasSimpleArgs = true;
			}
			if ($instanceOf($Boolean, right)) {
				$assign(left, $Boolean::valueOf(booleanF(left)));
				hasSimpleArgs = true;
			}
		}
		if (hasSimpleArgs) {
			switch (op) {
			case $Operators::GT:
				{
					double var$1 = numberF(left, dom);
					return var$1 > numberF(right, dom);
				}
			case $Operators::LT:
				{
					double var$2 = numberF(left, dom);
					return var$2 < numberF(right, dom);
				}
			case $Operators::GE:
				{
					double var$3 = numberF(left, dom);
					return var$3 >= numberF(right, dom);
				}
			case $Operators::LE:
				{
					double var$4 = numberF(left, dom);
					return var$4 <= numberF(right, dom);
				}
			default:
				{
					runTimeError(BasisLibrary::RUN_TIME_INTERNAL_ERR, $of("compare()"_s));
				}
			}
		}
	}
	if (hasSimpleArgs) {
		if ($instanceOf($Boolean, left) || $instanceOf($Boolean, right)) {
			bool var$5 = booleanF(left);
			result = var$5 == booleanF(right);
		} else if ($instanceOf($Double, left) || $instanceOf($Double, right) || $instanceOf($Integer, left) || $instanceOf($Integer, right)) {
			double var$6 = numberF(left, dom);
			result = var$6 == numberF(right, dom);
		} else {
			result = $nc($(stringF(left, dom)))->equals($(stringF(right, dom)));
		}
		if (op == $Operators::NE) {
			result = !result;
		}
	} else {
		if ($instanceOf($1Node, left)) {
			$assign(left, $new($SingletonIterator, $nc(($cast($1Node, left)))->node));
		}
		if ($instanceOf($1Node, right)) {
			$assign(right, $new($SingletonIterator, $nc(($cast($1Node, right)))->node));
		}
		if (hasSimpleType(left) || $instanceOf($DOM, left) && $instanceOf($DTMAxisIterator, right)) {
			$var($Object, temp, right);
			$assign(right, left);
			$assign(left, temp);
			op = $Operators::swapOp(op);
		}
		if ($instanceOf($DOM, left)) {
			if ($instanceOf($Boolean, right)) {
				result = $nc(($cast($Boolean, right)))->booleanValue();
				return result == (op == $Operators::EQ);
			}
			$var($String, sleft, $nc(($cast($DOM, left)))->getStringValue());
			if ($instanceOf($Number, right)) {
				double var$7 = $nc(($cast($Number, right)))->doubleValue();
				result = var$7 == stringToReal(sleft);
			} else if ($instanceOf($String, right)) {
				result = $nc(sleft)->equals($cast($String, right));
			} else if ($instanceOf($DOM, right)) {
				result = $nc(sleft)->equals($($nc(($cast($DOM, right)))->getStringValue()));
			}
			if (op == $Operators::NE) {
				result = !result;
			}
			return result;
		}
		$var($DTMAxisIterator, iter, $nc(($cast($DTMAxisIterator, left)))->reset());
		if ($instanceOf($DTMAxisIterator, right)) {
			result = compare(iter, $cast($DTMAxisIterator, right), op, dom);
		} else if ($instanceOf($String, right)) {
			result = compare(iter, $cast($String, right), op, dom);
		} else if ($instanceOf($Number, right)) {
			double temp = $nc(($cast($Number, right)))->doubleValue();
			result = compare(iter, temp, op, dom);
		} else if ($instanceOf($Boolean, right)) {
			bool temp = $nc(($cast($Boolean, right)))->booleanValue();
			result = ($nc($($nc(iter)->reset()))->next() != $DTMAxisIterator::END) == temp;
		} else if ($instanceOf($DOM, right)) {
			result = compare(iter, $($nc(($cast($DOM, right)))->getStringValue()), op, dom);
		} else if (right == nullptr) {
			return (false);
		} else {
			$var($String, className, $nc($of(right))->getClass()->getName());
			runTimeError(BasisLibrary::INVALID_ARGUMENT_ERR, className, "compare()"_s);
		}
	}
	return result;
}

bool BasisLibrary::testLanguage($String* testLang$renamed, $DOM* dom, int32_t node) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	$var($String, testLang, testLang$renamed);
	$var($String, nodeLang, $nc(dom)->getLanguage(node));
	if (nodeLang == nullptr) {
		return (false);
	} else {
		$assign(nodeLang, $nc(nodeLang)->toLowerCase());
	}
	$assign(testLang, $nc(testLang)->toLowerCase());
	if (testLang->length() == 2) {
		return ($nc(nodeLang)->startsWith(testLang));
	} else {
		return ($nc(nodeLang)->equals(testLang));
	}
}

bool BasisLibrary::hasSimpleType(Object$* obj) {
	$init(BasisLibrary);
	return $instanceOf($Boolean, obj) || $instanceOf($Double, obj) || $instanceOf($Integer, obj) || $instanceOf($String, obj) || $instanceOf($1Node, obj) || $instanceOf($DOM, obj);
}

double BasisLibrary::stringToReal($String* s) {
	$init(BasisLibrary);
	try {
		return $nc($($Double::valueOf(s)))->doubleValue();
	} catch ($NumberFormatException& e) {
		$init($Double);
		return $Double::NaN;
	}
	$shouldNotReachHere();
}

int32_t BasisLibrary::stringToInt($String* s) {
	$init(BasisLibrary);
	try {
		return $Integer::parseInt(s);
	} catch ($NumberFormatException& e) {
		return (-1);
	}
	$shouldNotReachHere();
}

$String* BasisLibrary::realToString(double d) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	double m = $Math::abs(d);
	if ((m >= BasisLibrary::lowerBounds) && (m < BasisLibrary::upperBounds)) {
		$var($String, result, $Double::toString(d));
		int32_t length = $nc(result)->length();
		bool var$0 = (result->charAt(length - 2) == u'.');
		if (var$0 && (result->charAt(length - 1) == u'0')) {
			return result->substring(0, length - 2);
		} else {
			return result;
		}
	} else {
		bool var$1 = $Double::isNaN(d);
		if (var$1 || $Double::isInfinite(d)) {
			return ($Double::toString(d));
		}
		d = d + 0.0;
		$var($StringBuffer, result, $cast($StringBuffer, $nc(BasisLibrary::threadLocalStringBuffer)->get()));
		$nc(result)->setLength(0);
		$nc(BasisLibrary::xpathFormatter)->format(d, result, BasisLibrary::_fieldPosition);
		return result->toString();
	}
}

int32_t BasisLibrary::realToInt(double d) {
	$init(BasisLibrary);
	return $cast(int32_t, d);
}

$String* BasisLibrary::formatNumber(double number, $String* pattern, $DecimalFormat* formatter$renamed) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	$var($DecimalFormat, formatter, formatter$renamed);
	if (formatter == nullptr) {
		$assign(formatter, BasisLibrary::defaultFormatter);
	}
	try {
		$var($StringBuffer, result, $cast($StringBuffer, $nc(BasisLibrary::threadLocalStringBuffer)->get()));
		$nc(result)->setLength(0);
		if (pattern != BasisLibrary::defaultPattern) {
			$nc(formatter)->applyLocalizedPattern(pattern);
		}
		$nc(formatter)->format(number, result, BasisLibrary::_fieldPosition);
		return result->toString();
	} catch ($IllegalArgumentException& e) {
		runTimeError(BasisLibrary::FORMAT_NUMBER_ERR, $($Double::toString(number)), pattern);
		return (BasisLibrary::EMPTYSTRING);
	}
	$shouldNotReachHere();
}

$DTMAxisIterator* BasisLibrary::referenceToNodeSet(Object$* obj) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($1Node, obj)) {
		return ($new($SingletonIterator, $nc(($cast($1Node, obj)))->node));
	} else if ($instanceOf($DTMAxisIterator, obj)) {
		return ($nc($($nc(($cast($DTMAxisIterator, obj)))->cloneIterator()))->reset());
	} else {
		$var($String, className, $nc($of(obj))->getClass()->getName());
		runTimeError(BasisLibrary::DATA_CONVERSION_ERR, className, "node-set"_s);
		return nullptr;
	}
}

$NodeList* BasisLibrary::referenceToNodeList(Object$* obj, $DOM* dom$renamed) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	$var($DOM, dom, dom$renamed);
	if ($instanceOf($1Node, obj) || $instanceOf($DTMAxisIterator, obj)) {
		$var($DTMAxisIterator, iter, referenceToNodeSet(obj));
		return $nc(dom)->makeNodeList(iter);
	} else if ($instanceOf($DOM, obj)) {
		$assign(dom, $cast($DOM, obj));
		return $nc(dom)->makeNodeList($DTMDefaultBase::ROOTNODE);
	} else {
		$var($String, className, $nc($of(obj))->getClass()->getName());
		runTimeError(BasisLibrary::DATA_CONVERSION_ERR, className, "org.w3c.dom.NodeList"_s);
		return nullptr;
	}
}

$Node* BasisLibrary::referenceToNode(Object$* obj, $DOM* dom$renamed) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	$var($DOM, dom, dom$renamed);
	if ($instanceOf($1Node, obj) || $instanceOf($DTMAxisIterator, obj)) {
		$var($DTMAxisIterator, iter, referenceToNodeSet(obj));
		return $nc(dom)->makeNode(iter);
	} else if ($instanceOf($DOM, obj)) {
		$assign(dom, $cast($DOM, obj));
		$var($DTMAxisIterator, iter, $nc(dom)->getChildren($DTMDefaultBase::ROOTNODE));
		return dom->makeNode(iter);
	} else {
		$var($String, className, $nc($of(obj))->getClass()->getName());
		runTimeError(BasisLibrary::DATA_CONVERSION_ERR, className, "org.w3c.dom.Node"_s);
		return nullptr;
	}
}

int64_t BasisLibrary::referenceToLong(Object$* obj) {
	$init(BasisLibrary);
	if ($instanceOf($Number, obj)) {
		return $nc(($cast($Number, obj)))->longValue();
	} else {
		$var($String, className, $nc($of(obj))->getClass()->getName());
		$init($Long);
		runTimeError(BasisLibrary::DATA_CONVERSION_ERR, className, $Long::TYPE);
		return 0;
	}
}

double BasisLibrary::referenceToDouble(Object$* obj) {
	$init(BasisLibrary);
	if ($instanceOf($Number, obj)) {
		return $nc(($cast($Number, obj)))->doubleValue();
	} else {
		$var($String, className, $nc($of(obj))->getClass()->getName());
		$init($Double);
		runTimeError(BasisLibrary::DATA_CONVERSION_ERR, className, $Double::TYPE);
		return (double)0;
	}
}

bool BasisLibrary::referenceToBoolean(Object$* obj) {
	$init(BasisLibrary);
	if ($instanceOf($Boolean, obj)) {
		return $nc(($cast($Boolean, obj)))->booleanValue();
	} else {
		$var($String, className, $nc($of(obj))->getClass()->getName());
		$init($Boolean);
		runTimeError(BasisLibrary::DATA_CONVERSION_ERR, className, $Boolean::TYPE);
		return false;
	}
}

$String* BasisLibrary::referenceToString(Object$* obj, $DOM* dom) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($String, obj)) {
		return $cast($String, obj);
	} else if ($instanceOf($DTMAxisIterator, obj)) {
		return $nc(dom)->getStringValueX($nc($($nc(($cast($DTMAxisIterator, obj)))->reset()))->next());
	} else if ($instanceOf($1Node, obj)) {
		return $nc(dom)->getStringValueX($nc(($cast($1Node, obj)))->node);
	} else if ($instanceOf($DOM, obj)) {
		return $nc(($cast($DOM, obj)))->getStringValue();
	} else {
		$var($String, className, $nc($of(obj))->getClass()->getName());
		runTimeError(BasisLibrary::DATA_CONVERSION_ERR, className, $String::class$);
		return nullptr;
	}
}

$DTMAxisIterator* BasisLibrary::node2Iterator($Node* node, $Translet* translet, $DOM* dom) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	$var($Node, inNode, node);
	$var($NodeList, nodelist, $new($BasisLibrary$3, inNode));
	return nodeList2Iterator(nodelist, translet, dom);
}

$DTMAxisIterator* BasisLibrary::nodeList2IteratorUsingHandleFromNode($NodeList* nodeList, $Translet* translet, $DOM* dom) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	int32_t n = $nc(nodeList)->getLength();
	$var($ints, dtmHandles, $new($ints, n));
	$var($DTMManager, dtmManager, nullptr);
	if ($instanceOf($MultiDOM, dom)) {
		$assign(dtmManager, $nc(($cast($MultiDOM, dom)))->getDTMManager());
	}
	for (int32_t i = 0; i < n; ++i) {
		$var($Node, node, nodeList->item(i));
		int32_t handle = 0;
		if (dtmManager != nullptr) {
			handle = dtmManager->getDTMHandleFromNode(node);
		} else if ($instanceOf($DTMNodeProxy, node) && $equals($nc(($cast($DTMNodeProxy, node)))->getDTM(), dom)) {
			handle = $nc(($cast($DTMNodeProxy, node)))->getDTMNodeNumber();
		} else {
			runTimeError(BasisLibrary::RUN_TIME_INTERNAL_ERR, $of("need MultiDOM"_s));
			return nullptr;
		}
		dtmHandles->set(i, handle);
		$nc($System::out)->println($$str({"Node "_s, $$str(i), " has handle 0x"_s, $($Integer::toString(handle, 16))}));
	}
	return $new($ArrayNodeListIterator, dtmHandles);
}

$DTMAxisIterator* BasisLibrary::nodeList2Iterator($NodeList* nodeList, $Translet* translet, $DOM* dom) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	int32_t n = 0;
	$var($Document, doc, nullptr);
	$var($DTMManager, dtmManager, nullptr);
	$var($ints, proxyNodes, $new($ints, $nc(nodeList)->getLength()));
	if ($instanceOf($MultiDOM, dom)) {
		$assign(dtmManager, $nc(($cast($MultiDOM, dom)))->getDTMManager());
	}
	for (int32_t i = 0; i < nodeList->getLength(); ++i) {
		$var($Node, node, nodeList->item(i));
		if ($instanceOf($DTMNodeProxy, node)) {
			$var($DTMNodeProxy, proxy, $cast($DTMNodeProxy, node));
			$var($DTM, nodeDTM, $nc(proxy)->getDTM());
			int32_t handle = proxy->getDTMNodeNumber();
			bool isOurDOM = ($equals(nodeDTM, dom));
			if (!isOurDOM && dtmManager != nullptr) {
				try {
					isOurDOM = (nodeDTM == dtmManager->getDTM(handle));
				} catch ($ArrayIndexOutOfBoundsException& e) {
				}
			}
			if (isOurDOM) {
				proxyNodes->set(i, handle);
				++n;
				continue;
			}
		}
		proxyNodes->set(i, $DTM::NULL);
		int32_t nodeType = $nc(node)->getNodeType();
		if (doc == nullptr) {
			if ($instanceOf($MultiDOM, dom) == false) {
				runTimeError(BasisLibrary::RUN_TIME_INTERNAL_ERR, $of("need MultiDOM"_s));
				return nullptr;
			}
			try {
				$var($AbstractTranslet, at, $cast($AbstractTranslet, translet));
				$assign(doc, $nc(at)->newDocument(""_s, "__top__"_s));
			} catch ($ParserConfigurationException& e) {
				runTimeError(BasisLibrary::RUN_TIME_INTERNAL_ERR, $($of(e->getMessage())));
				return nullptr;
			}
		}
		$var($Element, mid, nullptr);
		switch (nodeType) {
		case $Node::ELEMENT_NODE:
			{}
		case $Node::TEXT_NODE:
			{}
		case $Node::CDATA_SECTION_NODE:
			{}
		case $Node::COMMENT_NODE:
			{}
		case $Node::ENTITY_REFERENCE_NODE:
			{}
		case $Node::PROCESSING_INSTRUCTION_NODE:
			{
				$assign(mid, $nc(doc)->createElementNS(nullptr, "__dummy__"_s));
				$nc(mid)->appendChild($($nc(doc)->importNode(node, true)));
				$nc($($nc(doc)->getDocumentElement()))->appendChild(mid);
				++n;
				break;
			}
		case $Node::ATTRIBUTE_NODE:
			{
				$assign(mid, $nc(doc)->createElementNS(nullptr, "__dummy__"_s));
				$nc(mid)->setAttributeNodeNS($cast($Attr, $($nc(doc)->importNode(node, true))));
				$nc($($nc(doc)->getDocumentElement()))->appendChild(mid);
				++n;
				break;
			}
		default:
			{
				runTimeError(BasisLibrary::RUN_TIME_INTERNAL_ERR, $of($$str({"Don\'t know how to convert node type "_s, $$str(nodeType)})));
			}
		}
	}
	$var($DTMAxisIterator, iter, nullptr);
	$var($DTMAxisIterator, childIter, nullptr);
	$var($DTMAxisIterator, attrIter, nullptr);
	if (doc != nullptr) {
		$var($MultiDOM, multiDOM, $cast($MultiDOM, dom));
		$var($DOM, idom, $cast($DOM, $nc(dtmManager)->getDTM($$new($DOMSource, doc), false, nullptr, true, false)));
		$var($DOM, var$0, idom);
		$var($StringArray, var$1, $nc(translet)->getNamesArray());
		$var($StringArray, var$2, translet->getUrisArray());
		$var($ints, var$3, translet->getTypesArray());
		$var($DOMAdapter, domAdapter, $new($DOMAdapter, var$0, var$1, var$2, var$3, $(translet->getNamespaceArray())));
		$nc(multiDOM)->addDOMAdapter(domAdapter);
		$var($DTMAxisIterator, iter1, $nc(idom)->getAxisIterator($Axis::CHILD));
		$var($DTMAxisIterator, iter2, idom->getAxisIterator($Axis::CHILD));
		$assign(iter, $new($AbsoluteIterator, $$new($StepIterator, iter1, iter2)));
		iter->setStartNode($DTMDefaultBase::ROOTNODE);
		$assign(childIter, idom->getAxisIterator($Axis::CHILD));
		$assign(attrIter, idom->getAxisIterator($Axis::ATTRIBUTE));
	}
	$var($ints, dtmHandles, $new($ints, n));
	n = 0;
	for (int32_t i = 0; i < nodeList->getLength(); ++i) {
		if (proxyNodes->get(i) != $DTM::NULL) {
			dtmHandles->set(n++, proxyNodes->get(i));
			continue;
		}
		$var($Node, node, nodeList->item(i));
		$var($DTMAxisIterator, iter3, nullptr);
		int32_t nodeType = $nc(node)->getNodeType();
		switch (nodeType) {
		case $Node::ELEMENT_NODE:
			{}
		case $Node::TEXT_NODE:
			{}
		case $Node::CDATA_SECTION_NODE:
			{}
		case $Node::COMMENT_NODE:
			{}
		case $Node::ENTITY_REFERENCE_NODE:
			{}
		case $Node::PROCESSING_INSTRUCTION_NODE:
			{
				$assign(iter3, childIter);
				break;
			}
		case $Node::ATTRIBUTE_NODE:
			{
				$assign(iter3, attrIter);
				break;
			}
		default:
			{
				$throwNew($InternalRuntimeError, "Mismatched cases"_s);
			}
		}
		if (iter3 != nullptr) {
			iter3->setStartNode($nc(iter)->next());
			dtmHandles->set(n, iter3->next());
			if (dtmHandles->get(n) == $DTMAxisIterator::END) {
				$throwNew($InternalRuntimeError, $$str({"Expected element missing at "_s, $$str(i)}));
			}
			if (iter3->next() != $DTMAxisIterator::END) {
				$throwNew($InternalRuntimeError, $$str({"Too many elements at "_s, $$str(i)}));
			}
			++n;
		}
	}
	if (n != dtmHandles->length) {
		$throwNew($InternalRuntimeError, "Nodes lost in second pass"_s);
	}
	return $new($ArrayNodeListIterator, dtmHandles);
}

$DOM* BasisLibrary::referenceToResultTree(Object$* obj) {
	$init(BasisLibrary);
	try {
		return ($cast($DOM, obj));
	} catch ($IllegalArgumentException& e) {
		$var($String, className, $nc($of(obj))->getClass()->getName());
		runTimeError(BasisLibrary::DATA_CONVERSION_ERR, "reference"_s, className);
		return nullptr;
	}
	$shouldNotReachHere();
}

$DTMAxisIterator* BasisLibrary::getSingleNode($DTMAxisIterator* iterator) {
	$init(BasisLibrary);
	int32_t node = $nc(iterator)->next();
	return ($new($SingletonIterator, node));
}

void BasisLibrary::copy(Object$* obj, $SerializationHandler* handler, int32_t node, $DOM* dom) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	try {
		if ($instanceOf($DTMAxisIterator, obj)) {
			$var($DTMAxisIterator, iter, $cast($DTMAxisIterator, obj));
			$nc(dom)->copy($($nc(iter)->reset()), handler);
		} else if ($instanceOf($1Node, obj)) {
			$nc(dom)->copy($nc(($cast($1Node, obj)))->node, handler);
		} else if ($instanceOf($DOM, obj)) {
			$var($DOM, newDom, $cast($DOM, obj));
			$nc(newDom)->copy(newDom->getDocument(), handler);
		} else {
			$var($String, string, $nc($of(obj))->toString());
			int32_t length = $nc(string)->length();
			if (length > $nc(BasisLibrary::_characterArray)->length) {
				$assignStatic(BasisLibrary::_characterArray, $new($chars, length));
			}
			string->getChars(0, length, BasisLibrary::_characterArray, 0);
			$nc(handler)->characters(BasisLibrary::_characterArray, 0, length);
		}
	} catch ($SAXException& e) {
		runTimeError(BasisLibrary::RUN_TIME_COPY_ERR);
	}
}

void BasisLibrary::checkAttribQName($String* name) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	int32_t firstOccur = $nc(name)->indexOf((int32_t)u':');
	int32_t lastOccur = name->lastIndexOf((int32_t)u':');
	$var($String, localName, name->substring(lastOccur + 1));
	if (firstOccur > 0) {
		$var($String, newPrefix, name->substring(0, firstOccur));
		if (firstOccur != lastOccur) {
			$var($String, oriPrefix, name->substring(firstOccur + 1, lastOccur));
			if (!$XML11Char::isXML11ValidNCName(oriPrefix)) {
				runTimeError(BasisLibrary::INVALID_QNAME_ERR, $of($$str({oriPrefix, ":"_s, localName})));
			}
		}
		if (!$XML11Char::isXML11ValidNCName(newPrefix)) {
			runTimeError(BasisLibrary::INVALID_QNAME_ERR, $of($$str({newPrefix, ":"_s, localName})));
		}
	}
	bool var$0 = (!$XML11Char::isXML11ValidNCName(localName));
	$init($Constants);
	if (var$0 || (localName->equals($Constants::XMLNS_PREFIX))) {
		runTimeError(BasisLibrary::INVALID_QNAME_ERR, $of(localName));
	}
}

void BasisLibrary::checkNCName($String* name) {
	$init(BasisLibrary);
	if (!$XML11Char::isXML11ValidNCName(name)) {
		runTimeError(BasisLibrary::INVALID_NCNAME_ERR, $of(name));
	}
}

void BasisLibrary::checkQName($String* name) {
	$init(BasisLibrary);
	if (!$XML11Char::isXML11ValidQName(name)) {
		runTimeError(BasisLibrary::INVALID_QNAME_ERR, $of(name));
	}
}

$String* BasisLibrary::startXslElement($String* qname$renamed, $String* namespace$$renamed, $SerializationHandler* handler, $DOM* dom, int32_t node) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	$var($String, qname, qname$renamed);
	$var($String, namespace$, namespace$$renamed);
	try {
		$var($String, prefix, nullptr);
		int32_t index = $nc(qname)->indexOf((int32_t)u':');
		if (index > 0) {
			$assign(prefix, qname->substring(0, index));
			if (namespace$ == nullptr || $nc(namespace$)->length() == 0) {
				try {
					$assign(namespace$, $nc(dom)->lookupNamespace(node, prefix));
				} catch ($RuntimeException& e) {
					$nc(handler)->flushPending();
					$var($NamespaceMappings, nm, handler->getNamespaceMappings());
					$assign(namespace$, $nc(nm)->lookupNamespace(prefix));
					if (namespace$ == nullptr) {
						runTimeError(BasisLibrary::NAMESPACE_PREFIX_ERR, $of(prefix));
					}
				}
			}
			$nc(handler)->startElement(namespace$, $(qname->substring(index + 1)), qname);
			handler->namespaceAfterStartElement(prefix, namespace$);
		} else if (namespace$ != nullptr && namespace$->length() > 0) {
			$assign(prefix, generatePrefix());
			$assign(qname, $str({prefix, $$str(u':'), qname}));
			$nc(handler)->startElement(namespace$, qname, qname);
			handler->namespaceAfterStartElement(prefix, namespace$);
		} else {
			$nc(handler)->startElement(nullptr, nullptr, qname);
		}
	} catch ($SAXException& e) {
		$throwNew($RuntimeException, $(e->getMessage()));
	}
	return qname;
}

$String* BasisLibrary::getPrefix($String* qname) {
	$init(BasisLibrary);
	int32_t index = $nc(qname)->indexOf((int32_t)u':');
	return (index > 0) ? qname->substring(0, index) : ($String*)nullptr;
}

$String* BasisLibrary::generatePrefix() {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	return ($str({"ns"_s, $$str($nc(($cast($AtomicInteger, $($nc(BasisLibrary::threadLocalPrefixIndex)->get()))))->getAndIncrement())}));
}

void BasisLibrary::resetPrefixIndex() {
	$init(BasisLibrary);
	$nc(($cast($AtomicInteger, $($nc(BasisLibrary::threadLocalPrefixIndex)->get()))))->set(0);
}

void BasisLibrary::runTimeError($String* code) {
	$init(BasisLibrary);
	$throwNew($RuntimeException, $($nc(BasisLibrary::m_bundle)->getString(code)));
}

void BasisLibrary::runTimeError($String* code, $ObjectArray* args) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	$var($String, message, $MessageFormat::format($($nc(BasisLibrary::m_bundle)->getString(code)), args));
	$throwNew($RuntimeException, message);
}

void BasisLibrary::runTimeError($String* code, Object$* arg0) {
	$init(BasisLibrary);
	runTimeError(code, $$new($ObjectArray, {arg0}));
}

void BasisLibrary::runTimeError($String* code, Object$* arg0, Object$* arg1) {
	$init(BasisLibrary);
	runTimeError(code, $$new($ObjectArray, {
		arg0,
		arg1
	}));
}

void BasisLibrary::consoleOutput($String* msg) {
	$init(BasisLibrary);
	$nc($System::out)->println(msg);
}

$String* BasisLibrary::replace($String* base, char16_t ch, $String* str) {
	$init(BasisLibrary);
	$useLocalCurrentObjectStackCache();
	return ($nc(base)->indexOf((int32_t)ch) < 0) ? base : replace(base, $($String::valueOf(ch)), $$new($StringArray, {str}));
}

$String* BasisLibrary::replace($String* base, $String* delim, $StringArray* str) {
	$init(BasisLibrary);
	int32_t len = $nc(base)->length();
	$var($StringBuilder, result, $cast($StringBuilder, $nc(BasisLibrary::threadLocalStringBuilder)->get()));
	$nc(result)->setLength(0);
	for (int32_t i = 0; i < len; ++i) {
		char16_t ch = base->charAt(i);
		int32_t k = $nc(delim)->indexOf((int32_t)ch);
		if (k >= 0) {
			result->append($nc(str)->get(k));
		} else {
			result->append(ch);
		}
	}
	return result->toString();
}

$String* BasisLibrary::mapQNameToJavaName($String* base) {
	$init(BasisLibrary);
	return replace(base, ".-:/{}?#%*"_s, $$new($StringArray, {
		"$dot$"_s,
		"$dash$"_s,
		"$colon$"_s,
		"$slash$"_s,
		""_s,
		"$colon$"_s,
		"$ques$"_s,
		"$hash$"_s,
		"$per$"_s,
		"$aster$"_s
	}));
}

int32_t BasisLibrary::getStringLength($String* str) {
	$init(BasisLibrary);
	return $nc(str)->codePointCount(0, str->length());
}

void clinit$BasisLibrary($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(BasisLibrary::EMPTYSTRING, ""_s);
	BasisLibrary::lowerBounds = 0.001;
	BasisLibrary::upperBounds = (double)0x00989680;
	$assignStatic(BasisLibrary::RUN_TIME_INTERNAL_ERR, "RUN_TIME_INTERNAL_ERR"_s);
	$assignStatic(BasisLibrary::RUN_TIME_COPY_ERR, "RUN_TIME_COPY_ERR"_s);
	$assignStatic(BasisLibrary::DATA_CONVERSION_ERR, "DATA_CONVERSION_ERR"_s);
	$assignStatic(BasisLibrary::EXTERNAL_FUNC_ERR, "EXTERNAL_FUNC_ERR"_s);
	$assignStatic(BasisLibrary::EQUALITY_EXPR_ERR, "EQUALITY_EXPR_ERR"_s);
	$assignStatic(BasisLibrary::INVALID_ARGUMENT_ERR, "INVALID_ARGUMENT_ERR"_s);
	$assignStatic(BasisLibrary::FORMAT_NUMBER_ERR, "FORMAT_NUMBER_ERR"_s);
	$assignStatic(BasisLibrary::ITERATOR_CLONE_ERR, "ITERATOR_CLONE_ERR"_s);
	$assignStatic(BasisLibrary::AXIS_SUPPORT_ERR, "AXIS_SUPPORT_ERR"_s);
	$assignStatic(BasisLibrary::TYPED_AXIS_SUPPORT_ERR, "TYPED_AXIS_SUPPORT_ERR"_s);
	$assignStatic(BasisLibrary::STRAY_ATTRIBUTE_ERR, "STRAY_ATTRIBUTE_ERR"_s);
	$assignStatic(BasisLibrary::STRAY_NAMESPACE_ERR, "STRAY_NAMESPACE_ERR"_s);
	$assignStatic(BasisLibrary::NAMESPACE_PREFIX_ERR, "NAMESPACE_PREFIX_ERR"_s);
	$assignStatic(BasisLibrary::DOM_ADAPTER_INIT_ERR, "DOM_ADAPTER_INIT_ERR"_s);
	$assignStatic(BasisLibrary::PARSER_DTD_SUPPORT_ERR, "PARSER_DTD_SUPPORT_ERR"_s);
	$assignStatic(BasisLibrary::NAMESPACES_SUPPORT_ERR, "NAMESPACES_SUPPORT_ERR"_s);
	$assignStatic(BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR, "CANT_RESOLVE_RELATIVE_URI_ERR"_s);
	$assignStatic(BasisLibrary::UNSUPPORTED_XSL_ERR, "UNSUPPORTED_XSL_ERR"_s);
	$assignStatic(BasisLibrary::UNSUPPORTED_EXT_ERR, "UNSUPPORTED_EXT_ERR"_s);
	$assignStatic(BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR, "UNKNOWN_TRANSLET_VERSION_ERR"_s);
	$assignStatic(BasisLibrary::INVALID_QNAME_ERR, "INVALID_QNAME_ERR"_s);
	$assignStatic(BasisLibrary::INVALID_NCNAME_ERR, "INVALID_NCNAME_ERR"_s);
	$assignStatic(BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR, "UNALLOWED_EXTENSION_FUNCTION_ERR"_s);
	$assignStatic(BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR, "UNALLOWED_EXTENSION_ELEMENT_ERR"_s);
	$assignStatic(BasisLibrary::ERROR_MESSAGES_KEY, "error-messages"_s);
	$assignStatic(BasisLibrary::threadLocalStringBuilder, $new($BasisLibrary$1));
	$assignStatic(BasisLibrary::threadLocalStringBuffer, $new($BasisLibrary$2));
	$assignStatic(BasisLibrary::defaultPattern, ""_s);
	{
		$var($NumberFormat, f, $NumberFormat::getInstance($($Locale::getDefault())));
		$assignStatic(BasisLibrary::defaultFormatter, ($instanceOf($DecimalFormat, f)) ? $cast($DecimalFormat, f) : $new($DecimalFormat));
		$nc(BasisLibrary::defaultFormatter)->setMaximumFractionDigits(BasisLibrary::DOUBLE_FRACTION_DIGITS);
		$nc(BasisLibrary::defaultFormatter)->setMinimumFractionDigits(0);
		$nc(BasisLibrary::defaultFormatter)->setMinimumIntegerDigits(1);
		$nc(BasisLibrary::defaultFormatter)->setGroupingUsed(false);
		$assignStatic(BasisLibrary::xpathFormatter, $new($DecimalFormat, ""_s, $$new($DecimalFormatSymbols, $Locale::US)));
		$nc(BasisLibrary::xpathFormatter)->setMaximumFractionDigits(BasisLibrary::DOUBLE_FRACTION_DIGITS);
		$nc(BasisLibrary::xpathFormatter)->setMinimumFractionDigits(0);
		$nc(BasisLibrary::xpathFormatter)->setMinimumIntegerDigits(1);
		$nc(BasisLibrary::xpathFormatter)->setGroupingUsed(false);
	}
	$assignStatic(BasisLibrary::_fieldPosition, $new($FieldPosition, 0));
	$assignStatic(BasisLibrary::_characterArray, $new($chars, 32));
	$assignStatic(BasisLibrary::threadLocalPrefixIndex, $new($BasisLibrary$4));
	{
		$var($String, resource, "com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages"_s);
		$assignStatic(BasisLibrary::m_bundle, $SecuritySupport::getResourceBundle(resource));
	}
}

BasisLibrary::BasisLibrary() {
}

$Class* BasisLibrary::load$($String* name, bool initialize) {
	$loadClass(BasisLibrary, name, initialize, &_BasisLibrary_ClassInfo_, clinit$BasisLibrary, allocate$BasisLibrary);
	return class$;
}

$Class* BasisLibrary::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com