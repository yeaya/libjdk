#include <com/sun/org/apache/xml/internal/serializer/dom3/LSSerializerImpl.h>

#include <com/sun/org/apache/xml/internal/serializer/DOM3Serializer.h>
#include <com/sun/org/apache/xml/internal/serializer/Encodings.h>
#include <com/sun/org/apache/xml/internal/serializer/OutputPropertiesFactory.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/Serializer.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream.h>
#include <com/sun/org/apache/xml/internal/serializer/ToXMLStream.h>
#include <com/sun/org/apache/xml/internal/serializer/dom3/DOMConstants.h>
#include <com/sun/org/apache/xml/internal/serializer/dom3/DOMErrorImpl.h>
#include <com/sun/org/apache/xml/internal/serializer/dom3/DOMStringListImpl.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Messages.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/SystemIDResolver.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Utils.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/StringWriter.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/io/Writer.h>
#include <java/lang/AbstractMethodError.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/util/Properties.h>
#include <javax/xml/transform/ErrorListener.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkProperty$ImplPropMap.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <jdk/xml/internal/JdkProperty.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/DOMError.h>
#include <org/w3c/dom/DOMErrorHandler.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/DOMStringList.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ls/LSException.h>
#include <org/w3c/dom/ls/LSOutput.h>
#include <org/w3c/dom/ls/LSSerializerFilter.h>
#include <jcpp.h>

#undef APIPROPERTY
#undef CANONICAL
#undef CDATA
#undef CHARNORMALIZE
#undef COMMENTS
#undef DEFAULT
#undef DISCARDDEFAULT
#undef DOCUMENT_NODE
#undef DOM3_DEFAULT_FALSE
#undef DOM3_DEFAULT_TRUE
#undef DOM3_EXPLICIT_FALSE
#undef DOM3_EXPLICIT_TRUE
#undef DOM_CANONICAL_FORM
#undef DOM_CDATA_SECTIONS
#undef DOM_CHECK_CHAR_NORMALIZATION
#undef DOM_COMMENTS
#undef DOM_DATATYPE_NORMALIZATION
#undef DOM_DISCARD_DEFAULT_CONTENT
#undef DOM_ELEMENT_CONTENT_WHITESPACE
#undef DOM_ENTITIES
#undef DOM_ERROR_HANDLER
#undef DOM_FORMAT_PRETTY_PRINT
#undef DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS
#undef DOM_INFOSET
#undef DOM_NAMESPACES
#undef DOM_NAMESPACE_DECLARATIONS
#undef DOM_NORMALIZE_CHARACTERS
#undef DOM_SCHEMA_LOCATION
#undef DOM_SCHEMA_TYPE
#undef DOM_SPLIT_CDATA
#undef DOM_VALIDATE
#undef DOM_VALIDATE_IF_SCHEMA
#undef DOM_WELLFORMED
#undef DOM_XMLDECL
#undef DTNORMALIZE
#undef ELEMENT_NODE
#undef ELEM_CONTENT_WHITESPACE
#undef ENTITIES
#undef ENTITY_NODE
#undef ER_FEATURE_NOT_FOUND
#undef ER_FEATURE_NOT_SUPPORTED
#undef ER_NO_OUTPUT_SPECIFIED
#undef ER_TYPE_MISMATCH_ERR
#undef ER_UNSUPPORTED_ENCODING
#undef FALSE
#undef FQ_IS_STANDALONE
#undef IGNORE_CHAR_DENORMALIZE
#undef INFOSET
#undef ISSTANDALONE
#undef IS_STANDALONE
#undef NAMESPACEDECLS
#undef NAMESPACES
#undef NORMALIZECHARS
#undef NOT_FOUND_ERR
#undef NOT_SUPPORTED_ERR
#undef NS_IS_STANDALONE
#undef PRETTY_PRINT
#undef SCHEMAVALIDATE
#undef SERIALIZE_ERR
#undef SEVERITY_FATAL_ERROR
#undef SPLITCDATA
#undef SP_IS_STANDALONE
#undef S_DOM3_PROPERTIES_NS
#undef S_KEY_INDENT_AMOUNT
#undef S_XERCES_PROPERTIES_NS
#undef S_XML_VERSION
#undef S_XSL_OUTPUT_ENCODING
#undef S_XSL_OUTPUT_INDENT
#undef S_XSL_OUTPUT_OMIT_XML_DECL
#undef TRUE
#undef TYPE_MISMATCH_ERR
#undef VALIDATE
#undef WELLFORMED
#undef XMLDECL

using $DOM3Serializer = ::com::sun::org::apache::xml::internal::serializer::DOM3Serializer;
using $Encodings = ::com::sun::org::apache::xml::internal::serializer::Encodings;
using $OutputPropertiesFactory = ::com::sun::org::apache::xml::internal::serializer::OutputPropertiesFactory;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $Serializer = ::com::sun::org::apache::xml::internal::serializer::Serializer;
using $SerializerBase = ::com::sun::org::apache::xml::internal::serializer::SerializerBase;
using $ToStream = ::com::sun::org::apache::xml::internal::serializer::ToStream;
using $ToXMLStream = ::com::sun::org::apache::xml::internal::serializer::ToXMLStream;
using $DOMConstants = ::com::sun::org::apache::xml::internal::serializer::dom3::DOMConstants;
using $DOMErrorImpl = ::com::sun::org::apache::xml::internal::serializer::dom3::DOMErrorImpl;
using $DOMStringListImpl = ::com::sun::org::apache::xml::internal::serializer::dom3::DOMStringListImpl;
using $Messages = ::com::sun::org::apache::xml::internal::serializer::utils::Messages;
using $MsgKey = ::com::sun::org::apache::xml::internal::serializer::utils::MsgKey;
using $SystemIDResolver = ::com::sun::org::apache::xml::internal::serializer::utils::SystemIDResolver;
using $Utils = ::com::sun::org::apache::xml::internal::serializer::utils::Utils;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $StringWriter = ::java::io::StringWriter;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Writer = ::java::io::Writer;
using $AbstractMethodError = ::java::lang::AbstractMethodError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $Properties = ::java::util::Properties;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkProperty = ::jdk::xml::internal::JdkProperty;
using $JdkProperty$ImplPropMap = ::jdk::xml::internal::JdkProperty$ImplPropMap;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $DOMConfiguration = ::org::w3c::dom::DOMConfiguration;
using $DOMError = ::org::w3c::dom::DOMError;
using $DOMErrorHandler = ::org::w3c::dom::DOMErrorHandler;
using $DOMException = ::org::w3c::dom::DOMException;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $DOMStringList = ::org::w3c::dom::DOMStringList;
using $Document = ::org::w3c::dom::Document;
using $Node = ::org::w3c::dom::Node;
using $LSException = ::org::w3c::dom::ls::LSException;
using $LSOutput = ::org::w3c::dom::ls::LSOutput;
using $LSSerializerFilter = ::org::w3c::dom::ls::LSSerializerFilter;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace dom3 {

$FieldInfo _LSSerializerImpl_FieldInfo_[] = {
	{"fXMLSerializer", "Lcom/sun/org/apache/xml/internal/serializer/Serializer;", nullptr, $PRIVATE, $field(LSSerializerImpl, fXMLSerializer)},
	{"fFeatures", "I", nullptr, $PROTECTED, $field(LSSerializerImpl, fFeatures)},
	{"fDOMSerializer", "Lcom/sun/org/apache/xml/internal/serializer/DOM3Serializer;", nullptr, $PRIVATE, $field(LSSerializerImpl, fDOMSerializer)},
	{"fSerializerFilter", "Lorg/w3c/dom/ls/LSSerializerFilter;", nullptr, $PRIVATE, $field(LSSerializerImpl, fSerializerFilter)},
	{"fVisitedNode", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(LSSerializerImpl, fVisitedNode)},
	{"fEndOfLine", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LSSerializerImpl, fEndOfLine)},
	{"fDOMErrorHandler", "Lorg/w3c/dom/DOMErrorHandler;", nullptr, $PRIVATE, $field(LSSerializerImpl, fDOMErrorHandler)},
	{"fDOMConfigProperties", "Ljava/util/Properties;", nullptr, $PRIVATE, $field(LSSerializerImpl, fDOMConfigProperties)},
	{"fEncoding", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LSSerializerImpl, fEncoding)},
	{"fIsStandalone", "Ljdk/xml/internal/JdkProperty;", "Ljdk/xml/internal/JdkProperty<Ljava/lang/Boolean;>;", $PRIVATE, $field(LSSerializerImpl, fIsStandalone)},
	{"CANONICAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, CANONICAL)},
	{"CDATA", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, CDATA)},
	{"CHARNORMALIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, CHARNORMALIZE)},
	{"COMMENTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, COMMENTS)},
	{"DTNORMALIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, DTNORMALIZE)},
	{"ELEM_CONTENT_WHITESPACE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, ELEM_CONTENT_WHITESPACE)},
	{"ENTITIES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, ENTITIES)},
	{"INFOSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, INFOSET)},
	{"NAMESPACES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, NAMESPACES)},
	{"NAMESPACEDECLS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, NAMESPACEDECLS)},
	{"NORMALIZECHARS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, NORMALIZECHARS)},
	{"SPLITCDATA", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, SPLITCDATA)},
	{"VALIDATE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, VALIDATE)},
	{"SCHEMAVALIDATE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, SCHEMAVALIDATE)},
	{"WELLFORMED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, WELLFORMED)},
	{"DISCARDDEFAULT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, DISCARDDEFAULT)},
	{"PRETTY_PRINT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, PRETTY_PRINT)},
	{"IGNORE_CHAR_DENORMALIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, IGNORE_CHAR_DENORMALIZE)},
	{"XMLDECL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, XMLDECL)},
	{"IS_STANDALONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSSerializerImpl, IS_STANDALONE)},
	{"fRecognizedParameters", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(LSSerializerImpl, fRecognizedParameters)},
	{}
};

$MethodInfo _LSSerializerImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(LSSerializerImpl, init$, void)},
	{"canSetParameter", "(Ljava/lang/String;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(LSSerializerImpl, canSetParameter, bool, $String*, Object$*)},
	{"getDomConfig", "()Lorg/w3c/dom/DOMConfiguration;", nullptr, $PUBLIC, $virtualMethod(LSSerializerImpl, getDomConfig, $DOMConfiguration*)},
	{"getErrorHandler", "()Lorg/w3c/dom/DOMErrorHandler;", nullptr, $PUBLIC, $method(LSSerializerImpl, getErrorHandler, $DOMErrorHandler*)},
	{"getFilter", "()Lorg/w3c/dom/ls/LSSerializerFilter;", nullptr, $PUBLIC, $virtualMethod(LSSerializerImpl, getFilter, $LSSerializerFilter*)},
	{"getInputEncoding", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PROTECTED, $method(LSSerializerImpl, getInputEncoding, $String*, $Node*)},
	{"getNewLine", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LSSerializerImpl, getNewLine, $String*)},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LSSerializerImpl, getParameter, $Object*, $String*), "org.w3c.dom.DOMException"},
	{"getParameterNames", "()Lorg/w3c/dom/DOMStringList;", nullptr, $PUBLIC, $virtualMethod(LSSerializerImpl, getParameterNames, $DOMStringList*)},
	{"getXMLEncoding", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PROTECTED, $method(LSSerializerImpl, getXMLEncoding, $String*, $Node*)},
	{"getXMLVersion", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PROTECTED, $method(LSSerializerImpl, getXMLVersion, $String*, $Node*)},
	{"initializeSerializerProps", "()V", nullptr, $PUBLIC, $method(LSSerializerImpl, initializeSerializerProps, void)},
	{"setFilter", "(Lorg/w3c/dom/ls/LSSerializerFilter;)V", nullptr, $PUBLIC, $virtualMethod(LSSerializerImpl, setFilter, void, $LSSerializerFilter*)},
	{"setNewLine", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(LSSerializerImpl, setNewLine, void, $String*)},
	{"setParameter", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(LSSerializerImpl, setParameter, void, $String*, Object$*), "org.w3c.dom.DOMException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/ls/LSOutput;)Z", nullptr, $PUBLIC, $virtualMethod(LSSerializerImpl, write, bool, $Node*, $LSOutput*), "org.w3c.dom.ls.LSException"},
	{"writeToString", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LSSerializerImpl, writeToString, $String*, $Node*), "org.w3c.dom.DOMException,org.w3c.dom.ls.LSException"},
	{"writeToURI", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(LSSerializerImpl, writeToURI, bool, $Node*, $String*), "org.w3c.dom.ls.LSException"},
	{}
};

$ClassInfo _LSSerializerImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.dom3.LSSerializerImpl",
	"java.lang.Object",
	"org.w3c.dom.DOMConfiguration,org.w3c.dom.ls.LSSerializer",
	_LSSerializerImpl_FieldInfo_,
	_LSSerializerImpl_MethodInfo_
};

$Object* allocate$LSSerializerImpl($Class* clazz) {
	return $of($alloc(LSSerializerImpl));
}

int32_t LSSerializerImpl::hashCode() {
	 return this->$DOMConfiguration::hashCode();
}

bool LSSerializerImpl::equals(Object$* arg0) {
	 return this->$DOMConfiguration::equals(arg0);
}

$Object* LSSerializerImpl::clone() {
	 return this->$DOMConfiguration::clone();
}

$String* LSSerializerImpl::toString() {
	 return this->$DOMConfiguration::toString();
}

void LSSerializerImpl::finalize() {
	this->$DOMConfiguration::finalize();
}

void LSSerializerImpl::init$() {
	$set(this, fXMLSerializer, nullptr);
	this->fFeatures = 0;
	$set(this, fDOMSerializer, nullptr);
	$set(this, fSerializerFilter, nullptr);
	$set(this, fVisitedNode, nullptr);
	$set(this, fEndOfLine, "\n"_s);
	$set(this, fDOMErrorHandler, nullptr);
	$set(this, fDOMConfigProperties, nullptr);
	$init($DOMConstants);
	$init($JdkConstants);
	$set(this, fRecognizedParameters, $new($StringArray, {
		$DOMConstants::DOM_CANONICAL_FORM,
		$DOMConstants::DOM_CDATA_SECTIONS,
		$DOMConstants::DOM_CHECK_CHAR_NORMALIZATION,
		$DOMConstants::DOM_COMMENTS,
		$DOMConstants::DOM_DATATYPE_NORMALIZATION,
		$DOMConstants::DOM_ELEMENT_CONTENT_WHITESPACE,
		$DOMConstants::DOM_ENTITIES,
		$DOMConstants::DOM_INFOSET,
		$DOMConstants::DOM_NAMESPACES,
		$DOMConstants::DOM_NAMESPACE_DECLARATIONS,
		$DOMConstants::DOM_SPLIT_CDATA,
		$DOMConstants::DOM_VALIDATE,
		$DOMConstants::DOM_VALIDATE_IF_SCHEMA,
		$DOMConstants::DOM_WELLFORMED,
		$DOMConstants::DOM_DISCARD_DEFAULT_CONTENT,
		$DOMConstants::DOM_FORMAT_PRETTY_PRINT,
		$DOMConstants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS,
		$DOMConstants::DOM_XMLDECL,
		$JdkConstants::FQ_IS_STANDALONE,
		$JdkConstants::SP_IS_STANDALONE,
		$DOMConstants::DOM_ERROR_HANDLER
	}));
	this->fFeatures |= LSSerializerImpl::CDATA;
	this->fFeatures |= LSSerializerImpl::COMMENTS;
	this->fFeatures |= LSSerializerImpl::ELEM_CONTENT_WHITESPACE;
	this->fFeatures |= LSSerializerImpl::ENTITIES;
	this->fFeatures |= LSSerializerImpl::NAMESPACES;
	this->fFeatures |= LSSerializerImpl::NAMESPACEDECLS;
	this->fFeatures |= LSSerializerImpl::SPLITCDATA;
	this->fFeatures |= LSSerializerImpl::WELLFORMED;
	this->fFeatures |= LSSerializerImpl::DISCARDDEFAULT;
	this->fFeatures |= LSSerializerImpl::XMLDECL;
	$set(this, fDOMConfigProperties, $new($Properties));
	initializeSerializerProps();
	$var($Properties, configProps, $OutputPropertiesFactory::getDefaultMethodProperties("xml"_s));
	$set(this, fXMLSerializer, $new($ToXMLStream, nullptr));
	$nc(this->fXMLSerializer)->setOutputFormat(configProps);
	$nc(this->fXMLSerializer)->setOutputFormat(this->fDOMConfigProperties);
}

void LSSerializerImpl::initializeSerializerProps() {
	$useLocalCurrentObjectStackCache();
	$init($DOMConstants);
	$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_CANONICAL_FORM}), $DOMConstants::DOM3_DEFAULT_FALSE);
	$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_CDATA_SECTIONS}), $DOMConstants::DOM3_DEFAULT_TRUE);
	$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_CHECK_CHAR_NORMALIZATION}), $DOMConstants::DOM3_DEFAULT_FALSE);
	$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_COMMENTS}), $DOMConstants::DOM3_DEFAULT_TRUE);
	$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_DATATYPE_NORMALIZATION}), $DOMConstants::DOM3_DEFAULT_FALSE);
	$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_ELEMENT_CONTENT_WHITESPACE}), $DOMConstants::DOM3_DEFAULT_TRUE);
	$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_ENTITIES}), $DOMConstants::DOM3_DEFAULT_TRUE);
	if (((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::INFOSET)) != 0) {
		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_NAMESPACES}), $DOMConstants::DOM3_DEFAULT_TRUE);
		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_NAMESPACE_DECLARATIONS}), $DOMConstants::DOM3_DEFAULT_TRUE);
		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_COMMENTS}), $DOMConstants::DOM3_DEFAULT_TRUE);
		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_ELEMENT_CONTENT_WHITESPACE}), $DOMConstants::DOM3_DEFAULT_TRUE);
		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_WELLFORMED}), $DOMConstants::DOM3_DEFAULT_TRUE);
		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_ENTITIES}), $DOMConstants::DOM3_DEFAULT_FALSE);
		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_CDATA_SECTIONS}), $DOMConstants::DOM3_DEFAULT_FALSE);
		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_VALIDATE_IF_SCHEMA}), $DOMConstants::DOM3_DEFAULT_FALSE);
		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_DATATYPE_NORMALIZATION}), $DOMConstants::DOM3_DEFAULT_FALSE);
	}
	$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_NAMESPACES}), $DOMConstants::DOM3_DEFAULT_TRUE);
	$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_NAMESPACE_DECLARATIONS}), $DOMConstants::DOM3_DEFAULT_TRUE);
	$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_SPLIT_CDATA}), $DOMConstants::DOM3_DEFAULT_TRUE);
	$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_VALIDATE}), $DOMConstants::DOM3_DEFAULT_FALSE);
	$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_VALIDATE_IF_SCHEMA}), $DOMConstants::DOM3_DEFAULT_FALSE);
	$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_WELLFORMED}), $DOMConstants::DOM3_DEFAULT_TRUE);
	$nc(this->fDOMConfigProperties)->setProperty($DOMConstants::S_XSL_OUTPUT_INDENT, $DOMConstants::DOM3_DEFAULT_FALSE);
	$init($OutputPropertiesFactory);
	$nc(this->fDOMConfigProperties)->setProperty($OutputPropertiesFactory::S_KEY_INDENT_AMOUNT, $($Integer::toString(4)));
	$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_DISCARD_DEFAULT_CONTENT}), $DOMConstants::DOM3_DEFAULT_TRUE);
	$nc(this->fDOMConfigProperties)->setProperty($DOMConstants::S_XSL_OUTPUT_OMIT_XML_DECL, "no"_s);
	$load($Boolean);
	$init($JdkConstants);
	bool isStandalone = $nc(($cast($Boolean, $($SecuritySupport::getJAXPSystemProperty($Boolean::class$, $JdkConstants::SP_IS_STANDALONE, "false"_s)))))->booleanValue();
	$init($JdkProperty$ImplPropMap);
	$init($JdkProperty$State);
	$set(this, fIsStandalone, $new($JdkProperty, $JdkProperty$ImplPropMap::ISSTANDALONE, $($Boolean::valueOf(isStandalone)), $JdkProperty$State::DEFAULT));
	if (isStandalone) {
		this->fFeatures |= LSSerializerImpl::IS_STANDALONE;
		$nc(this->fDOMConfigProperties)->setProperty($DOMConstants::NS_IS_STANDALONE, $DOMConstants::DOM3_EXPLICIT_TRUE);
	} else {
		$nc(this->fDOMConfigProperties)->setProperty($DOMConstants::NS_IS_STANDALONE, $DOMConstants::DOM3_DEFAULT_FALSE);
	}
}

bool LSSerializerImpl::canSetParameter($String* name, Object$* value) {
	if ($instanceOf($Boolean, value)) {
		$init($DOMConstants);
		bool var$12 = $nc(name)->equalsIgnoreCase($DOMConstants::DOM_CDATA_SECTIONS);
		bool var$11 = var$12 || $nc(name)->equalsIgnoreCase($DOMConstants::DOM_COMMENTS);
		bool var$10 = var$11 || $nc(name)->equalsIgnoreCase($DOMConstants::DOM_ENTITIES);
		bool var$9 = var$10 || $nc(name)->equalsIgnoreCase($DOMConstants::DOM_INFOSET);
		bool var$8 = var$9 || $nc(name)->equalsIgnoreCase($DOMConstants::DOM_ELEMENT_CONTENT_WHITESPACE);
		bool var$7 = var$8 || $nc(name)->equalsIgnoreCase($DOMConstants::DOM_NAMESPACES);
		bool var$6 = var$7 || $nc(name)->equalsIgnoreCase($DOMConstants::DOM_NAMESPACE_DECLARATIONS);
		bool var$5 = var$6 || $nc(name)->equalsIgnoreCase($DOMConstants::DOM_SPLIT_CDATA);
		bool var$4 = var$5 || $nc(name)->equalsIgnoreCase($DOMConstants::DOM_WELLFORMED);
		bool var$3 = var$4 || $nc(name)->equalsIgnoreCase($DOMConstants::DOM_DISCARD_DEFAULT_CONTENT);
		bool var$2 = var$3 || $nc(name)->equalsIgnoreCase($DOMConstants::DOM_FORMAT_PRETTY_PRINT);
		bool var$1 = var$2 || $nc(name)->equalsIgnoreCase($DOMConstants::DOM_XMLDECL);
		$init($JdkConstants);
		bool var$0 = var$1 || $nc(name)->equalsIgnoreCase($JdkConstants::FQ_IS_STANDALONE);
		if (var$0 || $nc(name)->equalsIgnoreCase($JdkConstants::SP_IS_STANDALONE)) {
			return true;
		} else {
			bool var$20 = name->equalsIgnoreCase($DOMConstants::DOM_CANONICAL_FORM);
			bool var$19 = var$20 || name->equalsIgnoreCase($DOMConstants::DOM_CHECK_CHAR_NORMALIZATION);
			bool var$18 = var$19 || name->equalsIgnoreCase($DOMConstants::DOM_DATATYPE_NORMALIZATION);
			bool var$17 = var$18 || name->equalsIgnoreCase($DOMConstants::DOM_VALIDATE_IF_SCHEMA);
			if (var$17 || name->equalsIgnoreCase($DOMConstants::DOM_VALIDATE)) {
				return !$nc(($cast($Boolean, value)))->booleanValue();
			} else {
				if (name->equalsIgnoreCase($DOMConstants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS)) {
					return $nc(($cast($Boolean, value)))->booleanValue();
				}
			}
		}
	} else {
		$init($DOMConstants);
		if ($nc(name)->equalsIgnoreCase($DOMConstants::DOM_ERROR_HANDLER) && value == nullptr || $instanceOf($DOMErrorHandler, value)) {
			return true;
		}
	}
	return false;
}

$Object* LSSerializerImpl::getParameter($String* name) {
	$useLocalCurrentObjectStackCache();
	$init($DOMConstants);
	if ($nc(name)->equalsIgnoreCase($DOMConstants::DOM_NORMALIZE_CHARACTERS)) {
		return $of(nullptr);
	} else {
		if (name->equalsIgnoreCase($DOMConstants::DOM_COMMENTS)) {
			$init($Boolean);
			return $of((((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::COMMENTS)) != 0) ? $Boolean::TRUE : $Boolean::FALSE);
		} else {
			if (name->equalsIgnoreCase($DOMConstants::DOM_CDATA_SECTIONS)) {
				$init($Boolean);
				return $of((((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::CDATA)) != 0) ? $Boolean::TRUE : $Boolean::FALSE);
			} else {
				if (name->equalsIgnoreCase($DOMConstants::DOM_ENTITIES)) {
					$init($Boolean);
					return $of((((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::ENTITIES)) != 0) ? $Boolean::TRUE : $Boolean::FALSE);
				} else {
					if (name->equalsIgnoreCase($DOMConstants::DOM_NAMESPACES)) {
						$init($Boolean);
						return $of((((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::NAMESPACES)) != 0) ? $Boolean::TRUE : $Boolean::FALSE);
					} else {
						if (name->equalsIgnoreCase($DOMConstants::DOM_NAMESPACE_DECLARATIONS)) {
							$init($Boolean);
							return $of((((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::NAMESPACEDECLS)) != 0) ? $Boolean::TRUE : $Boolean::FALSE);
						} else {
							if (name->equalsIgnoreCase($DOMConstants::DOM_SPLIT_CDATA)) {
								$init($Boolean);
								return $of((((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::SPLITCDATA)) != 0) ? $Boolean::TRUE : $Boolean::FALSE);
							} else {
								if (name->equalsIgnoreCase($DOMConstants::DOM_WELLFORMED)) {
									$init($Boolean);
									return $of((((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::WELLFORMED)) != 0) ? $Boolean::TRUE : $Boolean::FALSE);
								} else {
									if (name->equalsIgnoreCase($DOMConstants::DOM_DISCARD_DEFAULT_CONTENT)) {
										$init($Boolean);
										return $of((((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::DISCARDDEFAULT)) != 0) ? $Boolean::TRUE : $Boolean::FALSE);
									} else {
										if (name->equalsIgnoreCase($DOMConstants::DOM_FORMAT_PRETTY_PRINT)) {
											$init($Boolean);
											return $of((((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::PRETTY_PRINT)) != 0) ? $Boolean::TRUE : $Boolean::FALSE);
										} else {
											if (name->equalsIgnoreCase($DOMConstants::DOM_XMLDECL)) {
												$init($Boolean);
												return $of((((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::XMLDECL)) != 0) ? $Boolean::TRUE : $Boolean::FALSE);
											} else {
												$init($JdkProperty$ImplPropMap);
												if ($JdkProperty$ImplPropMap::ISSTANDALONE->is(name)) {
													$init($Boolean);
													return $of((((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::IS_STANDALONE)) != 0) ? $Boolean::TRUE : $Boolean::FALSE);
												} else {
													if (name->equalsIgnoreCase($DOMConstants::DOM_ELEMENT_CONTENT_WHITESPACE)) {
														$init($Boolean);
														return $of((((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::ELEM_CONTENT_WHITESPACE)) != 0) ? $Boolean::TRUE : $Boolean::FALSE);
													} else {
														if (name->equalsIgnoreCase($DOMConstants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS)) {
															$init($Boolean);
															return $of($Boolean::TRUE);
														} else {
															bool var$7 = name->equalsIgnoreCase($DOMConstants::DOM_CANONICAL_FORM);
															bool var$6 = var$7 || name->equalsIgnoreCase($DOMConstants::DOM_CHECK_CHAR_NORMALIZATION);
															bool var$5 = var$6 || name->equalsIgnoreCase($DOMConstants::DOM_DATATYPE_NORMALIZATION);
															bool var$4 = var$5 || name->equalsIgnoreCase($DOMConstants::DOM_VALIDATE);
															if (var$4 || name->equalsIgnoreCase($DOMConstants::DOM_VALIDATE_IF_SCHEMA)) {
																$init($Boolean);
																return $of($Boolean::FALSE);
															} else {
																if (name->equalsIgnoreCase($DOMConstants::DOM_INFOSET)) {
																	if (((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::ENTITIES)) == 0 && ((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::CDATA)) == 0 && ((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::ELEM_CONTENT_WHITESPACE)) != 0 && ((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::NAMESPACES)) != 0 && ((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::NAMESPACEDECLS)) != 0 && ((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::WELLFORMED)) != 0 && ((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::COMMENTS)) != 0) {
																		$init($Boolean);
																		return $of($Boolean::TRUE);
																	}
																	$init($Boolean);
																	return $of($Boolean::FALSE);
																} else {
																	if (name->equalsIgnoreCase($DOMConstants::DOM_ERROR_HANDLER)) {
																		return $of(this->fDOMErrorHandler);
																	} else {
																		bool var$9 = name->equalsIgnoreCase($DOMConstants::DOM_SCHEMA_LOCATION);
																		if (var$9 || name->equalsIgnoreCase($DOMConstants::DOM_SCHEMA_TYPE)) {
																			return $of(nullptr);
																		} else {
																			$init($Utils);
																			$init($MsgKey);
																			$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_FEATURE_NOT_FOUND, $$new($ObjectArray, {$of(name)})));
																			$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
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
	}
}

$DOMStringList* LSSerializerImpl::getParameterNames() {
	return $new($DOMStringListImpl, this->fRecognizedParameters);
}

void LSSerializerImpl::setParameter($String* name, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Boolean, value)) {
		bool bValue = $nc(($cast($Boolean, value)))->booleanValue();
		$init($DOMConstants);
		if ($nc(name)->equalsIgnoreCase($DOMConstants::DOM_COMMENTS)) {
			this->fFeatures = bValue ? this->fFeatures | LSSerializerImpl::COMMENTS : (int32_t)(this->fFeatures & (uint32_t)~LSSerializerImpl::COMMENTS);
			if (bValue) {
				$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_COMMENTS}), $DOMConstants::DOM3_EXPLICIT_TRUE);
			} else {
				$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_COMMENTS}), $DOMConstants::DOM3_EXPLICIT_FALSE);
			}
		} else {
			if (name->equalsIgnoreCase($DOMConstants::DOM_CDATA_SECTIONS)) {
				this->fFeatures = bValue ? this->fFeatures | LSSerializerImpl::CDATA : (int32_t)(this->fFeatures & (uint32_t)~LSSerializerImpl::CDATA);
				if (bValue) {
					$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_CDATA_SECTIONS}), $DOMConstants::DOM3_EXPLICIT_TRUE);
				} else {
					$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_CDATA_SECTIONS}), $DOMConstants::DOM3_EXPLICIT_FALSE);
				}
			} else {
				if (name->equalsIgnoreCase($DOMConstants::DOM_ENTITIES)) {
					this->fFeatures = bValue ? this->fFeatures | LSSerializerImpl::ENTITIES : (int32_t)(this->fFeatures & (uint32_t)~LSSerializerImpl::ENTITIES);
					if (bValue) {
						$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_ENTITIES}), $DOMConstants::DOM3_EXPLICIT_TRUE);
					} else {
						$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_ENTITIES}), $DOMConstants::DOM3_EXPLICIT_FALSE);
					}
				} else {
					if (name->equalsIgnoreCase($DOMConstants::DOM_NAMESPACES)) {
						this->fFeatures = bValue ? this->fFeatures | LSSerializerImpl::NAMESPACES : (int32_t)(this->fFeatures & (uint32_t)~LSSerializerImpl::NAMESPACES);
						if (bValue) {
							$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_NAMESPACES}), $DOMConstants::DOM3_EXPLICIT_TRUE);
						} else {
							$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_NAMESPACES}), $DOMConstants::DOM3_EXPLICIT_FALSE);
						}
					} else {
						if (name->equalsIgnoreCase($DOMConstants::DOM_NAMESPACE_DECLARATIONS)) {
							this->fFeatures = bValue ? this->fFeatures | LSSerializerImpl::NAMESPACEDECLS : (int32_t)(this->fFeatures & (uint32_t)~LSSerializerImpl::NAMESPACEDECLS);
							if (bValue) {
								$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_NAMESPACE_DECLARATIONS}), $DOMConstants::DOM3_EXPLICIT_TRUE);
							} else {
								$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_NAMESPACE_DECLARATIONS}), $DOMConstants::DOM3_EXPLICIT_FALSE);
							}
						} else {
							if (name->equalsIgnoreCase($DOMConstants::DOM_SPLIT_CDATA)) {
								this->fFeatures = bValue ? this->fFeatures | LSSerializerImpl::SPLITCDATA : (int32_t)(this->fFeatures & (uint32_t)~LSSerializerImpl::SPLITCDATA);
								if (bValue) {
									$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_SPLIT_CDATA}), $DOMConstants::DOM3_EXPLICIT_TRUE);
								} else {
									$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_SPLIT_CDATA}), $DOMConstants::DOM3_EXPLICIT_FALSE);
								}
							} else {
								if (name->equalsIgnoreCase($DOMConstants::DOM_WELLFORMED)) {
									this->fFeatures = bValue ? this->fFeatures | LSSerializerImpl::WELLFORMED : (int32_t)(this->fFeatures & (uint32_t)~LSSerializerImpl::WELLFORMED);
									if (bValue) {
										$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_WELLFORMED}), $DOMConstants::DOM3_EXPLICIT_TRUE);
									} else {
										$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_WELLFORMED}), $DOMConstants::DOM3_EXPLICIT_FALSE);
									}
								} else {
									if (name->equalsIgnoreCase($DOMConstants::DOM_DISCARD_DEFAULT_CONTENT)) {
										this->fFeatures = bValue ? this->fFeatures | LSSerializerImpl::DISCARDDEFAULT : (int32_t)(this->fFeatures & (uint32_t)~LSSerializerImpl::DISCARDDEFAULT);
										if (bValue) {
											$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_DISCARD_DEFAULT_CONTENT}), $DOMConstants::DOM3_EXPLICIT_TRUE);
										} else {
											$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_DISCARD_DEFAULT_CONTENT}), $DOMConstants::DOM3_EXPLICIT_FALSE);
										}
									} else {
										if (name->equalsIgnoreCase($DOMConstants::DOM_FORMAT_PRETTY_PRINT)) {
											this->fFeatures = bValue ? this->fFeatures | LSSerializerImpl::PRETTY_PRINT : (int32_t)(this->fFeatures & (uint32_t)~LSSerializerImpl::PRETTY_PRINT);
											if (bValue) {
												$nc(this->fDOMConfigProperties)->setProperty($DOMConstants::S_XSL_OUTPUT_INDENT, $DOMConstants::DOM3_EXPLICIT_TRUE);
												$init($OutputPropertiesFactory);
												$nc(this->fDOMConfigProperties)->setProperty($OutputPropertiesFactory::S_KEY_INDENT_AMOUNT, $($Integer::toString(4)));
											} else {
												$nc(this->fDOMConfigProperties)->setProperty($DOMConstants::S_XSL_OUTPUT_INDENT, $DOMConstants::DOM3_EXPLICIT_FALSE);
											}
										} else {
											if (name->equalsIgnoreCase($DOMConstants::DOM_XMLDECL)) {
												this->fFeatures = bValue ? this->fFeatures | LSSerializerImpl::XMLDECL : (int32_t)(this->fFeatures & (uint32_t)~LSSerializerImpl::XMLDECL);
												if (bValue) {
													$nc(this->fDOMConfigProperties)->setProperty($DOMConstants::S_XSL_OUTPUT_OMIT_XML_DECL, "no"_s);
												} else {
													$nc(this->fDOMConfigProperties)->setProperty($DOMConstants::S_XSL_OUTPUT_OMIT_XML_DECL, "yes"_s);
												}
											} else {
												$init($JdkProperty$ImplPropMap);
												if ($JdkProperty$ImplPropMap::ISSTANDALONE->is(name)) {
													$init($JdkProperty$State);
													$nc(this->fIsStandalone)->setValue(name, $($Boolean::valueOf(bValue)), $JdkProperty$State::APIPROPERTY);
													this->fFeatures = $nc(($cast($Boolean, $($nc(this->fIsStandalone)->getValue()))))->booleanValue() ? this->fFeatures | LSSerializerImpl::IS_STANDALONE : (int32_t)(this->fFeatures & (uint32_t)~LSSerializerImpl::IS_STANDALONE);
													$nc(this->fDOMConfigProperties)->setProperty($DOMConstants::NS_IS_STANDALONE, $nc(($cast($Boolean, $($nc(this->fIsStandalone)->getValue()))))->booleanValue() ? $DOMConstants::DOM3_EXPLICIT_TRUE : $DOMConstants::DOM3_EXPLICIT_FALSE);
												} else {
													if (name->equalsIgnoreCase($DOMConstants::DOM_ELEMENT_CONTENT_WHITESPACE)) {
														this->fFeatures = bValue ? this->fFeatures | LSSerializerImpl::ELEM_CONTENT_WHITESPACE : (int32_t)(this->fFeatures & (uint32_t)~LSSerializerImpl::ELEM_CONTENT_WHITESPACE);
														if (bValue) {
															$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_ELEMENT_CONTENT_WHITESPACE}), $DOMConstants::DOM3_EXPLICIT_TRUE);
														} else {
															$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_ELEMENT_CONTENT_WHITESPACE}), $DOMConstants::DOM3_EXPLICIT_FALSE);
														}
													} else {
														if (name->equalsIgnoreCase($DOMConstants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS)) {
															if (!bValue) {
																$init($Utils);
																$init($MsgKey);
																$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_FEATURE_NOT_SUPPORTED, $$new($ObjectArray, {$of(name)})));
																$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
															} else {
																$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS}), $DOMConstants::DOM3_EXPLICIT_TRUE);
															}
														} else {
															bool var$7 = name->equalsIgnoreCase($DOMConstants::DOM_CANONICAL_FORM);
															bool var$6 = var$7 || name->equalsIgnoreCase($DOMConstants::DOM_VALIDATE_IF_SCHEMA);
															bool var$5 = var$6 || name->equalsIgnoreCase($DOMConstants::DOM_VALIDATE);
															bool var$4 = var$5 || name->equalsIgnoreCase($DOMConstants::DOM_CHECK_CHAR_NORMALIZATION);
															if (var$4 || name->equalsIgnoreCase($DOMConstants::DOM_DATATYPE_NORMALIZATION)) {
																if (bValue) {
																	$init($Utils);
																	$init($MsgKey);
																	$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_FEATURE_NOT_SUPPORTED, $$new($ObjectArray, {$of(name)})));
																	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
																} else {
																	if (name->equalsIgnoreCase($DOMConstants::DOM_CANONICAL_FORM)) {
																		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_CANONICAL_FORM}), $DOMConstants::DOM3_EXPLICIT_FALSE);
																	} else {
																		if (name->equalsIgnoreCase($DOMConstants::DOM_VALIDATE_IF_SCHEMA)) {
																			$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_VALIDATE_IF_SCHEMA}), $DOMConstants::DOM3_EXPLICIT_FALSE);
																		} else {
																			if (name->equalsIgnoreCase($DOMConstants::DOM_VALIDATE)) {
																				$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_VALIDATE}), $DOMConstants::DOM3_EXPLICIT_FALSE);
																			} else {
																				if (name->equalsIgnoreCase($DOMConstants::DOM_VALIDATE_IF_SCHEMA)) {
																					$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::DOM_CHECK_CHAR_NORMALIZATION, $DOMConstants::DOM_CHECK_CHAR_NORMALIZATION}), $DOMConstants::DOM3_EXPLICIT_FALSE);
																				} else {
																					if (name->equalsIgnoreCase($DOMConstants::DOM_DATATYPE_NORMALIZATION)) {
																						$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_DATATYPE_NORMALIZATION}), $DOMConstants::DOM3_EXPLICIT_FALSE);
																					}
																				}
																			}
																		}
																	}
																}
															} else {
																if (name->equalsIgnoreCase($DOMConstants::DOM_INFOSET)) {
																	if (bValue) {
																		this->fFeatures &= (uint32_t)~LSSerializerImpl::ENTITIES;
																		this->fFeatures &= (uint32_t)~LSSerializerImpl::CDATA;
																		this->fFeatures &= (uint32_t)~LSSerializerImpl::SCHEMAVALIDATE;
																		this->fFeatures &= (uint32_t)~LSSerializerImpl::DTNORMALIZE;
																		this->fFeatures |= LSSerializerImpl::NAMESPACES;
																		this->fFeatures |= LSSerializerImpl::NAMESPACEDECLS;
																		this->fFeatures |= LSSerializerImpl::WELLFORMED;
																		this->fFeatures |= LSSerializerImpl::ELEM_CONTENT_WHITESPACE;
																		this->fFeatures |= LSSerializerImpl::COMMENTS;
																		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_NAMESPACES}), $DOMConstants::DOM3_EXPLICIT_TRUE);
																		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_NAMESPACE_DECLARATIONS}), $DOMConstants::DOM3_EXPLICIT_TRUE);
																		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_COMMENTS}), $DOMConstants::DOM3_EXPLICIT_TRUE);
																		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_ELEMENT_CONTENT_WHITESPACE}), $DOMConstants::DOM3_EXPLICIT_TRUE);
																		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_WELLFORMED}), $DOMConstants::DOM3_EXPLICIT_TRUE);
																		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_ENTITIES}), $DOMConstants::DOM3_EXPLICIT_FALSE);
																		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_CDATA_SECTIONS}), $DOMConstants::DOM3_EXPLICIT_FALSE);
																		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_VALIDATE_IF_SCHEMA}), $DOMConstants::DOM3_EXPLICIT_FALSE);
																		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_DATATYPE_NORMALIZATION}), $DOMConstants::DOM3_EXPLICIT_FALSE);
																	}
																} else {
																	if (name->equalsIgnoreCase($DOMConstants::DOM_NORMALIZE_CHARACTERS)) {
																		$init($Utils);
																		$init($MsgKey);
																		$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_FEATURE_NOT_SUPPORTED, $$new($ObjectArray, {$of(name)})));
																		$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
																	} else {
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
	} else {
		$init($DOMConstants);
		if ($nc(name)->equalsIgnoreCase($DOMConstants::DOM_ERROR_HANDLER)) {
			if (value == nullptr || $instanceOf($DOMErrorHandler, value)) {
				$set(this, fDOMErrorHandler, $cast($DOMErrorHandler, value));
			} else {
				$init($Utils);
				$init($MsgKey);
				$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_TYPE_MISMATCH_ERR, $$new($ObjectArray, {$of(name)})));
				$throwNew($DOMException, $DOMException::TYPE_MISMATCH_ERR, msg);
			}
		} else {
			bool var$11 = name->equalsIgnoreCase($DOMConstants::DOM_SCHEMA_LOCATION);
			bool var$10 = var$11 || name->equalsIgnoreCase($DOMConstants::DOM_SCHEMA_TYPE);
			if (var$10 || name->equalsIgnoreCase($DOMConstants::DOM_NORMALIZE_CHARACTERS) && value != nullptr) {
				$init($Utils);
				$init($MsgKey);
				$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_FEATURE_NOT_SUPPORTED, $$new($ObjectArray, {$of(name)})));
				$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
			} else {
				$init($Utils);
				$init($MsgKey);
				$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_FEATURE_NOT_FOUND, $$new($ObjectArray, {$of(name)})));
				$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
			}
		}
	}
}

$DOMConfiguration* LSSerializerImpl::getDomConfig() {
	return static_cast<$DOMConfiguration*>(this);
}

$LSSerializerFilter* LSSerializerImpl::getFilter() {
	return this->fSerializerFilter;
}

$String* LSSerializerImpl::getNewLine() {
	return this->fEndOfLine;
}

void LSSerializerImpl::setFilter($LSSerializerFilter* filter) {
	$set(this, fSerializerFilter, filter);
}

void LSSerializerImpl::setNewLine($String* newLine) {
	$set(this, fEndOfLine, newLine != nullptr ? newLine : this->fEndOfLine);
}

bool LSSerializerImpl::write($Node* nodeArg, $LSOutput* destination) {
	$useLocalCurrentObjectStackCache();
	if (destination == nullptr) {
		$init($Utils);
		$init($MsgKey);
		$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_NO_OUTPUT_SPECIFIED, nullptr));
		if (this->fDOMErrorHandler != nullptr) {
			$nc(this->fDOMErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_NO_OUTPUT_SPECIFIED));
		}
		$throwNew($LSException, $LSException::SERIALIZE_ERR, msg);
	}
	if (nodeArg == nullptr) {
		return false;
	}
	$var($Serializer, serializer, this->fXMLSerializer);
	$nc(serializer)->reset();
	if (nodeArg != this->fVisitedNode) {
		$var($String, xmlVersion, getXMLVersion(nodeArg));
		$set(this, fEncoding, $nc(destination)->getEncoding());
		if (this->fEncoding == nullptr) {
			$set(this, fEncoding, getInputEncoding(nodeArg));
			$set(this, fEncoding, this->fEncoding != nullptr ? this->fEncoding : getXMLEncoding(nodeArg) == nullptr ? "UTF-8"_s : getXMLEncoding(nodeArg));
		}
		if (!$Encodings::isRecognizedEncoding(this->fEncoding)) {
			$init($Utils);
			$init($MsgKey);
			$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_UNSUPPORTED_ENCODING, nullptr));
			if (this->fDOMErrorHandler != nullptr) {
				$nc(this->fDOMErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_UNSUPPORTED_ENCODING));
			}
			$throwNew($LSException, $LSException::SERIALIZE_ERR, msg);
		}
		$nc($(serializer->getOutputFormat()))->setProperty("version"_s, xmlVersion);
		$init($DOMConstants);
		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_XERCES_PROPERTIES_NS, $DOMConstants::S_XML_VERSION}), xmlVersion);
		$nc(this->fDOMConfigProperties)->setProperty($DOMConstants::S_XSL_OUTPUT_ENCODING, this->fEncoding);
		bool var$1 = $nc(nodeArg)->getNodeType() != $Node::DOCUMENT_NODE;
		bool var$0 = var$1 || $nc(nodeArg)->getNodeType() != $Node::ELEMENT_NODE;
		if ((var$0 || $nc(nodeArg)->getNodeType() != $Node::ENTITY_NODE) && (((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::XMLDECL)) != 0)) {
			$nc(this->fDOMConfigProperties)->setProperty($DOMConstants::S_XSL_OUTPUT_OMIT_XML_DECL, $DOMConstants::DOM3_DEFAULT_FALSE);
		}
		$set(this, fVisitedNode, nodeArg);
	}
	$nc(this->fXMLSerializer)->setOutputFormat(this->fDOMConfigProperties);
	try {
		$var($Writer, writer, $nc(destination)->getCharacterStream());
		if (writer == nullptr) {
			$var($OutputStream, outputStream, destination->getByteStream());
			if (outputStream == nullptr) {
				$var($String, uri, destination->getSystemId());
				if (uri == nullptr) {
					$init($Utils);
					$init($MsgKey);
					$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_NO_OUTPUT_SPECIFIED, nullptr));
					if (this->fDOMErrorHandler != nullptr) {
						$nc(this->fDOMErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_NO_OUTPUT_SPECIFIED));
					}
					$throwNew($LSException, $LSException::SERIALIZE_ERR, msg);
				} else {
					$var($String, absoluteURI, $SystemIDResolver::getAbsoluteURI(uri));
					$var($URL, url, $new($URL, absoluteURI));
					$var($OutputStream, urlOutStream, nullptr);
					$var($String, protocol, url->getProtocol());
					$var($String, host, url->getHost());
					bool var$2 = $nc(protocol)->equalsIgnoreCase("file"_s);
					if (var$2) {
						bool var$3 = host == nullptr || $nc(host)->length() == 0;
						var$2 = (var$3 || $nc(host)->equals("localhost"_s));
					}
					if (var$2) {
						$assign(urlOutStream, $new($FileOutputStream, $$new($File, $(url->getPath()))));
					} else {
						$var($URLConnection, urlCon, url->openConnection());
						$nc(urlCon)->setDoInput(false);
						urlCon->setDoOutput(true);
						urlCon->setUseCaches(false);
						urlCon->setAllowUserInteraction(false);
						if ($instanceOf($HttpURLConnection, urlCon)) {
							$var($HttpURLConnection, httpCon, $cast($HttpURLConnection, urlCon));
							httpCon->setRequestMethod("PUT"_s);
						}
						$assign(urlOutStream, urlCon->getOutputStream());
					}
					serializer->setWriter($$new($OutputStreamWriter, urlOutStream));
				}
			} else {
				serializer->setWriter($$new($OutputStreamWriter, outputStream, this->fEncoding));
			}
		} else {
			serializer->setWriter(writer);
		}
		if (this->fDOMSerializer == nullptr) {
			$set(this, fDOMSerializer, $cast($DOM3Serializer, serializer->asDOM3Serializer()));
		}
		if (this->fDOMErrorHandler != nullptr) {
			$nc(this->fDOMSerializer)->setErrorHandler(this->fDOMErrorHandler);
		}
		if (this->fSerializerFilter != nullptr) {
			$nc(this->fDOMSerializer)->setNodeFilter(this->fSerializerFilter);
		}
		$nc(this->fDOMSerializer)->setNewLine(this->fEndOfLine);
		$nc(this->fDOMSerializer)->serializeDOM3(nodeArg);
	} catch ($UnsupportedEncodingException& ue) {
		$init($Utils);
		$init($MsgKey);
		$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_UNSUPPORTED_ENCODING, nullptr));
		if (this->fDOMErrorHandler != nullptr) {
			$nc(this->fDOMErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_UNSUPPORTED_ENCODING, ue));
		}
		$throwNew($LSException, $LSException::SERIALIZE_ERR, $(ue->getMessage()));
	} catch ($LSException& lse) {
		$throw(lse);
	} catch ($RuntimeException& e) {
		e->printStackTrace();
		$throwNew($LSException, $LSException::SERIALIZE_ERR, e != nullptr ? $(e->getMessage()) : "NULL Exception"_s);
	} catch ($Exception& e) {
		if (this->fDOMErrorHandler != nullptr) {
			$nc(this->fDOMErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, $(e->getMessage()), nullptr, e));
		}
		e->printStackTrace();
		$throwNew($LSException, $LSException::SERIALIZE_ERR, $(e->toString()));
	}
	return true;
}

$String* LSSerializerImpl::writeToString($Node* nodeArg) {
	$useLocalCurrentObjectStackCache();
	if (nodeArg == nullptr) {
		return nullptr;
	}
	$var($Serializer, serializer, this->fXMLSerializer);
	$nc(serializer)->reset();
	if (nodeArg != this->fVisitedNode) {
		$var($String, xmlVersion, getXMLVersion(nodeArg));
		$nc($(serializer->getOutputFormat()))->setProperty("version"_s, xmlVersion);
		$init($DOMConstants);
		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_XERCES_PROPERTIES_NS, $DOMConstants::S_XML_VERSION}), xmlVersion);
		$nc(this->fDOMConfigProperties)->setProperty($DOMConstants::S_XSL_OUTPUT_ENCODING, "UTF-16"_s);
		bool var$1 = $nc(nodeArg)->getNodeType() != $Node::DOCUMENT_NODE;
		bool var$0 = var$1 || $nc(nodeArg)->getNodeType() != $Node::ELEMENT_NODE;
		if ((var$0 || $nc(nodeArg)->getNodeType() != $Node::ENTITY_NODE) && (((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::XMLDECL)) != 0)) {
			$nc(this->fDOMConfigProperties)->setProperty($DOMConstants::S_XSL_OUTPUT_OMIT_XML_DECL, $DOMConstants::DOM3_DEFAULT_FALSE);
		}
		$set(this, fVisitedNode, nodeArg);
	}
	$nc(this->fXMLSerializer)->setOutputFormat(this->fDOMConfigProperties);
	$var($StringWriter, output, $new($StringWriter));
	try {
		serializer->setWriter(output);
		if (this->fDOMSerializer == nullptr) {
			$set(this, fDOMSerializer, $cast($DOM3Serializer, serializer->asDOM3Serializer()));
		}
		if (this->fDOMErrorHandler != nullptr) {
			$nc(this->fDOMSerializer)->setErrorHandler(this->fDOMErrorHandler);
		}
		if (this->fSerializerFilter != nullptr) {
			$nc(this->fDOMSerializer)->setNodeFilter(this->fSerializerFilter);
		}
		$nc(this->fDOMSerializer)->setNewLine(this->fEndOfLine);
		$nc(this->fDOMSerializer)->serializeDOM3(nodeArg);
	} catch ($LSException& lse) {
		$throw(lse);
	} catch ($RuntimeException& e) {
		e->printStackTrace();
		$throwNew($LSException, $LSException::SERIALIZE_ERR, $(e->toString()));
	} catch ($Exception& e) {
		if (this->fDOMErrorHandler != nullptr) {
			$nc(this->fDOMErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, $(e->getMessage()), nullptr, e));
		}
		e->printStackTrace();
		$throwNew($LSException, $LSException::SERIALIZE_ERR, $(e->toString()));
	}
	return output->toString();
}

bool LSSerializerImpl::writeToURI($Node* nodeArg, $String* uri) {
	$useLocalCurrentObjectStackCache();
	if (nodeArg == nullptr) {
		return false;
	}
	$var($Serializer, serializer, this->fXMLSerializer);
	$nc(serializer)->reset();
	if (nodeArg != this->fVisitedNode) {
		$var($String, xmlVersion, getXMLVersion(nodeArg));
		$set(this, fEncoding, getInputEncoding(nodeArg));
		if (this->fEncoding == nullptr) {
			$set(this, fEncoding, this->fEncoding != nullptr ? this->fEncoding : getXMLEncoding(nodeArg) == nullptr ? "UTF-8"_s : getXMLEncoding(nodeArg));
		}
		$nc($(serializer->getOutputFormat()))->setProperty("version"_s, xmlVersion);
		$init($DOMConstants);
		$nc(this->fDOMConfigProperties)->setProperty($$str({$DOMConstants::S_XERCES_PROPERTIES_NS, $DOMConstants::S_XML_VERSION}), xmlVersion);
		$nc(this->fDOMConfigProperties)->setProperty($DOMConstants::S_XSL_OUTPUT_ENCODING, this->fEncoding);
		bool var$1 = $nc(nodeArg)->getNodeType() != $Node::DOCUMENT_NODE;
		bool var$0 = var$1 || $nc(nodeArg)->getNodeType() != $Node::ELEMENT_NODE;
		if ((var$0 || $nc(nodeArg)->getNodeType() != $Node::ENTITY_NODE) && (((int32_t)(this->fFeatures & (uint32_t)LSSerializerImpl::XMLDECL)) != 0)) {
			$nc(this->fDOMConfigProperties)->setProperty($DOMConstants::S_XSL_OUTPUT_OMIT_XML_DECL, $DOMConstants::DOM3_DEFAULT_FALSE);
		}
		$set(this, fVisitedNode, nodeArg);
	}
	$nc(this->fXMLSerializer)->setOutputFormat(this->fDOMConfigProperties);
	try {
		if (uri == nullptr) {
			$init($Utils);
			$init($MsgKey);
			$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_NO_OUTPUT_SPECIFIED, nullptr));
			if (this->fDOMErrorHandler != nullptr) {
				$nc(this->fDOMErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_NO_OUTPUT_SPECIFIED));
			}
			$throwNew($LSException, $LSException::SERIALIZE_ERR, msg);
		} else {
			$var($String, absoluteURI, $SystemIDResolver::getAbsoluteURI(uri));
			$var($URL, url, $new($URL, absoluteURI));
			$var($OutputStream, urlOutStream, nullptr);
			$var($String, protocol, url->getProtocol());
			$var($String, host, url->getHost());
			bool var$2 = $nc(protocol)->equalsIgnoreCase("file"_s);
			if (var$2) {
				bool var$3 = host == nullptr || $nc(host)->length() == 0;
				var$2 = (var$3 || $nc(host)->equals("localhost"_s));
			}
			if (var$2) {
				$assign(urlOutStream, $new($FileOutputStream, $$new($File, $(url->getPath()))));
			} else {
				$var($URLConnection, urlCon, url->openConnection());
				$nc(urlCon)->setDoInput(false);
				urlCon->setDoOutput(true);
				urlCon->setUseCaches(false);
				urlCon->setAllowUserInteraction(false);
				if ($instanceOf($HttpURLConnection, urlCon)) {
					$var($HttpURLConnection, httpCon, $cast($HttpURLConnection, urlCon));
					httpCon->setRequestMethod("PUT"_s);
				}
				$assign(urlOutStream, urlCon->getOutputStream());
			}
			serializer->setWriter($$new($OutputStreamWriter, urlOutStream, this->fEncoding));
		}
		if (this->fDOMSerializer == nullptr) {
			$set(this, fDOMSerializer, $cast($DOM3Serializer, serializer->asDOM3Serializer()));
		}
		if (this->fDOMErrorHandler != nullptr) {
			$nc(this->fDOMSerializer)->setErrorHandler(this->fDOMErrorHandler);
		}
		if (this->fSerializerFilter != nullptr) {
			$nc(this->fDOMSerializer)->setNodeFilter(this->fSerializerFilter);
		}
		$nc(this->fDOMSerializer)->setNewLine(this->fEndOfLine);
		$nc(this->fDOMSerializer)->serializeDOM3(nodeArg);
	} catch ($LSException& lse) {
		$throw(lse);
	} catch ($RuntimeException& e) {
		e->printStackTrace();
		$throwNew($LSException, $LSException::SERIALIZE_ERR, $(e->toString()));
	} catch ($Exception& e) {
		if (this->fDOMErrorHandler != nullptr) {
			$nc(this->fDOMErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, $(e->getMessage()), nullptr, e));
		}
		e->printStackTrace();
		$throwNew($LSException, $LSException::SERIALIZE_ERR, $(e->toString()));
	}
	return true;
}

$String* LSSerializerImpl::getXMLVersion($Node* nodeArg) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, nullptr);
	if (nodeArg != nullptr) {
		if (nodeArg->getNodeType() == $Node::DOCUMENT_NODE) {
			$assign(doc, $cast($Document, nodeArg));
		} else {
			$assign(doc, nodeArg->getOwnerDocument());
		}
		if (doc != nullptr && $nc($(doc->getImplementation()))->hasFeature("Core"_s, "3.0"_s)) {
			try {
				return doc->getXmlVersion();
			} catch ($AbstractMethodError& e) {
			}
		}
	}
	return "1.0"_s;
}

$String* LSSerializerImpl::getXMLEncoding($Node* nodeArg) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, nullptr);
	if (nodeArg != nullptr) {
		if (nodeArg->getNodeType() == $Node::DOCUMENT_NODE) {
			$assign(doc, $cast($Document, nodeArg));
		} else {
			$assign(doc, nodeArg->getOwnerDocument());
		}
		if (doc != nullptr && $nc($(doc->getImplementation()))->hasFeature("Core"_s, "3.0"_s)) {
			return doc->getXmlEncoding();
		}
	}
	return "UTF-8"_s;
}

$String* LSSerializerImpl::getInputEncoding($Node* nodeArg) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, nullptr);
	if (nodeArg != nullptr) {
		if (nodeArg->getNodeType() == $Node::DOCUMENT_NODE) {
			$assign(doc, $cast($Document, nodeArg));
		} else {
			$assign(doc, nodeArg->getOwnerDocument());
		}
		if (doc != nullptr && $nc($(doc->getImplementation()))->hasFeature("Core"_s, "3.0"_s)) {
			return doc->getInputEncoding();
		}
	}
	return nullptr;
}

$DOMErrorHandler* LSSerializerImpl::getErrorHandler() {
	return this->fDOMErrorHandler;
}

LSSerializerImpl::LSSerializerImpl() {
}

$Class* LSSerializerImpl::load$($String* name, bool initialize) {
	$loadClass(LSSerializerImpl, name, initialize, &_LSSerializerImpl_ClassInfo_, allocate$LSSerializerImpl);
	return class$;
}

$Class* LSSerializerImpl::class$ = nullptr;

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com