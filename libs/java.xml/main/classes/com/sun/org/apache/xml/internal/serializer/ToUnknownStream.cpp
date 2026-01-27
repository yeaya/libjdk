#include <com/sun/org/apache/xml/internal/serializer/ToUnknownStream.h>

#include <com/sun/org/apache/xml/internal/serializer/AttributesImplSerializer.h>
#include <com/sun/org/apache/xml/internal/serializer/DOMSerializer.h>
#include <com/sun/org/apache/xml/internal/serializer/ExtendedContentHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/Method.h>
#include <com/sun/org/apache/xml/internal/serializer/NamespaceMappings.h>
#include <com/sun/org/apache/xml/internal/serializer/OutputPropertiesFactory.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/Serializer.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerFactory.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerTrace.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream.h>
#include <com/sun/org/apache/xml/internal/serializer/ToXMLStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/lang/StringBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Properties.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/Transformer.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef EMPTYSTRING
#undef EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS
#undef HTML

using $DOMSerializer = ::com::sun::org::apache::xml::internal::serializer::DOMSerializer;
using $ExtendedContentHandler = ::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler;
using $Method = ::com::sun::org::apache::xml::internal::serializer::Method;
using $NamespaceMappings = ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings;
using $OutputPropertiesFactory = ::com::sun::org::apache::xml::internal::serializer::OutputPropertiesFactory;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $Serializer = ::com::sun::org::apache::xml::internal::serializer::Serializer;
using $SerializerBase = ::com::sun::org::apache::xml::internal::serializer::SerializerBase;
using $SerializerFactory = ::com::sun::org::apache::xml::internal::serializer::SerializerFactory;
using $SerializerTrace = ::com::sun::org::apache::xml::internal::serializer::SerializerTrace;
using $ToStream = ::com::sun::org::apache::xml::internal::serializer::ToStream;
using $ToXMLStream = ::com::sun::org::apache::xml::internal::serializer::ToXMLStream;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Properties = ::java::util::Properties;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $Transformer = ::javax::xml::transform::Transformer;
using $Node = ::org::w3c::dom::Node;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _ToUnknownStream_FieldInfo_[] = {
	{"m_handler", "Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;", nullptr, $PRIVATE, $field(ToUnknownStream, m_handler)},
	{"EMPTYSTRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ToUnknownStream, EMPTYSTRING)},
	{"m_wrapped_handler_not_initialized", "Z", nullptr, $PRIVATE, $field(ToUnknownStream, m_wrapped_handler_not_initialized)},
	{"m_firstElementPrefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ToUnknownStream, m_firstElementPrefix)},
	{"m_firstElementName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ToUnknownStream, m_firstElementName)},
	{"m_firstElementURI", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ToUnknownStream, m_firstElementURI)},
	{"m_firstElementLocalName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ToUnknownStream, m_firstElementLocalName)},
	{"m_firstTagNotEmitted", "Z", nullptr, $PRIVATE, $field(ToUnknownStream, m_firstTagNotEmitted)},
	{"m_namespaceURI", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(ToUnknownStream, m_namespaceURI)},
	{"m_namespacePrefix", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(ToUnknownStream, m_namespacePrefix)},
	{"m_needToCallStartDocument", "Z", nullptr, $PRIVATE, $field(ToUnknownStream, m_needToCallStartDocument)},
	{}
};

$MethodInfo _ToUnknownStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ToUnknownStream, init$, void)},
	{"<init>", "(Ljavax/xml/transform/ErrorListener;)V", nullptr, $PUBLIC, $method(ToUnknownStream, init$, void, $ErrorListener*)},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, addAttribute, void, $String*, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, addAttribute, void, $String*, $String*, $String*, $String*, $String*, bool), "org.xml.sax.SAXException"},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, addAttribute, void, $String*, $String*)},
	{"addAttributes", "(Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, addAttributes, void, $Attributes*), "org.xml.sax.SAXException"},
	{"addUniqueAttribute", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, addUniqueAttribute, void, $String*, $String*, int32_t), "org.xml.sax.SAXException"},
	{"asContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, asContentHandler, $ContentHandler*), "java.io.IOException"},
	{"asDOM3Serializer", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, asDOM3Serializer, $Object*), "java.io.IOException"},
	{"asDOMSerializer", "()Lcom/sun/org/apache/xml/internal/serializer/DOMSerializer;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, asDOMSerializer, $DOMSerializer*), "java.io.IOException"},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, attributeDecl, void, $String*, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"characters", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, characters, void, $String*), "org.xml.sax.SAXException"},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, close, void)},
	{"comment", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, comment, void, $String*), "org.xml.sax.SAXException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, elementDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"emitFirstTag", "()V", nullptr, $PRIVATE, $method(ToUnknownStream, emitFirstTag, void), "org.xml.sax.SAXException"},
	{"endCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, endCDATA, void), "org.xml.sax.SAXException"},
	{"endDTD", "()V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, endDTD, void), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, endElement, void, $String*), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, endEntity, void, $String*), "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, endPrefixMapping, void, $String*), "org.xml.sax.SAXException"},
	{"entityReference", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, entityReference, void, $String*), "org.xml.sax.SAXException"},
	{"externalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, externalEntityDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"firePseudoElement", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(ToUnknownStream, firePseudoElement, void, $String*)},
	{"flush", "()V", nullptr, $PRIVATE, $method(ToUnknownStream, flush, void)},
	{"flushPending", "()V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, flushPending, void), "org.xml.sax.SAXException"},
	{"getDoctypePublic", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getDoctypePublic, $String*)},
	{"getDoctypeSystem", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getDoctypeSystem, $String*)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getEncoding, $String*)},
	{"getIndent", "()Z", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getIndent, bool)},
	{"getIndentAmount", "()I", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getIndentAmount, int32_t)},
	{"getLocalNameUnknown", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(ToUnknownStream, getLocalNameUnknown, $String*, $String*)},
	{"getMediaType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getMediaType, $String*)},
	{"getNamespaceMappings", "()Lcom/sun/org/apache/xml/internal/serializer/NamespaceMappings;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getNamespaceMappings, $NamespaceMappings*)},
	{"getNamespaceURI", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getNamespaceURI, $String*, $String*, bool)},
	{"getNamespaceURIFromPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getNamespaceURIFromPrefix, $String*, $String*)},
	{"getOmitXMLDeclaration", "()Z", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getOmitXMLDeclaration, bool)},
	{"getOutputFormat", "()Ljava/util/Properties;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getOutputFormat, $Properties*)},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getOutputStream, $OutputStream*)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getPrefix, $String*, $String*)},
	{"getPrefixPartUnknown", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(ToUnknownStream, getPrefixPartUnknown, $String*, $String*)},
	{"getStandalone", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getStandalone, $String*)},
	{"getTransformer", "()Ljavax/xml/transform/Transformer;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getTransformer, $Transformer*)},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getVersion, $String*)},
	{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, getWriter, $Writer*)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"initStreamOutput", "()V", nullptr, $PRIVATE, $method(ToUnknownStream, initStreamOutput, void), "org.xml.sax.SAXException"},
	{"internalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, internalEntityDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"isFirstElemHTML", "()Z", nullptr, $PRIVATE, $method(ToUnknownStream, isFirstElemHTML, bool)},
	{"namespaceAfterStartElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, namespaceAfterStartElement, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"reset", "()Z", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, reset, bool)},
	{"serialize", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, serialize, void, $Node*), "java.io.IOException"},
	{"setCdataSectionElements", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC, $virtualMethod(ToUnknownStream, setCdataSectionElements, void, $List*)},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setContentHandler, void, $ContentHandler*)},
	{"setDoctype", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setDoctype, void, $String*, $String*)},
	{"setDoctypePublic", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setDoctypePublic, void, $String*)},
	{"setDoctypeSystem", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setDoctypeSystem, void, $String*)},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setDocumentLocator, void, $Locator*)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setEncoding, void, $String*)},
	{"setEscaping", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setEscaping, bool, bool), "org.xml.sax.SAXException"},
	{"setIndent", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setIndent, void, bool)},
	{"setIndentAmount", "(I)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setIndentAmount, void, int32_t)},
	{"setIsStandalone", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setIsStandalone, void, bool)},
	{"setMediaType", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setMediaType, void, $String*)},
	{"setOmitXMLDeclaration", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setOmitXMLDeclaration, void, bool)},
	{"setOutputFormat", "(Ljava/util/Properties;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setOutputFormat, void, $Properties*)},
	{"setOutputStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setOutputStream, void, $OutputStream*)},
	{"setSourceLocator", "(Ljavax/xml/transform/SourceLocator;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setSourceLocator, void, $SourceLocator*)},
	{"setStandalone", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setStandalone, void, $String*)},
	{"setTransformer", "(Ljavax/xml/transform/Transformer;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setTransformer, void, $Transformer*)},
	{"setVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setVersion, void, $String*)},
	{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, setWriter, void, $Writer*)},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, skippedEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, startCDATA, void), "org.xml.sax.SAXException"},
	{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, startDTD, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, startElement, void, $String*), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, startElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, startEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, startPrefixMapping, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;Z)Z", nullptr, $PUBLIC, $virtualMethod(ToUnknownStream, startPrefixMapping, bool, $String*, $String*, bool), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _ToUnknownStream_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.ToUnknownStream",
	"com.sun.org.apache.xml.internal.serializer.SerializerBase",
	nullptr,
	_ToUnknownStream_FieldInfo_,
	_ToUnknownStream_MethodInfo_
};

$Object* allocate$ToUnknownStream($Class* clazz) {
	return $of($alloc(ToUnknownStream));
}

$String* ToUnknownStream::EMPTYSTRING = nullptr;

void ToUnknownStream::init$() {
	ToUnknownStream::init$(nullptr);
}

void ToUnknownStream::init$($ErrorListener* l) {
	$SerializerBase::init$();
	this->m_wrapped_handler_not_initialized = false;
	$set(this, m_firstElementLocalName, nullptr);
	this->m_firstTagNotEmitted = true;
	$set(this, m_namespaceURI, nullptr);
	$set(this, m_namespacePrefix, nullptr);
	this->m_needToCallStartDocument = false;
	$set(this, m_handler, $new($ToXMLStream, l));
}

$ContentHandler* ToUnknownStream::asContentHandler() {
	return this;
}

void ToUnknownStream::close() {
	$nc(this->m_handler)->close();
}

$Properties* ToUnknownStream::getOutputFormat() {
	return $nc(this->m_handler)->getOutputFormat();
}

$OutputStream* ToUnknownStream::getOutputStream() {
	return $nc(this->m_handler)->getOutputStream();
}

$Writer* ToUnknownStream::getWriter() {
	return $nc(this->m_handler)->getWriter();
}

bool ToUnknownStream::reset() {
	return $nc(this->m_handler)->reset();
}

void ToUnknownStream::serialize($Node* node) {
	if (this->m_firstTagNotEmitted) {
		flush();
	}
	$nc(this->m_handler)->serialize(node);
}

bool ToUnknownStream::setEscaping(bool escape) {
	return $nc(this->m_handler)->setEscaping(escape);
}

void ToUnknownStream::setOutputFormat($Properties* format) {
	$nc(this->m_handler)->setOutputFormat(format);
}

void ToUnknownStream::setOutputStream($OutputStream* output) {
	$nc(this->m_handler)->setOutputStream(output);
}

void ToUnknownStream::setWriter($Writer* writer) {
	$nc(this->m_handler)->setWriter(writer);
}

void ToUnknownStream::addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value) {
	addAttribute(uri, localName, rawName, type, value, false);
}

void ToUnknownStream::addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool XSLAttribute) {
	if (this->m_firstTagNotEmitted) {
		flush();
	}
	$nc(this->m_handler)->addAttribute(uri, localName, rawName, type, value, XSLAttribute);
}

void ToUnknownStream::addAttribute($String* rawName, $String* value) {
	if (this->m_firstTagNotEmitted) {
		flush();
	}
	$nc(this->m_handler)->addAttribute(rawName, value);
}

void ToUnknownStream::addUniqueAttribute($String* rawName, $String* value, int32_t flags) {
	if (this->m_firstTagNotEmitted) {
		flush();
	}
	$nc(this->m_handler)->addUniqueAttribute(rawName, value, flags);
}

void ToUnknownStream::characters($String* chars) {
	int32_t len = (chars == nullptr) ? 0 : $nc(chars)->length();
	if (len > $nc(this->m_charsBuff)->length) {
		$set(this, m_charsBuff, $new($chars, len * 2 + 1));
	}
	if (len > 0) {
		chars->getChars(0, len, this->m_charsBuff, 0);
	}
	this->characters(this->m_charsBuff, 0, len);
}

void ToUnknownStream::endElement($String* elementName) {
	if (this->m_firstTagNotEmitted) {
		flush();
	}
	$nc(this->m_handler)->endElement(elementName);
}

void ToUnknownStream::startPrefixMapping($String* prefix, $String* uri) {
	this->startPrefixMapping(prefix, uri, true);
}

void ToUnknownStream::namespaceAfterStartElement($String* prefix, $String* uri) {
	if (this->m_firstTagNotEmitted && this->m_firstElementURI == nullptr && this->m_firstElementName != nullptr) {
		$var($String, prefix1, getPrefixPart(this->m_firstElementName));
		if (prefix1 == nullptr && $nc(ToUnknownStream::EMPTYSTRING)->equals(prefix)) {
			$set(this, m_firstElementURI, uri);
		}
	}
	startPrefixMapping(prefix, uri, false);
}

bool ToUnknownStream::startPrefixMapping($String* prefix, $String* uri, bool shouldFlush) {
	bool pushed = false;
	if (this->m_firstTagNotEmitted) {
		if (this->m_firstElementName != nullptr && shouldFlush) {
			flush();
			pushed = $nc(this->m_handler)->startPrefixMapping(prefix, uri, shouldFlush);
		} else {
			if (this->m_namespacePrefix == nullptr) {
				$set(this, m_namespacePrefix, $new($ArrayList));
				$set(this, m_namespaceURI, $new($ArrayList));
			}
			$nc(this->m_namespacePrefix)->add(prefix);
			$nc(this->m_namespaceURI)->add(uri);
			if (this->m_firstElementURI == nullptr) {
				if ($nc(prefix)->equals(this->m_firstElementPrefix)) {
					$set(this, m_firstElementURI, uri);
				}
			}
		}
	} else {
		pushed = $nc(this->m_handler)->startPrefixMapping(prefix, uri, shouldFlush);
	}
	return pushed;
}

void ToUnknownStream::setVersion($String* version) {
	$nc(this->m_handler)->setVersion(version);
}

void ToUnknownStream::startDocument() {
	this->m_needToCallStartDocument = true;
}

void ToUnknownStream::startElement($String* qName) {
	this->startElement(nullptr, nullptr, qName, nullptr);
}

void ToUnknownStream::startElement($String* namespaceURI, $String* localName, $String* qName) {
	this->startElement(namespaceURI, localName, qName, nullptr);
}

void ToUnknownStream::startElement($String* namespaceURI, $String* localName, $String* elementName, $Attributes* atts) {
	if (this->m_needToCallSetDocumentInfo) {
		$SerializerBase::setDocumentInfo();
		this->m_needToCallSetDocumentInfo = false;
	}
	if (this->m_firstTagNotEmitted) {
		if (this->m_firstElementName != nullptr) {
			flush();
			$nc(this->m_handler)->startElement(namespaceURI, localName, elementName, atts);
		} else {
			this->m_wrapped_handler_not_initialized = true;
			$set(this, m_firstElementName, elementName);
			$set(this, m_firstElementPrefix, getPrefixPartUnknown(elementName));
			$set(this, m_firstElementURI, namespaceURI);
			$set(this, m_firstElementLocalName, localName);
			if (this->m_tracer != nullptr) {
				firePseudoElement(elementName);
			}
			if (atts != nullptr) {
				$SerializerBase::addAttributes(atts);
			}
			if (atts != nullptr) {
				flush();
			}
		}
	} else {
		$nc(this->m_handler)->startElement(namespaceURI, localName, elementName, atts);
	}
}

void ToUnknownStream::comment($String* comment) {
	if (this->m_firstTagNotEmitted && this->m_firstElementName != nullptr) {
		emitFirstTag();
	} else if (this->m_needToCallStartDocument) {
		$nc(this->m_handler)->startDocument();
		this->m_needToCallStartDocument = false;
	}
	$nc(this->m_handler)->comment(comment);
}

$String* ToUnknownStream::getDoctypePublic() {
	return $nc(this->m_handler)->getDoctypePublic();
}

$String* ToUnknownStream::getDoctypeSystem() {
	return $nc(this->m_handler)->getDoctypeSystem();
}

$String* ToUnknownStream::getEncoding() {
	return $nc(this->m_handler)->getEncoding();
}

bool ToUnknownStream::getIndent() {
	return $nc(this->m_handler)->getIndent();
}

int32_t ToUnknownStream::getIndentAmount() {
	return $nc(this->m_handler)->getIndentAmount();
}

$String* ToUnknownStream::getMediaType() {
	return $nc(this->m_handler)->getMediaType();
}

bool ToUnknownStream::getOmitXMLDeclaration() {
	return $nc(this->m_handler)->getOmitXMLDeclaration();
}

$String* ToUnknownStream::getStandalone() {
	return $nc(this->m_handler)->getStandalone();
}

$String* ToUnknownStream::getVersion() {
	return $nc(this->m_handler)->getVersion();
}

void ToUnknownStream::setDoctype($String* system, $String* pub) {
	$nc(this->m_handler)->setDoctypePublic(pub);
	$nc(this->m_handler)->setDoctypeSystem(system);
}

void ToUnknownStream::setDoctypePublic($String* doctype) {
	$nc(this->m_handler)->setDoctypePublic(doctype);
}

void ToUnknownStream::setDoctypeSystem($String* doctype) {
	$nc(this->m_handler)->setDoctypeSystem(doctype);
}

void ToUnknownStream::setEncoding($String* encoding) {
	$nc(this->m_handler)->setEncoding(encoding);
}

void ToUnknownStream::setIndent(bool indent) {
	$nc(this->m_handler)->setIndent(indent);
}

void ToUnknownStream::setIndentAmount(int32_t value) {
	$nc(this->m_handler)->setIndentAmount(value);
}

void ToUnknownStream::setMediaType($String* mediaType) {
	$nc(this->m_handler)->setMediaType(mediaType);
}

void ToUnknownStream::setOmitXMLDeclaration(bool b) {
	$nc(this->m_handler)->setOmitXMLDeclaration(b);
}

void ToUnknownStream::setStandalone($String* standalone) {
	$nc(this->m_handler)->setStandalone(standalone);
}

void ToUnknownStream::setIsStandalone(bool isStandalone) {
	$SerializerBase::setIsStandalone(isStandalone);
	$nc(this->m_handler)->setIsStandalone(isStandalone);
}

void ToUnknownStream::attributeDecl($String* arg0, $String* arg1, $String* arg2, $String* arg3, $String* arg4) {
	$nc(this->m_handler)->attributeDecl(arg0, arg1, arg2, arg3, arg4);
}

void ToUnknownStream::elementDecl($String* arg0, $String* arg1) {
	if (this->m_firstTagNotEmitted) {
		emitFirstTag();
	}
	$nc(this->m_handler)->elementDecl(arg0, arg1);
}

void ToUnknownStream::externalEntityDecl($String* name, $String* publicId, $String* systemId) {
	if (this->m_firstTagNotEmitted) {
		flush();
	}
	$nc(this->m_handler)->externalEntityDecl(name, publicId, systemId);
}

void ToUnknownStream::internalEntityDecl($String* arg0, $String* arg1) {
	if (this->m_firstTagNotEmitted) {
		flush();
	}
	$nc(this->m_handler)->internalEntityDecl(arg0, arg1);
}

void ToUnknownStream::characters($chars* characters, int32_t offset, int32_t length) {
	if (this->m_firstTagNotEmitted) {
		flush();
	}
	$nc(this->m_handler)->characters(characters, offset, length);
}

void ToUnknownStream::endDocument() {
	if (this->m_firstTagNotEmitted) {
		flush();
	}
	$nc(this->m_handler)->endDocument();
}

void ToUnknownStream::endElement($String* namespaceURI$renamed, $String* localName$renamed, $String* qName) {
	$useLocalCurrentObjectStackCache();
	$var($String, localName, localName$renamed);
	$var($String, namespaceURI, namespaceURI$renamed);
	if (this->m_firstTagNotEmitted) {
		flush();
		if (namespaceURI == nullptr && this->m_firstElementURI != nullptr) {
			$assign(namespaceURI, this->m_firstElementURI);
		}
		if (localName == nullptr && this->m_firstElementLocalName != nullptr) {
			$assign(localName, this->m_firstElementLocalName);
		}
	}
	$nc(this->m_handler)->endElement(namespaceURI, localName, qName);
}

void ToUnknownStream::endPrefixMapping($String* prefix) {
	$nc(this->m_handler)->endPrefixMapping(prefix);
}

void ToUnknownStream::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	if (this->m_firstTagNotEmitted) {
		flush();
	}
	$nc(this->m_handler)->ignorableWhitespace(ch, start, length);
}

void ToUnknownStream::processingInstruction($String* target, $String* data) {
	if (this->m_firstTagNotEmitted) {
		flush();
	}
	$nc(this->m_handler)->processingInstruction(target, data);
}

void ToUnknownStream::setDocumentLocator($Locator* locator) {
	$SerializerBase::setDocumentLocator(locator);
	$nc(this->m_handler)->setDocumentLocator(locator);
}

void ToUnknownStream::skippedEntity($String* name) {
	$nc(this->m_handler)->skippedEntity(name);
}

void ToUnknownStream::comment($chars* ch, int32_t start, int32_t length) {
	if (this->m_firstTagNotEmitted) {
		flush();
	}
	$nc(this->m_handler)->comment(ch, start, length);
}

void ToUnknownStream::endCDATA() {
	$nc(this->m_handler)->endCDATA();
}

void ToUnknownStream::endDTD() {
	$nc(this->m_handler)->endDTD();
}

void ToUnknownStream::endEntity($String* name) {
	if (this->m_firstTagNotEmitted) {
		emitFirstTag();
	}
	$nc(this->m_handler)->endEntity(name);
}

void ToUnknownStream::startCDATA() {
	$nc(this->m_handler)->startCDATA();
}

void ToUnknownStream::startDTD($String* name, $String* publicId, $String* systemId) {
	$nc(this->m_handler)->startDTD(name, publicId, systemId);
}

void ToUnknownStream::startEntity($String* name) {
	$nc(this->m_handler)->startEntity(name);
}

void ToUnknownStream::initStreamOutput() {
	$useLocalCurrentObjectStackCache();
	bool firstElementIsHTML = isFirstElemHTML();
	if (firstElementIsHTML) {
		$var($SerializationHandler, oldHandler, this->m_handler);
		$init($Method);
		$var($Properties, htmlProperties, $OutputPropertiesFactory::getDefaultMethodProperties($Method::HTML));
		$var($Serializer, serializer, $SerializerFactory::getSerializer(htmlProperties));
		$set(this, m_handler, $cast($SerializationHandler, serializer));
		$var($Writer, writer, $nc(oldHandler)->getWriter());
		if (nullptr != writer) {
			$nc(this->m_handler)->setWriter(writer);
		} else {
			$var($OutputStream, os, oldHandler->getOutputStream());
			if (nullptr != os) {
				$nc(this->m_handler)->setOutputStream(os);
			}
		}
		$nc(this->m_handler)->setVersion($(oldHandler->getVersion()));
		$nc(this->m_handler)->setDoctypeSystem($(oldHandler->getDoctypeSystem()));
		$nc(this->m_handler)->setDoctypePublic($(oldHandler->getDoctypePublic()));
		$nc(this->m_handler)->setMediaType($(oldHandler->getMediaType()));
		$nc(this->m_handler)->setTransformer($(oldHandler->getTransformer()));
	}
	if (this->m_needToCallStartDocument) {
		$nc(this->m_handler)->startDocument();
		this->m_needToCallStartDocument = false;
	}
	this->m_wrapped_handler_not_initialized = false;
}

void ToUnknownStream::emitFirstTag() {
	$useLocalCurrentObjectStackCache();
	if (this->m_firstElementName != nullptr) {
		if (this->m_wrapped_handler_not_initialized) {
			initStreamOutput();
			this->m_wrapped_handler_not_initialized = false;
		}
		$nc(this->m_handler)->startElement(this->m_firstElementURI, nullptr, this->m_firstElementName, this->m_attributes);
		$set(this, m_attributes, nullptr);
		if (this->m_namespacePrefix != nullptr) {
			int32_t n = $nc(this->m_namespacePrefix)->size();
			for (int32_t i = 0; i < n; ++i) {
				$var($String, prefix, $cast($String, $nc(this->m_namespacePrefix)->get(i)));
				$var($String, uri, $cast($String, $nc(this->m_namespaceURI)->get(i)));
				$nc(this->m_handler)->startPrefixMapping(prefix, uri, false);
			}
			$set(this, m_namespacePrefix, nullptr);
			$set(this, m_namespaceURI, nullptr);
		}
		this->m_firstTagNotEmitted = false;
	}
}

$String* ToUnknownStream::getLocalNameUnknown($String* value$renamed) {
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

$String* ToUnknownStream::getPrefixPartUnknown($String* qname) {
	int32_t index = $nc(qname)->indexOf((int32_t)u':');
	return (index > 0) ? qname->substring(0, index) : ToUnknownStream::EMPTYSTRING;
}

bool ToUnknownStream::isFirstElemHTML() {
	$useLocalCurrentObjectStackCache();
	bool isHTML = false;
	isHTML = $nc($(getLocalNameUnknown(this->m_firstElementName)))->equalsIgnoreCase("html"_s);
	if (isHTML && this->m_firstElementURI != nullptr && !$nc(ToUnknownStream::EMPTYSTRING)->equals(this->m_firstElementURI)) {
		isHTML = false;
	}
	if (isHTML && this->m_namespacePrefix != nullptr) {
		int32_t max = $nc(this->m_namespacePrefix)->size();
		for (int32_t i = 0; i < max; ++i) {
			$var($String, prefix, $cast($String, $nc(this->m_namespacePrefix)->get(i)));
			$var($String, uri, $cast($String, $nc(this->m_namespaceURI)->get(i)));
			bool var$0 = this->m_firstElementPrefix != nullptr && $nc(this->m_firstElementPrefix)->equals(prefix);
			if (var$0 && !$nc(ToUnknownStream::EMPTYSTRING)->equals(uri)) {
				isHTML = false;
				break;
			}
		}
	}
	return isHTML;
}

$DOMSerializer* ToUnknownStream::asDOMSerializer() {
	return $nc(this->m_handler)->asDOMSerializer();
}

void ToUnknownStream::setCdataSectionElements($List* URI_and_localNames) {
	$nc(this->m_handler)->setCdataSectionElements(URI_and_localNames);
}

void ToUnknownStream::addAttributes($Attributes* atts) {
	$nc(this->m_handler)->addAttributes(atts);
}

$NamespaceMappings* ToUnknownStream::getNamespaceMappings() {
	$var($NamespaceMappings, mappings, nullptr);
	if (this->m_handler != nullptr) {
		$assign(mappings, $nc(this->m_handler)->getNamespaceMappings());
	}
	return mappings;
}

void ToUnknownStream::flushPending() {
	flush();
	$nc(this->m_handler)->flushPending();
}

void ToUnknownStream::flush() {
	try {
		if (this->m_firstTagNotEmitted) {
			emitFirstTag();
		}
		if (this->m_needToCallStartDocument) {
			$nc(this->m_handler)->startDocument();
			this->m_needToCallStartDocument = false;
		}
	} catch ($SAXException& e) {
		$throwNew($RuntimeException, $(e->toString()));
	}
}

$String* ToUnknownStream::getPrefix($String* namespaceURI) {
	return $nc(this->m_handler)->getPrefix(namespaceURI);
}

void ToUnknownStream::entityReference($String* entityName) {
	$nc(this->m_handler)->entityReference(entityName);
}

$String* ToUnknownStream::getNamespaceURI($String* qname, bool isElement) {
	return $nc(this->m_handler)->getNamespaceURI(qname, isElement);
}

$String* ToUnknownStream::getNamespaceURIFromPrefix($String* prefix) {
	return $nc(this->m_handler)->getNamespaceURIFromPrefix(prefix);
}

void ToUnknownStream::setTransformer($Transformer* t) {
	$nc(this->m_handler)->setTransformer(t);
	if (($instanceOf($SerializerTrace, t)) && ($nc(($cast($SerializerTrace, t)))->hasTraceListeners())) {
		$set(this, m_tracer, $cast($SerializerTrace, t));
	} else {
		$set(this, m_tracer, nullptr);
	}
}

$Transformer* ToUnknownStream::getTransformer() {
	return $nc(this->m_handler)->getTransformer();
}

void ToUnknownStream::setContentHandler($ContentHandler* ch) {
	$nc(this->m_handler)->setContentHandler(ch);
}

void ToUnknownStream::setSourceLocator($SourceLocator* locator) {
	$nc(this->m_handler)->setSourceLocator(locator);
}

void ToUnknownStream::firePseudoElement($String* elementName) {
	$useLocalCurrentObjectStackCache();
	if (this->m_tracer != nullptr) {
		$var($StringBuffer, sb, $new($StringBuffer));
		sb->append(u'<');
		sb->append(elementName);
		$var($chars, ch, $nc($(sb->toString()))->toCharArray());
		$nc(this->m_tracer)->fireGenerateEvent($SerializerTrace::EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS, ch, 0, ch->length);
	}
}

$Object* ToUnknownStream::asDOM3Serializer() {
	return $of($nc(this->m_handler)->asDOM3Serializer());
}

ToUnknownStream::ToUnknownStream() {
}

void clinit$ToUnknownStream($Class* class$) {
	$assignStatic(ToUnknownStream::EMPTYSTRING, ""_s);
}

$Class* ToUnknownStream::load$($String* name, bool initialize) {
	$loadClass(ToUnknownStream, name, initialize, &_ToUnknownStream_ClassInfo_, clinit$ToUnknownStream, allocate$ToUnknownStream);
	return class$;
}

$Class* ToUnknownStream::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com