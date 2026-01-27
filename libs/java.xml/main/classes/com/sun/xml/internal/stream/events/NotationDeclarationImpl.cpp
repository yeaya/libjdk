#include <com/sun/xml/internal/stream/events/NotationDeclarationImpl.h>

#include <com/sun/xml/internal/stream/dtd/nonvalidating/XMLNotationDecl.h>
#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <java/io/Writer.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/StartElement.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef NOTATION_DECLARATION

using $XMLNotationDecl = ::com::sun::xml::internal::stream::dtd::nonvalidating::XMLNotationDecl;
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

$FieldInfo _NotationDeclarationImpl_FieldInfo_[] = {
	{"fName", "Ljava/lang/String;", nullptr, 0, $field(NotationDeclarationImpl, fName)},
	{"fPublicId", "Ljava/lang/String;", nullptr, 0, $field(NotationDeclarationImpl, fPublicId)},
	{"fSystemId", "Ljava/lang/String;", nullptr, 0, $field(NotationDeclarationImpl, fSystemId)},
	{}
};

$MethodInfo _NotationDeclarationImpl_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(NotationDeclarationImpl, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NotationDeclarationImpl, init$, void, $String*, $String*, $String*)},
	{"<init>", "(Lcom/sun/xml/internal/stream/dtd/nonvalidating/XMLNotationDecl;)V", nullptr, $PUBLIC, $method(NotationDeclarationImpl, init$, void, $XMLNotationDecl*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NotationDeclarationImpl, getName, $String*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NotationDeclarationImpl, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NotationDeclarationImpl, getSystemId, $String*)},
	{"*isAttribute", "()Z", nullptr, $PUBLIC},
	{"*isCharacters", "()Z", nullptr, $PUBLIC},
	{"*isEndDocument", "()Z", nullptr, $PUBLIC},
	{"*isEndElement", "()Z", nullptr, $PUBLIC},
	{"*isEntityReference", "()Z", nullptr, $PUBLIC},
	{"*isNamespace", "()Z", nullptr, $PUBLIC},
	{"*isProcessingInstruction", "()Z", nullptr, $PUBLIC},
	{"*isStartDocument", "()Z", nullptr, $PUBLIC},
	{"*isStartElement", "()Z", nullptr, $PUBLIC},
	{"setName", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(NotationDeclarationImpl, setName, void, $String*)},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(NotationDeclarationImpl, setPublicId, void, $String*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(NotationDeclarationImpl, setSystemId, void, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*writeAsEncodedUnicode", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{"writeAsEncodedUnicodeEx", "(Ljava/io/Writer;)V", nullptr, $PROTECTED, $virtualMethod(NotationDeclarationImpl, writeAsEncodedUnicodeEx, void, $Writer*), "java.io.IOException"},
	{}
};

$ClassInfo _NotationDeclarationImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.NotationDeclarationImpl",
	"com.sun.xml.internal.stream.events.DummyEvent",
	"javax.xml.stream.events.NotationDeclaration",
	_NotationDeclarationImpl_FieldInfo_,
	_NotationDeclarationImpl_MethodInfo_
};

$Object* allocate$NotationDeclarationImpl($Class* clazz) {
	return $of($alloc(NotationDeclarationImpl));
}

int32_t NotationDeclarationImpl::getEventType() {
	 return this->$DummyEvent::getEventType();
}

bool NotationDeclarationImpl::isStartElement() {
	 return this->$DummyEvent::isStartElement();
}

bool NotationDeclarationImpl::isEndElement() {
	 return this->$DummyEvent::isEndElement();
}

bool NotationDeclarationImpl::isEntityReference() {
	 return this->$DummyEvent::isEntityReference();
}

bool NotationDeclarationImpl::isProcessingInstruction() {
	 return this->$DummyEvent::isProcessingInstruction();
}

bool NotationDeclarationImpl::isStartDocument() {
	 return this->$DummyEvent::isStartDocument();
}

bool NotationDeclarationImpl::isEndDocument() {
	 return this->$DummyEvent::isEndDocument();
}

$Location* NotationDeclarationImpl::getLocation() {
	 return this->$DummyEvent::getLocation();
}

$Characters* NotationDeclarationImpl::asCharacters() {
	 return this->$DummyEvent::asCharacters();
}

$EndElement* NotationDeclarationImpl::asEndElement() {
	 return this->$DummyEvent::asEndElement();
}

$StartElement* NotationDeclarationImpl::asStartElement() {
	 return this->$DummyEvent::asStartElement();
}

$QName* NotationDeclarationImpl::getSchemaType() {
	 return this->$DummyEvent::getSchemaType();
}

bool NotationDeclarationImpl::isAttribute() {
	 return this->$DummyEvent::isAttribute();
}

bool NotationDeclarationImpl::isCharacters() {
	 return this->$DummyEvent::isCharacters();
}

bool NotationDeclarationImpl::isNamespace() {
	 return this->$DummyEvent::isNamespace();
}

void NotationDeclarationImpl::writeAsEncodedUnicode($Writer* writer) {
	this->$DummyEvent::writeAsEncodedUnicode(writer);
}

int32_t NotationDeclarationImpl::hashCode() {
	 return this->$DummyEvent::hashCode();
}

bool NotationDeclarationImpl::equals(Object$* arg0) {
	 return this->$DummyEvent::equals(arg0);
}

$Object* NotationDeclarationImpl::clone() {
	 return this->$DummyEvent::clone();
}

$String* NotationDeclarationImpl::toString() {
	 return this->$DummyEvent::toString();
}

void NotationDeclarationImpl::finalize() {
	this->$DummyEvent::finalize();
}

void NotationDeclarationImpl::init$() {
	$DummyEvent::init$();
	$set(this, fName, nullptr);
	$set(this, fPublicId, nullptr);
	$set(this, fSystemId, nullptr);
	setEventType($XMLEvent::NOTATION_DECLARATION);
}

void NotationDeclarationImpl::init$($String* name, $String* publicId, $String* systemId) {
	$DummyEvent::init$();
	$set(this, fName, nullptr);
	$set(this, fPublicId, nullptr);
	$set(this, fSystemId, nullptr);
	$set(this, fName, name);
	$set(this, fPublicId, publicId);
	$set(this, fSystemId, systemId);
	setEventType($XMLEvent::NOTATION_DECLARATION);
}

void NotationDeclarationImpl::init$($XMLNotationDecl* notation) {
	$DummyEvent::init$();
	$set(this, fName, nullptr);
	$set(this, fPublicId, nullptr);
	$set(this, fSystemId, nullptr);
	$set(this, fName, $nc(notation)->name);
	$set(this, fPublicId, notation->publicId);
	$set(this, fSystemId, notation->systemId);
	setEventType($XMLEvent::NOTATION_DECLARATION);
}

$String* NotationDeclarationImpl::getName() {
	return this->fName;
}

$String* NotationDeclarationImpl::getPublicId() {
	return this->fPublicId;
}

$String* NotationDeclarationImpl::getSystemId() {
	return this->fSystemId;
}

void NotationDeclarationImpl::setPublicId($String* publicId) {
	$set(this, fPublicId, publicId);
}

void NotationDeclarationImpl::setSystemId($String* systemId) {
	$set(this, fSystemId, systemId);
}

void NotationDeclarationImpl::setName($String* name) {
	$set(this, fName, name);
}

void NotationDeclarationImpl::writeAsEncodedUnicodeEx($Writer* writer) {
	$nc(writer)->write("<!NOTATION "_s);
	writer->write($(getName()));
	if (this->fPublicId != nullptr) {
		writer->write(" PUBLIC \""_s);
		writer->write(this->fPublicId);
		writer->write("\""_s);
	} else if (this->fSystemId != nullptr) {
		writer->write(" SYSTEM"_s);
		writer->write(" \""_s);
		writer->write(this->fSystemId);
		writer->write("\""_s);
	}
	writer->write((int32_t)u'>');
}

NotationDeclarationImpl::NotationDeclarationImpl() {
}

$Class* NotationDeclarationImpl::load$($String* name, bool initialize) {
	$loadClass(NotationDeclarationImpl, name, initialize, &_NotationDeclarationImpl_ClassInfo_, allocate$NotationDeclarationImpl);
	return class$;
}

$Class* NotationDeclarationImpl::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com