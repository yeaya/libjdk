#include <javax/xml/stream/events/StartDocument.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$MethodInfo _StartDocument_MethodInfo_[] = {
	{"encodingSet", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartDocument, encodingSet, bool)},
	{"getCharacterEncodingScheme", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartDocument, getCharacterEncodingScheme, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartDocument, getSystemId, $String*)},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartDocument, getVersion, $String*)},
	{"isStandalone", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartDocument, isStandalone, bool)},
	{"standaloneSet", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartDocument, standaloneSet, bool)},
	{}
};

$ClassInfo _StartDocument_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.StartDocument",
	nullptr,
	"javax.xml.stream.events.XMLEvent",
	nullptr,
	_StartDocument_MethodInfo_
};

$Object* allocate$StartDocument($Class* clazz) {
	return $of($alloc(StartDocument));
}

$Class* StartDocument::load$($String* name, bool initialize) {
	$loadClass(StartDocument, name, initialize, &_StartDocument_ClassInfo_, allocate$StartDocument);
	return class$;
}

$Class* StartDocument::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax