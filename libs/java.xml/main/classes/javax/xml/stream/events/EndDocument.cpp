#include <javax/xml/stream/events/EndDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$Class* EndDocument::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.events.EndDocument",
		nullptr,
		"javax.xml.stream.events.XMLEvent"
	};
	$loadClass(EndDocument, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EndDocument);
	});
	return class$;
}

$Class* EndDocument::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax