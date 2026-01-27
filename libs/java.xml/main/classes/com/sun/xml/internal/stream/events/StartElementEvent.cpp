#include <com/sun/xml/internal/stream/events/StartElementEvent.h>

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <com/sun/xml/internal/stream/util/ReadOnlyIterator.h>
#include <java/io/Writer.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLStreamConstants.h>
#include <javax/xml/stream/events/Attribute.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/Namespace.h>
#include <javax/xml/stream/events/StartElement.h>
#include <jcpp.h>

#undef START_ELEMENT

using $DummyEvent = ::com::sun::xml::internal::stream::events::DummyEvent;
using $ReadOnlyIterator = ::com::sun::xml::internal::stream::util::ReadOnlyIterator;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $Location = ::javax::xml::stream::Location;
using $XMLStreamConstants = ::javax::xml::stream::XMLStreamConstants;
using $Attribute = ::javax::xml::stream::events::Attribute;
using $Characters = ::javax::xml::stream::events::Characters;
using $EndElement = ::javax::xml::stream::events::EndElement;
using $Namespace = ::javax::xml::stream::events::Namespace;
using $StartElement = ::javax::xml::stream::events::StartElement;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

$FieldInfo _StartElementEvent_FieldInfo_[] = {
	{"fAttributes", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/xml/namespace/QName;Ljavax/xml/stream/events/Attribute;>;", $PRIVATE, $field(StartElementEvent, fAttributes)},
	{"fNamespaces", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/stream/events/Namespace;>;", $PRIVATE, $field(StartElementEvent, fNamespaces)},
	{"fNamespaceContext", "Ljavax/xml/namespace/NamespaceContext;", nullptr, $PRIVATE, $field(StartElementEvent, fNamespaceContext)},
	{"fQName", "Ljavax/xml/namespace/QName;", nullptr, $PRIVATE, $field(StartElementEvent, fQName)},
	{}
};

$MethodInfo _StartElementEvent_MethodInfo_[] = {
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
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StartElementEvent, init$, void, $String*, $String*, $String*)},
	{"<init>", "(Ljavax/xml/namespace/QName;)V", nullptr, $PUBLIC, $method(StartElementEvent, init$, void, $QName*)},
	{"<init>", "(Ljavax/xml/stream/events/StartElement;)V", nullptr, $PUBLIC, $method(StartElementEvent, init$, void, $StartElement*)},
	{"addAttribute", "(Ljavax/xml/stream/events/Attribute;)V", nullptr, 0, $virtualMethod(StartElementEvent, addAttribute, void, $Attribute*)},
	{"addAttributes", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<+Ljavax/xml/stream/events/Attribute;>;)V", $FINAL, $method(StartElementEvent, addAttributes, void, $Iterator*)},
	{"addNamespaceAttribute", "(Ljavax/xml/stream/events/Namespace;)V", nullptr, 0, $virtualMethod(StartElementEvent, addNamespaceAttribute, void, $Namespace*)},
	{"addNamespaceAttributes", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)V", $FINAL, $method(StartElementEvent, addNamespaceAttributes, void, $Iterator*)},
	{"getAttributeByName", "(Ljavax/xml/namespace/QName;)Ljavax/xml/stream/events/Attribute;", nullptr, $PUBLIC, $virtualMethod(StartElementEvent, getAttributeByName, $Attribute*, $QName*)},
	{"getAttributes", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljavax/xml/stream/events/Attribute;>;", $PUBLIC, $virtualMethod(StartElementEvent, getAttributes, $Iterator*)},
	{"getName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC, $virtualMethod(StartElementEvent, getName, $QName*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StartElementEvent, getNamespace, $String*)},
	{"getNamespaceContext", "()Ljavax/xml/namespace/NamespaceContext;", nullptr, $PUBLIC, $virtualMethod(StartElementEvent, getNamespaceContext, $NamespaceContext*)},
	{"getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StartElementEvent, getNamespaceURI, $String*, $String*)},
	{"getNamespaces", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljavax/xml/stream/events/Namespace;>;", $PUBLIC, $virtualMethod(StartElementEvent, getNamespaces, $Iterator*)},
	{"init", "()V", nullptr, $PROTECTED | $FINAL, $method(StartElementEvent, init, void)},
	{"*isAttribute", "()Z", nullptr, $PUBLIC},
	{"*isCharacters", "()Z", nullptr, $PUBLIC},
	{"*isEndDocument", "()Z", nullptr, $PUBLIC},
	{"*isEndElement", "()Z", nullptr, $PUBLIC},
	{"*isEntityReference", "()Z", nullptr, $PUBLIC},
	{"*isNamespace", "()Z", nullptr, $PUBLIC},
	{"*isProcessingInstruction", "()Z", nullptr, $PUBLIC},
	{"*isStartDocument", "()Z", nullptr, $PUBLIC},
	{"*isStartElement", "()Z", nullptr, $PUBLIC},
	{"nameAsString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StartElementEvent, nameAsString, $String*)},
	{"setName", "(Ljavax/xml/namespace/QName;)V", nullptr, $PUBLIC, $virtualMethod(StartElementEvent, setName, void, $QName*)},
	{"setNamespaceContext", "(Ljavax/xml/namespace/NamespaceContext;)V", nullptr, $PUBLIC, $virtualMethod(StartElementEvent, setNamespaceContext, void, $NamespaceContext*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StartElementEvent, toString, $String*)},
	{"*writeAsEncodedUnicode", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{"writeAsEncodedUnicodeEx", "(Ljava/io/Writer;)V", nullptr, $PROTECTED, $virtualMethod(StartElementEvent, writeAsEncodedUnicodeEx, void, $Writer*), "java.io.IOException"},
	{}
};

$ClassInfo _StartElementEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.StartElementEvent",
	"com.sun.xml.internal.stream.events.DummyEvent",
	"javax.xml.stream.events.StartElement",
	_StartElementEvent_FieldInfo_,
	_StartElementEvent_MethodInfo_
};

$Object* allocate$StartElementEvent($Class* clazz) {
	return $of($alloc(StartElementEvent));
}

int32_t StartElementEvent::getEventType() {
	 return this->$DummyEvent::getEventType();
}

bool StartElementEvent::isStartElement() {
	 return this->$DummyEvent::isStartElement();
}

bool StartElementEvent::isEndElement() {
	 return this->$DummyEvent::isEndElement();
}

bool StartElementEvent::isEntityReference() {
	 return this->$DummyEvent::isEntityReference();
}

bool StartElementEvent::isProcessingInstruction() {
	 return this->$DummyEvent::isProcessingInstruction();
}

bool StartElementEvent::isStartDocument() {
	 return this->$DummyEvent::isStartDocument();
}

bool StartElementEvent::isEndDocument() {
	 return this->$DummyEvent::isEndDocument();
}

$Location* StartElementEvent::getLocation() {
	 return this->$DummyEvent::getLocation();
}

$Characters* StartElementEvent::asCharacters() {
	 return this->$DummyEvent::asCharacters();
}

$EndElement* StartElementEvent::asEndElement() {
	 return this->$DummyEvent::asEndElement();
}

$StartElement* StartElementEvent::asStartElement() {
	 return this->$DummyEvent::asStartElement();
}

$QName* StartElementEvent::getSchemaType() {
	 return this->$DummyEvent::getSchemaType();
}

bool StartElementEvent::isAttribute() {
	 return this->$DummyEvent::isAttribute();
}

bool StartElementEvent::isCharacters() {
	 return this->$DummyEvent::isCharacters();
}

bool StartElementEvent::isNamespace() {
	 return this->$DummyEvent::isNamespace();
}

void StartElementEvent::writeAsEncodedUnicode($Writer* writer) {
	this->$DummyEvent::writeAsEncodedUnicode(writer);
}

int32_t StartElementEvent::hashCode() {
	 return this->$DummyEvent::hashCode();
}

bool StartElementEvent::equals(Object$* arg0) {
	 return this->$DummyEvent::equals(arg0);
}

$Object* StartElementEvent::clone() {
	 return this->$DummyEvent::clone();
}

void StartElementEvent::finalize() {
	this->$DummyEvent::finalize();
}

void StartElementEvent::init$($String* prefix, $String* uri, $String* localpart) {
	StartElementEvent::init$($$new($QName, uri, localpart, prefix));
}

void StartElementEvent::init$($QName* qname) {
	$DummyEvent::init$();
	$set(this, fNamespaceContext, nullptr);
	$set(this, fQName, qname);
	init();
}

void StartElementEvent::init$($StartElement* startelement) {
	$useLocalCurrentObjectStackCache();
	StartElementEvent::init$($($nc(startelement)->getName()));
	addAttributes($($nc(startelement)->getAttributes()));
	addNamespaceAttributes($($nc(startelement)->getNamespaces()));
}

void StartElementEvent::init() {
	setEventType($XMLStreamConstants::START_ELEMENT);
	$set(this, fAttributes, $new($HashMap));
	$set(this, fNamespaces, $new($ArrayList));
}

$QName* StartElementEvent::getName() {
	return this->fQName;
}

void StartElementEvent::setName($QName* qname) {
	$set(this, fQName, qname);
}

$Iterator* StartElementEvent::getAttributes() {
	$useLocalCurrentObjectStackCache();
	if (this->fAttributes != nullptr) {
		$var($Collection, coll, $nc(this->fAttributes)->values());
		return $new($ReadOnlyIterator, $($nc(coll)->iterator()));
	}
	return $new($ReadOnlyIterator);
}

$Iterator* StartElementEvent::getNamespaces() {
	if (this->fNamespaces != nullptr) {
		return $new($ReadOnlyIterator, $($nc(this->fNamespaces)->iterator()));
	}
	return $new($ReadOnlyIterator);
}

$Attribute* StartElementEvent::getAttributeByName($QName* qname) {
	if (qname == nullptr) {
		return nullptr;
	}
	return $cast($Attribute, $nc(this->fAttributes)->get(qname));
}

$String* StartElementEvent::getNamespace() {
	return $nc(this->fQName)->getNamespaceURI();
}

$String* StartElementEvent::getNamespaceURI($String* prefix) {
	bool var$0 = getNamespace() != nullptr;
	if (var$0 && $nc($($nc(this->fQName)->getPrefix()))->equals(prefix)) {
		return getNamespace();
	}
	if (this->fNamespaceContext != nullptr) {
		return $nc(this->fNamespaceContext)->getNamespaceURI(prefix);
	}
	return nullptr;
}

$String* StartElementEvent::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, startElement, $new($StringBuilder));
	startElement->append("<"_s);
	startElement->append($(nameAsString()));
	if (this->fAttributes != nullptr) {
		$var($Iterator, it, this->getAttributes());
		$var($Attribute, attr, nullptr);
		while ($nc(it)->hasNext()) {
			$assign(attr, $cast($Attribute, it->next()));
			startElement->append(" "_s);
			startElement->append($($nc($of(attr))->toString()));
		}
	}
	if (this->fNamespaces != nullptr) {
		$var($Iterator, it, $nc(this->fNamespaces)->iterator());
		$var($Namespace, ns, nullptr);
		while ($nc(it)->hasNext()) {
			$assign(ns, $cast($Namespace, it->next()));
			startElement->append(" "_s);
			startElement->append($($nc($of(ns))->toString()));
		}
	}
	startElement->append(">"_s);
	return startElement->toString();
}

$String* StartElementEvent::nameAsString() {
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

$NamespaceContext* StartElementEvent::getNamespaceContext() {
	return this->fNamespaceContext;
}

void StartElementEvent::setNamespaceContext($NamespaceContext* nc) {
	$set(this, fNamespaceContext, nc);
}

void StartElementEvent::writeAsEncodedUnicodeEx($Writer* writer) {
	$nc(writer)->write($(toString()));
}

void StartElementEvent::addAttribute($Attribute* attr) {
	if ($nc(attr)->isNamespace()) {
		$nc(this->fNamespaces)->add($cast($Namespace, attr));
	} else {
		$nc(this->fAttributes)->put($(attr->getName()), attr);
	}
}

void StartElementEvent::addAttributes($Iterator* attrs) {
	$useLocalCurrentObjectStackCache();
	if (attrs == nullptr) {
		return;
	}
	while ($nc(attrs)->hasNext()) {
		$var($Attribute, attr, $cast($Attribute, attrs->next()));
		$nc(this->fAttributes)->put($($nc(attr)->getName()), attr);
	}
}

void StartElementEvent::addNamespaceAttribute($Namespace* attr) {
	if (attr == nullptr) {
		return;
	}
	$nc(this->fNamespaces)->add(attr);
}

void StartElementEvent::addNamespaceAttributes($Iterator* attrs) {
	$useLocalCurrentObjectStackCache();
	if (attrs == nullptr) {
		return;
	}
	while ($nc(attrs)->hasNext()) {
		$var($Namespace, attr, $cast($Namespace, attrs->next()));
		$nc(this->fNamespaces)->add(attr);
	}
}

StartElementEvent::StartElementEvent() {
}

$Class* StartElementEvent::load$($String* name, bool initialize) {
	$loadClass(StartElementEvent, name, initialize, &_StartElementEvent_ClassInfo_, allocate$StartElementEvent);
	return class$;
}

$Class* StartElementEvent::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com