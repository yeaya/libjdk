#include <com/sun/org/apache/xml/internal/serializer/ToSAXHandler.h>

#include <com/sun/org/apache/xml/internal/serializer/ElemContext.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerTrace.h>
#include <com/sun/org/apache/xml/internal/serializer/TransformStateSetter.h>
#include <java/util/List.h>
#include <javax/xml/transform/Transformer.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

using $SerializerBase = ::com::sun::org::apache::xml::internal::serializer::SerializerBase;
using $TransformStateSetter = ::com::sun::org::apache::xml::internal::serializer::TransformStateSetter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Node = ::org::w3c::dom::Node;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $SAXParseException = ::org::xml::sax::SAXParseException;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _ToSAXHandler_FieldInfo_[] = {
	{"m_saxHandler", "Lorg/xml/sax/ContentHandler;", nullptr, $PROTECTED, $field(ToSAXHandler, m_saxHandler)},
	{"m_lexHandler", "Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PROTECTED, $field(ToSAXHandler, m_lexHandler)},
	{"m_shouldGenerateNSAttribute", "Z", nullptr, $PRIVATE, $field(ToSAXHandler, m_shouldGenerateNSAttribute)},
	{"m_state", "Lcom/sun/org/apache/xml/internal/serializer/TransformStateSetter;", nullptr, $PROTECTED, $field(ToSAXHandler, m_state)},
	{}
};

$MethodInfo _ToSAXHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ToSAXHandler, init$, void)},
	{"<init>", "(Lorg/xml/sax/ContentHandler;Lorg/xml/sax/ext/LexicalHandler;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ToSAXHandler, init$, void, $ContentHandler*, $LexicalHandler*, $String*)},
	{"<init>", "(Lorg/xml/sax/ContentHandler;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ToSAXHandler, init$, void, $ContentHandler*, $String*)},
	{"addUniqueAttribute", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, addUniqueAttribute, void, $String*, $String*, int32_t), "org.xml.sax.SAXException"},
	{"characters", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, characters, void, $String*), "org.xml.sax.SAXException"},
	{"characters", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, characters, void, $Node*), "org.xml.sax.SAXException"},
	{"closeCDATA", "()V", nullptr, $PROTECTED, $virtualMethod(ToSAXHandler, closeCDATA, void), "org.xml.sax.SAXException"},
	{"closeStartTag", "()V", nullptr, $PROTECTED, $virtualMethod(ToSAXHandler, closeStartTag, void), "org.xml.sax.SAXException"},
	{"comment", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, comment, void, $String*), "org.xml.sax.SAXException"},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, fatalError, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"flushPending", "()V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, flushPending, void), "org.xml.sax.SAXException"},
	{"getShouldOutputNSAttr", "()Z", nullptr, 0, $virtualMethod(ToSAXHandler, getShouldOutputNSAttr, bool)},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"reset", "()Z", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, reset, bool)},
	{"resetToSAXHandler", "()V", nullptr, $PRIVATE, $method(ToSAXHandler, resetToSAXHandler, void)},
	{"setCdataSectionElements", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC, $virtualMethod(ToSAXHandler, setCdataSectionElements, void, $List*)},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, setContentHandler, void, $ContentHandler*)},
	{"setLexHandler", "(Lorg/xml/sax/ext/LexicalHandler;)V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, setLexHandler, void, $LexicalHandler*)},
	{"setShouldOutputNSAttr", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, setShouldOutputNSAttr, void, bool)},
	{"setTransformState", "(Lcom/sun/org/apache/xml/internal/serializer/TransformStateSetter;)V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, setTransformState, void, $TransformStateSetter*)},
	{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, startDTD, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startDocumentInternal", "()V", nullptr, $PROTECTED, $virtualMethod(ToSAXHandler, startDocumentInternal, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, startElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, startElement, void, $String*), "org.xml.sax.SAXException"},
	{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(ToSAXHandler, warning, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _ToSAXHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.ToSAXHandler",
	"com.sun.org.apache.xml.internal.serializer.SerializerBase",
	nullptr,
	_ToSAXHandler_FieldInfo_,
	_ToSAXHandler_MethodInfo_
};

$Object* allocate$ToSAXHandler($Class* clazz) {
	return $of($alloc(ToSAXHandler));
}

void ToSAXHandler::init$() {
	$SerializerBase::init$();
	this->m_shouldGenerateNSAttribute = true;
	$set(this, m_state, nullptr);
}

void ToSAXHandler::init$($ContentHandler* hdlr, $LexicalHandler* lex, $String* encoding) {
	$SerializerBase::init$();
	this->m_shouldGenerateNSAttribute = true;
	$set(this, m_state, nullptr);
	setContentHandler(hdlr);
	setLexHandler(lex);
	setEncoding(encoding);
}

void ToSAXHandler::init$($ContentHandler* handler, $String* encoding) {
	$SerializerBase::init$();
	this->m_shouldGenerateNSAttribute = true;
	$set(this, m_state, nullptr);
	setContentHandler(handler);
	setEncoding(encoding);
}

void ToSAXHandler::startDocumentInternal() {
	if (this->m_needToCallStartDocument) {
		$SerializerBase::startDocumentInternal();
		$nc(this->m_saxHandler)->startDocument();
		this->m_needToCallStartDocument = false;
	}
}

void ToSAXHandler::startDTD($String* arg0, $String* arg1, $String* arg2) {
}

void ToSAXHandler::characters($String* chars) {
	int32_t len = (chars == nullptr) ? 0 : $nc(chars)->length();
	if (len > $nc(this->m_charsBuff)->length) {
		$set(this, m_charsBuff, $new($chars, len * 2 + 1));
	}
	if (len > 0) {
		chars->getChars(0, len, this->m_charsBuff, 0);
	}
	characters(this->m_charsBuff, 0, len);
}

void ToSAXHandler::comment($String* comment) {
	flushPending();
	if (this->m_lexHandler != nullptr) {
		int32_t len = $nc(comment)->length();
		if (len > $nc(this->m_charsBuff)->length) {
			$set(this, m_charsBuff, $new($chars, len * 2 + 1));
		}
		comment->getChars(0, len, this->m_charsBuff, 0);
		$nc(this->m_lexHandler)->comment(this->m_charsBuff, 0, len);
		if (this->m_tracer != nullptr) {
			$SerializerBase::fireCommentEvent(this->m_charsBuff, 0, len);
		}
	}
}

void ToSAXHandler::processingInstruction($String* target, $String* data) {
}

void ToSAXHandler::closeStartTag() {
}

void ToSAXHandler::closeCDATA() {
}

void ToSAXHandler::startElement($String* arg0, $String* arg1, $String* arg2, $Attributes* arg3) {
	if (this->m_state != nullptr) {
		$nc(this->m_state)->resetState($(getTransformer()));
	}
	if (this->m_tracer != nullptr) {
		$SerializerBase::fireStartElem(arg2);
	}
}

void ToSAXHandler::setLexHandler($LexicalHandler* _lexHandler) {
	$set(this, m_lexHandler, _lexHandler);
}

void ToSAXHandler::setContentHandler($ContentHandler* _saxHandler) {
	$set(this, m_saxHandler, _saxHandler);
	if (this->m_lexHandler == nullptr && $instanceOf($LexicalHandler, _saxHandler)) {
		$set(this, m_lexHandler, $cast($LexicalHandler, _saxHandler));
	}
}

void ToSAXHandler::setCdataSectionElements($List* URI_and_localNames) {
}

void ToSAXHandler::setShouldOutputNSAttr(bool doOutputNSAttr) {
	this->m_shouldGenerateNSAttribute = doOutputNSAttr;
}

bool ToSAXHandler::getShouldOutputNSAttr() {
	return this->m_shouldGenerateNSAttribute;
}

void ToSAXHandler::flushPending() {
	if (this->m_needToCallStartDocument) {
		startDocumentInternal();
		this->m_needToCallStartDocument = false;
	}
	if ($nc(this->m_elemContext)->m_startTagOpen) {
		closeStartTag();
		$nc(this->m_elemContext)->m_startTagOpen = false;
	}
	if (this->m_cdataTagOpen) {
		closeCDATA();
		this->m_cdataTagOpen = false;
	}
}

void ToSAXHandler::setTransformState($TransformStateSetter* ts) {
	$set(this, m_state, ts);
}

void ToSAXHandler::startElement($String* uri, $String* localName, $String* qName) {
	if (this->m_state != nullptr) {
		$nc(this->m_state)->resetState($(getTransformer()));
	}
	if (this->m_tracer != nullptr) {
		$SerializerBase::fireStartElem(qName);
	}
}

void ToSAXHandler::startElement($String* qName) {
	if (this->m_state != nullptr) {
		$nc(this->m_state)->resetState($(getTransformer()));
	}
	if (this->m_tracer != nullptr) {
		$SerializerBase::fireStartElem(qName);
	}
}

void ToSAXHandler::characters($Node* node) {
	if (this->m_state != nullptr) {
		$nc(this->m_state)->setCurrentNode(node);
	}
	$var($String, data, $nc(node)->getNodeValue());
	if (data != nullptr) {
		this->characters(data);
	}
}

void ToSAXHandler::fatalError($SAXParseException* exc) {
	$SerializerBase::fatalError(exc);
	this->m_needToCallStartDocument = false;
	if ($instanceOf($ErrorHandler, this->m_saxHandler)) {
		$nc(($cast($ErrorHandler, this->m_saxHandler)))->fatalError(exc);
	}
}

void ToSAXHandler::error($SAXParseException* exc) {
	$SerializerBase::error(exc);
	if ($instanceOf($ErrorHandler, this->m_saxHandler)) {
		$nc(($cast($ErrorHandler, this->m_saxHandler)))->error(exc);
	}
}

void ToSAXHandler::warning($SAXParseException* exc) {
	$SerializerBase::warning(exc);
	if ($instanceOf($ErrorHandler, this->m_saxHandler)) {
		$nc(($cast($ErrorHandler, this->m_saxHandler)))->warning(exc);
	}
}

bool ToSAXHandler::reset() {
	bool wasReset = false;
	if ($SerializerBase::reset()) {
		resetToSAXHandler();
		wasReset = true;
	}
	return wasReset;
}

void ToSAXHandler::resetToSAXHandler() {
	$set(this, m_lexHandler, nullptr);
	$set(this, m_saxHandler, nullptr);
	$set(this, m_state, nullptr);
	this->m_shouldGenerateNSAttribute = false;
}

void ToSAXHandler::addUniqueAttribute($String* qName, $String* value, int32_t flags) {
	addAttribute(qName, value);
}

ToSAXHandler::ToSAXHandler() {
}

$Class* ToSAXHandler::load$($String* name, bool initialize) {
	$loadClass(ToSAXHandler, name, initialize, &_ToSAXHandler_ClassInfo_, allocate$ToSAXHandler);
	return class$;
}

$Class* ToSAXHandler::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com