#include <com/sun/xml/internal/stream/events/DummyEvent.h>

#include <com/sun/xml/internal/stream/events/DummyEvent$DummyLocation.h>
#include <java/io/IOException.h>
#include <java/io/Writer.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/StartElement.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef CHARACTERS
#undef END_DOCUMENT
#undef END_ELEMENT
#undef ENTITY_REFERENCE
#undef NAMESPACE
#undef PROCESSING_INSTRUCTION
#undef START_DOCUMENT
#undef START_ELEMENT

using $DummyEvent$DummyLocation = ::com::sun::xml::internal::stream::events::DummyEvent$DummyLocation;
using $IOException = ::java::io::IOException;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $QName = ::javax::xml::namespace$::QName;
using $Location = ::javax::xml::stream::Location;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $Characters = ::javax::xml::stream::events::Characters;
using $EndElement = ::javax::xml::stream::events::EndElement;
using $StartElement = ::javax::xml::stream::events::StartElement;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

$FieldInfo _DummyEvent_FieldInfo_[] = {
	{"nowhere", "Lcom/sun/xml/internal/stream/events/DummyEvent$DummyLocation;", nullptr, $PRIVATE | $STATIC, $staticField(DummyEvent, nowhere)},
	{"fEventType", "I", nullptr, $PRIVATE, $field(DummyEvent, fEventType)},
	{"fLocation", "Ljavax/xml/stream/Location;", nullptr, $PROTECTED, $field(DummyEvent, fLocation)},
	{}
};

$MethodInfo _DummyEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DummyEvent, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(DummyEvent, init$, void, int32_t)},
	{"asCharacters", "()Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC, $virtualMethod(DummyEvent, asCharacters, $Characters*)},
	{"asEndElement", "()Ljavax/xml/stream/events/EndElement;", nullptr, $PUBLIC, $virtualMethod(DummyEvent, asEndElement, $EndElement*)},
	{"asStartElement", "()Ljavax/xml/stream/events/StartElement;", nullptr, $PUBLIC, $virtualMethod(DummyEvent, asStartElement, $StartElement*)},
	{"charEncode", "(Ljava/io/Writer;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(DummyEvent, charEncode, void, $Writer*, $String*), "java.io.IOException"},
	{"getEventType", "()I", nullptr, $PUBLIC, $virtualMethod(DummyEvent, getEventType, int32_t)},
	{"getLocation", "()Ljavax/xml/stream/Location;", nullptr, $PUBLIC, $virtualMethod(DummyEvent, getLocation, $Location*)},
	{"getSchemaType", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC, $virtualMethod(DummyEvent, getSchemaType, $QName*)},
	{"isAttribute", "()Z", nullptr, $PUBLIC, $virtualMethod(DummyEvent, isAttribute, bool)},
	{"isCharacterData", "()Z", nullptr, $PUBLIC, $virtualMethod(DummyEvent, isCharacterData, bool)},
	{"isCharacters", "()Z", nullptr, $PUBLIC, $virtualMethod(DummyEvent, isCharacters, bool)},
	{"isEndDocument", "()Z", nullptr, $PUBLIC, $virtualMethod(DummyEvent, isEndDocument, bool)},
	{"isEndElement", "()Z", nullptr, $PUBLIC, $virtualMethod(DummyEvent, isEndElement, bool)},
	{"isEntityReference", "()Z", nullptr, $PUBLIC, $virtualMethod(DummyEvent, isEntityReference, bool)},
	{"isNamespace", "()Z", nullptr, $PUBLIC, $virtualMethod(DummyEvent, isNamespace, bool)},
	{"isProcessingInstruction", "()Z", nullptr, $PUBLIC, $virtualMethod(DummyEvent, isProcessingInstruction, bool)},
	{"isStartDocument", "()Z", nullptr, $PUBLIC, $virtualMethod(DummyEvent, isStartDocument, bool)},
	{"isStartElement", "()Z", nullptr, $PUBLIC, $virtualMethod(DummyEvent, isStartElement, bool)},
	{"setEventType", "(I)V", nullptr, $PROTECTED, $virtualMethod(DummyEvent, setEventType, void, int32_t)},
	{"setLocation", "(Ljavax/xml/stream/Location;)V", nullptr, 0, $virtualMethod(DummyEvent, setLocation, void, $Location*)},
	{"writeAsEncodedUnicode", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $virtualMethod(DummyEvent, writeAsEncodedUnicode, void, $Writer*), "javax.xml.stream.XMLStreamException"},
	{"writeAsEncodedUnicodeEx", "(Ljava/io/Writer;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(DummyEvent, writeAsEncodedUnicodeEx, void, $Writer*), "java.io.IOException,javax.xml.stream.XMLStreamException"},
	{}
};

$InnerClassInfo _DummyEvent_InnerClassesInfo_[] = {
	{"com.sun.xml.internal.stream.events.DummyEvent$DummyLocation", "com.sun.xml.internal.stream.events.DummyEvent", "DummyLocation", $STATIC},
	{}
};

$ClassInfo _DummyEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.xml.internal.stream.events.DummyEvent",
	"java.lang.Object",
	"javax.xml.stream.events.XMLEvent",
	_DummyEvent_FieldInfo_,
	_DummyEvent_MethodInfo_,
	nullptr,
	nullptr,
	_DummyEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.xml.internal.stream.events.DummyEvent$DummyLocation"
};

$Object* allocate$DummyEvent($Class* clazz) {
	return $of($alloc(DummyEvent));
}

$DummyEvent$DummyLocation* DummyEvent::nowhere = nullptr;

void DummyEvent::init$() {
	$set(this, fLocation, static_cast<$Location*>(DummyEvent::nowhere));
}

void DummyEvent::init$(int32_t i) {
	$set(this, fLocation, static_cast<$Location*>(DummyEvent::nowhere));
	this->fEventType = i;
}

int32_t DummyEvent::getEventType() {
	return this->fEventType;
}

void DummyEvent::setEventType(int32_t eventType) {
	this->fEventType = eventType;
}

bool DummyEvent::isStartElement() {
	return this->fEventType == $XMLEvent::START_ELEMENT;
}

bool DummyEvent::isEndElement() {
	return this->fEventType == $XMLEvent::END_ELEMENT;
}

bool DummyEvent::isEntityReference() {
	return this->fEventType == $XMLEvent::ENTITY_REFERENCE;
}

bool DummyEvent::isProcessingInstruction() {
	return this->fEventType == $XMLEvent::PROCESSING_INSTRUCTION;
}

bool DummyEvent::isCharacterData() {
	return this->fEventType == $XMLEvent::CHARACTERS;
}

bool DummyEvent::isStartDocument() {
	return this->fEventType == $XMLEvent::START_DOCUMENT;
}

bool DummyEvent::isEndDocument() {
	return this->fEventType == $XMLEvent::END_DOCUMENT;
}

$Location* DummyEvent::getLocation() {
	return this->fLocation;
}

void DummyEvent::setLocation($Location* loc) {
	if (loc == nullptr) {
		$set(this, fLocation, DummyEvent::nowhere);
	} else {
		$set(this, fLocation, loc);
	}
}

$Characters* DummyEvent::asCharacters() {
	return $cast($Characters, this);
}

$EndElement* DummyEvent::asEndElement() {
	return $cast($EndElement, this);
}

$StartElement* DummyEvent::asStartElement() {
	return $cast($StartElement, this);
}

$QName* DummyEvent::getSchemaType() {
	return nullptr;
}

bool DummyEvent::isAttribute() {
	return this->fEventType == $XMLEvent::ATTRIBUTE;
}

bool DummyEvent::isCharacters() {
	return this->fEventType == $XMLEvent::CHARACTERS;
}

bool DummyEvent::isNamespace() {
	return this->fEventType == $XMLEvent::NAMESPACE;
}

void DummyEvent::writeAsEncodedUnicode($Writer* writer) {
	try {
		writeAsEncodedUnicodeEx(writer);
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void DummyEvent::charEncode($Writer* writer, $String* data) {
	if (data == nullptr || data == ""_s) {
		return;
	}
	int32_t i = 0;
	int32_t start = 0;
	int32_t len = $nc(data)->length();
	for (; i < len; ++i) {
		switch (data->charAt(i)) {
		case u'<':
			{
				$nc(writer)->write(data, start, i - start);
				$nc(writer)->write("&lt;"_s);
				start = i + 1;
				break;
			}
		case u'&':
			{
				$nc(writer)->write(data, start, i - start);
				$nc(writer)->write("&amp;"_s);
				start = i + 1;
				break;
			}
		case u'>':
			{
				$nc(writer)->write(data, start, i - start);
				$nc(writer)->write("&gt;"_s);
				start = i + 1;
				break;
			}
		case u'\"':
			{
				$nc(writer)->write(data, start, i - start);
				$nc(writer)->write("&quot;"_s);
				start = i + 1;
				break;
			}
		}
	}
	$nc(writer)->write(data, start, len - start);
}

void clinit$DummyEvent($Class* class$) {
	$assignStatic(DummyEvent::nowhere, $new($DummyEvent$DummyLocation));
}

DummyEvent::DummyEvent() {
}

$Class* DummyEvent::load$($String* name, bool initialize) {
	$loadClass(DummyEvent, name, initialize, &_DummyEvent_ClassInfo_, clinit$DummyEvent, allocate$DummyEvent);
	return class$;
}

$Class* DummyEvent::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com