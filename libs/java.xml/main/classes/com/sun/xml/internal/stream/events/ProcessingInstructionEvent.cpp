#include <com/sun/xml/internal/stream/events/ProcessingInstructionEvent.h>

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <java/io/Writer.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLStreamConstants.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/StartElement.h>
#include <jcpp.h>

#undef PROCESSING_INSTRUCTION

using $DummyEvent = ::com::sun::xml::internal::stream::events::DummyEvent;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _ProcessingInstructionEvent_FieldInfo_[] = {
	{"fName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ProcessingInstructionEvent, fName)},
	{"fContent", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ProcessingInstructionEvent, fContent)},
	{}
};

$MethodInfo _ProcessingInstructionEvent_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(ProcessingInstructionEvent, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ProcessingInstructionEvent, init$, void, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/xml/stream/Location;)V", nullptr, $PUBLIC, $method(ProcessingInstructionEvent, init$, void, $String*, $String*, $Location*)},
	{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionEvent, getData, $String*)},
	{"getTarget", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionEvent, getTarget, $String*)},
	{"init", "()V", nullptr, $PROTECTED, $virtualMethod(ProcessingInstructionEvent, init, void)},
	{"*isAttribute", "()Z", nullptr, $PUBLIC},
	{"*isCharacters", "()Z", nullptr, $PUBLIC},
	{"*isEndDocument", "()Z", nullptr, $PUBLIC},
	{"*isEndElement", "()Z", nullptr, $PUBLIC},
	{"*isEntityReference", "()Z", nullptr, $PUBLIC},
	{"*isNamespace", "()Z", nullptr, $PUBLIC},
	{"*isProcessingInstruction", "()Z", nullptr, $PUBLIC},
	{"*isStartDocument", "()Z", nullptr, $PUBLIC},
	{"*isStartElement", "()Z", nullptr, $PUBLIC},
	{"setData", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionEvent, setData, void, $String*)},
	{"setTarget", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionEvent, setTarget, void, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionEvent, toString, $String*)},
	{"*writeAsEncodedUnicode", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{"writeAsEncodedUnicodeEx", "(Ljava/io/Writer;)V", nullptr, $PROTECTED, $virtualMethod(ProcessingInstructionEvent, writeAsEncodedUnicodeEx, void, $Writer*), "java.io.IOException"},
	{}
};

$ClassInfo _ProcessingInstructionEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.ProcessingInstructionEvent",
	"com.sun.xml.internal.stream.events.DummyEvent",
	"javax.xml.stream.events.ProcessingInstruction",
	_ProcessingInstructionEvent_FieldInfo_,
	_ProcessingInstructionEvent_MethodInfo_
};

$Object* allocate$ProcessingInstructionEvent($Class* clazz) {
	return $of($alloc(ProcessingInstructionEvent));
}

int32_t ProcessingInstructionEvent::getEventType() {
	 return this->$DummyEvent::getEventType();
}

bool ProcessingInstructionEvent::isStartElement() {
	 return this->$DummyEvent::isStartElement();
}

bool ProcessingInstructionEvent::isEndElement() {
	 return this->$DummyEvent::isEndElement();
}

bool ProcessingInstructionEvent::isEntityReference() {
	 return this->$DummyEvent::isEntityReference();
}

bool ProcessingInstructionEvent::isProcessingInstruction() {
	 return this->$DummyEvent::isProcessingInstruction();
}

bool ProcessingInstructionEvent::isStartDocument() {
	 return this->$DummyEvent::isStartDocument();
}

bool ProcessingInstructionEvent::isEndDocument() {
	 return this->$DummyEvent::isEndDocument();
}

$Location* ProcessingInstructionEvent::getLocation() {
	 return this->$DummyEvent::getLocation();
}

$Characters* ProcessingInstructionEvent::asCharacters() {
	 return this->$DummyEvent::asCharacters();
}

$EndElement* ProcessingInstructionEvent::asEndElement() {
	 return this->$DummyEvent::asEndElement();
}

$StartElement* ProcessingInstructionEvent::asStartElement() {
	 return this->$DummyEvent::asStartElement();
}

$QName* ProcessingInstructionEvent::getSchemaType() {
	 return this->$DummyEvent::getSchemaType();
}

bool ProcessingInstructionEvent::isAttribute() {
	 return this->$DummyEvent::isAttribute();
}

bool ProcessingInstructionEvent::isCharacters() {
	 return this->$DummyEvent::isCharacters();
}

bool ProcessingInstructionEvent::isNamespace() {
	 return this->$DummyEvent::isNamespace();
}

void ProcessingInstructionEvent::writeAsEncodedUnicode($Writer* writer) {
	this->$DummyEvent::writeAsEncodedUnicode(writer);
}

int32_t ProcessingInstructionEvent::hashCode() {
	 return this->$DummyEvent::hashCode();
}

bool ProcessingInstructionEvent::equals(Object$* arg0) {
	 return this->$DummyEvent::equals(arg0);
}

$Object* ProcessingInstructionEvent::clone() {
	 return this->$DummyEvent::clone();
}

void ProcessingInstructionEvent::finalize() {
	this->$DummyEvent::finalize();
}

void ProcessingInstructionEvent::init$() {
	$DummyEvent::init$();
	init();
}

void ProcessingInstructionEvent::init$($String* targetName, $String* data) {
	ProcessingInstructionEvent::init$(targetName, data, nullptr);
}

void ProcessingInstructionEvent::init$($String* targetName, $String* data, $Location* loc) {
	$DummyEvent::init$();
	init();
	$set(this, fName, targetName);
	$set(this, fContent, data);
	setLocation(loc);
}

void ProcessingInstructionEvent::init() {
	setEventType($XMLStreamConstants::PROCESSING_INSTRUCTION);
}

$String* ProcessingInstructionEvent::getTarget() {
	return this->fName;
}

void ProcessingInstructionEvent::setTarget($String* targetName) {
	$set(this, fName, targetName);
}

void ProcessingInstructionEvent::setData($String* data) {
	$set(this, fContent, data);
}

$String* ProcessingInstructionEvent::getData() {
	return this->fContent;
}

$String* ProcessingInstructionEvent::toString() {
	if (this->fContent != nullptr && this->fName != nullptr) {
		return $str({"<?"_s, this->fName, " "_s, this->fContent, "?>"_s});
	}
	if (this->fName != nullptr) {
		return $str({"<?"_s, this->fName, "?>"_s});
	}
	if (this->fContent != nullptr) {
		return $str({"<?"_s, this->fContent, "?>"_s});
	} else {
		return "<??>"_s;
	}
}

void ProcessingInstructionEvent::writeAsEncodedUnicodeEx($Writer* writer) {
	$nc(writer)->write($(toString()));
}

ProcessingInstructionEvent::ProcessingInstructionEvent() {
}

$Class* ProcessingInstructionEvent::load$($String* name, bool initialize) {
	$loadClass(ProcessingInstructionEvent, name, initialize, &_ProcessingInstructionEvent_ClassInfo_, allocate$ProcessingInstructionEvent);
	return class$;
}

$Class* ProcessingInstructionEvent::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com