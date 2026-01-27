#include <javax/xml/stream/EventFilter.h>

#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace javax {
	namespace xml {
		namespace stream {

$MethodInfo _EventFilter_MethodInfo_[] = {
	{"accept", "(Ljavax/xml/stream/events/XMLEvent;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EventFilter, accept, bool, $XMLEvent*)},
	{}
};

$ClassInfo _EventFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.EventFilter",
	nullptr,
	nullptr,
	nullptr,
	_EventFilter_MethodInfo_
};

$Object* allocate$EventFilter($Class* clazz) {
	return $of($alloc(EventFilter));
}

$Class* EventFilter::load$($String* name, bool initialize) {
	$loadClass(EventFilter, name, initialize, &_EventFilter_ClassInfo_, allocate$EventFilter);
	return class$;
}

$Class* EventFilter::class$ = nullptr;

		} // stream
	} // xml
} // javax