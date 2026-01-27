#include <javax/xml/stream/events/EndDocument.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$ClassInfo _EndDocument_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.EndDocument",
	nullptr,
	"javax.xml.stream.events.XMLEvent"
};

$Object* allocate$EndDocument($Class* clazz) {
	return $of($alloc(EndDocument));
}

$Class* EndDocument::load$($String* name, bool initialize) {
	$loadClass(EndDocument, name, initialize, &_EndDocument_ClassInfo_, allocate$EndDocument);
	return class$;
}

$Class* EndDocument::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax