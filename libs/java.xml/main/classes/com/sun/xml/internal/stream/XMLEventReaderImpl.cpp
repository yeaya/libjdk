#include <com/sun/xml/internal/stream/XMLEventReaderImpl.h>

#include <com/sun/xml/internal/stream/events/XMLEventAllocatorImpl.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLInputFactory.h>
#include <javax/xml/stream/XMLStreamConstants.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EntityDeclaration.h>
#include <javax/xml/stream/events/EntityReference.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <javax/xml/stream/util/XMLEventAllocator.h>
#include <jcpp.h>

#undef ALLOCATOR
#undef CDATA
#undef CHARACTERS
#undef COMMENT
#undef END_DOCUMENT
#undef END_ELEMENT
#undef ENTITY_REFERENCE
#undef PROCESSING_INSTRUCTION
#undef SPACE
#undef START_DOCUMENT
#undef START_ELEMENT

using $XMLEventAllocatorImpl = ::com::sun::xml::internal::stream::events::XMLEventAllocatorImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $XMLInputFactory = ::javax::xml::stream::XMLInputFactory;
using $XMLStreamConstants = ::javax::xml::stream::XMLStreamConstants;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;
using $Characters = ::javax::xml::stream::events::Characters;
using $EntityDeclaration = ::javax::xml::stream::events::EntityDeclaration;
using $EntityReference = ::javax::xml::stream::events::EntityReference;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;
using $XMLEventAllocator = ::javax::xml::stream::util::XMLEventAllocator;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$FieldInfo _XMLEventReaderImpl_FieldInfo_[] = {
	{"fXMLReader", "Ljavax/xml/stream/XMLStreamReader;", nullptr, $PROTECTED, $field(XMLEventReaderImpl, fXMLReader)},
	{"fXMLEventAllocator", "Ljavax/xml/stream/util/XMLEventAllocator;", nullptr, $PROTECTED, $field(XMLEventReaderImpl, fXMLEventAllocator)},
	{"fPeekedEvent", "Ljavax/xml/stream/events/XMLEvent;", nullptr, $PRIVATE, $field(XMLEventReaderImpl, fPeekedEvent)},
	{"fLastEvent", "Ljavax/xml/stream/events/XMLEvent;", nullptr, $PRIVATE, $field(XMLEventReaderImpl, fLastEvent)},
	{}
};

$MethodInfo _XMLEventReaderImpl_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/stream/XMLStreamReader;)V", nullptr, $PUBLIC, $method(XMLEventReaderImpl, init$, void, $XMLStreamReader*), "javax.xml.stream.XMLStreamException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(XMLEventReaderImpl, close, void), "javax.xml.stream.XMLStreamException"},
	{"getElementText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLEventReaderImpl, getElementText, $String*), "javax.xml.stream.XMLStreamException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLEventReaderImpl, getProperty, $Object*, $String*), "java.lang.IllegalArgumentException"},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLEventReaderImpl, hasNext, bool)},
	{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLEventReaderImpl, next, $Object*)},
	{"nextEvent", "()Ljavax/xml/stream/events/XMLEvent;", nullptr, $PUBLIC, $virtualMethod(XMLEventReaderImpl, nextEvent, $XMLEvent*), "javax.xml.stream.XMLStreamException"},
	{"nextTag", "()Ljavax/xml/stream/events/XMLEvent;", nullptr, $PUBLIC, $virtualMethod(XMLEventReaderImpl, nextTag, $XMLEvent*), "javax.xml.stream.XMLStreamException"},
	{"peek", "()Ljavax/xml/stream/events/XMLEvent;", nullptr, $PUBLIC, $virtualMethod(XMLEventReaderImpl, peek, $XMLEvent*), "javax.xml.stream.XMLStreamException"},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(XMLEventReaderImpl, remove, void)},
	{}
};

$ClassInfo _XMLEventReaderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.XMLEventReaderImpl",
	"java.lang.Object",
	"javax.xml.stream.XMLEventReader",
	_XMLEventReaderImpl_FieldInfo_,
	_XMLEventReaderImpl_MethodInfo_
};

$Object* allocate$XMLEventReaderImpl($Class* clazz) {
	return $of($alloc(XMLEventReaderImpl));
}

void XMLEventReaderImpl::init$($XMLStreamReader* reader) {
	$set(this, fXMLReader, reader);
	$init($XMLInputFactory);
	$set(this, fXMLEventAllocator, $cast($XMLEventAllocator, $nc(reader)->getProperty($XMLInputFactory::ALLOCATOR)));
	if (this->fXMLEventAllocator == nullptr) {
		$set(this, fXMLEventAllocator, $new($XMLEventAllocatorImpl));
	}
	$set(this, fPeekedEvent, $nc(this->fXMLEventAllocator)->allocate(this->fXMLReader));
}

bool XMLEventReaderImpl::hasNext() {
	if (this->fPeekedEvent != nullptr) {
		return true;
	}
	bool next = false;
	try {
		next = $nc(this->fXMLReader)->hasNext();
	} catch ($XMLStreamException& ex) {
		return false;
	}
	return next;
}

$XMLEvent* XMLEventReaderImpl::nextEvent() {
	if (this->fPeekedEvent != nullptr) {
		$set(this, fLastEvent, this->fPeekedEvent);
		$set(this, fPeekedEvent, nullptr);
		return this->fLastEvent;
	} else if ($nc(this->fXMLReader)->hasNext()) {
		$nc(this->fXMLReader)->next();
		return $set(this, fLastEvent, $nc(this->fXMLEventAllocator)->allocate(this->fXMLReader));
	} else {
		$set(this, fLastEvent, nullptr);
		$throwNew($NoSuchElementException);
	}
}

void XMLEventReaderImpl::remove() {
	$throwNew($UnsupportedOperationException);
}

void XMLEventReaderImpl::close() {
	$nc(this->fXMLReader)->close();
}

$String* XMLEventReaderImpl::getElementText() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fLastEvent)->getEventType() != $XMLEvent::START_ELEMENT) {
		$throwNew($XMLStreamException, "parser must be on START_ELEMENT to read next text"_s, $($nc(this->fLastEvent)->getLocation()));
	}
	$var($String, data, nullptr);
	if (this->fPeekedEvent != nullptr) {
		$var($XMLEvent, event, this->fPeekedEvent);
		$set(this, fPeekedEvent, nullptr);
		int32_t type = $nc(event)->getEventType();
		if (type == $XMLEvent::CHARACTERS || type == $XMLEvent::SPACE || type == $XMLEvent::CDATA) {
			$assign(data, $nc($(event->asCharacters()))->getData());
		} else if (type == $XMLEvent::ENTITY_REFERENCE) {
			$assign(data, $nc($($nc(($cast($EntityReference, event)))->getDeclaration()))->getReplacementText());
		} else if (type == $XMLEvent::COMMENT || type == $XMLEvent::PROCESSING_INSTRUCTION) {
		} else if (type == $XMLEvent::START_ELEMENT) {
			$throwNew($XMLStreamException, "elementGetText() function expects text only elment but START_ELEMENT was encountered."_s, $(event->getLocation()));
		} else if (type == $XMLEvent::END_ELEMENT) {
			return ""_s;
		}
		$var($StringBuffer, buffer, $new($StringBuffer));
		if (data != nullptr && data->length() > 0) {
			buffer->append(data);
		}
		$assign(event, nextEvent());
		while ((type = event->getEventType()) != $XMLEvent::END_ELEMENT) {
			if (type == $XMLEvent::CHARACTERS || type == $XMLEvent::SPACE || type == $XMLEvent::CDATA) {
				$assign(data, $nc($(event->asCharacters()))->getData());
			} else if (type == $XMLEvent::ENTITY_REFERENCE) {
				$assign(data, $nc($($nc(($cast($EntityReference, event)))->getDeclaration()))->getReplacementText());
			} else if (type == $XMLEvent::COMMENT || type == $XMLEvent::PROCESSING_INSTRUCTION) {
				$assign(data, nullptr);
			} else if (type == $XMLEvent::END_DOCUMENT) {
				$throwNew($XMLStreamException, "unexpected end of document when reading element text content"_s);
			} else if (type == $XMLEvent::START_ELEMENT) {
				$throwNew($XMLStreamException, "elementGetText() function expects text only elment but START_ELEMENT was encountered."_s, $(event->getLocation()));
			} else {
				$throwNew($XMLStreamException, $$str({"Unexpected event type "_s, $$str(type)}), $(event->getLocation()));
			}
			if (data != nullptr && data->length() > 0) {
				buffer->append(data);
			}
			$assign(event, nextEvent());
		}
		return buffer->toString();
	}
	$assign(data, $nc(this->fXMLReader)->getElementText());
	$set(this, fLastEvent, $nc(this->fXMLEventAllocator)->allocate(this->fXMLReader));
	return data;
}

$Object* XMLEventReaderImpl::getProperty($String* name) {
	return $of($nc(this->fXMLReader)->getProperty(name));
}

$XMLEvent* XMLEventReaderImpl::nextTag() {
	$useLocalCurrentObjectStackCache();
	if (this->fPeekedEvent != nullptr) {
		$var($XMLEvent, event, this->fPeekedEvent);
		$set(this, fPeekedEvent, nullptr);
		int32_t eventType = $nc(event)->getEventType();
		bool var$0 = event->isCharacters();
		if ((var$0 && $nc($(event->asCharacters()))->isWhiteSpace()) || eventType == $XMLStreamConstants::PROCESSING_INSTRUCTION || eventType == $XMLStreamConstants::COMMENT || eventType == $XMLStreamConstants::START_DOCUMENT) {
			$assign(event, nextEvent());
			eventType = $nc(event)->getEventType();
		}
		while (true) {
			bool var$1 = event->isCharacters();
			if (!((var$1 && $nc($($nc(event)->asCharacters()))->isWhiteSpace()) || eventType == $XMLStreamConstants::PROCESSING_INSTRUCTION || eventType == $XMLStreamConstants::COMMENT)) {
				break;
			}
			{
				$assign(event, nextEvent());
				eventType = $nc(event)->getEventType();
			}
		}
		if (eventType != $XMLStreamConstants::START_ELEMENT && eventType != $XMLStreamConstants::END_ELEMENT) {
			$throwNew($XMLStreamException, "expected start or end tag"_s, $(event->getLocation()));
		}
		return event;
	}
	$nc(this->fXMLReader)->nextTag();
	return ($set(this, fLastEvent, $nc(this->fXMLEventAllocator)->allocate(this->fXMLReader)));
}

$Object* XMLEventReaderImpl::next() {
	$useLocalCurrentObjectStackCache();
	$var($Object, object, nullptr);
	try {
		$assign(object, nextEvent());
	} catch ($XMLStreamException& streamException) {
		$set(this, fLastEvent, nullptr);
		$var($NoSuchElementException, e, $new($NoSuchElementException, $(streamException->getMessage())));
		e->initCause($(streamException->getCause()));
		$throw(e);
	}
	return $of(object);
}

$XMLEvent* XMLEventReaderImpl::peek() {
	if (this->fPeekedEvent != nullptr) {
		return this->fPeekedEvent;
	}
	if (hasNext()) {
		$nc(this->fXMLReader)->next();
		$set(this, fPeekedEvent, $nc(this->fXMLEventAllocator)->allocate(this->fXMLReader));
		return this->fPeekedEvent;
	} else {
		return nullptr;
	}
}

XMLEventReaderImpl::XMLEventReaderImpl() {
}

$Class* XMLEventReaderImpl::load$($String* name, bool initialize) {
	$loadClass(XMLEventReaderImpl, name, initialize, &_XMLEventReaderImpl_ClassInfo_, allocate$XMLEventReaderImpl);
	return class$;
}

$Class* XMLEventReaderImpl::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com