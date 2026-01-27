#include <com/sun/xml/internal/stream/writers/XMLEventWriterImpl.h>

#include <com/sun/xml/internal/stream/writers/XMLStreamWriterBase.h>
#include <java/util/Iterator.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/stream/XMLStreamWriter.h>
#include <javax/xml/stream/events/Attribute.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/Comment.h>
#include <javax/xml/stream/events/DTD.h>
#include <javax/xml/stream/events/EntityReference.h>
#include <javax/xml/stream/events/Namespace.h>
#include <javax/xml/stream/events/ProcessingInstruction.h>
#include <javax/xml/stream/events/StartDocument.h>
#include <javax/xml/stream/events/StartElement.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef CDATA
#undef CHARACTERS
#undef COMMENT
#undef DEBUG
#undef DTD
#undef END_DOCUMENT
#undef END_ELEMENT
#undef ENTITY_REFERENCE
#undef NAMESPACE
#undef PROCESSING_INSTRUCTION
#undef START_DOCUMENT
#undef START_ELEMENT

using $XMLStreamWriterBase = ::com::sun::xml::internal::stream::writers::XMLStreamWriterBase;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $XMLStreamWriter = ::javax::xml::stream::XMLStreamWriter;
using $Attribute = ::javax::xml::stream::events::Attribute;
using $Characters = ::javax::xml::stream::events::Characters;
using $Comment = ::javax::xml::stream::events::Comment;
using $DTD = ::javax::xml::stream::events::DTD;
using $EntityReference = ::javax::xml::stream::events::EntityReference;
using $Namespace = ::javax::xml::stream::events::Namespace;
using $ProcessingInstruction = ::javax::xml::stream::events::ProcessingInstruction;
using $StartDocument = ::javax::xml::stream::events::StartDocument;
using $StartElement = ::javax::xml::stream::events::StartElement;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

$FieldInfo _XMLEventWriterImpl_FieldInfo_[] = {
	{"fStreamWriter", "Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PRIVATE | $FINAL, $field(XMLEventWriterImpl, fStreamWriter)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLEventWriterImpl, DEBUG)},
	{}
};

$MethodInfo _XMLEventWriterImpl_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/stream/XMLStreamWriter;)V", nullptr, $PUBLIC, $method(XMLEventWriterImpl, init$, void, $XMLStreamWriter*)},
	{"add", "(Ljavax/xml/stream/XMLEventReader;)V", nullptr, $PUBLIC, $virtualMethod(XMLEventWriterImpl, add, void, $XMLEventReader*), "javax.xml.stream.XMLStreamException"},
	{"add", "(Ljavax/xml/stream/events/XMLEvent;)V", nullptr, $PUBLIC, $virtualMethod(XMLEventWriterImpl, add, void, $XMLEvent*), "javax.xml.stream.XMLStreamException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(XMLEventWriterImpl, close, void), "javax.xml.stream.XMLStreamException"},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(XMLEventWriterImpl, flush, void), "javax.xml.stream.XMLStreamException"},
	{"getNamespaceContext", "()Ljavax/xml/namespace/NamespaceContext;", nullptr, $PUBLIC, $virtualMethod(XMLEventWriterImpl, getNamespaceContext, $NamespaceContext*)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLEventWriterImpl, getPrefix, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"setDefaultNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLEventWriterImpl, setDefaultNamespace, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"setNamespaceContext", "(Ljavax/xml/namespace/NamespaceContext;)V", nullptr, $PUBLIC, $virtualMethod(XMLEventWriterImpl, setNamespaceContext, void, $NamespaceContext*), "javax.xml.stream.XMLStreamException"},
	{"setPrefix", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLEventWriterImpl, setPrefix, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{}
};

$ClassInfo _XMLEventWriterImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.writers.XMLEventWriterImpl",
	"java.lang.Object",
	"javax.xml.stream.XMLEventWriter",
	_XMLEventWriterImpl_FieldInfo_,
	_XMLEventWriterImpl_MethodInfo_
};

$Object* allocate$XMLEventWriterImpl($Class* clazz) {
	return $of($alloc(XMLEventWriterImpl));
}

void XMLEventWriterImpl::init$($XMLStreamWriter* streamWriter) {
	$set(this, fStreamWriter, streamWriter);
}

void XMLEventWriterImpl::add($XMLEventReader* xMLEventReader) {
	$useLocalCurrentObjectStackCache();
	if (xMLEventReader == nullptr) {
		$throwNew($XMLStreamException, "Event reader shouldn\'t be null"_s);
	}
	while ($nc(xMLEventReader)->hasNext()) {
		add($(xMLEventReader->nextEvent()));
	}
}

void XMLEventWriterImpl::add($XMLEvent* xMLEvent) {
	$useLocalCurrentObjectStackCache();
	int32_t type = $nc(xMLEvent)->getEventType();
	switch (type) {
	case $XMLEvent::DTD:
		{
			{
				$var($DTD, dtd, $cast($DTD, xMLEvent));
				$nc(this->fStreamWriter)->writeDTD($(dtd->getDocumentTypeDeclaration()));
				break;
			}
		}
	case $XMLEvent::START_DOCUMENT:
		{
			{
				$var($StartDocument, startDocument, $cast($StartDocument, xMLEvent));
				try {
					$load($XMLStreamWriterBase);
					if ($XMLStreamWriterBase::class$->isAssignableFrom($nc($of(this->fStreamWriter))->getClass())) {
						$var($String, var$0, startDocument->getCharacterEncodingScheme());
						$var($String, var$1, startDocument->getVersion());
						bool var$2 = startDocument->isStandalone();
						$nc(($cast($XMLStreamWriterBase, this->fStreamWriter)))->writeStartDocument(var$0, var$1, var$2, startDocument->standaloneSet());
					} else {
						$var($String, var$3, startDocument->getCharacterEncodingScheme());
						$nc(this->fStreamWriter)->writeStartDocument(var$3, $(startDocument->getVersion()));
					}
				} catch ($XMLStreamException& e) {
					$nc(this->fStreamWriter)->writeStartDocument($(startDocument->getVersion()));
				}
				break;
			}
		}
	case $XMLEvent::START_ELEMENT:
		{
			{
				$var($StartElement, startElement, xMLEvent->asStartElement());
				$var($QName, qname, $nc(startElement)->getName());
				$var($String, var$4, $nc(qname)->getPrefix());
				$var($String, var$5, qname->getLocalPart());
				$nc(this->fStreamWriter)->writeStartElement(var$4, var$5, $(qname->getNamespaceURI()));
				$var($Iterator, iterator, startElement->getNamespaces());
				while ($nc(iterator)->hasNext()) {
					$var($Namespace, namespace$, $cast($Namespace, iterator->next()));
					$var($String, var$6, $nc(namespace$)->getPrefix());
					$nc(this->fStreamWriter)->writeNamespace(var$6, $(namespace$->getNamespaceURI()));
				}
				$var($Iterator, attributes, startElement->getAttributes());
				while ($nc(attributes)->hasNext()) {
					$var($Attribute, attribute, $cast($Attribute, attributes->next()));
					$var($QName, aqname, $nc(attribute)->getName());
					$var($String, var$7, $nc(aqname)->getPrefix());
					$var($String, var$8, aqname->getNamespaceURI());
					$var($String, var$9, aqname->getLocalPart());
					$nc(this->fStreamWriter)->writeAttribute(var$7, var$8, var$9, $(attribute->getValue()));
				}
				break;
			}
		}
	case $XMLEvent::NAMESPACE:
		{
			{
				$var($Namespace, namespace$, $cast($Namespace, xMLEvent));
				$var($String, var$10, namespace$->getPrefix());
				$nc(this->fStreamWriter)->writeNamespace(var$10, $(namespace$->getNamespaceURI()));
				break;
			}
		}
	case $XMLEvent::COMMENT:
		{
			{
				$var($Comment, comment, $cast($Comment, xMLEvent));
				$nc(this->fStreamWriter)->writeComment($(comment->getText()));
				break;
			}
		}
	case $XMLEvent::PROCESSING_INSTRUCTION:
		{
			{
				$var($ProcessingInstruction, processingInstruction, $cast($ProcessingInstruction, xMLEvent));
				$var($String, var$11, processingInstruction->getTarget());
				$nc(this->fStreamWriter)->writeProcessingInstruction(var$11, $(processingInstruction->getData()));
				break;
			}
		}
	case $XMLEvent::CHARACTERS:
		{
			{
				$var($Characters, characters, xMLEvent->asCharacters());
				if ($nc(characters)->isCData()) {
					$nc(this->fStreamWriter)->writeCData($(characters->getData()));
				} else {
					$nc(this->fStreamWriter)->writeCharacters($(characters->getData()));
				}
				break;
			}
		}
	case $XMLEvent::ENTITY_REFERENCE:
		{
			{
				$var($EntityReference, entityReference, $cast($EntityReference, xMLEvent));
				$nc(this->fStreamWriter)->writeEntityRef($(entityReference->getName()));
				break;
			}
		}
	case $XMLEvent::ATTRIBUTE:
		{
			{
				$var($Attribute, attribute, $cast($Attribute, xMLEvent));
				$var($QName, qname, attribute->getName());
				$var($String, var$12, $nc(qname)->getPrefix());
				$var($String, var$13, qname->getNamespaceURI());
				$var($String, var$14, qname->getLocalPart());
				$nc(this->fStreamWriter)->writeAttribute(var$12, var$13, var$14, $(attribute->getValue()));
				break;
			}
		}
	case $XMLEvent::CDATA:
		{
			{
				$var($Characters, characters, $cast($Characters, xMLEvent));
				if (characters->isCData()) {
					$nc(this->fStreamWriter)->writeCData($(characters->getData()));
				}
				break;
			}
		}
	case $XMLEvent::END_ELEMENT:
		{
			{
				$nc(this->fStreamWriter)->writeEndElement();
				break;
			}
		}
	case $XMLEvent::END_DOCUMENT:
		{
			{
				$nc(this->fStreamWriter)->writeEndDocument();
				break;
			}
		}
	}
}

void XMLEventWriterImpl::close() {
	$nc(this->fStreamWriter)->close();
}

void XMLEventWriterImpl::flush() {
	$nc(this->fStreamWriter)->flush();
}

$NamespaceContext* XMLEventWriterImpl::getNamespaceContext() {
	return $nc(this->fStreamWriter)->getNamespaceContext();
}

$String* XMLEventWriterImpl::getPrefix($String* namespaceURI) {
	return $nc(this->fStreamWriter)->getPrefix(namespaceURI);
}

void XMLEventWriterImpl::setDefaultNamespace($String* uri) {
	$nc(this->fStreamWriter)->setDefaultNamespace(uri);
}

void XMLEventWriterImpl::setNamespaceContext($NamespaceContext* namespaceContext) {
	$nc(this->fStreamWriter)->setNamespaceContext(namespaceContext);
}

void XMLEventWriterImpl::setPrefix($String* prefix, $String* uri) {
	$nc(this->fStreamWriter)->setPrefix(prefix, uri);
}

XMLEventWriterImpl::XMLEventWriterImpl() {
}

$Class* XMLEventWriterImpl::load$($String* name, bool initialize) {
	$loadClass(XMLEventWriterImpl, name, initialize, &_XMLEventWriterImpl_ClassInfo_, allocate$XMLEventWriterImpl);
	return class$;
}

$Class* XMLEventWriterImpl::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com