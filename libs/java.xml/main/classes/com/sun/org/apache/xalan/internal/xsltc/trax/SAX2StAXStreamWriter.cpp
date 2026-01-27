#include <com/sun/org/apache/xalan/internal/xsltc/trax/SAX2StAXStreamWriter.h>

#include <com/sun/org/apache/xalan/internal/xsltc/trax/SAX2StAXBaseWriter.h>
#include <java/lang/StringBuffer.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/stream/XMLStreamWriter.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

using $SAX2StAXBaseWriter = ::com::sun::org::apache::xalan::internal::xsltc::trax::SAX2StAXBaseWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $XMLStreamWriter = ::javax::xml::stream::XMLStreamWriter;
using $Attributes = ::org::xml::sax::Attributes;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _SAX2StAXStreamWriter_FieldInfo_[] = {
	{"writer", "Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PRIVATE, $field(SAX2StAXStreamWriter, writer)},
	{"needToCallStartDocument", "Z", nullptr, $PRIVATE, $field(SAX2StAXStreamWriter, needToCallStartDocument)},
	{}
};

$MethodInfo _SAX2StAXStreamWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SAX2StAXStreamWriter, init$, void)},
	{"<init>", "(Ljavax/xml/stream/XMLStreamWriter;)V", nullptr, $PUBLIC, $method(SAX2StAXStreamWriter, init$, void, $XMLStreamWriter*)},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXStreamWriter, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXStreamWriter, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"endCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXStreamWriter, endCDATA, void), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXStreamWriter, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXStreamWriter, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"getStreamWriter", "()Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PUBLIC, $virtualMethod(SAX2StAXStreamWriter, getStreamWriter, $XMLStreamWriter*)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXStreamWriter, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXStreamWriter, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"setStreamWriter", "(Ljavax/xml/stream/XMLStreamWriter;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXStreamWriter, setStreamWriter, void, $XMLStreamWriter*)},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXStreamWriter, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXStreamWriter, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"writeStartDocument", "()V", nullptr, 0, $virtualMethod(SAX2StAXStreamWriter, writeStartDocument, void), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _SAX2StAXStreamWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXStreamWriter",
	"com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXBaseWriter",
	nullptr,
	_SAX2StAXStreamWriter_FieldInfo_,
	_SAX2StAXStreamWriter_MethodInfo_
};

$Object* allocate$SAX2StAXStreamWriter($Class* clazz) {
	return $of($alloc(SAX2StAXStreamWriter));
}

void SAX2StAXStreamWriter::init$() {
	$SAX2StAXBaseWriter::init$();
	this->needToCallStartDocument = false;
}

void SAX2StAXStreamWriter::init$($XMLStreamWriter* writer) {
	$SAX2StAXBaseWriter::init$();
	this->needToCallStartDocument = false;
	$set(this, writer, writer);
}

$XMLStreamWriter* SAX2StAXStreamWriter::getStreamWriter() {
	return this->writer;
}

void SAX2StAXStreamWriter::setStreamWriter($XMLStreamWriter* writer) {
	$set(this, writer, writer);
}

void SAX2StAXStreamWriter::startDocument() {
	$SAX2StAXBaseWriter::startDocument();
	this->needToCallStartDocument = true;
}

void SAX2StAXStreamWriter::endDocument() {
	try {
		$nc(this->writer)->writeEndDocument();
	} catch ($XMLStreamException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
	$SAX2StAXBaseWriter::endDocument();
}

void SAX2StAXStreamWriter::startElement($String* uri, $String* localName, $String* qName, $Attributes* attributes) {
	$useLocalCurrentObjectStackCache();
	if (this->needToCallStartDocument) {
		writeStartDocument();
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($StringArray, qname, $new($StringArray, {
					($String*)nullptr,
					($String*)nullptr
				}));
				parseQName(qName, qname);
				$nc(this->writer)->writeStartElement(qName);
				{
					int32_t i = 0;
					int32_t s = $nc(attributes)->getLength();
					for (; i < s; ++i) {
						parseQName($(attributes->getQName(i)), qname);
						$var($String, attrPrefix, qname->get(0));
						$var($String, attrLocal, qname->get(1));
						$var($String, attrQName, attributes->getQName(i));
						$var($String, attrValue, attributes->getValue(i));
						$var($String, attrURI, attributes->getURI(i));
						bool var$1 = "xmlns"_s->equals(attrPrefix);
						if (var$1 || "xmlns"_s->equals(attrQName)) {
							if ($nc(attrLocal)->length() == 0) {
								$nc(this->writer)->setDefaultNamespace(attrValue);
							} else {
								$nc(this->writer)->setPrefix(attrLocal, attrValue);
							}
							$nc(this->writer)->writeNamespace(attrLocal, attrValue);
						} else if ($nc(attrPrefix)->length() > 0) {
							$nc(this->writer)->writeAttribute(attrPrefix, attrURI, attrLocal, attrValue);
						} else {
							$nc(this->writer)->writeAttribute(attrQName, attrValue);
						}
					}
				}
			} catch ($XMLStreamException& e) {
				$throwNew($SAXException, static_cast<$Exception*>(e));
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$SAX2StAXBaseWriter::startElement(uri, localName, qName, attributes);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SAX2StAXStreamWriter::endElement($String* uri, $String* localName, $String* qName) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->writer)->writeEndElement();
			} catch ($XMLStreamException& e) {
				$throwNew($SAXException, static_cast<$Exception*>(e));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SAX2StAXBaseWriter::endElement(uri, localName, qName);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SAX2StAXStreamWriter::comment($chars* ch, int32_t start, int32_t length) {
	if (this->needToCallStartDocument) {
		writeStartDocument();
	}
	$SAX2StAXBaseWriter::comment(ch, start, length);
	try {
		$nc(this->writer)->writeComment($$new($String, ch, start, length));
	} catch ($XMLStreamException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void SAX2StAXStreamWriter::characters($chars* ch, int32_t start, int32_t length) {
	$SAX2StAXBaseWriter::characters(ch, start, length);
	try {
		if (!this->isCDATA) {
			$nc(this->writer)->writeCharacters(ch, start, length);
		}
	} catch ($XMLStreamException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void SAX2StAXStreamWriter::endCDATA() {
	try {
		$nc(this->writer)->writeCData($($nc(this->CDATABuffer)->toString()));
	} catch ($XMLStreamException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
	$SAX2StAXBaseWriter::endCDATA();
}

void SAX2StAXStreamWriter::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	$SAX2StAXBaseWriter::ignorableWhitespace(ch, start, length);
	try {
		$nc(this->writer)->writeCharacters(ch, start, length);
	} catch ($XMLStreamException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void SAX2StAXStreamWriter::processingInstruction($String* target, $String* data) {
	$SAX2StAXBaseWriter::processingInstruction(target, data);
	try {
		$nc(this->writer)->writeProcessingInstruction(target, data);
	} catch ($XMLStreamException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void SAX2StAXStreamWriter::writeStartDocument() {
	$SAX2StAXBaseWriter::writeStartDocument();
	try {
		$nc(this->writer)->writeStartDocument(this->xmlVersion);
	} catch ($XMLStreamException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
	this->needToCallStartDocument = false;
}

SAX2StAXStreamWriter::SAX2StAXStreamWriter() {
}

$Class* SAX2StAXStreamWriter::load$($String* name, bool initialize) {
	$loadClass(SAX2StAXStreamWriter, name, initialize, &_SAX2StAXStreamWriter_ClassInfo_, allocate$SAX2StAXStreamWriter);
	return class$;
}

$Class* SAX2StAXStreamWriter::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com