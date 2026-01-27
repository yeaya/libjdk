#include <com/sun/xml/internal/stream/events/EntityReferenceEvent.h>

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <java/io/Writer.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/EntityDeclaration.h>
#include <javax/xml/stream/events/StartElement.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef ENTITY_REFERENCE

using $DummyEvent = ::com::sun::xml::internal::stream::events::DummyEvent;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $QName = ::javax::xml::namespace$::QName;
using $Location = ::javax::xml::stream::Location;
using $Characters = ::javax::xml::stream::events::Characters;
using $EndElement = ::javax::xml::stream::events::EndElement;
using $EntityDeclaration = ::javax::xml::stream::events::EntityDeclaration;
using $StartElement = ::javax::xml::stream::events::StartElement;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

$FieldInfo _EntityReferenceEvent_FieldInfo_[] = {
	{"fEntityDeclaration", "Ljavax/xml/stream/events/EntityDeclaration;", nullptr, $PRIVATE, $field(EntityReferenceEvent, fEntityDeclaration)},
	{"fEntityName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(EntityReferenceEvent, fEntityName)},
	{}
};

$MethodInfo _EntityReferenceEvent_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(EntityReferenceEvent, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljavax/xml/stream/events/EntityDeclaration;)V", nullptr, $PUBLIC, $method(EntityReferenceEvent, init$, void, $String*, $EntityDeclaration*)},
	{"getDeclaration", "()Ljavax/xml/stream/events/EntityDeclaration;", nullptr, $PUBLIC, $virtualMethod(EntityReferenceEvent, getDeclaration, $EntityDeclaration*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityReferenceEvent, getName, $String*)},
	{"init", "()V", nullptr, $PROTECTED, $virtualMethod(EntityReferenceEvent, init, void)},
	{"*isAttribute", "()Z", nullptr, $PUBLIC},
	{"*isCharacters", "()Z", nullptr, $PUBLIC},
	{"*isEndDocument", "()Z", nullptr, $PUBLIC},
	{"*isEndElement", "()Z", nullptr, $PUBLIC},
	{"*isEntityReference", "()Z", nullptr, $PUBLIC},
	{"*isNamespace", "()Z", nullptr, $PUBLIC},
	{"*isProcessingInstruction", "()Z", nullptr, $PUBLIC},
	{"*isStartDocument", "()Z", nullptr, $PUBLIC},
	{"*isStartElement", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityReferenceEvent, toString, $String*)},
	{"*writeAsEncodedUnicode", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{"writeAsEncodedUnicodeEx", "(Ljava/io/Writer;)V", nullptr, $PROTECTED, $virtualMethod(EntityReferenceEvent, writeAsEncodedUnicodeEx, void, $Writer*), "java.io.IOException"},
	{}
};

$ClassInfo _EntityReferenceEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.EntityReferenceEvent",
	"com.sun.xml.internal.stream.events.DummyEvent",
	"javax.xml.stream.events.EntityReference",
	_EntityReferenceEvent_FieldInfo_,
	_EntityReferenceEvent_MethodInfo_
};

$Object* allocate$EntityReferenceEvent($Class* clazz) {
	return $of($alloc(EntityReferenceEvent));
}

int32_t EntityReferenceEvent::getEventType() {
	 return this->$DummyEvent::getEventType();
}

bool EntityReferenceEvent::isStartElement() {
	 return this->$DummyEvent::isStartElement();
}

bool EntityReferenceEvent::isEndElement() {
	 return this->$DummyEvent::isEndElement();
}

bool EntityReferenceEvent::isEntityReference() {
	 return this->$DummyEvent::isEntityReference();
}

bool EntityReferenceEvent::isProcessingInstruction() {
	 return this->$DummyEvent::isProcessingInstruction();
}

bool EntityReferenceEvent::isStartDocument() {
	 return this->$DummyEvent::isStartDocument();
}

bool EntityReferenceEvent::isEndDocument() {
	 return this->$DummyEvent::isEndDocument();
}

$Location* EntityReferenceEvent::getLocation() {
	 return this->$DummyEvent::getLocation();
}

$Characters* EntityReferenceEvent::asCharacters() {
	 return this->$DummyEvent::asCharacters();
}

$EndElement* EntityReferenceEvent::asEndElement() {
	 return this->$DummyEvent::asEndElement();
}

$StartElement* EntityReferenceEvent::asStartElement() {
	 return this->$DummyEvent::asStartElement();
}

$QName* EntityReferenceEvent::getSchemaType() {
	 return this->$DummyEvent::getSchemaType();
}

bool EntityReferenceEvent::isAttribute() {
	 return this->$DummyEvent::isAttribute();
}

bool EntityReferenceEvent::isCharacters() {
	 return this->$DummyEvent::isCharacters();
}

bool EntityReferenceEvent::isNamespace() {
	 return this->$DummyEvent::isNamespace();
}

void EntityReferenceEvent::writeAsEncodedUnicode($Writer* writer) {
	this->$DummyEvent::writeAsEncodedUnicode(writer);
}

int32_t EntityReferenceEvent::hashCode() {
	 return this->$DummyEvent::hashCode();
}

bool EntityReferenceEvent::equals(Object$* arg0) {
	 return this->$DummyEvent::equals(arg0);
}

$Object* EntityReferenceEvent::clone() {
	 return this->$DummyEvent::clone();
}

void EntityReferenceEvent::finalize() {
	this->$DummyEvent::finalize();
}

void EntityReferenceEvent::init$() {
	$DummyEvent::init$();
	init();
}

void EntityReferenceEvent::init$($String* entityName, $EntityDeclaration* entityDeclaration) {
	$DummyEvent::init$();
	init();
	$set(this, fEntityName, entityName);
	$set(this, fEntityDeclaration, entityDeclaration);
}

$String* EntityReferenceEvent::getName() {
	return this->fEntityName;
}

$String* EntityReferenceEvent::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, text, $nc(this->fEntityDeclaration)->getReplacementText());
	if (text == nullptr) {
		$assign(text, ""_s);
	}
	return $str({"&"_s, $(getName()), ";=\'"_s, text, "\'"_s});
}

void EntityReferenceEvent::writeAsEncodedUnicodeEx($Writer* writer) {
	$nc(writer)->write((int32_t)u'&');
	writer->write($(getName()));
	writer->write((int32_t)u';');
}

$EntityDeclaration* EntityReferenceEvent::getDeclaration() {
	return this->fEntityDeclaration;
}

void EntityReferenceEvent::init() {
	setEventType($XMLEvent::ENTITY_REFERENCE);
}

EntityReferenceEvent::EntityReferenceEvent() {
}

$Class* EntityReferenceEvent::load$($String* name, bool initialize) {
	$loadClass(EntityReferenceEvent, name, initialize, &_EntityReferenceEvent_ClassInfo_, allocate$EntityReferenceEvent);
	return class$;
}

$Class* EntityReferenceEvent::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com