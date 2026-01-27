#include <com/sun/xml/internal/stream/events/CommentEvent.h>

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <java/io/Writer.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/StartElement.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef COMMENT

using $DummyEvent = ::com::sun::xml::internal::stream::events::DummyEvent;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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

$FieldInfo _CommentEvent_FieldInfo_[] = {
	{"fText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CommentEvent, fText)},
	{}
};

$MethodInfo _CommentEvent_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(CommentEvent, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CommentEvent, init$, void, $String*)},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CommentEvent, getText, $String*)},
	{"init", "()V", nullptr, $PROTECTED, $virtualMethod(CommentEvent, init, void)},
	{"*isAttribute", "()Z", nullptr, $PUBLIC},
	{"*isCharacters", "()Z", nullptr, $PUBLIC},
	{"*isEndDocument", "()Z", nullptr, $PUBLIC},
	{"*isEndElement", "()Z", nullptr, $PUBLIC},
	{"*isEntityReference", "()Z", nullptr, $PUBLIC},
	{"*isNamespace", "()Z", nullptr, $PUBLIC},
	{"*isProcessingInstruction", "()Z", nullptr, $PUBLIC},
	{"*isStartDocument", "()Z", nullptr, $PUBLIC},
	{"*isStartElement", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CommentEvent, toString, $String*)},
	{"*writeAsEncodedUnicode", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{"writeAsEncodedUnicodeEx", "(Ljava/io/Writer;)V", nullptr, $PROTECTED, $virtualMethod(CommentEvent, writeAsEncodedUnicodeEx, void, $Writer*), "java.io.IOException"},
	{}
};

$ClassInfo _CommentEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.CommentEvent",
	"com.sun.xml.internal.stream.events.DummyEvent",
	"javax.xml.stream.events.Comment",
	_CommentEvent_FieldInfo_,
	_CommentEvent_MethodInfo_
};

$Object* allocate$CommentEvent($Class* clazz) {
	return $of($alloc(CommentEvent));
}

int32_t CommentEvent::getEventType() {
	 return this->$DummyEvent::getEventType();
}

bool CommentEvent::isStartElement() {
	 return this->$DummyEvent::isStartElement();
}

bool CommentEvent::isEndElement() {
	 return this->$DummyEvent::isEndElement();
}

bool CommentEvent::isEntityReference() {
	 return this->$DummyEvent::isEntityReference();
}

bool CommentEvent::isProcessingInstruction() {
	 return this->$DummyEvent::isProcessingInstruction();
}

bool CommentEvent::isStartDocument() {
	 return this->$DummyEvent::isStartDocument();
}

bool CommentEvent::isEndDocument() {
	 return this->$DummyEvent::isEndDocument();
}

$Location* CommentEvent::getLocation() {
	 return this->$DummyEvent::getLocation();
}

$Characters* CommentEvent::asCharacters() {
	 return this->$DummyEvent::asCharacters();
}

$EndElement* CommentEvent::asEndElement() {
	 return this->$DummyEvent::asEndElement();
}

$StartElement* CommentEvent::asStartElement() {
	 return this->$DummyEvent::asStartElement();
}

$QName* CommentEvent::getSchemaType() {
	 return this->$DummyEvent::getSchemaType();
}

bool CommentEvent::isAttribute() {
	 return this->$DummyEvent::isAttribute();
}

bool CommentEvent::isCharacters() {
	 return this->$DummyEvent::isCharacters();
}

bool CommentEvent::isNamespace() {
	 return this->$DummyEvent::isNamespace();
}

void CommentEvent::writeAsEncodedUnicode($Writer* writer) {
	this->$DummyEvent::writeAsEncodedUnicode(writer);
}

int32_t CommentEvent::hashCode() {
	 return this->$DummyEvent::hashCode();
}

bool CommentEvent::equals(Object$* arg0) {
	 return this->$DummyEvent::equals(arg0);
}

$Object* CommentEvent::clone() {
	 return this->$DummyEvent::clone();
}

void CommentEvent::finalize() {
	this->$DummyEvent::finalize();
}

void CommentEvent::init$() {
	$DummyEvent::init$();
	init();
}

void CommentEvent::init$($String* text) {
	$DummyEvent::init$();
	init();
	$set(this, fText, text);
}

void CommentEvent::init() {
	setEventType($XMLEvent::COMMENT);
}

$String* CommentEvent::toString() {
	return $str({"<!--"_s, $(getText()), "-->"_s});
}

$String* CommentEvent::getText() {
	return this->fText;
}

void CommentEvent::writeAsEncodedUnicodeEx($Writer* writer) {
	$useLocalCurrentObjectStackCache();
	$nc(writer)->write($$str({"<!--"_s, $(getText()), "-->"_s}));
}

CommentEvent::CommentEvent() {
}

$Class* CommentEvent::load$($String* name, bool initialize) {
	$loadClass(CommentEvent, name, initialize, &_CommentEvent_ClassInfo_, allocate$CommentEvent);
	return class$;
}

$Class* CommentEvent::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com