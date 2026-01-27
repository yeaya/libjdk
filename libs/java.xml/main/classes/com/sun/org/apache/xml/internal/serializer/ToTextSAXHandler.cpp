#include <com/sun/org/apache/xml/internal/serializer/ToTextSAXHandler.h>

#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerTrace.h>
#include <com/sun/org/apache/xml/internal/serializer/ToSAXHandler.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/util/Properties.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

using $ToSAXHandler = ::com::sun::org::apache::xml::internal::serializer::ToSAXHandler;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $Node = ::org::w3c::dom::Node;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $Locator = ::org::xml::sax::Locator;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$MethodInfo _ToTextSAXHandler_MethodInfo_[] = {
	{"<init>", "(Lorg/xml/sax/ContentHandler;Lorg/xml/sax/ext/LexicalHandler;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ToTextSAXHandler, init$, void, $ContentHandler*, $LexicalHandler*, $String*)},
	{"<init>", "(Lorg/xml/sax/ContentHandler;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ToTextSAXHandler, init$, void, $ContentHandler*, $String*)},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, addAttribute, void, $String*, $String*, $String*, $String*, $String*, bool)},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, addAttribute, void, $String*, $String*)},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, attributeDecl, void, $String*, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"characters", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, characters, void, $String*), "org.xml.sax.SAXException"},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"comment", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, comment, void, $String*), "org.xml.sax.SAXException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, elementDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"endCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, endCDATA, void), "org.xml.sax.SAXException"},
	{"endDTD", "()V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, endDTD, void), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, endElement, void, $String*), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, endPrefixMapping, void, $String*), "org.xml.sax.SAXException"},
	{"externalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, externalEntityDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"getOutputFormat", "()Ljava/util/Properties;", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, getOutputFormat, $Properties*)},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, getOutputStream, $OutputStream*)},
	{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, getWriter, $Writer*)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"indent", "(I)V", nullptr, $PUBLIC, $method(ToTextSAXHandler, indent, void, int32_t), "org.xml.sax.SAXException"},
	{"internalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, internalEntityDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"namespaceAfterStartElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, namespaceAfterStartElement, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"reset", "()Z", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, reset, bool)},
	{"serialize", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, serialize, void, $Node*), "java.io.IOException"},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, setDocumentLocator, void, $Locator*)},
	{"setEscaping", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, setEscaping, bool, bool)},
	{"setIndent", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, setIndent, void, bool)},
	{"setOutputFormat", "(Ljava/util/Properties;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, setOutputFormat, void, $Properties*)},
	{"setOutputStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, setOutputStream, void, $OutputStream*)},
	{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, setWriter, void, $Writer*)},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, skippedEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, startCDATA, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, startElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, startElement, void, $String*), "org.xml.sax.SAXException"},
	{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, startEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;Z)Z", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, startPrefixMapping, bool, $String*, $String*, bool), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextSAXHandler, startPrefixMapping, void, $String*, $String*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _ToTextSAXHandler_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.ToTextSAXHandler",
	"com.sun.org.apache.xml.internal.serializer.ToSAXHandler",
	nullptr,
	nullptr,
	_ToTextSAXHandler_MethodInfo_
};

$Object* allocate$ToTextSAXHandler($Class* clazz) {
	return $of($alloc(ToTextSAXHandler));
}

void ToTextSAXHandler::endElement($String* elemName) {
	if (this->m_tracer != nullptr) {
		$ToSAXHandler::fireEndElem(elemName);
	}
}

void ToTextSAXHandler::endElement($String* arg0, $String* arg1, $String* arg2) {
	if (this->m_tracer != nullptr) {
		$ToSAXHandler::fireEndElem(arg2);
	}
}

void ToTextSAXHandler::init$($ContentHandler* hdlr, $LexicalHandler* lex, $String* encoding) {
	$ToSAXHandler::init$(hdlr, lex, encoding);
}

void ToTextSAXHandler::init$($ContentHandler* handler, $String* encoding) {
	$ToSAXHandler::init$(handler, encoding);
}

void ToTextSAXHandler::comment($chars* ch, int32_t start, int32_t length) {
	if (this->m_tracer != nullptr) {
		$ToSAXHandler::fireCommentEvent(ch, start, length);
	}
}

void ToTextSAXHandler::comment($String* data) {
	int32_t length = $nc(data)->length();
	if (length > $nc(this->m_charsBuff)->length) {
		$set(this, m_charsBuff, $new($chars, length * 2 + 1));
	}
	data->getChars(0, length, this->m_charsBuff, 0);
	comment(this->m_charsBuff, 0, length);
}

$Properties* ToTextSAXHandler::getOutputFormat() {
	return nullptr;
}

$OutputStream* ToTextSAXHandler::getOutputStream() {
	return nullptr;
}

$Writer* ToTextSAXHandler::getWriter() {
	return nullptr;
}

void ToTextSAXHandler::indent(int32_t n) {
}

bool ToTextSAXHandler::reset() {
	return false;
}

void ToTextSAXHandler::serialize($Node* node) {
}

bool ToTextSAXHandler::setEscaping(bool escape) {
	return false;
}

void ToTextSAXHandler::setIndent(bool indent) {
}

void ToTextSAXHandler::setOutputFormat($Properties* format) {
}

void ToTextSAXHandler::setOutputStream($OutputStream* output) {
}

void ToTextSAXHandler::setWriter($Writer* writer) {
}

void ToTextSAXHandler::addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool XSLAttribute) {
}

void ToTextSAXHandler::attributeDecl($String* arg0, $String* arg1, $String* arg2, $String* arg3, $String* arg4) {
}

void ToTextSAXHandler::elementDecl($String* arg0, $String* arg1) {
}

void ToTextSAXHandler::externalEntityDecl($String* arg0, $String* arg1, $String* arg2) {
}

void ToTextSAXHandler::internalEntityDecl($String* arg0, $String* arg1) {
}

void ToTextSAXHandler::endPrefixMapping($String* arg0) {
}

void ToTextSAXHandler::ignorableWhitespace($chars* arg0, int32_t arg1, int32_t arg2) {
}

void ToTextSAXHandler::processingInstruction($String* arg0, $String* arg1) {
	if (this->m_tracer != nullptr) {
		$ToSAXHandler::fireEscapingEvent(arg0, arg1);
	}
}

void ToTextSAXHandler::setDocumentLocator($Locator* arg0) {
	$ToSAXHandler::setDocumentLocator(arg0);
}

void ToTextSAXHandler::skippedEntity($String* arg0) {
}

void ToTextSAXHandler::startElement($String* arg0, $String* arg1, $String* arg2, $Attributes* arg3) {
	flushPending();
	$ToSAXHandler::startElement(arg0, arg1, arg2, arg3);
}

void ToTextSAXHandler::endCDATA() {
}

void ToTextSAXHandler::endDTD() {
}

void ToTextSAXHandler::startCDATA() {
}

void ToTextSAXHandler::startEntity($String* arg0) {
}

void ToTextSAXHandler::startElement($String* elementNamespaceURI, $String* elementLocalName, $String* elementName) {
	$ToSAXHandler::startElement(elementNamespaceURI, elementLocalName, elementName);
}

void ToTextSAXHandler::startElement($String* elementName) {
	$ToSAXHandler::startElement(elementName);
}

void ToTextSAXHandler::endDocument() {
	flushPending();
	$nc(this->m_saxHandler)->endDocument();
	if (this->m_tracer != nullptr) {
		$ToSAXHandler::fireEndDoc();
	}
}

void ToTextSAXHandler::characters($String* characters) {
	int32_t length = $nc(characters)->length();
	if (length > $nc(this->m_charsBuff)->length) {
		$set(this, m_charsBuff, $new($chars, length * 2 + 1));
	}
	characters->getChars(0, length, this->m_charsBuff, 0);
	$nc(this->m_saxHandler)->characters(this->m_charsBuff, 0, length);
}

void ToTextSAXHandler::characters($chars* characters, int32_t offset, int32_t length) {
	$nc(this->m_saxHandler)->characters(characters, offset, length);
	if (this->m_tracer != nullptr) {
		$ToSAXHandler::fireCharEvent(characters, offset, length);
	}
}

void ToTextSAXHandler::addAttribute($String* name, $String* value) {
}

bool ToTextSAXHandler::startPrefixMapping($String* prefix, $String* uri, bool shouldFlush) {
	return false;
}

void ToTextSAXHandler::startPrefixMapping($String* prefix, $String* uri) {
}

void ToTextSAXHandler::namespaceAfterStartElement($String* prefix, $String* uri) {
}

ToTextSAXHandler::ToTextSAXHandler() {
}

$Class* ToTextSAXHandler::load$($String* name, bool initialize) {
	$loadClass(ToTextSAXHandler, name, initialize, &_ToTextSAXHandler_ClassInfo_, allocate$ToTextSAXHandler);
	return class$;
}

$Class* ToTextSAXHandler::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com