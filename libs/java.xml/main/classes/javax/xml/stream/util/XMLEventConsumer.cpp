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

$Class* XMLEventConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"add", "(Ljavax/xml/stream/events/XMLEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventConsumer, add, void, $XMLEvent*), "javax.xml.stream.XMLStreamException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.util.XMLEventConsumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLEventConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLEventConsumer);
	});
	return class$;
}

$Class* XMLEventConsumer::class$ = nullptr;

			} // util
		} // stream
	} // xml
} // javax