#include <org/xml/sax/helpers/XMLReaderAdapter.h>

#include <java/util/Locale.h>
#include <org/xml/sax/AttributeList.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/DocumentHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/Parser.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/helpers/XMLReaderAdapter$AttributesAdapter.h>
#include <org/xml/sax/helpers/XMLReaderFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Locale = ::java::util::Locale;
using $AttributeList = ::org::xml::sax::AttributeList;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $DocumentHandler = ::org::xml::sax::DocumentHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $Locator = ::org::xml::sax::Locator;
using $Parser = ::org::xml::sax::Parser;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;
using $XMLReader = ::org::xml::sax::XMLReader;
using $XMLReaderAdapter$AttributesAdapter = ::org::xml::sax::helpers::XMLReaderAdapter$AttributesAdapter;
using $XMLReaderFactory = ::org::xml::sax::helpers::XMLReaderFactory;

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

$FieldInfo _XMLReaderAdapter_FieldInfo_[] = {
	{"xmlReader", "Lorg/xml/sax/XMLReader;", nullptr, 0, $field(XMLReaderAdapter, xmlReader)},
	{"documentHandler", "Lorg/xml/sax/DocumentHandler;", nullptr, 0, $field(XMLReaderAdapter, documentHandler)},
	{"qAtts", "Lorg/xml/sax/helpers/XMLReaderAdapter$AttributesAdapter;", nullptr, 0, $field(XMLReaderAdapter, qAtts)},
	{}
};

$MethodInfo _XMLReaderAdapter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLReaderAdapter, init$, void), "org.xml.sax.SAXException"},
	{"<init>", "(Lorg/xml/sax/XMLReader;)V", nullptr, $PUBLIC, $method(XMLReaderAdapter, init$, void, $XMLReader*)},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, endPrefixMapping, void, $String*)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, parse, void, $String*), "java.io.IOException,org.xml.sax.SAXException"},
	{"parse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, parse, void, $InputSource*), "java.io.IOException,org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, setDTDHandler, void, $DTDHandler*)},
	{"setDocumentHandler", "(Lorg/xml/sax/DocumentHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, setDocumentHandler, void, $DocumentHandler*)},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, setDocumentLocator, void, $Locator*)},
	{"setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, setEntityResolver, void, $EntityResolver*)},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, setErrorHandler, void, $ErrorHandler*)},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, setLocale, void, $Locale*), "org.xml.sax.SAXException"},
	{"setup", "(Lorg/xml/sax/XMLReader;)V", nullptr, $PRIVATE, $method(XMLReaderAdapter, setup, void, $XMLReader*)},
	{"setupXMLReader", "()V", nullptr, $PRIVATE, $method(XMLReaderAdapter, setupXMLReader, void), "org.xml.sax.SAXException"},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, skippedEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter, startPrefixMapping, void, $String*, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XMLReaderAdapter_InnerClassesInfo_[] = {
	{"org.xml.sax.helpers.XMLReaderAdapter$AttributesAdapter", "org.xml.sax.helpers.XMLReaderAdapter", "AttributesAdapter", $FINAL},
	{}
};

$ClassInfo _XMLReaderAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.xml.sax.helpers.XMLReaderAdapter",
	"java.lang.Object",
	"org.xml.sax.Parser,org.xml.sax.ContentHandler",
	_XMLReaderAdapter_FieldInfo_,
	_XMLReaderAdapter_MethodInfo_,
	nullptr,
	nullptr,
	_XMLReaderAdapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"org.xml.sax.helpers.XMLReaderAdapter$AttributesAdapter"
};

$Object* allocate$XMLReaderAdapter($Class* clazz) {
	return $of($alloc(XMLReaderAdapter));
}

int32_t XMLReaderAdapter::hashCode() {
	 return this->$Parser::hashCode();
}

bool XMLReaderAdapter::equals(Object$* arg0) {
	 return this->$Parser::equals(arg0);
}

$Object* XMLReaderAdapter::clone() {
	 return this->$Parser::clone();
}

$String* XMLReaderAdapter::toString() {
	 return this->$Parser::toString();
}

void XMLReaderAdapter::finalize() {
	this->$Parser::finalize();
}

void XMLReaderAdapter::init$() {
	setup($($XMLReaderFactory::createXMLReader()));
}

void XMLReaderAdapter::init$($XMLReader* xmlReader) {
	setup(xmlReader);
}

void XMLReaderAdapter::setup($XMLReader* xmlReader) {
	if (xmlReader == nullptr) {
		$throwNew($NullPointerException, "XMLReader must not be null"_s);
	}
	$set(this, xmlReader, xmlReader);
	$set(this, qAtts, $new($XMLReaderAdapter$AttributesAdapter, this));
}

void XMLReaderAdapter::setLocale($Locale* locale) {
	$throwNew($SAXNotSupportedException, "setLocale not supported"_s);
}

void XMLReaderAdapter::setEntityResolver($EntityResolver* resolver) {
	$nc(this->xmlReader)->setEntityResolver(resolver);
}

void XMLReaderAdapter::setDTDHandler($DTDHandler* handler) {
	$nc(this->xmlReader)->setDTDHandler(handler);
}

void XMLReaderAdapter::setDocumentHandler($DocumentHandler* handler) {
	$set(this, documentHandler, handler);
}

void XMLReaderAdapter::setErrorHandler($ErrorHandler* handler) {
	$nc(this->xmlReader)->setErrorHandler(handler);
}

void XMLReaderAdapter::parse($String* systemId) {
	parse($$new($InputSource, systemId));
}

void XMLReaderAdapter::parse($InputSource* input) {
	setupXMLReader();
	$nc(this->xmlReader)->parse(input);
}

void XMLReaderAdapter::setupXMLReader() {
	$nc(this->xmlReader)->setFeature("http://xml.org/sax/features/namespace-prefixes"_s, true);
	try {
		$nc(this->xmlReader)->setFeature("http://xml.org/sax/features/namespaces"_s, false);
	} catch ($SAXException& e) {
	}
	$nc(this->xmlReader)->setContentHandler(this);
}

void XMLReaderAdapter::setDocumentLocator($Locator* locator) {
	if (this->documentHandler != nullptr) {
		$nc(this->documentHandler)->setDocumentLocator(locator);
	}
}

void XMLReaderAdapter::startDocument() {
	if (this->documentHandler != nullptr) {
		$nc(this->documentHandler)->startDocument();
	}
}

void XMLReaderAdapter::endDocument() {
	if (this->documentHandler != nullptr) {
		$nc(this->documentHandler)->endDocument();
	}
}

void XMLReaderAdapter::startPrefixMapping($String* prefix, $String* uri) {
}

void XMLReaderAdapter::endPrefixMapping($String* prefix) {
}

void XMLReaderAdapter::startElement($String* uri, $String* localName, $String* qName, $Attributes* atts) {
	if (this->documentHandler != nullptr) {
		$nc(this->qAtts)->setAttributes(atts);
		$nc(this->documentHandler)->startElement(qName, this->qAtts);
	}
}

void XMLReaderAdapter::endElement($String* uri, $String* localName, $String* qName) {
	if (this->documentHandler != nullptr) {
		$nc(this->documentHandler)->endElement(qName);
	}
}

void XMLReaderAdapter::characters($chars* ch, int32_t start, int32_t length) {
	if (this->documentHandler != nullptr) {
		$nc(this->documentHandler)->characters(ch, start, length);
	}
}

void XMLReaderAdapter::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	if (this->documentHandler != nullptr) {
		$nc(this->documentHandler)->ignorableWhitespace(ch, start, length);
	}
}

void XMLReaderAdapter::processingInstruction($String* target, $String* data) {
	if (this->documentHandler != nullptr) {
		$nc(this->documentHandler)->processingInstruction(target, data);
	}
}

void XMLReaderAdapter::skippedEntity($String* name) {
}

XMLReaderAdapter::XMLReaderAdapter() {
}

$Class* XMLReaderAdapter::load$($String* name, bool initialize) {
	$loadClass(XMLReaderAdapter, name, initialize, &_XMLReaderAdapter_ClassInfo_, allocate$XMLReaderAdapter);
	return class$;
}

$Class* XMLReaderAdapter::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org