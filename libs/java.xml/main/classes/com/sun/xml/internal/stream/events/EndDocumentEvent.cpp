#include <com/sun/xml/internal/stream/events/EndDocumentEvent.h>

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <java/io/Writer.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLStreamConstants.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/StartElement.h>
#include <jcpp.h>

#undef END_DOCUMENT

using $DummyEvent = ::com::sun::xml::internal::stream::events::DummyEvent;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $QName = ::javax::xml::namespace$::QName;
using $Location = ::javax::xml::stream::Location;
using $XMLStreamConstants = ::javax::xml::stream::XMLStreamConstants;
using $Characters = ::javax::xml::stream::events::Characters;
using $EndElement = ::javax::xml::stream::events::EndElement;
using $StartElement = ::javax::xml::stream::events::StartElement;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

$MethodInfo _EndDocumentEvent_MethodInfo_[] = {
	{"*asCharacters", "()Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC},
	{"*asEndElement", "()Ljavax/xml/stream/events/EndElement;", nullptr, $PUBLIC},
	{"*asStartElement", "()Ljavax/xml/stream/events/StartElement;", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getEventType", "()I", nullptr, $PUBLIC},
	{"*getLocation", "()Ljavax/xml/stream/Location;", nullptr, $PUBLIC},
	{"*getSchemaType", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(EndDocumentEvent, init$, void)},
	{"init", "()V", nullptr, $PROTECTED, $virtualMethod(EndDocumentEvent, init, void)},
	{"*isAttribute", "()Z", nullptr, $PUBLIC},
	{"*isCharacters", "()Z", nullptr, $PUBLIC},
	{"*isEndDocument", "()Z", nullptr, $PUBLIC},
	{"*isEndElement", "()Z", nullptr, $PUBLIC},
	{"*isEntityReference", "()Z", nullptr, $PUBLIC},
	{"*isNamespace", "()Z", nullptr, $PUBLIC},
	{"*isProcessingInstruction", "()Z", nullptr, $PUBLIC},
	{"*isStartDocument", "()Z", nullptr, $PUBLIC},
	{"*isStartElement", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EndDocumentEvent, toString, $String*)},
	{"*writeAsEncodedUnicode", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{"writeAsEncodedUnicodeEx", "(Ljava/io/Writer;)V", nullptr, $PROTECTED, $virtualMethod(EndDocumentEvent, writeAsEncodedUnicodeEx, void, $Writer*), "java.io.IOException"},
	{}
};

$ClassInfo _EndDocumentEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.EndDocumentEvent",
	"com.sun.xml.internal.stream.events.DummyEvent",
	"javax.xml.stream.events.EndDocument",
	nullptr,
	_EndDocumentEvent_MethodInfo_
};

$Object* allocate$EndDocumentEvent($Class* clazz) {
	return $of($alloc(EndDocumentEvent));
}

int32_t EndDocumentEvent::getEventType() {
	 return this->$DummyEvent::getEventType();
}

bool EndDocumentEvent::isStartElement() {
	 return this->$DummyEvent::isStartElement();
}

bool EndDocumentEvent::isEndElement() {
	 return this->$DummyEvent::isEndElement();
}

bool EndDocumentEvent::isEntityReference() {
	 return this->$DummyEvent::isEntityReference();
}

bool EndDocumentEvent::isProcessingInstruction() {
	 return this->$DummyEvent::isProcessingInstruction();
}

bool EndDocumentEvent::isStartDocument() {
	 return this->$DummyEvent::isStartDocument();
}

bool EndDocumentEvent::isEndDocument() {
	 return this->$DummyEvent::isEndDocument();
}

$Location* EndDocumentEvent::getLocation() {
	 return this->$DummyEvent::getLocation();
}

$Characters* EndDocumentEvent::asCharacters() {
	 return this->$DummyEvent::asCharacters();
}

$EndElement* EndDocumentEvent::asEndElement() {
	 return this->$DummyEvent::asEndElement();
}

$StartElement* EndDocumentEvent::asStartElement() {
	 return this->$DummyEvent::asStartElement();
}

$QName* EndDocumentEvent::getSchemaType() {
	 return this->$DummyEvent::getSchemaType();
}

bool EndDocumentEvent::isAttribute() {
	 return this->$DummyEvent::isAttribute();
}

bool EndDocumentEvent::isCharacters() {
	 return this->$DummyEvent::isCharacters();
}

bool EndDocumentEvent::isNamespace() {
	 return this->$DummyEvent::isNamespace();
}

void EndDocumentEvent::writeAsEncodedUnicode($Writer* writer) {
	this->$DummyEvent::writeAsEncodedUnicode(writer);
}

int32_t EndDocumentEvent::hashCode() {
	 return this->$DummyEvent::hashCode();
}

bool EndDocumentEvent::equals(Object$* arg0) {
	 return this->$DummyEvent::equals(arg0);
}

$Object* EndDocumentEvent::clone() {
	 return this->$DummyEvent::clone();
}

void EndDocumentEvent::finalize() {
	this->$DummyEvent::finalize();
}

void EndDocumentEvent::init$() {
	$DummyEvent::init$();
	init();
}

void EndDocumentEvent::init() {
	setEventType($XMLStreamConstants::END_DOCUMENT);
}

$String* EndDocumentEvent::toString() {
	return "ENDDOCUMENT"_s;
}

void EndDocumentEvent::writeAsEncodedUnicodeEx($Writer* writer) {
}

EndDocumentEvent::EndDocumentEvent() {
}

$Class* EndDocumentEvent::load$($String* name, bool initialize) {
	$loadClass(EndDocumentEvent, name, initialize, &_EndDocumentEvent_ClassInfo_, allocate$EndDocumentEvent);
	return class$;
}

$Class* EndDocumentEvent::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com