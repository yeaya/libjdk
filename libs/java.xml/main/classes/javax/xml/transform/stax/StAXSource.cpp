#include <javax/xml/transform/stax/StAXSource.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLStreamConstants.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef FEATURE
#undef START_DOCUMENT
#undef START_ELEMENT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Location = ::javax::xml::stream::Location;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLStreamConstants = ::javax::xml::stream::XMLStreamConstants;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace javax {
	namespace xml {
		namespace transform {
			namespace stax {

$FieldInfo _StAXSource_FieldInfo_[] = {
	{"FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StAXSource, FEATURE)},
	{"xmlEventReader", "Ljavax/xml/stream/XMLEventReader;", nullptr, $PRIVATE, $field(StAXSource, xmlEventReader)},
	{"xmlStreamReader", "Ljavax/xml/stream/XMLStreamReader;", nullptr, $PRIVATE, $field(StAXSource, xmlStreamReader)},
	{"systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StAXSource, systemId)},
	{}
};

$MethodInfo _StAXSource_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/stream/XMLEventReader;)V", nullptr, $PUBLIC, $method(StAXSource, init$, void, $XMLEventReader*), "javax.xml.stream.XMLStreamException"},
	{"<init>", "(Ljavax/xml/stream/XMLStreamReader;)V", nullptr, $PUBLIC, $method(StAXSource, init$, void, $XMLStreamReader*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StAXSource, getSystemId, $String*)},
	{"getXMLEventReader", "()Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC, $virtualMethod(StAXSource, getXMLEventReader, $XMLEventReader*)},
	{"getXMLStreamReader", "()Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC, $virtualMethod(StAXSource, getXMLStreamReader, $XMLStreamReader*)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(StAXSource, isEmpty, bool)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(StAXSource, setSystemId, void, $String*)},
	{}
};

$ClassInfo _StAXSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.transform.stax.StAXSource",
	"java.lang.Object",
	"javax.xml.transform.Source",
	_StAXSource_FieldInfo_,
	_StAXSource_MethodInfo_
};

$Object* allocate$StAXSource($Class* clazz) {
	return $of($alloc(StAXSource));
}

$String* StAXSource::FEATURE = nullptr;

void StAXSource::init$($XMLEventReader* xmlEventReader) {
	$useLocalCurrentObjectStackCache();
	$set(this, xmlEventReader, nullptr);
	$set(this, xmlStreamReader, nullptr);
	$set(this, systemId, nullptr);
	if (xmlEventReader == nullptr) {
		$throwNew($IllegalArgumentException, "StAXSource(XMLEventReader) with XMLEventReader == null"_s);
	}
	$var($XMLEvent, event, $nc(xmlEventReader)->peek());
	int32_t eventType = $nc(event)->getEventType();
	if (eventType != $XMLStreamConstants::START_DOCUMENT && eventType != $XMLStreamConstants::START_ELEMENT) {
		$throwNew($IllegalStateException, "StAXSource(XMLEventReader) with XMLEventReader not in XMLStreamConstants.START_DOCUMENT or XMLStreamConstants.START_ELEMENT state"_s);
	}
	$set(this, xmlEventReader, xmlEventReader);
	$set(this, systemId, $nc($(event->getLocation()))->getSystemId());
}

void StAXSource::init$($XMLStreamReader* xmlStreamReader) {
	$set(this, xmlEventReader, nullptr);
	$set(this, xmlStreamReader, nullptr);
	$set(this, systemId, nullptr);
	if (xmlStreamReader == nullptr) {
		$throwNew($IllegalArgumentException, "StAXSource(XMLStreamReader) with XMLStreamReader == null"_s);
	}
	int32_t eventType = $nc(xmlStreamReader)->getEventType();
	if (eventType != $XMLStreamConstants::START_DOCUMENT && eventType != $XMLStreamConstants::START_ELEMENT) {
		$throwNew($IllegalStateException, "StAXSource(XMLStreamReader) with XMLStreamReadernot in XMLStreamConstants.START_DOCUMENT or XMLStreamConstants.START_ELEMENT state"_s);
	}
	$set(this, xmlStreamReader, xmlStreamReader);
	$set(this, systemId, $nc($(xmlStreamReader->getLocation()))->getSystemId());
}

$XMLEventReader* StAXSource::getXMLEventReader() {
	return this->xmlEventReader;
}

$XMLStreamReader* StAXSource::getXMLStreamReader() {
	return this->xmlStreamReader;
}

void StAXSource::setSystemId($String* systemId) {
	$throwNew($UnsupportedOperationException, "StAXSource#setSystemId(systemId) cannot set the system identifier for a StAXSource"_s);
}

$String* StAXSource::getSystemId() {
	return this->systemId;
}

bool StAXSource::isEmpty() {
	return false;
}

StAXSource::StAXSource() {
}

void clinit$StAXSource($Class* class$) {
	$assignStatic(StAXSource::FEATURE, "http://javax.xml.transform.stax.StAXSource/feature"_s);
}

$Class* StAXSource::load$($String* name, bool initialize) {
	$loadClass(StAXSource, name, initialize, &_StAXSource_ClassInfo_, clinit$StAXSource, allocate$StAXSource);
	return class$;
}

$Class* StAXSource::class$ = nullptr;

			} // stax
		} // transform
	} // xml
} // javax