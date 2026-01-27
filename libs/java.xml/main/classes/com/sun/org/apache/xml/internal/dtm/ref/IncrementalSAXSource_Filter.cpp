#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource_Filter.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/CoroutineManager.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource_Filter$StopException.h>
#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/ThreadControllerWrapper.h>
#include <java/io/IOException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

#undef DEBUG
#undef ER_COJOINROUTINESET_FAILED
#undef ER_INCRSAXSRCFILTER_NOT_RESTARTABLE
#undef ER_XMLRDR_NOT_BEFORE_STARTPARSE
#undef FALSE
#undef TRUE

using $CoroutineManager = ::com::sun::org::apache::xml::internal::dtm::ref::CoroutineManager;
using $IncrementalSAXSource = ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource;
using $IncrementalSAXSource_Filter$StopException = ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource_Filter$StopException;
using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $ThreadControllerWrapper = ::com::sun::org::apache::xml::internal::utils::ThreadControllerWrapper;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;
using $SAXParseException = ::org::xml::sax::SAXParseException;
using $XMLReader = ::org::xml::sax::XMLReader;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _IncrementalSAXSource_Filter_FieldInfo_[] = {
	{"DEBUG", "Z", nullptr, 0, $field(IncrementalSAXSource_Filter, DEBUG)},
	{"fCoroutineManager", "Lcom/sun/org/apache/xml/internal/dtm/ref/CoroutineManager;", nullptr, $PRIVATE, $field(IncrementalSAXSource_Filter, fCoroutineManager)},
	{"fControllerCoroutineID", "I", nullptr, $PRIVATE, $field(IncrementalSAXSource_Filter, fControllerCoroutineID)},
	{"fSourceCoroutineID", "I", nullptr, $PRIVATE, $field(IncrementalSAXSource_Filter, fSourceCoroutineID)},
	{"clientContentHandler", "Lorg/xml/sax/ContentHandler;", nullptr, $PRIVATE, $field(IncrementalSAXSource_Filter, clientContentHandler)},
	{"clientLexicalHandler", "Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PRIVATE, $field(IncrementalSAXSource_Filter, clientLexicalHandler)},
	{"clientDTDHandler", "Lorg/xml/sax/DTDHandler;", nullptr, $PRIVATE, $field(IncrementalSAXSource_Filter, clientDTDHandler)},
	{"clientErrorHandler", "Lorg/xml/sax/ErrorHandler;", nullptr, $PRIVATE, $field(IncrementalSAXSource_Filter, clientErrorHandler)},
	{"eventcounter", "I", nullptr, $PRIVATE, $field(IncrementalSAXSource_Filter, eventcounter)},
	{"frequency", "I", nullptr, $PRIVATE, $field(IncrementalSAXSource_Filter, frequency)},
	{"fNoMoreEvents", "Z", nullptr, $PRIVATE, $field(IncrementalSAXSource_Filter, fNoMoreEvents)},
	{"fXMLReader", "Lorg/xml/sax/XMLReader;", nullptr, $PRIVATE, $field(IncrementalSAXSource_Filter, fXMLReader)},
	{"fXMLReaderInputSource", "Lorg/xml/sax/InputSource;", nullptr, $PRIVATE, $field(IncrementalSAXSource_Filter, fXMLReaderInputSource)},
	{}
};

$MethodInfo _IncrementalSAXSource_Filter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(IncrementalSAXSource_Filter, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/CoroutineManager;I)V", nullptr, $PUBLIC, $method(IncrementalSAXSource_Filter, init$, void, $CoroutineManager*, int32_t)},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"co_entry_pause", "()V", nullptr, $PRIVATE, $method(IncrementalSAXSource_Filter, co_entry_pause, void), "org.xml.sax.SAXException"},
	{"co_yield", "(Z)V", nullptr, $PRIVATE, $method(IncrementalSAXSource_Filter, co_yield$, void, bool), "org.xml.sax.SAXException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"count_and_yield", "(Z)V", nullptr, $PROTECTED, $method(IncrementalSAXSource_Filter, count_and_yield, void, bool), "org.xml.sax.SAXException"},
	{"createIncrementalSAXSource", "(Lcom/sun/org/apache/xml/internal/dtm/ref/CoroutineManager;I)Lcom/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource;", nullptr, $PUBLIC | $STATIC, $staticMethod(IncrementalSAXSource_Filter, createIncrementalSAXSource, $IncrementalSAXSource*, $CoroutineManager*, int32_t)},
	{"deliverMoreNodes", "(Z)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, deliverMoreNodes, $Object*, bool)},
	{"endCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, endCDATA, void), "org.xml.sax.SAXException"},
	{"endDTD", "()V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, endDTD, void), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, endEntity, void, $String*), "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, endPrefixMapping, void, $String*), "org.xml.sax.SAXException"},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, fatalError, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"getControllerCoroutineID", "()I", nullptr, $PUBLIC, $method(IncrementalSAXSource_Filter, getControllerCoroutineID, int32_t)},
	{"getCoroutineManager", "()Lcom/sun/org/apache/xml/internal/dtm/ref/CoroutineManager;", nullptr, $PUBLIC, $method(IncrementalSAXSource_Filter, getCoroutineManager, $CoroutineManager*)},
	{"getSourceCoroutineID", "()I", nullptr, $PUBLIC, $method(IncrementalSAXSource_Filter, getSourceCoroutineID, int32_t)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"init", "(Lcom/sun/org/apache/xml/internal/dtm/ref/CoroutineManager;II)V", nullptr, $PUBLIC, $method(IncrementalSAXSource_Filter, init, void, $CoroutineManager*, int32_t, int32_t)},
	{"notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, notationDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, run, void)},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, setContentHandler, void, $ContentHandler*)},
	{"setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, setDTDHandler, void, $DTDHandler*)},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, setDocumentLocator, void, $Locator*)},
	{"setErrHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC, $method(IncrementalSAXSource_Filter, setErrHandler, void, $ErrorHandler*)},
	{"setLexicalHandler", "(Lorg/xml/sax/ext/LexicalHandler;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, setLexicalHandler, void, $LexicalHandler*)},
	{"setReturnFrequency", "(I)V", nullptr, $PUBLIC, $method(IncrementalSAXSource_Filter, setReturnFrequency, void, int32_t)},
	{"setXMLReader", "(Lorg/xml/sax/XMLReader;)V", nullptr, $PUBLIC, $method(IncrementalSAXSource_Filter, setXMLReader, void, $XMLReader*)},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, skippedEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, startCDATA, void), "org.xml.sax.SAXException"},
	{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, startDTD, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, startEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startParse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, startParse, void, $InputSource*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, startPrefixMapping, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, unparsedEntityDecl, void, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Filter, warning, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{}
};

$InnerClassInfo _IncrementalSAXSource_Filter_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource_Filter$StopException", "com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource_Filter", "StopException", 0},
	{}
};

$ClassInfo _IncrementalSAXSource_Filter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource_Filter",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource,org.xml.sax.ContentHandler,org.xml.sax.DTDHandler,org.xml.sax.ext.LexicalHandler,org.xml.sax.ErrorHandler,java.lang.Runnable",
	_IncrementalSAXSource_Filter_FieldInfo_,
	_IncrementalSAXSource_Filter_MethodInfo_,
	nullptr,
	nullptr,
	_IncrementalSAXSource_Filter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource_Filter$StopException"
};

$Object* allocate$IncrementalSAXSource_Filter($Class* clazz) {
	return $of($alloc(IncrementalSAXSource_Filter));
}

int32_t IncrementalSAXSource_Filter::hashCode() {
	 return this->$IncrementalSAXSource::hashCode();
}

bool IncrementalSAXSource_Filter::equals(Object$* arg0) {
	 return this->$IncrementalSAXSource::equals(arg0);
}

$Object* IncrementalSAXSource_Filter::clone() {
	 return this->$IncrementalSAXSource::clone();
}

$String* IncrementalSAXSource_Filter::toString() {
	 return this->$IncrementalSAXSource::toString();
}

void IncrementalSAXSource_Filter::finalize() {
	this->$IncrementalSAXSource::finalize();
}

void IncrementalSAXSource_Filter::init$() {
	this->DEBUG = false;
	$set(this, fCoroutineManager, nullptr);
	this->fControllerCoroutineID = -1;
	this->fSourceCoroutineID = -1;
	$set(this, clientContentHandler, nullptr);
	$set(this, clientLexicalHandler, nullptr);
	$set(this, clientDTDHandler, nullptr);
	$set(this, clientErrorHandler, nullptr);
	this->frequency = 5;
	this->fNoMoreEvents = false;
	$set(this, fXMLReader, nullptr);
	$set(this, fXMLReaderInputSource, nullptr);
	this->init($$new($CoroutineManager), -1, -1);
}

void IncrementalSAXSource_Filter::init$($CoroutineManager* co, int32_t controllerCoroutineID) {
	this->DEBUG = false;
	$set(this, fCoroutineManager, nullptr);
	this->fControllerCoroutineID = -1;
	this->fSourceCoroutineID = -1;
	$set(this, clientContentHandler, nullptr);
	$set(this, clientLexicalHandler, nullptr);
	$set(this, clientDTDHandler, nullptr);
	$set(this, clientErrorHandler, nullptr);
	this->frequency = 5;
	this->fNoMoreEvents = false;
	$set(this, fXMLReader, nullptr);
	$set(this, fXMLReaderInputSource, nullptr);
	this->init(co, controllerCoroutineID, -1);
}

$IncrementalSAXSource* IncrementalSAXSource_Filter::createIncrementalSAXSource($CoroutineManager* co, int32_t controllerCoroutineID) {
	$init(IncrementalSAXSource_Filter);
	return $new(IncrementalSAXSource_Filter, co, controllerCoroutineID);
}

void IncrementalSAXSource_Filter::init($CoroutineManager* co$renamed, int32_t controllerCoroutineID, int32_t sourceCoroutineID) {
	$useLocalCurrentObjectStackCache();
	$var($CoroutineManager, co, co$renamed);
	if (co == nullptr) {
		$assign(co, $new($CoroutineManager));
	}
	$set(this, fCoroutineManager, co);
	this->fControllerCoroutineID = $nc(co)->co_joinCoroutineSet(controllerCoroutineID);
	this->fSourceCoroutineID = co->co_joinCoroutineSet(sourceCoroutineID);
	if (this->fControllerCoroutineID == -1 || this->fSourceCoroutineID == -1) {
		$init($XMLErrorResources);
		$throwNew($RuntimeException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_COJOINROUTINESET_FAILED, nullptr)));
	}
	this->fNoMoreEvents = false;
	this->eventcounter = this->frequency;
}

void IncrementalSAXSource_Filter::setXMLReader($XMLReader* eventsource) {
	$set(this, fXMLReader, eventsource);
	$nc(eventsource)->setContentHandler(this);
	eventsource->setDTDHandler(this);
	eventsource->setErrorHandler(this);
	try {
		eventsource->setProperty("http://xml.org/sax/properties/lexical-handler"_s, this);
	} catch ($SAXNotRecognizedException& e) {
	} catch ($SAXNotSupportedException& e) {
	}
}

void IncrementalSAXSource_Filter::setContentHandler($ContentHandler* handler) {
	$set(this, clientContentHandler, handler);
}

void IncrementalSAXSource_Filter::setDTDHandler($DTDHandler* handler) {
	$set(this, clientDTDHandler, handler);
}

void IncrementalSAXSource_Filter::setLexicalHandler($LexicalHandler* handler) {
	$set(this, clientLexicalHandler, handler);
}

void IncrementalSAXSource_Filter::setErrHandler($ErrorHandler* handler) {
	$set(this, clientErrorHandler, handler);
}

void IncrementalSAXSource_Filter::setReturnFrequency(int32_t events) {
	if (events < 1) {
		events = 1;
	}
	this->frequency = (this->eventcounter = events);
}

void IncrementalSAXSource_Filter::characters($chars* ch, int32_t start, int32_t length) {
	if (--this->eventcounter <= 0) {
		co_yield$(true);
		this->eventcounter = this->frequency;
	}
	if (this->clientContentHandler != nullptr) {
		$nc(this->clientContentHandler)->characters(ch, start, length);
	}
}

void IncrementalSAXSource_Filter::endDocument() {
	if (this->clientContentHandler != nullptr) {
		$nc(this->clientContentHandler)->endDocument();
	}
	this->eventcounter = 0;
	co_yield$(false);
}

void IncrementalSAXSource_Filter::endElement($String* namespaceURI, $String* localName, $String* qName) {
	if (--this->eventcounter <= 0) {
		co_yield$(true);
		this->eventcounter = this->frequency;
	}
	if (this->clientContentHandler != nullptr) {
		$nc(this->clientContentHandler)->endElement(namespaceURI, localName, qName);
	}
}

void IncrementalSAXSource_Filter::endPrefixMapping($String* prefix) {
	if (--this->eventcounter <= 0) {
		co_yield$(true);
		this->eventcounter = this->frequency;
	}
	if (this->clientContentHandler != nullptr) {
		$nc(this->clientContentHandler)->endPrefixMapping(prefix);
	}
}

void IncrementalSAXSource_Filter::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	if (--this->eventcounter <= 0) {
		co_yield$(true);
		this->eventcounter = this->frequency;
	}
	if (this->clientContentHandler != nullptr) {
		$nc(this->clientContentHandler)->ignorableWhitespace(ch, start, length);
	}
}

void IncrementalSAXSource_Filter::processingInstruction($String* target, $String* data) {
	if (--this->eventcounter <= 0) {
		co_yield$(true);
		this->eventcounter = this->frequency;
	}
	if (this->clientContentHandler != nullptr) {
		$nc(this->clientContentHandler)->processingInstruction(target, data);
	}
}

void IncrementalSAXSource_Filter::setDocumentLocator($Locator* locator) {
	if (--this->eventcounter <= 0) {
		this->eventcounter = this->frequency;
	}
	if (this->clientContentHandler != nullptr) {
		$nc(this->clientContentHandler)->setDocumentLocator(locator);
	}
}

void IncrementalSAXSource_Filter::skippedEntity($String* name) {
	if (--this->eventcounter <= 0) {
		co_yield$(true);
		this->eventcounter = this->frequency;
	}
	if (this->clientContentHandler != nullptr) {
		$nc(this->clientContentHandler)->skippedEntity(name);
	}
}

void IncrementalSAXSource_Filter::startDocument() {
	co_entry_pause();
	if (--this->eventcounter <= 0) {
		co_yield$(true);
		this->eventcounter = this->frequency;
	}
	if (this->clientContentHandler != nullptr) {
		$nc(this->clientContentHandler)->startDocument();
	}
}

void IncrementalSAXSource_Filter::startElement($String* namespaceURI, $String* localName, $String* qName, $Attributes* atts) {
	if (--this->eventcounter <= 0) {
		co_yield$(true);
		this->eventcounter = this->frequency;
	}
	if (this->clientContentHandler != nullptr) {
		$nc(this->clientContentHandler)->startElement(namespaceURI, localName, qName, atts);
	}
}

void IncrementalSAXSource_Filter::startPrefixMapping($String* prefix, $String* uri) {
	if (--this->eventcounter <= 0) {
		co_yield$(true);
		this->eventcounter = this->frequency;
	}
	if (this->clientContentHandler != nullptr) {
		$nc(this->clientContentHandler)->startPrefixMapping(prefix, uri);
	}
}

void IncrementalSAXSource_Filter::comment($chars* ch, int32_t start, int32_t length) {
	if (nullptr != this->clientLexicalHandler) {
		$nc(this->clientLexicalHandler)->comment(ch, start, length);
	}
}

void IncrementalSAXSource_Filter::endCDATA() {
	if (nullptr != this->clientLexicalHandler) {
		$nc(this->clientLexicalHandler)->endCDATA();
	}
}

void IncrementalSAXSource_Filter::endDTD() {
	if (nullptr != this->clientLexicalHandler) {
		$nc(this->clientLexicalHandler)->endDTD();
	}
}

void IncrementalSAXSource_Filter::endEntity($String* name) {
	if (nullptr != this->clientLexicalHandler) {
		$nc(this->clientLexicalHandler)->endEntity(name);
	}
}

void IncrementalSAXSource_Filter::startCDATA() {
	if (nullptr != this->clientLexicalHandler) {
		$nc(this->clientLexicalHandler)->startCDATA();
	}
}

void IncrementalSAXSource_Filter::startDTD($String* name, $String* publicId, $String* systemId) {
	if (nullptr != this->clientLexicalHandler) {
		$nc(this->clientLexicalHandler)->startDTD(name, publicId, systemId);
	}
}

void IncrementalSAXSource_Filter::startEntity($String* name) {
	if (nullptr != this->clientLexicalHandler) {
		$nc(this->clientLexicalHandler)->startEntity(name);
	}
}

void IncrementalSAXSource_Filter::notationDecl($String* a, $String* b, $String* c) {
	if (nullptr != this->clientDTDHandler) {
		$nc(this->clientDTDHandler)->notationDecl(a, b, c);
	}
}

void IncrementalSAXSource_Filter::unparsedEntityDecl($String* a, $String* b, $String* c, $String* d) {
	if (nullptr != this->clientDTDHandler) {
		$nc(this->clientDTDHandler)->unparsedEntityDecl(a, b, c, d);
	}
}

void IncrementalSAXSource_Filter::error($SAXParseException* exception) {
	if (nullptr != this->clientErrorHandler) {
		$nc(this->clientErrorHandler)->error(exception);
	}
}

void IncrementalSAXSource_Filter::fatalError($SAXParseException* exception) {
	if (nullptr != this->clientErrorHandler) {
		$nc(this->clientErrorHandler)->error(exception);
	}
	this->eventcounter = 0;
	co_yield$(false);
}

void IncrementalSAXSource_Filter::warning($SAXParseException* exception) {
	if (nullptr != this->clientErrorHandler) {
		$nc(this->clientErrorHandler)->error(exception);
	}
}

int32_t IncrementalSAXSource_Filter::getSourceCoroutineID() {
	return this->fSourceCoroutineID;
}

int32_t IncrementalSAXSource_Filter::getControllerCoroutineID() {
	return this->fControllerCoroutineID;
}

$CoroutineManager* IncrementalSAXSource_Filter::getCoroutineManager() {
	return this->fCoroutineManager;
}

void IncrementalSAXSource_Filter::count_and_yield(bool moreExpected) {
	if (!moreExpected) {
		this->eventcounter = 0;
	}
	if (--this->eventcounter <= 0) {
		co_yield$(true);
		this->eventcounter = this->frequency;
	}
}

void IncrementalSAXSource_Filter::co_entry_pause() {
	if (this->fCoroutineManager == nullptr) {
		init(nullptr, -1, -1);
	}
	try {
		$var($Object, arg, $nc(this->fCoroutineManager)->co_entry_pause(this->fSourceCoroutineID));
		$init($Boolean);
		if ($equals(arg, $Boolean::FALSE)) {
			co_yield$(false);
		}
	} catch ($NoSuchMethodException& e) {
		if (this->DEBUG) {
			e->printStackTrace();
		}
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void IncrementalSAXSource_Filter::co_yield$(bool moreRemains) {
	if (this->fNoMoreEvents) {
		return;
	}
	try {
		$init($Boolean);
		$var($Object, arg, $Boolean::FALSE);
		if (moreRemains) {
			$assign(arg, $nc(this->fCoroutineManager)->co_resume($Boolean::TRUE, this->fSourceCoroutineID, this->fControllerCoroutineID));
		}
		if ($equals(arg, $Boolean::FALSE)) {
			this->fNoMoreEvents = true;
			if (this->fXMLReader != nullptr) {
				$throwNew($IncrementalSAXSource_Filter$StopException, this);
			}
			$nc(this->fCoroutineManager)->co_exit_to($Boolean::FALSE, this->fSourceCoroutineID, this->fControllerCoroutineID);
		}
	} catch ($NoSuchMethodException& e) {
		this->fNoMoreEvents = true;
		$nc(this->fCoroutineManager)->co_exit(this->fSourceCoroutineID);
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void IncrementalSAXSource_Filter::startParse($InputSource* source) {
	$useLocalCurrentObjectStackCache();
	if (this->fNoMoreEvents) {
		$init($XMLErrorResources);
		$throwNew($SAXException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, nullptr)));
	}
	if (this->fXMLReader == nullptr) {
		$init($XMLErrorResources);
		$throwNew($SAXException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_XMLRDR_NOT_BEFORE_STARTPARSE, nullptr)));
	}
	$set(this, fXMLReaderInputSource, source);
	$ThreadControllerWrapper::runThread(this, -1);
}

void IncrementalSAXSource_Filter::run() {
	$useLocalCurrentObjectStackCache();
	if (this->fXMLReader == nullptr) {
		return;
	}
	if (this->DEBUG) {
		$nc($System::out)->println("IncrementalSAXSource_Filter parse thread launched"_s);
	}
	$init($Boolean);
	$var($Object, arg, $Boolean::FALSE);
	try {
		$nc(this->fXMLReader)->parse(this->fXMLReaderInputSource);
	} catch ($IOException& ex) {
		$assign(arg, ex);
	} catch ($IncrementalSAXSource_Filter$StopException& ex) {
		if (this->DEBUG) {
			$nc($System::out)->println("Active IncrementalSAXSource_Filter normal stop exception"_s);
		}
	} catch ($SAXException& ex) {
		$var($Exception, inner, ex->getException());
		if ($instanceOf($IncrementalSAXSource_Filter$StopException, inner)) {
			if (this->DEBUG) {
				$nc($System::out)->println("Active IncrementalSAXSource_Filter normal stop exception"_s);
			}
		} else {
			if (this->DEBUG) {
				$nc($System::out)->println($$str({"Active IncrementalSAXSource_Filter UNEXPECTED SAX exception: "_s, inner}));
				$nc(inner)->printStackTrace();
			}
			$assign(arg, ex);
		}
	}
	$set(this, fXMLReader, nullptr);
	try {
		this->fNoMoreEvents = true;
		$nc(this->fCoroutineManager)->co_exit_to(arg, this->fSourceCoroutineID, this->fControllerCoroutineID);
	} catch ($NoSuchMethodException& e) {
		e->printStackTrace($System::err);
		$nc(this->fCoroutineManager)->co_exit(this->fSourceCoroutineID);
	}
}

$Object* IncrementalSAXSource_Filter::deliverMoreNodes(bool parsemore) {
	if (this->fNoMoreEvents) {
		$init($Boolean);
		return $of($Boolean::FALSE);
	}
	try {
		$init($Boolean);
		$var($Object, result, $nc(this->fCoroutineManager)->co_resume(parsemore ? $Boolean::TRUE : $Boolean::FALSE, this->fControllerCoroutineID, this->fSourceCoroutineID));
		if ($equals(result, $Boolean::FALSE)) {
			$nc(this->fCoroutineManager)->co_exit(this->fControllerCoroutineID);
		}
		return $of(result);
	} catch ($NoSuchMethodException& e) {
		return $of(e);
	}
	$shouldNotReachHere();
}

IncrementalSAXSource_Filter::IncrementalSAXSource_Filter() {
}

$Class* IncrementalSAXSource_Filter::load$($String* name, bool initialize) {
	$loadClass(IncrementalSAXSource_Filter, name, initialize, &_IncrementalSAXSource_Filter_ClassInfo_, allocate$IncrementalSAXSource_Filter);
	return class$;
}

$Class* IncrementalSAXSource_Filter::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com