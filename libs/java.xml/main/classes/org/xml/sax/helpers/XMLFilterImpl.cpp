#include <org/xml/sax/helpers/XMLFilterImpl.h>

#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/XMLFilter.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $Locator = ::org::xml::sax::Locator;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXParseException = ::org::xml::sax::SAXParseException;
using $XMLFilter = ::org::xml::sax::XMLFilter;
using $XMLReader = ::org::xml::sax::XMLReader;

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

$FieldInfo _XMLFilterImpl_FieldInfo_[] = {
	{"parent", "Lorg/xml/sax/XMLReader;", nullptr, $PRIVATE, $field(XMLFilterImpl, parent)},
	{"locator", "Lorg/xml/sax/Locator;", nullptr, $PRIVATE, $field(XMLFilterImpl, locator)},
	{"entityResolver", "Lorg/xml/sax/EntityResolver;", nullptr, $PRIVATE, $field(XMLFilterImpl, entityResolver)},
	{"dtdHandler", "Lorg/xml/sax/DTDHandler;", nullptr, $PRIVATE, $field(XMLFilterImpl, dtdHandler)},
	{"contentHandler", "Lorg/xml/sax/ContentHandler;", nullptr, $PRIVATE, $field(XMLFilterImpl, contentHandler)},
	{"errorHandler", "Lorg/xml/sax/ErrorHandler;", nullptr, $PRIVATE, $field(XMLFilterImpl, errorHandler)},
	{}
};

$MethodInfo _XMLFilterImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLFilterImpl, init$, void)},
	{"<init>", "(Lorg/xml/sax/XMLReader;)V", nullptr, $PUBLIC, $method(XMLFilterImpl, init$, void, $XMLReader*)},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, endPrefixMapping, void, $String*), "org.xml.sax.SAXException"},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, fatalError, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, getContentHandler, $ContentHandler*)},
	{"getDTDHandler", "()Lorg/xml/sax/DTDHandler;", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, getDTDHandler, $DTDHandler*)},
	{"getEntityResolver", "()Lorg/xml/sax/EntityResolver;", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, getEntityResolver, $EntityResolver*)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, getErrorHandler, $ErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, getFeature, bool, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getParent", "()Lorg/xml/sax/XMLReader;", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, getParent, $XMLReader*)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, getProperty, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, notationDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"parse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, parse, void, $InputSource*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, parse, void, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, resolveEntity, $InputSource*, $String*, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, setContentHandler, void, $ContentHandler*)},
	{"setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, setDTDHandler, void, $DTDHandler*)},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, setDocumentLocator, void, $Locator*)},
	{"setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, setEntityResolver, void, $EntityResolver*)},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, setErrorHandler, void, $ErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, setFeature, void, $String*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setParent", "(Lorg/xml/sax/XMLReader;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, setParent, void, $XMLReader*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setupParse", "()V", nullptr, $PRIVATE, $method(XMLFilterImpl, setupParse, void)},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, skippedEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, startPrefixMapping, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, unparsedEntityDecl, void, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(XMLFilterImpl, warning, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _XMLFilterImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.xml.sax.helpers.XMLFilterImpl",
	"java.lang.Object",
	"org.xml.sax.XMLFilter,org.xml.sax.EntityResolver,org.xml.sax.DTDHandler,org.xml.sax.ContentHandler,org.xml.sax.ErrorHandler",
	_XMLFilterImpl_FieldInfo_,
	_XMLFilterImpl_MethodInfo_
};

$Object* allocate$XMLFilterImpl($Class* clazz) {
	return $of($alloc(XMLFilterImpl));
}

int32_t XMLFilterImpl::hashCode() {
	 return this->$XMLFilter::hashCode();
}

bool XMLFilterImpl::equals(Object$* arg0) {
	 return this->$XMLFilter::equals(arg0);
}

$Object* XMLFilterImpl::clone() {
	 return this->$XMLFilter::clone();
}

$String* XMLFilterImpl::toString() {
	 return this->$XMLFilter::toString();
}

void XMLFilterImpl::finalize() {
	this->$XMLFilter::finalize();
}

void XMLFilterImpl::init$() {
	$set(this, parent, nullptr);
	$set(this, locator, nullptr);
	$set(this, entityResolver, nullptr);
	$set(this, dtdHandler, nullptr);
	$set(this, contentHandler, nullptr);
	$set(this, errorHandler, nullptr);
}

void XMLFilterImpl::init$($XMLReader* parent) {
	$set(this, parent, nullptr);
	$set(this, locator, nullptr);
	$set(this, entityResolver, nullptr);
	$set(this, dtdHandler, nullptr);
	$set(this, contentHandler, nullptr);
	$set(this, errorHandler, nullptr);
	setParent(parent);
}

void XMLFilterImpl::setParent($XMLReader* parent) {
	$set(this, parent, parent);
}

$XMLReader* XMLFilterImpl::getParent() {
	return this->parent;
}

void XMLFilterImpl::setFeature($String* name, bool value) {
	if (this->parent != nullptr) {
		$nc(this->parent)->setFeature(name, value);
	} else {
		$throwNew($SAXNotRecognizedException, $$str({"Feature: "_s, name}));
	}
}

bool XMLFilterImpl::getFeature($String* name) {
	if (this->parent != nullptr) {
		return $nc(this->parent)->getFeature(name);
	} else {
		$throwNew($SAXNotRecognizedException, $$str({"Feature: "_s, name}));
	}
}

void XMLFilterImpl::setProperty($String* name, Object$* value) {
	if (this->parent != nullptr) {
		$nc(this->parent)->setProperty(name, value);
	} else {
		$throwNew($SAXNotRecognizedException, $$str({"Property: "_s, name}));
	}
}

$Object* XMLFilterImpl::getProperty($String* name) {
	if (this->parent != nullptr) {
		return $of($nc(this->parent)->getProperty(name));
	} else {
		$throwNew($SAXNotRecognizedException, $$str({"Property: "_s, name}));
	}
}

void XMLFilterImpl::setEntityResolver($EntityResolver* resolver) {
	$set(this, entityResolver, resolver);
}

$EntityResolver* XMLFilterImpl::getEntityResolver() {
	return this->entityResolver;
}

void XMLFilterImpl::setDTDHandler($DTDHandler* handler) {
	$set(this, dtdHandler, handler);
}

$DTDHandler* XMLFilterImpl::getDTDHandler() {
	return this->dtdHandler;
}

void XMLFilterImpl::setContentHandler($ContentHandler* handler) {
	$set(this, contentHandler, handler);
}

$ContentHandler* XMLFilterImpl::getContentHandler() {
	return this->contentHandler;
}

void XMLFilterImpl::setErrorHandler($ErrorHandler* handler) {
	$set(this, errorHandler, handler);
}

$ErrorHandler* XMLFilterImpl::getErrorHandler() {
	return this->errorHandler;
}

void XMLFilterImpl::parse($InputSource* input) {
	setupParse();
	$nc(this->parent)->parse(input);
}

void XMLFilterImpl::parse($String* systemId) {
	parse($$new($InputSource, systemId));
}

$InputSource* XMLFilterImpl::resolveEntity($String* publicId, $String* systemId) {
	if (this->entityResolver != nullptr) {
		return $nc(this->entityResolver)->resolveEntity(publicId, systemId);
	} else {
		return nullptr;
	}
}

void XMLFilterImpl::notationDecl($String* name, $String* publicId, $String* systemId) {
	if (this->dtdHandler != nullptr) {
		$nc(this->dtdHandler)->notationDecl(name, publicId, systemId);
	}
}

void XMLFilterImpl::unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) {
	if (this->dtdHandler != nullptr) {
		$nc(this->dtdHandler)->unparsedEntityDecl(name, publicId, systemId, notationName);
	}
}

void XMLFilterImpl::setDocumentLocator($Locator* locator) {
	$set(this, locator, locator);
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->setDocumentLocator(locator);
	}
}

void XMLFilterImpl::startDocument() {
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->startDocument();
	}
}

void XMLFilterImpl::endDocument() {
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->endDocument();
	}
}

void XMLFilterImpl::startPrefixMapping($String* prefix, $String* uri) {
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->startPrefixMapping(prefix, uri);
	}
}

void XMLFilterImpl::endPrefixMapping($String* prefix) {
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->endPrefixMapping(prefix);
	}
}

void XMLFilterImpl::startElement($String* uri, $String* localName, $String* qName, $Attributes* atts) {
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->startElement(uri, localName, qName, atts);
	}
}

void XMLFilterImpl::endElement($String* uri, $String* localName, $String* qName) {
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->endElement(uri, localName, qName);
	}
}

void XMLFilterImpl::characters($chars* ch, int32_t start, int32_t length) {
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->characters(ch, start, length);
	}
}

void XMLFilterImpl::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->ignorableWhitespace(ch, start, length);
	}
}

void XMLFilterImpl::processingInstruction($String* target, $String* data) {
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->processingInstruction(target, data);
	}
}

void XMLFilterImpl::skippedEntity($String* name) {
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->skippedEntity(name);
	}
}

void XMLFilterImpl::warning($SAXParseException* e) {
	if (this->errorHandler != nullptr) {
		$nc(this->errorHandler)->warning(e);
	}
}

void XMLFilterImpl::error($SAXParseException* e) {
	if (this->errorHandler != nullptr) {
		$nc(this->errorHandler)->error(e);
	}
}

void XMLFilterImpl::fatalError($SAXParseException* e) {
	if (this->errorHandler != nullptr) {
		$nc(this->errorHandler)->fatalError(e);
	}
}

void XMLFilterImpl::setupParse() {
	if (this->parent == nullptr) {
		$throwNew($NullPointerException, "No parent for filter"_s);
	}
	$nc(this->parent)->setEntityResolver(this);
	$nc(this->parent)->setDTDHandler(this);
	$nc(this->parent)->setContentHandler(this);
	$nc(this->parent)->setErrorHandler(this);
}

XMLFilterImpl::XMLFilterImpl() {
}

$Class* XMLFilterImpl::load$($String* name, bool initialize) {
	$loadClass(XMLFilterImpl, name, initialize, &_XMLFilterImpl_ClassInfo_, allocate$XMLFilterImpl);
	return class$;
}

$Class* XMLFilterImpl::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org