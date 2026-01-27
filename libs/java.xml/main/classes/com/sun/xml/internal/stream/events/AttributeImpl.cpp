#include <com/sun/xml/internal/stream/events/AttributeImpl.h>

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <java/io/Writer.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/StartElement.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef ATTRIBUTE

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

$FieldInfo _AttributeImpl_FieldInfo_[] = {
	{"fValue", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AttributeImpl, fValue)},
	{"fNonNormalizedvalue", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AttributeImpl, fNonNormalizedvalue)},
	{"fQName", "Ljavax/xml/namespace/QName;", nullptr, $PRIVATE, $field(AttributeImpl, fQName)},
	{"fAttributeType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AttributeImpl, fAttributeType)},
	{"fIsSpecified", "Z", nullptr, $PRIVATE, $field(AttributeImpl, fIsSpecified)},
	{}
};

$MethodInfo _AttributeImpl_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(AttributeImpl, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AttributeImpl, init$, void, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AttributeImpl, init$, void, $String*, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AttributeImpl, init$, void, $String*, $String*, $String*, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(AttributeImpl, init$, void, $String*, $String*, $String*, $String*, $String*, $String*, bool)},
	{"<init>", "(Ljavax/xml/namespace/QName;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(AttributeImpl, init$, void, $QName*, $String*, $String*, $String*, bool)},
	{"getDTDType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeImpl, getDTDType, $String*)},
	{"getName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC, $virtualMethod(AttributeImpl, getName, $QName*)},
	{"getNonNormalizedValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeImpl, getNonNormalizedValue, $String*)},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeImpl, getValue, $String*)},
	{"init", "()V", nullptr, $PROTECTED, $virtualMethod(AttributeImpl, init, void)},
	{"*isAttribute", "()Z", nullptr, $PUBLIC},
	{"*isCharacters", "()Z", nullptr, $PUBLIC},
	{"*isEndDocument", "()Z", nullptr, $PUBLIC},
	{"*isEndElement", "()Z", nullptr, $PUBLIC},
	{"*isEntityReference", "()Z", nullptr, $PUBLIC},
	{"*isNamespace", "()Z", nullptr, $PUBLIC},
	{"*isProcessingInstruction", "()Z", nullptr, $PUBLIC},
	{"isSpecified", "()Z", nullptr, $PUBLIC, $virtualMethod(AttributeImpl, isSpecified, bool)},
	{"*isStartDocument", "()Z", nullptr, $PUBLIC},
	{"*isStartElement", "()Z", nullptr, $PUBLIC},
	{"setAttributeType", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AttributeImpl, setAttributeType, void, $String*)},
	{"setName", "(Ljavax/xml/namespace/QName;)V", nullptr, $PUBLIC, $virtualMethod(AttributeImpl, setName, void, $QName*)},
	{"setNonNormalizedValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AttributeImpl, setNonNormalizedValue, void, $String*)},
	{"setSpecified", "(Z)V", nullptr, $PUBLIC, $virtualMethod(AttributeImpl, setSpecified, void, bool)},
	{"setValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AttributeImpl, setValue, void, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeImpl, toString, $String*)},
	{"*writeAsEncodedUnicode", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{"writeAsEncodedUnicodeEx", "(Ljava/io/Writer;)V", nullptr, $PROTECTED, $virtualMethod(AttributeImpl, writeAsEncodedUnicodeEx, void, $Writer*), "java.io.IOException"},
	{}
};

$ClassInfo _AttributeImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.AttributeImpl",
	"com.sun.xml.internal.stream.events.DummyEvent",
	"javax.xml.stream.events.Attribute",
	_AttributeImpl_FieldInfo_,
	_AttributeImpl_MethodInfo_
};

$Object* allocate$AttributeImpl($Class* clazz) {
	return $of($alloc(AttributeImpl));
}

int32_t AttributeImpl::getEventType() {
	 return this->$DummyEvent::getEventType();
}

bool AttributeImpl::isStartElement() {
	 return this->$DummyEvent::isStartElement();
}

bool AttributeImpl::isEndElement() {
	 return this->$DummyEvent::isEndElement();
}

bool AttributeImpl::isEntityReference() {
	 return this->$DummyEvent::isEntityReference();
}

bool AttributeImpl::isProcessingInstruction() {
	 return this->$DummyEvent::isProcessingInstruction();
}

bool AttributeImpl::isStartDocument() {
	 return this->$DummyEvent::isStartDocument();
}

bool AttributeImpl::isEndDocument() {
	 return this->$DummyEvent::isEndDocument();
}

$Location* AttributeImpl::getLocation() {
	 return this->$DummyEvent::getLocation();
}

$Characters* AttributeImpl::asCharacters() {
	 return this->$DummyEvent::asCharacters();
}

$EndElement* AttributeImpl::asEndElement() {
	 return this->$DummyEvent::asEndElement();
}

$StartElement* AttributeImpl::asStartElement() {
	 return this->$DummyEvent::asStartElement();
}

$QName* AttributeImpl::getSchemaType() {
	 return this->$DummyEvent::getSchemaType();
}

bool AttributeImpl::isAttribute() {
	 return this->$DummyEvent::isAttribute();
}

bool AttributeImpl::isCharacters() {
	 return this->$DummyEvent::isCharacters();
}

bool AttributeImpl::isNamespace() {
	 return this->$DummyEvent::isNamespace();
}

void AttributeImpl::writeAsEncodedUnicode($Writer* writer) {
	this->$DummyEvent::writeAsEncodedUnicode(writer);
}

int32_t AttributeImpl::hashCode() {
	 return this->$DummyEvent::hashCode();
}

bool AttributeImpl::equals(Object$* arg0) {
	 return this->$DummyEvent::equals(arg0);
}

$Object* AttributeImpl::clone() {
	 return this->$DummyEvent::clone();
}

void AttributeImpl::finalize() {
	this->$DummyEvent::finalize();
}

void AttributeImpl::init$() {
	$DummyEvent::init$();
	$set(this, fAttributeType, "CDATA"_s);
	init();
}

void AttributeImpl::init$($String* name, $String* value) {
	$DummyEvent::init$();
	$set(this, fAttributeType, "CDATA"_s);
	init();
	$set(this, fQName, $new($QName, name));
	$set(this, fValue, value);
}

void AttributeImpl::init$($String* prefix, $String* name, $String* value) {
	AttributeImpl::init$(prefix, nullptr, name, value, nullptr, nullptr, false);
}

void AttributeImpl::init$($String* prefix, $String* uri, $String* localPart, $String* value, $String* type) {
	AttributeImpl::init$(prefix, uri, localPart, value, nullptr, type, false);
}

void AttributeImpl::init$($String* prefix, $String* uri, $String* localPart, $String* value, $String* nonNormalizedvalue, $String* type, bool isSpecified) {
	AttributeImpl::init$($$new($QName, uri, localPart, prefix), value, nonNormalizedvalue, type, isSpecified);
}

void AttributeImpl::init$($QName* qname, $String* value, $String* nonNormalizedvalue, $String* type, bool isSpecified) {
	$DummyEvent::init$();
	$set(this, fAttributeType, "CDATA"_s);
	init();
	$set(this, fQName, qname);
	$set(this, fValue, value);
	if (type != nullptr && !type->isEmpty()) {
		$set(this, fAttributeType, type);
	}
	$set(this, fNonNormalizedvalue, nonNormalizedvalue);
	this->fIsSpecified = isSpecified;
}

$String* AttributeImpl::toString() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(this->fQName)->getPrefix() != nullptr;
	if (var$0 && $nc($($nc(this->fQName)->getPrefix()))->length() > 0) {
		$var($String, var$4, $$str({$($nc(this->fQName)->getPrefix()), ":"_s}));
		$var($String, var$3, $$concat(var$4, $($nc(this->fQName)->getLocalPart())));
		$var($String, var$2, $$concat(var$3, "=\'"_s));
		$var($String, var$1, $$concat(var$2, this->fValue));
		return $concat(var$1, "\'"_s);
	} else {
		return $str({$($nc(this->fQName)->getLocalPart()), "=\'"_s, this->fValue, "\'"_s});
	}
}

void AttributeImpl::setName($QName* name) {
	$set(this, fQName, name);
}

$QName* AttributeImpl::getName() {
	return this->fQName;
}

void AttributeImpl::setValue($String* value) {
	$set(this, fValue, value);
}

$String* AttributeImpl::getValue() {
	return this->fValue;
}

void AttributeImpl::setNonNormalizedValue($String* nonNormalizedvalue) {
	$set(this, fNonNormalizedvalue, nonNormalizedvalue);
}

$String* AttributeImpl::getNonNormalizedValue() {
	return this->fNonNormalizedvalue;
}

void AttributeImpl::setAttributeType($String* attributeType) {
	$set(this, fAttributeType, attributeType);
}

$String* AttributeImpl::getDTDType() {
	return this->fAttributeType;
}

void AttributeImpl::setSpecified(bool isSpecified) {
	this->fIsSpecified = isSpecified;
}

bool AttributeImpl::isSpecified() {
	return this->fIsSpecified;
}

void AttributeImpl::writeAsEncodedUnicodeEx($Writer* writer) {
	$nc(writer)->write($(toString()));
}

void AttributeImpl::init() {
	setEventType($XMLEvent::ATTRIBUTE);
}

AttributeImpl::AttributeImpl() {
}

$Class* AttributeImpl::load$($String* name, bool initialize) {
	$loadClass(AttributeImpl, name, initialize, &_AttributeImpl_ClassInfo_, allocate$AttributeImpl);
	return class$;
}

$Class* AttributeImpl::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com