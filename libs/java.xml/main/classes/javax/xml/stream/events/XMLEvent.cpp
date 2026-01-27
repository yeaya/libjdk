#include <javax/xml/stream/events/XMLEvent.h>

#include <java/io/Writer.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/StartElement.h>
#include <jcpp.h>

using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $QName = ::javax::xml::namespace$::QName;
using $Location = ::javax::xml::stream::Location;
using $Characters = ::javax::xml::stream::events::Characters;
using $EndElement = ::javax::xml::stream::events::EndElement;
using $StartElement = ::javax::xml::stream::events::StartElement;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$MethodInfo _XMLEvent_MethodInfo_[] = {
	{"asCharacters", "()Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEvent, asCharacters, $Characters*)},
	{"asEndElement", "()Ljavax/xml/stream/events/EndElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEvent, asEndElement, $EndElement*)},
	{"asStartElement", "()Ljavax/xml/stream/events/StartElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEvent, asStartElement, $StartElement*)},
	{"getEventType", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEvent, getEventType, int32_t)},
	{"getLocation", "()Ljavax/xml/stream/Location;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEvent, getLocation, $Location*)},
	{"getSchemaType", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEvent, getSchemaType, $QName*)},
	{"isAttribute", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEvent, isAttribute, bool)},
	{"isCharacters", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEvent, isCharacters, bool)},
	{"isEndDocument", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEvent, isEndDocument, bool)},
	{"isEndElement", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEvent, isEndElement, bool)},
	{"isEntityReference", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEvent, isEntityReference, bool)},
	{"isNamespace", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEvent, isNamespace, bool)},
	{"isProcessingInstruction", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEvent, isProcessingInstruction, bool)},
	{"isStartDocument", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEvent, isStartDocument, bool)},
	{"isStartElement", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEvent, isStartElement, bool)},
	{"writeAsEncodedUnicode", "(Ljava/io/Writer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEvent, writeAsEncodedUnicode, void, $Writer*), "javax.xml.stream.XMLStreamException"},
	{}
};

$ClassInfo _XMLEvent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.XMLEvent",
	nullptr,
	"javax.xml.stream.XMLStreamConstants",
	nullptr,
	_XMLEvent_MethodInfo_
};

$Object* allocate$XMLEvent($Class* clazz) {
	return $of($alloc(XMLEvent));
}

$Class* XMLEvent::load$($String* name, bool initialize) {
	$loadClass(XMLEvent, name, initialize, &_XMLEvent_ClassInfo_, allocate$XMLEvent);
	return class$;
}

$Class* XMLEvent::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax