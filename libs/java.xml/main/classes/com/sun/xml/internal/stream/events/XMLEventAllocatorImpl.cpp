#include <com/sun/xml/internal/stream/events/XMLEventAllocatorImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/PropertyManager.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceContextWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/xml/internal/stream/events/AttributeImpl.h>
#include <com/sun/xml/internal/stream/events/CharacterEvent.h>
#include <com/sun/xml/internal/stream/events/CommentEvent.h>
#include <com/sun/xml/internal/stream/events/DTDEvent.h>
#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <com/sun/xml/internal/stream/events/EndDocumentEvent.h>
#include <com/sun/xml/internal/stream/events/EndElementEvent.h>
#include <com/sun/xml/internal/stream/events/EntityDeclarationImpl.h>
#include <com/sun/xml/internal/stream/events/EntityReferenceEvent.h>
#include <com/sun/xml/internal/stream/events/NamespaceImpl.h>
#include <com/sun/xml/internal/stream/events/ProcessingInstructionEvent.h>
#include <com/sun/xml/internal/stream/events/StartDocumentEvent.h>
#include <com/sun/xml/internal/stream/events/StartElementEvent.h>
#include <java/util/List.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLInputFactory.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <javax/xml/stream/events/Attribute.h>
#include <javax/xml/stream/events/EntityDeclaration.h>
#include <javax/xml/stream/events/Namespace.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <javax/xml/stream/util/XMLEventAllocator.h>
#include <javax/xml/stream/util/XMLEventConsumer.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef CDATA
#undef CHARACTERS
#undef COMMENT
#undef DEFAULT_NS_PREFIX
#undef DTD
#undef END_DOCUMENT
#undef END_ELEMENT
#undef ENTITY_REFERENCE
#undef IS_NAMESPACE_AWARE
#undef PROCESSING_INSTRUCTION
#undef SPACE
#undef START_DOCUMENT
#undef START_ELEMENT
#undef STAX_ENTITIES
#undef STAX_NOTATIONS

using $PropertyManager = ::com::sun::org::apache::xerces::internal::impl::PropertyManager;
using $NamespaceContextWrapper = ::com::sun::org::apache::xerces::internal::util::NamespaceContextWrapper;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $AttributeImpl = ::com::sun::xml::internal::stream::events::AttributeImpl;
using $CharacterEvent = ::com::sun::xml::internal::stream::events::CharacterEvent;
using $CommentEvent = ::com::sun::xml::internal::stream::events::CommentEvent;
using $DTDEvent = ::com::sun::xml::internal::stream::events::DTDEvent;
using $DummyEvent = ::com::sun::xml::internal::stream::events::DummyEvent;
using $EndDocumentEvent = ::com::sun::xml::internal::stream::events::EndDocumentEvent;
using $EndElementEvent = ::com::sun::xml::internal::stream::events::EndElementEvent;
using $EntityDeclarationImpl = ::com::sun::xml::internal::stream::events::EntityDeclarationImpl;
using $EntityReferenceEvent = ::com::sun::xml::internal::stream::events::EntityReferenceEvent;
using $NamespaceImpl = ::com::sun::xml::internal::stream::events::NamespaceImpl;
using $ProcessingInstructionEvent = ::com::sun::xml::internal::stream::events::ProcessingInstructionEvent;
using $StartDocumentEvent = ::com::sun::xml::internal::stream::events::StartDocumentEvent;
using $StartElementEvent = ::com::sun::xml::internal::stream::events::StartElementEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $XMLConstants = ::javax::xml::XMLConstants;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $XMLInputFactory = ::javax::xml::stream::XMLInputFactory;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;
using $Attribute = ::javax::xml::stream::events::Attribute;
using $EntityDeclaration = ::javax::xml::stream::events::EntityDeclaration;
using $Namespace = ::javax::xml::stream::events::Namespace;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;
using $XMLEventAllocator = ::javax::xml::stream::util::XMLEventAllocator;
using $XMLEventConsumer = ::javax::xml::stream::util::XMLEventConsumer;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

$MethodInfo _XMLEventAllocatorImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLEventAllocatorImpl, init$, void)},
	{"allocate", "(Ljavax/xml/stream/XMLStreamReader;)Ljavax/xml/stream/events/XMLEvent;", nullptr, $PUBLIC, $virtualMethod(XMLEventAllocatorImpl, allocate, $XMLEvent*, $XMLStreamReader*), "javax.xml.stream.XMLStreamException"},
	{"allocate", "(Ljavax/xml/stream/XMLStreamReader;Ljavax/xml/stream/util/XMLEventConsumer;)V", nullptr, $PUBLIC, $virtualMethod(XMLEventAllocatorImpl, allocate, void, $XMLStreamReader*, $XMLEventConsumer*), "javax.xml.stream.XMLStreamException"},
	{"fillAttributes", "(Lcom/sun/xml/internal/stream/events/StartElementEvent;Ljavax/xml/stream/XMLStreamReader;)V", nullptr, $PROTECTED, $virtualMethod(XMLEventAllocatorImpl, fillAttributes, void, $StartElementEvent*, $XMLStreamReader*)},
	{"fillNamespaceAttributes", "(Lcom/sun/xml/internal/stream/events/StartElementEvent;Ljavax/xml/stream/XMLStreamReader;)V", nullptr, $PROTECTED, $virtualMethod(XMLEventAllocatorImpl, fillNamespaceAttributes, void, $StartElementEvent*, $XMLStreamReader*)},
	{"fillNamespaceAttributes", "(Lcom/sun/xml/internal/stream/events/EndElementEvent;Ljavax/xml/stream/XMLStreamReader;)V", nullptr, $PROTECTED, $virtualMethod(XMLEventAllocatorImpl, fillNamespaceAttributes, void, $EndElementEvent*, $XMLStreamReader*)},
	{"getNextEvent", "(Ljavax/xml/stream/XMLStreamReader;)Ljavax/xml/stream/events/XMLEvent;", nullptr, $PROTECTED, $virtualMethod(XMLEventAllocatorImpl, getNextEvent, $XMLEvent*, $XMLStreamReader*), "javax.xml.stream.XMLStreamException"},
	{"getQName", "(Ljavax/xml/stream/XMLStreamReader;)Ljavax/xml/namespace/QName;", nullptr, $PRIVATE, $method(XMLEventAllocatorImpl, getQName, $QName*, $XMLStreamReader*)},
	{"getXMLEvent", "(Ljavax/xml/stream/XMLStreamReader;)Ljavax/xml/stream/events/XMLEvent;", nullptr, 0, $virtualMethod(XMLEventAllocatorImpl, getXMLEvent, $XMLEvent*, $XMLStreamReader*)},
	{"newInstance", "()Ljavax/xml/stream/util/XMLEventAllocator;", nullptr, $PUBLIC, $virtualMethod(XMLEventAllocatorImpl, newInstance, $XMLEventAllocator*)},
	{"setNamespaceContext", "(Lcom/sun/xml/internal/stream/events/StartElementEvent;Ljavax/xml/stream/XMLStreamReader;)V", nullptr, $PRIVATE, $method(XMLEventAllocatorImpl, setNamespaceContext, void, $StartElementEvent*, $XMLStreamReader*)},
	{}
};

$ClassInfo _XMLEventAllocatorImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.XMLEventAllocatorImpl",
	"java.lang.Object",
	"javax.xml.stream.util.XMLEventAllocator",
	nullptr,
	_XMLEventAllocatorImpl_MethodInfo_
};

$Object* allocate$XMLEventAllocatorImpl($Class* clazz) {
	return $of($alloc(XMLEventAllocatorImpl));
}

void XMLEventAllocatorImpl::init$() {
}

$XMLEvent* XMLEventAllocatorImpl::allocate($XMLStreamReader* xMLStreamReader) {
	if (xMLStreamReader == nullptr) {
		$throwNew($XMLStreamException, "Reader cannot be null"_s);
	}
	return getXMLEvent(xMLStreamReader);
}

void XMLEventAllocatorImpl::allocate($XMLStreamReader* xMLStreamReader, $XMLEventConsumer* xMLEventConsumer) {
	$var($XMLEvent, currentEvent, getXMLEvent(xMLStreamReader));
	if (currentEvent != nullptr) {
		$nc(xMLEventConsumer)->add(currentEvent);
	}
	return;
}

$XMLEventAllocator* XMLEventAllocatorImpl::newInstance() {
	return $new(XMLEventAllocatorImpl);
}

$XMLEvent* XMLEventAllocatorImpl::getXMLEvent($XMLStreamReader* streamReader) {
	$useLocalCurrentObjectStackCache();
	$var($XMLEvent, event, nullptr);
	int32_t eventType = $nc(streamReader)->getEventType();
	switch (eventType) {
	case $XMLEvent::START_ELEMENT:
		{
			{
				$var($StartElementEvent, startElementEvent, $new($StartElementEvent, $(getQName(streamReader))));
				fillAttributes(startElementEvent, streamReader);
				$init($XMLInputFactory);
				if ($nc(($cast($Boolean, $(streamReader->getProperty($XMLInputFactory::IS_NAMESPACE_AWARE)))))->booleanValue()) {
					fillNamespaceAttributes(startElementEvent, streamReader);
					setNamespaceContext(startElementEvent, streamReader);
				}
				startElementEvent->setLocation($(streamReader->getLocation()));
				$assign(event, static_cast<$XMLEvent*>(static_cast<$DummyEvent*>(startElementEvent)));
				break;
			}
		}
	case $XMLEvent::END_ELEMENT:
		{
			{
				$var($EndElementEvent, endElementEvent, $new($EndElementEvent, $(getQName(streamReader))));
				endElementEvent->setLocation($(streamReader->getLocation()));
				$init($XMLInputFactory);
				if ($nc(($cast($Boolean, $(streamReader->getProperty($XMLInputFactory::IS_NAMESPACE_AWARE)))))->booleanValue()) {
					fillNamespaceAttributes(endElementEvent, streamReader);
				}
				$assign(event, static_cast<$XMLEvent*>(static_cast<$DummyEvent*>(endElementEvent)));
				break;
			}
		}
	case $XMLEvent::PROCESSING_INSTRUCTION:
		{
			{
				$var($String, var$0, streamReader->getPITarget());
				$var($ProcessingInstructionEvent, piEvent, $new($ProcessingInstructionEvent, var$0, $(streamReader->getPIData())));
				piEvent->setLocation($(streamReader->getLocation()));
				$assign(event, static_cast<$XMLEvent*>(static_cast<$DummyEvent*>(piEvent)));
				break;
			}
		}
	case $XMLEvent::CHARACTERS:
		{
			{
				$var($CharacterEvent, cDataEvent, $new($CharacterEvent, $(streamReader->getText())));
				cDataEvent->setLocation($(streamReader->getLocation()));
				$assign(event, static_cast<$XMLEvent*>(static_cast<$DummyEvent*>(cDataEvent)));
				break;
			}
		}
	case $XMLEvent::COMMENT:
		{
			{
				$var($CommentEvent, commentEvent, $new($CommentEvent, $(streamReader->getText())));
				commentEvent->setLocation($(streamReader->getLocation()));
				$assign(event, static_cast<$XMLEvent*>(static_cast<$DummyEvent*>(commentEvent)));
				break;
			}
		}
	case $XMLEvent::START_DOCUMENT:
		{
			{
				$var($StartDocumentEvent, sdEvent, $new($StartDocumentEvent));
				sdEvent->setVersion($(streamReader->getVersion()));
				sdEvent->setEncoding($(streamReader->getEncoding()));
				if (streamReader->getCharacterEncodingScheme() != nullptr) {
					sdEvent->setDeclaredEncoding(true);
				} else {
					sdEvent->setDeclaredEncoding(false);
				}
				bool var$1 = streamReader->isStandalone();
				sdEvent->setStandalone(var$1, streamReader->standaloneSet());
				sdEvent->setLocation($(streamReader->getLocation()));
				$assign(event, static_cast<$XMLEvent*>(static_cast<$DummyEvent*>(sdEvent)));
				break;
			}
		}
	case $XMLEvent::END_DOCUMENT:
		{
			{
				$var($EndDocumentEvent, endDocumentEvent, $new($EndDocumentEvent));
				endDocumentEvent->setLocation($(streamReader->getLocation()));
				$assign(event, static_cast<$XMLEvent*>(static_cast<$DummyEvent*>(endDocumentEvent)));
				break;
			}
		}
	case $XMLEvent::ENTITY_REFERENCE:
		{
			{
				$var($String, var$2, streamReader->getLocalName());
				$var($String, var$3, streamReader->getLocalName());
				$var($EntityReferenceEvent, entityEvent, $new($EntityReferenceEvent, var$2, $$new($EntityDeclarationImpl, var$3, $(streamReader->getText()))));
				entityEvent->setLocation($(streamReader->getLocation()));
				$assign(event, static_cast<$XMLEvent*>(static_cast<$DummyEvent*>(entityEvent)));
				break;
			}
		}
	case $XMLEvent::ATTRIBUTE:
		{
			{
				$assign(event, nullptr);
				break;
			}
		}
	case $XMLEvent::DTD:
		{
			{
				$var($DTDEvent, dtdEvent, $new($DTDEvent, $(streamReader->getText())));
				dtdEvent->setLocation($(streamReader->getLocation()));
				$init($PropertyManager);
				$var($List, entities, $cast($List, streamReader->getProperty($PropertyManager::STAX_ENTITIES)));
				if (entities != nullptr && entities->size() != 0) {
					dtdEvent->setEntities(entities);
				}
				$var($List, notations, $cast($List, streamReader->getProperty($PropertyManager::STAX_NOTATIONS)));
				if (notations != nullptr && !notations->isEmpty()) {
					dtdEvent->setNotations(notations);
				}
				$assign(event, static_cast<$XMLEvent*>(static_cast<$DummyEvent*>(dtdEvent)));
				break;
			}
		}
	case $XMLEvent::CDATA:
		{
			{
				$var($CharacterEvent, cDataEvent, $new($CharacterEvent, $(streamReader->getText()), true));
				cDataEvent->setLocation($(streamReader->getLocation()));
				$assign(event, static_cast<$XMLEvent*>(static_cast<$DummyEvent*>(cDataEvent)));
				break;
			}
		}
	case $XMLEvent::SPACE:
		{
			{
				$var($CharacterEvent, spaceEvent, $new($CharacterEvent, $(streamReader->getText()), false, true));
				spaceEvent->setLocation($(streamReader->getLocation()));
				$assign(event, static_cast<$XMLEvent*>(static_cast<$DummyEvent*>(spaceEvent)));
				break;
			}
		}
	}
	return event;
}

$XMLEvent* XMLEventAllocatorImpl::getNextEvent($XMLStreamReader* streamReader) {
	$nc(streamReader)->next();
	return getXMLEvent(streamReader);
}

void XMLEventAllocatorImpl::fillAttributes($StartElementEvent* event, $XMLStreamReader* xmlr) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(xmlr)->getAttributeCount();
	$var($QName, qname, nullptr);
	$var($AttributeImpl, attr, nullptr);
	$var($NamespaceImpl, nattr, nullptr);
	for (int32_t i = 0; i < len; ++i) {
		$assign(qname, xmlr->getAttributeName(i));
		$assign(attr, $new($AttributeImpl));
		attr->setName(qname);
		attr->setAttributeType($(xmlr->getAttributeType(i)));
		attr->setSpecified(xmlr->isAttributeSpecified(i));
		attr->setValue($(xmlr->getAttributeValue(i)));
		$nc(event)->addAttribute(attr);
	}
}

void XMLEventAllocatorImpl::fillNamespaceAttributes($StartElementEvent* event, $XMLStreamReader* xmlr) {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(xmlr)->getNamespaceCount();
	$var($String, uri, nullptr);
	$var($String, prefix, nullptr);
	$var($NamespaceImpl, attr, nullptr);
	for (int32_t i = 0; i < count; ++i) {
		$assign(uri, xmlr->getNamespaceURI(i));
		$assign(prefix, xmlr->getNamespacePrefix(i));
		if (prefix == nullptr) {
			$init($XMLConstants);
			$assign(prefix, $XMLConstants::DEFAULT_NS_PREFIX);
		}
		$assign(attr, $new($NamespaceImpl, prefix, uri));
		$nc(event)->addNamespaceAttribute(attr);
	}
}

void XMLEventAllocatorImpl::fillNamespaceAttributes($EndElementEvent* event, $XMLStreamReader* xmlr) {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(xmlr)->getNamespaceCount();
	$var($String, uri, nullptr);
	$var($String, prefix, nullptr);
	$var($NamespaceImpl, attr, nullptr);
	for (int32_t i = 0; i < count; ++i) {
		$assign(uri, xmlr->getNamespaceURI(i));
		$assign(prefix, xmlr->getNamespacePrefix(i));
		if (prefix == nullptr) {
			$init($XMLConstants);
			$assign(prefix, $XMLConstants::DEFAULT_NS_PREFIX);
		}
		$assign(attr, $new($NamespaceImpl, prefix, uri));
		$nc(event)->addNamespace(attr);
	}
}

void XMLEventAllocatorImpl::setNamespaceContext($StartElementEvent* event, $XMLStreamReader* xmlr) {
	$useLocalCurrentObjectStackCache();
	$var($NamespaceContextWrapper, contextWrapper, $cast($NamespaceContextWrapper, $nc(xmlr)->getNamespaceContext()));
	$var($NamespaceSupport, ns, $new($NamespaceSupport, $($nc(contextWrapper)->getNamespaceContext())));
	$nc(event)->setNamespaceContext($$new($NamespaceContextWrapper, ns));
}

$QName* XMLEventAllocatorImpl::getQName($XMLStreamReader* xmlr) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(xmlr)->getNamespaceURI());
	$var($String, var$1, xmlr->getLocalName());
	return $new($QName, var$0, var$1, $(xmlr->getPrefix()));
}

XMLEventAllocatorImpl::XMLEventAllocatorImpl() {
}

$Class* XMLEventAllocatorImpl::load$($String* name, bool initialize) {
	$loadClass(XMLEventAllocatorImpl, name, initialize, &_XMLEventAllocatorImpl_ClassInfo_, allocate$XMLEventAllocatorImpl);
	return class$;
}

$Class* XMLEventAllocatorImpl::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com