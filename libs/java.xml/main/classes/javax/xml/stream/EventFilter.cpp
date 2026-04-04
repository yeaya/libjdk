#include <javax/xml/stream/EventFilter.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace javax {
	namespace xml {
		namespace stream {

$Class* EventFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Ljavax/xml/stream/events/XMLEvent;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EventFilter, accept, bool, $XMLEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.EventFilter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EventFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventFilter);
	});
	return class$;
}

$Class* EventFilter::class$ = nullptr;

		} // stream
	} // xml
} // javax