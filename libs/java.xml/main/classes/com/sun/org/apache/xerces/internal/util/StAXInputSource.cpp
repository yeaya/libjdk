#include <com/sun/org/apache/xerces/internal/util/StAXInputSource.h>

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Location = ::javax::xml::stream::Location;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _StAXInputSource_FieldInfo_[] = {
	{"fStreamReader", "Ljavax/xml/stream/XMLStreamReader;", nullptr, $PRIVATE | $FINAL, $field(StAXInputSource, fStreamReader)},
	{"fEventReader", "Ljavax/xml/stream/XMLEventReader;", nullptr, $PRIVATE | $FINAL, $field(StAXInputSource, fEventReader)},
	{"fConsumeRemainingContent", "Z", nullptr, $PRIVATE | $FINAL, $field(StAXInputSource, fConsumeRemainingContent)},
	{}
};

$MethodInfo _StAXInputSource_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/stream/XMLStreamReader;)V", nullptr, $PUBLIC, $method(StAXInputSource, init$, void, $XMLStreamReader*)},
	{"<init>", "(Ljavax/xml/stream/XMLStreamReader;Z)V", nullptr, $PUBLIC, $method(StAXInputSource, init$, void, $XMLStreamReader*, bool)},
	{"<init>", "(Ljavax/xml/stream/XMLEventReader;)V", nullptr, $PUBLIC, $method(StAXInputSource, init$, void, $XMLEventReader*)},
	{"<init>", "(Ljavax/xml/stream/XMLEventReader;Z)V", nullptr, $PUBLIC, $method(StAXInputSource, init$, void, $XMLEventReader*, bool)},
	{"getEventReaderSystemId", "(Ljavax/xml/stream/XMLEventReader;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(StAXInputSource, getEventReaderSystemId, $String*, $XMLEventReader*)},
	{"getXMLEventReader", "()Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC, $method(StAXInputSource, getXMLEventReader, $XMLEventReader*)},
	{"getXMLStreamReader", "()Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC, $method(StAXInputSource, getXMLStreamReader, $XMLStreamReader*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(StAXInputSource, setSystemId, void, $String*)},
	{"shouldConsumeRemainingContent", "()Z", nullptr, $PUBLIC, $method(StAXInputSource, shouldConsumeRemainingContent, bool)},
	{}
};

$ClassInfo _StAXInputSource_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.StAXInputSource",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLInputSource",
	nullptr,
	_StAXInputSource_FieldInfo_,
	_StAXInputSource_MethodInfo_
};

$Object* allocate$StAXInputSource($Class* clazz) {
	return $of($alloc(StAXInputSource));
}

void StAXInputSource::init$($XMLStreamReader* source) {
	StAXInputSource::init$(source, false);
}

void StAXInputSource::init$($XMLStreamReader* source, bool consumeRemainingContent) {
	$useLocalCurrentObjectStackCache();
	$XMLInputSource::init$(nullptr, $($nc($($nc(source)->getLocation()))->getSystemId()), nullptr, false);
	if (source == nullptr) {
		$throwNew($IllegalArgumentException, "XMLStreamReader parameter cannot be null."_s);
	}
	$set(this, fStreamReader, source);
	$set(this, fEventReader, nullptr);
	this->fConsumeRemainingContent = consumeRemainingContent;
}

void StAXInputSource::init$($XMLEventReader* source) {
	StAXInputSource::init$(source, false);
}

void StAXInputSource::init$($XMLEventReader* source, bool consumeRemainingContent) {
	$XMLInputSource::init$(nullptr, $(getEventReaderSystemId(source)), nullptr, false);
	if (source == nullptr) {
		$throwNew($IllegalArgumentException, "XMLEventReader parameter cannot be null."_s);
	}
	$set(this, fStreamReader, nullptr);
	$set(this, fEventReader, source);
	this->fConsumeRemainingContent = consumeRemainingContent;
}

$XMLStreamReader* StAXInputSource::getXMLStreamReader() {
	return this->fStreamReader;
}

$XMLEventReader* StAXInputSource::getXMLEventReader() {
	return this->fEventReader;
}

bool StAXInputSource::shouldConsumeRemainingContent() {
	return this->fConsumeRemainingContent;
}

void StAXInputSource::setSystemId($String* systemId) {
	$throwNew($UnsupportedOperationException, "Cannot set the system ID on a StAXInputSource"_s);
}

$String* StAXInputSource::getEventReaderSystemId($XMLEventReader* reader) {
	$init(StAXInputSource);
	$useLocalCurrentObjectStackCache();
	try {
		if (reader != nullptr) {
			return $nc($($nc($(reader->peek()))->getLocation()))->getSystemId();
		}
	} catch ($XMLStreamException& e) {
	}
	return nullptr;
}

StAXInputSource::StAXInputSource() {
}

$Class* StAXInputSource::load$($String* name, bool initialize) {
	$loadClass(StAXInputSource, name, initialize, &_StAXInputSource_ClassInfo_, allocate$StAXInputSource);
	return class$;
}

$Class* StAXInputSource::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com