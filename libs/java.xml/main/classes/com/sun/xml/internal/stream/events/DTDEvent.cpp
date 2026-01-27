#include <com/sun/xml/internal/stream/events/DTDEvent.h>

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <java/io/Writer.h>
#include <java/util/List.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/StartElement.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef DTD

using $DummyEvent = ::com::sun::xml::internal::stream::events::DummyEvent;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $QName = ::javax::xml::namespace$::QName;
using $Location = ::javax::xml::stream::Location;
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

$FieldInfo _DTDEvent_FieldInfo_[] = {
	{"fDoctypeDeclaration", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDEvent, fDoctypeDeclaration)},
	{"fNotations", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/stream/events/NotationDeclaration;>;", $PRIVATE, $field(DTDEvent, fNotations)},
	{"fEntities", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/stream/events/EntityDeclaration;>;", $PRIVATE, $field(DTDEvent, fEntities)},
	{}
};

$MethodInfo _DTDEvent_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(DTDEvent, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DTDEvent, init$, void, $String*)},
	{"getDocumentTypeDeclaration", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTDEvent, getDocumentTypeDeclaration, $String*)},
	{"getEntities", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/stream/events/EntityDeclaration;>;", $PUBLIC, $virtualMethod(DTDEvent, getEntities, $List*)},
	{"getNotations", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/stream/events/NotationDeclaration;>;", $PUBLIC, $virtualMethod(DTDEvent, getNotations, $List*)},
	{"getProcessedDTD", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DTDEvent, getProcessedDTD, $Object*)},
	{"init", "()V", nullptr, $PROTECTED | $FINAL, $method(DTDEvent, init, void)},
	{"*isAttribute", "()Z", nullptr, $PUBLIC},
	{"*isCharacters", "()Z", nullptr, $PUBLIC},
	{"*isEndDocument", "()Z", nullptr, $PUBLIC},
	{"*isEndElement", "()Z", nullptr, $PUBLIC},
	{"*isEntityReference", "()Z", nullptr, $PUBLIC},
	{"*isNamespace", "()Z", nullptr, $PUBLIC},
	{"*isProcessingInstruction", "()Z", nullptr, $PUBLIC},
	{"*isStartDocument", "()Z", nullptr, $PUBLIC},
	{"*isStartElement", "()Z", nullptr, $PUBLIC},
	{"setDocumentTypeDeclaration", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DTDEvent, setDocumentTypeDeclaration, void, $String*)},
	{"setEntities", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/xml/stream/events/EntityDeclaration;>;)V", $PUBLIC, $virtualMethod(DTDEvent, setEntities, void, $List*)},
	{"setNotations", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/xml/stream/events/NotationDeclaration;>;)V", $PUBLIC, $virtualMethod(DTDEvent, setNotations, void, $List*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTDEvent, toString, $String*)},
	{"*writeAsEncodedUnicode", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{"writeAsEncodedUnicodeEx", "(Ljava/io/Writer;)V", nullptr, $PROTECTED, $virtualMethod(DTDEvent, writeAsEncodedUnicodeEx, void, $Writer*), "java.io.IOException"},
	{}
};

$ClassInfo _DTDEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.DTDEvent",
	"com.sun.xml.internal.stream.events.DummyEvent",
	"javax.xml.stream.events.DTD",
	_DTDEvent_FieldInfo_,
	_DTDEvent_MethodInfo_
};

$Object* allocate$DTDEvent($Class* clazz) {
	return $of($alloc(DTDEvent));
}

int32_t DTDEvent::getEventType() {
	 return this->$DummyEvent::getEventType();
}

bool DTDEvent::isStartElement() {
	 return this->$DummyEvent::isStartElement();
}

bool DTDEvent::isEndElement() {
	 return this->$DummyEvent::isEndElement();
}

bool DTDEvent::isEntityReference() {
	 return this->$DummyEvent::isEntityReference();
}

bool DTDEvent::isProcessingInstruction() {
	 return this->$DummyEvent::isProcessingInstruction();
}

bool DTDEvent::isStartDocument() {
	 return this->$DummyEvent::isStartDocument();
}

bool DTDEvent::isEndDocument() {
	 return this->$DummyEvent::isEndDocument();
}

$Location* DTDEvent::getLocation() {
	 return this->$DummyEvent::getLocation();
}

$Characters* DTDEvent::asCharacters() {
	 return this->$DummyEvent::asCharacters();
}

$EndElement* DTDEvent::asEndElement() {
	 return this->$DummyEvent::asEndElement();
}

$StartElement* DTDEvent::asStartElement() {
	 return this->$DummyEvent::asStartElement();
}

$QName* DTDEvent::getSchemaType() {
	 return this->$DummyEvent::getSchemaType();
}

bool DTDEvent::isAttribute() {
	 return this->$DummyEvent::isAttribute();
}

bool DTDEvent::isCharacters() {
	 return this->$DummyEvent::isCharacters();
}

bool DTDEvent::isNamespace() {
	 return this->$DummyEvent::isNamespace();
}

void DTDEvent::writeAsEncodedUnicode($Writer* writer) {
	this->$DummyEvent::writeAsEncodedUnicode(writer);
}

int32_t DTDEvent::hashCode() {
	 return this->$DummyEvent::hashCode();
}

bool DTDEvent::equals(Object$* arg0) {
	 return this->$DummyEvent::equals(arg0);
}

$Object* DTDEvent::clone() {
	 return this->$DummyEvent::clone();
}

void DTDEvent::finalize() {
	this->$DummyEvent::finalize();
}

void DTDEvent::init$() {
	$DummyEvent::init$();
	init();
}

void DTDEvent::init$($String* doctypeDeclaration) {
	$DummyEvent::init$();
	init();
	$set(this, fDoctypeDeclaration, doctypeDeclaration);
}

void DTDEvent::setDocumentTypeDeclaration($String* doctypeDeclaration) {
	$set(this, fDoctypeDeclaration, doctypeDeclaration);
}

$String* DTDEvent::getDocumentTypeDeclaration() {
	return this->fDoctypeDeclaration;
}

void DTDEvent::setEntities($List* entites) {
	$set(this, fEntities, entites);
}

$List* DTDEvent::getEntities() {
	return this->fEntities;
}

void DTDEvent::setNotations($List* notations) {
	$set(this, fNotations, notations);
}

$List* DTDEvent::getNotations() {
	return this->fNotations;
}

$Object* DTDEvent::getProcessedDTD() {
	return $of(nullptr);
}

void DTDEvent::init() {
	setEventType($XMLEvent::DTD);
}

$String* DTDEvent::toString() {
	return this->fDoctypeDeclaration;
}

void DTDEvent::writeAsEncodedUnicodeEx($Writer* writer) {
	$nc(writer)->write(this->fDoctypeDeclaration);
}

DTDEvent::DTDEvent() {
}

$Class* DTDEvent::load$($String* name, bool initialize) {
	$loadClass(DTDEvent, name, initialize, &_DTDEvent_ClassInfo_, allocate$DTDEvent);
	return class$;
}

$Class* DTDEvent::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com