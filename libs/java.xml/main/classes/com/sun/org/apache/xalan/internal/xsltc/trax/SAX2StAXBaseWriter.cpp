#include <com/sun/org/apache/xalan/internal/xsltc/trax/SAX2StAXBaseWriter.h>

#include <com/sun/org/apache/xalan/internal/xsltc/trax/SAX2StAXBaseWriter$SAXLocation.h>
#include <java/lang/StringBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLReporter.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/ext/Locator2.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

using $SAX2StAXBaseWriter$SAXLocation = ::com::sun::org::apache::xalan::internal::xsltc::trax::SAX2StAXBaseWriter$SAXLocation;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Location = ::javax::xml::stream::Location;
using $XMLReporter = ::javax::xml::stream::XMLReporter;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $Attributes = ::org::xml::sax::Attributes;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXParseException = ::org::xml::sax::SAXParseException;
using $Locator2 = ::org::xml::sax::ext::Locator2;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _SAX2StAXBaseWriter_FieldInfo_[] = {
	{"isCDATA", "Z", nullptr, $PROTECTED, $field(SAX2StAXBaseWriter, isCDATA)},
	{"CDATABuffer", "Ljava/lang/StringBuffer;", nullptr, $PROTECTED, $field(SAX2StAXBaseWriter, CDATABuffer)},
	{"namespaces", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PROTECTED, $field(SAX2StAXBaseWriter, namespaces)},
	{"docLocator", "Lorg/xml/sax/Locator;", nullptr, $PROTECTED, $field(SAX2StAXBaseWriter, docLocator)},
	{"reporter", "Ljavax/xml/stream/XMLReporter;", nullptr, $PROTECTED, $field(SAX2StAXBaseWriter, reporter)},
	{"xmlVersion", "Ljava/lang/String;", nullptr, 0, $field(SAX2StAXBaseWriter, xmlVersion)},
	{"encoding", "Ljava/lang/String;", nullptr, 0, $field(SAX2StAXBaseWriter, encoding)},
	{}
};

$MethodInfo _SAX2StAXBaseWriter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(SAX2StAXBaseWriter, init$, void)},
	{"<init>", "(Ljavax/xml/stream/XMLReporter;)V", nullptr, $PUBLIC, $method(SAX2StAXBaseWriter, init$, void, $XMLReporter*)},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"endCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, endCDATA, void), "org.xml.sax.SAXException"},
	{"endDTD", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, endDTD, void), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, endEntity, void, $String*), "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, endPrefixMapping, void, $String*), "org.xml.sax.SAXException"},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, fatalError, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"getCurrentLocation", "()Ljavax/xml/stream/Location;", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, getCurrentLocation, $Location*)},
	{"parseQName", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(SAX2StAXBaseWriter, parseQName, void, $String*, $StringArray*)},
	{"reportException", "(Ljava/lang/String;Lorg/xml/sax/SAXException;)V", nullptr, $PROTECTED, $virtualMethod(SAX2StAXBaseWriter, reportException, void, $String*, $SAXException*), "org.xml.sax.SAXException"},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, setDocumentLocator, void, $Locator*)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, setEncoding, void, $String*)},
	{"setXMLReporter", "(Ljavax/xml/stream/XMLReporter;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, setXMLReporter, void, $XMLReporter*)},
	{"setXmlVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, setXmlVersion, void, $String*)},
	{"startCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, startCDATA, void), "org.xml.sax.SAXException"},
	{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, startDTD, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, startEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, startPrefixMapping, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateVersionAndEncoding", "()V", nullptr, $PRIVATE, $method(SAX2StAXBaseWriter, updateVersionAndEncoding, void)},
	{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter, warning, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"writeStartDocument", "()V", nullptr, 0, $virtualMethod(SAX2StAXBaseWriter, writeStartDocument, void), "org.xml.sax.SAXException"},
	{}
};

$InnerClassInfo _SAX2StAXBaseWriter_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXBaseWriter$SAXLocation", "com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXBaseWriter", "SAXLocation", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SAX2StAXBaseWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXBaseWriter",
	"org.xml.sax.helpers.DefaultHandler",
	"org.xml.sax.ext.LexicalHandler",
	_SAX2StAXBaseWriter_FieldInfo_,
	_SAX2StAXBaseWriter_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2StAXBaseWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXBaseWriter$SAXLocation"
};

$Object* allocate$SAX2StAXBaseWriter($Class* clazz) {
	return $of($alloc(SAX2StAXBaseWriter));
}

int32_t SAX2StAXBaseWriter::hashCode() {
	 return this->$DefaultHandler::hashCode();
}

bool SAX2StAXBaseWriter::equals(Object$* arg0) {
	 return this->$DefaultHandler::equals(arg0);
}

$Object* SAX2StAXBaseWriter::clone() {
	 return this->$DefaultHandler::clone();
}

$String* SAX2StAXBaseWriter::toString() {
	 return this->$DefaultHandler::toString();
}

void SAX2StAXBaseWriter::finalize() {
	this->$DefaultHandler::finalize();
}

void SAX2StAXBaseWriter::init$() {
	$DefaultHandler::init$();
	$set(this, xmlVersion, nullptr);
	$set(this, encoding, nullptr);
}

void SAX2StAXBaseWriter::init$($XMLReporter* reporter) {
	$DefaultHandler::init$();
	$set(this, xmlVersion, nullptr);
	$set(this, encoding, nullptr);
	$set(this, reporter, reporter);
}

void SAX2StAXBaseWriter::setXMLReporter($XMLReporter* reporter) {
	$set(this, reporter, reporter);
}

void SAX2StAXBaseWriter::setDocumentLocator($Locator* locator) {
	$set(this, docLocator, locator);
}

void SAX2StAXBaseWriter::updateVersionAndEncoding() {
	if ($instanceOf($Locator2, this->docLocator)) {
		$var($Locator2, l2, $cast($Locator2, this->docLocator));
		$set(this, xmlVersion, $nc(l2)->getXMLVersion());
		$set(this, encoding, l2->getEncoding());
	}
}

void SAX2StAXBaseWriter::setXmlVersion($String* version) {
	$set(this, xmlVersion, version);
}

void SAX2StAXBaseWriter::setEncoding($String* encoding) {
	$set(this, encoding, encoding);
}

void SAX2StAXBaseWriter::writeStartDocument() {
	updateVersionAndEncoding();
}

$Location* SAX2StAXBaseWriter::getCurrentLocation() {
	if (this->docLocator != nullptr) {
		return $new($SAX2StAXBaseWriter$SAXLocation, this->docLocator);
	} else {
		return nullptr;
	}
}

void SAX2StAXBaseWriter::error($SAXParseException* e) {
	reportException("ERROR"_s, e);
}

void SAX2StAXBaseWriter::fatalError($SAXParseException* e) {
	reportException("FATAL"_s, e);
}

void SAX2StAXBaseWriter::warning($SAXParseException* e) {
	reportException("WARNING"_s, e);
}

void SAX2StAXBaseWriter::startDocument() {
	$set(this, namespaces, $new($ArrayList, 2));
}

void SAX2StAXBaseWriter::endDocument() {
	$set(this, namespaces, nullptr);
}

void SAX2StAXBaseWriter::startElement($String* uri, $String* localName, $String* qName, $Attributes* attributes) {
	$set(this, namespaces, nullptr);
}

void SAX2StAXBaseWriter::endElement($String* uri, $String* localName, $String* qName) {
	$set(this, namespaces, nullptr);
}

void SAX2StAXBaseWriter::startPrefixMapping($String* prefix$renamed, $String* uri) {
	$var($String, prefix, prefix$renamed);
	if (prefix == nullptr) {
		$assign(prefix, ""_s);
	} else if ($nc(prefix)->equals("xml"_s)) {
		return;
	}
	if (this->namespaces == nullptr) {
		$set(this, namespaces, $new($ArrayList, 2));
	}
	$nc(this->namespaces)->add(prefix);
	$nc(this->namespaces)->add(uri);
}

void SAX2StAXBaseWriter::endPrefixMapping($String* prefix) {
}

void SAX2StAXBaseWriter::startCDATA() {
	this->isCDATA = true;
	if (this->CDATABuffer == nullptr) {
		$set(this, CDATABuffer, $new($StringBuffer));
	} else {
		$nc(this->CDATABuffer)->setLength(0);
	}
}

void SAX2StAXBaseWriter::characters($chars* ch, int32_t start, int32_t length) {
	if (this->isCDATA) {
		$nc(this->CDATABuffer)->append(ch, start, length);
	}
}

void SAX2StAXBaseWriter::endCDATA() {
	this->isCDATA = false;
	$nc(this->CDATABuffer)->setLength(0);
}

void SAX2StAXBaseWriter::comment($chars* ch, int32_t start, int32_t length) {
}

void SAX2StAXBaseWriter::endDTD() {
}

void SAX2StAXBaseWriter::endEntity($String* name) {
}

void SAX2StAXBaseWriter::startDTD($String* name, $String* publicId, $String* systemId) {
}

void SAX2StAXBaseWriter::startEntity($String* name) {
}

void SAX2StAXBaseWriter::reportException($String* type, $SAXException* e) {
	$useLocalCurrentObjectStackCache();
	if (this->reporter != nullptr) {
		try {
			$var($String, var$0, $nc(e)->getMessage());
			$var($String, var$1, type);
			$var($Object, var$2, $of(e));
			$nc(this->reporter)->report(var$0, var$1, var$2, $(getCurrentLocation()));
		} catch ($XMLStreamException& e1) {
			$throwNew($SAXException, static_cast<$Exception*>(e1));
		}
	}
}

void SAX2StAXBaseWriter::parseQName($String* qName, $StringArray* results) {
	$init(SAX2StAXBaseWriter);
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, nullptr);
	$var($String, local, nullptr);
	int32_t idx = $nc(qName)->indexOf((int32_t)u':');
	if (idx >= 0) {
		$assign(prefix, qName->substring(0, idx));
		$assign(local, qName->substring(idx + 1));
	} else {
		$assign(prefix, ""_s);
		$assign(local, qName);
	}
	$nc(results)->set(0, prefix);
	results->set(1, local);
}

SAX2StAXBaseWriter::SAX2StAXBaseWriter() {
}

$Class* SAX2StAXBaseWriter::load$($String* name, bool initialize) {
	$loadClass(SAX2StAXBaseWriter, name, initialize, &_SAX2StAXBaseWriter_ClassInfo_, allocate$SAX2StAXBaseWriter);
	return class$;
}

$Class* SAX2StAXBaseWriter::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com