#include <com/sun/org/apache/xml/internal/serializer/ToXMLSAXHandler.h>

#include <com/sun/org/apache/xml/internal/serializer/AttributesImplSerializer.h>
#include <com/sun/org/apache/xml/internal/serializer/ElemContext.h>
#include <com/sun/org/apache/xml/internal/serializer/NamespaceMappings.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerConstants.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerTrace.h>
#include <com/sun/org/apache/xml/internal/serializer/ToSAXHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/TransformStateSetter.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/util/Properties.h>
#include <javax/xml/transform/Result.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef EMPTYSTRING
#undef PI_DISABLE_OUTPUT_ESCAPING
#undef PI_ENABLE_OUTPUT_ESCAPING
#undef XMLNS_URI

using $AttributesImplSerializer = ::com::sun::org::apache::xml::internal::serializer::AttributesImplSerializer;
using $ElemContext = ::com::sun::org::apache::xml::internal::serializer::ElemContext;
using $NamespaceMappings = ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings;
using $SerializerConstants = ::com::sun::org::apache::xml::internal::serializer::SerializerConstants;
using $ToSAXHandler = ::com::sun::org::apache::xml::internal::serializer::ToSAXHandler;
using $TransformStateSetter = ::com::sun::org::apache::xml::internal::serializer::TransformStateSetter;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $Result = ::javax::xml::transform::Result;
using $Node = ::org::w3c::dom::Node;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _ToXMLSAXHandler_FieldInfo_[] = {
	{"m_escapeSetting", "Z", nullptr, $PROTECTED, $field(ToXMLSAXHandler, m_escapeSetting)},
	{}
};

$MethodInfo _ToXMLSAXHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ToXMLSAXHandler, init$, void)},
	{"<init>", "(Lorg/xml/sax/ContentHandler;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ToXMLSAXHandler, init$, void, $ContentHandler*, $String*)},
	{"<init>", "(Lorg/xml/sax/ContentHandler;Lorg/xml/sax/ext/LexicalHandler;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ToXMLSAXHandler, init$, void, $ContentHandler*, $LexicalHandler*, $String*)},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, addAttribute, void, $String*, $String*, $String*, $String*, $String*, bool), "org.xml.sax.SAXException"},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, attributeDecl, void, $String*, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"characters", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, characters, void, $String*), "org.xml.sax.SAXException"},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"closeCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, closeCDATA, void), "org.xml.sax.SAXException"},
	{"closeStartTag", "()V", nullptr, $PROTECTED, $virtualMethod(ToXMLSAXHandler, closeStartTag, void), "org.xml.sax.SAXException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, elementDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"endCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, endCDATA, void), "org.xml.sax.SAXException"},
	{"endDTD", "()V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, endDTD, void), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, endElement, void, $String*), "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, endPrefixMapping, void, $String*), "org.xml.sax.SAXException"},
	{"ensurePrefixIsDeclared", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(ToXMLSAXHandler, ensurePrefixIsDeclared, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"externalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, externalEntityDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"getOutputFormat", "()Ljava/util/Properties;", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, getOutputFormat, $Properties*)},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, getOutputStream, $OutputStream*)},
	{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, getWriter, $Writer*)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"indent", "(I)V", nullptr, $PUBLIC, $method(ToXMLSAXHandler, indent, void, int32_t), "org.xml.sax.SAXException"},
	{"internalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, internalEntityDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"namespaceAfterStartElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, namespaceAfterStartElement, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"popNamespace", "(Ljava/lang/String;)Z", nullptr, $PROTECTED, $method(ToXMLSAXHandler, popNamespace, bool, $String*)},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"reset", "()Z", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, reset, bool)},
	{"resetToXMLSAXHandler", "()V", nullptr, $PRIVATE, $method(ToXMLSAXHandler, resetToXMLSAXHandler, void)},
	{"serialize", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, serialize, void, $Node*), "java.io.IOException"},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, setDocumentLocator, void, $Locator*)},
	{"setEscaping", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, setEscaping, bool, bool), "org.xml.sax.SAXException"},
	{"setOutputFormat", "(Ljava/util/Properties;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, setOutputFormat, void, $Properties*)},
	{"setOutputStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, setOutputStream, void, $OutputStream*)},
	{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, setWriter, void, $Writer*)},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, skippedEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, startCDATA, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, startElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, startElement, void, $String*), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, startEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, startPrefixMapping, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;Z)Z", nullptr, $PUBLIC, $virtualMethod(ToXMLSAXHandler, startPrefixMapping, bool, $String*, $String*, bool), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _ToXMLSAXHandler_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.ToXMLSAXHandler",
	"com.sun.org.apache.xml.internal.serializer.ToSAXHandler",
	nullptr,
	_ToXMLSAXHandler_FieldInfo_,
	_ToXMLSAXHandler_MethodInfo_
};

$Object* allocate$ToXMLSAXHandler($Class* clazz) {
	return $of($alloc(ToXMLSAXHandler));
}

void ToXMLSAXHandler::init$() {
	$ToSAXHandler::init$();
	this->m_escapeSetting = true;
	$set(this, m_prefixMap, $new($NamespaceMappings));
	initCDATA();
}

$Properties* ToXMLSAXHandler::getOutputFormat() {
	return nullptr;
}

$OutputStream* ToXMLSAXHandler::getOutputStream() {
	return nullptr;
}

$Writer* ToXMLSAXHandler::getWriter() {
	return nullptr;
}

void ToXMLSAXHandler::indent(int32_t n) {
}

void ToXMLSAXHandler::serialize($Node* node) {
}

bool ToXMLSAXHandler::setEscaping(bool escape) {
	bool oldEscapeSetting = this->m_escapeSetting;
	this->m_escapeSetting = escape;
	if (escape) {
		$init($Result);
		processingInstruction($Result::PI_ENABLE_OUTPUT_ESCAPING, ""_s);
	} else {
		$init($Result);
		processingInstruction($Result::PI_DISABLE_OUTPUT_ESCAPING, ""_s);
	}
	return oldEscapeSetting;
}

void ToXMLSAXHandler::setOutputFormat($Properties* format) {
}

void ToXMLSAXHandler::setOutputStream($OutputStream* output) {
}

void ToXMLSAXHandler::setWriter($Writer* writer) {
}

void ToXMLSAXHandler::attributeDecl($String* arg0, $String* arg1, $String* arg2, $String* arg3, $String* arg4) {
}

void ToXMLSAXHandler::elementDecl($String* arg0, $String* arg1) {
}

void ToXMLSAXHandler::externalEntityDecl($String* arg0, $String* arg1, $String* arg2) {
}

void ToXMLSAXHandler::internalEntityDecl($String* arg0, $String* arg1) {
}

void ToXMLSAXHandler::endDocument() {
	flushPending();
	$nc(this->m_saxHandler)->endDocument();
	if (this->m_tracer != nullptr) {
		$ToSAXHandler::fireEndDoc();
	}
}

void ToXMLSAXHandler::closeStartTag() {
	$useLocalCurrentObjectStackCache();
	$nc(this->m_elemContext)->m_startTagOpen = false;
	$var($String, localName, getLocalName($nc(this->m_elemContext)->m_elementName));
	$var($String, uri, getNamespaceURI($nc(this->m_elemContext)->m_elementName, true));
	if (this->m_needToCallStartDocument) {
		startDocumentInternal();
	}
	$nc(this->m_saxHandler)->startElement(uri, localName, $nc(this->m_elemContext)->m_elementName, this->m_attributes);
	$nc(this->m_attributes)->clear();
	if (this->m_state != nullptr) {
		$nc(this->m_state)->setCurrentNode(nullptr);
	}
}

void ToXMLSAXHandler::closeCDATA() {
	if (this->m_lexHandler != nullptr && this->m_cdataTagOpen) {
		$nc(this->m_lexHandler)->endCDATA();
	}
	this->m_cdataTagOpen = false;
}

void ToXMLSAXHandler::endElement($String* namespaceURI$renamed, $String* localName$renamed, $String* qName) {
	$useLocalCurrentObjectStackCache();
	$var($String, localName, localName$renamed);
	$var($String, namespaceURI, namespaceURI$renamed);
	flushPending();
	if (namespaceURI == nullptr) {
		if ($nc(this->m_elemContext)->m_elementURI != nullptr) {
			$assign(namespaceURI, $nc(this->m_elemContext)->m_elementURI);
		} else {
			$assign(namespaceURI, getNamespaceURI(qName, true));
		}
	}
	if (localName == nullptr) {
		if ($nc(this->m_elemContext)->m_elementLocalName != nullptr) {
			$assign(localName, $nc(this->m_elemContext)->m_elementLocalName);
		} else {
			$assign(localName, getLocalName(qName));
		}
	}
	$nc(this->m_saxHandler)->endElement(namespaceURI, localName, qName);
	if (this->m_tracer != nullptr) {
		$ToSAXHandler::fireEndElem(qName);
	}
	$nc(this->m_prefixMap)->popNamespaces($nc(this->m_elemContext)->m_currentElemDepth, this->m_saxHandler);
	$set(this, m_elemContext, $nc(this->m_elemContext)->m_prev);
}

void ToXMLSAXHandler::endPrefixMapping($String* prefix) {
	return;
}

void ToXMLSAXHandler::ignorableWhitespace($chars* arg0, int32_t arg1, int32_t arg2) {
	$nc(this->m_saxHandler)->ignorableWhitespace(arg0, arg1, arg2);
}

void ToXMLSAXHandler::setDocumentLocator($Locator* arg0) {
	$ToSAXHandler::setDocumentLocator(arg0);
	$nc(this->m_saxHandler)->setDocumentLocator(arg0);
}

void ToXMLSAXHandler::skippedEntity($String* arg0) {
	$nc(this->m_saxHandler)->skippedEntity(arg0);
}

void ToXMLSAXHandler::startPrefixMapping($String* prefix, $String* uri) {
	startPrefixMapping(prefix, uri, true);
}

bool ToXMLSAXHandler::startPrefixMapping($String* prefix, $String* uri, bool shouldFlush) {
	bool pushed = false;
	int32_t pushDepth = 0;
	if (shouldFlush) {
		flushPending();
		pushDepth = $nc(this->m_elemContext)->m_currentElemDepth + 1;
	} else {
		pushDepth = $nc(this->m_elemContext)->m_currentElemDepth;
	}
	pushed = $nc(this->m_prefixMap)->pushNamespace(prefix, uri, pushDepth);
	if (pushed) {
		$nc(this->m_saxHandler)->startPrefixMapping(prefix, uri);
		if (getShouldOutputNSAttr()) {
			$var($String, name, nullptr);
			$init($SerializerConstants);
			if ($nc($SerializerConstants::EMPTYSTRING)->equals(prefix)) {
				$assign(name, "xmlns"_s);
				addAttributeAlways($SerializerConstants::XMLNS_URI, name, name, "CDATA"_s, uri, false);
			} else {
				if (!$nc($SerializerConstants::EMPTYSTRING)->equals(uri)) {
					$assign(name, $str({"xmlns:"_s, prefix}));
					addAttributeAlways($SerializerConstants::XMLNS_URI, prefix, name, "CDATA"_s, uri, false);
				}
			}
		}
	}
	return pushed;
}

void ToXMLSAXHandler::comment($chars* arg0, int32_t arg1, int32_t arg2) {
	flushPending();
	if (this->m_lexHandler != nullptr) {
		$nc(this->m_lexHandler)->comment(arg0, arg1, arg2);
	}
	if (this->m_tracer != nullptr) {
		$ToSAXHandler::fireCommentEvent(arg0, arg1, arg2);
	}
}

void ToXMLSAXHandler::endCDATA() {
}

void ToXMLSAXHandler::endDTD() {
	if (this->m_lexHandler != nullptr) {
		$nc(this->m_lexHandler)->endDTD();
	}
}

void ToXMLSAXHandler::startEntity($String* arg0) {
	if (this->m_lexHandler != nullptr) {
		$nc(this->m_lexHandler)->startEntity(arg0);
	}
}

void ToXMLSAXHandler::characters($String* chars) {
	int32_t length = $nc(chars)->length();
	if (length > $nc(this->m_charsBuff)->length) {
		$set(this, m_charsBuff, $new($chars, length * 2 + 1));
	}
	chars->getChars(0, length, this->m_charsBuff, 0);
	this->characters(this->m_charsBuff, 0, length);
}

void ToXMLSAXHandler::init$($ContentHandler* handler, $String* encoding) {
	$ToSAXHandler::init$(handler, encoding);
	this->m_escapeSetting = true;
	initCDATA();
	$set(this, m_prefixMap, $new($NamespaceMappings));
}

void ToXMLSAXHandler::init$($ContentHandler* handler, $LexicalHandler* lex, $String* encoding) {
	$ToSAXHandler::init$(handler, lex, encoding);
	this->m_escapeSetting = true;
	initCDATA();
	$set(this, m_prefixMap, $new($NamespaceMappings));
}

void ToXMLSAXHandler::startElement($String* elementNamespaceURI, $String* elementLocalName, $String* elementName) {
	startElement(elementNamespaceURI, elementLocalName, elementName, nullptr);
}

void ToXMLSAXHandler::startElement($String* elementName) {
	startElement(nullptr, nullptr, elementName, nullptr);
}

void ToXMLSAXHandler::characters($chars* ch, int32_t off, int32_t len) {
	if (this->m_needToCallStartDocument) {
		startDocumentInternal();
		this->m_needToCallStartDocument = false;
	}
	if ($nc(this->m_elemContext)->m_startTagOpen) {
		closeStartTag();
		$nc(this->m_elemContext)->m_startTagOpen = false;
	}
	if ($nc(this->m_elemContext)->m_isCdataSection && !this->m_cdataTagOpen && this->m_lexHandler != nullptr) {
		$nc(this->m_lexHandler)->startCDATA();
		this->m_cdataTagOpen = true;
	}
	$nc(this->m_saxHandler)->characters(ch, off, len);
	if (this->m_tracer != nullptr) {
		fireCharEvent(ch, off, len);
	}
}

void ToXMLSAXHandler::endElement($String* elemName) {
	endElement(nullptr, nullptr, elemName);
}

void ToXMLSAXHandler::namespaceAfterStartElement($String* prefix, $String* uri) {
	startPrefixMapping(prefix, uri, false);
}

void ToXMLSAXHandler::processingInstruction($String* target, $String* data) {
	flushPending();
	$nc(this->m_saxHandler)->processingInstruction(target, data);
	if (this->m_tracer != nullptr) {
		$ToSAXHandler::fireEscapingEvent(target, data);
	}
}

bool ToXMLSAXHandler::popNamespace($String* prefix) {
	try {
		if ($nc(this->m_prefixMap)->popNamespace(prefix)) {
			$nc(this->m_saxHandler)->endPrefixMapping(prefix);
			return true;
		}
	} catch ($SAXException& e) {
	}
	return false;
}

void ToXMLSAXHandler::startCDATA() {
	if (!this->m_cdataTagOpen) {
		flushPending();
		if (this->m_lexHandler != nullptr) {
			$nc(this->m_lexHandler)->startCDATA();
			this->m_cdataTagOpen = true;
		}
	}
}

void ToXMLSAXHandler::startElement($String* namespaceURI, $String* localName, $String* name, $Attributes* atts) {
	$useLocalCurrentObjectStackCache();
	flushPending();
	$ToSAXHandler::startElement(namespaceURI, localName, name, atts);
	if (this->m_needToOutputDocTypeDecl) {
		$var($String, doctypeSystem, getDoctypeSystem());
		if (doctypeSystem != nullptr && this->m_lexHandler != nullptr) {
			$var($String, doctypePublic, getDoctypePublic());
			if (doctypeSystem != nullptr) {
				$nc(this->m_lexHandler)->startDTD(name, doctypePublic, doctypeSystem);
			}
		}
		this->m_needToOutputDocTypeDecl = false;
	}
	$set(this, m_elemContext, $nc(this->m_elemContext)->push(namespaceURI, localName, name));
	if (namespaceURI != nullptr) {
		ensurePrefixIsDeclared(namespaceURI, name);
	}
	if (atts != nullptr) {
		addAttributes(atts);
	}
	$nc(this->m_elemContext)->m_isCdataSection = isCdataSection();
}

void ToXMLSAXHandler::ensurePrefixIsDeclared($String* ns, $String* rawName) {
	$useLocalCurrentObjectStackCache();
	if (ns != nullptr && ns->length() > 0) {
		int32_t index = 0;
		bool no_prefix = ((index = $nc(rawName)->indexOf(":"_s)) < 0);
		$var($String, prefix, (no_prefix) ? ""_s : rawName->substring(0, index));
		if (nullptr != prefix) {
			$var($String, foundURI, $nc(this->m_prefixMap)->lookupNamespace(prefix));
			if ((nullptr == foundURI) || !$nc(foundURI)->equals(ns)) {
				this->startPrefixMapping(prefix, ns, false);
				if (getShouldOutputNSAttr()) {
					this->addAttributeAlways("http://www.w3.org/2000/xmlns/"_s, no_prefix ? "xmlns"_s : prefix, no_prefix ? "xmlns"_s : ($$str({"xmlns:"_s, prefix})), "CDATA"_s, ns, false);
				}
			}
		}
	}
}

void ToXMLSAXHandler::addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool XSLAttribute) {
	if ($nc(this->m_elemContext)->m_startTagOpen) {
		ensurePrefixIsDeclared(uri, rawName);
		addAttributeAlways(uri, localName, rawName, type, value, false);
	}
}

bool ToXMLSAXHandler::reset() {
	bool wasReset = false;
	if ($ToSAXHandler::reset()) {
		resetToXMLSAXHandler();
		wasReset = true;
	}
	return wasReset;
}

void ToXMLSAXHandler::resetToXMLSAXHandler() {
	this->m_escapeSetting = true;
}

ToXMLSAXHandler::ToXMLSAXHandler() {
}

$Class* ToXMLSAXHandler::load$($String* name, bool initialize) {
	$loadClass(ToXMLSAXHandler, name, initialize, &_ToXMLSAXHandler_ClassInfo_, allocate$ToXMLSAXHandler);
	return class$;
}

$Class* ToXMLSAXHandler::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com