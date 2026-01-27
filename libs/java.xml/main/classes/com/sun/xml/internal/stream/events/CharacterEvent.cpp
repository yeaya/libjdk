#include <com/sun/xml/internal/stream/events/CharacterEvent.h>

#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <java/io/Writer.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/StartElement.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef CHARACTERS

using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
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

$FieldInfo _CharacterEvent_FieldInfo_[] = {
	{"fData", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CharacterEvent, fData)},
	{"fIsCData", "Z", nullptr, $PRIVATE, $field(CharacterEvent, fIsCData)},
	{"fIsIgnorableWhitespace", "Z", nullptr, $PRIVATE, $field(CharacterEvent, fIsIgnorableWhitespace)},
	{"fIsSpace", "Z", nullptr, $PRIVATE, $field(CharacterEvent, fIsSpace)},
	{"fCheckIfSpaceNeeded", "Z", nullptr, $PRIVATE, $field(CharacterEvent, fCheckIfSpaceNeeded)},
	{}
};

$MethodInfo _CharacterEvent_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(CharacterEvent, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CharacterEvent, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(CharacterEvent, init$, void, $String*, bool)},
	{"<init>", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, $method(CharacterEvent, init$, void, $String*, bool, bool)},
	{"checkWhiteSpace", "()V", nullptr, $PRIVATE, $method(CharacterEvent, checkWhiteSpace, void)},
	{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CharacterEvent, getData, $String*)},
	{"init", "()V", nullptr, $PROTECTED, $virtualMethod(CharacterEvent, init, void)},
	{"*isAttribute", "()Z", nullptr, $PUBLIC},
	{"isCData", "()Z", nullptr, $PUBLIC, $virtualMethod(CharacterEvent, isCData, bool)},
	{"*isCharacters", "()Z", nullptr, $PUBLIC},
	{"*isEndDocument", "()Z", nullptr, $PUBLIC},
	{"*isEndElement", "()Z", nullptr, $PUBLIC},
	{"*isEntityReference", "()Z", nullptr, $PUBLIC},
	{"isIgnorableWhiteSpace", "()Z", nullptr, $PUBLIC, $virtualMethod(CharacterEvent, isIgnorableWhiteSpace, bool)},
	{"*isNamespace", "()Z", nullptr, $PUBLIC},
	{"*isProcessingInstruction", "()Z", nullptr, $PUBLIC},
	{"*isStartDocument", "()Z", nullptr, $PUBLIC},
	{"*isStartElement", "()Z", nullptr, $PUBLIC},
	{"isWhiteSpace", "()Z", nullptr, $PUBLIC, $virtualMethod(CharacterEvent, isWhiteSpace, bool)},
	{"setData", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CharacterEvent, setData, void, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CharacterEvent, toString, $String*)},
	{"*writeAsEncodedUnicode", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{"writeAsEncodedUnicodeEx", "(Ljava/io/Writer;)V", nullptr, $PROTECTED, $virtualMethod(CharacterEvent, writeAsEncodedUnicodeEx, void, $Writer*), "java.io.IOException"},
	{}
};

$ClassInfo _CharacterEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.CharacterEvent",
	"com.sun.xml.internal.stream.events.DummyEvent",
	"javax.xml.stream.events.Characters",
	_CharacterEvent_FieldInfo_,
	_CharacterEvent_MethodInfo_
};

$Object* allocate$CharacterEvent($Class* clazz) {
	return $of($alloc(CharacterEvent));
}

int32_t CharacterEvent::getEventType() {
	 return this->$DummyEvent::getEventType();
}

bool CharacterEvent::isStartElement() {
	 return this->$DummyEvent::isStartElement();
}

bool CharacterEvent::isEndElement() {
	 return this->$DummyEvent::isEndElement();
}

bool CharacterEvent::isEntityReference() {
	 return this->$DummyEvent::isEntityReference();
}

bool CharacterEvent::isProcessingInstruction() {
	 return this->$DummyEvent::isProcessingInstruction();
}

bool CharacterEvent::isStartDocument() {
	 return this->$DummyEvent::isStartDocument();
}

bool CharacterEvent::isEndDocument() {
	 return this->$DummyEvent::isEndDocument();
}

$Location* CharacterEvent::getLocation() {
	 return this->$DummyEvent::getLocation();
}

$Characters* CharacterEvent::asCharacters() {
	 return this->$DummyEvent::asCharacters();
}

$EndElement* CharacterEvent::asEndElement() {
	 return this->$DummyEvent::asEndElement();
}

$StartElement* CharacterEvent::asStartElement() {
	 return this->$DummyEvent::asStartElement();
}

$QName* CharacterEvent::getSchemaType() {
	 return this->$DummyEvent::getSchemaType();
}

bool CharacterEvent::isAttribute() {
	 return this->$DummyEvent::isAttribute();
}

bool CharacterEvent::isCharacters() {
	 return this->$DummyEvent::isCharacters();
}

bool CharacterEvent::isNamespace() {
	 return this->$DummyEvent::isNamespace();
}

void CharacterEvent::writeAsEncodedUnicode($Writer* writer) {
	this->$DummyEvent::writeAsEncodedUnicode(writer);
}

int32_t CharacterEvent::hashCode() {
	 return this->$DummyEvent::hashCode();
}

bool CharacterEvent::equals(Object$* arg0) {
	 return this->$DummyEvent::equals(arg0);
}

$Object* CharacterEvent::clone() {
	 return this->$DummyEvent::clone();
}

void CharacterEvent::finalize() {
	this->$DummyEvent::finalize();
}

void CharacterEvent::init$() {
	$DummyEvent::init$();
	this->fIsSpace = false;
	this->fCheckIfSpaceNeeded = true;
	this->fIsCData = false;
	init();
}

void CharacterEvent::init$($String* data) {
	$DummyEvent::init$();
	this->fIsSpace = false;
	this->fCheckIfSpaceNeeded = true;
	this->fIsCData = false;
	init();
	$set(this, fData, data);
}

void CharacterEvent::init$($String* data, bool flag) {
	$DummyEvent::init$();
	this->fIsSpace = false;
	this->fCheckIfSpaceNeeded = true;
	init();
	$set(this, fData, data);
	this->fIsCData = flag;
}

void CharacterEvent::init$($String* data, bool flag, bool isIgnorableWhiteSpace) {
	$DummyEvent::init$();
	this->fIsSpace = false;
	this->fCheckIfSpaceNeeded = true;
	init();
	$set(this, fData, data);
	this->fIsCData = flag;
	this->fIsIgnorableWhitespace = isIgnorableWhiteSpace;
}

void CharacterEvent::init() {
	setEventType($XMLEvent::CHARACTERS);
}

$String* CharacterEvent::getData() {
	return this->fData;
}

void CharacterEvent::setData($String* data) {
	$set(this, fData, data);
	this->fCheckIfSpaceNeeded = true;
}

bool CharacterEvent::isCData() {
	return this->fIsCData;
}

$String* CharacterEvent::toString() {
	if (this->fIsCData) {
		return $str({"<![CDATA["_s, $(getData()), "]]>"_s});
	} else {
		return this->fData;
	}
}

void CharacterEvent::writeAsEncodedUnicodeEx($Writer* writer) {
	$useLocalCurrentObjectStackCache();
	if (this->fIsCData) {
		$nc(writer)->write($$str({"<![CDATA["_s, $(getData()), "]]>"_s}));
	} else {
		charEncode(writer, this->fData);
	}
}

bool CharacterEvent::isIgnorableWhiteSpace() {
	return this->fIsIgnorableWhitespace;
}

bool CharacterEvent::isWhiteSpace() {
	if (this->fCheckIfSpaceNeeded) {
		checkWhiteSpace();
		this->fCheckIfSpaceNeeded = false;
	}
	return this->fIsSpace;
}

void CharacterEvent::checkWhiteSpace() {
	if (this->fData != nullptr && $nc(this->fData)->length() > 0) {
		this->fIsSpace = true;
		for (int32_t i = 0; i < $nc(this->fData)->length(); ++i) {
			if (!$XMLChar::isSpace($nc(this->fData)->charAt(i))) {
				this->fIsSpace = false;
				break;
			}
		}
	}
}

CharacterEvent::CharacterEvent() {
}

$Class* CharacterEvent::load$($String* name, bool initialize) {
	$loadClass(CharacterEvent, name, initialize, &_CharacterEvent_ClassInfo_, allocate$CharacterEvent);
	return class$;
}

$Class* CharacterEvent::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com