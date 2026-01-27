#include <javax/xml/stream/StreamFilter.h>

#include <javax/xml/stream/XMLStreamReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;

namespace javax {
	namespace xml {
		namespace stream {

$MethodInfo _StreamFilter_MethodInfo_[] = {
	{"accept", "(Ljavax/xml/stream/XMLStreamReader;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StreamFilter, accept, bool, $XMLStreamReader*)},
	{}
};

$ClassInfo _StreamFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.StreamFilter",
	nullptr,
	nullptr,
	nullptr,
	_StreamFilter_MethodInfo_
};

$Object* allocate$StreamFilter($Class* clazz) {
	return $of($alloc(StreamFilter));
}

$Class* StreamFilter::load$($String* name, bool initialize) {
	$loadClass(StreamFilter, name, initialize, &_StreamFilter_ClassInfo_, allocate$StreamFilter);
	return class$;
}

$Class* StreamFilter::class$ = nullptr;

		} // stream
	} // xml
} // javax