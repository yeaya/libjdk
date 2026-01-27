#include <com/sun/org/apache/xalan/internal/xsltc/trax/StAXEvent2SAX.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/StAXEvent2SAX$1.h>
#include <java/io/IOException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/util/Iterator.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLStreamConstants.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/stream/events/Attribute.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/Namespace.h>
#include <javax/xml/stream/events/ProcessingInstruction.h>
#include <javax/xml/stream/events/StartDocument.h>
#include <javax/xml/stream/events/StartElement.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <org/xml/sax/ext/Locator2.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef CDATA
#undef CHARACTERS
#undef COMMENT
#undef DTD
#undef END_DOCUMENT
#undef END_ELEMENT
#undef ENTITY_DECLARATION
#undef ENTITY_REFERENCE
#undef NAMESPACE
#undef NOTATION_DECLARATION
#undef PROCESSING_INSTRUCTION
#undef SPACE
#undef START_DOCUMENT
#undef START_ELEMENT

using $SAXImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl;
using $StAXEvent2SAX$1 = ::com::sun::org::apache::xalan::internal::xsltc::trax::StAXEvent2SAX$1;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $QName = ::javax::xml::namespace$::QName;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLStreamConstants = ::javax::xml::stream::XMLStreamConstants;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $Attribute = ::javax::xml::stream::events::Attribute;
using $Characters = ::javax::xml::stream::events::Characters;
using $EndElement = ::javax::xml::stream::events::EndElement;
using $Namespace = ::javax::xml::stream::events::Namespace;
using $ProcessingInstruction = ::javax::xml::stream::events::ProcessingInstruction;
using $StartDocument = ::javax::xml::stream::events::StartDocument;
using $StartElement = ::javax::xml::stream::events::StartElement;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;
using $XMLReader = ::org::xml::sax::XMLReader;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;
using $Locator2 = ::org::xml::sax::ext::Locator2;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _StAXEvent2SAX_FieldInfo_[] = {
	{"staxEventReader", "Ljavax/xml/stream/XMLEventReader;", nullptr, $PRIVATE | $FINAL, $field(StAXEvent2SAX, staxEventReader)},
	{"_sax", "Lorg/xml/sax/ContentHandler;", nullptr, $PRIVATE, $field(StAXEvent2SAX, _sax)},
	{"_lex", "Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PRIVATE, $field(StAXEvent2SAX, _lex)},
	{"_saxImpl", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;", nullptr, $PRIVATE, $field(StAXEvent2SAX, _saxImpl)},
	{"version", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StAXEvent2SAX, version)},
	{"encoding", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StAXEvent2SAX, encoding)},
	{}
};

$MethodInfo _StAXEvent2SAX_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/xml/stream/XMLEventReader;)V", nullptr, $PUBLIC, $method(StAXEvent2SAX, init$, void, $XMLEventReader*)},
	{"bridge", "()V", nullptr, $PRIVATE, $method(StAXEvent2SAX, bridge, void), "javax.xml.stream.XMLStreamException"},
	{"getAttributes", "(Ljavax/xml/stream/events/StartElement;)Lorg/xml/sax/Attributes;", nullptr, $PRIVATE, $method(StAXEvent2SAX, getAttributes, $Attributes*, $StartElement*)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, getColumnNumber, int32_t)},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, getContentHandler, $ContentHandler*)},
	{"getDTDHandler", "()Lorg/xml/sax/DTDHandler;", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, getDTDHandler, $DTDHandler*)},
	{"getEntityResolver", "()Lorg/xml/sax/EntityResolver;", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, getEntityResolver, $EntityResolver*)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, getErrorHandler, $ErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, getFeature, bool, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, getLineNumber, int32_t)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, getProperty, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, getSystemId, $String*)},
	{"handleAttribute", "()V", nullptr, $PRIVATE, $method(StAXEvent2SAX, handleAttribute, void)},
	{"handleCDATA", "()V", nullptr, $PRIVATE, $method(StAXEvent2SAX, handleCDATA, void)},
	{"handleCharacters", "(Ljavax/xml/stream/events/Characters;)V", nullptr, $PRIVATE, $method(StAXEvent2SAX, handleCharacters, void, $Characters*), "javax.xml.stream.XMLStreamException"},
	{"handleComment", "()V", nullptr, $PRIVATE, $method(StAXEvent2SAX, handleComment, void)},
	{"handleDTD", "()V", nullptr, $PRIVATE, $method(StAXEvent2SAX, handleDTD, void)},
	{"handleEndDocument", "()V", nullptr, $PRIVATE, $method(StAXEvent2SAX, handleEndDocument, void), "org.xml.sax.SAXException"},
	{"handleEndElement", "(Ljavax/xml/stream/events/EndElement;)V", nullptr, $PRIVATE, $method(StAXEvent2SAX, handleEndElement, void, $EndElement*), "javax.xml.stream.XMLStreamException"},
	{"handleEntityDecl", "()V", nullptr, $PRIVATE, $method(StAXEvent2SAX, handleEntityDecl, void)},
	{"handleEntityReference", "()V", nullptr, $PRIVATE, $method(StAXEvent2SAX, handleEntityReference, void)},
	{"handleNamespace", "()V", nullptr, $PRIVATE, $method(StAXEvent2SAX, handleNamespace, void)},
	{"handleNotationDecl", "()V", nullptr, $PRIVATE, $method(StAXEvent2SAX, handleNotationDecl, void)},
	{"handlePI", "(Ljavax/xml/stream/events/ProcessingInstruction;)V", nullptr, $PRIVATE, $method(StAXEvent2SAX, handlePI, void, $ProcessingInstruction*), "javax.xml.stream.XMLStreamException"},
	{"handleSpace", "()V", nullptr, $PRIVATE, $method(StAXEvent2SAX, handleSpace, void)},
	{"handleStartDocument", "(Ljavax/xml/stream/events/XMLEvent;)V", nullptr, $PRIVATE, $method(StAXEvent2SAX, handleStartDocument, void, $XMLEvent*), "org.xml.sax.SAXException"},
	{"handleStartElement", "(Ljavax/xml/stream/events/StartElement;)V", nullptr, $PRIVATE, $method(StAXEvent2SAX, handleStartElement, void, $StartElement*), "javax.xml.stream.XMLStreamException"},
	{"parse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, parse, void, $InputSource*), "java.io.IOException,org.xml.sax.SAXException"},
	{"parse", "()V", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, parse, void), "java.io.IOException,org.xml.sax.SAXException,javax.xml.stream.XMLStreamException"},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, parse, void, $String*), "java.io.IOException,org.xml.sax.SAXException"},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, setContentHandler, void, $ContentHandler*), "java.lang.NullPointerException"},
	{"setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, setDTDHandler, void, $DTDHandler*), "java.lang.NullPointerException"},
	{"setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, setEntityResolver, void, $EntityResolver*), "java.lang.NullPointerException"},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, setErrorHandler, void, $ErrorHandler*), "java.lang.NullPointerException"},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, setFeature, void, $String*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StAXEvent2SAX_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.trax.StAXEvent2SAX$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StAXEvent2SAX_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.StAXEvent2SAX",
	"java.lang.Object",
	"org.xml.sax.XMLReader,org.xml.sax.Locator",
	_StAXEvent2SAX_FieldInfo_,
	_StAXEvent2SAX_MethodInfo_,
	nullptr,
	nullptr,
	_StAXEvent2SAX_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.trax.StAXEvent2SAX$1"
};

$Object* allocate$StAXEvent2SAX($Class* clazz) {
	return $of($alloc(StAXEvent2SAX));
}

int32_t StAXEvent2SAX::hashCode() {
	 return this->$XMLReader::hashCode();
}

bool StAXEvent2SAX::equals(Object$* arg0) {
	 return this->$XMLReader::equals(arg0);
}

$Object* StAXEvent2SAX::clone() {
	 return this->$XMLReader::clone();
}

$String* StAXEvent2SAX::toString() {
	 return this->$XMLReader::toString();
}

void StAXEvent2SAX::finalize() {
	this->$XMLReader::finalize();
}

void StAXEvent2SAX::init$($XMLEventReader* staxCore) {
	$set(this, _sax, nullptr);
	$set(this, _lex, nullptr);
	$set(this, _saxImpl, nullptr);
	$set(this, version, nullptr);
	$set(this, encoding, nullptr);
	$set(this, staxEventReader, staxCore);
}

$ContentHandler* StAXEvent2SAX::getContentHandler() {
	return this->_sax;
}

void StAXEvent2SAX::setContentHandler($ContentHandler* handler) {
	$set(this, _sax, handler);
	if ($instanceOf($LexicalHandler, handler)) {
		$set(this, _lex, $cast($LexicalHandler, handler));
	}
	if ($instanceOf($SAXImpl, handler)) {
		$set(this, _saxImpl, $cast($SAXImpl, handler));
	}
}

void StAXEvent2SAX::parse($InputSource* unused) {
	try {
		bridge();
	} catch ($XMLStreamException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void StAXEvent2SAX::parse() {
	bridge();
}

void StAXEvent2SAX::bridge() {
	$useLocalCurrentObjectStackCache();
	try {
		int32_t depth = 0;
		bool startedAtDocument = false;
		$var($XMLEvent, event, $nc(this->staxEventReader)->peek());
		bool var$0 = !$nc(event)->isStartDocument();
		if (var$0 && !event->isStartElement()) {
			$throwNew($IllegalStateException);
		}
		if ($nc(event)->getEventType() == $XMLStreamConstants::START_DOCUMENT) {
			startedAtDocument = true;
			$set(this, version, $nc(($cast($StartDocument, event)))->getVersion());
			if ($nc(($cast($StartDocument, event)))->encodingSet()) {
				$set(this, encoding, $nc(($cast($StartDocument, event)))->getCharacterEncodingScheme());
			}
			$assign(event, $nc(this->staxEventReader)->nextEvent());
			$assign(event, $nc(this->staxEventReader)->nextEvent());
		}
		handleStartDocument(event);
		while ($nc(event)->getEventType() != $XMLStreamConstants::START_ELEMENT) {
			switch (event->getEventType()) {
			case $XMLStreamConstants::CHARACTERS:
				{
					handleCharacters($(event->asCharacters()));
					break;
				}
			case $XMLStreamConstants::PROCESSING_INSTRUCTION:
				{
					handlePI($cast($ProcessingInstruction, event));
					break;
				}
			case $XMLStreamConstants::COMMENT:
				{
					handleComment();
					break;
				}
			case $XMLStreamConstants::DTD:
				{
					handleDTD();
					break;
				}
			case $XMLStreamConstants::SPACE:
				{
					handleSpace();
					break;
				}
			default:
				{
					$throwNew($InternalError, $$str({"processing prolog event: "_s, event}));
				}
			}
			$assign(event, $nc(this->staxEventReader)->nextEvent());
		}
		do {
			switch ($nc(event)->getEventType()) {
			case $XMLStreamConstants::START_ELEMENT:
				{
					++depth;
					handleStartElement($(event->asStartElement()));
					break;
				}
			case $XMLStreamConstants::END_ELEMENT:
				{
					handleEndElement($(event->asEndElement()));
					--depth;
					break;
				}
			case $XMLStreamConstants::CHARACTERS:
				{
					handleCharacters($(event->asCharacters()));
					break;
				}
			case $XMLStreamConstants::ENTITY_REFERENCE:
				{
					handleEntityReference();
					break;
				}
			case $XMLStreamConstants::PROCESSING_INSTRUCTION:
				{
					handlePI($cast($ProcessingInstruction, event));
					break;
				}
			case $XMLStreamConstants::COMMENT:
				{
					handleComment();
					break;
				}
			case $XMLStreamConstants::DTD:
				{
					handleDTD();
					break;
				}
			case $XMLStreamConstants::ATTRIBUTE:
				{
					handleAttribute();
					break;
				}
			case $XMLStreamConstants::NAMESPACE:
				{
					handleNamespace();
					break;
				}
			case $XMLStreamConstants::CDATA:
				{
					handleCDATA();
					break;
				}
			case $XMLStreamConstants::ENTITY_DECLARATION:
				{
					handleEntityDecl();
					break;
				}
			case $XMLStreamConstants::NOTATION_DECLARATION:
				{
					handleNotationDecl();
					break;
				}
			case $XMLStreamConstants::SPACE:
				{
					handleSpace();
					break;
				}
			default:
				{
					$throwNew($InternalError, $$str({"processing event: "_s, event}));
				}
			}
			$assign(event, $nc(this->staxEventReader)->nextEvent());
		} while (depth != 0);
		if (startedAtDocument) {
			while ($nc(event)->getEventType() != $XMLStreamConstants::END_DOCUMENT) {
				switch (event->getEventType()) {
				case $XMLStreamConstants::CHARACTERS:
					{
						handleCharacters($(event->asCharacters()));
						break;
					}
				case $XMLStreamConstants::PROCESSING_INSTRUCTION:
					{
						handlePI($cast($ProcessingInstruction, event));
						break;
					}
				case $XMLStreamConstants::COMMENT:
					{
						handleComment();
						break;
					}
				case $XMLStreamConstants::SPACE:
					{
						handleSpace();
						break;
					}
				default:
					{
						$throwNew($InternalError, $$str({"processing misc event after document element: "_s, event}));
					}
				}
				$assign(event, $nc(this->staxEventReader)->nextEvent());
			}
		}
		handleEndDocument();
	} catch ($SAXException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void StAXEvent2SAX::handleEndDocument() {
	$nc(this->_sax)->endDocument();
}

void StAXEvent2SAX::handleStartDocument($XMLEvent* event) {
	$nc(this->_sax)->setDocumentLocator($$new($StAXEvent2SAX$1, this, event));
	$nc(this->_sax)->startDocument();
}

void StAXEvent2SAX::handlePI($ProcessingInstruction* event) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, var$0, $nc(event)->getTarget());
		$nc(this->_sax)->processingInstruction(var$0, $(event->getData()));
	} catch ($SAXException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void StAXEvent2SAX::handleCharacters($Characters* event) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($chars, var$0, $nc($($nc(event)->getData()))->toCharArray());
		$nc(this->_sax)->characters(var$0, 0, $nc($(event->getData()))->length());
	} catch ($SAXException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void StAXEvent2SAX::handleEndElement($EndElement* event) {
	$useLocalCurrentObjectStackCache();
	$var($QName, qName, $nc(event)->getName());
	$var($String, qname, ""_s);
	bool var$0 = $nc(qName)->getPrefix() != nullptr;
	if (var$0 && $($nc($(qName->getPrefix()))->trim())->length() != 0) {
		$assign(qname, $str({$(qName->getPrefix()), ":"_s}));
	}
	$plusAssign(qname, $($nc(qName)->getLocalPart()));
	try {
		$var($String, var$1, qName->getNamespaceURI());
		$nc(this->_sax)->endElement(var$1, $(qName->getLocalPart()), qname);
		{
			$var($Iterator, i, event->getNamespaces());
			for (; $nc(i)->hasNext();) {
				$var($String, prefix, $nc(($cast($Namespace, $(i->next()))))->getPrefix());
				if (prefix == nullptr) {
					$assign(prefix, ""_s);
				}
				$nc(this->_sax)->endPrefixMapping(prefix);
			}
		}
	} catch ($SAXException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void StAXEvent2SAX::handleStartElement($StartElement* event) {
	$useLocalCurrentObjectStackCache();
	try {
		{
			$var($Iterator, i, $nc(event)->getNamespaces());
			for (; $nc(i)->hasNext();) {
				$var($String, prefix, $nc(($cast($Namespace, $(i->next()))))->getPrefix());
				if (prefix == nullptr) {
					$assign(prefix, ""_s);
				}
				$nc(this->_sax)->startPrefixMapping(prefix, $(event->getNamespaceURI(prefix)));
			}
		}
		$var($QName, qName, event->getName());
		$var($String, prefix, $nc(qName)->getPrefix());
		$var($String, rawname, nullptr);
		if (prefix == nullptr || $nc(prefix)->length() == 0) {
			$assign(rawname, qName->getLocalPart());
		} else {
			$assign(rawname, $str({prefix, $$str(u':'), $(qName->getLocalPart())}));
		}
		$var($Attributes, saxAttrs, getAttributes(event));
		$var($String, var$0, qName->getNamespaceURI());
		$nc(this->_sax)->startElement(var$0, $(qName->getLocalPart()), rawname, saxAttrs);
	} catch ($SAXException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

$Attributes* StAXEvent2SAX::getAttributes($StartElement* event) {
	$useLocalCurrentObjectStackCache();
	$var($AttributesImpl, attrs, $new($AttributesImpl));
	if (!$nc(event)->isStartElement()) {
		$throwNew($InternalError, $$str({"getAttributes() attempting to process: "_s, event}));
	}
	{
		$var($Iterator, i, $nc(event)->getAttributes());
		for (; $nc(i)->hasNext();) {
			$var($Attribute, staxAttr, $cast($Attribute, i->next()));
			$var($String, uri, $nc($($nc(staxAttr)->getName()))->getNamespaceURI());
			if (uri == nullptr) {
				$assign(uri, ""_s);
			}
			$var($String, localName, $nc($(staxAttr->getName()))->getLocalPart());
			$var($String, prefix, $nc($(staxAttr->getName()))->getPrefix());
			$var($String, qName, nullptr);
			if (prefix == nullptr || $nc(prefix)->length() == 0) {
				$assign(qName, localName);
			} else {
				$assign(qName, $str({prefix, $$str(u':'), localName}));
			}
			$var($String, type, staxAttr->getDTDType());
			$var($String, value, staxAttr->getValue());
			attrs->addAttribute(uri, localName, qName, type, value);
		}
	}
	return attrs;
}

void StAXEvent2SAX::handleNamespace() {
}

void StAXEvent2SAX::handleAttribute() {
}

void StAXEvent2SAX::handleDTD() {
}

void StAXEvent2SAX::handleComment() {
}

void StAXEvent2SAX::handleEntityReference() {
}

void StAXEvent2SAX::handleSpace() {
}

void StAXEvent2SAX::handleNotationDecl() {
}

void StAXEvent2SAX::handleEntityDecl() {
}

void StAXEvent2SAX::handleCDATA() {
}

$DTDHandler* StAXEvent2SAX::getDTDHandler() {
	return nullptr;
}

$ErrorHandler* StAXEvent2SAX::getErrorHandler() {
	return nullptr;
}

bool StAXEvent2SAX::getFeature($String* name) {
	return false;
}

void StAXEvent2SAX::setFeature($String* name, bool value) {
}

void StAXEvent2SAX::parse($String* sysId) {
	$throwNew($IOException, "This method is not yet implemented."_s);
}

void StAXEvent2SAX::setDTDHandler($DTDHandler* handler) {
}

void StAXEvent2SAX::setEntityResolver($EntityResolver* resolver) {
}

$EntityResolver* StAXEvent2SAX::getEntityResolver() {
	return nullptr;
}

void StAXEvent2SAX::setErrorHandler($ErrorHandler* handler) {
}

void StAXEvent2SAX::setProperty($String* name, Object$* value) {
}

$Object* StAXEvent2SAX::getProperty($String* name) {
	return $of(nullptr);
}

int32_t StAXEvent2SAX::getColumnNumber() {
	return 0;
}

int32_t StAXEvent2SAX::getLineNumber() {
	return 0;
}

$String* StAXEvent2SAX::getPublicId() {
	return nullptr;
}

$String* StAXEvent2SAX::getSystemId() {
	return nullptr;
}

StAXEvent2SAX::StAXEvent2SAX() {
}

$Class* StAXEvent2SAX::load$($String* name, bool initialize) {
	$loadClass(StAXEvent2SAX, name, initialize, &_StAXEvent2SAX_ClassInfo_, allocate$StAXEvent2SAX);
	return class$;
}

$Class* StAXEvent2SAX::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com