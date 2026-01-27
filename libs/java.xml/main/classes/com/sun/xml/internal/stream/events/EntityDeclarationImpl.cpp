#include <com/sun/xml/internal/stream/events/EntityDeclarationImpl.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <java/io/Writer.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/StartElement.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef ENTITY_DECLARATION

using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
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

$FieldInfo _EntityDeclarationImpl_FieldInfo_[] = {
	{"fXMLResourceIdentifier", "Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;", nullptr, $PRIVATE, $field(EntityDeclarationImpl, fXMLResourceIdentifier)},
	{"fEntityName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(EntityDeclarationImpl, fEntityName)},
	{"fReplacementText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(EntityDeclarationImpl, fReplacementText)},
	{"fNotationName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(EntityDeclarationImpl, fNotationName)},
	{}
};

$MethodInfo _EntityDeclarationImpl_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(EntityDeclarationImpl, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(EntityDeclarationImpl, init$, void, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;)V", nullptr, $PUBLIC, $method(EntityDeclarationImpl, init$, void, $String*, $String*, $XMLResourceIdentifier*)},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityDeclarationImpl, getBaseURI, $String*)},
	{"getEntityName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityDeclarationImpl, getEntityName, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityDeclarationImpl, getName, $String*)},
	{"getNotationName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityDeclarationImpl, getNotationName, $String*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityDeclarationImpl, getPublicId, $String*)},
	{"getReplacementText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityDeclarationImpl, getReplacementText, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityDeclarationImpl, getSystemId, $String*)},
	{"getXMLResourceIdentifier", "()Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;", nullptr, $PUBLIC, $virtualMethod(EntityDeclarationImpl, getXMLResourceIdentifier, $XMLResourceIdentifier*)},
	{"init", "()V", nullptr, $PROTECTED, $virtualMethod(EntityDeclarationImpl, init, void)},
	{"*isAttribute", "()Z", nullptr, $PUBLIC},
	{"*isCharacters", "()Z", nullptr, $PUBLIC},
	{"*isEndDocument", "()Z", nullptr, $PUBLIC},
	{"*isEndElement", "()Z", nullptr, $PUBLIC},
	{"*isEntityReference", "()Z", nullptr, $PUBLIC},
	{"*isNamespace", "()Z", nullptr, $PUBLIC},
	{"*isProcessingInstruction", "()Z", nullptr, $PUBLIC},
	{"*isStartDocument", "()Z", nullptr, $PUBLIC},
	{"*isStartElement", "()Z", nullptr, $PUBLIC},
	{"setEntityName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(EntityDeclarationImpl, setEntityName, void, $String*)},
	{"setEntityReplacementText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(EntityDeclarationImpl, setEntityReplacementText, void, $String*)},
	{"setNotationName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(EntityDeclarationImpl, setNotationName, void, $String*)},
	{"setXMLResourceIdentifier", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;)V", nullptr, $PUBLIC, $virtualMethod(EntityDeclarationImpl, setXMLResourceIdentifier, void, $XMLResourceIdentifier*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*writeAsEncodedUnicode", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{"writeAsEncodedUnicodeEx", "(Ljava/io/Writer;)V", nullptr, $PROTECTED, $virtualMethod(EntityDeclarationImpl, writeAsEncodedUnicodeEx, void, $Writer*), "java.io.IOException"},
	{}
};

$ClassInfo _EntityDeclarationImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.EntityDeclarationImpl",
	"com.sun.xml.internal.stream.events.DummyEvent",
	"javax.xml.stream.events.EntityDeclaration",
	_EntityDeclarationImpl_FieldInfo_,
	_EntityDeclarationImpl_MethodInfo_
};

$Object* allocate$EntityDeclarationImpl($Class* clazz) {
	return $of($alloc(EntityDeclarationImpl));
}

int32_t EntityDeclarationImpl::getEventType() {
	 return this->$DummyEvent::getEventType();
}

bool EntityDeclarationImpl::isStartElement() {
	 return this->$DummyEvent::isStartElement();
}

bool EntityDeclarationImpl::isEndElement() {
	 return this->$DummyEvent::isEndElement();
}

bool EntityDeclarationImpl::isEntityReference() {
	 return this->$DummyEvent::isEntityReference();
}

bool EntityDeclarationImpl::isProcessingInstruction() {
	 return this->$DummyEvent::isProcessingInstruction();
}

bool EntityDeclarationImpl::isStartDocument() {
	 return this->$DummyEvent::isStartDocument();
}

bool EntityDeclarationImpl::isEndDocument() {
	 return this->$DummyEvent::isEndDocument();
}

$Location* EntityDeclarationImpl::getLocation() {
	 return this->$DummyEvent::getLocation();
}

$Characters* EntityDeclarationImpl::asCharacters() {
	 return this->$DummyEvent::asCharacters();
}

$EndElement* EntityDeclarationImpl::asEndElement() {
	 return this->$DummyEvent::asEndElement();
}

$StartElement* EntityDeclarationImpl::asStartElement() {
	 return this->$DummyEvent::asStartElement();
}

$QName* EntityDeclarationImpl::getSchemaType() {
	 return this->$DummyEvent::getSchemaType();
}

bool EntityDeclarationImpl::isAttribute() {
	 return this->$DummyEvent::isAttribute();
}

bool EntityDeclarationImpl::isCharacters() {
	 return this->$DummyEvent::isCharacters();
}

bool EntityDeclarationImpl::isNamespace() {
	 return this->$DummyEvent::isNamespace();
}

void EntityDeclarationImpl::writeAsEncodedUnicode($Writer* writer) {
	this->$DummyEvent::writeAsEncodedUnicode(writer);
}

int32_t EntityDeclarationImpl::hashCode() {
	 return this->$DummyEvent::hashCode();
}

bool EntityDeclarationImpl::equals(Object$* arg0) {
	 return this->$DummyEvent::equals(arg0);
}

$Object* EntityDeclarationImpl::clone() {
	 return this->$DummyEvent::clone();
}

$String* EntityDeclarationImpl::toString() {
	 return this->$DummyEvent::toString();
}

void EntityDeclarationImpl::finalize() {
	this->$DummyEvent::finalize();
}

void EntityDeclarationImpl::init$() {
	$DummyEvent::init$();
	init();
}

void EntityDeclarationImpl::init$($String* entityName, $String* replacementText) {
	EntityDeclarationImpl::init$(entityName, replacementText, nullptr);
}

void EntityDeclarationImpl::init$($String* entityName, $String* replacementText, $XMLResourceIdentifier* resourceIdentifier) {
	$DummyEvent::init$();
	init();
	$set(this, fEntityName, entityName);
	$set(this, fReplacementText, replacementText);
	$set(this, fXMLResourceIdentifier, resourceIdentifier);
}

void EntityDeclarationImpl::setEntityName($String* entityName) {
	$set(this, fEntityName, entityName);
}

$String* EntityDeclarationImpl::getEntityName() {
	return this->fEntityName;
}

void EntityDeclarationImpl::setEntityReplacementText($String* replacementText) {
	$set(this, fReplacementText, replacementText);
}

void EntityDeclarationImpl::setXMLResourceIdentifier($XMLResourceIdentifier* resourceIdentifier) {
	$set(this, fXMLResourceIdentifier, resourceIdentifier);
}

$XMLResourceIdentifier* EntityDeclarationImpl::getXMLResourceIdentifier() {
	return this->fXMLResourceIdentifier;
}

$String* EntityDeclarationImpl::getSystemId() {
	if (this->fXMLResourceIdentifier != nullptr) {
		return $nc(this->fXMLResourceIdentifier)->getLiteralSystemId();
	}
	return nullptr;
}

$String* EntityDeclarationImpl::getPublicId() {
	if (this->fXMLResourceIdentifier != nullptr) {
		return $nc(this->fXMLResourceIdentifier)->getPublicId();
	}
	return nullptr;
}

$String* EntityDeclarationImpl::getBaseURI() {
	if (this->fXMLResourceIdentifier != nullptr) {
		return $nc(this->fXMLResourceIdentifier)->getBaseSystemId();
	}
	return nullptr;
}

$String* EntityDeclarationImpl::getName() {
	return this->fEntityName;
}

$String* EntityDeclarationImpl::getNotationName() {
	return this->fNotationName;
}

void EntityDeclarationImpl::setNotationName($String* notationName) {
	$set(this, fNotationName, notationName);
}

$String* EntityDeclarationImpl::getReplacementText() {
	return this->fReplacementText;
}

void EntityDeclarationImpl::init() {
	setEventType($XMLEvent::ENTITY_DECLARATION);
}

void EntityDeclarationImpl::writeAsEncodedUnicodeEx($Writer* writer) {
	$useLocalCurrentObjectStackCache();
	$nc(writer)->write("<!ENTITY "_s);
	writer->write(this->fEntityName);
	if (this->fReplacementText != nullptr) {
		writer->write(" \""_s);
		charEncode(writer, this->fReplacementText);
	} else {
		$var($String, pubId, getPublicId());
		if (pubId != nullptr) {
			writer->write(" PUBLIC \""_s);
			writer->write(pubId);
		} else {
			writer->write(" SYSTEM \""_s);
			writer->write($(getSystemId()));
		}
	}
	writer->write("\""_s);
	if (this->fNotationName != nullptr) {
		writer->write(" NDATA "_s);
		writer->write(this->fNotationName);
	}
	writer->write(">"_s);
}

EntityDeclarationImpl::EntityDeclarationImpl() {
}

$Class* EntityDeclarationImpl::load$($String* name, bool initialize) {
	$loadClass(EntityDeclarationImpl, name, initialize, &_EntityDeclarationImpl_ClassInfo_, allocate$EntityDeclarationImpl);
	return class$;
}

$Class* EntityDeclarationImpl::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com