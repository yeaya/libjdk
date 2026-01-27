#include <com/sun/org/apache/xalan/internal/xsltc/trax/SAX2StAXEventWriter.h>

#include <com/sun/org/apache/xalan/internal/xsltc/trax/SAX2StAXBaseWriter.h>
#include <java/lang/StringBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLEventFactory.h>
#include <javax/xml/stream/XMLEventWriter.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/stream/events/Attribute.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/Comment.h>
#include <javax/xml/stream/events/EndDocument.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/Namespace.h>
#include <javax/xml/stream/events/ProcessingInstruction.h>
#include <javax/xml/stream/events/StartDocument.h>
#include <javax/xml/stream/events/StartElement.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

#undef EMPTY_LIST

using $CollectionArray = $Array<::java::util::Collection>;
using $SAX2StAXBaseWriter = ::com::sun::org::apache::xalan::internal::xsltc::trax::SAX2StAXBaseWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $XMLEventFactory = ::javax::xml::stream::XMLEventFactory;
using $XMLEventWriter = ::javax::xml::stream::XMLEventWriter;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $Attribute = ::javax::xml::stream::events::Attribute;
using $Namespace = ::javax::xml::stream::events::Namespace;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;
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

$FieldInfo _SAX2StAXEventWriter_FieldInfo_[] = {
	{"writer", "Ljavax/xml/stream/XMLEventWriter;", nullptr, $PRIVATE, $field(SAX2StAXEventWriter, writer)},
	{"eventFactory", "Ljavax/xml/stream/XMLEventFactory;", nullptr, $PRIVATE, $field(SAX2StAXEventWriter, eventFactory)},
	{"namespaceStack", "Ljava/util/List;", "Ljava/util/List<Ljava/util/Collection<Ljavax/xml/stream/events/Namespace;>;>;", $PRIVATE, $field(SAX2StAXEventWriter, namespaceStack)},
	{"needToCallStartDocument", "Z", nullptr, $PRIVATE, $field(SAX2StAXEventWriter, needToCallStartDocument)},
	{}
};

$MethodInfo _SAX2StAXEventWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SAX2StAXEventWriter, init$, void)},
	{"<init>", "(Ljavax/xml/stream/XMLEventWriter;)V", nullptr, $PUBLIC, $method(SAX2StAXEventWriter, init$, void, $XMLEventWriter*)},
	{"<init>", "(Ljavax/xml/stream/XMLEventWriter;Ljavax/xml/stream/XMLEventFactory;)V", nullptr, $PUBLIC, $method(SAX2StAXEventWriter, init$, void, $XMLEventWriter*, $XMLEventFactory*)},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXEventWriter, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXEventWriter, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"createNamespace", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/Namespace;", nullptr, $PROTECTED, $virtualMethod(SAX2StAXEventWriter, createNamespace, $Namespace*, $String*, $String*)},
	{"createStartEvents", "(Lorg/xml/sax/Attributes;[Ljava/util/Collection;)V", "(Lorg/xml/sax/Attributes;[Ljava/util/Collection<Ljavax/xml/stream/events/Attribute;>;)V", $PROTECTED, $virtualMethod(SAX2StAXEventWriter, createStartEvents, void, $Attributes*, $CollectionArray*)},
	{"endCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXEventWriter, endCDATA, void), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXEventWriter, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXEventWriter, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"getEventFactory", "()Ljavax/xml/stream/XMLEventFactory;", nullptr, $PUBLIC, $virtualMethod(SAX2StAXEventWriter, getEventFactory, $XMLEventFactory*)},
	{"getEventWriter", "()Ljavax/xml/stream/XMLEventWriter;", nullptr, $PUBLIC, $virtualMethod(SAX2StAXEventWriter, getEventWriter, $XMLEventWriter*)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXEventWriter, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXEventWriter, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"setEventFactory", "(Ljavax/xml/stream/XMLEventFactory;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXEventWriter, setEventFactory, void, $XMLEventFactory*)},
	{"setEventWriter", "(Ljavax/xml/stream/XMLEventWriter;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXEventWriter, setEventWriter, void, $XMLEventWriter*)},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXEventWriter, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(SAX2StAXEventWriter, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"writeStartDocument", "()V", nullptr, 0, $virtualMethod(SAX2StAXEventWriter, writeStartDocument, void), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _SAX2StAXEventWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXEventWriter",
	"com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXBaseWriter",
	nullptr,
	_SAX2StAXEventWriter_FieldInfo_,
	_SAX2StAXEventWriter_MethodInfo_
};

$Object* allocate$SAX2StAXEventWriter($Class* clazz) {
	return $of($alloc(SAX2StAXEventWriter));
}

void SAX2StAXEventWriter::init$() {
	$SAX2StAXBaseWriter::init$();
	$set(this, namespaceStack, $new($ArrayList));
	this->needToCallStartDocument = false;
	$set(this, eventFactory, $XMLEventFactory::newInstance());
}

void SAX2StAXEventWriter::init$($XMLEventWriter* writer) {
	$SAX2StAXBaseWriter::init$();
	$set(this, namespaceStack, $new($ArrayList));
	this->needToCallStartDocument = false;
	$set(this, writer, writer);
	$set(this, eventFactory, $XMLEventFactory::newInstance());
}

void SAX2StAXEventWriter::init$($XMLEventWriter* writer, $XMLEventFactory* factory) {
	$SAX2StAXBaseWriter::init$();
	$set(this, namespaceStack, $new($ArrayList));
	this->needToCallStartDocument = false;
	$set(this, writer, writer);
	if (factory != nullptr) {
		$set(this, eventFactory, factory);
	} else {
		$set(this, eventFactory, $XMLEventFactory::newInstance());
	}
}

$XMLEventWriter* SAX2StAXEventWriter::getEventWriter() {
	return this->writer;
}

void SAX2StAXEventWriter::setEventWriter($XMLEventWriter* writer) {
	$set(this, writer, writer);
}

$XMLEventFactory* SAX2StAXEventWriter::getEventFactory() {
	return this->eventFactory;
}

void SAX2StAXEventWriter::setEventFactory($XMLEventFactory* factory) {
	$set(this, eventFactory, factory);
}

void SAX2StAXEventWriter::startDocument() {
	$SAX2StAXBaseWriter::startDocument();
	$nc(this->namespaceStack)->clear();
	$nc(this->eventFactory)->setLocation($(getCurrentLocation()));
	this->needToCallStartDocument = true;
}

void SAX2StAXEventWriter::writeStartDocument() {
	$SAX2StAXBaseWriter::writeStartDocument();
	try {
		$nc(this->writer)->add($(static_cast<$XMLEvent*>($nc(this->eventFactory)->createStartDocument(this->encoding, this->xmlVersion))));
	} catch ($XMLStreamException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
	this->needToCallStartDocument = false;
}

void SAX2StAXEventWriter::endDocument() {
	$useLocalCurrentObjectStackCache();
	$nc(this->eventFactory)->setLocation($(getCurrentLocation()));
	try {
		$nc(this->writer)->add($(static_cast<$XMLEvent*>($nc(this->eventFactory)->createEndDocument())));
	} catch ($XMLStreamException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
	$SAX2StAXBaseWriter::endDocument();
	$nc(this->namespaceStack)->clear();
}

void SAX2StAXEventWriter::startElement($String* uri, $String* localName, $String* qName, $Attributes* attributes) {
	$useLocalCurrentObjectStackCache();
	if (this->needToCallStartDocument) {
		writeStartDocument();
	}
	$nc(this->eventFactory)->setLocation($(getCurrentLocation()));
	$var($CollectionArray, events, $new($CollectionArray, {
		($Collection*)nullptr,
		($Collection*)nullptr
	}));
	createStartEvents(attributes, events);
	$nc(this->namespaceStack)->add(events->get(0));
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($StringArray, qname, $new($StringArray, {
					($String*)nullptr,
					($String*)nullptr
				}));
				parseQName(qName, qname);
				$var($String, var$1, qname->get(0));
				$var($String, var$2, uri);
				$var($String, var$3, qname->get(1));
				$var($Iterator, var$4, $nc(events->get(1))->iterator());
				$nc(this->writer)->add($(static_cast<$XMLEvent*>($nc(this->eventFactory)->createStartElement(var$1, var$2, var$3, var$4, $($nc(events->get(0))->iterator())))));
			} catch ($XMLStreamException& e) {
				$throwNew($SAXException, static_cast<$Exception*>(e));
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			$SAX2StAXBaseWriter::startElement(uri, localName, qName, attributes);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SAX2StAXEventWriter::endElement($String* uri, $String* localName, $String* qName) {
	$useLocalCurrentObjectStackCache();
	$SAX2StAXBaseWriter::endElement(uri, localName, qName);
	$nc(this->eventFactory)->setLocation($(getCurrentLocation()));
	$var($StringArray, qname, $new($StringArray, {
		($String*)nullptr,
		($String*)nullptr
	}));
	parseQName(qName, qname);
	$var($Collection, nsList, $cast($Collection, $nc(this->namespaceStack)->remove($nc(this->namespaceStack)->size() - 1)));
	$var($Iterator, nsIter, $nc(nsList)->iterator());
	try {
		$nc(this->writer)->add($(static_cast<$XMLEvent*>($nc(this->eventFactory)->createEndElement(qname->get(0), uri, qname->get(1), nsIter))));
	} catch ($XMLStreamException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void SAX2StAXEventWriter::comment($chars* ch, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (this->needToCallStartDocument) {
		writeStartDocument();
	}
	$SAX2StAXBaseWriter::comment(ch, start, length);
	$nc(this->eventFactory)->setLocation($(getCurrentLocation()));
	try {
		$nc(this->writer)->add($(static_cast<$XMLEvent*>($nc(this->eventFactory)->createComment($$new($String, ch, start, length)))));
	} catch ($XMLStreamException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void SAX2StAXEventWriter::characters($chars* ch, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	$SAX2StAXBaseWriter::characters(ch, start, length);
	try {
		if (!this->isCDATA) {
			$nc(this->eventFactory)->setLocation($(getCurrentLocation()));
			$nc(this->writer)->add($(static_cast<$XMLEvent*>($nc(this->eventFactory)->createCharacters($$new($String, ch, start, length)))));
		}
	} catch ($XMLStreamException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void SAX2StAXEventWriter::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	$SAX2StAXBaseWriter::ignorableWhitespace(ch, start, length);
	characters(ch, start, length);
}

void SAX2StAXEventWriter::processingInstruction($String* target, $String* data) {
	if (this->needToCallStartDocument) {
		writeStartDocument();
	}
	$SAX2StAXBaseWriter::processingInstruction(target, data);
	try {
		$nc(this->writer)->add($(static_cast<$XMLEvent*>($nc(this->eventFactory)->createProcessingInstruction(target, data))));
	} catch ($XMLStreamException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void SAX2StAXEventWriter::endCDATA() {
	$useLocalCurrentObjectStackCache();
	$nc(this->eventFactory)->setLocation($(getCurrentLocation()));
	try {
		$nc(this->writer)->add($(static_cast<$XMLEvent*>($nc(this->eventFactory)->createCData($($nc(this->CDATABuffer)->toString())))));
	} catch ($XMLStreamException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
	$SAX2StAXBaseWriter::endCDATA();
}

void SAX2StAXEventWriter::createStartEvents($Attributes* attributes, $CollectionArray* events) {
	$useLocalCurrentObjectStackCache();
	$var($Map, nsMap, nullptr);
	$var($List, attrs, nullptr);
	if (this->namespaces != nullptr) {
		int32_t nDecls = $nc(this->namespaces)->size();
		for (int32_t i = 0; i < nDecls; ++i) {
			$var($String, prefix, $cast($String, $nc(this->namespaces)->get(i++)));
			$var($String, uri, $cast($String, $nc(this->namespaces)->get(i)));
			$var($Namespace, ns, createNamespace(prefix, uri));
			if (nsMap == nullptr) {
				$assign(nsMap, $new($HashMap));
			}
			$nc(nsMap)->put(prefix, ns);
		}
	}
	$var($StringArray, qname, $new($StringArray, {
		($String*)nullptr,
		($String*)nullptr
	}));
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
			bool var$0 = "xmlns"_s->equals(attrQName);
			if (var$0 || "xmlns"_s->equals(attrPrefix)) {
				if (nsMap == nullptr) {
					$assign(nsMap, $new($HashMap));
				}
				if (!$nc(nsMap)->containsKey(attrLocal)) {
					$var($Namespace, ns, createNamespace(attrLocal, attrValue));
					nsMap->put(attrLocal, ns);
				}
			} else {
				$var($Attribute, attribute, nullptr);
				if ($nc(attrPrefix)->length() > 0) {
					$assign(attribute, $nc(this->eventFactory)->createAttribute(attrPrefix, attrURI, attrLocal, attrValue));
				} else {
					$assign(attribute, $nc(this->eventFactory)->createAttribute(attrLocal, attrValue));
				}
				if (attrs == nullptr) {
					$assign(attrs, $new($ArrayList));
				}
				$nc(attrs)->add(attribute);
			}
		}
	}
	$init($Collections);
	$nc(events)->set(0, (nsMap == nullptr ? static_cast<$Collection*>($Collections::EMPTY_LIST) : $($nc(nsMap)->values())));
	events->set(1, (attrs == nullptr ? static_cast<$Collection*>($Collections::EMPTY_LIST) : static_cast<$Collection*>(attrs)));
}

$Namespace* SAX2StAXEventWriter::createNamespace($String* prefix, $String* uri) {
	if (prefix == nullptr || $nc(prefix)->length() == 0) {
		return $nc(this->eventFactory)->createNamespace(uri);
	} else {
		return $nc(this->eventFactory)->createNamespace(prefix, uri);
	}
}

SAX2StAXEventWriter::SAX2StAXEventWriter() {
}

$Class* SAX2StAXEventWriter::load$($String* name, bool initialize) {
	$loadClass(SAX2StAXEventWriter, name, initialize, &_SAX2StAXEventWriter_ClassInfo_, allocate$SAX2StAXEventWriter);
	return class$;
}

$Class* SAX2StAXEventWriter::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com