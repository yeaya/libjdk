#include <com/sun/xml/internal/stream/events/EndElementEvent.h>

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <com/sun/xml/internal/stream/util/ReadOnlyIterator.h>
#include <java/io/Writer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/Namespace.h>
#include <javax/xml/stream/events/StartElement.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef END_ELEMENT

using $DummyEvent = ::com::sun::xml::internal::stream::events::DummyEvent;
using $ReadOnlyIterator = ::com::sun::xml::internal::stream::util::ReadOnlyIterator;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $QName = ::javax::xml::namespace$::QName;
using $Location = ::javax::xml::stream::Location;
using $Characters = ::javax::xml::stream::events::Characters;
using $EndElement = ::javax::xml::stream::events::EndElement;
using $Namespace = ::javax::xml::stream::events::Namespace;
using $StartElement = ::javax::xml::stream::events::StartElement;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

$FieldInfo _EndElementEvent_FieldInfo_[] = {
	{"fNamespaces", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/stream/events/Namespace;>;", 0, $field(EndElementEvent, fNamespaces)},
	{"fQName", "Ljavax/xml/namespace/QName;", nullptr, 0, $field(EndElementEvent, fQName)},
	{}
};

$MethodInfo _EndElementEvent_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(EndElementEvent, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(EndElementEvent, init$, void, $String*, $String*, $String*)},
	{"<init>", "(Ljavax/xml/namespace/QName;)V", nullptr, $PUBLIC, $method(EndElementEvent, init$, void, $QName*)},
	{"addNamespace", "(Ljavax/xml/stream/events/Namespace;)V", nullptr, 0, $virtualMethod(EndElementEvent, addNamespace, void, $Namespace*)},
	{"getName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC, $virtualMethod(EndElementEvent, getName, $QName*)},
	{"getNamespaces", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljavax/xml/stream/events/Namespace;>;", $PUBLIC, $virtualMethod(EndElementEvent, getNamespaces, $Iterator*)},
	{"init", "()V", nullptr, $PROTECTED | $FINAL, $method(EndElementEvent, init, void)},
	{"*isAttribute", "()Z", nullptr, $PUBLIC},
	{"*isCharacters", "()Z", nullptr, $PUBLIC},
	{"*isEndDocument", "()Z", nullptr, $PUBLIC},
	{"*isEndElement", "()Z", nullptr, $PUBLIC},
	{"*isEntityReference", "()Z", nullptr, $PUBLIC},
	{"*isNamespace", "()Z", nullptr, $PUBLIC},
	{"*isProcessingInstruction", "()Z", nullptr, $PUBLIC},
	{"*isStartDocument", "()Z", nullptr, $PUBLIC},
	{"*isStartElement", "()Z", nullptr, $PUBLIC},
	{"nameAsString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EndElementEvent, nameAsString, $String*)},
	{"setName", "(Ljavax/xml/namespace/QName;)V", nullptr, $PUBLIC, $virtualMethod(EndElementEvent, setName, void, $QName*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EndElementEvent, toString, $String*)},
	{"*writeAsEncodedUnicode", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{"writeAsEncodedUnicodeEx", "(Ljava/io/Writer;)V", nullptr, $PROTECTED, $virtualMethod(EndElementEvent, writeAsEncodedUnicodeEx, void, $Writer*), "java.io.IOException"},
	{}
};

$ClassInfo _EndElementEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.EndElementEvent",
	"com.sun.xml.internal.stream.events.DummyEvent",
	"javax.xml.stream.events.EndElement",
	_EndElementEvent_FieldInfo_,
	_EndElementEvent_MethodInfo_
};

$Object* allocate$EndElementEvent($Class* clazz) {
	return $of($alloc(EndElementEvent));
}

int32_t EndElementEvent::getEventType() {
	 return this->$DummyEvent::getEventType();
}

bool EndElementEvent::isStartElement() {
	 return this->$DummyEvent::isStartElement();
}

bool EndElementEvent::isEndElement() {
	 return this->$DummyEvent::isEndElement();
}

bool EndElementEvent::isEntityReference() {
	 return this->$DummyEvent::isEntityReference();
}

bool EndElementEvent::isProcessingInstruction() {
	 return this->$DummyEvent::isProcessingInstruction();
}

bool EndElementEvent::isStartDocument() {
	 return this->$DummyEvent::isStartDocument();
}

bool EndElementEvent::isEndDocument() {
	 return this->$DummyEvent::isEndDocument();
}

$Location* EndElementEvent::getLocation() {
	 return this->$DummyEvent::getLocation();
}

$Characters* EndElementEvent::asCharacters() {
	 return this->$DummyEvent::asCharacters();
}

$EndElement* EndElementEvent::asEndElement() {
	 return this->$DummyEvent::asEndElement();
}

$StartElement* EndElementEvent::asStartElement() {
	 return this->$DummyEvent::asStartElement();
}

$QName* EndElementEvent::getSchemaType() {
	 return this->$DummyEvent::getSchemaType();
}

bool EndElementEvent::isAttribute() {
	 return this->$DummyEvent::isAttribute();
}

bool EndElementEvent::isCharacters() {
	 return this->$DummyEvent::isCharacters();
}

bool EndElementEvent::isNamespace() {
	 return this->$DummyEvent::isNamespace();
}

void EndElementEvent::writeAsEncodedUnicode($Writer* writer) {
	this->$DummyEvent::writeAsEncodedUnicode(writer);
}

int32_t EndElementEvent::hashCode() {
	 return this->$DummyEvent::hashCode();
}

bool EndElementEvent::equals(Object$* arg0) {
	 return this->$DummyEvent::equals(arg0);
}

$Object* EndElementEvent::clone() {
	 return this->$DummyEvent::clone();
}

void EndElementEvent::finalize() {
	this->$DummyEvent::finalize();
}

void EndElementEvent::init$() {
	$DummyEvent::init$();
	$set(this, fNamespaces, nullptr);
	init();
}

void EndElementEvent::init() {
	setEventType($XMLEvent::END_ELEMENT);
	$set(this, fNamespaces, $new($ArrayList));
}

void EndElementEvent::init$($String* prefix, $String* uri, $String* localpart) {
	EndElementEvent::init$($$new($QName, uri, localpart, prefix));
}

void EndElementEvent::init$($QName* qname) {
	$DummyEvent::init$();
	$set(this, fNamespaces, nullptr);
	$set(this, fQName, qname);
	init();
}

$QName* EndElementEvent::getName() {
	return this->fQName;
}

void EndElementEvent::setName($QName* qname) {
	$set(this, fQName, qname);
}

void EndElementEvent::writeAsEncodedUnicodeEx($Writer* writer) {
	$useLocalCurrentObjectStackCache();
	$nc(writer)->write("</"_s);
	$var($String, prefix, $nc(this->fQName)->getPrefix());
	if (prefix != nullptr && prefix->length() > 0) {
		writer->write(prefix);
		writer->write((int32_t)u':');
	}
	writer->write($($nc(this->fQName)->getLocalPart()));
	writer->write((int32_t)u'>');
}

$Iterator* EndElementEvent::getNamespaces() {
	if (this->fNamespaces != nullptr) {
		$nc(this->fNamespaces)->iterator();
	}
	return $new($ReadOnlyIterator);
}

void EndElementEvent::addNamespace($Namespace* ns) {
	if (ns != nullptr) {
		$nc(this->fNamespaces)->add(ns);
	}
}

$String* EndElementEvent::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, s, $str({"</"_s, $(nameAsString())}));
	$assign(s, $str({s, ">"_s}));
	return s;
}

$String* EndElementEvent::nameAsString() {
	$useLocalCurrentObjectStackCache();
	if (""_s->equals($($nc(this->fQName)->getNamespaceURI()))) {
		return $nc(this->fQName)->getLocalPart();
	}
	if ($nc(this->fQName)->getPrefix() != nullptr) {
		$var($String, var$2, $$str({"[\'"_s, $($nc(this->fQName)->getNamespaceURI()), "\']:"_s}));
		$var($String, var$1, $$concat(var$2, $($nc(this->fQName)->getPrefix())));
		$var($String, var$0, $$concat(var$1, ":"_s));
		return $concat(var$0, $($nc(this->fQName)->getLocalPart()));
	} else {
		$var($String, var$3, $$str({"[\'"_s, $($nc(this->fQName)->getNamespaceURI()), "\']:"_s}));
		return $concat(var$3, $($nc(this->fQName)->getLocalPart()));
	}
}

EndElementEvent::EndElementEvent() {
}

$Class* EndElementEvent::load$($String* name, bool initialize) {
	$loadClass(EndElementEvent, name, initialize, &_EndElementEvent_ClassInfo_, allocate$EndElementEvent);
	return class$;
}

$Class* EndElementEvent::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com