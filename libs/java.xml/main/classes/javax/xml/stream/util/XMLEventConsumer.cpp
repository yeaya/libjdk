#include <javax/xml/stream/util/XMLEventConsumer.h>

#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace javax {
	namespace xml {
		namespace stream {
			namespace util {

$MethodInfo _XMLEventConsumer_MethodInfo_[] = {
	{"add", "(Ljavax/xml/stream/events/XMLEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventConsumer, add, void, $XMLEvent*), "javax.xml.stream.XMLStreamException"},
	{}
};

$ClassInfo _XMLEventConsumer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.util.XMLEventConsumer",
	nullptr,
	nullptr,
	nullptr,
	_XMLEventConsumer_MethodInfo_
};

$Object* allocate$XMLEventConsumer($Class* clazz) {
	return $of($alloc(XMLEventConsumer));
}

$Class* XMLEventConsumer::load$($String* name, bool initialize) {
	$loadClass(XMLEventConsumer, name, initialize, &_XMLEventConsumer_ClassInfo_, allocate$XMLEventConsumer);
	return class$;
}

$Class* XMLEventConsumer::class$ = nullptr;

			} // util
		} // stream
	} // xml
} // javax