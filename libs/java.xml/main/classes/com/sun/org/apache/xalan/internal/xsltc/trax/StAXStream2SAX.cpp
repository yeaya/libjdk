#include <com/sun/org/apache/xalan/internal/xsltc/trax/StAXStream2SAX.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/StAXStream2SAX$1.h>
#include <java/io/IOException.h>
#include <java/lang/InternalError.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/XMLStreamConstants.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/stream/XMLStreamReader.h>
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
using $StAXStream2SAX$1 = ::com::sun::org::apache::xalan::internal::xsltc::trax::StAXStream2SAX$1;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $QName = ::javax::xml::namespace$::QName;
using $XMLStreamConstants = ::javax::xml::stream::XMLStreamConstants;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;
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

$FieldInfo _StAXStream2SAX_FieldInfo_[] = {
	{"staxStreamReader", "Ljavax/xml/stream/XMLStreamReader;", nullptr, $PRIVATE | $FINAL, $field(StAXStream2SAX, staxStreamReader)},
	{"_sax", "Lorg/xml/sax/ContentHandler;", nullptr, $PRIVATE, $field(StAXStream2SAX, _sax)},
	{"_lex", "Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PRIVATE, $field(StAXStream2SAX, _lex)},
	{"_saxImpl", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;", nullptr, $PRIVATE, $field(StAXStream2SAX, _saxImpl)},
	{}
};

$MethodInfo _StAXStream2SAX_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/xml/stream/XMLStreamReader;)V", nullptr, $PUBLIC, $method(StAXStream2SAX, init$, void, $XMLStreamReader*)},
	{"bridge", "()V", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, bridge, void), "javax.xml.stream.XMLStreamException"},
	{"getAttributes", "()Lorg/xml/sax/Attributes;", nullptr, $PRIVATE, $method(StAXStream2SAX, getAttributes, $Attributes*)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, getColumnNumber, int32_t)},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, getContentHandler, $ContentHandler*)},
	{"getDTDHandler", "()Lorg/xml/sax/DTDHandler;", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, getDTDHandler, $DTDHandler*)},
	{"getEntityResolver", "()Lorg/xml/sax/EntityResolver;", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, getEntityResolver, $EntityResolver*)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, getErrorHandler, $ErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, getFeature, bool, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, getLineNumber, int32_t)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, getProperty, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, getSystemId, $String*)},
	{"handleAttribute", "()V", nullptr, $PRIVATE, $method(StAXStream2SAX, handleAttribute, void)},
	{"handleCDATA", "()V", nullptr, $PRIVATE, $method(StAXStream2SAX, handleCDATA, void)},
	{"handleCharacters", "()V", nullptr, $PRIVATE, $method(StAXStream2SAX, handleCharacters, void), "javax.xml.stream.XMLStreamException"},
	{"handleComment", "()V", nullptr, $PRIVATE, $method(StAXStream2SAX, handleComment, void)},
	{"handleDTD", "()V", nullptr, $PRIVATE, $method(StAXStream2SAX, handleDTD, void)},
	{"handleEndDocument", "()V", nullptr, $PRIVATE, $method(StAXStream2SAX, handleEndDocument, void), "org.xml.sax.SAXException"},
	{"handleEndElement", "()V", nullptr, $PRIVATE, $method(StAXStream2SAX, handleEndElement, void), "javax.xml.stream.XMLStreamException"},
	{"handleEntityDecl", "()V", nullptr, $PRIVATE, $method(StAXStream2SAX, handleEntityDecl, void)},
	{"handleEntityReference", "()V", nullptr, $PRIVATE, $method(StAXStream2SAX, handleEntityReference, void)},
	{"handleNamespace", "()V", nullptr, $PRIVATE, $method(StAXStream2SAX, handleNamespace, void)},
	{"handleNotationDecl", "()V", nullptr, $PRIVATE, $method(StAXStream2SAX, handleNotationDecl, void)},
	{"handlePI", "()V", nullptr, $PRIVATE, $method(StAXStream2SAX, handlePI, void), "javax.xml.stream.XMLStreamException"},
	{"handleSpace", "()V", nullptr, $PRIVATE, $method(StAXStream2SAX, handleSpace, void)},
	{"handleStartDocument", "()V", nullptr, $PRIVATE, $method(StAXStream2SAX, handleStartDocument, void), "org.xml.sax.SAXException"},
	{"handleStartElement", "()V", nullptr, $PRIVATE, $method(StAXStream2SAX, handleStartElement, void), "javax.xml.stream.XMLStreamException"},
	{"parse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, parse, void, $InputSource*), "java.io.IOException,org.xml.sax.SAXException"},
	{"parse", "()V", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, parse, void), "java.io.IOException,org.xml.sax.SAXException,javax.xml.stream.XMLStreamException"},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, parse, void, $String*), "java.io.IOException,org.xml.sax.SAXException"},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, setContentHandler, void, $ContentHandler*), "java.lang.NullPointerException"},
	{"setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, setDTDHandler, void, $DTDHandler*), "java.lang.NullPointerException"},
	{"setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, setEntityResolver, void, $EntityResolver*), "java.lang.NullPointerException"},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, setErrorHandler, void, $ErrorHandler*), "java.lang.NullPointerException"},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, setFeature, void, $String*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StAXStream2SAX_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.trax.StAXStream2SAX$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StAXStream2SAX_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.StAXStream2SAX",
	"java.lang.Object",
	"org.xml.sax.XMLReader,org.xml.sax.Locator",
	_StAXStream2SAX_FieldInfo_,
	_StAXStream2SAX_MethodInfo_,
	nullptr,
	nullptr,
	_StAXStream2SAX_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.trax.StAXStream2SAX$1"
};

$Object* allocate$StAXStream2SAX($Class* clazz) {
	return $of($alloc(StAXStream2SAX));
}

int32_t StAXStream2SAX::hashCode() {
	 return this->$XMLReader::hashCode();
}

bool StAXStream2SAX::equals(Object$* arg0) {
	 return this->$XMLReader::equals(arg0);
}

$Object* StAXStream2SAX::clone() {
	 return this->$XMLReader::clone();
}

$String* StAXStream2SAX::toString() {
	 return this->$XMLReader::toString();
}

void StAXStream2SAX::finalize() {
	this->$XMLReader::finalize();
}

void StAXStream2SAX::init$($XMLStreamReader* staxSrc) {
	$set(this, _sax, nullptr);
	$set(this, _lex, nullptr);
	$set(this, _saxImpl, nullptr);
	$set(this, staxStreamReader, staxSrc);
}

$ContentHandler* StAXStream2SAX::getContentHandler() {
	return this->_sax;
}

void StAXStream2SAX::setContentHandler($ContentHandler* handler) {
	$set(this, _sax, handler);
	if ($instanceOf($LexicalHandler, handler)) {
		$set(this, _lex, $cast($LexicalHandler, handler));
	}
	if ($instanceOf($SAXImpl, handler)) {
		$set(this, _saxImpl, $cast($SAXImpl, handler));
	}
}

void StAXStream2SAX::parse($InputSource* unused) {
	try {
		bridge();
	} catch ($XMLStreamException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void StAXStream2SAX::parse() {
	bridge();
}

void StAXStream2SAX::parse($String* sysId) {
	$throwNew($IOException, "This method is not yet implemented."_s);
}

void StAXStream2SAX::bridge() {
	$useLocalCurrentObjectStackCache();
	try {
		int32_t depth = 0;
		bool startedAtDocument = false;
		int32_t event = $nc(this->staxStreamReader)->getEventType();
		if (event == $XMLStreamConstants::START_DOCUMENT) {
			startedAtDocument = true;
			event = $nc(this->staxStreamReader)->next();
		}
		handleStartDocument();
		while (event != $XMLStreamConstants::START_ELEMENT) {
			switch (event) {
			case $XMLStreamConstants::CHARACTERS:
				{
					handleCharacters();
					break;
				}
			case $XMLStreamConstants::PROCESSING_INSTRUCTION:
				{
					handlePI();
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
					$throwNew($InternalError, $$str({"processing prolog event: "_s, $$str(event)}));
				}
			}
			event = $nc(this->staxStreamReader)->next();
		}
		do {
			switch (event) {
			case $XMLStreamConstants::START_ELEMENT:
				{
					++depth;
					handleStartElement();
					break;
				}
			case $XMLStreamConstants::END_ELEMENT:
				{
					handleEndElement();
					--depth;
					break;
				}
			case $XMLStreamConstants::CHARACTERS:
				{
					handleCharacters();
					break;
				}
			case $XMLStreamConstants::ENTITY_REFERENCE:
				{
					handleEntityReference();
					break;
				}
			case $XMLStreamConstants::PROCESSING_INSTRUCTION:
				{
					handlePI();
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
					$throwNew($InternalError, $$str({"processing event: "_s, $$str(event)}));
				}
			}
			event = $nc(this->staxStreamReader)->next();
		} while (depth != 0);
		if (startedAtDocument) {
			while (event != $XMLStreamConstants::END_DOCUMENT) {
				switch (event) {
				case $XMLStreamConstants::CHARACTERS:
					{
						handleCharacters();
						break;
					}
				case $XMLStreamConstants::PROCESSING_INSTRUCTION:
					{
						handlePI();
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
						$throwNew($InternalError, $$str({"processing misc event after document element: "_s, $$str(event)}));
					}
				}
				event = $nc(this->staxStreamReader)->next();
			}
		}
		handleEndDocument();
	} catch ($SAXException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void StAXStream2SAX::handleEndDocument() {
	$nc(this->_sax)->endDocument();
}

void StAXStream2SAX::handleStartDocument() {
	$nc(this->_sax)->setDocumentLocator($$new($StAXStream2SAX$1, this));
	$nc(this->_sax)->startDocument();
}

void StAXStream2SAX::handlePI() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, var$0, $nc(this->staxStreamReader)->getPITarget());
		$nc(this->_sax)->processingInstruction(var$0, $($nc(this->staxStreamReader)->getPIData()));
	} catch ($SAXException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void StAXStream2SAX::handleCharacters() {
	int32_t textLength = $nc(this->staxStreamReader)->getTextLength();
	$var($chars, chars, $new($chars, textLength));
	$nc(this->staxStreamReader)->getTextCharacters(0, chars, 0, textLength);
	try {
		$nc(this->_sax)->characters(chars, 0, chars->length);
	} catch ($SAXException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void StAXStream2SAX::handleEndElement() {
	$useLocalCurrentObjectStackCache();
	$var($QName, qName, $nc(this->staxStreamReader)->getName());
	try {
		$var($String, qname, ""_s);
		bool var$0 = $nc(qName)->getPrefix() != nullptr;
		if (var$0 && $($nc($(qName->getPrefix()))->trim())->length() != 0) {
			$assign(qname, $str({$(qName->getPrefix()), ":"_s}));
		}
		$plusAssign(qname, $($nc(qName)->getLocalPart()));
		$var($String, var$1, qName->getNamespaceURI());
		$nc(this->_sax)->endElement(var$1, $(qName->getLocalPart()), qname);
		int32_t nsCount = $nc(this->staxStreamReader)->getNamespaceCount();
		for (int32_t i = nsCount - 1; i >= 0; --i) {
			$var($String, prefix, $nc(this->staxStreamReader)->getNamespacePrefix(i));
			if (prefix == nullptr) {
				$assign(prefix, ""_s);
			}
			$nc(this->_sax)->endPrefixMapping(prefix);
		}
	} catch ($SAXException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void StAXStream2SAX::handleStartElement() {
	$useLocalCurrentObjectStackCache();
	try {
		int32_t nsCount = $nc(this->staxStreamReader)->getNamespaceCount();
		for (int32_t i = 0; i < nsCount; ++i) {
			$var($String, prefix, $nc(this->staxStreamReader)->getNamespacePrefix(i));
			if (prefix == nullptr) {
				$assign(prefix, ""_s);
			}
			$var($String, uri, $nc(this->staxStreamReader)->getNamespaceURI(i));
			if (uri == nullptr && $nc(prefix)->isEmpty()) {
				$assign(uri, ""_s);
			}
			$nc(this->_sax)->startPrefixMapping(prefix, uri);
		}
		$var($QName, qName, $nc(this->staxStreamReader)->getName());
		$var($String, prefix, $nc(qName)->getPrefix());
		$var($String, rawname, nullptr);
		if (prefix == nullptr || $nc(prefix)->length() == 0) {
			$assign(rawname, qName->getLocalPart());
		} else {
			$assign(rawname, $str({prefix, $$str(u':'), $(qName->getLocalPart())}));
		}
		$var($Attributes, attrs, getAttributes());
		$var($String, var$0, qName->getNamespaceURI());
		$nc(this->_sax)->startElement(var$0, $(qName->getLocalPart()), rawname, attrs);
	} catch ($SAXException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

$Attributes* StAXStream2SAX::getAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($AttributesImpl, attrs, $new($AttributesImpl));
	int32_t eventType = $nc(this->staxStreamReader)->getEventType();
	if (eventType != $XMLStreamConstants::ATTRIBUTE && eventType != $XMLStreamConstants::START_ELEMENT) {
		$throwNew($InternalError, $$str({"getAttributes() attempting to process: "_s, $$str(eventType)}));
	}
	for (int32_t i = 0; i < $nc(this->staxStreamReader)->getAttributeCount(); ++i) {
		$var($String, uri, $nc(this->staxStreamReader)->getAttributeNamespace(i));
		if (uri == nullptr) {
			$assign(uri, ""_s);
		}
		$var($String, localName, $nc(this->staxStreamReader)->getAttributeLocalName(i));
		$var($String, prefix, $nc(this->staxStreamReader)->getAttributePrefix(i));
		$var($String, qName, nullptr);
		if (prefix == nullptr || $nc(prefix)->length() == 0) {
			$assign(qName, localName);
		} else {
			$assign(qName, $str({prefix, $$str(u':'), localName}));
		}
		$var($String, type, $nc(this->staxStreamReader)->getAttributeType(i));
		$var($String, value, $nc(this->staxStreamReader)->getAttributeValue(i));
		attrs->addAttribute(uri, localName, qName, type, value);
	}
	return attrs;
}

void StAXStream2SAX::handleNamespace() {
}

void StAXStream2SAX::handleAttribute() {
}

void StAXStream2SAX::handleDTD() {
}

void StAXStream2SAX::handleComment() {
}

void StAXStream2SAX::handleEntityReference() {
}

void StAXStream2SAX::handleSpace() {
}

void StAXStream2SAX::handleNotationDecl() {
}

void StAXStream2SAX::handleEntityDecl() {
}

void StAXStream2SAX::handleCDATA() {
}

$DTDHandler* StAXStream2SAX::getDTDHandler() {
	return nullptr;
}

$ErrorHandler* StAXStream2SAX::getErrorHandler() {
	return nullptr;
}

bool StAXStream2SAX::getFeature($String* name) {
	return false;
}

void StAXStream2SAX::setFeature($String* name, bool value) {
}

void StAXStream2SAX::setDTDHandler($DTDHandler* handler) {
}

void StAXStream2SAX::setEntityResolver($EntityResolver* resolver) {
}

$EntityResolver* StAXStream2SAX::getEntityResolver() {
	return nullptr;
}

void StAXStream2SAX::setErrorHandler($ErrorHandler* handler) {
}

void StAXStream2SAX::setProperty($String* name, Object$* value) {
}

$Object* StAXStream2SAX::getProperty($String* name) {
	return $of(nullptr);
}

int32_t StAXStream2SAX::getColumnNumber() {
	return 0;
}

int32_t StAXStream2SAX::getLineNumber() {
	return 0;
}

$String* StAXStream2SAX::getPublicId() {
	return nullptr;
}

$String* StAXStream2SAX::getSystemId() {
	return nullptr;
}

StAXStream2SAX::StAXStream2SAX() {
}

$Class* StAXStream2SAX::load$($String* name, bool initialize) {
	$loadClass(StAXStream2SAX, name, initialize, &_StAXStream2SAX_ClassInfo_, allocate$StAXStream2SAX);
	return class$;
}

$Class* StAXStream2SAX::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com