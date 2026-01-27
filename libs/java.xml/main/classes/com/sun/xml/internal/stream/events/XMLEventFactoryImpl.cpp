#include <com/sun/xml/internal/stream/events/XMLEventFactoryImpl.h>

#include <com/sun/xml/internal/stream/events/AttributeImpl.h>
#include <com/sun/xml/internal/stream/events/CharacterEvent.h>
#include <com/sun/xml/internal/stream/events/CommentEvent.h>
#include <com/sun/xml/internal/stream/events/DTDEvent.h>
#include <com/sun/xml/internal/stream/events/EndDocumentEvent.h>
#include <com/sun/xml/internal/stream/events/EndElementEvent.h>
#include <com/sun/xml/internal/stream/events/EntityReferenceEvent.h>
#include <com/sun/xml/internal/stream/events/NamespaceImpl.h>
#include <com/sun/xml/internal/stream/events/ProcessingInstructionEvent.h>
#include <com/sun/xml/internal/stream/events/StartDocumentEvent.h>
#include <com/sun/xml/internal/stream/events/StartElementEvent.h>
#include <java/util/Iterator.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLEventFactory.h>
#include <javax/xml/stream/events/Attribute.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/Comment.h>
#include <javax/xml/stream/events/DTD.h>
#include <javax/xml/stream/events/EndDocument.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/EntityDeclaration.h>
#include <javax/xml/stream/events/EntityReference.h>
#include <javax/xml/stream/events/Namespace.h>
#include <javax/xml/stream/events/ProcessingInstruction.h>
#include <javax/xml/stream/events/StartDocument.h>
#include <javax/xml/stream/events/StartElement.h>
#include <jcpp.h>

using $AttributeImpl = ::com::sun::xml::internal::stream::events::AttributeImpl;
using $CharacterEvent = ::com::sun::xml::internal::stream::events::CharacterEvent;
using $CommentEvent = ::com::sun::xml::internal::stream::events::CommentEvent;
using $DTDEvent = ::com::sun::xml::internal::stream::events::DTDEvent;
using $EndDocumentEvent = ::com::sun::xml::internal::stream::events::EndDocumentEvent;
using $EndElementEvent = ::com::sun::xml::internal::stream::events::EndElementEvent;
using $EntityReferenceEvent = ::com::sun::xml::internal::stream::events::EntityReferenceEvent;
using $NamespaceImpl = ::com::sun::xml::internal::stream::events::NamespaceImpl;
using $ProcessingInstructionEvent = ::com::sun::xml::internal::stream::events::ProcessingInstructionEvent;
using $StartDocumentEvent = ::com::sun::xml::internal::stream::events::StartDocumentEvent;
using $StartElementEvent = ::com::sun::xml::internal::stream::events::StartElementEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $Location = ::javax::xml::stream::Location;
using $XMLEventFactory = ::javax::xml::stream::XMLEventFactory;
using $Attribute = ::javax::xml::stream::events::Attribute;
using $Characters = ::javax::xml::stream::events::Characters;
using $Comment = ::javax::xml::stream::events::Comment;
using $DTD = ::javax::xml::stream::events::DTD;
using $EndDocument = ::javax::xml::stream::events::EndDocument;
using $EndElement = ::javax::xml::stream::events::EndElement;
using $EntityDeclaration = ::javax::xml::stream::events::EntityDeclaration;
using $EntityReference = ::javax::xml::stream::events::EntityReference;
using $Namespace = ::javax::xml::stream::events::Namespace;
using $ProcessingInstruction = ::javax::xml::stream::events::ProcessingInstruction;
using $StartDocument = ::javax::xml::stream::events::StartDocument;
using $StartElement = ::javax::xml::stream::events::StartElement;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

$FieldInfo _XMLEventFactoryImpl_FieldInfo_[] = {
	{"location", "Ljavax/xml/stream/Location;", nullptr, 0, $field(XMLEventFactoryImpl, location)},
	{}
};

$MethodInfo _XMLEventFactoryImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLEventFactoryImpl, init$, void)},
	{"createAttribute", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/Attribute;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createAttribute, $Attribute*, $String*, $String*)},
	{"createAttribute", "(Ljavax/xml/namespace/QName;Ljava/lang/String;)Ljavax/xml/stream/events/Attribute;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createAttribute, $Attribute*, $QName*, $String*)},
	{"createAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/Attribute;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createAttribute, $Attribute*, $String*, $String*, $String*, $String*)},
	{"createCData", "(Ljava/lang/String;)Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createCData, $Characters*, $String*)},
	{"createCharacters", "(Ljava/lang/String;)Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createCharacters, $Characters*, $String*)},
	{"createComment", "(Ljava/lang/String;)Ljavax/xml/stream/events/Comment;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createComment, $Comment*, $String*)},
	{"createDTD", "(Ljava/lang/String;)Ljavax/xml/stream/events/DTD;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createDTD, $DTD*, $String*)},
	{"createEndDocument", "()Ljavax/xml/stream/events/EndDocument;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createEndDocument, $EndDocument*)},
	{"createEndElement", "(Ljavax/xml/namespace/QName;Ljava/util/Iterator;)Ljavax/xml/stream/events/EndElement;", "(Ljavax/xml/namespace/QName;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)Ljavax/xml/stream/events/EndElement;", $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createEndElement, $EndElement*, $QName*, $Iterator*)},
	{"createEndElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/EndElement;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createEndElement, $EndElement*, $String*, $String*, $String*)},
	{"createEndElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator;)Ljavax/xml/stream/events/EndElement;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)Ljavax/xml/stream/events/EndElement;", $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createEndElement, $EndElement*, $String*, $String*, $String*, $Iterator*)},
	{"createEntityReference", "(Ljava/lang/String;Ljavax/xml/stream/events/EntityDeclaration;)Ljavax/xml/stream/events/EntityReference;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createEntityReference, $EntityReference*, $String*, $EntityDeclaration*)},
	{"createIgnorableSpace", "(Ljava/lang/String;)Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createIgnorableSpace, $Characters*, $String*)},
	{"createNamespace", "(Ljava/lang/String;)Ljavax/xml/stream/events/Namespace;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createNamespace, $Namespace*, $String*)},
	{"createNamespace", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/Namespace;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createNamespace, $Namespace*, $String*, $String*)},
	{"createProcessingInstruction", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/ProcessingInstruction;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createProcessingInstruction, $ProcessingInstruction*, $String*, $String*)},
	{"createSpace", "(Ljava/lang/String;)Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createSpace, $Characters*, $String*)},
	{"createStartDocument", "()Ljavax/xml/stream/events/StartDocument;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createStartDocument, $StartDocument*)},
	{"createStartDocument", "(Ljava/lang/String;)Ljavax/xml/stream/events/StartDocument;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createStartDocument, $StartDocument*, $String*)},
	{"createStartDocument", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/StartDocument;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createStartDocument, $StartDocument*, $String*, $String*)},
	{"createStartDocument", "(Ljava/lang/String;Ljava/lang/String;Z)Ljavax/xml/stream/events/StartDocument;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createStartDocument, $StartDocument*, $String*, $String*, bool)},
	{"createStartElement", "(Ljavax/xml/namespace/QName;Ljava/util/Iterator;Ljava/util/Iterator;)Ljavax/xml/stream/events/StartElement;", "(Ljavax/xml/namespace/QName;Ljava/util/Iterator<+Ljavax/xml/stream/events/Attribute;>;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)Ljavax/xml/stream/events/StartElement;", $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createStartElement, $StartElement*, $QName*, $Iterator*, $Iterator*)},
	{"createStartElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/StartElement;", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createStartElement, $StartElement*, $String*, $String*, $String*)},
	{"createStartElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator;Ljava/util/Iterator;)Ljavax/xml/stream/events/StartElement;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator<+Ljavax/xml/stream/events/Attribute;>;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)Ljavax/xml/stream/events/StartElement;", $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createStartElement, $StartElement*, $String*, $String*, $String*, $Iterator*, $Iterator*)},
	{"createStartElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator;Ljava/util/Iterator;Ljavax/xml/namespace/NamespaceContext;)Ljavax/xml/stream/events/StartElement;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator<+Ljavax/xml/stream/events/Attribute;>;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;Ljavax/xml/namespace/NamespaceContext;)Ljavax/xml/stream/events/StartElement;", $PUBLIC, $virtualMethod(XMLEventFactoryImpl, createStartElement, $StartElement*, $String*, $String*, $String*, $Iterator*, $Iterator*, $NamespaceContext*)},
	{"setLocation", "(Ljavax/xml/stream/Location;)V", nullptr, $PUBLIC, $virtualMethod(XMLEventFactoryImpl, setLocation, void, $Location*)},
	{}
};

$ClassInfo _XMLEventFactoryImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.XMLEventFactoryImpl",
	"javax.xml.stream.XMLEventFactory",
	nullptr,
	_XMLEventFactoryImpl_FieldInfo_,
	_XMLEventFactoryImpl_MethodInfo_
};

$Object* allocate$XMLEventFactoryImpl($Class* clazz) {
	return $of($alloc(XMLEventFactoryImpl));
}

void XMLEventFactoryImpl::init$() {
	$XMLEventFactory::init$();
	$set(this, location, nullptr);
}

$Attribute* XMLEventFactoryImpl::createAttribute($String* localName, $String* value) {
	$var($AttributeImpl, attr, $new($AttributeImpl, localName, value));
	if (this->location != nullptr) {
		attr->setLocation(this->location);
	}
	return attr;
}

$Attribute* XMLEventFactoryImpl::createAttribute($QName* name, $String* value) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(name)->getPrefix());
	$var($String, var$1, name->getNamespaceURI());
	return createAttribute(var$0, var$1, $(name->getLocalPart()), value);
}

$Attribute* XMLEventFactoryImpl::createAttribute($String* prefix, $String* namespaceURI, $String* localName, $String* value) {
	$var($AttributeImpl, attr, $new($AttributeImpl, prefix, namespaceURI, localName, value, ($String*)nullptr));
	if (this->location != nullptr) {
		attr->setLocation(this->location);
	}
	return attr;
}

$Characters* XMLEventFactoryImpl::createCData($String* content) {
	$var($CharacterEvent, charEvent, $new($CharacterEvent, content, true));
	if (this->location != nullptr) {
		charEvent->setLocation(this->location);
	}
	return charEvent;
}

$Characters* XMLEventFactoryImpl::createCharacters($String* content) {
	$var($CharacterEvent, charEvent, $new($CharacterEvent, content));
	if (this->location != nullptr) {
		charEvent->setLocation(this->location);
	}
	return charEvent;
}

$Comment* XMLEventFactoryImpl::createComment($String* text) {
	$var($CommentEvent, charEvent, $new($CommentEvent, text));
	if (this->location != nullptr) {
		charEvent->setLocation(this->location);
	}
	return charEvent;
}

$DTD* XMLEventFactoryImpl::createDTD($String* dtd) {
	$var($DTDEvent, dtdEvent, $new($DTDEvent, dtd));
	if (this->location != nullptr) {
		dtdEvent->setLocation(this->location);
	}
	return dtdEvent;
}

$EndDocument* XMLEventFactoryImpl::createEndDocument() {
	$var($EndDocumentEvent, event, $new($EndDocumentEvent));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$EndElement* XMLEventFactoryImpl::createEndElement($QName* name, $Iterator* namespaces) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(name)->getPrefix());
	$var($String, var$1, name->getNamespaceURI());
	return createEndElement(var$0, var$1, $(name->getLocalPart()));
}

$EndElement* XMLEventFactoryImpl::createEndElement($String* prefix, $String* namespaceUri, $String* localName) {
	$var($EndElementEvent, event, $new($EndElementEvent, prefix, namespaceUri, localName));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$EndElement* XMLEventFactoryImpl::createEndElement($String* prefix, $String* namespaceUri, $String* localName, $Iterator* namespaces) {
	$useLocalCurrentObjectStackCache();
	$var($EndElementEvent, event, $new($EndElementEvent, prefix, namespaceUri, localName));
	if (namespaces != nullptr) {
		while (namespaces->hasNext()) {
			event->addNamespace($cast($Namespace, $(namespaces->next())));
		}
	}
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$EntityReference* XMLEventFactoryImpl::createEntityReference($String* name, $EntityDeclaration* entityDeclaration) {
	$var($EntityReferenceEvent, event, $new($EntityReferenceEvent, name, entityDeclaration));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$Characters* XMLEventFactoryImpl::createIgnorableSpace($String* content) {
	$var($CharacterEvent, event, $new($CharacterEvent, content, false, true));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$Namespace* XMLEventFactoryImpl::createNamespace($String* namespaceURI) {
	$var($NamespaceImpl, event, $new($NamespaceImpl, namespaceURI));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$Namespace* XMLEventFactoryImpl::createNamespace($String* prefix, $String* namespaceURI) {
	$var($NamespaceImpl, event, $new($NamespaceImpl, prefix, namespaceURI));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$ProcessingInstruction* XMLEventFactoryImpl::createProcessingInstruction($String* target, $String* data) {
	$var($ProcessingInstructionEvent, event, $new($ProcessingInstructionEvent, target, data));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$Characters* XMLEventFactoryImpl::createSpace($String* content) {
	$var($CharacterEvent, event, $new($CharacterEvent, content));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$StartDocument* XMLEventFactoryImpl::createStartDocument() {
	$var($StartDocumentEvent, event, $new($StartDocumentEvent));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$StartDocument* XMLEventFactoryImpl::createStartDocument($String* encoding) {
	$var($StartDocumentEvent, event, $new($StartDocumentEvent, encoding));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$StartDocument* XMLEventFactoryImpl::createStartDocument($String* encoding, $String* version) {
	$var($StartDocumentEvent, event, $new($StartDocumentEvent, encoding, version));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$StartDocument* XMLEventFactoryImpl::createStartDocument($String* encoding, $String* version, bool standalone) {
	$var($StartDocumentEvent, event, $new($StartDocumentEvent, encoding, version, standalone));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$StartElement* XMLEventFactoryImpl::createStartElement($QName* name, $Iterator* attributes, $Iterator* namespaces) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(name)->getPrefix());
	$var($String, var$1, name->getNamespaceURI());
	return createStartElement(var$0, var$1, $(name->getLocalPart()), attributes, namespaces);
}

$StartElement* XMLEventFactoryImpl::createStartElement($String* prefix, $String* namespaceUri, $String* localName) {
	$var($StartElementEvent, event, $new($StartElementEvent, prefix, namespaceUri, localName));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$StartElement* XMLEventFactoryImpl::createStartElement($String* prefix, $String* namespaceUri, $String* localName, $Iterator* attributes, $Iterator* namespaces) {
	return createStartElement(prefix, namespaceUri, localName, attributes, namespaces, nullptr);
}

$StartElement* XMLEventFactoryImpl::createStartElement($String* prefix, $String* namespaceUri, $String* localName, $Iterator* attributes, $Iterator* namespaces, $NamespaceContext* context) {
	$var($StartElementEvent, elem, $new($StartElementEvent, prefix, namespaceUri, localName));
	elem->addAttributes(attributes);
	elem->addNamespaceAttributes(namespaces);
	elem->setNamespaceContext(context);
	if (this->location != nullptr) {
		elem->setLocation(this->location);
	}
	return elem;
}

void XMLEventFactoryImpl::setLocation($Location* location) {
	$set(this, location, location);
}

XMLEventFactoryImpl::XMLEventFactoryImpl() {
}

$Class* XMLEventFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(XMLEventFactoryImpl, name, initialize, &_XMLEventFactoryImpl_ClassInfo_, allocate$XMLEventFactoryImpl);
	return class$;
}

$Class* XMLEventFactoryImpl::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com