#include <javax/xml/stream/StreamFilter.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;

namespace javax {
	namespace xml {
		namespace stream {

$Class* StreamFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Ljavax/xml/stream/XMLStreamReader;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StreamFilter, accept, bool, $XMLStreamReader*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.StreamFilter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(StreamFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamFilter);
	});
	return class$;
}

$Class* StreamFilter::class$ = nullptr;

		} // stream
	} // xml
} // javax