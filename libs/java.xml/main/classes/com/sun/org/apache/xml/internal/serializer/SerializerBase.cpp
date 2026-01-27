#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>

#include <com/sun/org/apache/xml/internal/serializer/AttributesImplSerializer.h>
#include <com/sun/org/apache/xml/internal/serializer/DOMSerializer.h>
#include <com/sun/org/apache/xml/internal/serializer/ElemContext.h>
#include <com/sun/org/apache/xml/internal/serializer/ExtendedContentHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/NamespaceMappings.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerConstants.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerTrace.h>
#include <com/sun/org/apache/xml/internal/serializer/dom3/DOM3SerializerImpl.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Messages.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Utils.h>
#include <java/io/IOException.h>
#include <java/io/Writer.h>
#include <java/lang/ClassCastException.h>
#include <java/util/HashMap.h>
#include <java/util/Set.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/OutputKeys.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/Transformer.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <org/xml/sax/ext/Locator2.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef CDATA_SECTION_ELEMENTS
#undef DOCTYPE_PUBLIC
#undef DOCTYPE_SYSTEM
#undef EMPTYSTRING
#undef ENCODING
#undef ER_NAMESPACE_PREFIX
#undef EVENTTYPE_CDATA
#undef EVENTTYPE_CHARACTERS
#undef EVENTTYPE_COMMENT
#undef EVENTTYPE_ENDDOCUMENT
#undef EVENTTYPE_ENDELEMENT
#undef EVENTTYPE_ENTITYREF
#undef EVENTTYPE_PI
#undef EVENTTYPE_STARTDOCUMENT
#undef EVENTTYPE_STARTELEMENT
#undef INDENT
#undef MEDIA_TYPE
#undef OMIT_XML_DECLARATION
#undef STANDALONE
#undef VERSION
#undef XMLNS_PREFIX

using $AttributesImplSerializer = ::com::sun::org::apache::xml::internal::serializer::AttributesImplSerializer;
using $DOMSerializer = ::com::sun::org::apache::xml::internal::serializer::DOMSerializer;
using $ElemContext = ::com::sun::org::apache::xml::internal::serializer::ElemContext;
using $ExtendedContentHandler = ::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler;
using $NamespaceMappings = ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $SerializerConstants = ::com::sun::org::apache::xml::internal::serializer::SerializerConstants;
using $SerializerTrace = ::com::sun::org::apache::xml::internal::serializer::SerializerTrace;
using $DOM3SerializerImpl = ::com::sun::org::apache::xml::internal::serializer::dom3::DOM3SerializerImpl;
using $Messages = ::com::sun::org::apache::xml::internal::serializer::utils::Messages;
using $MsgKey = ::com::sun::org::apache::xml::internal::serializer::utils::MsgKey;
using $Utils = ::com::sun::org::apache::xml::internal::serializer::utils::Utils;
using $IOException = ::java::io::IOException;
using $Writer = ::java::io::Writer;
using $Character = ::java::lang::Character;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $HashMap = ::java::util::HashMap;
using $Set = ::java::util::Set;
using $OutputKeys = ::javax::xml::transform::OutputKeys;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $Transformer = ::javax::xml::transform::Transformer;
using $Node = ::org::w3c::dom::Node;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $Locator = ::org::xml::sax::Locator;
using $SAXParseException = ::org::xml::sax::SAXParseException;
using $Locator2 = ::org::xml::sax::ext::Locator2;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _SerializerBase_FieldInfo_[] = {
	{"m_errListener", "Ljavax/xml/transform/ErrorListener;", nullptr, $PROTECTED, $field(SerializerBase, m_errListener)},
	{"m_needToCallStartDocument", "Z", nullptr, $PROTECTED, $field(SerializerBase, m_needToCallStartDocument)},
	{"m_cdataTagOpen", "Z", nullptr, $PROTECTED, $field(SerializerBase, m_cdataTagOpen)},
	{"m_attributes", "Lcom/sun/org/apache/xml/internal/serializer/AttributesImplSerializer;", nullptr, $PROTECTED, $field(SerializerBase, m_attributes)},
	{"m_inEntityRef", "I", nullptr, $PROTECTED, $field(SerializerBase, m_inEntityRef)},
	{"m_inExternalDTD", "Z", nullptr, $PROTECTED, $field(SerializerBase, m_inExternalDTD)},
	{"m_doctypeSystem", "Ljava/lang/String;", nullptr, $PROTECTED, $field(SerializerBase, m_doctypeSystem)},
	{"m_doctypePublic", "Ljava/lang/String;", nullptr, $PROTECTED, $field(SerializerBase, m_doctypePublic)},
	{"m_needToOutputDocTypeDecl", "Z", nullptr, 0, $field(SerializerBase, m_needToOutputDocTypeDecl)},
	{"m_shouldNotWriteXMLHeader", "Z", nullptr, $PROTECTED, $field(SerializerBase, m_shouldNotWriteXMLHeader)},
	{"m_standalone", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SerializerBase, m_standalone)},
	{"m_standaloneWasSpecified", "Z", nullptr, $PROTECTED, $field(SerializerBase, m_standaloneWasSpecified)},
	{"m_isStandalone", "Z", nullptr, $PROTECTED, $field(SerializerBase, m_isStandalone)},
	{"m_doIndent", "Z", nullptr, $PROTECTED, $field(SerializerBase, m_doIndent)},
	{"m_indentAmount", "I", nullptr, $PROTECTED, $field(SerializerBase, m_indentAmount)},
	{"m_version", "Ljava/lang/String;", nullptr, $PROTECTED, $field(SerializerBase, m_version)},
	{"m_mediatype", "Ljava/lang/String;", nullptr, $PROTECTED, $field(SerializerBase, m_mediatype)},
	{"m_transformer", "Ljavax/xml/transform/Transformer;", nullptr, $PRIVATE, $field(SerializerBase, m_transformer)},
	{"m_prefixMap", "Lcom/sun/org/apache/xml/internal/serializer/NamespaceMappings;", nullptr, $PROTECTED, $field(SerializerBase, m_prefixMap)},
	{"m_tracer", "Lcom/sun/org/apache/xml/internal/serializer/SerializerTrace;", nullptr, $PROTECTED, $field(SerializerBase, m_tracer)},
	{"m_sourceLocator", "Ljavax/xml/transform/SourceLocator;", nullptr, $PROTECTED, $field(SerializerBase, m_sourceLocator)},
	{"m_writer", "Ljava/io/Writer;", nullptr, $PROTECTED, $field(SerializerBase, m_writer)},
	{"m_elemContext", "Lcom/sun/org/apache/xml/internal/serializer/ElemContext;", nullptr, $PROTECTED, $field(SerializerBase, m_elemContext)},
	{"m_charsBuff", "[C", nullptr, $PROTECTED, $field(SerializerBase, m_charsBuff)},
	{"m_attrBuff", "[C", nullptr, $PROTECTED, $field(SerializerBase, m_attrBuff)},
	{"m_locator", "Lorg/xml/sax/Locator;", nullptr, $PRIVATE, $field(SerializerBase, m_locator)},
	{"m_needToCallSetDocumentInfo", "Z", nullptr, $PROTECTED, $field(SerializerBase, m_needToCallSetDocumentInfo)},
	{"m_StringOfCDATASections", "Ljava/lang/String;", nullptr, $PROTECTED, $field(SerializerBase, m_StringOfCDATASections)},
	{"m_docIsEmpty", "Z", nullptr, 0, $field(SerializerBase, m_docIsEmpty)},
	{"m_CdataElems", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;>;", $PROTECTED, $field(SerializerBase, m_CdataElems)},
	{"m_OutputProps", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(SerializerBase, m_OutputProps)},
	{"m_OutputPropsDefault", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(SerializerBase, m_OutputPropsDefault)},
	{}
};

$MethodInfo _SerializerBase_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(SerializerBase, init$, void)},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, addAttribute, void, $String*, $String*, $String*, $String*, $String*, bool), "org.xml.sax.SAXException"},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, addAttribute, void, $String*, $String*)},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, addAttribute, void, $String*, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"addAttributeAlways", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Z", nullptr, $PUBLIC, $virtualMethod(SerializerBase, addAttributeAlways, bool, $String*, $String*, $String*, $String*, $String*, bool)},
	{"addAttributes", "(Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, addAttributes, void, $Attributes*), "org.xml.sax.SAXException"},
	{"addCDATAElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(SerializerBase, addCDATAElement, void, $String*, $String*)},
	{"addXSLAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, addXSLAttribute, void, $String*, $String*, $String*)},
	{"asContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, asContentHandler, $ContentHandler*), "java.io.IOException"},
	{"asDOM3Serializer", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, asDOM3Serializer, $Object*), "java.io.IOException"},
	{"asDOMSerializer", "()Lcom/sun/org/apache/xml/internal/serializer/DOMSerializer;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, asDOMSerializer, $DOMSerializer*), "java.io.IOException"},
	{"characters", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, characters, void, $Node*), "org.xml.sax.SAXException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, close, void)},
	{"comment", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, comment, void, $String*), "org.xml.sax.SAXException"},
	{"documentIsEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(SerializerBase, documentIsEmpty, bool)},
	{"endEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, endEntity, void, $String*), "org.xml.sax.SAXException"},
	{"entityReference", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, entityReference, void, $String*), "org.xml.sax.SAXException"},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, fatalError, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"fireCDATAEvent", "([CII)V", nullptr, $PROTECTED, $virtualMethod(SerializerBase, fireCDATAEvent, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"fireCharEvent", "([CII)V", nullptr, $PROTECTED, $virtualMethod(SerializerBase, fireCharEvent, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"fireCommentEvent", "([CII)V", nullptr, $PROTECTED, $virtualMethod(SerializerBase, fireCommentEvent, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"fireEndDoc", "()V", nullptr, $PROTECTED, $virtualMethod(SerializerBase, fireEndDoc, void), "org.xml.sax.SAXException"},
	{"fireEndElem", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(SerializerBase, fireEndElem, void, $String*), "org.xml.sax.SAXException"},
	{"fireEndEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, fireEndEntity, void, $String*), "org.xml.sax.SAXException"},
	{"fireEntityReference", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(SerializerBase, fireEntityReference, void, $String*), "org.xml.sax.SAXException"},
	{"fireEscapingEvent", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(SerializerBase, fireEscapingEvent, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"fireStartDoc", "()V", nullptr, $PROTECTED, $virtualMethod(SerializerBase, fireStartDoc, void), "org.xml.sax.SAXException"},
	{"fireStartElem", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(SerializerBase, fireStartElem, void, $String*), "org.xml.sax.SAXException"},
	{"fireStartEntity", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(SerializerBase, fireStartEntity, void, $String*), "org.xml.sax.SAXException"},
	{"flushMyWriter", "()V", nullptr, $PRIVATE, $method(SerializerBase, flushMyWriter, void)},
	{"getDoctypePublic", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getDoctypePublic, $String*)},
	{"getDoctypeSystem", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getDoctypeSystem, $String*)},
	{"getElementURI", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(SerializerBase, getElementURI, $String*)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getEncoding, $String*)},
	{"getFirstCharLocName", "(Ljava/lang/String;)C", nullptr, $STATIC, $staticMethod(SerializerBase, getFirstCharLocName, char16_t, $String*)},
	{"getIndent", "()Z", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getIndent, bool)},
	{"getIndentAmount", "()I", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getIndentAmount, int32_t)},
	{"getLocalName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticMethod(SerializerBase, getLocalName, $String*, $String*)},
	{"getMediaType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getMediaType, $String*)},
	{"getNamespaceMappings", "()Lcom/sun/org/apache/xml/internal/serializer/NamespaceMappings;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getNamespaceMappings, $NamespaceMappings*)},
	{"getNamespaceURI", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getNamespaceURI, $String*, $String*, bool)},
	{"getNamespaceURIFromPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getNamespaceURIFromPrefix, $String*, $String*)},
	{"getOmitXMLDeclaration", "()Z", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getOmitXMLDeclaration, bool)},
	{"getOutputPropDefaultKeys", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", 0, $virtualMethod(SerializerBase, getOutputPropDefaultKeys, $Set*)},
	{"getOutputPropKeys", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", 0, $virtualMethod(SerializerBase, getOutputPropKeys, $Set*)},
	{"getOutputProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getOutputProperty, $String*, $String*)},
	{"getOutputPropertyDefault", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getOutputPropertyDefault, $String*, $String*)},
	{"getOutputPropertyNonDefault", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getOutputPropertyNonDefault, $String*, $String*)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getPrefix, $String*, $String*)},
	{"getPrefixPart", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticMethod(SerializerBase, getPrefixPart, $String*, $String*)},
	{"getProp", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PRIVATE, $method(SerializerBase, getProp, $String*, $String*, bool)},
	{"getStandalone", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getStandalone, $String*)},
	{"getTransformer", "()Ljavax/xml/transform/Transformer;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getTransformer, $Transformer*)},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SerializerBase, getVersion, $String*)},
	{"inTemporaryOutputState", "()Z", nullptr, $FINAL, $method(SerializerBase, inTemporaryOutputState, bool)},
	{"initCDATA", "()V", nullptr, $PROTECTED, $virtualMethod(SerializerBase, initCDATA, void)},
	{"initCdataElems", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(SerializerBase, initCdataElems, void, $String*)},
	{"isCdataSection", "()Z", nullptr, $PROTECTED, $virtualMethod(SerializerBase, isCdataSection, bool)},
	{"isInEntityRef", "()Z", nullptr, $PROTECTED, $virtualMethod(SerializerBase, isInEntityRef, bool)},
	{"namespaceAfterStartElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, namespaceAfterStartElement, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, notationDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"patchName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(SerializerBase, patchName, $String*, $String*)},
	{"reset", "()Z", nullptr, $PUBLIC, $virtualMethod(SerializerBase, reset, bool)},
	{"resetSerializerBase", "()V", nullptr, $PRIVATE, $method(SerializerBase, resetSerializerBase, void)},
	{"setDTDEntityExpansion", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setDTDEntityExpansion, void, bool)},
	{"setDoctype", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setDoctype, void, $String*, $String*)},
	{"setDoctypePublic", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setDoctypePublic, void, $String*)},
	{"setDoctypeSystem", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setDoctypeSystem, void, $String*)},
	{"setDocumentInfo", "()V", nullptr, $PROTECTED, $virtualMethod(SerializerBase, setDocumentInfo, void)},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setDocumentLocator, void, $Locator*)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setEncoding, void, $String*)},
	{"setIndent", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setIndent, void, bool)},
	{"setIndentAmount", "(I)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setIndentAmount, void, int32_t)},
	{"setIsStandalone", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setIsStandalone, void, bool)},
	{"setMediaType", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setMediaType, void, $String*)},
	{"setNamespaceMappings", "(Lcom/sun/org/apache/xml/internal/serializer/NamespaceMappings;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setNamespaceMappings, void, $NamespaceMappings*)},
	{"setOmitXMLDeclaration", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setOmitXMLDeclaration, void, bool)},
	{"setOutputProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setOutputProperty, void, $String*, $String*)},
	{"setOutputPropertyDefault", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setOutputPropertyDefault, void, $String*, $String*)},
	{"setProp", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $virtualMethod(SerializerBase, setProp, void, $String*, $String*, bool)},
	{"setSourceLocator", "(Ljavax/xml/transform/SourceLocator;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setSourceLocator, void, $SourceLocator*)},
	{"setStandalone", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setStandalone, void, $String*)},
	{"setStandaloneInternal", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(SerializerBase, setStandaloneInternal, void, $String*)},
	{"setTransformer", "(Ljavax/xml/transform/Transformer;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setTransformer, void, $Transformer*)},
	{"setVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, setVersion, void, $String*)},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, startDocument, void), "org.xml.sax.SAXException"},
	{"startDocumentInternal", "()V", nullptr, $PROTECTED, $virtualMethod(SerializerBase, startDocumentInternal, void), "org.xml.sax.SAXException"},
	{"subPartMatch", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(SerializerBase, subPartMatch, bool, $String*, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, unparsedEntityDecl, void, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(SerializerBase, warning, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _SerializerBase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.SerializerBase",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.serializer.SerializationHandler,com.sun.org.apache.xml.internal.serializer.SerializerConstants",
	_SerializerBase_FieldInfo_,
	_SerializerBase_MethodInfo_
};

$Object* allocate$SerializerBase($Class* clazz) {
	return $of($alloc(SerializerBase));
}

int32_t SerializerBase::hashCode() {
	 return this->$SerializationHandler::hashCode();
}

bool SerializerBase::equals(Object$* arg0) {
	 return this->$SerializationHandler::equals(arg0);
}

$Object* SerializerBase::clone() {
	 return this->$SerializationHandler::clone();
}

$String* SerializerBase::toString() {
	 return this->$SerializationHandler::toString();
}

void SerializerBase::finalize() {
	this->$SerializationHandler::finalize();
}

void SerializerBase::init$() {
	this->m_needToCallStartDocument = true;
	this->m_cdataTagOpen = false;
	$set(this, m_attributes, $new($AttributesImplSerializer));
	this->m_inEntityRef = 0;
	this->m_inExternalDTD = false;
	this->m_needToOutputDocTypeDecl = true;
	this->m_shouldNotWriteXMLHeader = false;
	this->m_standaloneWasSpecified = false;
	this->m_isStandalone = false;
	this->m_doIndent = false;
	this->m_indentAmount = 4;
	$set(this, m_version, nullptr);
	$set(this, m_writer, nullptr);
	$set(this, m_elemContext, $new($ElemContext));
	$set(this, m_charsBuff, $new($chars, 60));
	$set(this, m_attrBuff, $new($chars, 30));
	$set(this, m_locator, nullptr);
	this->m_needToCallSetDocumentInfo = true;
	$set(this, m_StringOfCDATASections, nullptr);
	this->m_docIsEmpty = true;
	$set(this, m_CdataElems, nullptr);
}

void SerializerBase::fireEndElem($String* name) {
	if (this->m_tracer != nullptr) {
		flushMyWriter();
		$nc(this->m_tracer)->fireGenerateEvent($SerializerTrace::EVENTTYPE_ENDELEMENT, name, ($Attributes*)nullptr);
	}
}

void SerializerBase::fireCharEvent($chars* chars, int32_t start, int32_t length) {
	if (this->m_tracer != nullptr) {
		flushMyWriter();
		$nc(this->m_tracer)->fireGenerateEvent($SerializerTrace::EVENTTYPE_CHARACTERS, chars, start, length);
	}
}

void SerializerBase::comment($String* data) {
	int32_t length = $nc(data)->length();
	if (length > $nc(this->m_charsBuff)->length) {
		$set(this, m_charsBuff, $new($chars, length * 2 + 1));
	}
	data->getChars(0, length, this->m_charsBuff, 0);
	comment(this->m_charsBuff, 0, length);
}

$String* SerializerBase::patchName($String* qname) {
	$useLocalCurrentObjectStackCache();
	int32_t lastColon = $nc(qname)->lastIndexOf((int32_t)u':');
	if (lastColon > 0) {
		int32_t firstColon = qname->indexOf((int32_t)u':');
		$var($String, prefix, qname->substring(0, firstColon));
		$var($String, localName, qname->substring(lastColon + 1));
		$var($String, uri, $nc(this->m_prefixMap)->lookupNamespace(prefix));
		if (uri != nullptr && uri->length() == 0) {
			return localName;
		} else if (firstColon != lastColon) {
			return $str({prefix, $$str(u':'), localName});
		}
	}
	return qname;
}

$String* SerializerBase::getLocalName($String* qname) {
	$init(SerializerBase);
	int32_t col = $nc(qname)->lastIndexOf((int32_t)u':');
	return (col > 0) ? qname->substring(col + 1) : qname;
}

void SerializerBase::setDocumentLocator($Locator* locator) {
	$set(this, m_locator, locator);
}

void SerializerBase::addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool XSLAttribute) {
	if ($nc(this->m_elemContext)->m_startTagOpen) {
		addAttributeAlways(uri, localName, rawName, type, value, XSLAttribute);
	}
}

bool SerializerBase::addAttributeAlways($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool XSLAttribute) {
	bool was_added = false;
	int32_t index = 0;
	if (localName == nullptr || uri == nullptr || $nc(uri)->length() == 0) {
		index = $nc(this->m_attributes)->getIndex(rawName);
	} else {
		index = $nc(this->m_attributes)->getIndex(uri, localName);
	}
	if (index >= 0) {
		$nc(this->m_attributes)->setValue(index, value);
		was_added = false;
	} else {
		$nc(this->m_attributes)->addAttribute(uri, localName, rawName, type, value);
		was_added = true;
	}
	return was_added;
}

void SerializerBase::addAttribute($String* name, $String* value) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->m_elemContext)->m_startTagOpen) {
		$var($String, patchedName, patchName(name));
		$var($String, localName, getLocalName(patchedName));
		$var($String, uri, getNamespaceURI(patchedName, false));
		addAttributeAlways(uri, localName, patchedName, "CDATA"_s, value, false);
	}
}

void SerializerBase::addXSLAttribute($String* name, $String* value, $String* uri) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->m_elemContext)->m_startTagOpen) {
		$var($String, patchedName, patchName(name));
		$var($String, localName, getLocalName(patchedName));
		addAttributeAlways(uri, localName, patchedName, "CDATA"_s, value, true);
	}
}

void SerializerBase::addAttributes($Attributes* atts) {
	$useLocalCurrentObjectStackCache();
	int32_t nAtts = $nc(atts)->getLength();
	for (int32_t i = 0; i < nAtts; ++i) {
		$var($String, uri, atts->getURI(i));
		if (nullptr == uri) {
			$assign(uri, ""_s);
		}
		$var($String, var$0, uri);
		$var($String, var$1, atts->getLocalName(i));
		$var($String, var$2, atts->getQName(i));
		$var($String, var$3, atts->getType(i));
		addAttributeAlways(var$0, var$1, var$2, var$3, $(atts->getValue(i)), false);
	}
}

$ContentHandler* SerializerBase::asContentHandler() {
	return this;
}

void SerializerBase::endEntity($String* name) {
	if ($nc(name)->equals("[dtd]"_s)) {
		this->m_inExternalDTD = false;
	}
	if (!this->m_inExternalDTD) {
		--this->m_inEntityRef;
	}
	if (this->m_tracer != nullptr) {
		this->fireEndEntity(name);
	}
}

bool SerializerBase::isInEntityRef() {
	return this->m_inEntityRef > 0;
}

void SerializerBase::close() {
}

void SerializerBase::initCDATA() {
}

$String* SerializerBase::getEncoding() {
	$init($OutputKeys);
	return getOutputProperty($OutputKeys::ENCODING);
}

void SerializerBase::setEncoding($String* encoding) {
	$init($OutputKeys);
	setOutputProperty($OutputKeys::ENCODING, encoding);
}

void SerializerBase::setOmitXMLDeclaration(bool b) {
	$var($String, val, b ? "yes"_s : "no"_s);
	$init($OutputKeys);
	setOutputProperty($OutputKeys::OMIT_XML_DECLARATION, val);
}

bool SerializerBase::getOmitXMLDeclaration() {
	return this->m_shouldNotWriteXMLHeader;
}

$String* SerializerBase::getDoctypePublic() {
	return this->m_doctypePublic;
}

void SerializerBase::setDoctypePublic($String* doctypePublic) {
	$init($OutputKeys);
	setOutputProperty($OutputKeys::DOCTYPE_PUBLIC, doctypePublic);
}

$String* SerializerBase::getDoctypeSystem() {
	return this->m_doctypeSystem;
}

void SerializerBase::setDoctypeSystem($String* doctypeSystem) {
	$init($OutputKeys);
	setOutputProperty($OutputKeys::DOCTYPE_SYSTEM, doctypeSystem);
}

void SerializerBase::setDoctype($String* doctypeSystem, $String* doctypePublic) {
	$init($OutputKeys);
	setOutputProperty($OutputKeys::DOCTYPE_SYSTEM, doctypeSystem);
	setOutputProperty($OutputKeys::DOCTYPE_PUBLIC, doctypePublic);
}

void SerializerBase::setStandalone($String* standalone) {
	$init($OutputKeys);
	setOutputProperty($OutputKeys::STANDALONE, standalone);
}

void SerializerBase::setStandaloneInternal($String* standalone) {
	if ("yes"_s->equals(standalone)) {
		$set(this, m_standalone, "yes"_s);
	} else {
		$set(this, m_standalone, "no"_s);
	}
}

$String* SerializerBase::getStandalone() {
	return this->m_standalone;
}

bool SerializerBase::getIndent() {
	return this->m_doIndent;
}

$String* SerializerBase::getMediaType() {
	return this->m_mediatype;
}

$String* SerializerBase::getVersion() {
	return this->m_version;
}

void SerializerBase::setVersion($String* version) {
	$init($OutputKeys);
	setOutputProperty($OutputKeys::VERSION, version);
}

void SerializerBase::setMediaType($String* mediaType) {
	$init($OutputKeys);
	setOutputProperty($OutputKeys::MEDIA_TYPE, mediaType);
}

int32_t SerializerBase::getIndentAmount() {
	return this->m_indentAmount;
}

void SerializerBase::setIndentAmount(int32_t m_indentAmount) {
	this->m_indentAmount = m_indentAmount;
}

void SerializerBase::setIndent(bool doIndent) {
	$var($String, val, doIndent ? "yes"_s : "no"_s);
	$init($OutputKeys);
	setOutputProperty($OutputKeys::INDENT, val);
}

void SerializerBase::setIsStandalone(bool isStandalone) {
	this->m_isStandalone = isStandalone;
}

void SerializerBase::namespaceAfterStartElement($String* uri, $String* prefix) {
}

$DOMSerializer* SerializerBase::asDOMSerializer() {
	return this;
}

bool SerializerBase::subPartMatch($String* p, $String* t) {
	$init(SerializerBase);
	return (p == t) || ((nullptr != p) && (p->equals(t)));
}

$String* SerializerBase::getPrefixPart($String* qname) {
	$init(SerializerBase);
	int32_t col = $nc(qname)->indexOf((int32_t)u':');
	return (col > 0) ? qname->substring(0, col) : ($String*)nullptr;
}

$NamespaceMappings* SerializerBase::getNamespaceMappings() {
	return this->m_prefixMap;
}

$String* SerializerBase::getPrefix($String* namespaceURI) {
	$var($String, prefix, $nc(this->m_prefixMap)->lookupPrefix(namespaceURI));
	return prefix;
}

$String* SerializerBase::getNamespaceURI($String* qname, bool isElement) {
	$useLocalCurrentObjectStackCache();
	$init($SerializerConstants);
	$var($String, uri, $SerializerConstants::EMPTYSTRING);
	int32_t col = $nc(qname)->lastIndexOf((int32_t)u':');
	$var($String, prefix, (col > 0) ? qname->substring(0, col) : $SerializerConstants::EMPTYSTRING);
	if (!$nc($SerializerConstants::EMPTYSTRING)->equals(prefix) || isElement) {
		if (this->m_prefixMap != nullptr) {
			$assign(uri, $nc(this->m_prefixMap)->lookupNamespace(prefix));
			if (uri == nullptr && !$nc(prefix)->equals($SerializerConstants::XMLNS_PREFIX)) {
				$init($Utils);
				$init($MsgKey);
				$throwNew($RuntimeException, $($nc($Utils::messages)->createMessage($MsgKey::ER_NAMESPACE_PREFIX, $$new($ObjectArray, {$($of(qname->substring(0, col)))}))));
			}
		}
	}
	return uri;
}

$String* SerializerBase::getNamespaceURIFromPrefix($String* prefix) {
	$var($String, uri, nullptr);
	if (this->m_prefixMap != nullptr) {
		$assign(uri, $nc(this->m_prefixMap)->lookupNamespace(prefix));
	}
	return uri;
}

void SerializerBase::entityReference($String* name) {
	flushPending();
	startEntity(name);
	endEntity(name);
	if (this->m_tracer != nullptr) {
		fireEntityReference(name);
	}
}

void SerializerBase::setTransformer($Transformer* t) {
	$set(this, m_transformer, t);
	if (($instanceOf($SerializerTrace, this->m_transformer)) && ($nc(($cast($SerializerTrace, this->m_transformer)))->hasTraceListeners())) {
		$set(this, m_tracer, $cast($SerializerTrace, this->m_transformer));
	} else {
		$set(this, m_tracer, nullptr);
	}
}

$Transformer* SerializerBase::getTransformer() {
	return this->m_transformer;
}

void SerializerBase::characters($Node* node) {
	flushPending();
	$var($String, data, $nc(node)->getNodeValue());
	if (data != nullptr) {
		int32_t length = data->length();
		if (length > $nc(this->m_charsBuff)->length) {
			$set(this, m_charsBuff, $new($chars, length * 2 + 1));
		}
		data->getChars(0, length, this->m_charsBuff, 0);
		characters(this->m_charsBuff, 0, length);
	}
}

void SerializerBase::error($SAXParseException* exc) {
}

void SerializerBase::fatalError($SAXParseException* exc) {
	$nc(this->m_elemContext)->m_startTagOpen = false;
}

void SerializerBase::warning($SAXParseException* exc) {
}

void SerializerBase::fireStartEntity($String* name) {
	if (this->m_tracer != nullptr) {
		flushMyWriter();
		$nc(this->m_tracer)->fireGenerateEvent($SerializerTrace::EVENTTYPE_ENTITYREF, name);
	}
}

void SerializerBase::flushMyWriter() {
	if (this->m_writer != nullptr) {
		try {
			$nc(this->m_writer)->flush();
		} catch ($IOException& ioe) {
		}
	}
}

void SerializerBase::fireCDATAEvent($chars* chars, int32_t start, int32_t length) {
	if (this->m_tracer != nullptr) {
		flushMyWriter();
		$nc(this->m_tracer)->fireGenerateEvent($SerializerTrace::EVENTTYPE_CDATA, chars, start, length);
	}
}

void SerializerBase::fireCommentEvent($chars* chars, int32_t start, int32_t length) {
	if (this->m_tracer != nullptr) {
		flushMyWriter();
		$nc(this->m_tracer)->fireGenerateEvent($SerializerTrace::EVENTTYPE_COMMENT, $$new($String, chars, start, length));
	}
}

void SerializerBase::fireEndEntity($String* name) {
	if (this->m_tracer != nullptr) {
		flushMyWriter();
	}
}

void SerializerBase::fireStartDoc() {
	if (this->m_tracer != nullptr) {
		flushMyWriter();
		$nc(this->m_tracer)->fireGenerateEvent($SerializerTrace::EVENTTYPE_STARTDOCUMENT);
	}
}

void SerializerBase::fireEndDoc() {
	if (this->m_tracer != nullptr) {
		flushMyWriter();
		$nc(this->m_tracer)->fireGenerateEvent($SerializerTrace::EVENTTYPE_ENDDOCUMENT);
	}
}

void SerializerBase::fireStartElem($String* elemName) {
	if (this->m_tracer != nullptr) {
		flushMyWriter();
		$nc(this->m_tracer)->fireGenerateEvent($SerializerTrace::EVENTTYPE_STARTELEMENT, elemName, static_cast<$Attributes*>(this->m_attributes));
	}
}

void SerializerBase::fireEscapingEvent($String* name, $String* data) {
	if (this->m_tracer != nullptr) {
		flushMyWriter();
		$nc(this->m_tracer)->fireGenerateEvent($SerializerTrace::EVENTTYPE_PI, name, data);
	}
}

void SerializerBase::fireEntityReference($String* name) {
	if (this->m_tracer != nullptr) {
		flushMyWriter();
		$nc(this->m_tracer)->fireGenerateEvent($SerializerTrace::EVENTTYPE_ENTITYREF, name, ($Attributes*)nullptr);
	}
}

void SerializerBase::startDocument() {
	startDocumentInternal();
	this->m_needToCallStartDocument = false;
	return;
}

void SerializerBase::startDocumentInternal() {
	if (this->m_tracer != nullptr) {
		this->fireStartDoc();
	}
}

void SerializerBase::setDocumentInfo() {
	if (this->m_locator == nullptr) {
		return;
	}
	try {
		$var($String, strVersion, $nc(($cast($Locator2, this->m_locator)))->getXMLVersion());
		if (strVersion != nullptr) {
			setVersion(strVersion);
		}
	} catch ($ClassCastException& e) {
	}
}

void SerializerBase::setSourceLocator($SourceLocator* locator) {
	$set(this, m_sourceLocator, locator);
}

void SerializerBase::setNamespaceMappings($NamespaceMappings* mappings) {
	$set(this, m_prefixMap, mappings);
}

bool SerializerBase::reset() {
	resetSerializerBase();
	return true;
}

void SerializerBase::resetSerializerBase() {
	$nc(this->m_attributes)->clear();
	$set(this, m_StringOfCDATASections, nullptr);
	$set(this, m_elemContext, $new($ElemContext));
	$set(this, m_doctypePublic, nullptr);
	$set(this, m_doctypeSystem, nullptr);
	this->m_doIndent = false;
	this->m_indentAmount = 4;
	this->m_inEntityRef = 0;
	this->m_inExternalDTD = false;
	$set(this, m_mediatype, nullptr);
	this->m_needToCallStartDocument = true;
	this->m_needToOutputDocTypeDecl = false;
	if (this->m_prefixMap != nullptr) {
		$nc(this->m_prefixMap)->reset();
	}
	this->m_shouldNotWriteXMLHeader = false;
	$set(this, m_sourceLocator, nullptr);
	$set(this, m_standalone, nullptr);
	this->m_standaloneWasSpecified = false;
	$set(this, m_tracer, nullptr);
	$set(this, m_transformer, nullptr);
	$set(this, m_version, nullptr);
}

bool SerializerBase::inTemporaryOutputState() {
	return (getEncoding() == nullptr);
}

void SerializerBase::addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value) {
	if ($nc(this->m_elemContext)->m_startTagOpen) {
		addAttributeAlways(uri, localName, rawName, type, value, false);
	}
}

void SerializerBase::notationDecl($String* arg0, $String* arg1, $String* arg2) {
}

void SerializerBase::unparsedEntityDecl($String* arg0, $String* arg1, $String* arg2, $String* arg3) {
}

void SerializerBase::setDTDEntityExpansion(bool expand) {
}

void SerializerBase::initCdataElems($String* s) {
	$useLocalCurrentObjectStackCache();
	if (s != nullptr) {
		int32_t max = s->length();
		bool inCurly = false;
		bool foundURI = false;
		$var($StringBuilder, buf, $new($StringBuilder));
		$var($String, uri, nullptr);
		$var($String, localName, nullptr);
		for (int32_t i = 0; i < max; ++i) {
			char16_t c = s->charAt(i);
			if ($Character::isWhitespace(c)) {
				if (!inCurly) {
					if (buf->length() > 0) {
						$assign(localName, buf->toString());
						if (!foundURI) {
							$assign(uri, ""_s);
						}
						addCDATAElement(uri, localName);
						buf->setLength(0);
						foundURI = false;
					}
					continue;
				} else {
					buf->append(c);
				}
			} else if (u'{' == c) {
				inCurly = true;
			} else if (u'}' == c) {
				foundURI = true;
				$assign(uri, buf->toString());
				buf->setLength(0);
				inCurly = false;
			} else {
				buf->append(c);
			}
		}
		if (buf->length() > 0) {
			$assign(localName, buf->toString());
			if (!foundURI) {
				$assign(uri, ""_s);
			}
			addCDATAElement(uri, localName);
		}
	}
}

void SerializerBase::addCDATAElement($String* uri, $String* localName) {
	if (this->m_CdataElems == nullptr) {
		$set(this, m_CdataElems, $new($HashMap));
	}
	$var($HashMap, h, $cast($HashMap, $nc(this->m_CdataElems)->get(localName)));
	if (h == nullptr) {
		$assign(h, $new($HashMap));
		$nc(this->m_CdataElems)->put(localName, h);
	}
	$nc(h)->put(uri, uri);
}

bool SerializerBase::documentIsEmpty() {
	return this->m_docIsEmpty && ($nc(this->m_elemContext)->m_currentElemDepth == 0);
}

bool SerializerBase::isCdataSection() {
	$useLocalCurrentObjectStackCache();
	bool b = false;
	if (nullptr != this->m_StringOfCDATASections) {
		if ($nc(this->m_elemContext)->m_elementLocalName == nullptr) {
			$var($String, localName, getLocalName($nc(this->m_elemContext)->m_elementName));
			$set($nc(this->m_elemContext), m_elementLocalName, localName);
		}
		if ($nc(this->m_elemContext)->m_elementURI == nullptr) {
			$set($nc(this->m_elemContext), m_elementURI, getElementURI());
		} else if ($nc($nc(this->m_elemContext)->m_elementURI)->length() == 0) {
			if ($nc(this->m_elemContext)->m_elementName == nullptr) {
				$set($nc(this->m_elemContext), m_elementName, $nc(this->m_elemContext)->m_elementLocalName);
			} else {
				int32_t var$1 = $nc($nc(this->m_elemContext)->m_elementLocalName)->length();
				if (var$1 < $nc($nc(this->m_elemContext)->m_elementName)->length()) {
					$set($nc(this->m_elemContext), m_elementURI, getElementURI());
				}
			}
		}
		$var($HashMap, h, nullptr);
		if (this->m_CdataElems != nullptr) {
			$assign(h, $cast($HashMap, $nc(this->m_CdataElems)->get($nc(this->m_elemContext)->m_elementLocalName)));
		}
		if (h != nullptr) {
			$var($Object, obj, h->get($nc(this->m_elemContext)->m_elementURI));
			if (obj != nullptr) {
				b = true;
			}
		}
	}
	return b;
}

$String* SerializerBase::getElementURI() {
	$useLocalCurrentObjectStackCache();
	$var($String, uri, nullptr);
	$var($String, prefix, getPrefixPart($nc(this->m_elemContext)->m_elementName));
	if (prefix == nullptr) {
		$assign(uri, $nc(this->m_prefixMap)->lookupNamespace(""_s));
	} else {
		$assign(uri, $nc(this->m_prefixMap)->lookupNamespace(prefix));
	}
	if (uri == nullptr) {
		$init($SerializerConstants);
		$assign(uri, $SerializerConstants::EMPTYSTRING);
	}
	return uri;
}

$String* SerializerBase::getOutputProperty($String* name) {
	$var($String, val, getOutputPropertyNonDefault(name));
	if (val == nullptr) {
		$assign(val, getOutputPropertyDefault(name));
	}
	return val;
}

$String* SerializerBase::getOutputPropertyNonDefault($String* name) {
	return getProp(name, false);
}

$Object* SerializerBase::asDOM3Serializer() {
	return $of($new($DOM3SerializerImpl, this));
}

$String* SerializerBase::getOutputPropertyDefault($String* name) {
	return getProp(name, true);
}

void SerializerBase::setOutputProperty($String* name, $String* val) {
	setProp(name, val, false);
}

void SerializerBase::setOutputPropertyDefault($String* name, $String* val) {
	setProp(name, val, true);
}

$Set* SerializerBase::getOutputPropDefaultKeys() {
	return $nc(this->m_OutputPropsDefault)->keySet();
}

$Set* SerializerBase::getOutputPropKeys() {
	return $nc(this->m_OutputProps)->keySet();
}

$String* SerializerBase::getProp($String* name, bool defaultVal) {
	if (this->m_OutputProps == nullptr) {
		$set(this, m_OutputProps, $new($HashMap));
		$set(this, m_OutputPropsDefault, $new($HashMap));
	}
	$var($String, val, nullptr);
	if (defaultVal) {
		$assign(val, $cast($String, $nc(this->m_OutputPropsDefault)->get(name)));
	} else {
		$assign(val, $cast($String, $nc(this->m_OutputProps)->get(name)));
	}
	return val;
}

void SerializerBase::setProp($String* name, $String* val, bool defaultVal) {
	$useLocalCurrentObjectStackCache();
	if (this->m_OutputProps == nullptr) {
		$set(this, m_OutputProps, $new($HashMap));
		$set(this, m_OutputPropsDefault, $new($HashMap));
	}
	if (defaultVal) {
		$nc(this->m_OutputPropsDefault)->put(name, val);
	} else {
		$init($OutputKeys);
		if ($nc($OutputKeys::CDATA_SECTION_ELEMENTS)->equals(name) && val != nullptr) {
			initCdataElems(val);
			$var($String, oldVal, $cast($String, $nc(this->m_OutputProps)->get(name)));
			$var($String, newVal, nullptr);
			if (oldVal == nullptr) {
				$assign(newVal, $str({oldVal, $$str(u' '), val}));
			} else {
				$assign(newVal, val);
			}
			$nc(this->m_OutputProps)->put(name, newVal);
		} else {
			$nc(this->m_OutputProps)->put(name, val);
		}
	}
}

char16_t SerializerBase::getFirstCharLocName($String* name) {
	$init(SerializerBase);
	char16_t first = 0;
	int32_t i = $nc(name)->indexOf((int32_t)u'}');
	if (i < 0) {
		first = name->charAt(0);
	} else {
		first = name->charAt(i + 1);
	}
	return first;
}

SerializerBase::SerializerBase() {
}

$Class* SerializerBase::load$($String* name, bool initialize) {
	$loadClass(SerializerBase, name, initialize, &_SerializerBase_ClassInfo_, allocate$SerializerBase);
	return class$;
}

$Class* SerializerBase::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com