#include <javax/xml/stream/events/StartDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$Class* StartDocument::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"encodingSet", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartDocument, encodingSet, bool)},
		{"getCharacterEncodingScheme", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartDocument, getCharacterEncodingScheme, $String*)},
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartDocument, getSystemId, $String*)},
		{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartDocument, getVersion, $String*)},
		{"isStandalone", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartDocument, isStandalone, bool)},
		{"standaloneSet", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartDocument, standaloneSet, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.events.StartDocument",
		nullptr,
		"javax.xml.stream.events.XMLEvent",
		nullptr,
		methodInfos$$
	};
	$loadClass(StartDocument, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StartDocument);
	});
	return class$;
}

$Class* StartDocument::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax