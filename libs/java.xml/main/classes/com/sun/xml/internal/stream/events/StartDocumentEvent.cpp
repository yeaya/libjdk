#include <com/sun/xml/internal/stream/events/StartDocumentEvent.h>

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <java/io/Writer.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLStreamConstants.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/StartElement.h>
#include <jcpp.h>

#undef START_DOCUMENT

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

$FieldInfo _StartDocumentEvent_FieldInfo_[] = {
	{"fSystemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(StartDocumentEvent, fSystemId)},
	{"fEncodingScheam", "Ljava/lang/String;", nullptr, $PROTECTED, $field(StartDocumentEvent, fEncodingScheam)},
	{"fStandalone", "Z", nullptr, $PROTECTED, $field(StartDocumentEvent, fStandalone)},
	{"fVersion", "Ljava/lang/String;", nullptr, $PROTECTED, $field(StartDocumentEvent, fVersion)},
	{"fEncodingSchemeSet", "Z", nullptr, $PRIVATE, $field(StartDocumentEvent, fEncodingSchemeSet)},
	{"fStandaloneSet", "Z", nullptr, $PRIVATE, $field(StartDocumentEvent, fStandaloneSet)},
	{"nestedCall", "Z", nullptr, $PRIVATE, $field(StartDocumentEvent, nestedCall)},
	{}
};

$MethodInfo _StartDocumentEvent_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(StartDocumentEvent, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StartDocumentEvent, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StartDocumentEvent, init$, void, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(StartDocumentEvent, init$, void, $String*, $String*, bool)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ZLjavax/xml/stream/Location;)V", nullptr, $PUBLIC, $method(StartDocumentEvent, init$, void, $String*, $String*, bool, $Location*)},
	{"clear", "()V", nullptr, 0, $virtualMethod(StartDocumentEvent, clear, void)},
	{"encodingSet", "()Z", nullptr, $PUBLIC, $virtualMethod(StartDocumentEvent, encodingSet, bool)},
	{"getCharacterEncodingScheme", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StartDocumentEvent, getCharacterEncodingScheme, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StartDocumentEvent, getSystemId, $String*)},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StartDocumentEvent, getVersion, $String*)},
	{"init", "(Ljava/lang/String;Ljava/lang/String;ZLjavax/xml/stream/Location;)V", nullptr, $PROTECTED, $virtualMethod(StartDocumentEvent, init, void, $String*, $String*, bool, $Location*)},
	{"*isAttribute", "()Z", nullptr, $PUBLIC},
	{"*isCharacters", "()Z", nullptr, $PUBLIC},
	{"*isEndDocument", "()Z", nullptr, $PUBLIC},
	{"*isEndElement", "()Z", nullptr, $PUBLIC},
	{"*isEntityReference", "()Z", nullptr, $PUBLIC},
	{"*isNamespace", "()Z", nullptr, $PUBLIC},
	{"*isProcessingInstruction", "()Z", nullptr, $PUBLIC},
	{"isStandalone", "()Z", nullptr, $PUBLIC, $virtualMethod(StartDocumentEvent, isStandalone, bool)},
	{"isStartDocument", "()Z", nullptr, $PUBLIC, $virtualMethod(StartDocumentEvent, isStartDocument, bool)},
	{"*isStartElement", "()Z", nullptr, $PUBLIC},
	{"setDeclaredEncoding", "(Z)V", nullptr, 0, $virtualMethod(StartDocumentEvent, setDeclaredEncoding, void, bool)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(StartDocumentEvent, setEncoding, void, $String*)},
	{"setStandalone", "(ZZ)V", nullptr, $PUBLIC, $virtualMethod(StartDocumentEvent, setStandalone, void, bool, bool)},
	{"setStandalone", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(StartDocumentEvent, setStandalone, void, $String*)},
	{"setVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(StartDocumentEvent, setVersion, void, $String*)},
	{"standaloneSet", "()Z", nullptr, $PUBLIC, $virtualMethod(StartDocumentEvent, standaloneSet, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StartDocumentEvent, toString, $String*)},
	{"*writeAsEncodedUnicode", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{"writeAsEncodedUnicodeEx", "(Ljava/io/Writer;)V", nullptr, $PROTECTED, $virtualMethod(StartDocumentEvent, writeAsEncodedUnicodeEx, void, $Writer*), "java.io.IOException"},
	{}
};

$ClassInfo _StartDocumentEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.StartDocumentEvent",
	"com.sun.xml.internal.stream.events.DummyEvent",
	"javax.xml.stream.events.StartDocument",
	_StartDocumentEvent_FieldInfo_,
	_StartDocumentEvent_MethodInfo_
};

$Object* allocate$StartDocumentEvent($Class* clazz) {
	return $of($alloc(StartDocumentEvent));
}

int32_t StartDocumentEvent::getEventType() {
	 return this->$DummyEvent::getEventType();
}

bool StartDocumentEvent::isStartElement() {
	 return this->$DummyEvent::isStartElement();
}

bool StartDocumentEvent::isEndElement() {
	 return this->$DummyEvent::isEndElement();
}

bool StartDocumentEvent::isEntityReference() {
	 return this->$DummyEvent::isEntityReference();
}

bool StartDocumentEvent::isProcessingInstruction() {
	 return this->$DummyEvent::isProcessingInstruction();
}

bool StartDocumentEvent::isEndDocument() {
	 return this->$DummyEvent::isEndDocument();
}

$Location* StartDocumentEvent::getLocation() {
	 return this->$DummyEvent::getLocation();
}

$Characters* StartDocumentEvent::asCharacters() {
	 return this->$DummyEvent::asCharacters();
}

$EndElement* StartDocumentEvent::asEndElement() {
	 return this->$DummyEvent::asEndElement();
}

$StartElement* StartDocumentEvent::asStartElement() {
	 return this->$DummyEvent::asStartElement();
}

$QName* StartDocumentEvent::getSchemaType() {
	 return this->$DummyEvent::getSchemaType();
}

bool StartDocumentEvent::isAttribute() {
	 return this->$DummyEvent::isAttribute();
}

bool StartDocumentEvent::isCharacters() {
	 return this->$DummyEvent::isCharacters();
}

bool StartDocumentEvent::isNamespace() {
	 return this->$DummyEvent::isNamespace();
}

void StartDocumentEvent::writeAsEncodedUnicode($Writer* writer) {
	this->$DummyEvent::writeAsEncodedUnicode(writer);
}

int32_t StartDocumentEvent::hashCode() {
	 return this->$DummyEvent::hashCode();
}

bool StartDocumentEvent::equals(Object$* arg0) {
	 return this->$DummyEvent::equals(arg0);
}

$Object* StartDocumentEvent::clone() {
	 return this->$DummyEvent::clone();
}

void StartDocumentEvent::finalize() {
	this->$DummyEvent::finalize();
}

void StartDocumentEvent::init$() {
	$DummyEvent::init$();
	this->fEncodingSchemeSet = false;
	this->fStandaloneSet = false;
	this->nestedCall = false;
	init("UTF-8"_s, "1.0"_s, true, nullptr);
}

void StartDocumentEvent::init$($String* encoding) {
	$DummyEvent::init$();
	this->fEncodingSchemeSet = false;
	this->fStandaloneSet = false;
	this->nestedCall = false;
	init(encoding, "1.0"_s, true, nullptr);
}

void StartDocumentEvent::init$($String* encoding, $String* version) {
	$DummyEvent::init$();
	this->fEncodingSchemeSet = false;
	this->fStandaloneSet = false;
	this->nestedCall = false;
	init(encoding, version, true, nullptr);
}

void StartDocumentEvent::init$($String* encoding, $String* version, bool standalone) {
	$DummyEvent::init$();
	this->fEncodingSchemeSet = false;
	this->fStandaloneSet = false;
	this->nestedCall = false;
	this->fStandaloneSet = true;
	init(encoding, version, standalone, nullptr);
}

void StartDocumentEvent::init$($String* encoding, $String* version, bool standalone, $Location* loc) {
	$DummyEvent::init$();
	this->fEncodingSchemeSet = false;
	this->fStandaloneSet = false;
	this->nestedCall = false;
	this->fStandaloneSet = true;
	init(encoding, version, standalone, loc);
}

void StartDocumentEvent::init($String* encoding, $String* version, bool standalone, $Location* loc) {
	setEventType($XMLStreamConstants::START_DOCUMENT);
	$set(this, fEncodingScheam, encoding);
	$set(this, fVersion, version);
	this->fStandalone = standalone;
	if (encoding != nullptr && !encoding->isEmpty()) {
		this->fEncodingSchemeSet = true;
	} else {
		this->fEncodingSchemeSet = false;
		$set(this, fEncodingScheam, "UTF-8"_s);
	}
	$set(this, fLocation, loc);
}

$String* StartDocumentEvent::getSystemId() {
	if (this->fLocation == nullptr) {
		return ""_s;
	} else {
		return $nc(this->fLocation)->getSystemId();
	}
}

$String* StartDocumentEvent::getCharacterEncodingScheme() {
	return this->fEncodingScheam;
}

bool StartDocumentEvent::isStandalone() {
	return this->fStandalone;
}

$String* StartDocumentEvent::getVersion() {
	return this->fVersion;
}

void StartDocumentEvent::setStandalone(bool isStandalone, bool standaloneSet) {
	this->fStandaloneSet = standaloneSet;
	this->fStandalone = isStandalone;
}

void StartDocumentEvent::setStandalone($String* s) {
	this->fStandaloneSet = true;
	if (s == nullptr) {
		this->fStandalone = true;
		return;
	}
	if ($nc(s)->equals("yes"_s)) {
		this->fStandalone = true;
	} else {
		this->fStandalone = false;
	}
}

bool StartDocumentEvent::encodingSet() {
	return this->fEncodingSchemeSet;
}

bool StartDocumentEvent::standaloneSet() {
	return this->fStandaloneSet;
}

void StartDocumentEvent::setEncoding($String* encoding) {
	$set(this, fEncodingScheam, encoding);
}

void StartDocumentEvent::setDeclaredEncoding(bool value) {
	this->fEncodingSchemeSet = value;
}

void StartDocumentEvent::setVersion($String* s) {
	$set(this, fVersion, s);
}

void StartDocumentEvent::clear() {
	$set(this, fEncodingScheam, "UTF-8"_s);
	this->fStandalone = true;
	$set(this, fVersion, "1.0"_s);
	this->fEncodingSchemeSet = false;
	this->fStandaloneSet = false;
}

$String* StartDocumentEvent::toString() {
	$var($String, s, $str({"<?xml version=\""_s, this->fVersion, "\""_s}));
	$assign(s, $str({s, " encoding=\'"_s, this->fEncodingScheam, "\'"_s}));
	if (this->fStandaloneSet) {
		if (this->fStandalone) {
			$assign(s, $str({s, " standalone=\'yes\'?>"_s}));
		} else {
			$assign(s, $str({s, " standalone=\'no\'?>"_s}));
		}
	} else {
		$assign(s, $str({s, "?>"_s}));
	}
	return s;
}

bool StartDocumentEvent::isStartDocument() {
	return true;
}

void StartDocumentEvent::writeAsEncodedUnicodeEx($Writer* writer) {
	$nc(writer)->write($(toString()));
}

StartDocumentEvent::StartDocumentEvent() {
}

$Class* StartDocumentEvent::load$($String* name, bool initialize) {
	$loadClass(StartDocumentEvent, name, initialize, &_StartDocumentEvent_ClassInfo_, allocate$StartDocumentEvent);
	return class$;
}

$Class* StartDocumentEvent::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com