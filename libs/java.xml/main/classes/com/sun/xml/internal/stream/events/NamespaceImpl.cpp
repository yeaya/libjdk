#include <com/sun/xml/internal/stream/events/NamespaceImpl.h>

#include <com/sun/xml/internal/stream/events/AttributeImpl.h>
#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <java/io/Writer.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/StartElement.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef DEFAULT_NS_PREFIX
#undef NAMESPACE
#undef XMLNS_ATTRIBUTE
#undef XMLNS_ATTRIBUTE_NS_URI

using $AttributeImpl = ::com::sun::xml::internal::stream::events::AttributeImpl;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLConstants = ::javax::xml::XMLConstants;
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

$MethodInfo _NamespaceImpl_MethodInfo_[] = {
	{"*asCharacters", "()Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC},
	{"*asEndElement", "()Ljavax/xml/stream/events/EndElement;", nullptr, $PUBLIC},
	{"*asStartElement", "()Ljavax/xml/stream/events/StartElement;", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getDTDType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getLocation", "()Ljavax/xml/stream/Location;", nullptr, $PUBLIC},
	{"*getName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC},
	{"*getSchemaType", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC},
	{"*getValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(NamespaceImpl, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NamespaceImpl, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NamespaceImpl, init$, void, $String*, $String*)},
	{"getEventType", "()I", nullptr, $PUBLIC, $virtualMethod(NamespaceImpl, getEventType, int32_t)},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceImpl, getNamespaceURI, $String*)},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceImpl, getPrefix, $String*)},
	{"init", "()V", nullptr, $PROTECTED, $virtualMethod(NamespaceImpl, init, void)},
	{"*isAttribute", "()Z", nullptr, $PUBLIC},
	{"*isCharacters", "()Z", nullptr, $PUBLIC},
	{"isDefaultNamespaceDeclaration", "()Z", nullptr, $PUBLIC, $virtualMethod(NamespaceImpl, isDefaultNamespaceDeclaration, bool)},
	{"*isEndDocument", "()Z", nullptr, $PUBLIC},
	{"*isEndElement", "()Z", nullptr, $PUBLIC},
	{"*isEntityReference", "()Z", nullptr, $PUBLIC},
	{"isNamespace", "()Z", nullptr, $PUBLIC, $virtualMethod(NamespaceImpl, isNamespace, bool)},
	{"*isProcessingInstruction", "()Z", nullptr, $PUBLIC},
	{"*isSpecified", "()Z", nullptr, $PUBLIC},
	{"*isStartDocument", "()Z", nullptr, $PUBLIC},
	{"*isStartElement", "()Z", nullptr, $PUBLIC},
	{"setNamespaceURI", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(NamespaceImpl, setNamespaceURI, void, $String*)},
	{"setPrefix", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(NamespaceImpl, setPrefix, void, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*writeAsEncodedUnicode", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NamespaceImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.NamespaceImpl",
	"com.sun.xml.internal.stream.events.AttributeImpl",
	"javax.xml.stream.events.Namespace",
	nullptr,
	_NamespaceImpl_MethodInfo_
};

$Object* allocate$NamespaceImpl($Class* clazz) {
	return $of($alloc(NamespaceImpl));
}

$String* NamespaceImpl::toString() {
	 return this->$AttributeImpl::toString();
}

$QName* NamespaceImpl::getName() {
	 return this->$AttributeImpl::getName();
}

$String* NamespaceImpl::getValue() {
	 return this->$AttributeImpl::getValue();
}

$String* NamespaceImpl::getDTDType() {
	 return this->$AttributeImpl::getDTDType();
}

bool NamespaceImpl::isSpecified() {
	 return this->$AttributeImpl::isSpecified();
}

bool NamespaceImpl::isStartElement() {
	 return this->$AttributeImpl::isStartElement();
}

bool NamespaceImpl::isEndElement() {
	 return this->$AttributeImpl::isEndElement();
}

bool NamespaceImpl::isEntityReference() {
	 return this->$AttributeImpl::isEntityReference();
}

bool NamespaceImpl::isProcessingInstruction() {
	 return this->$AttributeImpl::isProcessingInstruction();
}

bool NamespaceImpl::isStartDocument() {
	 return this->$AttributeImpl::isStartDocument();
}

bool NamespaceImpl::isEndDocument() {
	 return this->$AttributeImpl::isEndDocument();
}

$Location* NamespaceImpl::getLocation() {
	 return this->$AttributeImpl::getLocation();
}

$Characters* NamespaceImpl::asCharacters() {
	 return this->$AttributeImpl::asCharacters();
}

$EndElement* NamespaceImpl::asEndElement() {
	 return this->$AttributeImpl::asEndElement();
}

$StartElement* NamespaceImpl::asStartElement() {
	 return this->$AttributeImpl::asStartElement();
}

$QName* NamespaceImpl::getSchemaType() {
	 return this->$AttributeImpl::getSchemaType();
}

bool NamespaceImpl::isAttribute() {
	 return this->$AttributeImpl::isAttribute();
}

bool NamespaceImpl::isCharacters() {
	 return this->$AttributeImpl::isCharacters();
}

void NamespaceImpl::writeAsEncodedUnicode($Writer* writer) {
	this->$AttributeImpl::writeAsEncodedUnicode(writer);
}

int32_t NamespaceImpl::hashCode() {
	 return this->$AttributeImpl::hashCode();
}

bool NamespaceImpl::equals(Object$* arg0) {
	 return this->$AttributeImpl::equals(arg0);
}

$Object* NamespaceImpl::clone() {
	 return this->$AttributeImpl::clone();
}

void NamespaceImpl::finalize() {
	this->$AttributeImpl::finalize();
}

void NamespaceImpl::init$() {
	$AttributeImpl::init$();
	init();
}

void NamespaceImpl::init$($String* namespaceURI) {
	$init($XMLConstants);
	$AttributeImpl::init$($XMLConstants::XMLNS_ATTRIBUTE, $XMLConstants::XMLNS_ATTRIBUTE_NS_URI, $XMLConstants::DEFAULT_NS_PREFIX, namespaceURI, ($String*)nullptr);
	init();
}

void NamespaceImpl::init$($String* prefix, $String* namespaceURI) {
	$init($XMLConstants);
	$AttributeImpl::init$($XMLConstants::XMLNS_ATTRIBUTE, $XMLConstants::XMLNS_ATTRIBUTE_NS_URI, prefix, namespaceURI, ($String*)nullptr);
	init();
}

bool NamespaceImpl::isDefaultNamespaceDeclaration() {
	$useLocalCurrentObjectStackCache();
	$var($QName, name, this->getName());
	$init($XMLConstants);
	if (name != nullptr && ($nc($(name->getLocalPart()))->equals($XMLConstants::DEFAULT_NS_PREFIX))) {
		return true;
	}
	return false;
}

void NamespaceImpl::setPrefix($String* prefix) {
	$useLocalCurrentObjectStackCache();
	if (prefix == nullptr) {
		$init($XMLConstants);
		setName($$new($QName, $XMLConstants::XMLNS_ATTRIBUTE_NS_URI, $XMLConstants::DEFAULT_NS_PREFIX, $XMLConstants::XMLNS_ATTRIBUTE));
	} else {
		$init($XMLConstants);
		setName($$new($QName, $XMLConstants::XMLNS_ATTRIBUTE_NS_URI, prefix, $XMLConstants::XMLNS_ATTRIBUTE));
	}
}

$String* NamespaceImpl::getPrefix() {
	$var($QName, name, this->getName());
	if (name != nullptr) {
		return name->getLocalPart();
	}
	return nullptr;
}

$String* NamespaceImpl::getNamespaceURI() {
	return this->getValue();
}

void NamespaceImpl::setNamespaceURI($String* uri) {
	this->setValue(uri);
}

void NamespaceImpl::init() {
	setEventType($XMLEvent::NAMESPACE);
}

int32_t NamespaceImpl::getEventType() {
	return $XMLEvent::NAMESPACE;
}

bool NamespaceImpl::isNamespace() {
	return true;
}

NamespaceImpl::NamespaceImpl() {
}

$Class* NamespaceImpl::load$($String* name, bool initialize) {
	$loadClass(NamespaceImpl, name, initialize, &_NamespaceImpl_ClassInfo_, allocate$NamespaceImpl);
	return class$;
}

$Class* NamespaceImpl::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com